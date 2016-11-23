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

// EasyAR.Target
struct Target_t1661091757;
// System.Action`1<EasyAR.Target>
struct Action_1_t2056907893;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_String7231557.h"

// System.Void EasyAR.Target::.ctor()
extern "C"  void Target__ctor_m1990446803 (Target_t1661091757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.Target::.ctor(System.IntPtr)
extern "C"  void Target__ctor_m125781089 (Target_t1661091757 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.Target::add_TargetSelfLoad(System.Action`1<EasyAR.Target>)
extern "C"  void Target_add_TargetSelfLoad_m26685130 (Target_t1661091757 * __this, Action_1_t2056907893 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.Target::remove_TargetSelfLoad(System.Action`1<EasyAR.Target>)
extern "C"  void Target_remove_TargetSelfLoad_m69891239 (Target_t1661091757 * __this, Action_1_t2056907893 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.Target::get_Id()
extern "C"  int32_t Target_get_Id_m215479439 (Target_t1661091757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.Target::set_Id(System.Int32)
extern "C"  void Target_set_Id_m2723815418 (Target_t1661091757 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String EasyAR.Target::get_Name()
extern "C"  String_t* Target_get_Name_m3308428578 (Target_t1661091757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.Target::set_Name(System.String)
extern "C"  void Target_set_Name_m3774268745 (Target_t1661091757 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.Target::set_Uid(System.String)
extern "C"  void Target_set_Uid_m465556318 (Target_t1661091757 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.Target::set_MetaData(System.String)
extern "C"  void Target_set_MetaData_m3993022085 (Target_t1661091757 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.Target::InitProperties()
extern "C"  void Target_InitProperties_m1643336116 (Target_t1661091757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.Target::Dispose(System.Boolean)
extern "C"  void Target_Dispose_m446413767 (Target_t1661091757 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.Target::Load(System.String,System.Int32,System.String)
extern "C"  bool Target_Load_m2717451388 (Target_t1661091757 * __this, String_t* ___path0, int32_t ___storageType1, String_t* ___name2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
