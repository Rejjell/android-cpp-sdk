/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.text.method.LinkMovementMethod
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_METHOD_LINKMOVEMENTMETHOD_HPP_DECL
#define J2CPP_ANDROID_TEXT_METHOD_LINKMOVEMENTMETHOD_HPP_DECL


namespace j2cpp { namespace android { namespace view { class KeyEvent; } } }
namespace j2cpp { namespace android { namespace view { class MotionEvent; } } }
namespace j2cpp { namespace android { namespace text { class Spannable; } } }
namespace j2cpp { namespace android { namespace text { namespace method { class ScrollingMovementMethod; } } } }
namespace j2cpp { namespace android { namespace text { namespace method { class MovementMethod; } } } }
namespace j2cpp { namespace android { namespace widget { class TextView; } } }


#include <android/text/Spannable.hpp>
#include <android/text/method/MovementMethod.hpp>
#include <android/text/method/ScrollingMovementMethod.hpp>
#include <android/view/KeyEvent.hpp>
#include <android/view/MotionEvent.hpp>
#include <android/widget/TextView.hpp>


namespace j2cpp {

namespace android { namespace text { namespace method {

	class LinkMovementMethod;
	class LinkMovementMethod
		: public object<LinkMovementMethod>
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
		J2CPP_DECLARE_METHOD(8)
		J2CPP_DECLARE_METHOD(9)
		J2CPP_DECLARE_METHOD(10)

		explicit LinkMovementMethod(jobject jobj)
		: object<LinkMovementMethod>(jobj)
		{
		}

		operator local_ref<android::text::method::ScrollingMovementMethod>() const;


