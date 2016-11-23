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

// EasyAR.ImageTargetBaseBehaviour
struct ImageTargetBaseBehaviour_t1545768668;
// System.Action`1<EasyAR.ImageTargetBaseBehaviour>
struct Action_1_t1941584804;
// System.Action`3<EasyAR.ImageTargetBaseBehaviour,EasyAR.ImageTrackerBaseBehaviour,System.Boolean>
struct Action_3_t2429747035;
// System.Collections.Generic.List`1<EasyAR.ImageTrackerBaseBehaviour>
struct List_1_t1140873829;
// EasyAR.ImageTrackerBaseBehaviour
struct ImageTrackerBaseBehaviour_t4067655573;
// EasyAR.ImageTarget
struct ImageTarget_t872902802;
// System.String
struct String_t;
// EasyAR.Target
struct Target_t1661091757;
// EasyAR.AugmentedTarget
struct AugmentedTarget_t3472131047;
// UnityEngine.Transform
struct Transform_t1659122786;

#include "codegen/il2cpp-codegen.h"
#include "EasyAR_Unity_EasyAR_ImageTrackerBaseBehaviour4067655573.h"
#include "EasyAR_Unity_EasyAR_ImageTarget872902802.h"
#include "mscorlib_System_String7231557.h"
#include "EasyAR_Unity_EasyAR_StorageType2455874075.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "EasyAR_Unity_EasyAR_Target1661091757.h"
#include "EasyAR_Unity_EasyAR_AugmentedTarget3472131047.h"
#include "UnityEngine_UnityEngine_Transform1659122786.h"

