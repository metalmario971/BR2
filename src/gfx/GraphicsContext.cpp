
#include "../base/FpsMeter.h"
#include "../base/Delta.h"
#include "../base/FrameSync.h"
#include "../base/InputManager.h"
#include "../base/ApplicationPackage.h"
#include "../base/Logger.h"
#include "../base/Sequencer.h"
#include "../base/SoundCache.h"
#include "../base/FileSystem.h"
#include "../base/EngineConfig.h"
#include "../gfx/FlyCam.h"
#include "../gfx/Gui2d.h"   
#include "../gfx/Picker.h"   
#include "../gfx/ParticleMaker.h"   
#include "../gfx/GraphicsContext.h"
#include "../gfx/RenderSettings.h"
#include "../gfx/CameraNode.h"
#include "../gfx/ShaderMaker.h"
#include "../gfx/GraphicsApi.h"
#include "../model/VertexTypes.h"
#include "../model/VertexFormat.h"
#include "../model/ModelCache.h"
#include "../world/PhysicsWorld.h"


namespace Game {
std::shared_ptr<ModelCache> GraphicsContext::_pModelCache = nullptr;
std::shared_ptr<TexCache> GraphicsContext::_pTexCache = nullptr;
std::shared_ptr<ParticleMaker> GraphicsContext::_pParticleMaker = nullptr;
std::shared_ptr<ShaderMaker> GraphicsContext::_pShaderMaker = nullptr;
bool GraphicsContext::_bCreatedManagers = false;

GraphicsContext::GraphicsContext() {
  _fClearR = 0.02f;
  _fClearG = 0.02f;
  _fClearB = 0.021f;
  _fClearA = 1.0f;
}
GraphicsContext::~GraphicsContext() {
  _pParticleMaker = nullptr;
  _pTexCache = nullptr;
  _pShaderMaker = nullptr;
  _pPicker = nullptr;
  _pModelCache = nullptr;
  _pDelta = nullptr;
  _pFpsMeter = nullptr;
}
bool GraphicsContext::init() {
  _bValid = true;

  BroLogInfo("GraphicsContext - Making Vtx Formats.");
  makeVertexFormats();

  BroLogInfo("GraphicsContext - Creating Managers.");
  if (!GraphicsContext::_bCreatedManagers) {
    createManagers();
    GraphicsContext::_bCreatedManagers = true;
  }

  return isValid();
}
void GraphicsContext::update() {
  if (_pDelta != nullptr) {
    _pDelta->update();
  }
  if (_pFpsMeter != nullptr) {
    _pFpsMeter->update();
  }
  if (_pParticleMaker != nullptr) {
    _pParticleMaker->update(getDelta()->get());
  }

}
void GraphicsContext::makeVertexFormats() {

  v_v3c4x2::_pVertexFormat = std::make_shared<VertexFormat>(shared_from_this(), "v_v3c4x2");
  v_v3c4x2::_pVertexFormat->addComponent(VertexUserType::e::v3_01);
  v_v3c4x2::_pVertexFormat->addComponent(VertexUserType::e::c4_01);
  v_v3c4x2::_pVertexFormat->addComponent(VertexUserType::e::x2_01);

  v_v2c4x2::_pVertexFormat = std::make_shared<VertexFormat>(shared_from_this(), "v_v2c4x2");
  v_v2c4x2::_pVertexFormat->addComponent(VertexUserType::e::v2_01);
  v_v2c4x2::_pVertexFormat->addComponent(VertexUserType::e::c4_01);
  v_v2c4x2::_pVertexFormat->addComponent(VertexUserType::e::x2_01);

  v_v3n3x2::_pVertexFormat = std::make_shared<VertexFormat>(shared_from_this(), "v_v3n3x2");
  v_v3n3x2::_pVertexFormat->addComponent(VertexUserType::e::v3_01);
  v_v3n3x2::_pVertexFormat->addComponent(VertexUserType::e::n3_01);
  v_v3n3x2::_pVertexFormat->addComponent(VertexUserType::e::x2_01);

  v_v3x2::_pVertexFormat = std::make_shared<VertexFormat>(shared_from_this(), "v_v3x2");
  v_v3x2::_pVertexFormat->addComponent(VertexUserType::e::v3_01);
  v_v3x2::_pVertexFormat->addComponent(VertexUserType::e::x2_01);

  v_v3n3::_pVertexFormat = std::make_shared<VertexFormat>(shared_from_this(), "v_v3n3");
  v_v3n3::_pVertexFormat->addComponent(VertexUserType::e::v3_01);
  v_v3n3::_pVertexFormat->addComponent(VertexUserType::e::n3_01);

  v_v3::_pVertexFormat = std::make_shared<VertexFormat>(shared_from_this(), "v_v3");
  v_v3::_pVertexFormat->addComponent(VertexUserType::e::v3_01);

  v_v2x2::_pVertexFormat = std::make_shared<VertexFormat>(shared_from_this(), "v_v2x2");
  v_v2x2::_pVertexFormat->addComponent(VertexUserType::e::v2_01);
  v_v2x2::_pVertexFormat->addComponent(VertexUserType::e::x2_01);

  v_v2c4::_pVertexFormat = std::make_shared<VertexFormat>(shared_from_this(), "v_v2c4");
  v_v2c4::_pVertexFormat->addComponent(VertexUserType::e::v2_01);
  v_v2c4::_pVertexFormat->addComponent(VertexUserType::e::c4_01);

  //v_v3c3i4i4::_pVertexFormat = new VertexFormat(this, "v_v3c3i4i4");
  //v_v3c3i4i4::_pVertexFormat->addComponent(GL_FLOAT, 3, sizeof(vec3), VertexUserType::e::v3_01);
  //v_v3c3i4i4::_pVertexFormat->addComponent(GL_FLOAT, 3, sizeof(vec3), VertexUserType::e::c3_01);
  //v_v3c3i4i4::_pVertexFormat->addComponent(GL_INT, 4, sizeof(ivec4));
  //v_v3c3i4i4::_pVertexFormat->addComponent(GL_INT, 4, sizeof(ivec4));

  v_v3c3x2n3::_pVertexFormat = std::make_shared<VertexFormat>(shared_from_this(), "v_v3c3x2n3");
  v_v3c3x2n3::_pVertexFormat->addComponent(VertexUserType::e::v3_01);
  v_v3c3x2n3::_pVertexFormat->addComponent(VertexUserType::e::c3_01);
  v_v3c3x2n3::_pVertexFormat->addComponent(VertexUserType::e::x2_01);
  v_v3c3x2n3::_pVertexFormat->addComponent(VertexUserType::e::n3_01);

  v_v3i2n3::_pVertexFormat = std::make_shared<VertexFormat>(shared_from_this(), "v_v3i2n3");
  v_v3i2n3::_pVertexFormat->addComponent(VertexUserType::e::v3_01);
  v_v3i2n3::_pVertexFormat->addComponent(VertexUserType::e::i2_01);
  v_v3i2n3::_pVertexFormat->addComponent(VertexUserType::e::n3_01);

  v_v3c4::_pVertexFormat = std::make_shared<VertexFormat>(shared_from_this(), "v_v3c4");
  v_v3c4::_pVertexFormat->addComponent(VertexUserType::e::v3_01);
  v_v3c4::_pVertexFormat->addComponent(VertexUserType::e::c4_01);

  v_v3c4x2n3::_pVertexFormat = std::make_shared<VertexFormat>(shared_from_this(), "v_v3c4x2n3");
  v_v3c4x2n3::_pVertexFormat->addComponent(VertexUserType::e::v3_01);
  v_v3c4x2n3::_pVertexFormat->addComponent(VertexUserType::e::c4_01);
  v_v3c4x2n3::_pVertexFormat->addComponent(VertexUserType::e::x2_01);
  v_v3c4x2n3::_pVertexFormat->addComponent(VertexUserType::e::n3_01);

  v_GuiVert::_pVertexFormat = std::make_shared<VertexFormat>(shared_from_this(), "v_GuiVert");
  v_GuiVert::_pVertexFormat->addComponent(VertexUserType::e::v4_01);
  v_GuiVert::_pVertexFormat->addComponent(VertexUserType::e::v4_02);
  v_GuiVert::_pVertexFormat->addComponent(VertexUserType::e::v4_03);
  v_GuiVert::_pVertexFormat->addComponent(VertexUserType::e::v2_01);
  v_GuiVert::_pVertexFormat->addComponent(VertexUserType::e::u2_01);
}
void GraphicsContext::createManagers() {
  BroLogInfo("GLContext - Creating FpsMeter");
  _pFpsMeter = std::make_shared<FpsMeter>();

  BroLogInfo("Delta");
  _pDelta = std::make_shared<Delta>();

  BroLogInfo("GLContext - Creating FrameSync");
  _pFrameSync = std::make_shared<FrameSync>();

  BroLogInfo("GLContext - Creating Particles");
  _pParticleMaker = std::make_shared<ParticleMaker>();

  //This was commented out.  Why? 11/6
  BroLogInfo("GLContext - Creating ShaderMaker & base shaders");
  _pShaderMaker = std::make_shared<ShaderMaker>();
  _pShaderMaker->initialize();

  BroLogInfo("GLContext - Creating Texture Cache");
  _pTexCache = std::make_shared<TexCache>();

  BroLogInfo("GLContext - Model Cache");
  _pModelCache = std::make_shared<ModelCache>();
}






}//ns Game
