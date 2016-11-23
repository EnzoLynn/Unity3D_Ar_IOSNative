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

// EasyAR.AugmentedTarget
struct AugmentedTarget_t3472131047;
// EasyAR.Target
struct Target_t1661091757;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "EasyAR_Unity_EasyAR_AugmentedTarget_TrackStatus987949268.h"
#include "EasyAR_Unity_EasyAR_Target1661091757.h"
#include "UnityEngine_UnityEngine_Quaternion1553702882.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Matrix4x41651859333.h"

// System.Void EasyAR.AugmentedTarget::.ctor(System.IntPtr)
extern "C"  void AugmentedTarget__ctor_m1304120467 (AugmentedTarget_t3472131047 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// EasyAR.AugmentedTarget/TrackStatus EasyAR.AugmentedTarget::get_Status()
extern "C"  int32_t AugmentedTarget_get_Status_m101965183 (AugmentedTarget_t3472131047 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.AugmentedTarget::set_Status(EasyAR.AugmentedTarget/TrackStatus)
extern "C"  void AugmentedTarget_set_Status_m4047615070 (AugmentedTarget_t3472131047 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// EasyAR.Target EasyAR.AugmentedTarget::get_Target()
extern "C"  Target_t1661091757 * AugmentedTarget_get_Target_m826426372 (AugmentedTarget_t3472131047 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.AugmentedTarget::set_Target(EasyAR.Target)
extern "C"  void AugmentedTarget_set_Target_m1924017109 (AugmentedTarget_t3472131047 * __this, Target_t1661091757 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion EasyAR.AugmentedTarget::get_Rotation()
extern "C"  Quaternion_t1553702882  AugmentedTarget_get_Rotation_m4139679402 (AugmentedTarget_t3472131047 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.AugmentedTarget::set_Rotation(UnityEngine.Quaternion)
extern "C"  void AugmentedTarget_set_Rotation_m684197641 (AugmentedTarget_t3472131047 * __this, Quaternion_t1553702882  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 EasyAR.AugmentedTarget::get_Position()
extern "C"  Vector3_t4282066566  AugmentedTarget_get_Position_m2131061551 (AugmentedTarget_t3472131047 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.AugmentedTarget::set_Position(UnityEngine.Vector3)
extern "C"  void AugmentedTarget_set_Position_m2422377616 (AugmentedTarget_t3472131047 * __this, Vector3_t4282066566  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.AugmentedTarget::Dispose(System.Boolean)
extern "C"  void AugmentedTarget_Dispose_m1587113557 (AugmentedTarget_t3472131047 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion EasyAR.AugmentedTarget::QuaternionFromMatrix(UnityEngine.Matrix4x4)
extern "C"  Quaternion_t1553702882  AugmentedTarget_QuaternionFromMatrix_m3319446606 (AugmentedTarget_t3472131047 * __this, Matrix4x4_t1651859333  ___m0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.AugmentedTarget::OnPoseSet(UnityEngine.Matrix4x4)
extern "C"  void AugmentedTarget_OnPoseSet_m945003241 (AugmentedTarget_t3472131047 * __this, Matrix4x4_t1651859333  ___pose0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
