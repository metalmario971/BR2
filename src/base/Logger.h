/**
*  @file Logger.h
*  @date December 14, 2013
*  @author MetalMario971
*/
#pragma once
#ifndef __LOGGER_16421047220665463212149_H__
#define __LOGGER_16421047220665463212149_H__

#include "../base/BaseHeader.h"
#include "../base/Gu.h"

namespace Game {
/**
*   @class Logger
*   @brief Logs information to a text file or console.
*   @note Logger is initially disabled.
*/
class Logger : public OperatingSystemMemory {
public:
  typedef enum {
    Debug,
    Info,
    Warn,
    Error,
  }LogLevel;
public:
  Logger();
  virtual ~Logger() override;

  void init(string_t cacheDir);

  void enableLogToConsole(bool bLogToConsole);
  void enableLogToFile(bool bLogToFile);

  void logError(string_t msg, Game::Exception* e = NULL);    // - Log an error with exception contents.
  void logWarn(string_t msg, Game::Exception* e = NULL);    // - Log an error with exception contents.
  void logDebug(string_t msg);
  void logInfo(string_t msg);
  void logError(string_t msg, int line, char* file, Game::Exception* e = NULL, bool hideStackTrace = false);    // - Log an error with exception contents.
  void logWarn(string_t msg, int line, char* file, Game::Exception* e = NULL);    // - Log an error with exception contents.
  void logWarnCycle(string_t msg, int line, char* file, Game::Exception* e = NULL, int iCycle = 60);    // - Log an error with exception contents.
  void logErrorCycle(string_t msg, int line, char* file, Game::Exception* e = NULL, int iCycle = 60);    // - Log an error with exception contents.
  void logDebug(string_t msg, int line, char* file);
  void logInfo(string_t msg, int line, char* file);
  void logInfo(const char* msg);
  void logDebug(const char* msg);
  void logError(const char* msg, Game::Exception* e = NULL);
  void logWarn(const char* msg, Game::Exception* e = NULL);

  string_t getLogPath() { return _logDir; }

private:
  string_t _logDir;
  string_t _logFileName;
  int32_t _nMsg = 0;    // - Profiling variables.  We increment them when we log.
  std::atomic_bool _bSuppressLineFileDisplay = false;
  std::mutex _mtLogWriteMutex;
  bool _bEnabled = false;
  bool _bLogToFile = false;
  bool _bLogToConsole = false;

  void addLineFileToMsg(string_t msg, int line, char* file);
  string_t createMessageHead(LogLevel level);
  void log(string_t msg, string_t header, Game::Exception* e);    // - Log an error with exception contents.
  string_t addStackTrace(string_t msg);
};

}//ns game


//Macros
#define BroLogDebug(x) Game::Gu::getLogger()->logDebug(Stz x,__LINE__,__FILE__ )
#define BroLogInfo(x) Game::Gu::getLogger()->logInfo(Stz x,__LINE__,__FILE__ )
#define BroLogWarn(x) Game::Gu::getLogger()->logWarn(Stz x,__LINE__,__FILE__, NULL )
#define BroLogError(x) Game::Gu::getLogger()->logError(Stz x,__LINE__,__FILE__, NULL )
#define BroLogErrorNoStack(x) Game::Gu::getLogger()->logError(Stz x,__LINE__,__FILE__, NULL, true)

#define BroLogErrorOnce(x) \
{ \
static bool _logged = false; \
if(_logged == false) { \
_logged = true; \
Game::Gu::getLogger()->logError(Stz x,__LINE__,__FILE__, NULL ); \
} \
} 

#define BroLogErrorEx(x, aex) \
Game::Gu::getLogger()->logError(x,__LINE__,__FILE__, aex )
#define BroLogWarnCycle(x) Game::Gu::getLogger()->logWarnCycle(Stz x, __LINE__, __FILE__, NULL, 60)
#define BroLogErrorCycle(x) Game::Gu::getLogger()->logErrorCycle(Stz x, __LINE__, __FILE__, NULL, 60)

#define SetLoggerColor_Error() ConsoleColorRed()
#define SetLoggerColor_Info() ConsoleColorGray()
#define SetLoggerColor_Debug() ConsoleColorCyan()
#define SetLoggerColor_Warn() ConsoleColorYellow()


#endif
