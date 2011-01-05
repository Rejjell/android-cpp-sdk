/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.widget.PopupWindow
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_POPUPWINDOW_HPP_DECL
#define J2CPP_ANDROID_WIDGET_POPUPWINDOW_HPP_DECL


namespace j2cpp { namespace android { namespace widget { namespace PopupWindow_ { class OnDismissListener; } } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace util { class AttributeSet; } } }
namespace j2cpp { namespace android { namespace view { class View; } } }
namespace j2cpp { namespace android { namespace view { namespace View_ { class OnTouchListener; } } } }
namespace j2cpp { namespace android { namespace graphics { namespace drawable { class Drawable; } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/content/Context.hpp>
#include <android/graphics/drawable/Drawable.hpp>
#include <android/util/AttributeSet.hpp>
#include <android/view/View.hpp>
#include <android/widget/PopupWindow.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace widget {

	class PopupWindow;
	namespace PopupWindow_ {

		class OnDismissListener;
		class OnDismissListener
			: public object<OnDismissListener>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			explicit OnDismissListener(jobject jobj)
			: object<OnDismissListener>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			void onDismiss();
		}; //class OnDismissListener

	} //namespace PopupWindow_

	class PopupWindow
		: public object<PopupWindow>
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
		J2CPP_DECLARE_METHOD(30)
		J2CPP_DECLARE_METHOD(31)
		J2CPP_DECLARE_METHOD(32)
		J2CPP_DECLARE_METHOD(33)
		J2CPP_DECLARE_METHOD(34)
		J2CPP_DECLARE_METHOD(35)
		J2CPP_DECLARE_METHOD(36)
		J2CPP_DECLARE_METHOD(37)
		J2CPP_DECLARE_METHOD(38)
		J2CPP_DECLARE_METHOD(39)
		J2CPP_DECLARE_METHOD(40)
		J2CPP_DECLARE_METHOD(41)
		J2CPP_DECLARE_METHOD(42)
		J2CPP_DECLARE_METHOD(43)
		J2CPP_DECLARE_METHOD(44)
		J2CPP_DECLARE_METHOD(45)
		J2CPP_DECLARE_METHOD(46)
		J2CPP_DECLARE_METHOD(47)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)

		typedef PopupWindow_::OnDismissListener OnDismissListener;

		explicit PopupWindow(jobject jobj)
		: object<PopupWindow>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		PopupWindow(local_ref< android::content::Context > const&);
		PopupWindow(local_ref< android::content::Context > const&, local_ref< android::util::AttributeSet > const&);
		PopupWindow(local_ref< android::content::Context > const&, local_ref< android::util::AttributeSet > const&, jint);
		PopupWindow();
		PopupWindow(local_ref< android::view::View > const&);
		PopupWindow(jint, jint);
		PopupWindow(local_ref< android::view::View > const&, jint, jint);
		PopupWindow(local_ref< android::view::View > const&, jint, jint, jboolean);
		local_ref< android::graphics::drawable::Drawable > getBackground();
		void setBackgroundDrawable(local_ref< android::graphics::drawable::Drawable >  const&);
		jint getAnimationStyle();
		void setIgnoreCheekPress();
		void setAnimationStyle(jint);
		local_ref< android::view::View > getContentView();
		void setContentView(local_ref< android::view::View >  const&);
		void setTouchInterceptor(local_ref< android::view::View_::OnTouchListener >  const&);
		jboolean isFocusable();
		void setFocusable(jboolean);
		jint getInputMethodMode();
		void setInputMethodMode(jint);
		void setSoftInputMode(jint);
		jint getSoftInputMode();
		jboolean isTouchable();
		void setTouchable(jboolean);
		jboolean isOutsideTouchable();
		void setOutsideTouchable(jboolean);
		jboolean isClippingEnabled();
		void setClippingEnabled(jboolean);
		void setWindowLayoutMode(jint, jint);
		jint getHeight();
		void setHeight(jint);
		jint getWidth();
		void setWidth(jint);
		jboolean isShowing();
		void showAtLocation(local_ref< android::view::View >  const&, jint, jint, jint);
		void showAsDropDown(local_ref< android::view::View >  const&);
		void showAsDropDown(local_ref< android::view::View >  const&, jint, jint);
		jboolean isAboveAnchor();
		jint getMaxAvailableHeight(local_ref< android::view::View >  const&);
		jint getMaxAvailableHeight(local_ref< android::view::View >  const&, jint);
		void dismiss();
		void setOnDismissListener(local_ref< android::widget::PopupWindow_::OnDismissListener >  const&);
		void update();
		void update(jint, jint);
		void update(jint, jint, jint, jint);
		void update(jint, jint, jint, jint, jboolean);
		void update(local_ref< android::view::View >  const&, jint, jint);
		void update(local_ref< android::view::View >  const&, jint, jint, jint, jint);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > INPUT_METHOD_FROM_FOCUSABLE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > INPUT_METHOD_NEEDED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jint > INPUT_METHOD_NOT_NEEDED;
	}; //class PopupWindow

} //namespace widget
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_POPUPWINDOW_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_POPUPWINDOW_HPP_IMPL
#define J2CPP_ANDROID_WIDGET_POPUPWINDOW_HPP_IMPL

namespace j2cpp {




android::widget::PopupWindow_::OnDismissListener::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void android::widget::PopupWindow_::OnDismissListener::onDismiss()
{
	return call_method<
		android::widget::PopupWindow_::OnDismissListener::J2CPP_CLASS_NAME,
		android::widget::PopupWindow_::OnDismissListener::J2CPP_METHOD_NAME(0),
		android::widget::PopupWindow_::OnDismissListener::J2CPP_METHOD_SIGNATURE(0), 
		void
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(android::widget::PopupWindow_::OnDismissListener,"android/widget/PopupWindow$OnDismissListener")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow_::OnDismissListener,0,"onDismiss","()V")



android::widget::PopupWindow::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::widget::PopupWindow::PopupWindow(local_ref< android::content::Context > const &a0)
: object<android::widget::PopupWindow>(
	call_new_object<
		android::widget::PopupWindow::J2CPP_CLASS_NAME,
		android::widget::PopupWindow::J2CPP_METHOD_NAME(0),
		android::widget::PopupWindow::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}



android::widget::PopupWindow::PopupWindow(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1)
: object<android::widget::PopupWindow>(
	call_new_object<
		android::widget::PopupWindow::J2CPP_CLASS_NAME,
		android::widget::PopupWindow::J2CPP_METHOD_NAME(1),
		android::widget::PopupWindow::J2CPP_METHOD_SIGNATURE(1)
	>(a0, a1)
)
{
}



android::widget::PopupWindow::PopupWindow(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1, jint a2)
: object<android::widget::PopupWindow>(
	call_new_object<
		android::widget::PopupWindow::J2CPP_CLASS_NAME,
		android::widget::PopupWindow::J2CPP_METHOD_NAME(2),
		android::widget::PopupWindow::J2CPP_METHOD_SIGNATURE(2)
	>(a0, a1, a2)
)
{
}



android::widget::PopupWindow::PopupWindow()
: object<android::widget::PopupWindow>(
	call_new_object<
		android::widget::PopupWindow::J2CPP_CLASS_NAME,
		android::widget::PopupWindow::J2CPP_METHOD_NAME(3),
		android::widget::PopupWindow::J2CPP_METHOD_SIGNATURE(3)
	>()
)
{
}



android::widget::PopupWindow::PopupWindow(local_ref< android::view::View > const &a0)
: object<android::widget::PopupWindow>(
	call_new_object<
		android::widget::PopupWindow::J2CPP_CLASS_NAME,
		android::widget::PopupWindow::J2CPP_METHOD_NAME(4),
		android::widget::PopupWindow::J2CPP_METHOD_SIGNATURE(4)
	>(a0)
)
{
}



android::widget::PopupWindow::PopupWindow(jint a0, jint a1)
: object<android::widget::PopupWindow>(
	call_new_object<
		android::widget::PopupWindow::J2CPP_CLASS_NAME,
		android::widget::PopupWindow::J2CPP_METHOD_NAME(5),
		android::widget::PopupWindow::J2CPP_METHOD_SIGNATURE(5)
	>(a0, a1)
)
{
}



android::widget::PopupWindow::PopupWindow(local_ref< android::view::View > const &a0, jint a1, jint a2)
: object<android::widget::PopupWindow>(
	call_new_object<
		android::widget::PopupWindow::J2CPP_CLASS_NAME,
		android::widget::PopupWindow::J2CPP_METHOD_NAME(6),
		android::widget::PopupWindow::J2CPP_METHOD_SIGNATURE(6)
	>(a0, a1, a2)
)
{
}



android::widget::PopupWindow::PopupWindow(local_ref< android::view::View > const &a0, jint a1, jint a2, jboolean a3)
: object<android::widget::PopupWindow>(
	call_new_object<
		android::widget::PopupWindow::J2CPP_CLASS_NAME,
		android::widget::PopupWindow::J2CPP_METHOD_NAME(7),
		android::widget::PopupWindow::J2CPP_METHOD_SIGNATURE(7)
	>(a0, a1, a2, a3)
)
{
}


local_ref< android::graphics::drawable::Drawable > android::widget::PopupWindow::getBackground()
{
	return call_method<
		android::widget::PopupWindow::J2CPP_CLASS_NAME,
		android::widget::PopupWindow::J2CPP_METHOD_NAME(8),
		android::widget::PopupWindow::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< android::graphics::drawable::Drawable >
	>(get_jobject());
}

void android::widget::PopupWindow::setBackgroundDrawable(local_ref< android::graphics::drawable::Drawable > const &a0)
{
	return call_method<
		android::widget::PopupWindow::J2CPP_CLASS_NAME,
		android::widget::PopupWindow::J2CPP_METHOD_NAME(9),
		android::widget::PopupWindow::J2CPP_METHOD_SIGNATURE(9), 
		void
	>(get_jobject(), a0);
}

jint android::widget::PopupWindow::getAnimationStyle()
{
	return call_method<
		android::widget::PopupWindow::J2CPP_CLASS_NAME,
		android::widget::PopupWindow::J2CPP_METHOD_NAME(10),
		android::widget::PopupWindow::J2CPP_METHOD_SIGNATURE(10), 
		jint
	>(get_jobject());
}

void android::widget::PopupWindow::setIgnoreCheekPress()
{
	return call_method<
		android::widget::PopupWindow::J2CPP_CLASS_NAME,
		android::widget::PopupWindow::J2CPP_METHOD_NAME(11),
		android::widget::PopupWindow::J2CPP_METHOD_SIGNATURE(11), 
		void
	>(get_jobject());
}

void android::widget::PopupWindow::setAnimationStyle(jint a0)
{
	return call_method<
		android::widget::PopupWindow::J2CPP_CLASS_NAME,
		android::widget::PopupWindow::J2CPP_METHOD_NAME(12),
		android::widget::PopupWindow::J2CPP_METHOD_SIGNATURE(12), 
		void
	>(get_jobject(), a0);
}

local_ref< android::view::View > android::widget::PopupWindow::getContentView()
{
	return call_method<
		android::widget::PopupWindow::J2CPP_CLASS_NAME,
		android::widget::PopupWindow::J2CPP_METHOD_NAME(13),
		android::widget::PopupWindow::J2CPP_METHOD_SIGNATURE(13), 
		local_ref< android::view::View >
	>(get_jobject());
}

void android::widget::PopupWindow::setContentView(local_ref< android::view::View > const &a0)
{
	return call_method<
		android::widget::PopupWindow::J2CPP_CLASS_NAME,
		android::widget::PopupWindow::J2CPP_METHOD_NAME(14),
		android::widget::PopupWindow::J2CPP_METHOD_SIGNATURE(14), 
		void
	>(get_jobject(), a0);
}

void android::widget::PopupWindow::setTouchInterceptor(local_ref< android::view::View_::OnTouchListener > const &a0)
{
	return call_method<
		android::widget::PopupWindow::J2CPP_CLASS_NAME,
		android::widget::PopupWindow::J2CPP_METHOD_NAME(15),
		android::widget::PopupWindow::J2CPP_METHOD_SIGNATURE(15), 
		void
	>(get_jobject(), a0);
}

jboolean android::widget::PopupWindow::isFocusable()
{
	return call_method<
		android::widget::PopupWindow::J2CPP_CLASS_NAME,
		android::widget::PopupWindow::J2CPP_METHOD_NAME(16),
		android::widget::PopupWindow::J2CPP_METHOD_SIGNATURE(16), 
		jboolean
	>(get_jobject());
}

void android::widget::PopupWindow::setFocusable(jboolean a0)
{
	return call_method<
		android::widget::PopupWindow::J2CPP_CLASS_NAME,
		android::widget::PopupWindow::J2CPP_METHOD_NAME(17),
		android::widget::PopupWindow::J2CPP_METHOD_SIGNATURE(17), 
		void
	>(get_jobject(), a0);
}

jint android::widget::PopupWindow::getInputMethodMode()
{
	return call_method<
		android::widget::PopupWindow::J2CPP_CLASS_NAME,
		android::widget::PopupWindow::J2CPP_METHOD_NAME(18),
		android::widget::PopupWindow::J2CPP_METHOD_SIGNATURE(18), 
		jint
	>(get_jobject());
}

void android::widget::PopupWindow::setInputMethodMode(jint a0)
{
	return call_method<
		android::widget::PopupWindow::J2CPP_CLASS_NAME,
		android::widget::PopupWindow::J2CPP_METHOD_NAME(19),
		android::widget::PopupWindow::J2CPP_METHOD_SIGNATURE(19), 
		void
	>(get_jobject(), a0);
}

void android::widget::PopupWindow::setSoftInputMode(jint a0)
{
	return call_method<
		android::widget::PopupWindow::J2CPP_CLASS_NAME,
		android::widget::PopupWindow::J2CPP_METHOD_NAME(20),
		android::widget::PopupWindow::J2CPP_METHOD_SIGNATURE(20), 
		void
	>(get_jobject(), a0);
}

jint android::widget::PopupWindow::getSoftInputMode()
{
	return call_method<
		android::widget::PopupWindow::J2CPP_CLASS_NAME,
		android::widget::PopupWindow::J2CPP_METHOD_NAME(21),
		android::widget::PopupWindow::J2CPP_METHOD_SIGNATURE(21), 
		jint
	>(get_jobject());
}

jboolean android::widget::PopupWindow::isTouchable()
{
	return call_method<
		android::widget::PopupWindow::J2CPP_CLASS_NAME,
		android::widget::PopupWindow::J2CPP_METHOD_NAME(22),
		android::widget::PopupWindow::J2CPP_METHOD_SIGNATURE(22), 
		jboolean
	>(get_jobject());
}

void android::widget::PopupWindow::setTouchable(jboolean a0)
{
	return call_method<
		android::widget::PopupWindow::J2CPP_CLASS_NAME,
		android::widget::PopupWindow::J2CPP_METHOD_NAME(23),
		android::widget::PopupWindow::J2CPP_METHOD_SIGNATURE(23), 
		void
	>(get_jobject(), a0);
}

jboolean android::widget::PopupWindow::isOutsideTouchable()
{
	return call_method<
		android::widget::PopupWindow::J2CPP_CLASS_NAME,
		android::widget::PopupWindow::J2CPP_METHOD_NAME(24),
		android::widget::PopupWindow::J2CPP_METHOD_SIGNATURE(24), 
		jboolean
	>(get_jobject());
}

void android::widget::PopupWindow::setOutsideTouchable(jboolean a0)
{
	return call_method<
		android::widget::PopupWindow::J2CPP_CLASS_NAME,
		android::widget::PopupWindow::J2CPP_METHOD_NAME(25),
		android::widget::PopupWindow::J2CPP_METHOD_SIGNATURE(25), 
		void
	>(get_jobject(), a0);
}

jboolean android::widget::PopupWindow::isClippingEnabled()
{
	return call_method<
		android::widget::PopupWindow::J2CPP_CLASS_NAME,
		android::widget::PopupWindow::J2CPP_METHOD_NAME(26),
		android::widget::PopupWindow::J2CPP_METHOD_SIGNATURE(26), 
		jboolean
	>(get_jobject());
}

void android::widget::PopupWindow::setClippingEnabled(jboolean a0)
{
	return call_method<
		android::widget::PopupWindow::J2CPP_CLASS_NAME,
		android::widget::PopupWindow::J2CPP_METHOD_NAME(27),
		android::widget::PopupWindow::J2CPP_METHOD_SIGNATURE(27), 
		void
	>(get_jobject(), a0);
}

void android::widget::PopupWindow::setWindowLayoutMode(jint a0, jint a1)
{
	return call_method<
		android::widget::PopupWindow::J2CPP_CLASS_NAME,
		android::widget::PopupWindow::J2CPP_METHOD_NAME(28),
		android::widget::PopupWindow::J2CPP_METHOD_SIGNATURE(28), 
		void
	>(get_jobject(), a0, a1);
}

jint android::widget::PopupWindow::getHeight()
{
	return call_method<
		android::widget::PopupWindow::J2CPP_CLASS_NAME,
		android::widget::PopupWindow::J2CPP_METHOD_NAME(29),
		android::widget::PopupWindow::J2CPP_METHOD_SIGNATURE(29), 
		jint
	>(get_jobject());
}

void android::widget::PopupWindow::setHeight(jint a0)
{
	return call_method<
		android::widget::PopupWindow::J2CPP_CLASS_NAME,
		android::widget::PopupWindow::J2CPP_METHOD_NAME(30),
		android::widget::PopupWindow::J2CPP_METHOD_SIGNATURE(30), 
		void
	>(get_jobject(), a0);
}

jint android::widget::PopupWindow::getWidth()
{
	return call_method<
		android::widget::PopupWindow::J2CPP_CLASS_NAME,
		android::widget::PopupWindow::J2CPP_METHOD_NAME(31),
		android::widget::PopupWindow::J2CPP_METHOD_SIGNATURE(31), 
		jint
	>(get_jobject());
}

void android::widget::PopupWindow::setWidth(jint a0)
{
	return call_method<
		android::widget::PopupWindow::J2CPP_CLASS_NAME,
		android::widget::PopupWindow::J2CPP_METHOD_NAME(32),
		android::widget::PopupWindow::J2CPP_METHOD_SIGNATURE(32), 
		void
	>(get_jobject(), a0);
}

jboolean android::widget::PopupWindow::isShowing()
{
	return call_method<
		android::widget::PopupWindow::J2CPP_CLASS_NAME,
		android::widget::PopupWindow::J2CPP_METHOD_NAME(33),
		android::widget::PopupWindow::J2CPP_METHOD_SIGNATURE(33), 
		jboolean
	>(get_jobject());
}

void android::widget::PopupWindow::showAtLocation(local_ref< android::view::View > const &a0, jint a1, jint a2, jint a3)
{
	return call_method<
		android::widget::PopupWindow::J2CPP_CLASS_NAME,
		android::widget::PopupWindow::J2CPP_METHOD_NAME(34),
		android::widget::PopupWindow::J2CPP_METHOD_SIGNATURE(34), 
		void
	>(get_jobject(), a0, a1, a2, a3);
}

void android::widget::PopupWindow::showAsDropDown(local_ref< android::view::View > const &a0)
{
	return call_method<
		android::widget::PopupWindow::J2CPP_CLASS_NAME,
		android::widget::PopupWindow::J2CPP_METHOD_NAME(35),
		android::widget::PopupWindow::J2CPP_METHOD_SIGNATURE(35), 
		void
	>(get_jobject(), a0);
}

void android::widget::PopupWindow::showAsDropDown(local_ref< android::view::View > const &a0, jint a1, jint a2)
{
	return call_method<
		android::widget::PopupWindow::J2CPP_CLASS_NAME,
		android::widget::PopupWindow::J2CPP_METHOD_NAME(36),
		android::widget::PopupWindow::J2CPP_METHOD_SIGNATURE(36), 
		void
	>(get_jobject(), a0, a1, a2);
}

jboolean android::widget::PopupWindow::isAboveAnchor()
{
	return call_method<
		android::widget::PopupWindow::J2CPP_CLASS_NAME,
		android::widget::PopupWindow::J2CPP_METHOD_NAME(37),
		android::widget::PopupWindow::J2CPP_METHOD_SIGNATURE(37), 
		jboolean
	>(get_jobject());
}

jint android::widget::PopupWindow::getMaxAvailableHeight(local_ref< android::view::View > const &a0)
{
	return call_method<
		android::widget::PopupWindow::J2CPP_CLASS_NAME,
		android::widget::PopupWindow::J2CPP_METHOD_NAME(38),
		android::widget::PopupWindow::J2CPP_METHOD_SIGNATURE(38), 
		jint
	>(get_jobject(), a0);
}

jint android::widget::PopupWindow::getMaxAvailableHeight(local_ref< android::view::View > const &a0, jint a1)
{
	return call_method<
		android::widget::PopupWindow::J2CPP_CLASS_NAME,
		android::widget::PopupWindow::J2CPP_METHOD_NAME(39),
		android::widget::PopupWindow::J2CPP_METHOD_SIGNATURE(39), 
		jint
	>(get_jobject(), a0, a1);
}

void android::widget::PopupWindow::dismiss()
{
	return call_method<
		android::widget::PopupWindow::J2CPP_CLASS_NAME,
		android::widget::PopupWindow::J2CPP_METHOD_NAME(40),
		android::widget::PopupWindow::J2CPP_METHOD_SIGNATURE(40), 
		void
	>(get_jobject());
}

void android::widget::PopupWindow::setOnDismissListener(local_ref< android::widget::PopupWindow_::OnDismissListener > const &a0)
{
	return call_method<
		android::widget::PopupWindow::J2CPP_CLASS_NAME,
		android::widget::PopupWindow::J2CPP_METHOD_NAME(41),
		android::widget::PopupWindow::J2CPP_METHOD_SIGNATURE(41), 
		void
	>(get_jobject(), a0);
}

void android::widget::PopupWindow::update()
{
	return call_method<
		android::widget::PopupWindow::J2CPP_CLASS_NAME,
		android::widget::PopupWindow::J2CPP_METHOD_NAME(42),
		android::widget::PopupWindow::J2CPP_METHOD_SIGNATURE(42), 
		void
	>(get_jobject());
}

void android::widget::PopupWindow::update(jint a0, jint a1)
{
	return call_method<
		android::widget::PopupWindow::J2CPP_CLASS_NAME,
		android::widget::PopupWindow::J2CPP_METHOD_NAME(43),
		android::widget::PopupWindow::J2CPP_METHOD_SIGNATURE(43), 
		void
	>(get_jobject(), a0, a1);
}

void android::widget::PopupWindow::update(jint a0, jint a1, jint a2, jint a3)
{
	return call_method<
		android::widget::PopupWindow::J2CPP_CLASS_NAME,
		android::widget::PopupWindow::J2CPP_METHOD_NAME(44),
		android::widget::PopupWindow::J2CPP_METHOD_SIGNATURE(44), 
		void
	>(get_jobject(), a0, a1, a2, a3);
}

void android::widget::PopupWindow::update(jint a0, jint a1, jint a2, jint a3, jboolean a4)
{
	return call_method<
		android::widget::PopupWindow::J2CPP_CLASS_NAME,
		android::widget::PopupWindow::J2CPP_METHOD_NAME(45),
		android::widget::PopupWindow::J2CPP_METHOD_SIGNATURE(45), 
		void
	>(get_jobject(), a0, a1, a2, a3, a4);
}

void android::widget::PopupWindow::update(local_ref< android::view::View > const &a0, jint a1, jint a2)
{
	return call_method<
		android::widget::PopupWindow::J2CPP_CLASS_NAME,
		android::widget::PopupWindow::J2CPP_METHOD_NAME(46),
		android::widget::PopupWindow::J2CPP_METHOD_SIGNATURE(46), 
		void
	>(get_jobject(), a0, a1, a2);
}

void android::widget::PopupWindow::update(local_ref< android::view::View > const &a0, jint a1, jint a2, jint a3, jint a4)
{
	return call_method<
		android::widget::PopupWindow::J2CPP_CLASS_NAME,
		android::widget::PopupWindow::J2CPP_METHOD_NAME(47),
		android::widget::PopupWindow::J2CPP_METHOD_SIGNATURE(47), 
		void
	>(get_jobject(), a0, a1, a2, a3, a4);
}


static_field<
	android::widget::PopupWindow::J2CPP_CLASS_NAME,
	android::widget::PopupWindow::J2CPP_FIELD_NAME(0),
	android::widget::PopupWindow::J2CPP_FIELD_SIGNATURE(0),
	jint
> android::widget::PopupWindow::INPUT_METHOD_FROM_FOCUSABLE;

static_field<
	android::widget::PopupWindow::J2CPP_CLASS_NAME,
	android::widget::PopupWindow::J2CPP_FIELD_NAME(1),
	android::widget::PopupWindow::J2CPP_FIELD_SIGNATURE(1),
	jint
> android::widget::PopupWindow::INPUT_METHOD_NEEDED;

static_field<
	android::widget::PopupWindow::J2CPP_CLASS_NAME,
	android::widget::PopupWindow::J2CPP_FIELD_NAME(2),
	android::widget::PopupWindow::J2CPP_FIELD_SIGNATURE(2),
	jint
> android::widget::PopupWindow::INPUT_METHOD_NOT_NEEDED;


J2CPP_DEFINE_CLASS(android::widget::PopupWindow,"android/widget/PopupWindow")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,0,"<init>","(Landroid/content/Context;)V")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,1,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;)V")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,2,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;I)V")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,3,"<init>","()V")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,4,"<init>","(Landroid/view/View;)V")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,5,"<init>","(II)V")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,6,"<init>","(Landroid/view/View;II)V")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,7,"<init>","(Landroid/view/View;IIZ)V")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,8,"getBackground","()Landroid/graphics/drawable/Drawable;")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,9,"setBackgroundDrawable","(Landroid/graphics/drawable/Drawable;)V")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,10,"getAnimationStyle","()I")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,11,"setIgnoreCheekPress","()V")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,12,"setAnimationStyle","(I)V")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,13,"getContentView","()Landroid/view/View;")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,14,"setContentView","(Landroid/view/View;)V")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,15,"setTouchInterceptor","(Landroid/view/View$OnTouchListener;)V")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,16,"isFocusable","()Z")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,17,"setFocusable","(Z)V")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,18,"getInputMethodMode","()I")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,19,"setInputMethodMode","(I)V")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,20,"setSoftInputMode","(I)V")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,21,"getSoftInputMode","()I")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,22,"isTouchable","()Z")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,23,"setTouchable","(Z)V")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,24,"isOutsideTouchable","()Z")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,25,"setOutsideTouchable","(Z)V")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,26,"isClippingEnabled","()Z")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,27,"setClippingEnabled","(Z)V")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,28,"setWindowLayoutMode","(II)V")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,29,"getHeight","()I")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,30,"setHeight","(I)V")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,31,"getWidth","()I")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,32,"setWidth","(I)V")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,33,"isShowing","()Z")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,34,"showAtLocation","(Landroid/view/View;III)V")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,35,"showAsDropDown","(Landroid/view/View;)V")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,36,"showAsDropDown","(Landroid/view/View;II)V")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,37,"isAboveAnchor","()Z")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,38,"getMaxAvailableHeight","(Landroid/view/View;)I")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,39,"getMaxAvailableHeight","(Landroid/view/View;I)I")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,40,"dismiss","()V")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,41,"setOnDismissListener","(Landroid/widget/PopupWindow$OnDismissListener;)V")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,42,"update","()V")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,43,"update","(II)V")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,44,"update","(IIII)V")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,45,"update","(IIIIZ)V")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,46,"update","(Landroid/view/View;II)V")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,47,"update","(Landroid/view/View;IIII)V")
J2CPP_DEFINE_FIELD(android::widget::PopupWindow,0,"INPUT_METHOD_FROM_FOCUSABLE","I")
J2CPP_DEFINE_FIELD(android::widget::PopupWindow,1,"INPUT_METHOD_NEEDED","I")
J2CPP_DEFINE_FIELD(android::widget::PopupWindow,2,"INPUT_METHOD_NOT_NEEDED","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_POPUPWINDOW_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
