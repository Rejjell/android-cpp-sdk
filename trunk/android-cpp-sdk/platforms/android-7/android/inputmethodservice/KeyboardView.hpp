/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.inputmethodservice.KeyboardView
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_INPUTMETHODSERVICE_KEYBOARDVIEW_HPP_DECL
#define J2CPP_ANDROID_INPUTMETHODSERVICE_KEYBOARDVIEW_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace android { namespace inputmethodservice { class Keyboard; } } }
namespace j2cpp { namespace android { namespace inputmethodservice { namespace KeyboardView_ { class OnKeyboardActionListener; } } } }
namespace j2cpp { namespace android { namespace graphics { class Canvas; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace view { class View; } } }
namespace j2cpp { namespace android { namespace view { class MotionEvent; } } }
namespace j2cpp { namespace android { namespace view { namespace View_ { class OnClickListener; } } } }
namespace j2cpp { namespace android { namespace util { class AttributeSet; } } }


#include <android/content/Context.hpp>
#include <android/graphics/Canvas.hpp>
#include <android/inputmethodservice/Keyboard.hpp>
#include <android/inputmethodservice/KeyboardView.hpp>
#include <android/util/AttributeSet.hpp>
#include <android/view/MotionEvent.hpp>
#include <android/view/View.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace inputmethodservice {

	class KeyboardView;
	namespace KeyboardView_ {

		class OnKeyboardActionListener;
		class OnKeyboardActionListener
			: public object<OnKeyboardActionListener>
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

			explicit OnKeyboardActionListener(jobject jobj)
			: object<OnKeyboardActionListener>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			void onPress(jint);
			void onRelease(jint);
			void onKey(jint, local_ref< array<jint,1> >  const&);
			void onText(local_ref< java::lang::CharSequence >  const&);
			void swipeLeft();
			void swipeRight();
			void swipeDown();
			void swipeUp();
		}; //class OnKeyboardActionListener

	} //namespace KeyboardView_

	class KeyboardView
		: public object<KeyboardView>
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
		J2CPP_DECLARE_METHOD(11)
		J2CPP_DECLARE_METHOD(12)
		J2CPP_DECLARE_METHOD(13)
		J2CPP_DECLARE_METHOD(14)
		J2CPP_DECLARE_METHOD(15)
		J2CPP_DECLARE_METHOD(16)
		J2CPP_DECLARE_METHOD(17)
		J2CPP_DECLARE_METHOD(18)
		J2CPP_DECLARE_METHOD(19)
		J2CPP_DECLARE_METHOD(20)
		J2CPP_DECLARE_METHOD(21)
		J2CPP_DECLARE_METHOD(22)
		J2CPP_DECLARE_METHOD(23)
		J2CPP_DECLARE_METHOD(24)
		J2CPP_DECLARE_METHOD(25)
		J2CPP_DECLARE_METHOD(26)
		J2CPP_DECLARE_METHOD(27)
		J2CPP_DECLARE_METHOD(28)
		J2CPP_DECLARE_METHOD(29)

		typedef KeyboardView_::OnKeyboardActionListener OnKeyboardActionListener;

		explicit KeyboardView(jobject jobj)
		: object<KeyboardView>(jobj)
		{
		}

		operator local_ref<android::view::View>() const;
		operator local_ref<android::view::View_::OnClickListener>() const;


		KeyboardView(local_ref< android::content::Context > const&, local_ref< android::util::AttributeSet > const&);
		KeyboardView(local_ref< android::content::Context > const&, local_ref< android::util::AttributeSet > const&, jint);
		void setOnKeyboardActionListener(local_ref< android::inputmethodservice::KeyboardView_::OnKeyboardActionListener >  const&);
		void setKeyboard(local_ref< android::inputmethodservice::Keyboard >  const&);
		local_ref< android::inputmethodservice::Keyboard > getKeyboard();
		jboolean setShifted(jboolean);
		jboolean isShifted();
		void setPreviewEnabled(jboolean);
		jboolean isPreviewEnabled();
		void setVerticalCorrection(jint);
		void setPopupParent(local_ref< android::view::View >  const&);
		void setPopupOffset(jint, jint);
		void setProximityCorrectionEnabled(jboolean);
		jboolean isProximityCorrectionEnabled();
		void onMeasure(jint, jint);
		void onSizeChanged(jint, jint, jint, jint);
		void onDraw(local_ref< android::graphics::Canvas >  const&);
		void invalidateAllKeys();
		void invalidateKey(jint);
		jboolean onTouchEvent(local_ref< android::view::MotionEvent >  const&);
		void closing();
		void onDetachedFromWindow();
		jboolean handleBack();
		void onClick(local_ref< android::view::View >  const&);
	}; //class KeyboardView

} //namespace inputmethodservice
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_INPUTMETHODSERVICE_KEYBOARDVIEW_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_INPUTMETHODSERVICE_KEYBOARDVIEW_HPP_IMPL
#define J2CPP_ANDROID_INPUTMETHODSERVICE_KEYBOARDVIEW_HPP_IMPL

