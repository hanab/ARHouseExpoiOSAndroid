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

// UnityEngine.Experimental.Director.CustomAnimationPlayable
struct CustomAnimationPlayable_t729441978;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Experimental.Director.Playable>
struct IEnumerable_1_t1981541307;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Experimental_Director_Play3404354247.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "UnityEngine_UnityEngine_Experimental_Director_Fram4009178800.h"
#include "UnityEngine_UnityEngine_Experimental_Director_Play1575932342.h"
#include "UnityEngine_UnityEngine_Experimental_Director_Custo729441978.h"
#include "UnityEngine_UnityEngine_Experimental_Director_Anim3361204779.h"

// System.Void UnityEngine.Experimental.Director.CustomAnimationPlayable::.ctor()
extern "C"  void CustomAnimationPlayable__ctor_m3236254932 (CustomAnimationPlayable_t729441978 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Experimental.Director.Playable UnityEngine.Experimental.Director.CustomAnimationPlayable::get_node()
extern "C"  Playable_t3404354247  CustomAnimationPlayable_get_node_m987475821 (CustomAnimationPlayable_t729441978 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.CustomAnimationPlayable::SetHandle(System.Int32,System.IntPtr)
extern "C"  void CustomAnimationPlayable_SetHandle_m3182957115 (CustomAnimationPlayable_t729441978 * __this, int32_t ___version0, IntPtr_t ___playableHandle1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.CustomAnimationPlayable::Destroy()
extern "C"  void CustomAnimationPlayable_Destroy_m2118830892 (CustomAnimationPlayable_t729441978 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.CustomAnimationPlayable::PrepareFrame(UnityEngine.Experimental.Director.FrameData)
extern "C"  void CustomAnimationPlayable_PrepareFrame_m159894296 (CustomAnimationPlayable_t729441978 * __this, FrameData_t4009178800  ___info0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.CustomAnimationPlayable::OnSetTime(System.Single)
extern "C"  void CustomAnimationPlayable_OnSetTime_m2716909577 (CustomAnimationPlayable_t729441978 * __this, float ___localTime0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.CustomAnimationPlayable::OnSetPlayState(UnityEngine.Experimental.Director.PlayState)
extern "C"  void CustomAnimationPlayable_OnSetPlayState_m1231532734 (CustomAnimationPlayable_t729441978 * __this, int32_t ___newState0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Experimental.Director.CustomAnimationPlayable::get_inputCount()
extern "C"  int32_t CustomAnimationPlayable_get_inputCount_m1582109438 (CustomAnimationPlayable_t729441978 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Experimental.Director.Playable UnityEngine.Experimental.Director.CustomAnimationPlayable::GetInput(System.Int32)
extern "C"  Playable_t3404354247  CustomAnimationPlayable_GetInput_m301843047 (CustomAnimationPlayable_t729441978 * __this, int32_t ___inputPort0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Experimental.Director.CustomAnimationPlayable::get_outputCount()
extern "C"  int32_t CustomAnimationPlayable_get_outputCount_m458643767 (CustomAnimationPlayable_t729441978 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Experimental.Director.Playable UnityEngine.Experimental.Director.CustomAnimationPlayable::GetOutput(System.Int32)
extern "C"  Playable_t3404354247  CustomAnimationPlayable_GetOutput_m4116503080 (CustomAnimationPlayable_t729441978 * __this, int32_t ___outputPort0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Experimental.Director.CustomAnimationPlayable::GetInputWeight(System.Int32)
extern "C"  float CustomAnimationPlayable_GetInputWeight_m4148655265 (CustomAnimationPlayable_t729441978 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.CustomAnimationPlayable::SetInputWeight(System.Int32,System.Single)
extern "C"  void CustomAnimationPlayable_SetInputWeight_m1269015238 (CustomAnimationPlayable_t729441978 * __this, int32_t ___inputIndex0, float ___weight1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Experimental.Director.PlayState UnityEngine.Experimental.Director.CustomAnimationPlayable::get_state()
extern "C"  int32_t CustomAnimationPlayable_get_state_m2235187075 (CustomAnimationPlayable_t729441978 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.CustomAnimationPlayable::set_state(UnityEngine.Experimental.Director.PlayState)
extern "C"  void CustomAnimationPlayable_set_state_m1222744546 (CustomAnimationPlayable_t729441978 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double UnityEngine.Experimental.Director.CustomAnimationPlayable::get_time()
extern "C"  double CustomAnimationPlayable_get_time_m3450542115 (CustomAnimationPlayable_t729441978 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.CustomAnimationPlayable::set_time(System.Double)
extern "C"  void CustomAnimationPlayable_set_time_m1309743400 (CustomAnimationPlayable_t729441978 * __this, double ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double UnityEngine.Experimental.Director.CustomAnimationPlayable::get_duration()
extern "C"  double CustomAnimationPlayable_get_duration_m3156322986 (CustomAnimationPlayable_t729441978 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.CustomAnimationPlayable::set_duration(System.Double)
extern "C"  void CustomAnimationPlayable_set_duration_m406084993 (CustomAnimationPlayable_t729441978 * __this, double ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Experimental.Director.CustomAnimationPlayable::AddInput(UnityEngine.Experimental.Director.Playable)
extern "C"  int32_t CustomAnimationPlayable_AddInput_m4182892888 (CustomAnimationPlayable_t729441978 * __this, Playable_t3404354247  ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.CustomAnimationPlayable::SetInput(UnityEngine.Experimental.Director.Playable,System.Int32)
extern "C"  bool CustomAnimationPlayable_SetInput_m120417254 (CustomAnimationPlayable_t729441978 * __this, Playable_t3404354247  ___source0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.CustomAnimationPlayable::SetInputs(System.Collections.Generic.IEnumerable`1<UnityEngine.Experimental.Director.Playable>)
extern "C"  bool CustomAnimationPlayable_SetInputs_m491446927 (CustomAnimationPlayable_t729441978 * __this, Il2CppObject* ___sources0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.CustomAnimationPlayable::RemoveInput(System.Int32)
extern "C"  bool CustomAnimationPlayable_RemoveInput_m4082440847 (CustomAnimationPlayable_t729441978 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.CustomAnimationPlayable::RemoveAllInputs()
extern "C"  bool CustomAnimationPlayable_RemoveAllInputs_m3435563998 (CustomAnimationPlayable_t729441978 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Experimental.Director.Playable UnityEngine.Experimental.Director.CustomAnimationPlayable::op_Implicit(UnityEngine.Experimental.Director.CustomAnimationPlayable)
extern "C"  Playable_t3404354247  CustomAnimationPlayable_op_Implicit_m2643963169 (Il2CppObject * __this /* static, unused */, CustomAnimationPlayable_t729441978 * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Experimental.Director.AnimationPlayable UnityEngine.Experimental.Director.CustomAnimationPlayable::op_Implicit(UnityEngine.Experimental.Director.CustomAnimationPlayable)
extern "C"  AnimationPlayable_t3361204779  CustomAnimationPlayable_op_Implicit_m1020808859 (Il2CppObject * __this /* static, unused */, CustomAnimationPlayable_t729441978 * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
