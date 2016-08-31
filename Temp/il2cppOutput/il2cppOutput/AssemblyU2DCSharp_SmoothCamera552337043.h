#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vuforia.VuforiaBehaviour
struct VuforiaBehaviour_t1383180241;
// System.Collections.Generic.Queue`1<UnityEngine.Quaternion>
struct Queue_1_t3599803519;
// System.Collections.Generic.Queue`1<UnityEngine.Vector3>
struct Queue_1_t938450033;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SmoothCamera
struct  SmoothCamera_t552337043  : public MonoBehaviour_t3012272455
{
public:
	// System.Int32 SmoothCamera::smoothingFrames
	int32_t ___smoothingFrames_2;
	// Vuforia.VuforiaBehaviour SmoothCamera::qcarBehavior
	VuforiaBehaviour_t1383180241 * ___qcarBehavior_3;
	// UnityEngine.Quaternion SmoothCamera::smoothedRotation
	Quaternion_t1891715979  ___smoothedRotation_4;
	// UnityEngine.Vector3 SmoothCamera::smoothedPosition
	Vector3_t3525329789  ___smoothedPosition_5;
	// System.Collections.Generic.Queue`1<UnityEngine.Quaternion> SmoothCamera::rotations
	Queue_1_t3599803519 * ___rotations_6;
	// System.Collections.Generic.Queue`1<UnityEngine.Vector3> SmoothCamera::positions
	Queue_1_t938450033 * ___positions_7;

public:
	inline static int32_t get_offset_of_smoothingFrames_2() { return static_cast<int32_t>(offsetof(SmoothCamera_t552337043, ___smoothingFrames_2)); }
	inline int32_t get_smoothingFrames_2() const { return ___smoothingFrames_2; }
	inline int32_t* get_address_of_smoothingFrames_2() { return &___smoothingFrames_2; }
	inline void set_smoothingFrames_2(int32_t value)
	{
		___smoothingFrames_2 = value;
	}

	inline static int32_t get_offset_of_qcarBehavior_3() { return static_cast<int32_t>(offsetof(SmoothCamera_t552337043, ___qcarBehavior_3)); }
	inline VuforiaBehaviour_t1383180241 * get_qcarBehavior_3() const { return ___qcarBehavior_3; }
	inline VuforiaBehaviour_t1383180241 ** get_address_of_qcarBehavior_3() { return &___qcarBehavior_3; }
	inline void set_qcarBehavior_3(VuforiaBehaviour_t1383180241 * value)
	{
		___qcarBehavior_3 = value;
		Il2CppCodeGenWriteBarrier(&___qcarBehavior_3, value);
	}

	inline static int32_t get_offset_of_smoothedRotation_4() { return static_cast<int32_t>(offsetof(SmoothCamera_t552337043, ___smoothedRotation_4)); }
	inline Quaternion_t1891715979  get_smoothedRotation_4() const { return ___smoothedRotation_4; }
	inline Quaternion_t1891715979 * get_address_of_smoothedRotation_4() { return &___smoothedRotation_4; }
	inline void set_smoothedRotation_4(Quaternion_t1891715979  value)
	{
		___smoothedRotation_4 = value;
	}

	inline static int32_t get_offset_of_smoothedPosition_5() { return static_cast<int32_t>(offsetof(SmoothCamera_t552337043, ___smoothedPosition_5)); }
	inline Vector3_t3525329789  get_smoothedPosition_5() const { return ___smoothedPosition_5; }
	inline Vector3_t3525329789 * get_address_of_smoothedPosition_5() { return &___smoothedPosition_5; }
	inline void set_smoothedPosition_5(Vector3_t3525329789  value)
	{
		___smoothedPosition_5 = value;
	}

	inline static int32_t get_offset_of_rotations_6() { return static_cast<int32_t>(offsetof(SmoothCamera_t552337043, ___rotations_6)); }
	inline Queue_1_t3599803519 * get_rotations_6() const { return ___rotations_6; }
	inline Queue_1_t3599803519 ** get_address_of_rotations_6() { return &___rotations_6; }
	inline void set_rotations_6(Queue_1_t3599803519 * value)
	{
		___rotations_6 = value;
		Il2CppCodeGenWriteBarrier(&___rotations_6, value);
	}

	inline static int32_t get_offset_of_positions_7() { return static_cast<int32_t>(offsetof(SmoothCamera_t552337043, ___positions_7)); }
	inline Queue_1_t938450033 * get_positions_7() const { return ___positions_7; }
	inline Queue_1_t938450033 ** get_address_of_positions_7() { return &___positions_7; }
	inline void set_positions_7(Queue_1_t938450033 * value)
	{
		___positions_7 = value;
		Il2CppCodeGenWriteBarrier(&___positions_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