namespace j2cpp {




android::inputmethodservice::KeyboardView_::OnKeyboardActionListener::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void android::inputmethodservice::KeyboardView_::OnKeyboardActionListener::onPress(jint a0)
{
	return call_method<
		android::inputmethodservice::KeyboardView_::OnKeyboardActionListener::J2CPP_CLASS_NAME,
		android::inputmethodservice::KeyboardView_::OnKeyboardActionListener::J2CPP_METHOD_NAME(0),
		android::inputmethodservice::KeyboardView_::OnKeyboardActionListener::J2CPP_METHOD_SIGNATURE(0), 
		void >
	(get_jobject(), a0);
}

void android::inputmethodservice::KeyboardView_::OnKeyboardActionListener::onRelease(jint a0)
{
	return call_method<
		android::inputmethodservice::KeyboardView_::OnKeyboardActionListener::J2CPP_CLASS_NAME,
		android::inputmethodservice::KeyboardView_::OnKeyboardActionListener::J2CPP_METHOD_NAME(1),
		android::inputmethodservice::KeyboardView_::OnKeyboardActionListener::J2CPP_METHOD_SIGNATURE(1), 
		void >
	(get_jobject(), a0);
}

void android::inputmethodservice::KeyboardView_::OnKeyboardActionListener::onKey(jint a0, local_ref< array<jint,1> > const &a1)
{
	return call_method<
		android::inputmethodservice::KeyboardView_::OnKeyboardActionListener::J2CPP_CLASS_NAME,
		android::inputmethodservice::KeyboardView_::OnKeyboardActionListener::J2CPP_METHOD_NAME(2),
		android::inputmethodservice::KeyboardView_::OnKeyboardActionListener::J2CPP_METHOD_SIGNATURE(2), 
		void >
	(get_jobject(), a0, a1);
}

void android::inputmethodservice::KeyboardView_::OnKeyboardActionListener::onText(local_ref< java::lang::CharSequence > const &a0)
{
	return call_method<
		android::inputmethodservice::KeyboardView_::OnKeyboardActionListener::J2CPP_CLASS_NAME,
		android::inputmethodservice::KeyboardView_::OnKeyboardActionListener::J2CPP_METHOD_NAME(3),
		android::inputmethodservice::KeyboardView_::OnKeyboardActionListener::J2CPP_METHOD_SIGNATURE(3), 
		void >
	(get_jobject(), a0);
}

void android::inputmethodservice::KeyboardView_::OnKeyboardActionListener::swipeLeft()
{
	return call_method<
		android::inputmethodservice::KeyboardView_::OnKeyboardActionListener::J2CPP_CLASS_NAME,
		android::inputmethodservice::KeyboardView_::OnKeyboardActionListener::J2CPP_METHOD_NAME(4),
		android::inputmethodservice::KeyboardView_::OnKeyboardActionListener::J2CPP_METHOD_SIGNATURE(4), 
		void >
	(get_jobject());
}

void android::inputmethodservice::KeyboardView_::OnKeyboardActionListener::swipeRight()
{
	return call_method<
		android::inputmethodservice::KeyboardView_::OnKeyboardActionListener::J2CPP_CLASS_NAME,
		android::inputmethodservice::KeyboardView_::OnKeyboardActionListener::J2CPP_METHOD_NAME(5),
		android::inputmethodservice::KeyboardView_::OnKeyboardActionListener::J2CPP_METHOD_SIGNATURE(5), 
		void >
	(get_jobject());
}

void android::inputmethodservice::KeyboardView_::OnKeyboardActionListener::swipeDown()
{
	return call_method<
		android::inputmethodservice::KeyboardView_::OnKeyboardActionListener::J2CPP_CLASS_NAME,
		android::inputmethodservice::KeyboardView_::OnKeyboardActionListener::J2CPP_METHOD_NAME(6),
		android::inputmethodservice::KeyboardView_::OnKeyboardActionListener::J2CPP_METHOD_SIGNATURE(6), 
		void >
	(get_jobject());
}

void android::inputmethodservice::KeyboardView_::OnKeyboardActionListener::swipeUp()
{
	return call_method<
		android::inputmethodservice::KeyboardView_::OnKeyboardActionListener::J2CPP_CLASS_NAME,
		android::inputmethodservice::KeyboardView_::OnKeyboardActionListener::J2CPP_METHOD_NAME(7),
		android::inputmethodservice::KeyboardView_::OnKeyboardActionListener::J2CPP_METHOD_SIGNATURE(7), 
		void >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(android::inputmethodservice::KeyboardView_::OnKeyboardActionListener,"android/inputmethodservice/KeyboardView$OnKeyboardActionListener")
J2CPP_DEFINE_METHOD(android::inputmethodservice::KeyboardView_::OnKeyboardActionListener,0,"onPress","(I)V")
J2CPP_DEFINE_METHOD(android::inputmethodservice::KeyboardView_::OnKeyboardActionListener,1,"onRelease","(I)V")
J2CPP_DEFINE_METHOD(android::inputmethodservice::KeyboardView_::OnKeyboardActionListener,2,"onKey","(I[I)V")
J2CPP_DEFINE_METHOD(android::inputmethodservice::KeyboardView_::OnKeyboardActionListener,3,"onText","(Ljava/lang/CharSequence;)V")
J2CPP_DEFINE_METHOD(android::inputmethodservice::KeyboardView_::OnKeyboardActionListener,4,"swipeLeft","()V")
J2CPP_DEFINE_METHOD(android::inputmethodservice::KeyboardView_::OnKeyboardActionListener,5,"swipeRight","()V")
J2CPP_DEFINE_METHOD(android::inputmethodservice::KeyboardView_::OnKeyboardActionListener,6,"swipeDown","()V")
J2CPP_DEFINE_METHOD(android::inputmethodservice::KeyboardView_::OnKeyboardActionListener,7,"swipeUp","()V")



android::inputmethodservice::KeyboardView::operator local_ref<android::view::View>() const
{
	return local_ref<android::view::View>(get_jobject());
}

android::inputmethodservice::KeyboardView::operator local_ref<android::view::View_::OnClickListener>() const
{
	return local_ref<android::view::View_::OnClickListener>(get_jobject());
}


android::inputmethodservice::KeyboardView::KeyboardView(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1)
: object<android::inputmethodservice::KeyboardView>(
	call_new_object<
		android::inputmethodservice::KeyboardView::J2CPP_CLASS_NAME,
		android::inputmethodservice::KeyboardView::J2CPP_METHOD_NAME(0),
		android::inputmethodservice::KeyboardView::J2CPP_METHOD_SIGNATURE(0)>
	(a0, a1)
)
{
}



android::inputmethodservice::KeyboardView::KeyboardView(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1, jint a2)
: object<android::inputmethodservice::KeyboardView>(
	call_new_object<
		android::inputmethodservice::KeyboardView::J2CPP_CLASS_NAME,
		android::inputmethodservice::KeyboardView::J2CPP_METHOD_NAME(1),
		android::inputmethodservice::KeyboardView::J2CPP_METHOD_SIGNATURE(1)>
	(a0, a1, a2)
)
{
}


void android::inputmethodservice::KeyboardView::setOnKeyboardActionListener(local_ref< android::inputmethodservice::KeyboardView_::OnKeyboardActionListener > const &a0)
{
	return call_method<
		android::inputmethodservice::KeyboardView::J2CPP_CLASS_NAME,
		android::inputmethodservice::KeyboardView::J2CPP_METHOD_NAME(2),
		android::inputmethodservice::KeyboardView::J2CPP_METHOD_SIGNATURE(2), 
		void >
	(get_jobject(), a0);
}


void android::inputmethodservice::KeyboardView::setKeyboard(local_ref< android::inputmethodservice::Keyboard > const &a0)
{
	return call_method<
		android::inputmethodservice::KeyboardView::J2CPP_CLASS_NAME,
		android::inputmethodservice::KeyboardView::J2CPP_METHOD_NAME(4),
		android::inputmethodservice::KeyboardView::J2CPP_METHOD_SIGNATURE(4), 
		void >
	(get_jobject(), a0);
}

local_ref< android::inputmethodservice::Keyboard > android::inputmethodservice::KeyboardView::getKeyboard()
{
	return call_method<
		android::inputmethodservice::KeyboardView::J2CPP_CLASS_NAME,
		android::inputmethodservice::KeyboardView::J2CPP_METHOD_NAME(5),
		android::inputmethodservice::KeyboardView::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< android::inputmethodservice::Keyboard > >
	(get_jobject());
}

jboolean android::inputmethodservice::KeyboardView::setShifted(jboolean a0)
{
	return call_method<
		android::inputmethodservice::KeyboardView::J2CPP_CLASS_NAME,
		android::inputmethodservice::KeyboardView::J2CPP_METHOD_NAME(6),
		android::inputmethodservice::KeyboardView::J2CPP_METHOD_SIGNATURE(6), 
		jboolean >
	(get_jobject(), a0);
}

jboolean android::inputmethodservice::KeyboardView::isShifted()
{
	return call_method<
		android::inputmethodservice::KeyboardView::J2CPP_CLASS_NAME,
		android::inputmethodservice::KeyboardView::J2CPP_METHOD_NAME(7),
		android::inputmethodservice::KeyboardView::J2CPP_METHOD_SIGNATURE(7), 
		jboolean >
	(get_jobject());
}

void android::inputmethodservice::KeyboardView::setPreviewEnabled(jboolean a0)
{
	return call_method<
		android::inputmethodservice::KeyboardView::J2CPP_CLASS_NAME,
		android::inputmethodservice::KeyboardView::J2CPP_METHOD_NAME(8),
		android::inputmethodservice::KeyboardView::J2CPP_METHOD_SIGNATURE(8), 
		void >
	(get_jobject(), a0);
}

jboolean android::inputmethodservice::KeyboardView::isPreviewEnabled()
{
	return call_method<
		android::inputmethodservice::KeyboardView::J2CPP_CLASS_NAME,
		android::inputmethodservice::KeyboardView::J2CPP_METHOD_NAME(9),
		android::inputmethodservice::KeyboardView::J2CPP_METHOD_SIGNATURE(9), 
		jboolean >
	(get_jobject());
}

void android::inputmethodservice::KeyboardView::setVerticalCorrection(jint a0)
{
	return call_method<
		android::inputmethodservice::KeyboardView::J2CPP_CLASS_NAME,
		android::inputmethodservice::KeyboardView::J2CPP_METHOD_NAME(10),
		android::inputmethodservice::KeyboardView::J2CPP_METHOD_SIGNATURE(10), 
		void >
	(get_jobject(), a0);
}

void android::inputmethodservice::KeyboardView::setPopupParent(local_ref< android::view::View > const &a0)
{
	return call_method<
		android::inputmethodservice::KeyboardView::J2CPP_CLASS_NAME,
		android::inputmethodservice::KeyboardView::J2CPP_METHOD_NAME(11),
		android::inputmethodservice::KeyboardView::J2CPP_METHOD_SIGNATURE(11), 
		void >
	(get_jobject(), a0);
}

void android::inputmethodservice::KeyboardView::setPopupOffset(jint a0, jint a1)
{
	return call_method<
		android::inputmethodservice::KeyboardView::J2CPP_CLASS_NAME,
		android::inputmethodservice::KeyboardView::J2CPP_METHOD_NAME(12),
		android::inputmethodservice::KeyboardView::J2CPP_METHOD_SIGNATURE(12), 
		void >
	(get_jobject(), a0, a1);
}

void android::inputmethodservice::KeyboardView::setProximityCorrectionEnabled(jboolean a0)
{
	return call_method<
		android::inputmethodservice::KeyboardView::J2CPP_CLASS_NAME,
		android::inputmethodservice::KeyboardView::J2CPP_METHOD_NAME(13),
		android::inputmethodservice::KeyboardView::J2CPP_METHOD_SIGNATURE(13), 
		void >
	(get_jobject(), a0);
}

jboolean android::inputmethodservice::KeyboardView::isProximityCorrectionEnabled()
{
	return call_method<
		android::inputmethodservice::KeyboardView::J2CPP_CLASS_NAME,
		android::inputmethodservice::KeyboardView::J2CPP_METHOD_NAME(14),
		android::inputmethodservice::KeyboardView::J2CPP_METHOD_SIGNATURE(14), 
		jboolean >
	(get_jobject());
}

void android::inputmethodservice::KeyboardView::onMeasure(jint a0, jint a1)
{
	return call_method<
		android::inputmethodservice::KeyboardView::J2CPP_CLASS_NAME,
		android::inputmethodservice::KeyboardView::J2CPP_METHOD_NAME(15),
		android::inputmethodservice::KeyboardView::J2CPP_METHOD_SIGNATURE(15), 
		void >
	(get_jobject(), a0, a1);
}

void android::inputmethodservice::KeyboardView::onSizeChanged(jint a0, jint a1, jint a2, jint a3)
{
	return call_method<
		android::inputmethodservice::KeyboardView::J2CPP_CLASS_NAME,
		android::inputmethodservice::KeyboardView::J2CPP_METHOD_NAME(16),
		android::inputmethodservice::KeyboardView::J2CPP_METHOD_SIGNATURE(16), 
		void >
	(get_jobject(), a0, a1, a2, a3);
}

void android::inputmethodservice::KeyboardView::onDraw(local_ref< android::graphics::Canvas > const &a0)
{
	return call_method<
		android::inputmethodservice::KeyboardView::J2CPP_CLASS_NAME,
		android::inputmethodservice::KeyboardView::J2CPP_METHOD_NAME(17),
		android::inputmethodservice::KeyboardView::J2CPP_METHOD_SIGNATURE(17), 
		void >
	(get_jobject(), a0);
}

void android::inputmethodservice::KeyboardView::invalidateAllKeys()
{
	return call_method<
		android::inputmethodservice::KeyboardView::J2CPP_CLASS_NAME,
		android::inputmethodservice::KeyboardView::J2CPP_METHOD_NAME(18),
		android::inputmethodservice::KeyboardView::J2CPP_METHOD_SIGNATURE(18), 
		void >
	(get_jobject());
}

void android::inputmethodservice::KeyboardView::invalidateKey(jint a0)
{
	return call_method<
		android::inputmethodservice::KeyboardView::J2CPP_CLASS_NAME,
		android::inputmethodservice::KeyboardView::J2CPP_METHOD_NAME(19),
		android::inputmethodservice::KeyboardView::J2CPP_METHOD_SIGNATURE(19), 
		void >
	(get_jobject(), a0);
}


jboolean android::inputmethodservice::KeyboardView::onTouchEvent(local_ref< android::view::MotionEvent > const &a0)
{
	return call_method<
		android::inputmethodservice::KeyboardView::J2CPP_CLASS_NAME,
		android::inputmethodservice::KeyboardView::J2CPP_METHOD_NAME(21),
		android::inputmethodservice::KeyboardView::J2CPP_METHOD_SIGNATURE(21), 
		jboolean >
	(get_jobject(), a0);
}





void android::inputmethodservice::KeyboardView::closing()
{
	return call_method<
		android::inputmethodservice::KeyboardView::J2CPP_CLASS_NAME,
		android::inputmethodservice::KeyboardView::J2CPP_METHOD_NAME(26),
		android::inputmethodservice::KeyboardView::J2CPP_METHOD_SIGNATURE(26), 
		void >
	(get_jobject());
}

void android::inputmethodservice::KeyboardView::onDetachedFromWindow()
{
	return call_method<
		android::inputmethodservice::KeyboardView::J2CPP_CLASS_NAME,
		android::inputmethodservice::KeyboardView::J2CPP_METHOD_NAME(27),
		android::inputmethodservice::KeyboardView::J2CPP_METHOD_SIGNATURE(27), 
		void >
	(get_jobject());
}

jboolean android::inputmethodservice::KeyboardView::handleBack()
{
	return call_method<
		android::inputmethodservice::KeyboardView::J2CPP_CLASS_NAME,
		android::inputmethodservice::KeyboardView::J2CPP_METHOD_NAME(28),
		android::inputmethodservice::KeyboardView::J2CPP_METHOD_SIGNATURE(28), 
		jboolean >
	(get_jobject());
}

void android::inputmethodservice::KeyboardView::onClick(local_ref< android::view::View > const &a0)
{
	return call_method<
		android::inputmethodservice::KeyboardView::J2CPP_CLASS_NAME,
		android::inputmethodservice::KeyboardView::J2CPP_METHOD_NAME(29),
		android::inputmethodservice::KeyboardView::J2CPP_METHOD_SIGNATURE(29), 
		void >
	(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(android::inputmethodservice::KeyboardView,"android/inputmethodservice/KeyboardView")
J2CPP_DEFINE_METHOD(android::inputmethodservice::KeyboardView,0,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;)V")
J2CPP_DEFINE_METHOD(android::inputmethodservice::KeyboardView,1,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;I)V")
J2CPP_DEFINE_METHOD(android::inputmethodservice::KeyboardView,2,"setOnKeyboardActionListener","(Landroid/inputmethodservice/KeyboardView$OnKeyboardActionListener;)V")
J2CPP_DEFINE_METHOD(android::inputmethodservice::KeyboardView,3,"getOnKeyboardActionListener","()Landroid/inputmethodservice/KeyboardView$OnKeyboardActionListener;")
J2CPP_DEFINE_METHOD(android::inputmethodservice::KeyboardView,4,"setKeyboard","(Landroid/inputmethodservice/Keyboard;)V")
J2CPP_DEFINE_METHOD(android::inputmethodservice::KeyboardView,5,"getKeyboard","()Landroid/inputmethodservice/Keyboard;")
J2CPP_DEFINE_METHOD(android::inputmethodservice::KeyboardView,6,"setShifted","(Z)Z")
J2CPP_DEFINE_METHOD(android::inputmethodservice::KeyboardView,7,"isShifted","()Z")
J2CPP_DEFINE_METHOD(android::inputmethodservice::KeyboardView,8,"setPreviewEnabled","(Z)V")
J2CPP_DEFINE_METHOD(android::inputmethodservice::KeyboardView,9,"isPreviewEnabled","()Z")
J2CPP_DEFINE_METHOD(android::inputmethodservice::KeyboardView,10,"setVerticalCorrection","(I)V")
J2CPP_DEFINE_METHOD(android::inputmethodservice::KeyboardView,11,"setPopupParent","(Landroid/view/View;)V")
J2CPP_DEFINE_METHOD(android::inputmethodservice::KeyboardView,12,"setPopupOffset","(II)V")
J2CPP_DEFINE_METHOD(android::inputmethodservice::KeyboardView,13,"setProximityCorrectionEnabled","(Z)V")
J2CPP_DEFINE_METHOD(android::inputmethodservice::KeyboardView,14,"isProximityCorrectionEnabled","()Z")
J2CPP_DEFINE_METHOD(android::inputmethodservice::KeyboardView,15,"onMeasure","(II)V")
J2CPP_DEFINE_METHOD(android::inputmethodservice::KeyboardView,16,"onSizeChanged","(IIII)V")
J2CPP_DEFINE_METHOD(android::inputmethodservice::KeyboardView,17,"onDraw","(Landroid/graphics/Canvas;)V")
J2CPP_DEFINE_METHOD(android::inputmethodservice::KeyboardView,18,"invalidateAllKeys","()V")
J2CPP_DEFINE_METHOD(android::inputmethodservice::KeyboardView,19,"invalidateKey","(I)V")
J2CPP_DEFINE_METHOD(android::inputmethodservice::KeyboardView,20,"onLongPress","(Landroid/inputmethodservice/Keyboard$Key;)Z")
J2CPP_DEFINE_METHOD(android::inputmethodservice::KeyboardView,21,"onTouchEvent","(Landroid/view/MotionEvent;)Z")
J2CPP_DEFINE_METHOD(android::inputmethodservice::KeyboardView,22,"swipeRight","()V")
J2CPP_DEFINE_METHOD(android::inputmethodservice::KeyboardView,23,"swipeLeft","()V")
J2CPP_DEFINE_METHOD(android::inputmethodservice::KeyboardView,24,"swipeUp","()V")
J2CPP_DEFINE_METHOD(android::inputmethodservice::KeyboardView,25,"swipeDown","()V")
J2CPP_DEFINE_METHOD(android::inputmethodservice::KeyboardView,26,"closing","()V")
J2CPP_DEFINE_METHOD(android::inputmethodservice::KeyboardView,27,"onDetachedFromWindow","()V")
J2CPP_DEFINE_METHOD(android::inputmethodservice::KeyboardView,28,"handleBack","()Z")
J2CPP_DEFINE_METHOD(android::inputmethodservice::KeyboardView,29,"onClick","(Landroid/view/View;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_INPUTMETHODSERVICE_KEYBOARDVIEW_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
