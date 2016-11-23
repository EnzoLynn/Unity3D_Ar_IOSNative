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

// System.Action`2<System.Object,EasyAR.VideoPlayer/PlayerStatus>
struct Action_2_t1809504189;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "EasyAR_Unity_EasyAR_VideoPlayer_PlayerStatus1687256097.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.Action`2<System.Object,EasyAR.VideoPlayer/PlayerStatus>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_2__ctor_m2715148023_gshared (Action_2_t1809504189 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Action_2__ctor_m2715148023(__this, ___object0, ___method1, method) ((  void (*) (Action_2_t1809504189 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Action_2__ctor_m2715148023_gshared)(__this, ___object0, ___method1, method)
// System.Void System.Action`2<System.Object,EasyAR.VideoPlayer/PlayerStatus>::Invoke(T1,T2)
extern "C"  void Action_2_Invoke_m3131962580_gshared (Action_2_t1809504189 * __this, Il2CppObject * ___arg10, int32_t ___arg21, const MethodInfo* method);
#define Action_2_Invoke_m3131962580(__this, ___arg10, ___arg21, method) ((  void (*) (Action_2_t1809504189 *, Il2CppObject *, int32_t, const MethodInfo*))Action_2_Invoke_m3131962580_gshared)(__this, ___arg10, ___arg21, method)
// System.IAsyncResult System.Action`2<System.Object,EasyAR.VideoPlayer/PlayerStatus>::BeginInvoke(T1,T2,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Action_2_BeginInvoke_m1842469107_gshared (Action_2_t1809504189 * __this, Il2CppObject * ___arg10, int32_t ___arg21, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Action_2_BeginInvoke_m1842469107(__this, ___arg10, ___arg21, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Action_2_t1809504189 *, Il2CppObject *, int32_t, AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))Action_2_BeginInvoke_m1842469107_gshared)(__this, ___arg10, ___arg21, ___callback2, ___object3, method)
// System.Void System.Action`2<System.Object,EasyAR.VideoPlayer/PlayerStatus>::EndInvoke(System.IAsyncResult)
extern "C"  void Action_2_EndInvoke_m1642423431_gshared (Action_2_t1809504189 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Action_2_EndInvoke_m1642423431(__this, ___result0, method) ((  void (*) (Action_2_t1809504189 *, Il2CppObject *, const MethodInfo*))Action_2_EndInvoke_m1642423431_gshared)(__this, ___result0, method)
