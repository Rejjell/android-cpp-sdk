/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.text.method.KeyListener
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_METHOD_KEYLISTENER_HPP_DECL
#define J2CPP_ANDROID_TEXT_METHOD_KEYLISTENER_HPP_DECL


namespace j2cpp { namespace android { namespace view { class View; } } }
namespace j2cpp { namespace android { namespace view { class KeyEvent; } } }
namespace j2cpp { namespace android { namespace text { class Editable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/text/Editable.hpp>
#include <android/view/KeyEvent.hpp>
#include <android/view/View.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace text { namespace method {

	class KeyListener;
	class KeyListener
		: public object<KeyListener>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)

		explicit KeyListener(jobject jobj)
		: object<KeyListener>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		jint getInputType();
		jboolean onKeyDown(local_ref< android::view::View >  const&, local_ref< android::text::Editable >  const&, jint, local_ref< android::view::KeyEvent >  const&);
		jboolean onKeyUp(local_ref< android::view::View >  const&, local_ref< android::text::Editable >  const&, jint, local_ref< android::view::KeyEvent >  const&);
		jboolean onKeyOther(local_ref< android::view::View >  const&, local_ref< android::text::Editable >  const&, local_ref< android::view::KeyEvent >  const&);
		void clearMetaKeyState(local_ref< android::view::View >  const&, local_ref< android::text::Editable >  const&, jint);
	}; //class KeyListener

} //namespace method
} //namespace text
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_METHOD_KEYLISTENER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_METHOD_KEYLISTENER_HPP_IMPL
#define J2CPP_ANDROID_TEXT_METHOD_KEYLISTENER_HPP_IMPL

namespace j2cpp {



android::text::method::KeyListener::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

jint android::text::method::KeyListener::getInputType()
{
	return call_method<
		android::text::method::KeyListener::J2CPP_CLASS_NAME,
		android::text::method::KeyListener::J2CPP_METHOD_NAME(0),
		android::text::method::KeyListener::J2CPP_METHOD_SIGNATURE(0), 
		jint >
	(get_jobject());
}

jboolean android::text::method::KeyListener::onKeyDown(local_ref< android::view::View > const &a0, local_ref< android::text::Editable > const &a1, jint a2, local_ref< android::view::KeyEvent > const &a3)
{
	return call_method<
		android::text::method::KeyListener::J2CPP_CLASS_NAME,
		android::text::method::KeyListener::J2CPP_METHOD_NAME(1),
		android::text::method::KeyListener::J2CPP_METHOD_SIGNATURE(1), 
		jboolean >
	(get_jobject(), a0, a1, a2, a3);
}

jboolean android::text::method::KeyListener::onKeyUp(local_ref< android::view::View > const &a0, local_ref< android::text::Editable > const &a1, jint a2, local_ref< android::view::KeyEvent > const &a3)
{
	return call_method<
		android::text::method::KeyListener::J2CPP_CLASS_NAME,
		android::text::method::KeyListener::J2CPP_METHOD_NAME(2),
		android::text::method::KeyListener::J2CPP_METHOD_SIGNATURE(2), 
		jboolean >
	(get_jobject(), a0, a1, a2, a3);
}

jboolean android::text::method::KeyListener::onKeyOther(local_ref< android::view::View > const &a0, local_ref< android::text::Editable > const &a1, local_ref< android::view::KeyEvent > const &a2)
{
	return call_method<
		android::text::method::KeyListener::J2CPP_CLASS_NAME,
		android::text::method::KeyListener::J2CPP_METHOD_NAME(3),
		android::text::method::KeyListener::J2CPP_METHOD_SIGNATURE(3), 
		jboolean >
	(get_jobject(), a0, a1, a2);
}

void android::text::method::KeyListener::clearMetaKeyState(local_ref< android::view::View > const &a0, local_ref< android::text::Editable > const &a1, jint a2)
{
	return call_method<
		android::text::method::KeyListener::J2CPP_CLASS_NAME,
		android::text::method::KeyListener::J2CPP_METHOD_NAME(4),
		android::text::method::KeyListener::J2CPP_METHOD_SIGNATURE(4), 
		void >
	(get_jobject(), a0, a1, a2);
}


J2CPP_DEFINE_CLASS(android::text::method::KeyListener,"android/text/method/KeyListener")
J2CPP_DEFINE_METHOD(android::text::method::KeyListener,0,"getInputType","()I")
J2CPP_DEFINE_METHOD(android::text::method::KeyListener,1,"onKeyDown","(Landroid/view/View;Landroid/text/Editable;ILandroid/view/KeyEvent;)Z")
J2CPP_DEFINE_METHOD(android::text::method::KeyListener,2,"onKeyUp","(Landroid/view/View;Landroid/text/Editable;ILandroid/view/KeyEvent;)Z")
J2CPP_DEFINE_METHOD(android::text::method::KeyListener,3,"onKeyOther","(Landroid/view/View;Landroid/text/Editable;Landroid/view/KeyEvent;)Z")
J2CPP_DEFINE_METHOD(android::text::method::KeyListener,4,"clearMetaKeyState","(Landroid/view/View;Landroid/text/Editable;I)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_METHOD_KEYLISTENER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION