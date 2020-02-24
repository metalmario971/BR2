/**
*  @file Exception.h
*  @date November 22, 2016
*  @author MetalMario971
*/
#pragma once
#ifndef __EXCEPTION_1479867204359778176_H__
#define __EXCEPTION_1479867204359778176_H__

#include "../base/MachineTypes.h"

namespace Game {
class Exception {
public:
  Exception(t_string c, int line, const char* file, bool bLogError = true);
  t_string what();

private:
  int _line;
  t_string _msg;
  const char* _file;
};

}//ns Game



#endif
