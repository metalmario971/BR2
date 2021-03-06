
### Notes

* Package loading is done automatically right now since this engine is being programmed specifically for the specified game design.  It's possible, however, to load individual packages in the case there are multiple games.
* Multiple Rendering in a single area is going to be important.
* PBOs allow for async texture rendering.  PBO stands for Pixel Buffer Object. It allows you to upload a texture to GL in a asynchronous fashion which means that calls to glTexImage2D are instantaneous. 
"https://www.khronos.org/opengl/wiki/OpenGL_and_multithreading"
* GL contexts can share most data.  VAOs and Framebuffers cannot be shared.  For this reason, RenderPipeline, and Picker (which uses a pipe buffer), exist only on GraphicsWindow.

- [ ] Scene Removal.  
	- [ ] Convert PhysicsWorld into the scene.
	- [ ] Replace Scnee with PhysicsWorld on Window
	- [ ] Optionally, rename it. 
- [ ] Modular Rendering

* We are removing the "strict" scenegraph approach.  The scene is rendered via collection first and foremost.
* Our goal with modular rendering is to be able to render any "node" or node collection adding, or removing any RenderPipe states (such as shadows).
	* We do this by running a "collect" on the scene.
		Collects all visible SceneNode
		Places Mesh inside a separate list (for drawing)
	* Then we render each collected item based on its render setup.
		RP-> bind correct FBO
		bind Shader
		bind Uniforms
		draw the mesh

* Orphan Support
	* All grids need to be created where the camera is.  We need a way to allow for objects to be present outside of grids.
	* Currently we only support objects that are fully enclosed in the world.  This poses a problem for instance if an object gets launched, or totally empty nodes.
	* Add a "dirty" flag on the object to tell if the object manifold is dirty.

* We are not going to remove all draw calls from all nodes.  All nodes have the ability to draw when they are iterated. (Even though it doesn't make sense)

* We will remove Scene (scenegraph) and replace it with PhysicsManager.   
	* Scene has literally no use.  
		* We do not use a scenegraph for anything. 
		* It duplicates the optimized object collections from PhysicsManager
		* Our culling algorithm uses a frustum sweep, and manifold gather method.
		* It is just unnnecessary complicated overhead  .
		* Essentialy it's the same thing as the physicsmanager, just more generic.
	* Rendering stays the same, but we are going to change the culling method to cull asynrhonously:
		* Sweep all renderable camera frustums C, async, collect grids G, objects O, lights L, into MASTER
			* Sort by distance from camera.
		* Fence
		* For all L sweep all shadow frustums async, collect grids G2, objects O2
		* Fence
		* for all L, 
		*  for all O2, G2
		*   Render shadows into Sx
		* for all MASTER
		*  draw Sx, G, O
	* Util Meshes can be rendered by calling hte PhysicsManager rendering methods.  PhysicsManager is thus the powerhorse of the whole system.

	1. The question is how to render Util Meshes
		RenderSlot(PipeBit::Deferred)
		REndering is done when the node itself is updated, and it's ordered by the node's order in the scene.
		But we want util meshes to have whatever order.
		So make UtilMesh a Node.  Add it to PhysicsWorld, render like an object.
		But we want to be able to call it whenever
		*Model Node also has a drawing routine on it.
		***I think the way we had it was correct.  SceneNodes render themselves when they are called. 
		The only incorrect thing we had was the Scene.  There is no SceneGraph as it doesn't make sense to have one.'***

	2. How to facilitate the custom rendering steps:
		Binding of custom UFs
		Binding of custom shaders.

One thing is that we can modularize the rendering system by removing the draw calls from all nodes.  This would be a DrawSlot in the RenderPipe.
	enum DrawMode { Deferred, FOrward, UI, etc }
	
	DrawMode | Distance | Material | DrawSlot
	
	**In back-to-front rendering the distance would take precedence over the material**

	2 Kinds of Draw Batches
	typedef map<DrawMode (enum), std::map<float (distance to camera), DrawSlot*>> DistanceBatch
	typedef map<DrawMode (enum), std::map<Material*, DrawSlot*>> MaterialBatch

	Distance slots are iterated back to front, and used for Non-Depth rendering.  (we can't batch by material when we are drawing back to front in order)
		DistanceBatch _distBatch;
	Material slots are iterated by material and used for Depth-based rendering
		MaterialBatch _matBatch

	**Uniform Optimization System**
		Binding uniforms if they are different.  THis will optimize the uniform bindings.

	...
	beginDrawDeferred **Material
	for each DrawSlot[deferred] M, D
			M->bind
				Bind shader
				Bind uniforms if different ***
			drawslot->draw
	endDrawDeferred
	...
	beginDrawTransparent **Transparent
	for each DrawSlot[transparent]
		foreach DrawSlot (by distance) D
			D->material->bind
				Bind shader
				Bind uniforms
			D->draw
	endDrawDeferred
	
# Rendering Notes

We need to move the visible object collection to Scene.
We need to integrate scnee with PhysicsWorld to have 1 object place.
This does not support generic rendering however.  We can't render just anything with this design.
Culling must take place hierarchically, this would mean, that we would need to attach globs to the scene.  Or at a minmum, instead of passing a Drawable to the
Renderpipe, we pass a set of collected objects (first pass)
The first pass set, will have all lights and such.
There is no need for scenegraph.
Scenegraph is useful for models themselves (Model Graph) but it is uselesss for speedy generic world rendering.

So instead of calling Renderpipe->drawScene()
we call RenderPipe->draw(RenderBucket.)

SceneGraph + PhysicsWorld integration
	Fix the "attached" methods after attached to scene
		The same methods will exist (attached and detached) but instead of adding to scenegraph we will add it to object array.
	Move UI to renderpipe
	Move all other drawing to renderpipe
	Move DrawBackgroundImage to renderpipe.

	Then again, the ObjMap isn't used in any special way.  So why would it matter?

	*****Object manifold determines object visibility*****
		Just find all grids first
		then find all nodes.
		Object map is just a map that we can easily find all objects.

	***** Physics should work using Dotsim *****
		Point based simulation for all objects.
		Asynchronous and easy to update.
		Discrete.

	Algorithm is..?
	For each window.
		For the active camera frustum
			collect everything
		for all things, ASYNC
			for each additional frustum (mirror,  or light frustum) collect everything ASYNC
		FENCE ( future.wait())


