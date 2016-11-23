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

// EasyAR.EngineNativeIOS/LogFunc
struct LogFunc_t3562562578;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void EasyAR.EngineNativeIOS/LogFunc::.ctor(System.Object,System.IntPtr)
extern "C"  void LogFunc__ctor_m4186220493 (LogFunc_t3562562578 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS/LogFunc::Invoke(System.String)
extern "C"  void LogFunc_Invoke_m3797877755 (LogFunc_t3562562578 * __this, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult EasyAR.EngineNativeIOS/LogFunc::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * LogFunc_BeginInvoke_m1287376000 (LogFunc_t3562562578 * __this, String_t* ___str0, AsyncCallback_t1369114871 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS/LogFunc::EndInvoke(System.IAsyncResult)
extern "C"  void LogFunc_EndInvoke_m2899707997 (LogFunc_t3562562578 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
