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

// EasyAR.EngineNative
struct EngineNative_t3505269461;
// System.String
struct String_t;
// System.Single[]
struct SingleU5BU5D_t2316563989;
// EasyAR.EngineNative/LogFunc
struct LogFunc_t2453857357;
// System.Int32[]
struct Int32U5BU5D_t3230847821;
// EasyAR.ImageTracker/TargetLoadCallbackC
struct TargetLoadCallbackC_t3429128016;
// EasyAR.VideoPlayer/CallBack
struct CallBack_t2228309331;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "EasyAR_Unity_EasyAR_EngineNative_LogFunc2453857357.h"
#include "EasyAR_Unity_EasyAR_ImageTracker_TargetLoadCallbac3429128016.h"
#include "EasyAR_Unity_EasyAR_VideoPlayer_CallBack2228309331.h"

// System.Void EasyAR.EngineNative::.ctor()
extern "C"  void EngineNative__ctor_m4010623915 (EngineNative_t3505269461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::Log(System.String)
extern "C"  void EngineNative_Log_m398925589 (Il2CppObject * __this /* static, unused */, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_EngineNative_Log_m398925589(char* ___str0);
// System.Void EasyAR.EngineNative::DeInitialize()
extern "C"  void EngineNative_DeInitialize_m1617157866 (EngineNative_t3505269461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::Initialize(System.String,System.IntPtr)
extern "C"  bool EngineNative_Initialize_m3147467699 (EngineNative_t3505269461 * __this, String_t* ___key0, IntPtr_t ___activity1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::Resume()
extern "C"  void EngineNative_Resume_m4138748710 (EngineNative_t3505269461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::Pause()
extern "C"  void EngineNative_Pause_m4064749887 (EngineNative_t3505269461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::GetProjectionGL(System.IntPtr,System.Single,System.Single,System.Int32,System.Single[])
extern "C"  void EngineNative_GetProjectionGL_m1909350639 (EngineNative_t3505269461 * __this, IntPtr_t ___calib0, float ___nearPlane1, float ___farPlane2, int32_t ___rotation3, SingleU5BU5D_t2316563989* ___outarr4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::SetAssetPath(System.String)
extern "C"  void EngineNative_SetAssetPath_m4154036758 (EngineNative_t3505269461 * __this, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::RegisterLogFunc(EasyAR.EngineNative/LogFunc)
extern "C"  void EngineNative_RegisterLogFunc_m3834681591 (EngineNative_t3505269461 * __this, LogFunc_t2453857357 * ___func0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::Base_IsValid(System.IntPtr)
extern "C"  bool EngineNative_Base_IsValid_m1117371107 (EngineNative_t3505269461 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNative::Rotate(System.Int32)
extern "C"  int32_t EngineNative_Rotate_m3117895807 (EngineNative_t3505269461 * __this, int32_t ___rot0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNative::Create_Augmenter()
extern "C"  IntPtr_t EngineNative_Create_Augmenter_m3909202111 (EngineNative_t3505269461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::Destory_Augmenter(System.IntPtr)
extern "C"  void EngineNative_Destory_Augmenter_m3243389016 (EngineNative_t3505269461 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNative::Augmenter_newFrame(System.IntPtr)
extern "C"  IntPtr_t EngineNative_Augmenter_newFrame_m3686651362 (EngineNative_t3505269461 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::Augmenter_attachCamera(System.IntPtr,System.IntPtr)
extern "C"  bool EngineNative_Augmenter_attachCamera_m1923078026 (EngineNative_t3505269461 * __this, IntPtr_t ___obj0, IntPtr_t ___c1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::Augmenter_detachCamera(System.IntPtr,System.IntPtr)
extern "C"  bool EngineNative_Augmenter_detachCamera_m4257168252 (EngineNative_t3505269461 * __this, IntPtr_t ___obj0, IntPtr_t ___c1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::Augmenter_getVideoBackgroundTextureSize(System.IntPtr,System.Int32[])
extern "C"  void EngineNative_Augmenter_getVideoBackgroundTextureSize_m1672689426 (EngineNative_t3505269461 * __this, IntPtr_t ___obj0, Int32U5BU5D_t3230847821* ___outarr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNative::Augmenter_getVideoBackgroundTextureFormat(System.IntPtr)
extern "C"  int32_t EngineNative_Augmenter_getVideoBackgroundTextureFormat_m2564989223 (EngineNative_t3505269461 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::Augmenter_setVideoBackgroundTextureID(System.IntPtr,System.IntPtr)
extern "C"  void EngineNative_Augmenter_setVideoBackgroundTextureID_m4265482507 (EngineNative_t3505269461 * __this, IntPtr_t ___obj0, IntPtr_t ___id1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNative::Augmenter_getID(System.IntPtr)
extern "C"  int32_t EngineNative_Augmenter_getID_m250955669 (EngineNative_t3505269461 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNative::Augmenter_getRenderingFlag(System.IntPtr)
extern "C"  int32_t EngineNative_Augmenter_getRenderingFlag_m1210863806 (EngineNative_t3505269461 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNative::Create_CameraCalibration()
extern "C"  IntPtr_t EngineNative_Create_CameraCalibration_m314099078 (EngineNative_t3505269461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::Destory_CameraCalibration(System.IntPtr)
extern "C"  void EngineNative_Destory_CameraCalibration_m996951025 (EngineNative_t3505269461 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::CameraCalibration_getSize(System.IntPtr,System.Int32[])
extern "C"  void EngineNative_CameraCalibration_getSize_m3860088743 (EngineNative_t3505269461 * __this, IntPtr_t ___obj0, Int32U5BU5D_t3230847821* ___outarr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::CameraCalibration_getFocalLength(System.IntPtr,System.Single[])
extern "C"  void EngineNative_CameraCalibration_getFocalLength_m3001507631 (EngineNative_t3505269461 * __this, IntPtr_t ___obj0, SingleU5BU5D_t2316563989* ___outarr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::CameraCalibration_getPrincipalPoint(System.IntPtr,System.Single[])
extern "C"  void EngineNative_CameraCalibration_getPrincipalPoint_m2842644592 (EngineNative_t3505269461 * __this, IntPtr_t ___obj0, SingleU5BU5D_t2316563989* ___outarr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::CameraCalibration_getDistortionParameters(System.IntPtr,System.Single[])
extern "C"  void EngineNative_CameraCalibration_getDistortionParameters_m2105018987 (EngineNative_t3505269461 * __this, IntPtr_t ___obj0, SingleU5BU5D_t2316563989* ___outarr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNative::Create_CameraDevice()
extern "C"  IntPtr_t EngineNative_Create_CameraDevice_m1422288860 (EngineNative_t3505269461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::Destory_CameraDevice(System.IntPtr)
extern "C"  void EngineNative_Destory_CameraDevice_m4127610037 (EngineNative_t3505269461 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::CameraDevice_start(System.IntPtr)
extern "C"  bool EngineNative_CameraDevice_start_m3139997961 (EngineNative_t3505269461 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::CameraDevice_stop(System.IntPtr)
extern "C"  bool EngineNative_CameraDevice_stop_m1939826937 (EngineNative_t3505269461 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::CameraDevice_open(System.IntPtr,System.Int32)
extern "C"  bool EngineNative_CameraDevice_open_m2462266054 (EngineNative_t3505269461 * __this, IntPtr_t ___obj0, int32_t ___camera1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::CameraDevice_close(System.IntPtr)
extern "C"  bool EngineNative_CameraDevice_close_m2899335347 (EngineNative_t3505269461 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNative::CameraDevice_getNumSupportedFrameRate(System.IntPtr)
extern "C"  int32_t EngineNative_CameraDevice_getNumSupportedFrameRate_m1669009650 (EngineNative_t3505269461 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single EasyAR.EngineNative::CameraDevice_getSupportedFrameRate(System.IntPtr,System.Int32)
extern "C"  float EngineNative_CameraDevice_getSupportedFrameRate_m3258282145 (EngineNative_t3505269461 * __this, IntPtr_t ___obj0, int32_t ___idx1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::CameraDevice_setFrameRate(System.IntPtr,System.Single)
extern "C"  bool EngineNative_CameraDevice_setFrameRate_m675863317 (EngineNative_t3505269461 * __this, IntPtr_t ___obj0, float ___fps1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::CameraDevice_getSize(System.IntPtr,System.Int32[])
extern "C"  void EngineNative_CameraDevice_getSize_m3761621741 (EngineNative_t3505269461 * __this, IntPtr_t ___obj0, Int32U5BU5D_t3230847821* ___outarr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNative::CameraDevice_getNumSupportedSize(System.IntPtr)
extern "C"  int32_t EngineNative_CameraDevice_getNumSupportedSize_m3605992390 (EngineNative_t3505269461 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::CameraDevice_getSupportedSize(System.IntPtr,System.Int32,System.Int32[])
extern "C"  void EngineNative_CameraDevice_getSupportedSize_m1803409420 (EngineNative_t3505269461 * __this, IntPtr_t ___obj0, int32_t ___idx1, Int32U5BU5D_t3230847821* ___outarr2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::CameraDevice_setSize(System.IntPtr,System.Int32,System.Int32)
extern "C"  bool EngineNative_CameraDevice_setSize_m327736616 (EngineNative_t3505269461 * __this, IntPtr_t ___obj0, int32_t ___w1, int32_t ___h2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNative::CameraDevice_getCameraCalibration(System.IntPtr)
extern "C"  IntPtr_t EngineNative_CameraDevice_getCameraCalibration_m1168390083 (EngineNative_t3505269461 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::CameraDevice_setFocusMode(System.IntPtr,System.Int32)
extern "C"  bool EngineNative_CameraDevice_setFocusMode_m1391411285 (EngineNative_t3505269461 * __this, IntPtr_t ___obj0, int32_t ___focusMode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::CameraDevice_setHorizontalFlip(System.IntPtr,System.Boolean)
extern "C"  void EngineNative_CameraDevice_setHorizontalFlip_m2071872881 (EngineNative_t3505269461 * __this, IntPtr_t ___obj0, bool ___flip1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNative::Create_Frame()
extern "C"  IntPtr_t EngineNative_Create_Frame_m1220538222 (EngineNative_t3505269461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::Destory_Frame(System.IntPtr)
extern "C"  void EngineNative_Destory_Frame_m1662660489 (EngineNative_t3505269461 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double EasyAR.EngineNative::Frame_getTimeStamp(System.IntPtr)
extern "C"  double EngineNative_Frame_getTimeStamp_m1994234316 (EngineNative_t3505269461 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNative::Frame_getIndex(System.IntPtr)
extern "C"  int32_t EngineNative_Frame_getIndex_m2720468019 (EngineNative_t3505269461 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNative::Frame_targets(System.IntPtr)
extern "C"  IntPtr_t EngineNative_Frame_targets_m3877911078 (EngineNative_t3505269461 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNative::Frame_text(System.IntPtr)
extern "C"  IntPtr_t EngineNative_Frame_text_m713451985 (EngineNative_t3505269461 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::Destory_Image(System.IntPtr)
extern "C"  void EngineNative_Destory_Image_m833656283 (EngineNative_t3505269461 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNative::Create_ImageTarget()
extern "C"  IntPtr_t EngineNative_Create_ImageTarget_m1250595085 (EngineNative_t3505269461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::Destory_ImageTarget(System.IntPtr)
extern "C"  void EngineNative_Destory_ImageTarget_m4205752842 (EngineNative_t3505269461 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::ImageTarget_getSize(System.IntPtr,System.Single[])
extern "C"  void EngineNative_ImageTarget_getSize_m1869661290 (EngineNative_t3505269461 * __this, IntPtr_t ___obj0, SingleU5BU5D_t2316563989* ___outarr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::ImageTarget_setSize(System.IntPtr,System.Single,System.Single)
extern "C"  bool EngineNative_ImageTarget_setSize_m785714201 (EngineNative_t3505269461 * __this, IntPtr_t ___obj0, float ___w1, float ___h2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::ImageTarget_load(System.IntPtr,System.String,System.Int32,System.String)
extern "C"  bool EngineNative_ImageTarget_load_m80912297 (EngineNative_t3505269461 * __this, IntPtr_t ___obj0, String_t* ___path1, int32_t ___storageType2, String_t* ___name3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNative::ImageTarget_loadAll(System.String,System.Int32)
extern "C"  IntPtr_t EngineNative_ImageTarget_loadAll_m2552197883 (EngineNative_t3505269461 * __this, String_t* ___path0, int32_t ___storageType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNative::Create_Target()
extern "C"  IntPtr_t EngineNative_Create_Target_m385054226 (EngineNative_t3505269461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::Destory_Target(System.IntPtr)
extern "C"  void EngineNative_Destory_Target_m892379135 (EngineNative_t3505269461 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNative::Target_getId(System.IntPtr)
extern "C"  int32_t EngineNative_Target_getId_m2657096158 (EngineNative_t3505269461 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNative::Target_getName(System.IntPtr)
extern "C"  IntPtr_t EngineNative_Target_getName_m2393300797 (EngineNative_t3505269461 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNative::Target_getUid(System.IntPtr)
extern "C"  IntPtr_t EngineNative_Target_getUid_m1503963086 (EngineNative_t3505269461 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNative::Target_metaData(System.IntPtr)
extern "C"  IntPtr_t EngineNative_Target_metaData_m2262819769 (EngineNative_t3505269461 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::Target_load(System.IntPtr,System.String,System.Int32,System.String)
extern "C"  bool EngineNative_Target_load_m3797495340 (EngineNative_t3505269461 * __this, IntPtr_t ___obj0, String_t* ___path1, int32_t ___storageType2, String_t* ___name3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::Destory_TargetList(System.IntPtr)
extern "C"  void EngineNative_Destory_TargetList_m419971457 (EngineNative_t3505269461 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNative::TargetList_size(System.IntPtr)
extern "C"  int32_t EngineNative_TargetList_size_m1739053940 (EngineNative_t3505269461 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNative::TargetList_at(System.IntPtr,System.Int32)
extern "C"  IntPtr_t EngineNative_TargetList_at_m3919865444 (EngineNative_t3505269461 * __this, IntPtr_t ___obj0, int32_t ___idx1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::Destory_AugmentedTargetList(System.IntPtr)
extern "C"  void EngineNative_Destory_AugmentedTargetList_m1434070167 (EngineNative_t3505269461 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNative::AugmentedTargetList_size(System.IntPtr)
extern "C"  int32_t EngineNative_AugmentedTargetList_size_m3076547744 (EngineNative_t3505269461 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNative::AugmentedTargetList_at(System.IntPtr,System.Int32)
extern "C"  IntPtr_t EngineNative_AugmentedTargetList_at_m2095409914 (EngineNative_t3505269461 * __this, IntPtr_t ___obj0, int32_t ___idx1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::Destory_AugmentedTarget(System.IntPtr)
extern "C"  void EngineNative_Destory_AugmentedTarget_m2253358613 (EngineNative_t3505269461 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNative::AugmentedTarget_status(System.IntPtr)
extern "C"  int32_t EngineNative_AugmentedTarget_status_m1337800273 (EngineNative_t3505269461 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNative::AugmentedTarget_target(System.IntPtr)
extern "C"  IntPtr_t EngineNative_AugmentedTarget_target_m1393200673 (EngineNative_t3505269461 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::AugmentedTarget_pose(System.IntPtr,System.Single[])
extern "C"  void EngineNative_AugmentedTarget_pose_m107716655 (EngineNative_t3505269461 * __this, IntPtr_t ___obj0, SingleU5BU5D_t2316563989* ___outarr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNative::Create_ImageTracker()
extern "C"  IntPtr_t EngineNative_Create_ImageTracker_m1659701982 (EngineNative_t3505269461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::Destory_ImageTracker(System.IntPtr)
extern "C"  void EngineNative_Destory_ImageTracker_m2428249331 (EngineNative_t3505269461 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::ImageTracker_attachCamera(System.IntPtr,System.IntPtr)
extern "C"  bool EngineNative_ImageTracker_attachCamera_m2364393217 (EngineNative_t3505269461 * __this, IntPtr_t ___obj0, IntPtr_t ___cam1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::ImageTracker_detachCamera(System.IntPtr,System.IntPtr)
extern "C"  bool EngineNative_ImageTracker_detachCamera_m403516147 (EngineNative_t3505269461 * __this, IntPtr_t ___obj0, IntPtr_t ___cam1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::ImageTracker_loadTarget(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void EngineNative_ImageTracker_loadTarget_m3689480302 (EngineNative_t3505269461 * __this, IntPtr_t ___obj0, IntPtr_t ___ds1, IntPtr_t ___cb2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::ImageTracker_unloadTarget(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void EngineNative_ImageTracker_unloadTarget_m233849333 (EngineNative_t3505269461 * __this, IntPtr_t ___obj0, IntPtr_t ___ds1, IntPtr_t ___cb2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::ImageTracker_start(System.IntPtr)
extern "C"  bool EngineNative_ImageTracker_start_m2584001223 (EngineNative_t3505269461 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::ImageTracker_stop(System.IntPtr)
extern "C"  bool EngineNative_ImageTracker_stop_m2614628219 (EngineNative_t3505269461 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNative::Create_TargetLoadCallBackUnity(System.IntPtr,EasyAR.ImageTracker/TargetLoadCallbackC)
extern "C"  IntPtr_t EngineNative_Create_TargetLoadCallBackUnity_m1277703222 (EngineNative_t3505269461 * __this, IntPtr_t ___obj0, TargetLoadCallbackC_t3429128016 * ___func1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::Destory_TargetLoadCallBackUnity(System.IntPtr)
extern "C"  void EngineNative_Destory_TargetLoadCallBackUnity_m3982157693 (EngineNative_t3505269461 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::ImageTracker_checkCallBack(System.IntPtr)
extern "C"  bool EngineNative_ImageTracker_checkCallBack_m1533442108 (EngineNative_t3505269461 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::ImageTracker_setCallBackThread(System.IntPtr,System.Boolean)
extern "C"  void EngineNative_ImageTracker_setCallBackThread_m4014017681 (EngineNative_t3505269461 * __this, IntPtr_t ___obj0, bool ___enable1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::ImageTracker_setSimultaneousNum(System.IntPtr,System.Int32)
extern "C"  bool EngineNative_ImageTracker_setSimultaneousNum_m4140275843 (EngineNative_t3505269461 * __this, IntPtr_t ___obj0, int32_t ___num1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNative::ImageTracker_simultaneousNum(System.IntPtr)
extern "C"  int32_t EngineNative_ImageTracker_simultaneousNum_m1050794968 (EngineNative_t3505269461 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNative::Create_BarCodeScanner()
extern "C"  IntPtr_t EngineNative_Create_BarCodeScanner_m2246167167 (EngineNative_t3505269461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::Destory_BarCodeScanner(System.IntPtr)
extern "C"  void EngineNative_Destory_BarCodeScanner_m213899186 (EngineNative_t3505269461 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::BarCodeScanner_attachCamera(System.IntPtr,System.IntPtr)
extern "C"  bool EngineNative_BarCodeScanner_attachCamera_m3326690978 (EngineNative_t3505269461 * __this, IntPtr_t ___obj0, IntPtr_t ___cam1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::BarCodeScanner_detachCamera(System.IntPtr,System.IntPtr)
extern "C"  bool EngineNative_BarCodeScanner_detachCamera_m1365813908 (EngineNative_t3505269461 * __this, IntPtr_t ___obj0, IntPtr_t ___cam1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::BarCodeScanner_start(System.IntPtr)
extern "C"  bool EngineNative_BarCodeScanner_start_m4165703814 (EngineNative_t3505269461 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::BarCodeScanner_stop(System.IntPtr)
extern "C"  bool EngineNative_BarCodeScanner_stop_m3496934876 (EngineNative_t3505269461 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNative::Create_VideoPlayer()
extern "C"  IntPtr_t EngineNative_Create_VideoPlayer_m1938682237 (EngineNative_t3505269461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::Destory_VideoPlayer(System.IntPtr)
extern "C"  void EngineNative_Destory_VideoPlayer_m3408889754 (EngineNative_t3505269461 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::VideoPlayer_setRenderTexture(System.IntPtr,System.IntPtr)
extern "C"  void EngineNative_VideoPlayer_setRenderTexture_m140742851 (EngineNative_t3505269461 * __this, IntPtr_t ___obj0, IntPtr_t ___texture1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::VideoPlayer_setVideoType(System.IntPtr,System.Int32)
extern "C"  void EngineNative_VideoPlayer_setVideoType_m2909247282 (EngineNative_t3505269461 * __this, IntPtr_t ___obj0, int32_t ___videoType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::VideoPlayer_open(System.IntPtr,System.String,System.Int32,System.IntPtr)
extern "C"  void EngineNative_VideoPlayer_open_m253319291 (EngineNative_t3505269461 * __this, IntPtr_t ___obj0, String_t* ___path1, int32_t ___storageType2, IntPtr_t ___callback3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::VideoPlayer_close(System.IntPtr)
extern "C"  void EngineNative_VideoPlayer_close_m3459239510 (EngineNative_t3505269461 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::VideoPlayer_play(System.IntPtr)
extern "C"  bool EngineNative_VideoPlayer_play_m22157200 (EngineNative_t3505269461 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::VideoPlayer_stop(System.IntPtr)
extern "C"  bool EngineNative_VideoPlayer_stop_m168404226 (EngineNative_t3505269461 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::VideoPlayer_pause(System.IntPtr)
extern "C"  bool EngineNative_VideoPlayer_pause_m1811847692 (EngineNative_t3505269461 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::VideoPlayer_updateFrame(System.IntPtr)
extern "C"  void EngineNative_VideoPlayer_updateFrame_m3863070826 (EngineNative_t3505269461 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNative::VideoPlayer_duration(System.IntPtr)
extern "C"  int32_t EngineNative_VideoPlayer_duration_m1874805002 (EngineNative_t3505269461 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNative::VideoPlayer_currentPosition(System.IntPtr)
extern "C"  int32_t EngineNative_VideoPlayer_currentPosition_m1017873510 (EngineNative_t3505269461 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::VideoPlayer_seek(System.IntPtr,System.Int32)
extern "C"  bool EngineNative_VideoPlayer_seek_m3816244363 (EngineNative_t3505269461 * __this, IntPtr_t ___obj0, int32_t ___position1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::VideoPlayer_size(System.IntPtr,System.Int32[])
extern "C"  void EngineNative_VideoPlayer_size_m797236286 (EngineNative_t3505269461 * __this, IntPtr_t ___obj0, Int32U5BU5D_t3230847821* ___arr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single EasyAR.EngineNative::VideoPlayer_volume(System.IntPtr)
extern "C"  float EngineNative_VideoPlayer_volume_m1789270634 (EngineNative_t3505269461 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::VideoPlayer_setVolume(System.IntPtr,System.Single)
extern "C"  bool EngineNative_VideoPlayer_setVolume_m3379012107 (EngineNative_t3505269461 * __this, IntPtr_t ___obj0, float ___volume1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNative::Create_VideoPlayerCallBackUnity(System.IntPtr,EasyAR.VideoPlayer/CallBack)
extern "C"  IntPtr_t EngineNative_Create_VideoPlayerCallBackUnity_m3382534328 (EngineNative_t3505269461 * __this, IntPtr_t ___obj0, CallBack_t2228309331 * ___func1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::VideoPlayer_checkCallBack(System.IntPtr)
extern "C"  bool EngineNative_VideoPlayer_checkCallBack_m3857132181 (EngineNative_t3505269461 * __this, IntPtr_t ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::VideoPlayer_setCallBackThread(System.IntPtr,System.Boolean)
extern "C"  void EngineNative_VideoPlayer_setCallBackThread_m1425494784 (EngineNative_t3505269461 * __this, IntPtr_t ___callback0, bool ___enable1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::Destory_VideoPlayerCallBackUnity(System.IntPtr)
extern "C"  void EngineNative_Destory_VideoPlayerCallBackUnity_m168540604 (EngineNative_t3505269461 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNative::Cast_Target2ImageTarget(System.IntPtr)
extern "C"  IntPtr_t EngineNative_Cast_Target2ImageTarget_m3003169995 (EngineNative_t3505269461 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::ezarGetProjectionGL(System.IntPtr,System.Single,System.Single,System.Int32,System.Single[])
extern "C"  void EngineNative_ezarGetProjectionGL_m1076912777 (Il2CppObject * __this /* static, unused */, IntPtr_t ___calib0, float ___nearPlane1, float ___farPlane2, int32_t ___rotation3, SingleU5BU5D_t2316563989* ___outarr4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::ezarSetAssetPath(System.String)
extern "C"  void EngineNative_ezarSetAssetPath_m4227794608 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::ezarRegisterLogFunc(EasyAR.EngineNative/LogFunc)
extern "C"  void EngineNative_ezarRegisterLogFunc_m4043549597 (Il2CppObject * __this /* static, unused */, LogFunc_t2453857357 * ___func0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::ezarBase_IsValid(System.IntPtr)
extern "C"  bool EngineNative_ezarBase_IsValid_m1044138365 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::ezarOnResume()
extern "C"  void EngineNative_ezarOnResume_m1557634123 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::ezarOnPause()
extern "C"  void EngineNative_ezarOnPause_m3842940794 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::ezarNativeInit(System.String,System.IntPtr)
extern "C"  bool EngineNative_ezarNativeInit_m2593630326 (Il2CppObject * __this /* static, unused */, String_t* ___key0, IntPtr_t ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNative::ezarSetRotation(System.Int32)
extern "C"  int32_t EngineNative_ezarSetRotation_m2876923034 (Il2CppObject * __this /* static, unused */, int32_t ___rot0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNative::ezarCreate_Augmenter()
extern "C"  IntPtr_t EngineNative_ezarCreate_Augmenter_m2616056165 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::ezarDestory_Augmenter(System.IntPtr)
extern "C"  void EngineNative_ezarDestory_Augmenter_m2902428670 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNative::ezarAugmenter_newFrame(System.IntPtr)
extern "C"  IntPtr_t EngineNative_ezarAugmenter_newFrame_m2190642300 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::ezarAugmenter_attachCamera(System.IntPtr,System.IntPtr)
extern "C"  bool EngineNative_ezarAugmenter_attachCamera_m2013706276 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___c1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::ezarAugmenter_detachCamera(System.IntPtr,System.IntPtr)
extern "C"  bool EngineNative_ezarAugmenter_detachCamera_m52829206 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___c1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::ezarAugmenter_getVideoBackgroundTextureSize(System.IntPtr,System.Int32[])
extern "C"  void EngineNative_ezarAugmenter_getVideoBackgroundTextureSize_m2841922348 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, Int32U5BU5D_t3230847821* ___outarr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNative::ezarAugmenter_getVideoBackgroundTextureFormat(System.IntPtr)
extern "C"  int32_t EngineNative_ezarAugmenter_getVideoBackgroundTextureFormat_m2381950413 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::ezarAugmenter_setVideoBackgroundTextureID(System.IntPtr,System.IntPtr)
extern "C"  void EngineNative_ezarAugmenter_setVideoBackgroundTextureID_m2069957425 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___id1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNative::ezarAugmenter_getID(System.IntPtr)
extern "C"  int32_t EngineNative_ezarAugmenter_getID_m2937575355 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNative::ezarAugmenter_getRenderingFlag(System.IntPtr)
extern "C"  int32_t EngineNative_ezarAugmenter_getRenderingFlag_m2955824344 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNative::ezarCreate_CameraCalibration()
extern "C"  IntPtr_t EngineNative_ezarCreate_CameraCalibration_m4015843372 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::ezarDestory_CameraCalibration(System.IntPtr)
extern "C"  void EngineNative_ezarDestory_CameraCalibration_m2716768663 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::ezarCameraCalibration_getSize(System.IntPtr,System.Int32[])
extern "C"  void EngineNative_ezarCameraCalibration_getSize_m512962881 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, Int32U5BU5D_t3230847821* ___outarr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::ezarCameraCalibration_getFocalLength(System.IntPtr,System.Single[])
extern "C"  void EngineNative_ezarCameraCalibration_getFocalLength_m127405769 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, SingleU5BU5D_t2316563989* ___outarr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::ezarCameraCalibration_getPrincipalPoint(System.IntPtr,System.Single[])
extern "C"  void EngineNative_ezarCameraCalibration_getPrincipalPoint_m647119510 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, SingleU5BU5D_t2316563989* ___outarr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::ezarCameraCalibration_getDistortionParameters(System.IntPtr,System.Single[])
extern "C"  void EngineNative_ezarCameraCalibration_getDistortionParameters_m2538227729 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, SingleU5BU5D_t2316563989* ___outarr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNative::ezarCreate_CameraDevice()
extern "C"  IntPtr_t EngineNative_ezarCreate_CameraDevice_m3168056694 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::ezarDestory_CameraDevice(System.IntPtr)
extern "C"  void EngineNative_ezarDestory_CameraDevice_m4175597391 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::ezarCameraDevice_start(System.IntPtr)
extern "C"  bool EngineNative_ezarCameraDevice_start_m2091402275 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::ezarCameraDevice_stop(System.IntPtr)
extern "C"  bool EngineNative_ezarCameraDevice_stop_m3291474591 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::ezarCameraDevice_open(System.IntPtr,System.Int32)
extern "C"  bool EngineNative_ezarCameraDevice_open_m3835498208 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, int32_t ___camera1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::ezarCameraDevice_close(System.IntPtr)
extern "C"  bool EngineNative_ezarCameraDevice_close_m1850739661 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNative::ezarCameraDevice_getNumSupportedFrameRate(System.IntPtr)
extern "C"  int32_t EngineNative_ezarCameraDevice_getNumSupportedFrameRate_m1202610328 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single EasyAR.EngineNative::ezarCameraDevice_getSupportedFrameRate(System.IntPtr,System.Int32)
extern "C"  float EngineNative_ezarCameraDevice_getSupportedFrameRate_m1186327495 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, int32_t ___idx1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::ezarCameraDevice_setFrameRate(System.IntPtr,System.Single)
extern "C"  bool EngineNative_ezarCameraDevice_setFrameRate_m3342597179 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, float ___fps1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::ezarCameraDevice_getSize(System.IntPtr,System.Int32[])
extern "C"  void EngineNative_ezarCameraDevice_getSize_m131975443 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, Int32U5BU5D_t3230847821* ___outarr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNative::ezarCameraDevice_getNumSupportedSize(System.IntPtr)
extern "C"  int32_t EngineNative_ezarCameraDevice_getNumSupportedSize_m2078676064 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::ezarCameraDevice_getSupportedSize(System.IntPtr,System.Int32,System.Int32[])
extern "C"  void EngineNative_ezarCameraDevice_getSupportedSize_m2236618162 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, int32_t ___idx1, Int32U5BU5D_t3230847821* ___outarr2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::ezarCameraDevice_setSize(System.IntPtr,System.Int32,System.Int32)
extern "C"  bool EngineNative_ezarCameraDevice_setSize_m3211478338 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, int32_t ___w1, int32_t ___h2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNative::ezarCameraDevice_getCameraCalibration(System.IntPtr)
extern "C"  IntPtr_t EngineNative_ezarCameraDevice_getCameraCalibration_m30161385 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::ezarCameraDevice_setFocusMode(System.IntPtr,System.Int32)
extern "C"  bool EngineNative_ezarCameraDevice_setFocusMode_m2585813615 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, int32_t ___focusMode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::ezarCameraDevice_setHorizontalFlip(System.IntPtr,System.Boolean)
extern "C"  void EngineNative_ezarCameraDevice_setHorizontalFlip_m2176011287 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, bool ___flip1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNative::ezarCreate_Frame()
extern "C"  IntPtr_t EngineNative_ezarCreate_Frame_m2041994004 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::ezarDestory_Frame(System.IntPtr)
extern "C"  void EngineNative_ezarDestory_Frame_m3949153839 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double EasyAR.EngineNative::ezarFrame_getTimeStamp(System.IntPtr)
extern "C"  double EngineNative_ezarFrame_getTimeStamp_m917793126 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNative::ezarFrame_getIndex(System.IntPtr)
extern "C"  int32_t EngineNative_ezarFrame_getIndex_m1560207181 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNative::ezarFrame_targets(System.IntPtr)
extern "C"  IntPtr_t EngineNative_ezarFrame_targets_m726289228 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNative::ezarFrame_text(System.IntPtr)
extern "C"  IntPtr_t EngineNative_ezarFrame_text_m555768427 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::ezarDestory_Image(System.IntPtr)
extern "C"  void EngineNative_ezarDestory_Image_m3120149633 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNative::ezarCreate_ImageTarget()
extern "C"  IntPtr_t EngineNative_ezarCreate_ImageTarget_m4077856819 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::ezarDestory_ImageTarget(System.IntPtr)
extern "C"  void EngineNative_ezarDestory_ImageTarget_m2960374832 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::ezarImageTarget_getSize(System.IntPtr,System.Single[])
extern "C"  void EngineNative_ezarImageTarget_getSize_m2534982288 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, SingleU5BU5D_t2316563989* ___outarr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::ezarImageTarget_setSize(System.IntPtr,System.Single,System.Single)
extern "C"  bool EngineNative_ezarImageTarget_setSize_m4282361663 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, float ___w1, float ___h2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::ezarImageTarget_load(System.IntPtr,System.String,System.Int32,System.String)
extern "C"  bool EngineNative_ezarImageTarget_load_m1793721167 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, String_t* ___path1, int32_t ___storageType2, String_t* ___name3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNative::ezarCreate_Target()
extern "C"  IntPtr_t EngineNative_ezarCreate_Target_m80379692 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::ezarDestory_Target(System.IntPtr)
extern "C"  void EngineNative_ezarDestory_Target_m3054196249 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNative::ezarTarget_getId(System.IntPtr)
extern "C"  int32_t EngineNative_ezarTarget_getId_m2204492664 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNative::ezarTarget_getName(System.IntPtr)
extern "C"  IntPtr_t EngineNative_ezarTarget_getName_m3477271255 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNative::ezarTarget_getUid(System.IntPtr)
extern "C"  IntPtr_t EngineNative_ezarTarget_getUid_m2647308532 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNative::ezarTarget_metaData(System.IntPtr)
extern "C"  IntPtr_t EngineNative_ezarTarget_metaData_m1506165599 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::ezarTarget_load(System.IntPtr,System.String,System.Int32,System.String)
extern "C"  bool EngineNative_ezarTarget_load_m2217712326 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, String_t* ___path1, int32_t ___storageType2, String_t* ___name3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::ezarDestory_TargetList(System.IntPtr)
extern "C"  void EngineNative_ezarDestory_TargetList_m2735102619 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNative::ezarImageTarget_loadAll(System.String,System.Int32)
extern "C"  IntPtr_t EngineNative_ezarImageTarget_loadAll_m3346764821 (Il2CppObject * __this /* static, unused */, String_t* ___path0, int32_t ___storageType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNative::ezarTargetList_size(System.IntPtr)
extern "C"  int32_t EngineNative_ezarTargetList_size_m130706330 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNative::ezarTargetList_at(System.IntPtr,System.Int32)
extern "C"  IntPtr_t EngineNative_ezarTargetList_at_m1418584830 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, int32_t ___idx1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::ezarDestory_AugmentedTargetList(System.IntPtr)
extern "C"  void EngineNative_ezarDestory_AugmentedTargetList_m616411325 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNative::ezarAugmentedTargetList_size(System.IntPtr)
extern "C"  int32_t EngineNative_ezarAugmentedTargetList_size_m2953223994 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNative::ezarAugmentedTargetList_at(System.IntPtr,System.Int32)
extern "C"  IntPtr_t EngineNative_ezarAugmentedTargetList_at_m3474291616 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, int32_t ___idx1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::ezarDestory_AugmentedTarget(System.IntPtr)
extern "C"  void EngineNative_ezarDestory_AugmentedTarget_m1620512059 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNative::ezarAugmentedTarget_status(System.IntPtr)
extern "C"  int32_t EngineNative_ezarAugmentedTarget_status_m3120910187 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNative::ezarAugmentedTarget_target(System.IntPtr)
extern "C"  IntPtr_t EngineNative_ezarAugmentedTarget_target_m2098096059 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::ezarAugmentedTarget_pose(System.IntPtr,System.Single[])
extern "C"  void EngineNative_ezarAugmentedTarget_pose_m3552798409 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, SingleU5BU5D_t2316563989* ___outarr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNative::ezarCreate_ImageTracker()
extern "C"  IntPtr_t EngineNative_ezarCreate_ImageTracker_m3405469816 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::ezarDestory_ImageTracker(System.IntPtr)
extern "C"  void EngineNative_ezarDestory_ImageTracker_m2476236685 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::ezarImageTracker_attachCamera(System.IntPtr,System.IntPtr)
extern "C"  bool EngineNative_ezarImageTracker_attachCamera_m736159783 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___cam1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::ezarImageTracker_detachCamera(System.IntPtr,System.IntPtr)
extern "C"  bool EngineNative_ezarImageTracker_detachCamera_m3070250009 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___cam1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::ezarImageTracker_loadTarget(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void EngineNative_ezarImageTracker_loadTarget_m1493955220 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___ds1, IntPtr_t ___cb2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::ezarImageTracker_unloadTarget(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void EngineNative_ezarImageTracker_unloadTarget_m3458155163 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___ds1, IntPtr_t ___cb2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::ezarImageTracker_start(System.IntPtr)
extern "C"  bool EngineNative_ezarImageTracker_start_m1535405537 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::ezarImageTracker_stop(System.IntPtr)
extern "C"  bool EngineNative_ezarImageTracker_stop_m3966275873 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNative::ezarCreate_TargetLoadCallBackUnity(System.IntPtr,EasyAR.ImageTracker/TargetLoadCallbackC)
extern "C"  IntPtr_t EngineNative_ezarCreate_TargetLoadCallBackUnity_m2692526544 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, TargetLoadCallbackC_t3429128016 * ___func1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::ezarDestory_TargetLoadCallBackUnity(System.IntPtr)
extern "C"  void EngineNative_ezarDestory_TargetLoadCallBackUnity_m2840848547 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::ezarImageTracker_checkCallBack(System.IntPtr)
extern "C"  bool EngineNative_ezarImageTracker_checkCallBack_m376861014 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::ezarImageTracker_setCallBackThread(System.IntPtr,System.Boolean)
extern "C"  void EngineNative_ezarImageTracker_setCallBackThread_m4118156087 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, bool ___enable1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::ezarImageTracker_setSimultaneousNum(System.IntPtr,System.Int32)
extern "C"  bool EngineNative_ezarImageTracker_setSimultaneousNum_m1215905565 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, int32_t ___num1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNative::ezarImageTracker_simultaneousNum(System.IntPtr)
extern "C"  int32_t EngineNative_ezarImageTracker_simultaneousNum_m2920626546 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNative::ezarCreate_BarCodeScanner()
extern "C"  IntPtr_t EngineNative_ezarCreate_BarCodeScanner_m596842905 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::ezarDestory_BarCodeScanner(System.IntPtr)
extern "C"  void EngineNative_ezarDestory_BarCodeScanner_m3380073420 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::ezarBarCodeScanner_attachCamera(System.IntPtr,System.IntPtr)
extern "C"  bool EngineNative_ezarBarCodeScanner_attachCamera_m1962456648 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___cam1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::ezarBarCodeScanner_detachCamera(System.IntPtr,System.IntPtr)
extern "C"  bool EngineNative_ezarBarCodeScanner_detachCamera_m1579578 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___cam1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::ezarBarCodeScanner_start(System.IntPtr)
extern "C"  bool EngineNative_ezarBarCodeScanner_start_m1487596832 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::ezarBarCodeScanner_stop(System.IntPtr)
extern "C"  bool EngineNative_ezarBarCodeScanner_stop_m1055239682 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNative::ezarCreate_VideoPlayer()
extern "C"  IntPtr_t EngineNative_ezarCreate_VideoPlayer_m470976675 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::ezarDestory_VideoPlayer(System.IntPtr)
extern "C"  void EngineNative_ezarDestory_VideoPlayer_m2163511744 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::ezarVideoPlayer_setRenderTexture(System.IntPtr,System.IntPtr)
extern "C"  void EngineNative_ezarVideoPlayer_setRenderTexture_m483294173 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___texture1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::ezarVideoPlayer_setVideoType(System.IntPtr,System.Int32)
extern "C"  void EngineNative_ezarVideoPlayer_setVideoType_m2332599256 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, int32_t ___videoType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::ezarVideoPlayer_open(System.IntPtr,System.String,System.Int32,System.IntPtr)
extern "C"  void EngineNative_ezarVideoPlayer_open_m686528033 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, String_t* ___path1, int32_t ___storageType2, IntPtr_t ___callback3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::ezarVideoPlayer_close(System.IntPtr)
extern "C"  void EngineNative_ezarVideoPlayer_close_m3118279164 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::ezarVideoPlayer_play(System.IntPtr)
extern "C"  bool EngineNative_ezarVideoPlayer_play_m897042730 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::ezarVideoPlayer_stop(System.IntPtr)
extern "C"  bool EngineNative_ezarVideoPlayer_stop_m1043289756 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::ezarVideoPlayer_pause(System.IntPtr)
extern "C"  bool EngineNative_ezarVideoPlayer_pause_m3163495346 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::ezarVideoPlayer_updateFrame(System.IntPtr)
extern "C"  void EngineNative_ezarVideoPlayer_updateFrame_m3230224272 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNative::ezarVideoPlayer_duration(System.IntPtr)
extern "C"  int32_t EngineNative_ezarVideoPlayer_duration_m2408503460 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNative::ezarVideoPlayer_currentPosition(System.IntPtr)
extern "C"  int32_t EngineNative_ezarVideoPlayer_currentPosition_m3572042636 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::ezarVideoPlayer_seek(System.IntPtr,System.Int32)
extern "C"  bool EngineNative_ezarVideoPlayer_seek_m2336521521 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, int32_t ___position1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::ezarVideoPlayer_size(System.IntPtr,System.Int32[])
extern "C"  void EngineNative_ezarVideoPlayer_size_m3950894436 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, Int32U5BU5D_t3230847821* ___arr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single EasyAR.EngineNative::ezarVideoPlayer_volume(System.IntPtr)
extern "C"  float EngineNative_ezarVideoPlayer_volume_m3930320260 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::ezarVideoPlayer_setVolume(System.IntPtr,System.Single)
extern "C"  bool EngineNative_ezarVideoPlayer_setVolume_m1303725617 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, float ___volume1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNative::ezarCreate_VideoPlayerCallBackUnity(System.IntPtr,EasyAR.VideoPlayer/CallBack)
extern "C"  IntPtr_t EngineNative_ezarCreate_VideoPlayerCallBackUnity_m1206869854 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, CallBack_t2228309331 * ___func1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::ezarVideoPlayer_checkCallBack(System.IntPtr)
extern "C"  bool EngineNative_ezarVideoPlayer_checkCallBack_m1187423803 (Il2CppObject * __this /* static, unused */, IntPtr_t ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::ezarVideoPlayer_setCallBackThread(System.IntPtr,System.Boolean)
extern "C"  void EngineNative_ezarVideoPlayer_setCallBackThread_m4199800730 (Il2CppObject * __this /* static, unused */, IntPtr_t ___callback0, bool ___enable1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::ezarDestory_VideoPlayerCallBackUnity(System.IntPtr)
extern "C"  void EngineNative_ezarDestory_VideoPlayerCallBackUnity_m3442662742 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNative::ezarCast_Target2ImageTarget(System.IntPtr)
extern "C"  IntPtr_t EngineNative_ezarCast_Target2ImageTarget_m3380090481 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
