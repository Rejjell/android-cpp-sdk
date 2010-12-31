/*================================================================================
  code generated by: java2cpp
  class: android.text.method.NumberKeyListener
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_METHOD_NUMBERKEYLISTENER_HPP_DECL
#define J2CPP_ANDROID_TEXT_METHOD_NUMBERKEYLISTENER_HPP_DECL


namespace j2cpp { namespace android { namespace text { class Editable; } } }
namespace j2cpp { namespace android { namespace text { class Spanned; } } }
namespace j2cpp { namespace android { namespace view { class View; } } }
namespace j2cpp { namespace android { namespace view { class KeyEvent; } } }
namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }


#include <android/text/Editable.hpp>
#include <android/text/Spanned.hpp>
#include <android/view/KeyEvent.hpp>
#include <android/view/View.hpp>
#include <java/lang/CharSequence.hpp>


namespace j2cpp {

namespace android { namespace text { namespace method {

	class NumberKeyListener;
	class NumberKeyListener
		: public cpp_object<NumberKeyListener>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)

		NumberKeyListener(jobject jobj)
		: cpp_object<NumberKeyListener>(jobj)
		{
		}

		local_ref< java::lang::CharSequence > filter(local_ref< java::lang::CharSequence > const&, cpp_int const&, cpp_int const&, local_ref< android::text::Spanned > const&, cpp_int const&, cpp_int const&);
		cpp_boolean onKeyDown(local_ref< android::view::View > const&, local_ref< android::text::Editable > const&, cpp_int const&, local_ref< android::view::KeyEvent > const&);
	}; //class NumberKeyListener

} //namespace method
} //namespace text
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_METHOD_NUMBERKEYLISTENER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_METHOD_NUMBERKEYLISTENER_HPP_IMPL
#define J2CPP_ANDROID_TEXT_METHOD_NUMBERKEYLISTENER_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::text::method::NumberKeyListener > create< android::text::method::NumberKeyListener>()
{
	return local_ref< android::text::method::NumberKeyListener >(
		environment::get().get_jenv()->NewObject(
			get_class<android::text::method::NumberKeyListener::J2CPP_CLASS_NAME>(),
			get_method_id<android::text::method::NumberKeyListener::J2CPP_CLASS_NAME, android::text::method::NumberKeyListener::J2CPP_METHOD_NAME(0), android::text::method::NumberKeyListener::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}



local_ref< java::lang::CharSequence > android::text::method::NumberKeyListener::filter(local_ref< java::lang::CharSequence > const &a0, cpp_int const &a1, cpp_int const &a2, local_ref< android::text::Spanned > const &a3, cpp_int const &a4, cpp_int const &a5)
{
	return local_ref< java::lang::CharSequence >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype(), a4.get_jtype(), a5.get_jtype()
		)
	);
}


cpp_boolean android::text::method::NumberKeyListener::onKeyDown(local_ref< android::view::View > const &a0, local_ref< android::text::Editable > const &a1, cpp_int const &a2, local_ref< android::view::KeyEvent > const &a3)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::text::method::NumberKeyListener,"android/text/method/NumberKeyListener")
J2CPP_DEFINE_METHOD(android::text::method::NumberKeyListener,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::text::method::NumberKeyListener,1,"getAcceptedChars","()[C")
J2CPP_DEFINE_METHOD(android::text::method::NumberKeyListener,2,"lookup","(Landroid/view/KeyEvent;Landroid/text/Spannable;)I")
J2CPP_DEFINE_METHOD(android::text::method::NumberKeyListener,3,"filter","(Ljava/lang/CharSequence;IILandroid/text/Spanned;II)Ljava/lang/CharSequence;")
J2CPP_DEFINE_METHOD(android::text::method::NumberKeyListener,4,"ok","([CC)Z")
J2CPP_DEFINE_METHOD(android::text::method::NumberKeyListener,5,"onKeyDown","(Landroid/view/View;Landroid/text/Editable;ILandroid/view/KeyEvent;)Z")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_METHOD_NUMBERKEYLISTENER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION