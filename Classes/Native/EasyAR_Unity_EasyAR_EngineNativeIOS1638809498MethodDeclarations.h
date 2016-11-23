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

// EasyAR.EngineNativeIOS
struct EngineNativeIOS_t1638809498;
// System.String
struct String_t;
// System.Single[]
struct SingleU5BU5D_t2316563989;
// EasyAR.EngineNativeIOS/LogFunc
struct LogFunc_t3562562578;
// System.Int32[]
struct Int32U5BU5D_t3230847821;
// EasyAR.ImageTracker/TargetLoadCallbackC
struct TargetLoadCallbackC_t3429128016;
// EasyAR.VideoPlayer/CallBack
struct CallBack_t2228309331;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "EasyAR_Unity_EasyAR_EngineNativeIOS_LogFunc3562562578.h"
#include "EasyAR_Unity_EasyAR_ImageTracker_TargetLoadCallbac3429128016.h"
#include "EasyAR_Unity_EasyAR_VideoPlayer_CallBack2228309331.h"

// System.Void EasyAR.EngineNativeIOS::.ctor()
extern "C"  void EngineNativeIOS__ctor_m3852933902 (EngineNativeIOS_t1638809498 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::Log(System.String)
extern "C"  void EngineNativeIOS_Log_m1663294418 (Il2CppObject * __this /* static, unused */, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_EngineNativeIOS_Log_m1663294418(char* ___str0);
// System.Void EasyAR.EngineNativeIOS::DeInitialize()
extern "C"  void EngineNativeIOS_DeInitialize_m3295576615 (EngineNativeIOS_t1638809498 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::Initialize(System.String,System.IntPtr)
extern "C"  bool EngineNativeIOS_Initialize_m263880574 (EngineNativeIOS_t1638809498 * __this, String_t* ___key0, IntPtr_t ___activity1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::Resume()
extern "C"  void EngineNativeIOS_Resume_m3545325603 (EngineNativeIOS_t1638809498 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::Pause()
extern "C"  void EngineNativeIOS_Pause_m3907059874 (EngineNativeIOS_t1638809498 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::GetProjectionGL(System.IntPtr,System.Single,System.Single,System.Int32,System.Single[])
extern "C"  void EngineNativeIOS_GetProjectionGL_m2223929938 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___calib0, float ___nearPlane1, float ___farPlane2, int32_t ___rotation3, SingleU5BU5D_t2316563989* ___outarr4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::SetAssetPath(System.String)
extern "C"  void EngineNativeIOS_SetAssetPath_m4245215737 (EngineNativeIOS_t1638809498 * __this, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::RegisterLogFunc(EasyAR.EngineNativeIOS/LogFunc)
extern "C"  void EngineNativeIOS_RegisterLogFunc_m1792257375 (EngineNativeIOS_t1638809498 * __this, LogFunc_t3562562578 * ___func0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::Base_IsValid(System.IntPtr)
extern "C"  bool EngineNativeIOS_Base_IsValid_m8963886 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNativeIOS::Rotate(System.Int32)
extern "C"  int32_t EngineNativeIOS_Rotate_m4101923592 (EngineNativeIOS_t1638809498 * __this, int32_t ___rot0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNativeIOS::Create_Augmenter()
extern "C"  IntPtr_t EngineNativeIOS_Create_Augmenter_m3633793478 (EngineNativeIOS_t1638809498 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::Destory_Augmenter(System.IntPtr)
extern "C"  void EngineNativeIOS_Destory_Augmenter_m1957912149 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNativeIOS::Augmenter_newFrame(System.IntPtr)
extern "C"  IntPtr_t EngineNativeIOS_Augmenter_newFrame_m2283810299 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::Augmenter_attachCamera(System.IntPtr,System.IntPtr)
extern "C"  bool EngineNativeIOS_Augmenter_attachCamera_m290550485 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___obj0, IntPtr_t ___c1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::Augmenter_detachCamera(System.IntPtr,System.IntPtr)
extern "C"  bool EngineNativeIOS_Augmenter_detachCamera_m2624640711 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___obj0, IntPtr_t ___c1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::Augmenter_getVideoBackgroundTextureSize(System.IntPtr,System.Int32[])
extern "C"  void EngineNativeIOS_Augmenter_getVideoBackgroundTextureSize_m2636051253 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___obj0, Int32U5BU5D_t3230847821* ___outarr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNativeIOS::Augmenter_getVideoBackgroundTextureFormat(System.IntPtr)
extern "C"  int32_t EngineNativeIOS_Augmenter_getVideoBackgroundTextureFormat_m498656048 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::Augmenter_setVideoBackgroundTextureID(System.IntPtr,System.IntPtr)
extern "C"  void EngineNativeIOS_Augmenter_setVideoBackgroundTextureID_m1464436680 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___obj0, IntPtr_t ___id1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNativeIOS::Augmenter_getID(System.IntPtr)
extern "C"  int32_t EngineNativeIOS_Augmenter_getID_m668041950 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNativeIOS::Augmenter_getRenderingFlag(System.IntPtr)
extern "C"  int32_t EngineNativeIOS_Augmenter_getRenderingFlag_m1888837077 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNativeIOS::Create_CameraCalibration()
extern "C"  IntPtr_t EngineNativeIOS_Create_CameraCalibration_m2441373581 (EngineNativeIOS_t1638809498 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::Destory_CameraCalibration(System.IntPtr)
extern "C"  void EngineNativeIOS_Destory_CameraCalibration_m2364679406 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::CameraCalibration_getSize(System.IntPtr,System.Int32[])
extern "C"  void EngineNativeIOS_CameraCalibration_getSize_m1228582154 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___obj0, Int32U5BU5D_t3230847821* ___outarr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::CameraCalibration_getFocalLength(System.IntPtr,System.Single[])
extern "C"  void EngineNativeIOS_CameraCalibration_getFocalLength_m3863982482 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___obj0, SingleU5BU5D_t2316563989* ___outarr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::CameraCalibration_getPrincipalPoint(System.IntPtr,System.Single[])
extern "C"  void EngineNativeIOS_CameraCalibration_getPrincipalPoint_m41598765 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___obj0, SingleU5BU5D_t2316563989* ___outarr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::CameraCalibration_getDistortionParameters(System.IntPtr,System.Single[])
extern "C"  void EngineNativeIOS_CameraCalibration_getDistortionParameters_m2645735272 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___obj0, SingleU5BU5D_t2316563989* ___outarr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNativeIOS::Create_CameraDevice()
extern "C"  IntPtr_t EngineNativeIOS_Create_CameraDevice_m111238517 (EngineNativeIOS_t1638809498 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::Destory_CameraDevice(System.IntPtr)
extern "C"  void EngineNativeIOS_Destory_CameraDevice_m2414676376 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::CameraDevice_start(System.IntPtr)
extern "C"  bool EngineNativeIOS_CameraDevice_start_m1410464020 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::CameraDevice_stop(System.IntPtr)
extern "C"  bool EngineNativeIOS_CameraDevice_stop_m221467534 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::CameraDevice_open(System.IntPtr,System.Int32)
extern "C"  bool EngineNativeIOS_CameraDevice_open_m2423382609 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___obj0, int32_t ___camera1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::CameraDevice_close(System.IntPtr)
extern "C"  bool EngineNativeIOS_CameraDevice_close_m1169801406 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNativeIOS::CameraDevice_getNumSupportedFrameRate(System.IntPtr)
extern "C"  int32_t EngineNativeIOS_CameraDevice_getNumSupportedFrameRate_m3318595451 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single EasyAR.EngineNativeIOS::CameraDevice_getSupportedFrameRate(System.IntPtr,System.Int32)
extern "C"  float EngineNativeIOS_CameraDevice_getSupportedFrameRate_m242204662 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___obj0, int32_t ___idx1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::CameraDevice_setFrameRate(System.IntPtr,System.Single)
extern "C"  bool EngineNativeIOS_CameraDevice_setFrameRate_m2257549290 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___obj0, float ___fps1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::CameraDevice_getSize(System.IntPtr,System.Int32[])
extern "C"  void EngineNativeIOS_CameraDevice_getSize_m300438442 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___obj0, Int32U5BU5D_t3230847821* ___outarr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNativeIOS::CameraDevice_getNumSupportedSize(System.IntPtr)
extern "C"  int32_t EngineNativeIOS_CameraDevice_getNumSupportedSize_m3192501149 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::CameraDevice_getSupportedSize(System.IntPtr,System.Int32,System.Int32[])
extern "C"  void EngineNativeIOS_CameraDevice_getSupportedSize_m2344125705 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___obj0, int32_t ___idx1, Int32U5BU5D_t3230847821* ___outarr2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::CameraDevice_setSize(System.IntPtr,System.Int32,System.Int32)
extern "C"  bool EngineNativeIOS_CameraDevice_setSize_m3761575603 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___obj0, int32_t ___w1, int32_t ___h2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNativeIOS::CameraDevice_getCameraCalibration(System.IntPtr)
extern "C"  IntPtr_t EngineNativeIOS_CameraDevice_getCameraCalibration_m881166986 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::CameraDevice_setFocusMode(System.IntPtr,System.Int32)
extern "C"  bool EngineNativeIOS_CameraDevice_setFocusMode_m195507424 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___obj0, int32_t ___focusMode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::CameraDevice_setHorizontalFlip(System.IntPtr,System.Boolean)
extern "C"  void EngineNativeIOS_CameraDevice_setHorizontalFlip_m578733550 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___obj0, bool ___flip1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNativeIOS::Create_Frame()
extern "C"  IntPtr_t EngineNativeIOS_Create_Frame_m748758005 (EngineNativeIOS_t1638809498 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::Destory_Frame(System.IntPtr)
extern "C"  void EngineNativeIOS_Destory_Frame_m194241542 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double EasyAR.EngineNativeIOS::Frame_getTimeStamp(System.IntPtr)
extern "C"  double EngineNativeIOS_Frame_getTimeStamp_m660456009 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNativeIOS::Frame_getIndex(System.IntPtr)
extern "C"  int32_t EngineNativeIOS_Frame_getIndex_m1486996426 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNativeIOS::Frame_targets(System.IntPtr)
extern "C"  IntPtr_t EngineNativeIOS_Frame_targets_m3784275565 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNativeIOS::Frame_text(System.IntPtr)
extern "C"  IntPtr_t EngineNativeIOS_Frame_text_m3830115050 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::Destory_Image(System.IntPtr)
extern "C"  void EngineNativeIOS_Destory_Image_m3660204632 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNativeIOS::Create_ImageTarget()
extern "C"  IntPtr_t EngineNativeIOS_Create_ImageTarget_m2870871124 (EngineNativeIOS_t1638809498 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::Destory_ImageTarget(System.IntPtr)
extern "C"  void EngineNativeIOS_Destory_ImageTarget_m1518097607 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::ImageTarget_getSize(System.IntPtr,System.Single[])
extern "C"  void EngineNativeIOS_ImageTarget_getSize_m2703445287 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___obj0, SingleU5BU5D_t2316563989* ___outarr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::ImageTarget_setSize(System.IntPtr,System.Single,System.Single)
extern "C"  bool EngineNativeIOS_ImageTarget_setSize_m4155507694 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___obj0, float ___w1, float ___h2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::ImageTarget_load(System.IntPtr,System.String,System.Int32,System.String)
extern "C"  bool EngineNativeIOS_ImageTarget_load_m2414711102 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___obj0, String_t* ___path1, int32_t ___storageType2, String_t* ___name3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNativeIOS::ImageTarget_loadAll(System.String,System.Int32)
extern "C"  IntPtr_t EngineNativeIOS_ImageTarget_loadAll_m603269972 (EngineNativeIOS_t1638809498 * __this, String_t* ___path0, int32_t ___storageType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNativeIOS::Create_Target()
extern "C"  IntPtr_t EngineNativeIOS_Create_Target_m2939736683 (EngineNativeIOS_t1638809498 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::Destory_Target(System.IntPtr)
extern "C"  void EngineNativeIOS_Destory_Target_m2616032034 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNativeIOS::Target_getId(System.IntPtr)
extern "C"  int32_t EngineNativeIOS_Target_getId_m3598828341 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNativeIOS::Target_getName(System.IntPtr)
extern "C"  IntPtr_t EngineNativeIOS_Target_getName_m3785567190 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNativeIOS::Target_getUid(System.IntPtr)
extern "C"  IntPtr_t EngineNativeIOS_Target_getUid_m1410327573 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNativeIOS::Target_metaData(System.IntPtr)
extern "C"  IntPtr_t EngineNativeIOS_Target_metaData_m2473404992 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::Target_load(System.IntPtr,System.String,System.Int32,System.String)
extern "C"  bool EngineNativeIOS_Target_load_m2050544503 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___obj0, String_t* ___path1, int32_t ___storageType2, String_t* ___name3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::Destory_TargetList(System.IntPtr)
extern "C"  void EngineNativeIOS_Destory_TargetList_m3519861540 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNativeIOS::TargetList_size(System.IntPtr)
extern "C"  int32_t EngineNativeIOS_TargetList_size_m2156140221 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNativeIOS::TargetList_at(System.IntPtr,System.Int32)
extern "C"  IntPtr_t EngineNativeIOS_TargetList_at_m350066045 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___obj0, int32_t ___idx1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::Destory_AugmentedTargetList(System.IntPtr)
extern "C"  void EngineNativeIOS_Destory_AugmentedTargetList_m1561051732 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNativeIOS::AugmentedTargetList_size(System.IntPtr)
extern "C"  int32_t EngineNativeIOS_AugmentedTargetList_size_m1812450167 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNativeIOS::AugmentedTargetList_at(System.IntPtr,System.Int32)
extern "C"  IntPtr_t EngineNativeIOS_AugmentedTargetList_at_m951920641 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___obj0, int32_t ___idx1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::Destory_AugmentedTarget(System.IntPtr)
extern "C"  void EngineNativeIOS_Destory_AugmentedTarget_m753107538 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNativeIOS::AugmentedTarget_status(System.IntPtr)
extern "C"  int32_t EngineNativeIOS_AugmentedTarget_status_m1273915112 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNativeIOS::AugmentedTarget_target(System.IntPtr)
extern "C"  IntPtr_t EngineNativeIOS_AugmentedTarget_target_m3621859770 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::AugmentedTarget_pose(System.IntPtr,System.Single[])
extern "C"  void EngineNativeIOS_AugmentedTarget_pose_m185216786 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___obj0, SingleU5BU5D_t2316563989* ___outarr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNativeIOS::Create_ImageTracker()
extern "C"  IntPtr_t EngineNativeIOS_Create_ImageTracker_m348651639 (EngineNativeIOS_t1638809498 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::Destory_ImageTracker(System.IntPtr)
extern "C"  void EngineNativeIOS_Destory_ImageTracker_m715315670 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::ImageTracker_attachCamera(System.IntPtr,System.IntPtr)
extern "C"  bool EngineNativeIOS_ImageTracker_attachCamera_m3946079190 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___obj0, IntPtr_t ___cam1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::ImageTracker_detachCamera(System.IntPtr,System.IntPtr)
extern "C"  bool EngineNativeIOS_ImageTracker_detachCamera_m1985202120 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___obj0, IntPtr_t ___cam1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::ImageTracker_loadTarget(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void EngineNativeIOS_ImageTracker_loadTarget_m888434475 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___obj0, IntPtr_t ___ds1, IntPtr_t ___cb2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::ImageTracker_unloadTarget(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void EngineNativeIOS_ImageTracker_unloadTarget_m1373304178 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___obj0, IntPtr_t ___ds1, IntPtr_t ___cb2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::ImageTracker_start(System.IntPtr)
extern "C"  bool EngineNativeIOS_ImageTracker_start_m854467282 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::ImageTracker_stop(System.IntPtr)
extern "C"  bool EngineNativeIOS_ImageTracker_stop_m896268816 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNativeIOS::Create_TargetLoadCallBackUnity(System.IntPtr,EasyAR.ImageTracker/TargetLoadCallbackC)
extern "C"  IntPtr_t EngineNativeIOS_Create_TargetLoadCallBackUnity_m3813269967 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___obj0, TargetLoadCallbackC_t3429128016 * ___func1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::Destory_TargetLoadCallBackUnity(System.IntPtr)
extern "C"  void EngineNativeIOS_Destory_TargetLoadCallBackUnity_m42030778 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::ImageTracker_checkCallBack(System.IntPtr)
extern "C"  bool EngineNativeIOS_ImageTracker_checkCallBack_m660120903 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::ImageTracker_setCallBackThread(System.IntPtr,System.Boolean)
extern "C"  void EngineNativeIOS_ImageTracker_setCallBackThread_m2520878350 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___obj0, bool ___enable1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::ImageTracker_setSimultaneousNum(System.IntPtr,System.Int32)
extern "C"  bool EngineNativeIOS_ImageTracker_setSimultaneousNum_m867875022 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___obj0, int32_t ___num1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNativeIOS::ImageTracker_simultaneousNum(System.IntPtr)
extern "C"  int32_t EngineNativeIOS_ImageTracker_simultaneousNum_m4043046703 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNativeIOS::Create_BarCodeScanner()
extern "C"  IntPtr_t EngineNativeIOS_Create_BarCodeScanner_m752205272 (EngineNativeIOS_t1638809498 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::Destory_BarCodeScanner(System.IntPtr)
extern "C"  void EngineNativeIOS_Destory_BarCodeScanner_m3352092629 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::BarCodeScanner_attachCamera(System.IntPtr,System.IntPtr)
extern "C"  bool EngineNativeIOS_BarCodeScanner_attachCamera_m2908488247 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___obj0, IntPtr_t ___cam1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::BarCodeScanner_detachCamera(System.IntPtr,System.IntPtr)
extern "C"  bool EngineNativeIOS_BarCodeScanner_detachCamera_m947611177 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___obj0, IntPtr_t ___cam1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::BarCodeScanner_start(System.IntPtr)
extern "C"  bool EngineNativeIOS_BarCodeScanner_start_m4235930065 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::BarCodeScanner_stop(System.IntPtr)
extern "C"  bool EngineNativeIOS_BarCodeScanner_stop_m1420990257 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNativeIOS::Create_VideoPlayer()
extern "C"  IntPtr_t EngineNativeIOS_Create_VideoPlayer_m3558958276 (EngineNativeIOS_t1638809498 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::Destory_VideoPlayer(System.IntPtr)
extern "C"  void EngineNativeIOS_Destory_VideoPlayer_m721234519 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::VideoPlayer_setRenderTexture(System.IntPtr,System.IntPtr)
extern "C"  void EngineNativeIOS_VideoPlayer_setRenderTexture_m998648166 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___obj0, IntPtr_t ___texture1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::VideoPlayer_setVideoType(System.IntPtr,System.Int32)
extern "C"  void EngineNativeIOS_VideoPlayer_setVideoType_m1016784047 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___obj0, int32_t ___videoType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::VideoPlayer_open(System.IntPtr,System.String,System.Int32,System.IntPtr)
extern "C"  void EngineNativeIOS_VideoPlayer_open_m794035576 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___obj0, String_t* ___path1, int32_t ___storageType2, IntPtr_t ___callback3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::VideoPlayer_close(System.IntPtr)
extern "C"  void EngineNativeIOS_VideoPlayer_close_m2173762643 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::VideoPlayer_play(System.IntPtr)
extern "C"  bool EngineNativeIOS_VideoPlayer_play_m3707504219 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::VideoPlayer_stop(System.IntPtr)
extern "C"  bool EngineNativeIOS_VideoPlayer_stop_m3853751245 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::VideoPlayer_pause(System.IntPtr)
extern "C"  bool EngineNativeIOS_VideoPlayer_pause_m93488289 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::VideoPlayer_updateFrame(System.IntPtr)
extern "C"  void EngineNativeIOS_VideoPlayer_updateFrame_m2362819751 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNativeIOS::VideoPlayer_duration(System.IntPtr)
extern "C"  int32_t EngineNativeIOS_VideoPlayer_duration_m2866916193 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNativeIOS::VideoPlayer_currentPosition(System.IntPtr)
extern "C"  int32_t EngineNativeIOS_VideoPlayer_currentPosition_m560208431 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::VideoPlayer_seek(System.IntPtr,System.Int32)
extern "C"  bool EngineNativeIOS_VideoPlayer_seek_m1321138080 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___obj0, int32_t ___position1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::VideoPlayer_size(System.IntPtr,System.Int32[])
extern "C"  void EngineNativeIOS_VideoPlayer_size_m1152076667 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___obj0, Int32U5BU5D_t3230847821* ___arr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single EasyAR.EngineNativeIOS::VideoPlayer_volume(System.IntPtr)
extern "C"  float EngineNativeIOS_VideoPlayer_volume_m1335425781 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::VideoPlayer_setVolume(System.IntPtr,System.Single)
extern "C"  bool EngineNativeIOS_VideoPlayer_setVolume_m3049255264 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___obj0, float ___volume1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNativeIOS::Create_VideoPlayerCallBackUnity(System.IntPtr,EasyAR.VideoPlayer/CallBack)
extern "C"  IntPtr_t EngineNativeIOS_Create_VideoPlayerCallBackUnity_m1990211775 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___obj0, CallBack_t2228309331 * ___func1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::VideoPlayer_checkCallBack(System.IntPtr)
extern "C"  bool EngineNativeIOS_VideoPlayer_checkCallBack_m365277226 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::VideoPlayer_setCallBackThread(System.IntPtr,System.Boolean)
extern "C"  void EngineNativeIOS_VideoPlayer_setCallBackThread_m1238781667 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___callback0, bool ___enable1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::Destory_VideoPlayerCallBackUnity(System.IntPtr)
extern "C"  void EngineNativeIOS_Destory_VideoPlayerCallBackUnity_m2578657823 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNativeIOS::Cast_Target2ImageTarget(System.IntPtr)
extern "C"  IntPtr_t EngineNativeIOS_Cast_Target2ImageTarget_m3372125266 (EngineNativeIOS_t1638809498 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::ezarGetProjectionGL(System.IntPtr,System.Single,System.Single,System.Int32,System.Single[])
extern "C"  void EngineNativeIOS_ezarGetProjectionGL_m1487868524 (Il2CppObject * __this /* static, unused */, IntPtr_t ___calib0, float ___nearPlane1, float ___farPlane2, int32_t ___rotation3, SingleU5BU5D_t2316563989* ___outarr4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::ezarSetAssetPath(System.String)
extern "C"  void EngineNativeIOS_ezarSetAssetPath_m2800854291 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::ezarRegisterLogFunc(EasyAR.EngineNativeIOS/LogFunc)
extern "C"  void EngineNativeIOS_ezarRegisterLogFunc_m2733762425 (Il2CppObject * __this /* static, unused */, LogFunc_t3562562578 * ___func0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::ezarBase_IsValid(System.IntPtr)
extern "C"  bool EngineNativeIOS_ezarBase_IsValid_m434518088 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::ezarOnResume()
extern "C"  void EngineNativeIOS_ezarOnResume_m3236052872 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::ezarOnPause()
extern "C"  void EngineNativeIOS_ezarOnPause_m2511610013 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::ezarNativeInit(System.String,System.IntPtr)
extern "C"  bool EngineNativeIOS_ezarNativeInit_m850575041 (Il2CppObject * __this /* static, unused */, String_t* ___key0, IntPtr_t ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNativeIOS::ezarSetRotation(System.Int32)
extern "C"  int32_t EngineNativeIOS_ezarSetRotation_m1643451441 (Il2CppObject * __this /* static, unused */, int32_t ___rot0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNativeIOS::ezarCreate_Augmenter()
extern "C"  IntPtr_t EngineNativeIOS_ezarCreate_Augmenter_m628201196 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::ezarDestory_Augmenter(System.IntPtr)
extern "C"  void EngineNativeIOS_ezarDestory_Augmenter_m1341092731 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNativeIOS::ezarAugmenter_newFrame(System.IntPtr)
extern "C"  IntPtr_t EngineNativeIOS_ezarAugmenter_newFrame_m124334101 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::ezarAugmenter_attachCamera(System.IntPtr,System.IntPtr)
extern "C"  bool EngineNativeIOS_ezarAugmenter_attachCamera_m3801331183 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___c1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::ezarAugmenter_detachCamera(System.IntPtr,System.IntPtr)
extern "C"  bool EngineNativeIOS_ezarAugmenter_detachCamera_m1840454113 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___c1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::ezarAugmenter_getVideoBackgroundTextureSize(System.IntPtr,System.Int32[])
extern "C"  void EngineNativeIOS_ezarAugmenter_getVideoBackgroundTextureSize_m2424257999 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, Int32U5BU5D_t3230847821* ___outarr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNativeIOS::ezarAugmenter_getVideoBackgroundTextureFormat(System.IntPtr)
extern "C"  int32_t EngineNativeIOS_ezarAugmenter_getVideoBackgroundTextureFormat_m1516094294 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::ezarAugmenter_setVideoBackgroundTextureID(System.IntPtr,System.IntPtr)
extern "C"  void EngineNativeIOS_ezarAugmenter_setVideoBackgroundTextureID_m1869402990 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___id1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNativeIOS::ezarAugmenter_getID(System.IntPtr)
extern "C"  int32_t EngineNativeIOS_ezarAugmenter_getID_m1029916292 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNativeIOS::ezarAugmenter_getRenderingFlag(System.IntPtr)
extern "C"  int32_t EngineNativeIOS_ezarAugmenter_getRenderingFlag_m881653359 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNativeIOS::ezarCreate_CameraCalibration()
extern "C"  IntPtr_t EngineNativeIOS_ezarCreate_CameraCalibration_m4226428595 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::ezarDestory_CameraCalibration(System.IntPtr)
extern "C"  void EngineNativeIOS_ezarDestory_CameraCalibration_m192001044 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::ezarCameraCalibration_getSize(System.IntPtr,System.Int32[])
extern "C"  void EngineNativeIOS_ezarCameraCalibration_getSize_m326249764 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, Int32U5BU5D_t3230847821* ___outarr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::ezarCameraCalibration_getFocalLength(System.IntPtr,System.Single[])
extern "C"  void EngineNativeIOS_ezarCameraCalibration_getFocalLength_m3489298348 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, SingleU5BU5D_t2316563989* ___outarr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::ezarCameraCalibration_getPrincipalPoint(System.IntPtr,System.Single[])
extern "C"  void EngineNativeIOS_ezarCameraCalibration_getPrincipalPoint_m446565075 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, SingleU5BU5D_t2316563989* ___outarr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::ezarCameraCalibration_getDistortionParameters(System.IntPtr,System.Single[])
extern "C"  void EngineNativeIOS_ezarCameraCalibration_getDistortionParameters_m2419863182 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, SingleU5BU5D_t2316563989* ___outarr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNativeIOS::ezarCreate_CameraDevice()
extern "C"  IntPtr_t EngineNativeIOS_ezarCreate_CameraDevice_m1989752463 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::ezarDestory_CameraDevice(System.IntPtr)
extern "C"  void EngineNativeIOS_ezarDestory_CameraDevice_m617487026 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::ezarCameraDevice_start(System.IntPtr)
extern "C"  bool EngineNativeIOS_ezarCameraDevice_start_m859352750 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::ezarCameraDevice_stop(System.IntPtr)
extern "C"  bool EngineNativeIOS_ezarCameraDevice_stop_m1173521076 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::ezarCameraDevice_open(System.IntPtr,System.Int32)
extern "C"  bool EngineNativeIOS_ezarCameraDevice_open_m84082923 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, int32_t ___camera1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::ezarCameraDevice_close(System.IntPtr)
extern "C"  bool EngineNativeIOS_ezarCameraDevice_close_m618690136 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNativeIOS::ezarCameraDevice_getNumSupportedFrameRate(System.IntPtr)
extern "C"  int32_t EngineNativeIOS_ezarCameraDevice_getNumSupportedFrameRate_m3431244449 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single EasyAR.EngineNativeIOS::ezarCameraDevice_getSupportedFrameRate(System.IntPtr,System.Int32)
extern "C"  float EngineNativeIOS_ezarCameraDevice_getSupportedFrameRate_m1138657436 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, int32_t ___idx1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::ezarCameraDevice_setFrameRate(System.IntPtr,System.Single)
extern "C"  bool EngineNativeIOS_ezarCameraDevice_setFrameRate_m881731216 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, float ___fps1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::ezarCameraDevice_getSize(System.IntPtr,System.Int32[])
extern "C"  void EngineNativeIOS_ezarCameraDevice_getSize_m2540940112 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, Int32U5BU5D_t3230847821* ___outarr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNativeIOS::ezarCameraDevice_getNumSupportedSize(System.IntPtr)
extern "C"  int32_t EngineNativeIOS_ezarCameraDevice_getNumSupportedSize_m4071551159 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::ezarCameraDevice_getSupportedSize(System.IntPtr,System.Int32,System.Int32[])
extern "C"  void EngineNativeIOS_ezarCameraDevice_getSupportedSize_m2118253615 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, int32_t ___idx1, Int32U5BU5D_t3230847821* ___outarr2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::ezarCameraDevice_setSize(System.IntPtr,System.Int32,System.Int32)
extern "C"  bool EngineNativeIOS_ezarCameraDevice_setSize_m2163851597 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, int32_t ___w1, int32_t ___h2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNativeIOS::ezarCameraDevice_getCameraCalibration(System.IntPtr)
extern "C"  IntPtr_t EngineNativeIOS_ezarCameraDevice_getCameraCalibration_m648597808 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::ezarCameraDevice_setFocusMode(System.IntPtr,System.Int32)
extern "C"  bool EngineNativeIOS_ezarCameraDevice_setFocusMode_m2506430842 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, int32_t ___focusMode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::ezarCameraDevice_setHorizontalFlip(System.IntPtr,System.Boolean)
extern "C"  void EngineNativeIOS_ezarCameraDevice_setHorizontalFlip_m3142927892 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, bool ___flip1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNativeIOS::ezarCreate_Frame()
extern "C"  IntPtr_t EngineNativeIOS_ezarCreate_Frame_m1766585371 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::ezarDestory_Frame(System.IntPtr)
extern "C"  void EngineNativeIOS_ezarDestory_Frame_m2663676972 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double EasyAR.EngineNativeIOS::ezarFrame_getTimeStamp(System.IntPtr)
extern "C"  double EngineNativeIOS_ezarFrame_getTimeStamp_m3787590499 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNativeIOS::ezarFrame_getIndex(System.IntPtr)
extern "C"  int32_t EngineNativeIOS_ezarFrame_getIndex_m1637217124 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNativeIOS::ezarFrame_targets(System.IntPtr)
extern "C"  IntPtr_t EngineNativeIOS_ezarFrame_targets_m1235225619 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNativeIOS::ezarFrame_text(System.IntPtr)
extern "C"  IntPtr_t EngineNativeIOS_ezarFrame_text_m1948034820 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::ezarDestory_Image(System.IntPtr)
extern "C"  void EngineNativeIOS_ezarDestory_Image_m1834672766 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNativeIOS::ezarCreate_ImageTarget()
extern "C"  IntPtr_t EngineNativeIOS_ezarCreate_ImageTarget_m714711034 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::ezarDestory_ImageTarget(System.IntPtr)
extern "C"  void EngineNativeIOS_ezarDestory_ImageTarget_m1460123757 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::ezarImageTarget_getSize(System.IntPtr,System.Single[])
extern "C"  void EngineNativeIOS_ezarImageTarget_getSize_m648979661 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, SingleU5BU5D_t2316563989* ___outarr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::ezarImageTarget_setSize(System.IntPtr,System.Single,System.Single)
extern "C"  bool EngineNativeIOS_ezarImageTarget_setSize_m1870703764 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, float ___w1, float ___h2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::ezarImageTarget_load(System.IntPtr,System.String,System.Int32,System.String)
extern "C"  bool EngineNativeIOS_ezarImageTarget_load_m626532964 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, String_t* ___path1, int32_t ___storageType2, String_t* ___name3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNativeIOS::ezarCreate_Target()
extern "C"  IntPtr_t EngineNativeIOS_ezarCreate_Target_m132646661 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::ezarDestory_Target(System.IntPtr)
extern "C"  void EngineNativeIOS_ezarDestory_Target_m1859119036 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNativeIOS::ezarTarget_getId(System.IntPtr)
extern "C"  int32_t EngineNativeIOS_ezarTarget_getId_m2249265487 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNativeIOS::ezarTarget_getName(System.IntPtr)
extern "C"  IntPtr_t EngineNativeIOS_ezarTarget_getName_m2074430192 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNativeIOS::ezarTarget_getUid(System.IntPtr)
extern "C"  IntPtr_t EngineNativeIOS_ezarTarget_getUid_m3156244923 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNativeIOS::ezarTarget_metaData(System.IntPtr)
extern "C"  IntPtr_t EngineNativeIOS_ezarTarget_metaData_m967765606 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::ezarTarget_load(System.IntPtr,System.String,System.Int32,System.String)
extern "C"  bool EngineNativeIOS_ezarTarget_load_m768975505 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, String_t* ___path1, int32_t ___storageType2, String_t* ___name3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::ezarDestory_TargetList(System.IntPtr)
extern "C"  void EngineNativeIOS_ezarDestory_TargetList_m1578328766 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNativeIOS::ezarImageTarget_loadAll(System.String,System.Int32)
extern "C"  IntPtr_t EngineNativeIOS_ezarImageTarget_loadAll_m2258335726 (Il2CppObject * __this /* static, unused */, String_t* ___path0, int32_t ___storageType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNativeIOS::ezarTargetList_size(System.IntPtr)
extern "C"  int32_t EngineNativeIOS_ezarTargetList_size_m2518014563 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNativeIOS::ezarTargetList_at(System.IntPtr,System.Int32)
extern "C"  IntPtr_t EngineNativeIOS_ezarTargetList_at_m3539459479 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, int32_t ___idx1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::ezarDestory_AugmentedTargetList(System.IntPtr)
extern "C"  void EngineNativeIOS_ezarDestory_AugmentedTargetList_m971251706 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNativeIOS::ezarAugmentedTargetList_size(System.IntPtr)
extern "C"  int32_t EngineNativeIOS_ezarAugmentedTargetList_size_m1650508433 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNativeIOS::ezarAugmentedTargetList_at(System.IntPtr,System.Int32)
extern "C"  IntPtr_t EngineNativeIOS_ezarAugmentedTargetList_at_m791239975 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, int32_t ___idx1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::ezarDestory_AugmentedTarget(System.IntPtr)
extern "C"  void EngineNativeIOS_ezarDestory_AugmentedTarget_m1747493624 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNativeIOS::ezarAugmentedTarget_status(System.IntPtr)
extern "C"  int32_t EngineNativeIOS_ezarAugmentedTarget_status_m3798883458 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNativeIOS::ezarAugmentedTarget_target(System.IntPtr)
extern "C"  IntPtr_t EngineNativeIOS_ezarAugmentedTarget_target_m2823263956 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::ezarAugmentedTarget_pose(System.IntPtr,System.Single[])
extern "C"  void EngineNativeIOS_ezarAugmentedTarget_pose_m921291820 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, SingleU5BU5D_t2316563989* ___outarr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNativeIOS::ezarCreate_ImageTracker()
extern "C"  IntPtr_t EngineNativeIOS_ezarCreate_ImageTracker_m2227165585 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::ezarDestory_ImageTracker(System.IntPtr)
extern "C"  void EngineNativeIOS_ezarDestory_ImageTracker_m3213093616 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::ezarImageTracker_attachCamera(System.IntPtr,System.IntPtr)
extern "C"  bool EngineNativeIOS_ezarImageTracker_attachCamera_m2570261116 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___cam1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::ezarImageTracker_detachCamera(System.IntPtr,System.IntPtr)
extern "C"  bool EngineNativeIOS_ezarImageTracker_detachCamera_m609384046 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___cam1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::ezarImageTracker_loadTarget(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void EngineNativeIOS_ezarImageTracker_loadTarget_m1293400785 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___ds1, IntPtr_t ___cb2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::ezarImageTracker_unloadTarget(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void EngineNativeIOS_ezarImageTracker_unloadTarget_m3998871448 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___ds1, IntPtr_t ___cb2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::ezarImageTracker_start(System.IntPtr)
extern "C"  bool EngineNativeIOS_ezarImageTracker_start_m303356012 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::ezarImageTracker_stop(System.IntPtr)
extern "C"  bool EngineNativeIOS_ezarImageTracker_stop_m1848322358 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNativeIOS::ezarCreate_TargetLoadCallBackUnity(System.IntPtr,EasyAR.ImageTracker/TargetLoadCallbackC)
extern "C"  IntPtr_t EngineNativeIOS_ezarCreate_TargetLoadCallBackUnity_m1298918121 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, TargetLoadCallbackC_t3429128016 * ___func1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::ezarDestory_TargetLoadCallBackUnity(System.IntPtr)
extern "C"  void EngineNativeIOS_ezarDestory_TargetLoadCallBackUnity_m3674632544 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::ezarImageTracker_checkCallBack(System.IntPtr)
extern "C"  bool EngineNativeIOS_ezarImageTracker_checkCallBack_m337977569 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::ezarImageTracker_setCallBackThread(System.IntPtr,System.Boolean)
extern "C"  void EngineNativeIOS_ezarImageTracker_setCallBackThread_m790105396 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, bool ___enable1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::ezarImageTracker_setSimultaneousNum(System.IntPtr,System.Int32)
extern "C"  bool EngineNativeIOS_ezarImageTracker_setSimultaneousNum_m2600288744 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, int32_t ___num1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNativeIOS::ezarImageTracker_simultaneousNum(System.IntPtr)
extern "C"  int32_t EngineNativeIOS_ezarImageTracker_simultaneousNum_m2507135305 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNativeIOS::ezarCreate_BarCodeScanner()
extern "C"  IntPtr_t EngineNativeIOS_ezarCreate_BarCodeScanner_m2117843058 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::ezarDestory_BarCodeScanner(System.IntPtr)
extern "C"  void EngineNativeIOS_ezarDestory_BarCodeScanner_m2829980271 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::ezarBarCodeScanner_attachCamera(System.IntPtr,System.IntPtr)
extern "C"  bool EngineNativeIOS_ezarBarCodeScanner_attachCamera_m3597246301 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___cam1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::ezarBarCodeScanner_detachCamera(System.IntPtr,System.IntPtr)
extern "C"  bool EngineNativeIOS_ezarBarCodeScanner_detachCamera_m1636369231 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___cam1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::ezarBarCodeScanner_start(System.IntPtr)
extern "C"  bool EngineNativeIOS_ezarBarCodeScanner_start_m2898977003 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::ezarBarCodeScanner_stop(System.IntPtr)
extern "C"  bool EngineNativeIOS_ezarBarCodeScanner_stop_m1516410071 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNativeIOS::ezarCreate_VideoPlayer()
extern "C"  IntPtr_t EngineNativeIOS_ezarCreate_VideoPlayer_m1402798186 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::ezarDestory_VideoPlayer(System.IntPtr)
extern "C"  void EngineNativeIOS_ezarDestory_VideoPlayer_m663260669 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::ezarVideoPlayer_setRenderTexture(System.IntPtr,System.IntPtr)
extern "C"  void EngineNativeIOS_ezarVideoPlayer_setRenderTexture_m1440615168 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___texture1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::ezarVideoPlayer_setVideoType(System.IntPtr,System.Int32)
extern "C"  void EngineNativeIOS_ezarVideoPlayer_setVideoType_m2360273621 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, int32_t ___videoType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::ezarVideoPlayer_open(System.IntPtr,System.String,System.Int32,System.IntPtr)
extern "C"  void EngineNativeIOS_ezarVideoPlayer_open_m568163486 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, String_t* ___path1, int32_t ___storageType2, IntPtr_t ___callback3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::ezarVideoPlayer_close(System.IntPtr)
extern "C"  void EngineNativeIOS_ezarVideoPlayer_close_m1556943225 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::ezarVideoPlayer_play(System.IntPtr)
extern "C"  bool EngineNativeIOS_ezarVideoPlayer_play_m967268981 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::ezarVideoPlayer_stop(System.IntPtr)
extern "C"  bool EngineNativeIOS_ezarVideoPlayer_stop_m1113516007 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::ezarVideoPlayer_pause(System.IntPtr)
extern "C"  bool EngineNativeIOS_ezarVideoPlayer_pause_m1045541831 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::ezarVideoPlayer_updateFrame(System.IntPtr)
extern "C"  void EngineNativeIOS_ezarVideoPlayer_updateFrame_m3357205837 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNativeIOS::ezarVideoPlayer_duration(System.IntPtr)
extern "C"  int32_t EngineNativeIOS_ezarVideoPlayer_duration_m1144405883 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNativeIOS::ezarVideoPlayer_currentPosition(System.IntPtr)
extern "C"  int32_t EngineNativeIOS_ezarVideoPlayer_currentPosition_m3697251541 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::ezarVideoPlayer_seek(System.IntPtr,System.Int32)
extern "C"  bool EngineNativeIOS_ezarVideoPlayer_seek_m3600981446 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, int32_t ___position1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::ezarVideoPlayer_size(System.IntPtr,System.Int32[])
extern "C"  void EngineNativeIOS_ezarVideoPlayer_size_m489711137 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, Int32U5BU5D_t3230847821* ___arr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single EasyAR.EngineNativeIOS::ezarVideoPlayer_volume(System.IntPtr)
extern "C"  float EngineNativeIOS_ezarVideoPlayer_volume_m1651347599 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::ezarVideoPlayer_setVolume(System.IntPtr,System.Single)
extern "C"  bool EngineNativeIOS_ezarVideoPlayer_setVolume_m2885411590 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, float ___volume1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNativeIOS::ezarCreate_VideoPlayerCallBackUnity(System.IntPtr,EasyAR.VideoPlayer/CallBack)
extern "C"  IntPtr_t EngineNativeIOS_ezarCreate_VideoPlayerCallBackUnity_m2284379109 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, CallBack_t2228309331 * ___func1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::ezarVideoPlayer_checkCallBack(System.IntPtr)
extern "C"  bool EngineNativeIOS_ezarVideoPlayer_checkCallBack_m2987284816 (Il2CppObject * __this /* static, unused */, IntPtr_t ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::ezarVideoPlayer_setCallBackThread(System.IntPtr,System.Boolean)
extern "C"  void EngineNativeIOS_ezarVideoPlayer_setCallBackThread_m767308285 (Il2CppObject * __this /* static, unused */, IntPtr_t ___callback0, bool ___enable1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::ezarDestory_VideoPlayerCallBackUnity(System.IntPtr)
extern "C"  void EngineNativeIOS_ezarDestory_VideoPlayerCallBackUnity_m3520162873 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNativeIOS::ezarCast_Target2ImageTarget(System.IntPtr)
extern "C"  IntPtr_t EngineNativeIOS_ezarCast_Target2ImageTarget_m90491512 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
