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

// System.Action`3<System.Object,System.Object,System.Boolean>
struct Action_3_t3569218500;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.Action`3<System.Object,System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_3__ctor_m3527985868_gshared (Action_3_t3569218500 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Action_3__ctor_m3527985868(__this, ___object0, ___method1, method) ((  void (*) (Action_3_t3569218500 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Action_3__ctor_m3527985868_gshared)(__this, ___object0, ___method1, method)
// System.Void System.Action`3<System.Object,System.Object,System.Boolean>::Invoke(T1,T2,T3)
extern "C"  void Action_3_Invoke_m2318741640_gshared (Action_3_t3569218500 * __this, Il2CppObject * ___arg10, Il2CppObject * ___arg21, bool ___arg32, const MethodInfo* method);
#define Action_3_Invoke_m2318741640(__this, ___arg10, ___arg21, ___arg32, method) ((  void (*) (Action_3_t3569218500 *, Il2CppObject *, Il2CppObject *, bool, const MethodInfo*))Action_3_Invoke_m2318741640_gshared)(__this, ___arg10, ___arg21, ___arg32, method)
// System.IAsyncResult System.Action`3<System.Object,System.Object,System.Boolean>::BeginInvoke(T1,T2,T3,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Action_3_BeginInvoke_m1599418935_gshared (Action_3_t3569218500 * __this, Il2CppObject * ___arg10, Il2CppObject * ___arg21, bool ___arg32, AsyncCallback_t1369114871 * ___callback3, Il2CppObject * ___object4, const MethodInfo* method);
#define Action_3_BeginInvoke_m1599418935(__this, ___arg10, ___arg21, ___arg32, ___callback3, ___object4, method) ((  Il2CppObject * (*) (Action_3_t3569218500 *, Il2CppObject *, Il2CppObject *, bool, AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))Action_3_BeginInvoke_m1599418935_gshared)(__this, ___arg10, ___arg21, ___arg32, ___callback3, ___object4, method)
// System.Void System.Action`3<System.Object,System.Object,System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C"  void Action_3_EndInvoke_m149521116_gshared (Action_3_t3569218500 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Action_3_EndInvoke_m149521116(__this, ___result0, method) ((  void (*) (Action_3_t3569218500 *, Il2CppObject *, const MethodInfo*))Action_3_EndInvoke_m149521116_gshared)(__this, ___result0, method)
