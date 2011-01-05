/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.text.SpannedString
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_SPANNEDSTRING_HPP_DECL
#define J2CPP_ANDROID_TEXT_SPANNEDSTRING_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace android { namespace text { class Spanned; } } }
namespace j2cpp { namespace android { namespace text { class GetChars; } } }
namespace j2cpp { namespace android { namespace text { class SpannableStringInternal; } } }


#include <android/text/GetChars.hpp>
#include <android/text/SpannableStringInternal.hpp>
#include <android/text/Spanned.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace text {

	class SpannedString;
	class SpannedString
		: public object<SpannedString>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		explicit SpannedString(jobject jobj)
		: object<SpannedString>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::lang::CharSequence>() const;
		operator local_ref<android::text::Spanned>() const;
		operator local_ref<android::text::GetChars>() const;
		operator local_ref<android::text::SpannableStringInternal>() const;


		SpannedString(local_ref< java::lang::CharSequence > const&);
		local_ref< java::lang::CharSequence > subSequence(jint, jint);
		static local_ref< android::text::SpannedString > valueOf(local_ref< java::lang::CharSequence >  const&);
	}; //class SpannedString

} //namespace text
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_SPANNEDSTRING_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_SPANNEDSTRING_HPP_IMPL
#define J2CPP_ANDROID_TEXT_SPANNEDSTRING_HPP_IMPL

namespace j2cpp {



android::text::SpannedString::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::text::SpannedString::operator local_ref<java::lang::CharSequence>() const
{
	return local_ref<java::lang::CharSequence>(get_jobject());
}

android::text::SpannedString::operator local_ref<android::text::Spanned>() const
{
	return local_ref<android::text::Spanned>(get_jobject());
}

android::text::SpannedString::operator local_ref<android::text::GetChars>() const
{
	return local_ref<android::text::GetChars>(get_jobject());
}

android::text::SpannedString::operator local_ref<android::text::SpannableStringInternal>() const
{
	return local_ref<android::text::SpannableStringInternal>(get_jobject());
}


android::text::SpannedString::SpannedString(local_ref< java::lang::CharSequence > const &a0)
: object<android::text::SpannedString>(
	call_new_object<
		android::text::SpannedString::J2CPP_CLASS_NAME,
		android::text::SpannedString::J2CPP_METHOD_NAME(0),
		android::text::SpannedString::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}


local_ref< java::lang::CharSequence > android::text::SpannedString::subSequence(jint a0, jint a1)
{
	return call_method<
		android::text::SpannedString::J2CPP_CLASS_NAME,
		android::text::SpannedString::J2CPP_METHOD_NAME(1),
		android::text::SpannedString::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::CharSequence >
	>(get_jobject(), a0, a1);
}

local_ref< android::text::SpannedString > android::text::SpannedString::valueOf(local_ref< java::lang::CharSequence > const &a0)
{
	return call_static_method<
		android::text::SpannedString::J2CPP_CLASS_NAME,
		android::text::SpannedString::J2CPP_METHOD_NAME(2),
		android::text::SpannedString::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< android::text::SpannedString >
	>(a0);
}


J2CPP_DEFINE_CLASS(android::text::SpannedString,"android/text/SpannedString")
J2CPP_DEFINE_METHOD(android::text::SpannedString,0,"<init>","(Ljava/lang/CharSequence;)V")
J2CPP_DEFINE_METHOD(android::text::SpannedString,1,"subSequence","(II)Ljava/lang/CharSequence;")
J2CPP_DEFINE_METHOD(android::text::SpannedString,2,"valueOf","(Ljava/lang/CharSequence;)Landroid/text/SpannedString;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_SPANNEDSTRING_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
