/**
*  @file MbiFile.h
*  @date January 13, 2018
*  @author MetalMario971
*/
#pragma once
#ifndef __MBIFILE_15158731212931798061_H__
#define __MBIFILE_15158731212931798061_H__

#include "../base/IOBase.h"
#include "../model/ModelHeader.h"

namespace BR2 {
/**
*  @class MbiFile
*  @brief Mob Binary file.  The main file for all models.
*/
class MbiFile : public VirtualMemory {
public:
  const float c_fVersion = 0.3f;
  std::vector<std::shared_ptr<ModelData>>& getModelSpecs() { return _vecModels; }

  bool loadAndParse(string_t file);
  void save(string_t file);
  MbiFile();
  virtual ~MbiFile() override;

private:
  std::vector<std::shared_ptr<ModelData>> _vecModels;
  void parseErr(string_t str, bool bDebugBreak, bool bFatal);
  std::shared_ptr<BinaryFile> _pFile = nullptr;
  string_t _fileLoc;
  void postLoad();
};

}//ns BR2



#endif
