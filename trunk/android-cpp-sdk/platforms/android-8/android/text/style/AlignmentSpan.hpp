/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.text.style.AlignmentSpan
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_STYLE_ALIGNMENTSPAN_HPP_DECL
#define J2CPP_ANDROID_TEXT_STYLE_ALIGNMENTSPAN_HPP_DECL


namespace j2cpp { namespace android { namespace os { class Parcelable; } } }
namespace j2cpp { namespace android { namespace os { class Parcel; } } }
namespace j2cpp { namespace android { namespace text { namespace Layout_ { class Alignment; } } } }
namespace j2cpp { namespace android { namespace text { class ParcelableSpan; } } }
namespace j2cpp { namespace android { namespace text { namespace style { class ParagraphStyle; } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/os/Parcel.hpp>
#include <android/os/Parcelable.hpp>
#include <android/text/Layout.hpp>
#include <android/text/ParcelableSpan.hpp>
#include <android/text/style/ParagraphStyle.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace text { namespace style {

	class AlignmentSpan;
	namespace AlignmentSpan_ {

		class Standard;
		class Standard
			: public object<Standard>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)
			J2CPP_DECLARE_METHOD(2)
			J2CPP_DECLARE_METHOD(3)
			J2CPP_DECLARE_METHOD(4)
			J2CPP_DECLARE_METHOD(5)

			explicit Standard(jobject jobj)
			: object<Standard>(jobj)
			{
			}

			operator local_ref<android::os::Parcelable>() const;
			operator local_ref<android::text::ParcelableSpan>() const;
			operator local_ref<android::text::style::ParagraphStyle>() const;
			operator local_ref<android::text::style::AlignmentSpan>() const;
			operator local_ref<java::lang::Object>() const;


			Standard(local_ref< android::text::Layout_::Alignment > const&);
			Standard(local_ref< android::os::Parcel > const&);
			jint getSpanTypeId();
			jint describeContents();
			void writeToParcel(local_ref< android::os::Parcel >  const&, jint);
			local_ref< android::text::Layout_::Alignment > getAlignment();
		}; //class Standard

	} //namespace AlignmentSpan_

	class AlignmentSpan
		: public object<AlignmentSpan>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		typedef AlignmentSpan_::Standard Standard;

		explicit AlignmentSpan(jobject jobj)
		: object<AlignmentSpan>(jobj)
		{
		}

		operator local_ref<android::text::style::ParagraphStyle>() const;
		operator local_ref<java::lang::Object>() const;


		local_ref< android::text::Layout_::Alignment > getAlignment();
	}; //class AlignmentSpan

} //namespace style
} //namespace text
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_STYLE_ALIGNMENTSPAN_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_STYLE_ALIGNMENTSPAN_HPP_IMPL
#define J2CPP_ANDROID_TEXT_STYLE_ALIGNMENTSPAN_HPP_IMPL

