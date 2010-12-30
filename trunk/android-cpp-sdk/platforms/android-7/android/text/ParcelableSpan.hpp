/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.text.ParcelableSpan
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_PARCELABLESPAN_HPP_DECL
#define J2CPP_ANDROID_TEXT_PARCELABLESPAN_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace os { class Parcelable; } } }


#include <android/os/Parcelable.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace text {

	class ParcelableSpan;
	class ParcelableSpan
		: public object<ParcelableSpan>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		explicit ParcelableSpan(jobject jobj)
		: object<ParcelableSpan>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::os::Parcelable>() const;


		jint getSpanTypeId();
	}; //class ParcelableSpan

} //namespace text
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_PARCELABLESPAN_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_PARCELABLESPAN_HPP_IMPL
#define J2CPP_ANDROID_TEXT_PARCELABLESPAN_HPP_IMPL

namespace j2cpp {



android::text::ParcelableSpan::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::text::ParcelableSpan::operator local_ref<android::os::Parcelable>() const
{
	return local_ref<android::os::Parcelable>(get_jobject());
}

jint android::text::ParcelableSpan::getSpanTypeId()
{
	return call_method<
		android::text::ParcelableSpan::J2CPP_CLASS_NAME,
		android::text::ParcelableSpan::J2CPP_METHOD_NAME(0),
		android::text::ParcelableSpan::J2CPP_METHOD_SIGNATURE(0), 
		jint >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(android::text::ParcelableSpan,"android/text/ParcelableSpan")
J2CPP_DEFINE_METHOD(android::text::ParcelableSpan,0,"getSpanTypeId","()I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_PARCELABLESPAN_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
