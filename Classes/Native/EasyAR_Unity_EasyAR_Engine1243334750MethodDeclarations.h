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

// System.String
struct String_t;
// EasyAR.IEngineNative
struct IEngineNative_t2025298056;
// EasyAR.CameraCalibration
struct CameraCalibration_t252974987;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "UnityEngine_UnityEngine_Matrix4x41651859333.h"
#include "EasyAR_Unity_EasyAR_CameraCalibration252974987.h"
#include "UnityEngine_UnityEngine_ScreenOrientation1849668026.h"

// System.Void EasyAR.Engine::.cctor()
extern "C"  void Engine__cctor_m1309210283 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.Engine::Initialize(System.String,System.IntPtr)
extern "C"  bool Engine_Initialize_m2201756234 (Il2CppObject * __this /* static, unused */, String_t* ___key0, IntPtr_t ___activity1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// EasyAR.IEngineNative EasyAR.Engine::get_Instance()
extern "C"  Il2CppObject * Engine_get_Instance_m3826651122 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 EasyAR.Engine::GetProjection(EasyAR.CameraCalibration,System.Single,System.Single)
extern "C"  Matrix4x4_t1651859333  Engine_GetProjection_m4029974528 (Il2CppObject * __this /* static, unused */, CameraCalibration_t252974987 * ___calib0, float ___nearPlane1, float ___farPlane2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.Engine::Pause()
extern "C"  void Engine_Pause_m1774478038 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.Engine::Resume()
extern "C"  void Engine_Resume_m1859798127 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.Engine::OnApplicationQuit()
extern "C"  void Engine_OnApplicationQuit_m1283921856 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.Engine::InitializeOrientation()
extern "C"  void Engine_InitializeOrientation_m2568008832 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.Engine::UpdateOrientation(UnityEngine.ScreenOrientation)
extern "C"  int32_t Engine_UpdateOrientation_m2966833848 (Il2CppObject * __this /* static, unused */, int32_t ___orientation0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
