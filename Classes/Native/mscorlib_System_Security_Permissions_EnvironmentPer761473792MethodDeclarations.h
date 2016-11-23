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

// System.Security.Permissions.EnvironmentPermission
struct EnvironmentPermission_t761473792;
// System.String
struct String_t;
// System.Security.IPermission
struct IPermission_t1411806254;
// System.Security.SecurityElement
struct SecurityElement_t2125293618;
// System.Collections.ArrayList
struct ArrayList_t3948406897;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Permissions_PermissionStat240192512.h"
#include "mscorlib_System_Security_Permissions_EnvironmentPe1343087044.h"
#include "mscorlib_System_Collections_ArrayList3948406897.h"

// System.Void System.Security.Permissions.EnvironmentPermission::.ctor(System.Security.Permissions.PermissionState)
extern "C"  void EnvironmentPermission__ctor_m2302671198 (EnvironmentPermission_t761473792 * __this, int32_t ___state0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Permissions.EnvironmentPermission::GetPathList(System.Security.Permissions.EnvironmentPermissionAccess)
extern "C"  String_t* EnvironmentPermission_GetPathList_m2187076928 (EnvironmentPermission_t761473792 * __this, int32_t ___flag0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.EnvironmentPermission::IsSubsetOf(System.Security.IPermission)
extern "C"  bool EnvironmentPermission_IsSubsetOf_m1313516591 (EnvironmentPermission_t761473792 * __this, Il2CppObject * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.EnvironmentPermission::IsUnrestricted()
extern "C"  bool EnvironmentPermission_IsUnrestricted_m471759957 (EnvironmentPermission_t761473792 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.EnvironmentPermission::ToXml()
extern "C"  SecurityElement_t2125293618 * EnvironmentPermission_ToXml_m3243318155 (EnvironmentPermission_t761473792 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.EnvironmentPermission System.Security.Permissions.EnvironmentPermission::Cast(System.Security.IPermission)
extern "C"  EnvironmentPermission_t761473792 * EnvironmentPermission_Cast_m782988155 (EnvironmentPermission_t761473792 * __this, Il2CppObject * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.EnvironmentPermission::ThrowInvalidFlag(System.Security.Permissions.EnvironmentPermissionAccess,System.Boolean)
extern "C"  void EnvironmentPermission_ThrowInvalidFlag_m2934281518 (EnvironmentPermission_t761473792 * __this, int32_t ___flag0, bool ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Permissions.EnvironmentPermission::GetPathList(System.Collections.ArrayList)
extern "C"  String_t* EnvironmentPermission_GetPathList_m1501164902 (EnvironmentPermission_t761473792 * __this, ArrayList_t3948406897 * ___list0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
