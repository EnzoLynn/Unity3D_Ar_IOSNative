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

// EasyAR.StefansARBehaviour
struct StefansARBehaviour_t1002609348;
// EasyAR.AugmenterBaseBehaviour
struct AugmenterBaseBehaviour_t2688407210;
// EasyAR.ImageTargetBaseBehaviour
struct ImageTargetBaseBehaviour_t1545768668;
// EasyAR.Target
struct Target_t1661091757;
// EasyAR.ImageTrackerBaseBehaviour
struct ImageTrackerBaseBehaviour_t4067655573;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "EasyAR_Unity_EasyAR_AugmenterBaseBehaviour2688407210.h"
#include "EasyAR_Unity_EasyAR_ImageTargetBaseBehaviour1545768668.h"
#include "EasyAR_Unity_EasyAR_Target1661091757.h"
#include "EasyAR_Unity_EasyAR_ImageTrackerBaseBehaviour4067655573.h"
#include "mscorlib_System_String7231557.h"

// System.Void EasyAR.StefansARBehaviour::.ctor()
extern "C"  void StefansARBehaviour__ctor_m2344953224 (StefansARBehaviour_t1002609348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.StefansARBehaviour::Awake()
extern "C"  void StefansARBehaviour_Awake_m2582558443 (StefansARBehaviour_t1002609348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.StefansARBehaviour::OnTargetFound(EasyAR.AugmenterBaseBehaviour,EasyAR.ImageTargetBaseBehaviour,EasyAR.Target)
extern "C"  void StefansARBehaviour_OnTargetFound_m3504537442 (StefansARBehaviour_t1002609348 * __this, AugmenterBaseBehaviour_t2688407210 * ___behaviour0, ImageTargetBaseBehaviour_t1545768668 * ___targetBehaviour1, Target_t1661091757 * ___target2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.StefansARBehaviour::OnTargetLost(EasyAR.AugmenterBaseBehaviour,EasyAR.ImageTargetBaseBehaviour,EasyAR.Target)
extern "C"  void StefansARBehaviour_OnTargetLost_m2551011402 (StefansARBehaviour_t1002609348 * __this, AugmenterBaseBehaviour_t2688407210 * ___behaviour0, ImageTargetBaseBehaviour_t1545768668 * ___targetBehaviour1, Target_t1661091757 * ___target2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.StefansARBehaviour::OnTargetLoad(EasyAR.ImageTrackerBaseBehaviour,EasyAR.ImageTargetBaseBehaviour,EasyAR.Target,System.Boolean)
extern "C"  void StefansARBehaviour_OnTargetLoad_m502967150 (StefansARBehaviour_t1002609348 * __this, ImageTrackerBaseBehaviour_t4067655573 * ___behaviour0, ImageTargetBaseBehaviour_t1545768668 * ___targetBehaviour1, Target_t1661091757 * ___target2, bool ___status3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.StefansARBehaviour::OnTargetUnload(EasyAR.ImageTrackerBaseBehaviour,EasyAR.ImageTargetBaseBehaviour,EasyAR.Target,System.Boolean)
extern "C"  void StefansARBehaviour_OnTargetUnload_m1898872053 (StefansARBehaviour_t1002609348 * __this, ImageTrackerBaseBehaviour_t4067655573 * ___behaviour0, ImageTargetBaseBehaviour_t1545768668 * ___targetBehaviour1, Target_t1661091757 * ___target2, bool ___status3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.StefansARBehaviour::OnTextMessage(EasyAR.AugmenterBaseBehaviour,System.String)
extern "C"  void StefansARBehaviour_OnTextMessage_m539546084 (StefansARBehaviour_t1002609348 * __this, AugmenterBaseBehaviour_t2688407210 * ___behaviour0, String_t* ___text1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
