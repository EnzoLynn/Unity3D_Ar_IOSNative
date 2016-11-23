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

// EasyAR.StefansImageTargetBehaviour
struct StefansImageTargetBehaviour_t50754843;
// UnityEngine.Transform
struct Transform_t1659122786;
// EasyAR.ImageTargetBaseBehaviour
struct ImageTargetBaseBehaviour_t1545768668;
// EasyAR.ImageTrackerBaseBehaviour
struct ImageTrackerBaseBehaviour_t4067655573;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Transform1659122786.h"
#include "EasyAR_Unity_EasyAR_ImageTargetBaseBehaviour1545768668.h"
#include "EasyAR_Unity_EasyAR_ImageTrackerBaseBehaviour4067655573.h"

// System.Void EasyAR.StefansImageTargetBehaviour::.ctor()
extern "C"  void StefansImageTargetBehaviour__ctor_m3839526977 (StefansImageTargetBehaviour_t50754843 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.StefansImageTargetBehaviour::Start()
extern "C"  void StefansImageTargetBehaviour_Start_m2786664769 (StefansImageTargetBehaviour_t50754843 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.StefansImageTargetBehaviour::Awake()
extern "C"  void StefansImageTargetBehaviour_Awake_m4077132196 (StefansImageTargetBehaviour_t50754843 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.StefansImageTargetBehaviour::HideObjects(UnityEngine.Transform)
extern "C"  void StefansImageTargetBehaviour_HideObjects_m1404633100 (StefansImageTargetBehaviour_t50754843 * __this, Transform_t1659122786 * ___trans0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.StefansImageTargetBehaviour::ShowObjects(UnityEngine.Transform)
extern "C"  void StefansImageTargetBehaviour_ShowObjects_m3366945927 (StefansImageTargetBehaviour_t50754843 * __this, Transform_t1659122786 * ___trans0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.StefansImageTargetBehaviour::OnTargetFound(EasyAR.ImageTargetBaseBehaviour)
extern "C"  void StefansImageTargetBehaviour_OnTargetFound_m4140998502 (StefansImageTargetBehaviour_t50754843 * __this, ImageTargetBaseBehaviour_t1545768668 * ___behaviour0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.StefansImageTargetBehaviour::OnTargetLost(EasyAR.ImageTargetBaseBehaviour)
extern "C"  void StefansImageTargetBehaviour_OnTargetLost_m648402208 (StefansImageTargetBehaviour_t50754843 * __this, ImageTargetBaseBehaviour_t1545768668 * ___behaviour0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.StefansImageTargetBehaviour::OnTargetLoad(EasyAR.ImageTargetBaseBehaviour,EasyAR.ImageTrackerBaseBehaviour,System.Boolean)
extern "C"  void StefansImageTargetBehaviour_OnTargetLoad_m1291134441 (StefansImageTargetBehaviour_t50754843 * __this, ImageTargetBaseBehaviour_t1545768668 * ___behaviour0, ImageTrackerBaseBehaviour_t4067655573 * ___tracker1, bool ___status2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.StefansImageTargetBehaviour::OnTargetUnload(EasyAR.ImageTargetBaseBehaviour,EasyAR.ImageTrackerBaseBehaviour,System.Boolean)
extern "C"  void StefansImageTargetBehaviour_OnTargetUnload_m1980925296 (StefansImageTargetBehaviour_t50754843 * __this, ImageTargetBaseBehaviour_t1545768668 * ___behaviour0, ImageTrackerBaseBehaviour_t4067655573 * ___tracker1, bool ___status2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
