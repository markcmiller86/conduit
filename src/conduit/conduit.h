///
/// file: conduit.h
///

#ifndef __CONDUIT_H
#define __CONDUIT_H

#include <string>
#include "Python.h"   
#include "numpy/npy_common.h"

namespace conduit
{

typedef npy_uint32  uint32;
typedef npy_uint64  uint64;
typedef npy_float64 float64;

// dummy function to start the lib
std::string  version();


}

#endif