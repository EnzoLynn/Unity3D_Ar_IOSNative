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

// EasyAR.ImageTracker/TargetLoadCallbackC
struct TargetLoadCallbackC_t3429128016;
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

// System.Void EasyAR.ImageTracker/TargetLoadCallbackC::.ctor(System.Object,System.IntPtr)
extern "C"  void TargetLoadCallbackC__ctor_m3338459539 (TargetLoadCallbackC_t3429128016 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTracker/TargetLoadCallbackC::Invoke(System.IntPtr,System.IntPtr,System.Boolean)
extern "C"  void TargetLoadCallbackC_Invoke_m2541138888 (TargetLoadCallbackC_t3429128016 * __this, IntPtr_t ___obj0, IntPtr_t ___target1, bool ___status2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult EasyAR.ImageTracker/TargetLoadCallbackC::BeginInvoke(System.IntPtr,System.IntPtr,System.Boolean,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * TargetLoadCallbackC_BeginInvoke_m1833359781 (TargetLoadCallbackC_t3429128016 * __this, IntPtr_t ___obj0, IntPtr_t ___target1, bool ___status2, AsyncCallback_t1369114871 * ___callback3, Il2CppObject * ___object4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTracker/TargetLoadCallbackC::EndInvoke(System.IAsyncResult)
extern "C"  void TargetLoadCallbackC_EndInvoke_m1896484131 (TargetLoadCallbackC_t3429128016 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
