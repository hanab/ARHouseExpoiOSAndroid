#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Button
struct Button_t990034267;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ButtonID
struct  ButtonID_t3251605485  : public MonoBehaviour_t3012272455
{
public:
	// System.Int32 ButtonID::id
	int32_t ___id_2;
	// UnityEngine.UI.Button ButtonID::button
	Button_t990034267 * ___button_3;

public:
	inline static int32_t get_offset_of_id_2() { return static_cast<int32_t>(offsetof(ButtonID_t3251605485, ___id_2)); }
	inline int32_t get_id_2() const { return ___id_2; }
	inline int32_t* get_address_of_id_2() { return &___id_2; }
	inline void set_id_2(int32_t value)
	{
		___id_2 = value;
	}

	inline static int32_t get_offset_of_button_3() { return static_cast<int32_t>(offsetof(ButtonID_t3251605485, ___button_3)); }
	inline Button_t990034267 * get_button_3() const { return ___button_3; }
	inline Button_t990034267 ** get_address_of_button_3() { return &___button_3; }
	inline void set_button_3(Button_t990034267 * value)
	{
		___button_3 = value;
		Il2CppCodeGenWriteBarrier(&___button_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
