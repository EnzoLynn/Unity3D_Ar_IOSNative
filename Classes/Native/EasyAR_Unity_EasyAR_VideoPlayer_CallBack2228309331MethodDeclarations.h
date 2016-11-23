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

// EasyAR.VideoPlayer/CallBack
struct CallBack_t2228309331;
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

// System.Void EasyAR.VideoPlayer/CallBack::.ctor(System.Object,System.IntPtr)
extern "C"  void CallBack__ctor_m2167402518 (CallBack_t2228309331 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.VideoPlayer/CallBack::Invoke(System.IntPtr,System.Int32)
extern "C"  void CallBack_Invoke_m2763399411 (CallBack_t2228309331 * __this, IntPtr_t ___obj0, int32_t ___status1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult EasyAR.VideoPlayer/CallBack::BeginInvoke(System.IntPtr,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * CallBack_BeginInvoke_m2930231680 (CallBack_t2228309331 * __this, IntPtr_t ___obj0, int32_t ___status1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.VideoPlayer/CallBack::EndInvoke(System.IAsyncResult)
extern "C"  void CallBack_EndInvoke_m2952453414 (CallBack_t2228309331 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
