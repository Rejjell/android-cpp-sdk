/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.text.style.SuperscriptSpan
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_STYLE_SUPERSCRIPTSPAN_HPP_DECL
#define J2CPP_ANDROID_TEXT_STYLE_SUPERSCRIPTSPAN_HPP_DECL


namespace j2cpp { namespace android { namespace text { class TextPaint; } } }
namespace j2cpp { namespace android { namespace text { namespace style { class MetricAffectingSpan; } } } }
namespace j2cpp { namespace android { namespace text { class ParcelableSpan; } } }
namespace j2cpp { namespace android { namespace os { class Parcel; } } }


#include <android/os/Parcel.hpp>
#include <android/text/ParcelableSpan.hpp>
#include <android/text/TextPaint.hpp>
#include <android/text/style/MetricAffectingSpan.hpp>


namespace j2cpp {

namespace android { namespace text { namespace style {

	class SuperscriptSpan;
	class SuperscriptSpan
		: public object<SuperscriptSpan>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)
		J2CPP_DECLARE_METHOD(6)

		explicit SuperscriptSpan(jobject jobj)
		: object<SuperscriptSpan>(jobj)
		{
		}

		operator local_ref<android::text::style::MetricAffectingSpan>() const;
		operator local_ref<android::text::ParcelableSpan>() const;


		SuperscriptSpan();
		SuperscriptSpan(local_ref< android::os::Parcel > const&);
		jint getSpanTypeId();
		jint describeContents();
		void writeToParcel(local_ref< android::os::Parcel >  const&, jint);
		void updateDrawState(local_ref< android::text::TextPaint >  const&);
		void updateMeasureState(local_ref< android::text::TextPaint >  const&);
	}; //class SuperscriptSpan

} //namespace style
} //namespace text
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_STYLE_SUPERSCRIPTSPAN_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_STYLE_SUPERSCRIPTSPAN_HPP_IMPL
#define J2CPP_ANDROID_TEXT_STYLE_SUPERSCRIPTSPAN_HPP_IMPL

namespace j2cpp {



android::text::style::SuperscriptSpan::operator local_ref<android::text::style::MetricAffectingSpan>() const
{
	return local_ref<android::text::style::MetricAffectingSpan>(get_jobject());
}

android::text::style::SuperscriptSpan::operator local_ref<android::text::ParcelableSpan>() const
{
	return local_ref<android::text::ParcelableSpan>(get_jobject());
}


android::text::style::SuperscriptSpan::SuperscriptSpan()
: object<android::text::style::SuperscriptSpan>(
	call_new_object<
		android::text::style::SuperscriptSpan::J2CPP_CLASS_NAME,
		android::text::style::SuperscriptSpan::J2CPP_METHOD_NAME(0),
		android::text::style::SuperscriptSpan::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}



android::text::style::SuperscriptSpan::SuperscriptSpan(local_ref< android::os::Parcel > const &a0)
: object<android::text::style::SuperscriptSpan>(
	call_new_object<
		android::text::style::SuperscriptSpan::J2CPP_CLASS_NAME,
		android::text::style::SuperscriptSpan::J2CPP_METHOD_NAME(1),
		android::text::style::SuperscriptSpan::J2CPP_METHOD_SIGNATURE(1)>
	(a0)
)
{
}


jint android::text::style::SuperscriptSpan::getSpanTypeId()
{
	return call_method<
		android::text::style::SuperscriptSpan::J2CPP_CLASS_NAME,
		android::text::style::SuperscriptSpan::J2CPP_METHOD_NAME(2),
		android::text::style::SuperscriptSpan::J2CPP_METHOD_SIGNATURE(2), 
		jint >
	(get_jobject());
}

jint android::text::style::SuperscriptSpan::describeContents()
{
	return call_method<
		android::text::style::SuperscriptSpan::J2CPP_CLASS_NAME,
		android::text::style::SuperscriptSpan::J2CPP_METHOD_NAME(3),
		android::text::style::SuperscriptSpan::J2CPP_METHOD_SIGNATURE(3), 
		jint >
	(get_jobject());
}

void android::text::style::SuperscriptSpan::writeToParcel(local_ref< android::os::Parcel > const &a0, jint a1)
{
	return call_method<
		android::text::style::SuperscriptSpan::J2CPP_CLASS_NAME,
		android::text::style::SuperscriptSpan::J2CPP_METHOD_NAME(4),
		android::text::style::SuperscriptSpan::J2CPP_METHOD_SIGNATURE(4), 
		void >
	(get_jobject(), a0, a1);
}

void android::text::style::SuperscriptSpan::updateDrawState(local_ref< android::text::TextPaint > const &a0)
{
	return call_method<
		android::text::style::SuperscriptSpan::J2CPP_CLASS_NAME,
		android::text::style::SuperscriptSpan::J2CPP_METHOD_NAME(5),
		android::text::style::SuperscriptSpan::J2CPP_METHOD_SIGNATURE(5), 
		void >
	(get_jobject(), a0);
}

void android::text::style::SuperscriptSpan::updateMeasureState(local_ref< android::text::TextPaint > const &a0)
{
	return call_method<
		android::text::style::SuperscriptSpan::J2CPP_CLASS_NAME,
		android::text::style::SuperscriptSpan::J2CPP_METHOD_NAME(6),
		android::text::style::SuperscriptSpan::J2CPP_METHOD_SIGNATURE(6), 
		void >
	(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(android::text::style::SuperscriptSpan,"android/text/style/SuperscriptSpan")
J2CPP_DEFINE_METHOD(android::text::style::SuperscriptSpan,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::text::style::SuperscriptSpan,1,"<init>","(Landroid/os/Parcel;)V")
J2CPP_DEFINE_METHOD(android::text::style::SuperscriptSpan,2,"getSpanTypeId","()I")
J2CPP_DEFINE_METHOD(android::text::style::SuperscriptSpan,3,"describeContents","()I")
J2CPP_DEFINE_METHOD(android::text::style::SuperscriptSpan,4,"writeToParcel","(Landroid/os/Parcel;I)V")
J2CPP_DEFINE_METHOD(android::text::style::SuperscriptSpan,5,"updateDrawState","(Landroid/text/TextPaint;)V")
J2CPP_DEFINE_METHOD(android::text::style::SuperscriptSpan,6,"updateMeasureState","(Landroid/text/TextPaint;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_STYLE_SUPERSCRIPTSPAN_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
