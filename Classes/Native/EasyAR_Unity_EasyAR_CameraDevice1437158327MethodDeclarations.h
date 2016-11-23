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

// EasyAR.CameraDevice
struct CameraDevice_t1437158327;
// EasyAR.CameraCalibration
struct CameraCalibration_t252974987;
// System.Single[]
struct SingleU5BU5D_t2316563989;
// EasyAR.Vector2I[]
struct Vector2IU5BU5D_t549686323;

#include "codegen/il2cpp-codegen.h"
#include "EasyAR_Unity_EasyAR_CameraCalibration252974987.h"
#include "EasyAR_Unity_EasyAR_Vector2I2400269878.h"
#include "EasyAR_Unity_EasyAR_CameraDevice_Device2757367407.h"
#include "EasyAR_Unity_EasyAR_CameraDevice_FocusMode791231458.h"

// System.Void EasyAR.CameraDevice::.ctor()
extern "C"  void CameraDevice__ctor_m1672216841 (CameraDevice_t1437158327 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// EasyAR.CameraCalibration EasyAR.CameraDevice::get_Calibration()
extern "C"  CameraCalibration_t252974987 * CameraDevice_get_Calibration_m3410112243 (CameraDevice_t1437158327 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.CameraDevice::set_Calibration(EasyAR.CameraCalibration)
extern "C"  void CameraDevice_set_Calibration_m672012586 (CameraDevice_t1437158327 * __this, CameraCalibration_t252974987 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single[] EasyAR.CameraDevice::get_SupportedFPS()
extern "C"  SingleU5BU5D_t2316563989* CameraDevice_get_SupportedFPS_m2300250325 (CameraDevice_t1437158327 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.CameraDevice::set_SupportedFPS(System.Single[])
extern "C"  void CameraDevice_set_SupportedFPS_m4228911478 (CameraDevice_t1437158327 * __this, SingleU5BU5D_t2316563989* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// EasyAR.Vector2I[] EasyAR.CameraDevice::get_SupportedSize()
extern "C"  Vector2IU5BU5D_t549686323* CameraDevice_get_SupportedSize_m3685597865 (CameraDevice_t1437158327 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.CameraDevice::set_SupportedSize(EasyAR.Vector2I[])
extern "C"  void CameraDevice_set_SupportedSize_m4037833474 (CameraDevice_t1437158327 * __this, Vector2IU5BU5D_t549686323* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.CameraDevice::set_FPS(System.Single)
extern "C"  void CameraDevice_set_FPS_m486598488 (CameraDevice_t1437158327 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// EasyAR.Vector2I EasyAR.CameraDevice::get_Size()
extern "C"  Vector2I_t2400269878  CameraDevice_get_Size_m2524451623 (CameraDevice_t1437158327 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.CameraDevice::set_Size(EasyAR.Vector2I)
extern "C"  void CameraDevice_set_Size_m2365394404 (CameraDevice_t1437158327 * __this, Vector2I_t2400269878  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.CameraDevice::set_HorizontalFlip(System.Boolean)
extern "C"  void CameraDevice_set_HorizontalFlip_m3004162048 (CameraDevice_t1437158327 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.CameraDevice::HFlip()
extern "C"  bool CameraDevice_HFlip_m3842823144 (CameraDevice_t1437158327 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.CameraDevice::GetSize()
extern "C"  void CameraDevice_GetSize_m1124121438 (CameraDevice_t1437158327 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.CameraDevice::Dispose(System.Boolean)
extern "C"  void CameraDevice_Dispose_m685031933 (CameraDevice_t1437158327 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.CameraDevice::InitProperties()
extern "C"  void CameraDevice_InitProperties_m2105621566 (CameraDevice_t1437158327 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.CameraDevice::Start()
extern "C"  bool CameraDevice_Start_m2027515925 (CameraDevice_t1437158327 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.CameraDevice::Stop()
extern "C"  bool CameraDevice_Stop_m2005479185 (CameraDevice_t1437158327 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.CameraDevice::Open(EasyAR.CameraDevice/Device)
extern "C"  bool CameraDevice_Open_m1240004298 (CameraDevice_t1437158327 * __this, int32_t ___camera0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.CameraDevice::Open(System.Int32)
extern "C"  bool CameraDevice_Open_m2502120234 (CameraDevice_t1437158327 * __this, int32_t ___camera0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.CameraDevice::Close()
extern "C"  bool CameraDevice_Close_m496270379 (CameraDevice_t1437158327 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.CameraDevice::SetFocusMode(EasyAR.CameraDevice/FocusMode)
extern "C"  bool CameraDevice_SetFocusMode_m2924985704 (CameraDevice_t1437158327 * __this, int32_t ___focusMode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
