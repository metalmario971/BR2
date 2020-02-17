/**
*  @file Node3base.h
*  @date November 25, 2016
*  @author MetalMario971
*/
#pragma once
#ifndef __NODE3BASE_14801270783276389065_H__
#define __NODE3BASE_14801270783276389065_H__

#include "../base/BaseHeader.h"
#include "../math/MathHeader.h"
#include "../gfx/GfxHeader.h"
#include "../model/ModelHeader.h"
#include "../world/WorldHeader.h"
#include "../math/Vec3x.h"
#include "../math/Matrix4x4.h"
#include "../base/TreeNode.h"

namespace BR2 {
/**
*  @class BaseNode
*  @brief The base class for nodes in the scenegraph. @sa Scene
*/
class SceneNode : public TreeNode {
public:
  SceneNode();
  SceneNode(std::shared_ptr<NodeData> data);
  virtual ~SceneNode() override;

  virtual void update(float delta, std::map<Hash32, std::shared_ptr<Animator>>& mapAnimators);
  void compileWorldMatrix();
  virtual void calcBoundBox();
  virtual void calcBoundBox(Box3f& __out_ pBox, const vec3& obPos, float extra_pad);
  void setBoneParent(std::shared_ptr<BoneNode> bn) { _pBoneParent = bn; }
  std::shared_ptr<BoneNode> getBoneParent() { return _pBoneParent; }

  virtual void drawDeferred(RenderParams& rp) override;
  virtual void drawForward(RenderParams& rp) override;
  virtual void drawShadow(RenderParams& rp) override;
  virtual void drawForwardDebug(RenderParams& rp) override;
  virtual void drawNonDepth(RenderParams& rp) override;
  virtual void drawTransparent(RenderParams& rp) override;

  void setHidden(bool bHidden) { _bHidden = bHidden; }
  bool getHidden() { return _bHidden; }

  template < typename Tx > std::shared_ptr<Tx> getData() {
    return std::dynamic_pointer_cast<Tx>(_pNodeData);
  }
  NodeId getId() { return _iNodeId; }
  OBB* getOBB() { return _pOBB; }
  Box3f* getBoundBoxObject() { return _pBox; }
  const vec3& getPos() { return _vPos; }
  void setPos(const vec3&& p) {
    _vLastPos = _vPos;
    _vPos = p;
    _bTransformChanged = true;
  }
  vec3 getViewNormal() { return _vViewNormal; }
  void setViewNormal(vec3& p) {
    _vViewNormal = p;
    _bTransformChanged = true;
  }
  void setScale(vec3& v) {
    _vScale = v;
    _bTransformChanged = true;
  }
  vec3 getScale() { return _vScale; }
  bool getTransformChanged() { return _bTransformChanged; }
  //  void resetTransformChanged() { _bTransformChanged = false; }

  void setRot(vec4&& axis_angle_radians) {
    _vRotationNormal = axis_angle_radians.xyz();
    _fRotation = axis_angle_radians.w;
  }
  std::shared_ptr<NodeData> getNodeData() { return _pNodeData; }
  mat4& getLocal() { return _mLocal; }
  mat4& getWorld() { return _mWorld; }
  mat4& getAnimated() { return _mAnimated; }
  //mat4& getFinal() {return _mFinal;}
  bool isMeshNode();
  bool isBoneNode();
  bool isArmatureNode();
  bool isSkinnedMesh();
  bool isLightNode();
  bool isModelNode();
  bool isCameraNode();
  std::shared_ptr<Scene> getScene();
  string_t getName();
  Hash32 getSpecNameHashed();
  void drawBoxes(std::shared_ptr<UtilMeshInline> mi);
  void drawBox(std::shared_ptr<UtilMeshInline> mi);
  void drawBoneBindBoxes(std::shared_ptr<ArmatureNode> an, std::shared_ptr<UtilMeshInline> mi);
  void drawMeshBoxes(std::shared_ptr<UtilMeshInline> mi);
  void drawBoneBoxes(std::shared_ptr<UtilMeshInline> mi);
  //void addShadowInfluence(std::shared_ptr<ShadowBox> psb);
  //void clearShadowInfluences();

  vec3 getFinalPos();

  void collect(std::shared_ptr<RenderBucket> rb);
  template < typename Tx > bool findNode(std::shared_ptr<Tx>& __out_ node) {
    //Find a node (starting at this node) which matches the given node type: Tx
    std::shared_ptr<Tx> pc = std::dynamic_pointer_cast<Tx>(shared_from_this());
    if (pc != nullptr) {
      node = pc;
      return true;
    }

    if (getChildren()) {
      for (std::shared_ptr<TreeNode> tn : *getChildren()) {
        std::shared_ptr<SceneNode> pc = std::dynamic_pointer_cast<SceneNode>(tn);
        if (pc != nullptr) {
          if (pc->findNode<Tx>(node) == true) {
            return true;
          }
        }
      }
    }
    return false;
  }

  std::vector<std::shared_ptr<CSharpScript>>& getScripts() { return _scripts; }

protected:
  std::shared_ptr<NodeData> _pNodeData = nullptr;
  Box3f* _pBox = nullptr;
  OBB* _pOBB = nullptr;
  vec3 _vViewNormal;
  vec3 _vRotationNormal;
  float _fRotation;
  vec3 _vScale;
  mat4 _mWorld; //User manipulated PRS
  mat4 _mLocal;//Local animation outside of the manipulated PRS
  float _fCullDistance2 = FLT_MAX;//squared cull distance.  Defaults to ALWAYS show
  mat4 _mAnimated;
  std::shared_ptr<BoneNode> _pBoneParent = nullptr;
  //  std::set<std::shared_ptr<ShadowBox>> _setShadowInfluences;
  bool _bHidden = false;
  std::vector<std::shared_ptr<CSharpScript>> _scripts;

  void setLocalBind();
  void animate(std::map<Hash32, std::shared_ptr<Animator>>& mapAnimators);
  void applyLocalAnimation(std::shared_ptr<Animator>);
  void applyParent();

private:
  NodeId _iNodeId = 0;//Note: this is also use for picking and must therefore be 32 bits (not 64)
  vec3 _vPos;
  vec3 _vLastPos;
  bool _bTransformChanged = true;
};


}//ns Game



#endif