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

// EasyAR.ImageTracker
struct ImageTracker_t2344666937;
// System.Action`3<EasyAR.ImageTracker,EasyAR.Target,System.Boolean>
struct Action_3_t1756301112;
// EasyAR.CameraDevice
struct CameraDevice_t1437158327;
// EasyAR.Target
struct Target_t1661091757;

#include "codegen/il2cpp-codegen.h"
#include "EasyAR_Unity_EasyAR_CameraDevice1437158327.h"
#include "EasyAR_Unity_EasyAR_Target1661091757.h"
#include "mscorlib_System_IntPtr4010401971.h"

// System.Void EasyAR.ImageTracker::.ctor()
extern "C"  void ImageTracker__ctor_m1847220167 (ImageTracker_t2344666937 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTracker::.cctor()
extern "C"  void ImageTracker__cctor_m947154118 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTracker::add_TargetLoad(System.Action`3<EasyAR.ImageTracker,EasyAR.Target,System.Boolean>)
extern "C"  void ImageTracker_add_TargetLoad_m1577804307 (ImageTracker_t2344666937 * __this, Action_3_t1756301112 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTracker::remove_TargetLoad(System.Action`3<EasyAR.ImageTracker,EasyAR.Target,System.Boolean>)
extern "C"  void ImageTracker_remove_TargetLoad_m942775342 (ImageTracker_t2344666937 * __this, Action_3_t1756301112 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTracker::add_TargetUnload(System.Action`3<EasyAR.ImageTracker,EasyAR.Target,System.Boolean>)
extern "C"  void ImageTracker_add_TargetUnload_m3048817690 (ImageTracker_t2344666937 * __this, Action_3_t1756301112 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTracker::remove_TargetUnload(System.Action`3<EasyAR.ImageTracker,EasyAR.Target,System.Boolean>)
extern "C"  void ImageTracker_remove_TargetUnload_m2671338357 (ImageTracker_t2344666937 * __this, Action_3_t1756301112 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTracker::set_IsMultithreadCallback(System.Boolean)
extern "C"  void ImageTracker_set_IsMultithreadCallback_m2514519517 (ImageTracker_t2344666937 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.ImageTracker::get_IsMultithreadCallback()
extern "C"  bool ImageTracker_get_IsMultithreadCallback_m740583910 (ImageTracker_t2344666937 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.ImageTracker::get_SimultaneousNum()
extern "C"  int32_t ImageTracker_get_SimultaneousNum_m965571693 (ImageTracker_t2344666937 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTracker::set_SimultaneousNum(System.Int32)
extern "C"  void ImageTracker_set_SimultaneousNum_m4170762340 (ImageTracker_t2344666937 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTracker::Dispose(System.Boolean)
extern "C"  void ImageTracker_Dispose_m2246696123 (ImageTracker_t2344666937 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.ImageTracker::CheckCallback()
extern "C"  bool ImageTracker_CheckCallback_m1218305310 (ImageTracker_t2344666937 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.ImageTracker::AttachCamera(EasyAR.CameraDevice)
extern "C"  bool ImageTracker_AttachCamera_m1533830465 (ImageTracker_t2344666937 * __this, CameraDevice_t1437158327 * ___cam0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.ImageTracker::DetachCamera(EasyAR.CameraDevice)
extern "C"  bool ImageTracker_DetachCamera_m3659520819 (ImageTracker_t2344666937 * __this, CameraDevice_t1437158327 * ___cam0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTracker::LoadTarget(EasyAR.Target)
extern "C"  void ImageTracker_LoadTarget_m3678320530 (ImageTracker_t2344666937 * __this, Target_t1661091757 * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTracker::UnloadTarget(EasyAR.Target)
extern "C"  void ImageTracker_UnloadTarget_m1502015001 (ImageTracker_t2344666937 * __this, Target_t1661091757 * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.ImageTracker::Start()
extern "C"  bool ImageTracker_Start_m2202519251 (ImageTracker_t2344666937 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.ImageTracker::Stop()
extern "C"  bool ImageTracker_Stop_m3535145107 (ImageTracker_t2344666937 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTracker::OnLoad(System.IntPtr,System.IntPtr,System.Boolean)
extern "C"  void ImageTracker_OnLoad_m2779002269 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___target1, bool ___status2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_ImageTracker_OnLoad_m2779002269(intptr_t ___obj0, intptr_t ___target1, int32_t ___status2);
// System.Void EasyAR.ImageTracker::OnUnload(System.IntPtr,System.IntPtr,System.Boolean)
extern "C"  void ImageTracker_OnUnload_m3028636534 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___target1, bool ___status2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_ImageTracker_OnUnload_m3028636534(intptr_t ___obj0, intptr_t ___target1, int32_t ___status2);
