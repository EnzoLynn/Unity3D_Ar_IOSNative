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

// EasyAR.RenderCameraBaseBehaviour
struct RenderCameraBaseBehaviour_t3109944663;
// EasyAR.AugmenterBaseBehaviour
struct AugmenterBaseBehaviour_t2688407210;
// EasyAR.DeviceAbstractBehaviour
struct DeviceAbstractBehaviour_t101220683;

#include "codegen/il2cpp-codegen.h"
#include "EasyAR_Unity_EasyAR_AugmenterBaseBehaviour2688407210.h"
#include "EasyAR_Unity_EasyAR_DeviceAbstractBehaviour101220683.h"
#include "UnityEngine_UnityEngine_Matrix4x41651859333.h"

// System.Void EasyAR.RenderCameraBaseBehaviour::.ctor()
extern "C"  void RenderCameraBaseBehaviour__ctor_m736177393 (RenderCameraBaseBehaviour_t3109944663 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.RenderCameraBaseBehaviour::Bind(EasyAR.AugmenterBaseBehaviour)
extern "C"  void RenderCameraBaseBehaviour_Bind_m3161651321 (RenderCameraBaseBehaviour_t3109944663 * __this, AugmenterBaseBehaviour_t2688407210 * ___behaviour0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.RenderCameraBaseBehaviour::Bind(EasyAR.DeviceAbstractBehaviour)
extern "C"  void RenderCameraBaseBehaviour_Bind_m3463977062 (RenderCameraBaseBehaviour_t3109944663 * __this, DeviceAbstractBehaviour_t101220683 * ___behaviour0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.RenderCameraBaseBehaviour::DetachAndStop()
extern "C"  void RenderCameraBaseBehaviour_DetachAndStop_m1133181429 (RenderCameraBaseBehaviour_t3109944663 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.RenderCameraBaseBehaviour::AdjustPlane(EasyAR.DeviceAbstractBehaviour,System.Boolean)
extern "C"  void RenderCameraBaseBehaviour_AdjustPlane_m184577195 (RenderCameraBaseBehaviour_t3109944663 * __this, DeviceAbstractBehaviour_t101220683 * ___device0, bool ___status1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.RenderCameraBaseBehaviour::setRflag()
extern "C"  void RenderCameraBaseBehaviour_setRflag_m1116445103 (RenderCameraBaseBehaviour_t3109944663 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.RenderCameraBaseBehaviour::ChangeHFlip(System.Boolean)
extern "C"  void RenderCameraBaseBehaviour_ChangeHFlip_m2529148907 (RenderCameraBaseBehaviour_t3109944663 * __this, bool ___flip0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 EasyAR.RenderCameraBaseBehaviour::ResizeGL(System.Int32,System.Int32)
extern "C"  Matrix4x4_t1651859333  RenderCameraBaseBehaviour_ResizeGL_m1823786335 (RenderCameraBaseBehaviour_t3109944663 * __this, int32_t ___width0, int32_t ___height1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.RenderCameraBaseBehaviour::OnPreRender()
extern "C"  void RenderCameraBaseBehaviour_OnPreRender_m152735753 (RenderCameraBaseBehaviour_t3109944663 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.RenderCameraBaseBehaviour::OnPreCull()
extern "C"  void RenderCameraBaseBehaviour_OnPreCull_m1578738021 (RenderCameraBaseBehaviour_t3109944663 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
