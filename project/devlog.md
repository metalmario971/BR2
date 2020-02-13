## TODO list
* TODO - Instead of hard code vertex interleaved formats, allow us to supply multiple buffers for the vertex components (n,v,t..)
* TODO - Move all STL header files DOWN into the respective CPP files that need them. This will speed-up compilation time a lot.
* TODO - detach Camera viewport from Window viewport so the camera can render independently (offscreen) of whichever window it's rendering to.  This would mean creating a CameraViewport class, and passing w/h into the camera.

## Currently Working On..
1. Unlink the Window viewport with the Camera Viewport.  
	* This requires us to upate RenderPipeline, and also Frustum class.
2. MeshNode/MeshSpec, should be one class.  To create new meshes, we'd do a shallow copy of the class.
	* The same goes for all the Spec/Data model classes.  We follow a Blender style Object/Data/User pattern.
4. Remove WorldObject class inheritance, and favor composition like Unity does.  Managers will hold onto components.
	* WorldObject will be composited by other items and not inherited.
5. Simplifying the UI to work with the UI design for this game.  Updating UI performance.

*2/13/2020*
* Separating camera and window viewport.
	The only reason camera uses the window viewport, is to update it.
	The only reason frustum uses viewport is to calculate the frustum geometry, which can be calculated simply by passing the camera FOV, Near/far.
	We must also consider that the game's camera aspect ratio is way off.  This is partially due to the window/camera viewport dependency.

	Frustum can be a class off of viewport.
	Or an independent class (probably better this way)
	Frustums also used for shadow boxes.

	class Frustum()

*2/12/2020*
* New file structure looks like this.
* /My Documents
    * /BR2
        * config.xml
            * /projects
            * /default
                * /cache
                * package.xml

* Removed the app package's cache, and config.  these should really be hard coded.
* Fully Replaced AppMain with Scene().
* Got a majority of the replaced code to compile.
* Unfortunately, OpenGL contexts require a Window in SDL.  This is similar functionality with Windows OpenGL which requires a DC.  A good reason, if any, to switch to Vulkan.
* Fully reimplemented project paths in the ApplicationPackage.
* Started a StringWrapper class, but abandoned.  *NOTE* StringWrapper was needed for hash algorithms. Without it, we're flying blind by possible hash collisions in _HashMap_. 
* Renamed engine, and namespace to "BR2" 

*2/11/2020*
* Removed "app"
* Moved contextual managers back into GLContext.
* Removed generic "GraphicsContext" in favor of using GLContext (sorry, vulkan, maybe later).
* Moved the app's filesystem directories into Package.
* Moved more stuff around.
* Renamed Package to ApplicationPackage.  It's an application, but it's also 'packed' so settled on AppPackage.

*2/7/2020*
* Scene

GLContext
	Shaders, texture, models, renderpipe, particle manager, PhysicsWorld (as its gpu accellerated), picker (uses buffers)

*2/6/2020*
* Use Screen to represent a UI window.
* Move Gui2d to Gu
* Undo changes.  Gui2d is actually Screen.
* Rename Gui2d to screen
* add Screen(s) to a new Gui2d class.

* TabButton - the basic of the UI
* TODO Make the ui text not shrink vertically based on window size.  
* TODO make the window not squash horizontally (keep the horizontal ratio)

* We need to make the render system "windows" more modular.  Like, we need to create multiple windows if needed.

* WindowManager
    * Get rid of "OpenGL Api" we don't need that.. right.

* Moved Window control to applciation (not in the main core)
* Removed Mob to Bin converter (apprunner.cpp)
* Removed Cycle Logging in Logger.cpp


*12/29/19*
* Began simple port to Make and CMake with gcc.  Fix this in the future.  The one caveat here is still debugging with VS. 
* VS allows a CMake project, but it doesn't appear as lightweight as a simple makefile.

* Previously we removed the custom app class instantiation in preparation for 
	1 - a scripting engine 
	2 - Multiple graphics windows 
	3 - Split window view (blender)

* We converted Shake thus to its own EXE.  It's no longer a library.

*8/23/19*
* Remove most of AppBase and move to ProjectFile.
* Move remaining AppBase contents into ProjectFile
* Remove "AppBase" or make it ProjectBase. Sth.
* Generic Windowing for UI popups.
* move RenderPipe to Window
* Rendering multiple windows
* need multiple contexts
* shaders & Everything need to be changed...

*8/14/19*
In FlyCam make the FlyCam a Script Run on top of CameraNode
	Remove FlyCam Class.

*8/11/19*
* Rebooted "BR2" Graphics Engine Project
* Adding a Window layer,
* replacing Viewport with WindowViewport to differentiate between window and render viewport 
* this is in preparation for multiple viewports for the UI system.
* having a problem with teh file SDL.h because it conflicts.
* added <SDL> from a more absolute path.
* Todo: merge engine and apprunner
* For split view need
* Image Dropdown like blender
* remove "udim"