namespace j2cpp {




android::text::style::AlignmentSpan_::Standard::operator local_ref<android::os::Parcelable>() const
{
	return local_ref<android::os::Parcelable>(get_jobject());
}

android::text::style::AlignmentSpan_::Standard::operator local_ref<android::text::ParcelableSpan>() const
{
	return local_ref<android::text::ParcelableSpan>(get_jobject());
}

android::text::style::AlignmentSpan_::Standard::operator local_ref<android::text::style::ParagraphStyle>() const
{
	return local_ref<android::text::style::ParagraphStyle>(get_jobject());
}

android::text::style::AlignmentSpan_::Standard::operator local_ref<android::text::style::AlignmentSpan>() const
{
	return local_ref<android::text::style::AlignmentSpan>(get_jobject());
}

android::text::style::AlignmentSpan_::Standard::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::text::style::AlignmentSpan_::Standard::Standard(local_ref< android::text::Layout_::Alignment > const &a0)
: object<android::text::style::AlignmentSpan_::Standard>(
	call_new_object<
		android::text::style::AlignmentSpan_::Standard::J2CPP_CLASS_NAME,
		android::text::style::AlignmentSpan_::Standard::J2CPP_METHOD_NAME(0),
		android::text::style::AlignmentSpan_::Standard::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}



android::text::style::AlignmentSpan_::Standard::Standard(local_ref< android::os::Parcel > const &a0)
: object<android::text::style::AlignmentSpan_::Standard>(
	call_new_object<
		android::text::style::AlignmentSpan_::Standard::J2CPP_CLASS_NAME,
		android::text::style::AlignmentSpan_::Standard::J2CPP_METHOD_NAME(1),
		android::text::style::AlignmentSpan_::Standard::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}


jint android::text::style::AlignmentSpan_::Standard::getSpanTypeId()
{
	return call_method<
		android::text::style::AlignmentSpan_::Standard::J2CPP_CLASS_NAME,
		android::text::style::AlignmentSpan_::Standard::J2CPP_METHOD_NAME(2),
		android::text::style::AlignmentSpan_::Standard::J2CPP_METHOD_SIGNATURE(2), 
		jint
	>(get_jobject());
}

jint android::text::style::AlignmentSpan_::Standard::describeContents()
{
	return call_method<
		android::text::style::AlignmentSpan_::Standard::J2CPP_CLASS_NAME,
		android::text::style::AlignmentSpan_::Standard::J2CPP_METHOD_NAME(3),
		android::text::style::AlignmentSpan_::Standard::J2CPP_METHOD_SIGNATURE(3), 
		jint
	>(get_jobject());
}

void android::text::style::AlignmentSpan_::Standard::writeToParcel(local_ref< android::os::Parcel > const &a0, jint a1)
{
	return call_method<
		android::text::style::AlignmentSpan_::Standard::J2CPP_CLASS_NAME,
		android::text::style::AlignmentSpan_::Standard::J2CPP_METHOD_NAME(4),
		android::text::style::AlignmentSpan_::Standard::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0, a1);
}

local_ref< android::text::Layout_::Alignment > android::text::style::AlignmentSpan_::Standard::getAlignment()
{
	return call_method<
		android::text::style::AlignmentSpan_::Standard::J2CPP_CLASS_NAME,
		android::text::style::AlignmentSpan_::Standard::J2CPP_METHOD_NAME(5),
		android::text::style::AlignmentSpan_::Standard::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< android::text::Layout_::Alignment >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(android::text::style::AlignmentSpan_::Standard,"android/text/style/AlignmentSpan$Standard")
J2CPP_DEFINE_METHOD(android::text::style::AlignmentSpan_::Standard,0,"<init>","(Landroid/text/Layout$Alignment;)V")
J2CPP_DEFINE_METHOD(android::text::style::AlignmentSpan_::Standard,1,"<init>","(Landroid/os/Parcel;)V")
J2CPP_DEFINE_METHOD(android::text::style::AlignmentSpan_::Standard,2,"getSpanTypeId","()I")
J2CPP_DEFINE_METHOD(android::text::style::AlignmentSpan_::Standard,3,"describeContents","()I")
J2CPP_DEFINE_METHOD(android::text::style::AlignmentSpan_::Standard,4,"writeToParcel","(Landroid/os/Parcel;I)V")
J2CPP_DEFINE_METHOD(android::text::style::AlignmentSpan_::Standard,5,"getAlignment","()Landroid/text/Layout$Alignment;")



android::text::style::AlignmentSpan::operator local_ref<android::text::style::ParagraphStyle>() const
{
	return local_ref<android::text::style::ParagraphStyle>(get_jobject());
}

android::text::style::AlignmentSpan::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

local_ref< android::text::Layout_::Alignment > android::text::style::AlignmentSpan::getAlignment()
{
	return call_method<
		android::text::style::AlignmentSpan::J2CPP_CLASS_NAME,
		android::text::style::AlignmentSpan::J2CPP_METHOD_NAME(0),
		android::text::style::AlignmentSpan::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< android::text::Layout_::Alignment >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(android::text::style::AlignmentSpan,"android/text/style/AlignmentSpan")
J2CPP_DEFINE_METHOD(android::text::style::AlignmentSpan,0,"getAlignment","()Landroid/text/Layout$Alignment;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_STYLE_ALIGNMENTSPAN_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
