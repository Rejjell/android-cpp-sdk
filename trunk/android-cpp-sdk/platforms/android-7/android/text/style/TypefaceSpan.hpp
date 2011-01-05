/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.text.style.TypefaceSpan
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_STYLE_TYPEFACESPAN_HPP_DECL
#define J2CPP_ANDROID_TEXT_STYLE_TYPEFACESPAN_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace android { namespace text { class TextPaint; } } }
namespace j2cpp { namespace android { namespace text { namespace style { class UpdateLayout; } } } }
namespace j2cpp { namespace android { namespace text { namespace style { class MetricAffectingSpan; } } } }
namespace j2cpp { namespace android { namespace text { namespace style { class CharacterStyle; } } } }
namespace j2cpp { namespace android { namespace text { namespace style { class UpdateAppearance; } } } }
namespace j2cpp { namespace android { namespace text { class ParcelableSpan; } } }
namespace j2cpp { namespace android { namespace os { class Parcel; } } }
namespace j2cpp { namespace android { namespace os { class Parcelable; } } }


#include <android/os/Parcel.hpp>
#include <android/os/Parcelable.hpp>
#include <android/text/ParcelableSpan.hpp>
#include <android/text/TextPaint.hpp>
#include <android/text/style/CharacterStyle.hpp>
#include <android/text/style/MetricAffectingSpan.hpp>
#include <android/text/style/UpdateAppearance.hpp>
#include <android/text/style/UpdateLayout.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace text { namespace style {

	class TypefaceSpan;
	class TypefaceSpan
		: public object<TypefaceSpan>
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
		J2CPP_DECLARE_METHOD(7)

		explicit TypefaceSpan(jobject jobj)
		: object<TypefaceSpan>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::text::style::UpdateLayout>() const;
		operator local_ref<android::text::style::MetricAffectingSpan>() const;
		operator local_ref<android::text::style::CharacterStyle>() const;
		operator local_ref<android::text::style::UpdateAppearance>() const;
		operator local_ref<android::text::ParcelableSpan>() const;
		operator local_ref<android::os::Parcelable>() const;


		TypefaceSpan(local_ref< java::lang::String > const&);
		TypefaceSpan(local_ref< android::os::Parcel > const&);
		jint getSpanTypeId();
		jint describeContents();
		void writeToParcel(local_ref< android::os::Parcel >  const&, jint);
		local_ref< java::lang::String > getFamily();
		void updateDrawState(local_ref< android::text::TextPaint >  const&);
		void updateMeasureState(local_ref< android::text::TextPaint >  const&);
	}; //class TypefaceSpan

} //namespace style
} //namespace text
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_STYLE_TYPEFACESPAN_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_STYLE_TYPEFACESPAN_HPP_IMPL
#define J2CPP_ANDROID_TEXT_STYLE_TYPEFACESPAN_HPP_IMPL

