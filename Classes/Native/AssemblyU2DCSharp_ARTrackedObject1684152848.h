#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.String
struct String_t;
// AROrigin
struct AROrigin_t3335349585;
// ARMarker
struct ARMarker_t1554260723;
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ARTrackedObject
struct  ARTrackedObject_t1684152848  : public MonoBehaviour_t1158329972
{
public:
	// System.Single ARTrackedObject::smooth
	float ___smooth_2;
	// AROrigin ARTrackedObject::_origin
	AROrigin_t3335349585 * ____origin_4;
	// ARMarker ARTrackedObject::_marker
	ARMarker_t1554260723 * ____marker_5;
	// System.Boolean ARTrackedObject::visible
	bool ___visible_6;
	// System.Single ARTrackedObject::timeTrackingLost
	float ___timeTrackingLost_7;
	// System.Single ARTrackedObject::secondsToRemainVisible
	float ___secondsToRemainVisible_8;
	// System.Boolean ARTrackedObject::visibleOrRemain
	bool ___visibleOrRemain_9;
	// UnityEngine.GameObject ARTrackedObject::eventReceiver
	GameObject_t1756533147 * ___eventReceiver_10;
	// System.String ARTrackedObject::_markerTag
	String_t* ____markerTag_11;

public:
	inline static int32_t get_offset_of_smooth_2() { return static_cast<int32_t>(offsetof(ARTrackedObject_t1684152848, ___smooth_2)); }
	inline float get_smooth_2() const { return ___smooth_2; }
	inline float* get_address_of_smooth_2() { return &___smooth_2; }
	inline void set_smooth_2(float value)
	{
		___smooth_2 = value;
	}

	inline static int32_t get_offset_of__origin_4() { return static_cast<int32_t>(offsetof(ARTrackedObject_t1684152848, ____origin_4)); }
	inline AROrigin_t3335349585 * get__origin_4() const { return ____origin_4; }
	inline AROrigin_t3335349585 ** get_address_of__origin_4() { return &____origin_4; }
	inline void set__origin_4(AROrigin_t3335349585 * value)
	{
		____origin_4 = value;
		Il2CppCodeGenWriteBarrier(&____origin_4, value);
	}

	inline static int32_t get_offset_of__marker_5() { return static_cast<int32_t>(offsetof(ARTrackedObject_t1684152848, ____marker_5)); }
	inline ARMarker_t1554260723 * get__marker_5() const { return ____marker_5; }
	inline ARMarker_t1554260723 ** get_address_of__marker_5() { return &____marker_5; }
	inline void set__marker_5(ARMarker_t1554260723 * value)
	{
		____marker_5 = value;
		Il2CppCodeGenWriteBarrier(&____marker_5, value);
	}

	inline static int32_t get_offset_of_visible_6() { return static_cast<int32_t>(offsetof(ARTrackedObject_t1684152848, ___visible_6)); }
	inline bool get_visible_6() const { return ___visible_6; }
	inline bool* get_address_of_visible_6() { return &___visible_6; }
	inline void set_visible_6(bool value)
	{
		___visible_6 = value;
	}

	inline static int32_t get_offset_of_timeTrackingLost_7() { return static_cast<int32_t>(offsetof(ARTrackedObject_t1684152848, ___timeTrackingLost_7)); }
	inline float get_timeTrackingLost_7() const { return ___timeTrackingLost_7; }
	inline float* get_address_of_timeTrackingLost_7() { return &___timeTrackingLost_7; }
	inline void set_timeTrackingLost_7(float value)
	{
		___timeTrackingLost_7 = value;
	}

	inline static int32_t get_offset_of_secondsToRemainVisible_8() { return static_cast<int32_t>(offsetof(ARTrackedObject_t1684152848, ___secondsToRemainVisible_8)); }
	inline float get_secondsToRemainVisible_8() const { return ___secondsToRemainVisible_8; }
	inline float* get_address_of_secondsToRemainVisible_8() { return &___secondsToRemainVisible_8; }
	inline void set_secondsToRemainVisible_8(float value)
	{
		___secondsToRemainVisible_8 = value;
	}

	inline static int32_t get_offset_of_visibleOrRemain_9() { return static_cast<int32_t>(offsetof(ARTrackedObject_t1684152848, ___visibleOrRemain_9)); }
	inline bool get_visibleOrRemain_9() const { return ___visibleOrRemain_9; }
	inline bool* get_address_of_visibleOrRemain_9() { return &___visibleOrRemain_9; }
	inline void set_visibleOrRemain_9(bool value)
	{
		___visibleOrRemain_9 = value;
	}

	inline static int32_t get_offset_of_eventReceiver_10() { return static_cast<int32_t>(offsetof(ARTrackedObject_t1684152848, ___eventReceiver_10)); }
	inline GameObject_t1756533147 * get_eventReceiver_10() const { return ___eventReceiver_10; }
	inline GameObject_t1756533147 ** get_address_of_eventReceiver_10() { return &___eventReceiver_10; }
	inline void set_eventReceiver_10(GameObject_t1756533147 * value)
	{
		___eventReceiver_10 = value;
		Il2CppCodeGenWriteBarrier(&___eventReceiver_10, value);
	}

	inline static int32_t get_offset_of__markerTag_11() { return static_cast<int32_t>(offsetof(ARTrackedObject_t1684152848, ____markerTag_11)); }
	inline String_t* get__markerTag_11() const { return ____markerTag_11; }
	inline String_t** get_address_of__markerTag_11() { return &____markerTag_11; }
	inline void set__markerTag_11(String_t* value)
	{
		____markerTag_11 = value;
		Il2CppCodeGenWriteBarrier(&____markerTag_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
