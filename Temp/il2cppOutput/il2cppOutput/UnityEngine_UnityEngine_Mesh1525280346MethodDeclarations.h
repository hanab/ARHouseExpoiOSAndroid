﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.Mesh
struct Mesh_t1525280346;
// System.Array
struct Il2CppArray;
// System.Object
struct Il2CppObject;
// System.Int32[]
struct Int32U5BU5D_t1809983122;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t3227571696;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t3713759435;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t2741383957;
// UnityEngine.Color32[]
struct Color32U5BU5D_t1677970742;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t27321462;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_t27321463;
// System.Collections.Generic.List`1<UnityEngine.Color32>
struct List_1_t639075880;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t27321461;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t3644373756;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Mesh1525280346.h"
#include "UnityEngine_UnityEngine_Mesh_InternalShaderChannel2826515841.h"
#include "UnityEngine_UnityEngine_Mesh_InternalVertexChannel1190730044.h"
#include "mscorlib_System_Array2840145358.h"
#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_UnityEngine_Bounds3518514978.h"

// System.Void UnityEngine.Mesh::.ctor()
extern "C"  void Mesh__ctor_m2684203808 (Mesh_t1525280346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::Internal_Create(UnityEngine.Mesh)
extern "C"  void Mesh_Internal_Create_m3749730360 (Il2CppObject * __this /* static, unused */, Mesh_t1525280346 * ___mono0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::Clear(System.Boolean)
extern "C"  void Mesh_Clear_m1789068674 (Mesh_t1525280346 * __this, bool ___keepVertexLayout0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::Clear()
extern "C"  void Mesh_Clear_m90337099 (Mesh_t1525280346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Mesh::get_canAccess()
extern "C"  bool Mesh_get_canAccess_m3042962979 (Mesh_t1525280346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::PrintErrorCantAccessMesh(UnityEngine.Mesh/InternalShaderChannel)
extern "C"  void Mesh_PrintErrorCantAccessMesh_m548718398 (Mesh_t1525280346 * __this, int32_t ___channel0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::PrintErrorCantAccessMeshForIndices()
extern "C"  void Mesh_PrintErrorCantAccessMeshForIndices_m2814194066 (Mesh_t1525280346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::PrintErrorBadSubmeshIndexTriangles()
extern "C"  void Mesh_PrintErrorBadSubmeshIndexTriangles_m3501404064 (Mesh_t1525280346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::PrintErrorBadSubmeshIndexIndices()
extern "C"  void Mesh_PrintErrorBadSubmeshIndexIndices_m3296825820 (Mesh_t1525280346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetArrayForChannelImpl(UnityEngine.Mesh/InternalShaderChannel,UnityEngine.Mesh/InternalVertexChannelType,System.Int32,System.Array,System.Int32)
extern "C"  void Mesh_SetArrayForChannelImpl_m1509779596 (Mesh_t1525280346 * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, Il2CppArray * ___values3, int32_t ___arraySize4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array UnityEngine.Mesh::GetAllocArrayFromChannelImpl(UnityEngine.Mesh/InternalShaderChannel,UnityEngine.Mesh/InternalVertexChannelType,System.Int32)
extern "C"  Il2CppArray * Mesh_GetAllocArrayFromChannelImpl_m3495880964 (Mesh_t1525280346 * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Mesh::HasChannel(UnityEngine.Mesh/InternalShaderChannel)
extern "C"  bool Mesh_HasChannel_m1377438973 (Mesh_t1525280346 * __this, int32_t ___channel0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array UnityEngine.Mesh::ExtractArrayFromList(System.Object)
extern "C"  Il2CppArray * Mesh_ExtractArrayFromList_m2300152603 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___list0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] UnityEngine.Mesh::GetTrianglesImpl(System.Int32)
extern "C"  Int32U5BU5D_t1809983122* Mesh_GetTrianglesImpl_m2772614728 (Mesh_t1525280346 * __this, int32_t ___submesh0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] UnityEngine.Mesh::GetIndicesImpl(System.Int32)
extern "C"  Int32U5BU5D_t1809983122* Mesh_GetIndicesImpl_m2338120260 (Mesh_t1525280346 * __this, int32_t ___submesh0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetTrianglesImpl(System.Int32,System.Array,System.Int32)
extern "C"  void Mesh_SetTrianglesImpl_m1324707977 (Mesh_t1525280346 * __this, int32_t ___submesh0, Il2CppArray * ___triangles1, int32_t ___arraySize2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds UnityEngine.Mesh::get_bounds()
extern "C"  Bounds_t3518514978  Mesh_get_bounds_m1625335237 (Mesh_t1525280346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::INTERNAL_get_bounds(UnityEngine.Bounds&)
extern "C"  void Mesh_INTERNAL_get_bounds_m739771994 (Mesh_t1525280346 * __this, Bounds_t3518514978 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::RecalculateBounds()
extern "C"  void Mesh_RecalculateBounds_m3754336742 (Mesh_t1525280346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::RecalculateNormals()
extern "C"  void Mesh_RecalculateNormals_m1806625021 (Mesh_t1525280346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mesh::get_vertexCount()
extern "C"  int32_t Mesh_get_vertexCount_m538235264 (Mesh_t1525280346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mesh::get_subMeshCount()
extern "C"  int32_t Mesh_get_subMeshCount_m4159827535 (Mesh_t1525280346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh/InternalShaderChannel UnityEngine.Mesh::GetUVChannel(System.Int32)
extern "C"  int32_t Mesh_GetUVChannel_m584432922 (Mesh_t1525280346 * __this, int32_t ___uvIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mesh::DefaultDimensionForChannel(UnityEngine.Mesh/InternalShaderChannel)
extern "C"  int32_t Mesh_DefaultDimensionForChannel_m1889643149 (Il2CppObject * __this /* static, unused */, int32_t ___channel0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mesh::SafeLength(System.Array)
extern "C"  int32_t Mesh_SafeLength_m2932719837 (Mesh_t1525280346 * __this, Il2CppArray * ___values0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetSizedArrayForChannel(UnityEngine.Mesh/InternalShaderChannel,UnityEngine.Mesh/InternalVertexChannelType,System.Int32,System.Array,System.Int32)
extern "C"  void Mesh_SetSizedArrayForChannel_m2551235175 (Mesh_t1525280346 * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, Il2CppArray * ___values3, int32_t ___valuesCount4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UnityEngine.Mesh::get_vertices()
extern "C"  Vector3U5BU5D_t3227571696* Mesh_get_vertices_m3685486174 (Mesh_t1525280346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
extern "C"  void Mesh_set_vertices_m2628866109 (Mesh_t1525280346 * __this, Vector3U5BU5D_t3227571696* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UnityEngine.Mesh::get_normals()
extern "C"  Vector3U5BU5D_t3227571696* Mesh_get_normals_m3396909641 (Mesh_t1525280346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_normals(UnityEngine.Vector3[])
extern "C"  void Mesh_set_normals_m3763698282 (Mesh_t1525280346 * __this, Vector3U5BU5D_t3227571696* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4[] UnityEngine.Mesh::get_tangents()
extern "C"  Vector4U5BU5D_t3713759435* Mesh_get_tangents_m3235865682 (Mesh_t1525280346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] UnityEngine.Mesh::get_uv()
extern "C"  Vector2U5BU5D_t2741383957* Mesh_get_uv_m558008935 (Mesh_t1525280346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_uv(UnityEngine.Vector2[])
extern "C"  void Mesh_set_uv_m498907190 (Mesh_t1525280346 * __this, Vector2U5BU5D_t2741383957* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] UnityEngine.Mesh::get_uv2()
extern "C"  Vector2U5BU5D_t2741383957* Mesh_get_uv2_m118417421 (Mesh_t1525280346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color32[] UnityEngine.Mesh::get_colors32()
extern "C"  Color32U5BU5D_t1677970742* Mesh_get_colors32_m192356802 (Mesh_t1525280346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetVertices(System.Collections.Generic.List`1<UnityEngine.Vector3>)
extern "C"  void Mesh_SetVertices_m701834806 (Mesh_t1525280346 * __this, List_1_t27321462 * ___inVertices0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetNormals(System.Collections.Generic.List`1<UnityEngine.Vector3>)
extern "C"  void Mesh_SetNormals_m2039144779 (Mesh_t1525280346 * __this, List_1_t27321462 * ___inNormals0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetTangents(System.Collections.Generic.List`1<UnityEngine.Vector4>)
extern "C"  void Mesh_SetTangents_m2005345740 (Mesh_t1525280346 * __this, List_1_t27321463 * ___inTangents0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetColors(System.Collections.Generic.List`1<UnityEngine.Color32>)
extern "C"  void Mesh_SetColors_m3313707935 (Mesh_t1525280346 * __this, List_1_t639075880 * ___inColors0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetUVs(System.Int32,System.Collections.Generic.List`1<UnityEngine.Vector2>)
extern "C"  void Mesh_SetUVs_m116216925 (Mesh_t1525280346 * __this, int32_t ___channel0, List_1_t27321461 * ___uvs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Mesh::CheckCanAccessSubmesh(System.Int32,System.Boolean)
extern "C"  bool Mesh_CheckCanAccessSubmesh_m3375419187 (Mesh_t1525280346 * __this, int32_t ___submesh0, bool ___errorAboutTriangles1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Mesh::CheckCanAccessSubmeshTriangles(System.Int32)
extern "C"  bool Mesh_CheckCanAccessSubmeshTriangles_m1968826789 (Mesh_t1525280346 * __this, int32_t ___submesh0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Mesh::CheckCanAccessSubmeshIndices(System.Int32)
extern "C"  bool Mesh_CheckCanAccessSubmeshIndices_m3478679265 (Mesh_t1525280346 * __this, int32_t ___submesh0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] UnityEngine.Mesh::get_triangles()
extern "C"  Int32U5BU5D_t1809983122* Mesh_get_triangles_m2145908418 (Mesh_t1525280346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_triangles(System.Int32[])
extern "C"  void Mesh_set_triangles_m2341339867 (Mesh_t1525280346 * __this, Int32U5BU5D_t1809983122* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetTriangles(System.Collections.Generic.List`1<System.Int32>,System.Int32)
extern "C"  void Mesh_SetTriangles_m456382467 (Mesh_t1525280346 * __this, List_1_t3644373756 * ___triangles0, int32_t ___submesh1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] UnityEngine.Mesh::GetIndices(System.Int32)
extern "C"  Int32U5BU5D_t1809983122* Mesh_GetIndices_m637494532 (Mesh_t1525280346 * __this, int32_t ___submesh0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
