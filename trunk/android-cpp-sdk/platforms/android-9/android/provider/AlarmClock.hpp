/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.provider.AlarmClock
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_PROVIDER_ALARMCLOCK_HPP_DECL
#define J2CPP_ANDROID_PROVIDER_ALARMCLOCK_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace provider {

	class AlarmClock;
	class AlarmClock
		: public object<AlarmClock>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)

		explicit AlarmClock(jobject jobj)
		: object<AlarmClock>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		AlarmClock();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::String > > ACTION_SET_ALARM;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< java::lang::String > > EXTRA_MESSAGE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< java::lang::String > > EXTRA_HOUR;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), local_ref< java::lang::String > > EXTRA_MINUTES;
	}; //class AlarmClock

} //namespace provider
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_PROVIDER_ALARMCLOCK_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_PROVIDER_ALARMCLOCK_HPP_IMPL
#define J2CPP_ANDROID_PROVIDER_ALARMCLOCK_HPP_IMPL

namespace j2cpp {



android::provider::AlarmClock::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::provider::AlarmClock::AlarmClock()
: object<android::provider::AlarmClock>(
	call_new_object<
		android::provider::AlarmClock::J2CPP_CLASS_NAME,
		android::provider::AlarmClock::J2CPP_METHOD_NAME(0),
		android::provider::AlarmClock::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}



static_field<
	android::provider::AlarmClock::J2CPP_CLASS_NAME,
	android::provider::AlarmClock::J2CPP_FIELD_NAME(0),
	android::provider::AlarmClock::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::lang::String >
> android::provider::AlarmClock::ACTION_SET_ALARM;

static_field<
	android::provider::AlarmClock::J2CPP_CLASS_NAME,
	android::provider::AlarmClock::J2CPP_FIELD_NAME(1),
	android::provider::AlarmClock::J2CPP_FIELD_SIGNATURE(1),
	local_ref< java::lang::String >
> android::provider::AlarmClock::EXTRA_MESSAGE;

static_field<
	android::provider::AlarmClock::J2CPP_CLASS_NAME,
	android::provider::AlarmClock::J2CPP_FIELD_NAME(2),
	android::provider::AlarmClock::J2CPP_FIELD_SIGNATURE(2),
	local_ref< java::lang::String >
> android::provider::AlarmClock::EXTRA_HOUR;

static_field<
	android::provider::AlarmClock::J2CPP_CLASS_NAME,
	android::provider::AlarmClock::J2CPP_FIELD_NAME(3),
	android::provider::AlarmClock::J2CPP_FIELD_SIGNATURE(3),
	local_ref< java::lang::String >
> android::provider::AlarmClock::EXTRA_MINUTES;


J2CPP_DEFINE_CLASS(android::provider::AlarmClock,"android/provider/AlarmClock")
J2CPP_DEFINE_METHOD(android::provider::AlarmClock,0,"<init>","()V")
J2CPP_DEFINE_FIELD(android::provider::AlarmClock,0,"ACTION_SET_ALARM","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::provider::AlarmClock,1,"EXTRA_MESSAGE","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::provider::AlarmClock,2,"EXTRA_HOUR","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::provider::AlarmClock,3,"EXTRA_MINUTES","Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_PROVIDER_ALARMCLOCK_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION