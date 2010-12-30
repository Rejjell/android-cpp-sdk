/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.text.style.StrikethroughSpan
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_STYLE_STRIKETHROUGHSPAN_HPP_DECL
#define J2CPP_ANDROID_TEXT_STYLE_STRIKETHROUGHSPAN_HPP_DECL


namespace j2cpp { namespace android { namespace text { class TextPaint; } } }
namespace j2cpp { namespace android { namespace text { namespace style { class CharacterStyle; } } } }
namespace j2cpp { namespace android { namespace text { namespace style { class UpdateAppearance; } } } }
namespace j2cpp { namespace android { namespace text { class ParcelableSpan; } } }
namespace j2cpp { namespace android { namespace os { class Parcel; } } }


#include <android/os/Parcel.hpp>
#include <android/text/ParcelableSpan.hpp>
#include <android/text/TextPaint.hpp>
#include <android/text/style/CharacterStyle.hpp>
#include <android/text/style/UpdateAppearance.hpp>


namespace j2cpp {

namespace android { namespace text { namespace style {

	class StrikethroughSpan;
	class StrikethroughSpan
		: public object<StrikethroughSpan>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)

		explicit StrikethroughSpan(jobject jobj)
		: object<StrikethroughSpan>(jobj)
		{
		}

		operator local_ref<android::text::style::CharacterStyle>() const;
		operator local_ref<android::text::style::UpdateAppearance>() const;
		operator local_ref<android::text::ParcelableSpan>() const;


		StrikethroughSpan();
		StrikethroughSpan(local_ref< android::os::Parcel > const&);
		jint getSpanTypeId();
		jint describeContents();
		void writeToParcel(local_ref< android::os::Parcel >  const&, jint);
		void updateDrawState(local_ref< android::text::TextPaint >  const&);
	}; //class StrikethroughSpan

} //namespace style
} //namespace text
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_STYLE_STRIKETHROUGHSPAN_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_STYLE_STRIKETHROUGHSPAN_HPP_IMPL
#define J2CPP_ANDROID_TEXT_STYLE_STRIKETHROUGHSPAN_HPP_IMPL

namespace j2cpp {



android::text::style::StrikethroughSpan::operator local_ref<android::text::style::CharacterStyle>() const
{
	return local_ref<android::text::style::CharacterStyle>(get_jobject());
}

android::text::style::StrikethroughSpan::operator local_ref<android::text::style::UpdateAppearance>() const
{
	return local_ref<android::text::style::UpdateAppearance>(get_jobject());
}

android::text::style::StrikethroughSpan::operator local_ref<android::text::ParcelableSpan>() const
{
	return local_ref<android::text::ParcelableSpan>(get_jobject());
}


android::text::style::StrikethroughSpan::StrikethroughSpan()
: object<android::text::style::StrikethroughSpan>(
	call_new_object<
		android::text::style::StrikethroughSpan::J2CPP_CLASS_NAME,
		android::text::style::StrikethroughSpan::J2CPP_METHOD_NAME(0),
		android::text::style::StrikethroughSpan::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}



android::text::style::StrikethroughSpan::StrikethroughSpan(local_ref< android::os::Parcel > const &a0)
: object<android::text::style::StrikethroughSpan>(
	call_new_object<
		android::text::style::StrikethroughSpan::J2CPP_CLASS_NAME,
		android::text::style::StrikethroughSpan::J2CPP_METHOD_NAME(1),
		android::text::style::StrikethroughSpan::J2CPP_METHOD_SIGNATURE(1)>
	(a0)
)
{
}


jint android::text::style::StrikethroughSpan::getSpanTypeId()
{
	return call_method<
		android::text::style::StrikethroughSpan::J2CPP_CLASS_NAME,
		android::text::style::StrikethroughSpan::J2CPP_METHOD_NAME(2),
		android::text::style::StrikethroughSpan::J2CPP_METHOD_SIGNATURE(2), 
		jint >
	(get_jobject());
}

jint android::text::style::StrikethroughSpan::describeContents()
{
	return call_method<
		android::text::style::StrikethroughSpan::J2CPP_CLASS_NAME,
		android::text::style::StrikethroughSpan::J2CPP_METHOD_NAME(3),
		android::text::style::StrikethroughSpan::J2CPP_METHOD_SIGNATURE(3), 
		jint >
	(get_jobject());
}

void android::text::style::StrikethroughSpan::writeToParcel(local_ref< android::os::Parcel > const &a0, jint a1)
{
	return call_method<
		android::text::style::StrikethroughSpan::J2CPP_CLASS_NAME,
		android::text::style::StrikethroughSpan::J2CPP_METHOD_NAME(4),
		android::text::style::StrikethroughSpan::J2CPP_METHOD_SIGNATURE(4), 
		void >
	(get_jobject(), a0, a1);
}

void android::text::style::StrikethroughSpan::updateDrawState(local_ref< android::text::TextPaint > const &a0)
{
	return call_method<
		android::text::style::StrikethroughSpan::J2CPP_CLASS_NAME,
		android::text::style::StrikethroughSpan::J2CPP_METHOD_NAME(5),
		android::text::style::StrikethroughSpan::J2CPP_METHOD_SIGNATURE(5), 
		void >
	(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(android::text::style::StrikethroughSpan,"android/text/style/StrikethroughSpan")
J2CPP_DEFINE_METHOD(android::text::style::StrikethroughSpan,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::text::style::StrikethroughSpan,1,"<init>","(Landroid/os/Parcel;)V")
J2CPP_DEFINE_METHOD(android::text::style::StrikethroughSpan,2,"getSpanTypeId","()I")
J2CPP_DEFINE_METHOD(android::text::style::StrikethroughSpan,3,"describeContents","()I")
J2CPP_DEFINE_METHOD(android::text::style::StrikethroughSpan,4,"writeToParcel","(Landroid/os/Parcel;I)V")
J2CPP_DEFINE_METHOD(android::text::style::StrikethroughSpan,5,"updateDrawState","(Landroid/text/TextPaint;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_STYLE_STRIKETHROUGHSPAN_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
