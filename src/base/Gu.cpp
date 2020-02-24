#include "../base/Logger.h"

#include "../base/Img32.h"
#include "../base/Allocator.h"
#include "../base/FileSystem.h"
#include "../base/oglErr.h"
#include "../base/EngineConfigFile.h"
#include "../base/AppBase.h"
#include "../base/EngineConfig.h"
#include "../base/DiskFile.h"
#include "../base/OperatingSystem.h"
#include "../base/DebugHelper.h"
#include "../base/BinaryFile.h"
#include "../base/GraphicsWindow.h"
#include "../base/FpsMeter.h"
#include "../base/FrameSync.h"
#include "../base/Fingers.h"
#include "../base/Package.h"
#include "../base/Logger.h"
#include "../base/Sequencer.h"
#include "../base/SoundCache.h"
#include "../base/FileSystem.h"
#include "../base/EngineConfig.h"
#include "../base/GLContext.h"
#include "../base/Net.h"
#include "../base/Delta.h"

#include "../math/Algorithm.h"

#include "../base/ProjectFile.h"

#include "../gfx/TexCache.h"
#include "../gfx/LightManager.h"
#include "../gfx/WindowViewport.h"
#include "../gfx/GraphicsApi.h"
#include "../gfx/GraphicsContext.h"
#include "../gfx/RenderSettings.h"
#include "../gfx/CameraNode.h"
#include "../gfx/ShaderMaker.h"
#include "../gfx/FlyCam.h"
#include "../gfx/UiControls.h"   
#include "../gfx/Picker.h"   
#include "../gfx/Party.h"   
#include "../gfx/CameraNode.h"
#include "../gfx/ShaderMaker.h"
#include "../gfx/OpenGLApi.h"
#include "../base/GLContext.h"

#include "../model/ModelCache.h"
#include "../model/VertexTypes.h"
#include "../model/VertexFormat.h"

#include "../world/PhysicsWorld.h"

extern "C" {
  //nothings commented on Apr 12, 2016
  //It's not meant to be #included. Don't #include it, just compile & link it.
  extern int stb_vorbis_decode_filename(const char* filename, int* channels, int* sample_rate, short** output);
}

//don't put this in a header file
#ifdef __APPLE__
#ifdef TARGET_OS_IPHONE
//#include <objc/objc-runtime.h>
#include <foundation/foundation.h>
//#include <corefoundation/CFBundle.h>
#endif
#endif

