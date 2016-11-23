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

// EasyAR.Augmenter
struct Augmenter_t2439877124;
// EasyAR.Frame
struct Frame_t3347454707;
// EasyAR.CameraDevice
struct CameraDevice_t1437158327;

#include "codegen/il2cpp-codegen.h"
#include "EasyAR_Unity_EasyAR_Vector2I2400269878.h"
#include "EasyAR_Unity_EasyAR_Image_PixelFormat3994601934.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "EasyAR_Unity_EasyAR_CameraDevice1437158327.h"

// System.Void EasyAR.Augmenter::.ctor()
extern "C"  void Augmenter__ctor_m2721387236 (Augmenter_t2439877124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// EasyAR.Vector2I EasyAR.Augmenter::get_VideoBackgroundTextureSize()
extern "C"  Vector2I_t2400269878  Augmenter_get_VideoBackgroundTextureSize_m4008602906 (Augmenter_t2439877124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// EasyAR.Image/PixelFormat EasyAR.Augmenter::get_VideoBackgroundTextureFormat()
extern "C"  int32_t Augmenter_get_VideoBackgroundTextureFormat_m1052420121 (Augmenter_t2439877124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.Augmenter::set_VideoBackgroundTextureId(System.IntPtr)
extern "C"  void Augmenter_set_VideoBackgroundTextureId_m819589994 (Augmenter_t2439877124 * __this, IntPtr_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// EasyAR.Frame EasyAR.Augmenter::NewFrame()
extern "C"  Frame_t3347454707 * Augmenter_NewFrame_m1336766896 (Augmenter_t2439877124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.Augmenter::AttachCamera(EasyAR.CameraDevice)
extern "C"  bool Augmenter_AttachCamera_m2617852806 (Augmenter_t2439877124 * __this, CameraDevice_t1437158327 * ___cam0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.Augmenter::DetachCamera(EasyAR.CameraDevice)
extern "C"  bool Augmenter_DetachCamera_m448575864 (Augmenter_t2439877124 * __this, CameraDevice_t1437158327 * ___cam0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.Augmenter::RetrieveVideoBackground()
extern "C"  void Augmenter_RetrieveVideoBackground_m108880559 (Augmenter_t2439877124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.Augmenter::Dispose(System.Boolean)
extern "C"  void Augmenter_Dispose_m2121055704 (Augmenter_t2439877124 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