namespace j2cpp {



android::text::style::TypefaceSpan::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::text::style::TypefaceSpan::operator local_ref<android::text::style::UpdateLayout>() const
{
	return local_ref<android::text::style::UpdateLayout>(get_jobject());
}

android::text::style::TypefaceSpan::operator local_ref<android::text::style::MetricAffectingSpan>() const
{
	return local_ref<android::text::style::MetricAffectingSpan>(get_jobject());
}

android::text::style::TypefaceSpan::operator local_ref<android::text::style::CharacterStyle>() const
{
	return local_ref<android::text::style::CharacterStyle>(get_jobject());
}

android::text::style::TypefaceSpan::operator local_ref<android::text::style::UpdateAppearance>() const
{
	return local_ref<android::text::style::UpdateAppearance>(get_jobject());
}

android::text::style::TypefaceSpan::operator local_ref<android::text::ParcelableSpan>() const
{
	return local_ref<android::text::ParcelableSpan>(get_jobject());
}

android::text::style::TypefaceSpan::operator local_ref<android::os::Parcelable>() const
{
	return local_ref<android::os::Parcelable>(get_jobject());
}


android::text::style::TypefaceSpan::TypefaceSpan(local_ref< java::lang::String > const &a0)
: object<android::text::style::TypefaceSpan>(
	call_new_object<
		android::text::style::TypefaceSpan::J2CPP_CLASS_NAME,
		android::text::style::TypefaceSpan::J2CPP_METHOD_NAME(0),
		android::text::style::TypefaceSpan::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}



android::text::style::TypefaceSpan::TypefaceSpan(local_ref< android::os::Parcel > const &a0)
: object<android::text::style::TypefaceSpan>(
	call_new_object<
		android::text::style::TypefaceSpan::J2CPP_CLASS_NAME,
		android::text::style::TypefaceSpan::J2CPP_METHOD_NAME(1),
		android::text::style::TypefaceSpan::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}


jint android::text::style::TypefaceSpan::getSpanTypeId()
{
	return call_method<
		android::text::style::TypefaceSpan::J2CPP_CLASS_NAME,
		android::text::style::TypefaceSpan::J2CPP_METHOD_NAME(2),
		android::text::style::TypefaceSpan::J2CPP_METHOD_SIGNATURE(2), 
		jint
	>(get_jobject());
}

jint android::text::style::TypefaceSpan::describeContents()
{
	return call_method<
		android::text::style::TypefaceSpan::J2CPP_CLASS_NAME,
		android::text::style::TypefaceSpan::J2CPP_METHOD_NAME(3),
		android::text::style::TypefaceSpan::J2CPP_METHOD_SIGNATURE(3), 
		jint
	>(get_jobject());
}

void android::text::style::TypefaceSpan::writeToParcel(local_ref< android::os::Parcel > const &a0, jint a1)
{
	return call_method<
		android::text::style::TypefaceSpan::J2CPP_CLASS_NAME,
		android::text::style::TypefaceSpan::J2CPP_METHOD_NAME(4),
		android::text::style::TypefaceSpan::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0, a1);
}

local_ref< java::lang::String > android::text::style::TypefaceSpan::getFamily()
{
	return call_method<
		android::text::style::TypefaceSpan::J2CPP_CLASS_NAME,
		android::text::style::TypefaceSpan::J2CPP_METHOD_NAME(5),
		android::text::style::TypefaceSpan::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::lang::String >
	>(get_jobject());
}

void android::text::style::TypefaceSpan::updateDrawState(local_ref< android::text::TextPaint > const &a0)
{
	return call_method<
		android::text::style::TypefaceSpan::J2CPP_CLASS_NAME,
		android::text::style::TypefaceSpan::J2CPP_METHOD_NAME(6),
		android::text::style::TypefaceSpan::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(get_jobject(), a0);
}

void android::text::style::TypefaceSpan::updateMeasureState(local_ref< android::text::TextPaint > const &a0)
{
	return call_method<
		android::text::style::TypefaceSpan::J2CPP_CLASS_NAME,
		android::text::style::TypefaceSpan::J2CPP_METHOD_NAME(7),
		android::text::style::TypefaceSpan::J2CPP_METHOD_SIGNATURE(7), 
		void
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(android::text::style::TypefaceSpan,"android/text/style/TypefaceSpan")
J2CPP_DEFINE_METHOD(android::text::style::TypefaceSpan,0,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::text::style::TypefaceSpan,1,"<init>","(Landroid/os/Parcel;)V")
J2CPP_DEFINE_METHOD(android::text::style::TypefaceSpan,2,"getSpanTypeId","()I")
J2CPP_DEFINE_METHOD(android::text::style::TypefaceSpan,3,"describeContents","()I")
J2CPP_DEFINE_METHOD(android::text::style::TypefaceSpan,4,"writeToParcel","(Landroid/os/Parcel;I)V")
J2CPP_DEFINE_METHOD(android::text::style::TypefaceSpan,5,"getFamily","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::text::style::TypefaceSpan,6,"updateDrawState","(Landroid/text/TextPaint;)V")
J2CPP_DEFINE_METHOD(android::text::style::TypefaceSpan,7,"updateMeasureState","(Landroid/text/TextPaint;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_STYLE_TYPEFACESPAN_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