namespace Game {
//std::shared_ptr<GraphicsContext> Gu::_pContext = nullptr;
std::shared_ptr<TexCache> Gu::_pTexCache = nullptr;
std::shared_ptr<CameraNode> Gu::_pCamera = nullptr;
std::shared_ptr<Party> Gu::_pParty = nullptr;
std::shared_ptr<Sequencer> Gu::_pSequencer = nullptr;
std::shared_ptr<AppBase> Gu::_pAppBase = nullptr;
std::shared_ptr<Fingers> Gu::_pFingers = nullptr;
std::shared_ptr<FpsMeter> Gu::_pFpsMeter = nullptr;
std::shared_ptr<FrameSync> Gu::_pFrameSync = nullptr;
std::shared_ptr<SoundCache> Gu::_pSoundCache = nullptr;
std::shared_ptr<ShaderMaker> Gu::_pShaderMaker = nullptr;
std::shared_ptr<LightManager> Gu::_pLightManager = nullptr;
std::shared_ptr<ModelCache> Gu::_pModelCache = nullptr;
std::shared_ptr<Picker> Gu::_pPicker = nullptr;
std::shared_ptr<PhysicsWorld> Gu::_pPhysicsWorld = nullptr;
std::shared_ptr<Package> Gu::_pPackage = nullptr;
std::shared_ptr<RenderSettings> Gu::_pRenderSettings = nullptr;
//std::shared_ptr<Engine> Gu::_pEngine = nullptr;
std::shared_ptr<GraphicsApi> Gu::_pGraphicsApi = nullptr;
std::shared_ptr<Logger> Gu::_pLogger = nullptr;
std::shared_ptr<EngineConfig> Gu::_pEngineConfig = nullptr;
std::shared_ptr<Net> Gu::_pNet = nullptr;
std::shared_ptr<Delta> Gu::_pDelta = nullptr;

//std::shared_ptr<GLContext> Gu::getGraphicsContext() {
//    std::shared_ptr<GLContext> ct = std::dynamic_pointer_cast<GLContext>(_pContext);
//    return ct;
//}
#define _STPROP(x) std::shared_ptr<##x> Gu::get##x() { return _p##x; }
_STPROP(RenderSettings);
_STPROP(Package);
_STPROP(ModelCache);
_STPROP(Sequencer);
_STPROP(Fingers);
_STPROP(FpsMeter);
_STPROP(FrameSync);
_STPROP(SoundCache);
std::shared_ptr<ShaderMaker> Gu::getShaderMaker() { return _pShaderMaker; }
std::shared_ptr<AppBase> Gu::getApp() { return _pAppBase; }
_STPROP(TexCache);
_STPROP(LightManager);
_STPROP(Picker);
//std::shared_ptr<Gui2d> Gu::getGui() { return _pGui2d; }
_STPROP(PhysicsWorld);
_STPROP(Party);
std::shared_ptr<CameraNode> Gu::getCamera() { AssertOrThrow2(_pCamera != nullptr); return _pCamera; }
_STPROP(EngineConfig);
//_STPROP(RenderPipe);
_STPROP(Logger);
_STPROP(GraphicsApi);
std::shared_ptr<GraphicsWindow> Gu::getMainWindow() { return Gu::getGraphicsApi()->getMainWindow(); }
std::shared_ptr<EngineConfig> Gu::getConfig() { return _pEngineConfig; }
std::shared_ptr<WindowViewport> Gu::getViewport() { return Gu::getGraphicsApi()->getMainWindow()->getWindowViewport(); }
_STPROP(Net);
std::shared_ptr<GLContext> Gu::getGraphicsContext() {
  std::shared_ptr<GraphicsApi> api = Gu::getGraphicsApi();
  std::shared_ptr<OpenGLApi> oglapi = std::dynamic_pointer_cast<OpenGLApi>(Gu::getGraphicsApi());
  return oglapi->getContext();
}
std::shared_ptr<RenderPipe> Gu::getRenderPipe() { return Gu::getActiveWindow()->getRenderPipe(); }
std::shared_ptr<Gui2d> Gu::getGui() {
  return Gu::getActiveWindow()->getGui();
}
_STPROP(Delta);
std::shared_ptr<GraphicsWindow> Gu::getActiveWindow() { return Gu::getGraphicsApi()->getMainWindow(); }

void Gu::setPhysicsWorld(std::shared_ptr<PhysicsWorld> p) { AssertOrThrow2(_pPhysicsWorld == nullptr); _pPhysicsWorld = p; }
void Gu::setCamera(std::shared_ptr<CameraNode> pc) { AssertOrThrow2(pc != nullptr); _pCamera = pc; }
void Gu::setApp(std::shared_ptr<AppBase> b) { AssertOrThrow2(b != nullptr); _pAppBase = b; }
void Gu::setGraphicsApi(std::shared_ptr<GraphicsApi> api) { AssertOrThrow2(api != nullptr); _pGraphicsApi = api; }

void Gu::checkErrorsDbg() {
  Gu::getGraphicsContext()->chkErrDbg();
}
void Gu::checkErrorsRt() {
  Gu::getGraphicsContext()->chkErrRt();
}

bool Gu::is64Bit() {
  if (sizeof(size_t) == 8) {
    return true;
  }
  if (sizeof(size_t) == 4)
    return false;
  //WTF
  BroThrowNotImplementedException();
}
void parsearg(std::string key, std::string value) {
  if (key == "--show-console") {
    Gu::getEngineConfig()->setShowConsole(Game::TypeConv::strToBool(value));
    BroLogInfo("Overriding show console window: " + value);
  }
  else if (key == "--game-host") {
    Gu::getEngineConfig()->setGameHostAttached(Game::TypeConv::strToBool(value));
    BroLogInfo("Overriding game host: " + value);
  }
  else {
    BroLogWarn("Unrecognized parameter '" + key + "' value ='" + value + "'");
  }
}
//**TODO Move this crap to AppRunner
void parsearg(std::string arg) {
  bool isvalue = false;
  std::string key = "";
  std::string value = "";
  //**TODO Move this crap to AppRunner

  for (int i = 0; i < arg.length(); ++i) {
    if (arg[i] == '=') {
      isvalue = true;
    }
    else if (isvalue) {
      value += arg[i];
    }
    else {
      key += arg[i];
    }
    //**TODO Move this crap to AppRunner
  }
  parsearg(key, value);
}

void Gu::initGlobals(std::shared_ptr<AppBase> rb, const std::vector<std::string>& args) {
  //Try to create teh cache dir.
  //Make sure to check this on IOS
  FileSystem::createDirectoryRecursive(FileSystem::formatPath(rb->getCacheDir()));

  _pAppBase = rb;

  //Log
  Gu::_pLogger = std::make_shared<Logger>();
  Gu::_pLogger->init(rb);

  //Config
  EngineConfigFile ef;
  ef.loadAndParse(rb->getConfigPath());
  Gu::_pEngineConfig = ef.getConfig();

  //Override EngineConfig
  for (std::string arg : args) {
    //TODO: skip arg 0 (app)
    parsearg(arg);
  }

  //Setup Global Configruation
  getLogger()->enableLogToFile(Gu::getEngineConfig()->getEnableLogToFile());
  getLogger()->enableLogToConsole(Gu::getEngineConfig()->getEnableLogToConsole());


  //Print some environment Diagnostics
  BroLogInfo(Stz  "Operating System: " + Gu::getOperatingSystemName());
  BroLogInfo(Stz  "C++ Version: " + Gu::getCPPVersion());

  if (Gu::getEngineConfig()->getShowConsole() == false) {
    OperatingSystem::hideConsole();
  }
  else {
    OperatingSystem::showConsole();
  }
}
//void Gu::setContext(std::shared_ptr<GraphicsContext> rb) {
//    Gu::_pContext = rb;
//}
void Gu::deleteGlobals() {
  //This must be called in order to delete these in order.
  //Teh GL context needs to come at the end.
  _pTexCache = nullptr;
  _pCamera = nullptr;
  _pParty = nullptr;
  _pSequencer = nullptr;

  _pSoundCache = nullptr;
  _pShaderMaker = nullptr;
  _pLightManager = nullptr;
  _pModelCache = nullptr;
  _pPicker = nullptr;
  _pPhysicsWorld = nullptr;
  _pRenderSettings = nullptr;
  _pEngineConfig = nullptr;

  //System Level
  _pFingers = nullptr;
  _pPackage = nullptr;
  _pLogger = nullptr;
  _pNet = nullptr;
  _pDelta = nullptr;
  _pFpsMeter = nullptr;
  _pFrameSync = nullptr;

  _pGraphicsApi = nullptr;
  _pAppBase = nullptr;
}

bool Gu::isBigEndian() {
#if SDL_BYTEORDER == SDL_BIG_ENDIAN
  return true;
#else
  return false;
#endif
}
std::shared_ptr<Img32> Gu::loadImage(std::string imgLoc) {
  unsigned char* image = nullptr; //the raw pixels
  unsigned int width, height;
  int err;
  //char* imgData = 0;
 // uint32_t imgSize;
  std::shared_ptr<Img32> ret = nullptr;

  std::shared_ptr<BinaryFile> fb = std::make_shared<BinaryFile>();
  if (Gu::getPackage()->getFile(imgLoc, fb)) {
    //decode
    err = lodepng_decode32(&image, &width, &height, (unsigned char*)fb->getData().ptr(), fb->getData().count());
    if (err != 0) {
      //FB should free itself.
    //  Gu::SDLFileFree(imgData);
      BroThrowException(Stz "Could not load image " + imgLoc + " err code = " + err);
    }
    else {
      Img32::flipImage20161206(image, width, height);
      // create(image, width, height, false);

      ret = std::make_shared<Img32>(width, height, (uint8_t*)image);

      //delete image;
    }
    //FileBuffer will free itself
    //Gu::SDLFileFree(imgData);
  }

  return ret;
}
bool Gu::saveImage(std::string path, std::shared_ptr<Img32> spec) {
  //unsigned char* image = nullptr; //the raw pixels
  //unsigned int width, height;
  //int err;
  //char* imgData = 0;
  //uint32_t imgSize;
  //err = Gu::SDLFileRead(imgLoc.c_str(), imgData, imgSize);
  bool bRet = true;
  unsigned char* imageData = (unsigned char*)spec->getData()->ptr();
  unsigned int w = spec->getWidth();
  unsigned int h = spec->getHeight();
  unsigned char* buffer = 0;
  size_t buffersize = 0;
  //For some reason we have to call this twice, i'm not sure.  Maybe LODEPNG wants buffer to be allocated?
 // lodepng_encode_memory(&buffer, &buffersize, imageData, w, h, LCT_RGBA, 8);
  unsigned error = lodepng_encode_memory(&buffer, &buffersize, imageData, w, h, LCT_RGBA, 8);
  if (error == 0) {
    Allocator<char> allocr(buffersize, (char*)buffer);

    RetCode rc = DiskFile::writeAllBytes(path, allocr);
    if (rc != GR_OK) {
      BroLogError("Error'" + (int)rc + "' occurred while saving image.");
    }
    allocr.dealloc();
  }
  else {
    BroLogError("LodePng - Error encoding image '" + path + "'.");
    bRet = false;
  }
  free(buffer);//lodepng_free

  return bRet;
}
void Gu::freeImage(std::shared_ptr<Img32> b) {
  //b->dea
  //delete b;
}
t_timeval Gu::getMicroSeconds() {
  int64_t ret;
  std::chrono::nanoseconds ns = std::chrono::high_resolution_clock::now().time_since_epoch();
  ret = std::chrono::duration_cast<std::chrono::microseconds>(ns).count();
  return ret;
}
t_timeval Gu::getMilliSeconds() {
  return getMicroSeconds() / 1000;
}
#ifdef __APPLE__
#ifdef TARGET_OS_IPHONE
static CFStringRef stdStrToCFStr(std::string st) {
  CFStringRef str;
  //kCFStringEncodingUTF8
  str = CFStringCreateWithCString(NULL, st.c_str(), CFStringGetSystemEncoding());
  return str;
}
#endif
#endif

void Gu::debugBreak() {
#ifdef _WIN32
#ifdef _DEBUG
  DebugBreak();
#endif
#endif
}

int Gu::loadSound(std::string path, int& __out_ iChannels, int& __out_ iSampleRate,
  int16_t*& __out_ pData, int& __out_ nSamples, int& __out_ iDataLenBytes) {
  //  it returns the number of
  // samples decoded, and you told it the number of channels and the sample rate.Multiply 
  // those three together, and you get the total number of shorts in the buffer;
  // multiply by sizeof(short), and voil�; size of that buffer in bytes.
  nSamples = stb_vorbis_decode_filename(path.c_str(), &iChannels, &iSampleRate, &pData);

  if (nSamples <= 0) {
    return nSamples;
  }

  iDataLenBytes = nSamples * iChannels * sizeof(int16_t);

  return 1;
}

//
//float Gu::frand() {
//    return mint(
//    return ((float)(rand() % 1000)*0.001f);
//}
//float Gu::frand1() {
//    return ((float)(-1000 + (rand() % 2000))*0.001f);
//}
//vec3 Gu::rv3() {
//    return vec3(Gu::frand1(), Gu::frand1(), Gu::frand1());
//}

void Gu::inlineDrawBoxCont(const Box3f* b) {
#ifdef _WIN32
  glVertex3f(b->_min.x, b->_min.y, b->_min.z);
  glVertex3f(b->_max.x, b->_min.y, b->_min.z);

  glVertex3f(b->_min.x, b->_min.y, b->_min.z);
  glVertex3f(b->_min.x, b->_max.y, b->_min.z);

  glVertex3f(b->_min.x, b->_min.y, b->_min.z);
  glVertex3f(b->_min.x, b->_min.y, b->_max.z);

  glVertex3f(b->_max.x, b->_max.y, b->_max.z);
  glVertex3f(b->_min.x, b->_max.y, b->_max.z);

  glVertex3f(b->_max.x, b->_max.y, b->_max.z);
  glVertex3f(b->_max.x, b->_min.y, b->_max.z);

  glVertex3f(b->_max.x, b->_max.y, b->_max.z);
  glVertex3f(b->_max.x, b->_max.y, b->_min.z);


  glVertex3f(b->_max.x, b->_max.y, b->_min.z);
  glVertex3f(b->_min.x, b->_max.y, b->_min.z);
  glVertex3f(b->_max.x, b->_max.y, b->_min.z);
  glVertex3f(b->_max.x, b->_min.y, b->_min.z);

  glVertex3f(b->_min.x, b->_max.y, b->_max.z);
  glVertex3f(b->_min.x, b->_min.y, b->_max.z);
  glVertex3f(b->_min.x, b->_min.y, b->_max.z);
  glVertex3f(b->_max.x, b->_min.y, b->_max.z);


  glVertex3f(b->_min.x, b->_max.y, b->_min.z);
  glVertex3f(b->_min.x, b->_max.y, b->_max.z);


  glVertex3f(b->_max.x, b->_min.y, b->_min.z);
  glVertex3f(b->_max.x, b->_min.y, b->_max.z);
#endif
}


float Gu::fade(float t) {
  //T = [0,1]
  // Fade function as defined by Ken Perlin.  This eases coordinate values
  // so that they will ease towards integral values.  This ends up smoothing
  // the final output.
  return 6 * powf(t, 5) - 15 * powf(t, 4) + 10 * powf(t, 3);
  //  return 6*(t*t*t*t*t) - 15*(t*t*t*t) + 10*(t*t*t);         // 6t^5 - 15t^4 + 10t^3

}

void Gu::checkMemory() {
#ifdef _WIN32
#ifdef _DEBUG
  _CrtCheckMemory();
#endif
#endif
}

t_string Gu::getOperatingSystemName() {
  t_string res;
#ifdef BRO_OS_WINDOWS
  OSVERSIONINFOEX vex;
  vex.dwOSVersionInfoSize = sizeof(OSVERSIONINFOEX);
  GetVersionEx((OSVERSIONINFO*)&vex);

  // CheckOsErrorsDbg();

  if (vex.dwMajorVersion == 6 && vex.dwMinorVersion == 3) {
    res.append(" Windows 8.1");
  }
  else if (vex.dwMajorVersion == 6 && vex.dwMinorVersion == 2) {
    res.append(" Windows 8");
  }
  else if (vex.dwMajorVersion == 6 && vex.dwMinorVersion == 1) {
    res.append(" Windows 7");
  }
  else if (vex.dwMajorVersion == 6 && vex.dwMinorVersion == 0) {
    res.append(" Windows Vista");
  }
  else if (vex.dwMajorVersion == 5 && vex.dwMinorVersion == 2) {
    res.append(" Windows XP Pro 64 bit");
  }
  else if (vex.dwMajorVersion == 5 && vex.dwMinorVersion == 1) {
    res.append(" Windows XP");
  }
  else if (vex.dwMajorVersion == 5 && vex.dwMinorVersion == 0) {
    res.append(" Windows 2000");
  }
  else {
    res.append(" OS Unknown.  Note: Mac / Linux are not supported.");
  }

  if (vex.wServicePackMajor != 0)
    res += Stz ", Service Pack " + vex.wServicePackMajor + "." + vex.wServicePackMinor;
  else
    res += Stz ", No service pack";

  if (vex.wProductType == VER_NT_DOMAIN_CONTROLLER)
    res.append(", Domain Controller, note operating system may be incorrect as this is not supported");
  else if (vex.wProductType == VER_NT_SERVER)
    res.append(", Server, note operating system may be incorrect as this is not supported");
  else if (vex.wProductType == VER_NT_WORKSTATION)
    res.append(", Workstation");

#else
  //#error "Operating System Error"

#endif
    //CheckOsErrorsDbg();
  return res;
}

uint32_t Gu::getCurrentThreadId() {
  uint32_t threadId = 0;
#ifdef BRO_OS_WINDOWS
  //TODO: std::this_thread::get_id()
  threadId = (uint32_t)GetCurrentThreadId();
#else
  //#error "Operating System Error"
  return std::hash<std::thread::id>()(std::this_thread::get_id());
#endif
  return threadId;

}
bool Gu::isDebug() {
#ifdef _DEBUG
  return true;
#else
  return false;
#endif
}
std::vector<t_string> Gu::argsToVectorOfString(int argc, char** argv, char delimiter) {
  int squot = 0, dquot = 0;

  //todo - fix the delimiter thing
  std::vector<t_string> ret;
  for (int i = 0; i < argc; ++i) {

    t_string str(argv[i]);


    ret.push_back(str);
  }
  return ret;
}

void Gu::guiQuad2d(Box2f& pq, std::shared_ptr<WindowViewport> vp) {
  //Transforms a quad for the matrix-less gui projection.

  //The resulting coordinates for the GPU are -0.5 +0.5 in both axes with the center being in the center of the screen
  //Translate a 2D screen quad to be rendered in a shader.
  //So* our quad is from TOP Left - OpenGL is Bottom Left - this fixes this.
  float w = (float)vp->getWidth();
  float w2 = w * 0.5f;
  float h = (float)vp->getHeight();
  float h2 = h * 0.5f;

  //Subtract from viewport center
  pq._p0.x -= w2;
  pq._p1.x -= w2;

  //Invert text to show rightside up and divide by perspective
  pq._p0.x = pq._p0.x / w2;
  pq._p0.y = (h2 - pq._p0.y - 1) / h2;
  pq._p1.x = pq._p1.x / w2;
  pq._p1.y = (h2 - pq._p1.y - 1) / h2;
}
void Gu::print(char msg) {
  char c[2];
  c[0] = msg;
  c[1] = 0;
  print((char*)c);
}
void Gu::print(const t_string& msg) {
  print(msg.c_str());
}

void Gu::print(const char* msg) {
  if (Gu::getEngineConfig() == nullptr) {
    std::cout << msg;
  }
  else if (Gu::getEngineConfig()->getShowConsole()) {
    std::cout << msg;
  }
}

uint64_t Gu::getFrameNumber() {
  return Gu::getFpsMeter()->getFrameNumber();
}

std::string Gu::getCPPVersion() {
  //https://stackoverflow.com/questions/2324658/how-to-determine-the-version-of-the-c-standard-used-by-the-compiler

  if (__cplusplus == 201703L) {
    return Stz "C++17";
  }
  else if (__cplusplus == 201403L) {
    return Stz "C++14";
  }
  else if (__cplusplus == 201103L) {
    return Stz "C++11";
  }
  else if (__cplusplus == 199711L) {
    return Stz "C++98";
  }
  return Stz "pre-standard C++";
}

void Gu::createManagers() {
  std::shared_ptr<GLContext> ct = std::dynamic_pointer_cast<GLContext>(Gu::getGraphicsContext());

  _pRenderSettings = RenderSettings::create();
  BroLogInfo("GLContext - Building Package");
  _pPackage = std::make_shared<Package>();
  _pPackage->build(FileSystem::getExecutableFullPath());
  BroLogInfo("GLContext - Creating TexCache");
  _pTexCache = std::make_shared<TexCache>(Gu::getGraphicsContext());

  BroLogInfo("GLContext - Creating TextBoss");
  //    _pTextManager = std::make_shared<TextBoss>(shared_from_this());
  BroLogInfo("GLContext - Creating Party");
  _pParty = std::make_shared<Party>(Gu::getGraphicsContext());
  BroLogInfo("GLContext - Creating Sequencer");
  _pSequencer = std::make_shared<Sequencer>();
  BroLogInfo("GLContext - Creating Fingers");
  _pFingers = std::make_shared<Fingers>();
  _pFingers->init();
  BroLogInfo("GLContext - Creating FpsMeter");
  _pFpsMeter = std::make_shared<FpsMeter>();
  BroLogInfo("GLContext - Creating FrameSync");
  _pFrameSync = std::make_shared<FrameSync>();
  //This was commented out.  Why? 11/6
  BroLogInfo("GLContext - Creating SoundCache");
  _pSoundCache = std::make_shared<SoundCache>();
  BroLogInfo("GLContext - Creating ShaderMaker & base shaders");
  _pShaderMaker = std::make_shared<ShaderMaker>();
  _pShaderMaker->initialize(Gu::getApp());
  BroLogInfo("GLContext -  Lights");
  _pLightManager = std::make_shared<LightManager>(Gu::getGraphicsContext());
  BroLogInfo("GLContext - Model Cache");
  _pModelCache = std::make_shared<ModelCache>(Gu::getGraphicsContext());

  BroLogInfo("GLContext - Picker");
  _pPicker = std::make_shared<Picker>(Gu::getGraphicsContext());

  //BroLogInfo("GLContext - Gui");
//   _pGui2d = std::make_shared<Gui2d>();

  BroLogInfo("GLContext - Physics World");
  //Either A) subclass or B) remove genericy thing
 // _pPhysicsWorld = std::make_shared<PhysicsWorld>();

  BroLogInfo("Network");
  _pNet = std::make_shared<Net>();

  BroLogInfo("Delta");
  _pDelta = std::make_shared<Delta>();
}
void Gu::updateGlobals() {
  getDelta()->update();

  if (_pSequencer != nullptr) {
    _pSequencer->update();
  }
  if (_pParty != nullptr) {
    _pParty->update(getDelta()->get());
  }
  if (_pFpsMeter != nullptr) {
    _pFpsMeter->update();
  }
  if (_pSoundCache != nullptr) {
    _pSoundCache->update();
  }
  if (_pPicker != nullptr) {
    _pPicker->update(_pFingers);
  }
  if (_pNet != nullptr) {
    _pNet->update();
  }


}

}//ns Game
