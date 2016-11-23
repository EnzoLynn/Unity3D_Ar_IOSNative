#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// EasyAR.BarCodeScanner
struct BarCodeScanner_t3536961626;
// EasyAR.CameraDevice
struct CameraDevice_t1437158327;

#include "codegen/il2cpp-codegen.h"
#include "EasyAR_Unity_EasyAR_CameraDevice1437158327.h"

// System.Void EasyAR.BarCodeScanner::.ctor()
extern "C"  void BarCodeScanner__ctor_m3396273350 (BarCodeScanner_t3536961626 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.BarCodeScanner::Dispose(System.Boolean)
extern "C"  void BarCodeScanner_Dispose_m882551738 (BarCodeScanner_t3536961626 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.BarCodeScanner::AttachCamera(EasyAR.CameraDevice)
extern "C"  bool BarCodeScanner_AttachCamera_m657862272 (BarCodeScanner_t3536961626 * __this, CameraDevice_t1437158327 * ___cam0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.BarCodeScanner::DetachCamera(EasyAR.CameraDevice)
extern "C"  bool BarCodeScanner_DetachCamera_m2783552626 (BarCodeScanner_t3536961626 * __this, CameraDevice_t1437158327 * ___cam0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.BarCodeScanner::Start()
extern "C"  bool BarCodeScanner_Start_m2671714514 (BarCodeScanner_t3536961626 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.BarCodeScanner::Stop()
extern "C"  bool BarCodeScanner_Stop_m1333523124 (BarCodeScanner_t3536961626 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