		LinkMovementMethod();
		jboolean onKeyDown(local_ref< android::widget::TextView >  const&, local_ref< android::text::Spannable >  const&, jint, local_ref< android::view::KeyEvent >  const&);
		jboolean onKeyUp(local_ref< android::widget::TextView >  const&, local_ref< android::text::Spannable >  const&, jint, local_ref< android::view::KeyEvent >  const&);
		jboolean onTouchEvent(local_ref< android::widget::TextView >  const&, local_ref< android::text::Spannable >  const&, local_ref< android::view::MotionEvent >  const&);
		void initialize(local_ref< android::widget::TextView >  const&, local_ref< android::text::Spannable >  const&);
		void onTakeFocus(local_ref< android::widget::TextView >  const&, local_ref< android::text::Spannable >  const&, jint);
		static local_ref< android::text::method::MovementMethod > getInstance();
	}; //class LinkMovementMethod

} //namespace method
} //namespace text
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_METHOD_LINKMOVEMENTMETHOD_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_METHOD_LINKMOVEMENTMETHOD_HPP_IMPL
#define J2CPP_ANDROID_TEXT_METHOD_LINKMOVEMENTMETHOD_HPP_IMPL

namespace j2cpp {



android::text::method::LinkMovementMethod::operator local_ref<android::text::method::ScrollingMovementMethod>() const
{
	return local_ref<android::text::method::ScrollingMovementMethod>(get_jobject());
}


android::text::method::LinkMovementMethod::LinkMovementMethod()
: object<android::text::method::LinkMovementMethod>(
	call_new_object<
		android::text::method::LinkMovementMethod::J2CPP_CLASS_NAME,
		android::text::method::LinkMovementMethod::J2CPP_METHOD_NAME(0),
		android::text::method::LinkMovementMethod::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}


jboolean android::text::method::LinkMovementMethod::onKeyDown(local_ref< android::widget::TextView > const &a0, local_ref< android::text::Spannable > const &a1, jint a2, local_ref< android::view::KeyEvent > const &a3)
{
	return call_method<
		android::text::method::LinkMovementMethod::J2CPP_CLASS_NAME,
		android::text::method::LinkMovementMethod::J2CPP_METHOD_NAME(1),
		android::text::method::LinkMovementMethod::J2CPP_METHOD_SIGNATURE(1), 
		jboolean >
	(get_jobject(), a0, a1, a2, a3);
}





jboolean android::text::method::LinkMovementMethod::onKeyUp(local_ref< android::widget::TextView > const &a0, local_ref< android::text::Spannable > const &a1, jint a2, local_ref< android::view::KeyEvent > const &a3)
{
	return call_method<
		android::text::method::LinkMovementMethod::J2CPP_CLASS_NAME,
		android::text::method::LinkMovementMethod::J2CPP_METHOD_NAME(6),
		android::text::method::LinkMovementMethod::J2CPP_METHOD_SIGNATURE(6), 
		jboolean >
	(get_jobject(), a0, a1, a2, a3);
}

jboolean android::text::method::LinkMovementMethod::onTouchEvent(local_ref< android::widget::TextView > const &a0, local_ref< android::text::Spannable > const &a1, local_ref< android::view::MotionEvent > const &a2)
{
	return call_method<
		android::text::method::LinkMovementMethod::J2CPP_CLASS_NAME,
		android::text::method::LinkMovementMethod::J2CPP_METHOD_NAME(7),
		android::text::method::LinkMovementMethod::J2CPP_METHOD_SIGNATURE(7), 
		jboolean >
	(get_jobject(), a0, a1, a2);
}

void android::text::method::LinkMovementMethod::initialize(local_ref< android::widget::TextView > const &a0, local_ref< android::text::Spannable > const &a1)
{
	return call_method<
		android::text::method::LinkMovementMethod::J2CPP_CLASS_NAME,
		android::text::method::LinkMovementMethod::J2CPP_METHOD_NAME(8),
		android::text::method::LinkMovementMethod::J2CPP_METHOD_SIGNATURE(8), 
		void >
	(get_jobject(), a0, a1);
}

void android::text::method::LinkMovementMethod::onTakeFocus(local_ref< android::widget::TextView > const &a0, local_ref< android::text::Spannable > const &a1, jint a2)
{
	return call_method<
		android::text::method::LinkMovementMethod::J2CPP_CLASS_NAME,
		android::text::method::LinkMovementMethod::J2CPP_METHOD_NAME(9),
		android::text::method::LinkMovementMethod::J2CPP_METHOD_SIGNATURE(9), 
		void >
	(get_jobject(), a0, a1, a2);
}

local_ref< android::text::method::MovementMethod > android::text::method::LinkMovementMethod::getInstance()
{
	return call_static_method<
		android::text::method::LinkMovementMethod::J2CPP_CLASS_NAME,
		android::text::method::LinkMovementMethod::J2CPP_METHOD_NAME(10),
		android::text::method::LinkMovementMethod::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< android::text::method::MovementMethod > >
	();
}


J2CPP_DEFINE_CLASS(android::text::method::LinkMovementMethod,"android/text/method/LinkMovementMethod")
J2CPP_DEFINE_METHOD(android::text::method::LinkMovementMethod,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::text::method::LinkMovementMethod,1,"onKeyDown","(Landroid/widget/TextView;Landroid/text/Spannable;ILandroid/view/KeyEvent;)Z")
J2CPP_DEFINE_METHOD(android::text::method::LinkMovementMethod,2,"up","(Landroid/widget/TextView;Landroid/text/Spannable;)Z")
J2CPP_DEFINE_METHOD(android::text::method::LinkMovementMethod,3,"down","(Landroid/widget/TextView;Landroid/text/Spannable;)Z")
J2CPP_DEFINE_METHOD(android::text::method::LinkMovementMethod,4,"left","(Landroid/widget/TextView;Landroid/text/Spannable;)Z")
J2CPP_DEFINE_METHOD(android::text::method::LinkMovementMethod,5,"right","(Landroid/widget/TextView;Landroid/text/Spannable;)Z")
J2CPP_DEFINE_METHOD(android::text::method::LinkMovementMethod,6,"onKeyUp","(Landroid/widget/TextView;Landroid/text/Spannable;ILandroid/view/KeyEvent;)Z")
J2CPP_DEFINE_METHOD(android::text::method::LinkMovementMethod,7,"onTouchEvent","(Landroid/widget/TextView;Landroid/text/Spannable;Landroid/view/MotionEvent;)Z")
J2CPP_DEFINE_METHOD(android::text::method::LinkMovementMethod,8,"initialize","(Landroid/widget/TextView;Landroid/text/Spannable;)V")
J2CPP_DEFINE_METHOD(android::text::method::LinkMovementMethod,9,"onTakeFocus","(Landroid/widget/TextView;Landroid/text/Spannable;I)V")
J2CPP_DEFINE_METHOD(android::text::method::LinkMovementMethod,10,"getInstance","()Landroid/text/method/MovementMethod;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_METHOD_LINKMOVEMENTMETHOD_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