// System.Void EasyAR.ImageTargetBaseBehaviour::.ctor()
extern "C"  void ImageTargetBaseBehaviour__ctor_m157506948 (ImageTargetBaseBehaviour_t1545768668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTargetBaseBehaviour::.cctor()
extern "C"  void ImageTargetBaseBehaviour__cctor_m105651881 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTargetBaseBehaviour::add_TargetFound(System.Action`1<EasyAR.ImageTargetBaseBehaviour>)
extern "C"  void ImageTargetBaseBehaviour_add_TargetFound_m1922441660 (ImageTargetBaseBehaviour_t1545768668 * __this, Action_1_t1941584804 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTargetBaseBehaviour::remove_TargetFound(System.Action`1<EasyAR.ImageTargetBaseBehaviour>)
extern "C"  void ImageTargetBaseBehaviour_remove_TargetFound_m2127463869 (ImageTargetBaseBehaviour_t1545768668 * __this, Action_1_t1941584804 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTargetBaseBehaviour::add_TargetLost(System.Action`1<EasyAR.ImageTargetBaseBehaviour>)
extern "C"  void ImageTargetBaseBehaviour_add_TargetLost_m2125879738 (ImageTargetBaseBehaviour_t1545768668 * __this, Action_1_t1941584804 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTargetBaseBehaviour::remove_TargetLost(System.Action`1<EasyAR.ImageTargetBaseBehaviour>)
extern "C"  void ImageTargetBaseBehaviour_remove_TargetLost_m1439756697 (ImageTargetBaseBehaviour_t1545768668 * __this, Action_1_t1941584804 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTargetBaseBehaviour::add_TargetLoad(System.Action`3<EasyAR.ImageTargetBaseBehaviour,EasyAR.ImageTrackerBaseBehaviour,System.Boolean>)
extern "C"  void ImageTargetBaseBehaviour_add_TargetLoad_m4121882003 (ImageTargetBaseBehaviour_t1545768668 * __this, Action_3_t2429747035 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTargetBaseBehaviour::remove_TargetLoad(System.Action`3<EasyAR.ImageTargetBaseBehaviour,EasyAR.ImageTrackerBaseBehaviour,System.Boolean>)
extern "C"  void ImageTargetBaseBehaviour_remove_TargetLoad_m863808370 (ImageTargetBaseBehaviour_t1545768668 * __this, Action_3_t2429747035 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTargetBaseBehaviour::add_TargetUnload(System.Action`3<EasyAR.ImageTargetBaseBehaviour,EasyAR.ImageTrackerBaseBehaviour,System.Boolean>)
extern "C"  void ImageTargetBaseBehaviour_add_TargetUnload_m2264096236 (ImageTargetBaseBehaviour_t1545768668 * __this, Action_3_t2429747035 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTargetBaseBehaviour::remove_TargetUnload(System.Action`3<EasyAR.ImageTargetBaseBehaviour,EasyAR.ImageTrackerBaseBehaviour,System.Boolean>)
extern "C"  void ImageTargetBaseBehaviour_remove_TargetUnload_m2286493707 (ImageTargetBaseBehaviour_t1545768668 * __this, Action_3_t2429747035 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<EasyAR.ImageTrackerBaseBehaviour> EasyAR.ImageTargetBaseBehaviour::get_Loaders()
extern "C"  List_1_t1140873829 * ImageTargetBaseBehaviour_get_Loaders_m2975146656 (ImageTargetBaseBehaviour_t1545768668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTargetBaseBehaviour::set_Loaders(System.Collections.Generic.List`1<EasyAR.ImageTrackerBaseBehaviour>)
extern "C"  void ImageTargetBaseBehaviour_set_Loaders_m1068675873 (ImageTargetBaseBehaviour_t1545768668 * __this, List_1_t1140873829 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTargetBaseBehaviour::Bind(EasyAR.ImageTrackerBaseBehaviour)
extern "C"  void ImageTargetBaseBehaviour_Bind_m3152300713 (ImageTargetBaseBehaviour_t1545768668 * __this, ImageTrackerBaseBehaviour_t4067655573 * ___behaviour0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTargetBaseBehaviour::Awake()
extern "C"  void ImageTargetBaseBehaviour_Awake_m395112167 (ImageTargetBaseBehaviour_t1545768668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTargetBaseBehaviour::Init()
extern "C"  void ImageTargetBaseBehaviour_Init_m1896280144 (ImageTargetBaseBehaviour_t1545768668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTargetBaseBehaviour::Start()
extern "C"  void ImageTargetBaseBehaviour_Start_m3399612036 (ImageTargetBaseBehaviour_t1545768668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTargetBaseBehaviour::Update()
extern "C"  void ImageTargetBaseBehaviour_Update_m2314610185 (ImageTargetBaseBehaviour_t1545768668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTargetBaseBehaviour::OnDestroy()
extern "C"  void ImageTargetBaseBehaviour_OnDestroy_m1434636413 (ImageTargetBaseBehaviour_t1545768668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTargetBaseBehaviour::UnloadFromAllTrackers()
extern "C"  void ImageTargetBaseBehaviour_UnloadFromAllTrackers_m1573226965 (ImageTargetBaseBehaviour_t1545768668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.ImageTargetBaseBehaviour::SetupWithTarget(EasyAR.ImageTarget)
extern "C"  bool ImageTargetBaseBehaviour_SetupWithTarget_m2530331281 (ImageTargetBaseBehaviour_t1545768668 * __this, ImageTarget_t872902802 * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.ImageTargetBaseBehaviour::SetupWithTargetInternal(EasyAR.ImageTarget)
extern "C"  bool ImageTargetBaseBehaviour_SetupWithTargetInternal_m415290350 (ImageTargetBaseBehaviour_t1545768668 * __this, ImageTarget_t872902802 * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTargetBaseBehaviour::UpdateTargetSize()
extern "C"  void ImageTargetBaseBehaviour_UpdateTargetSize_m430039259 (ImageTargetBaseBehaviour_t1545768668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTargetBaseBehaviour::CheckSize()
extern "C"  void ImageTargetBaseBehaviour_CheckSize_m237361419 (ImageTargetBaseBehaviour_t1545768668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTargetBaseBehaviour::OnFoundInFrame()
extern "C"  void ImageTargetBaseBehaviour_OnFoundInFrame_m405469221 (ImageTargetBaseBehaviour_t1545768668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTargetBaseBehaviour::AddLoader(EasyAR.ImageTrackerBaseBehaviour)
extern "C"  void ImageTargetBaseBehaviour_AddLoader_m2138946466 (ImageTargetBaseBehaviour_t1545768668 * __this, ImageTrackerBaseBehaviour_t4067655573 * ___trackerBehaviour0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTargetBaseBehaviour::RemoveLoader(EasyAR.ImageTrackerBaseBehaviour)
extern "C"  void ImageTargetBaseBehaviour_RemoveLoader_m3723311779 (ImageTargetBaseBehaviour_t1545768668 * __this, ImageTrackerBaseBehaviour_t4067655573 * ___trackerBehaviour0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTargetBaseBehaviour::LoadIntoTrackerBehaviour()
extern "C"  void ImageTargetBaseBehaviour_LoadIntoTrackerBehaviour_m4144979947 (ImageTargetBaseBehaviour_t1545768668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.ImageTargetBaseBehaviour::SetupWithJsonFile(System.String,EasyAR.StorageType,System.String)
extern "C"  bool ImageTargetBaseBehaviour_SetupWithJsonFile_m2684042651 (ImageTargetBaseBehaviour_t1545768668 * __this, String_t* ___path0, int32_t ___storageType1, String_t* ___targetname2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.ImageTargetBaseBehaviour::SetupWithJsonString(System.String,EasyAR.StorageType,System.String)
extern "C"  bool ImageTargetBaseBehaviour_SetupWithJsonString_m2110786608 (ImageTargetBaseBehaviour_t1545768668 * __this, String_t* ___json0, int32_t ___storageType1, String_t* ___targetname2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.ImageTargetBaseBehaviour::SetupWithImage(System.String,EasyAR.StorageType,System.String,UnityEngine.Vector2)
extern "C"  bool ImageTargetBaseBehaviour_SetupWithImage_m2124827142 (ImageTargetBaseBehaviour_t1545768668 * __this, String_t* ___path0, int32_t ___storageType1, String_t* ___targetname2, Vector2_t4282066565  ___size3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTargetBaseBehaviour::RegisterSelf(EasyAR.Target)
extern "C"  void ImageTargetBaseBehaviour_RegisterSelf_m3424389719 (ImageTargetBaseBehaviour_t1545768668 * __this, Target_t1661091757 * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// EasyAR.ImageTargetBaseBehaviour EasyAR.ImageTargetBaseBehaviour::QueryBehaviour(EasyAR.Target)
extern "C"  ImageTargetBaseBehaviour_t1545768668 * ImageTargetBaseBehaviour_QueryBehaviour_m1091668265 (Il2CppObject * __this /* static, unused */, Target_t1661091757 * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTargetBaseBehaviour::AdjustTransform(EasyAR.AugmentedTarget,UnityEngine.Transform,System.Boolean)
extern "C"  void ImageTargetBaseBehaviour_AdjustTransform_m3061588269 (ImageTargetBaseBehaviour_t1545768668 * __this, AugmentedTarget_t3472131047 * ___augmentedTarget0, Transform_t1659122786 * ___centerTransform1, bool ___rFlag2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTargetBaseBehaviour::OnTargetFound()
extern "C"  void ImageTargetBaseBehaviour_OnTargetFound_m2128586292 (ImageTargetBaseBehaviour_t1545768668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTargetBaseBehaviour::OnTargetLost()
extern "C"  void ImageTargetBaseBehaviour_OnTargetLost_m656025300 (ImageTargetBaseBehaviour_t1545768668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTargetBaseBehaviour::OnTargetLoad(EasyAR.ImageTrackerBaseBehaviour,System.Boolean)
extern "C"  void ImageTargetBaseBehaviour_OnTargetLoad_m1724773563 (ImageTargetBaseBehaviour_t1545768668 * __this, ImageTrackerBaseBehaviour_t4067655573 * ___tracker0, bool ___status1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTargetBaseBehaviour::OnTargetUnload(EasyAR.ImageTrackerBaseBehaviour,System.Boolean)
extern "C"  void ImageTargetBaseBehaviour_OnTargetUnload_m1376648066 (ImageTargetBaseBehaviour_t1545768668 * __this, ImageTrackerBaseBehaviour_t4067655573 * ___tracker0, bool ___status1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
