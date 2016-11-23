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

// EasyAR.ImageTrackerBaseBehaviour
struct ImageTrackerBaseBehaviour_t4067655573;
// System.Action`4<EasyAR.ImageTrackerBaseBehaviour,EasyAR.ImageTargetBaseBehaviour,EasyAR.Target,System.Boolean>
struct Action_4_t197553329;
// System.Collections.Generic.List`1<EasyAR.ImageTargetBaseBehaviour>
struct List_1_t2913954220;
// EasyAR.DeviceAbstractBehaviour
struct DeviceAbstractBehaviour_t101220683;
// EasyAR.ImageTracker
struct ImageTracker_t2344666937;
// EasyAR.Target
struct Target_t1661091757;
// EasyAR.ImageTargetBaseBehaviour
struct ImageTargetBaseBehaviour_t1545768668;

#include "codegen/il2cpp-codegen.h"
#include "EasyAR_Unity_EasyAR_DeviceAbstractBehaviour101220683.h"
#include "EasyAR_Unity_EasyAR_ImageTracker2344666937.h"
#include "EasyAR_Unity_EasyAR_Target1661091757.h"
#include "EasyAR_Unity_EasyAR_ImageTargetBaseBehaviour1545768668.h"

// System.Void EasyAR.ImageTrackerBaseBehaviour::.ctor()
extern "C"  void ImageTrackerBaseBehaviour__ctor_m3483848819 (ImageTrackerBaseBehaviour_t4067655573 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTrackerBaseBehaviour::add_TargetLoad(System.Action`4<EasyAR.ImageTrackerBaseBehaviour,EasyAR.ImageTargetBaseBehaviour,EasyAR.Target,System.Boolean>)
extern "C"  void ImageTrackerBaseBehaviour_add_TargetLoad_m3708501959 (ImageTrackerBaseBehaviour_t4067655573 * __this, Action_4_t197553329 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTrackerBaseBehaviour::remove_TargetLoad(System.Action`4<EasyAR.ImageTrackerBaseBehaviour,EasyAR.ImageTargetBaseBehaviour,EasyAR.Target,System.Boolean>)
extern "C"  void ImageTrackerBaseBehaviour_remove_TargetLoad_m152914276 (ImageTrackerBaseBehaviour_t4067655573 * __this, Action_4_t197553329 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTrackerBaseBehaviour::add_TargetUnload(System.Action`4<EasyAR.ImageTrackerBaseBehaviour,EasyAR.ImageTargetBaseBehaviour,EasyAR.Target,System.Boolean>)
extern "C"  void ImageTrackerBaseBehaviour_add_TargetUnload_m3143325728 (ImageTrackerBaseBehaviour_t4067655573 * __this, Action_4_t197553329 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTrackerBaseBehaviour::remove_TargetUnload(System.Action`4<EasyAR.ImageTrackerBaseBehaviour,EasyAR.ImageTargetBaseBehaviour,EasyAR.Target,System.Boolean>)
extern "C"  void ImageTrackerBaseBehaviour_remove_TargetUnload_m722562685 (ImageTrackerBaseBehaviour_t4067655573 * __this, Action_4_t197553329 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<EasyAR.ImageTargetBaseBehaviour> EasyAR.ImageTrackerBaseBehaviour::get_LoadedTargetBehaviours()
extern "C"  List_1_t2913954220 * ImageTrackerBaseBehaviour_get_LoadedTargetBehaviours_m1864198298 (ImageTrackerBaseBehaviour_t4067655573 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTrackerBaseBehaviour::set_LoadedTargetBehaviours(System.Collections.Generic.List`1<EasyAR.ImageTargetBaseBehaviour>)
extern "C"  void ImageTrackerBaseBehaviour_set_LoadedTargetBehaviours_m712463353 (ImageTrackerBaseBehaviour_t4067655573 * __this, List_1_t2913954220 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.ImageTrackerBaseBehaviour::get_SimultaneousNum()
extern "C"  int32_t ImageTrackerBaseBehaviour_get_SimultaneousNum_m1452767245 (ImageTrackerBaseBehaviour_t4067655573 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTrackerBaseBehaviour::set_SimultaneousNum(System.Int32)
extern "C"  void ImageTrackerBaseBehaviour_set_SimultaneousNum_m1305936400 (ImageTrackerBaseBehaviour_t4067655573 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTrackerBaseBehaviour::OnDestroy()
extern "C"  void ImageTrackerBaseBehaviour_OnDestroy_m2711991276 (ImageTrackerBaseBehaviour_t4067655573 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTrackerBaseBehaviour::Initialize()
extern "C"  void ImageTrackerBaseBehaviour_Initialize_m1561613825 (ImageTrackerBaseBehaviour_t4067655573 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTrackerBaseBehaviour::Start()
extern "C"  void ImageTrackerBaseBehaviour_Start_m2430986611 (ImageTrackerBaseBehaviour_t4067655573 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTrackerBaseBehaviour::OnDeviceStart(EasyAR.DeviceAbstractBehaviour,System.Boolean)
extern "C"  void ImageTrackerBaseBehaviour_OnDeviceStart_m292813225 (ImageTrackerBaseBehaviour_t4067655573 * __this, DeviceAbstractBehaviour_t101220683 * ___device0, bool ___status1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTrackerBaseBehaviour::DetachAndStop()
extern "C"  void ImageTrackerBaseBehaviour_DetachAndStop_m1732148087 (ImageTrackerBaseBehaviour_t4067655573 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTrackerBaseBehaviour::OnTargetLoad(EasyAR.ImageTracker,EasyAR.Target,System.Boolean)
extern "C"  void ImageTrackerBaseBehaviour_OnTargetLoad_m3265180554 (ImageTrackerBaseBehaviour_t4067655573 * __this, ImageTracker_t2344666937 * ___tracker0, Target_t1661091757 * ___target1, bool ___status2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTrackerBaseBehaviour::OnTargetUnload(EasyAR.ImageTracker,EasyAR.Target,System.Boolean)
extern "C"  void ImageTrackerBaseBehaviour_OnTargetUnload_m1363492195 (ImageTrackerBaseBehaviour_t4067655573 * __this, ImageTracker_t2344666937 * ___tracker0, Target_t1661091757 * ___target1, bool ___status2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTrackerBaseBehaviour::Update()
extern "C"  void ImageTrackerBaseBehaviour_Update_m2351993082 (ImageTrackerBaseBehaviour_t4067655573 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTrackerBaseBehaviour::LoadImageTargetBehaviour(EasyAR.ImageTargetBaseBehaviour)
extern "C"  void ImageTrackerBaseBehaviour_LoadImageTargetBehaviour_m3432095343 (ImageTrackerBaseBehaviour_t4067655573 * __this, ImageTargetBaseBehaviour_t1545768668 * ___imageTargetBaseBehaviour0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTrackerBaseBehaviour::UnloadImageTargetBehaviour(EasyAR.ImageTargetBaseBehaviour)
extern "C"  void ImageTrackerBaseBehaviour_UnloadImageTargetBehaviour_m794770934 (ImageTrackerBaseBehaviour_t4067655573 * __this, ImageTargetBaseBehaviour_t1545768668 * ___imageTargetBaseBehaviour0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.ImageTrackerBaseBehaviour::StartTrack()
extern "C"  bool ImageTrackerBaseBehaviour_StartTrack_m3010225478 (ImageTrackerBaseBehaviour_t4067655573 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.ImageTrackerBaseBehaviour::StopTrack()
extern "C"  bool ImageTrackerBaseBehaviour_StopTrack_m277554478 (ImageTrackerBaseBehaviour_t4067655573 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
