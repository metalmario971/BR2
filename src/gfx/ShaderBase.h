/**
*  @file ShaderBase.h
*  @date November 27, 2016
*  @author MetalMario971
*/
#pragma once
#ifndef __SHADERBASE_14802955721654117059_H__
#define __SHADERBASE_14802955721654117059_H__

#include "../gfx/GfxHeader.h"
#include "../base/BaseHeader.h"
#include "../model/ModelHeader.h"
#include "../math/Matrix4x4.h"
#include "../math/Vec4x.h"

namespace Game {
/**
*  @class ShaderBase
*  @brief Base class for handling OpenGL haders.
*/
class ShaderBase : public VirtualMemoryShared<ShaderBase> {

public:
  ShaderBase(t_string strName);
  virtual ~ShaderBase() override;

  void init();
  bool confirmInit();
  void setCompileTime(time_t tt) { _compileTime = tt; }

  void setProgramStatus(ShaderStatus::e sp) { _eProgramStatus = sp; }
  ShaderStatus::e getProgramStatus() { return _eProgramStatus; }
  Hash32 getNameHashed() { return _iNameHashed; }
  t_string getProgramName() { return _strProgramName; }
  time_t getCompileTime() { return _compileTime; }
  std::vector<std::shared_ptr<ShaderSubProgram>>& getSubPrograms() { return _vecSubPrograms; }
  std::vector<t_string>& getLinkErrors() { return _vecLinkErrors; }
  std::map<Hash32, std::shared_ptr<ShaderUniformBlock>>& getUniformBlocks() { return _vecUniformBlocks; }
  void getProgramErrorLog(std::vector<t_string>& __out_ errs);
  void setProgramName(t_string n);
  void bind();
  void unbind();
  void unbindAllUniforms();
  GLuint getGlId() const { return _glId; }
  void recreateProgram();    //WARNING: calling this will delete the program in the GL and start from scratch.
  void deleteUniforms();
  void deleteAttributes();
  void bindSsbo(std::shared_ptr<GpuBufferData> pDat, const char* shaderBufferName, uint32_t shaderSsboIndex);

  std::map<Hash32, std::shared_ptr<ShaderUniform>>& getUniforms() { return _vecUniforms; }
  std::set<ShaderAttribute*>& getAttributes() { return _setAttributes; }

  std::shared_ptr<ShaderUniform> getUniformByName(t_string name);
  void setUf(t_string name, void* value, GLint count = -1, bool bIgnore = false);//SetUniformByName
  void setCameraUf(std::shared_ptr<CameraNode> cam, mat4* model = nullptr);
  void setAtlasUf(std::shared_ptr<Atlas> pa);
  void verifyBound();
  void setTextureUf(uint32_t iChannel, bool bIgnoreIfNotFound = false);
  void setLightUf();//Deferred BLIT only (called once)
 // void setFreebieDirLightUf(bool bEnable=true); //for any deferred draw

  void draw(std::shared_ptr<MeshNode> mesh, int32_t iCount = -1, GLenum eDrawMode = GL_TRIANGLES);
  void draw(std::shared_ptr<VaoDataGeneric> vao, int32_t iCount = -1, GLenum eDrawMode = GL_TRIANGLES);
  void draw(std::shared_ptr<VaoShader> vao, int32_t iCount = -1, GLenum eDrawMode = GL_TRIANGLES);
  t_string debugGetUniformValues();

  void beginRaster();
  void endRaster();

  void dispatchCompute();//Compute Shader Only
  void dispatchCompute(int32_t elementCount);//Compute Shader Only
  void dispatchCompute(int32_t x, int32_t y, int32_t z);//Compute Shader Only
  void dispatchCompute(int32_t x, int32_t y, int32_t z, GpuComputeSync* sync);//Compute Shader Only

private:
  ShaderStatus::e _eProgramStatus = ShaderStatus::e::Uninitialized;
  GLuint _glId;
  time_t _compileTime;

  t_string _strProgramName;
  Hash32 _iNameHashed;
  std::map<Hash32, std::shared_ptr<ShaderUniform>> _vecUniforms;
  std::map<Hash32, std::shared_ptr<ShaderUniformBlock>> _vecUniformBlocks; //These are shared with ShaderMaker
  std::set<ShaderAttribute*> _setAttributes;
  std::vector<t_string> _vecLinkErrors;
  std::vector<std::shared_ptr<ShaderSubProgram>> _vecSubPrograms;
  void bindAllUniforms();

  void setShadowUf();
};

}//ns Game



#endif
