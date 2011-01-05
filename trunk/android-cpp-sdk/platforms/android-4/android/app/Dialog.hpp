/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.app.Dialog
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_APP_DIALOG_HPP_DECL
#define J2CPP_ANDROID_APP_DIALOG_HPP_DECL


namespace j2cpp { namespace android { namespace graphics { namespace drawable { class Drawable; } } } }
namespace j2cpp { namespace android { namespace os { class Message; } } }
namespace j2cpp { namespace android { namespace os { class Bundle; } } }
namespace j2cpp { namespace android { namespace view { namespace accessibility { class AccessibilityEvent; } } } }
namespace j2cpp { namespace android { namespace view { class Menu; } } }
namespace j2cpp { namespace android { namespace view { class Window; } } }
namespace j2cpp { namespace android { namespace view { class View; } } }
namespace j2cpp { namespace android { namespace view { class LayoutInflater; } } }
namespace j2cpp { namespace android { namespace view { class ContextMenu; } } }
namespace j2cpp { namespace android { namespace view { class KeyEvent; } } }
namespace j2cpp { namespace android { namespace view { class MenuItem; } } }
namespace j2cpp { namespace android { namespace view { namespace ContextMenu_ { class ContextMenuInfo; } } } }
namespace j2cpp { namespace android { namespace view { namespace Window_ { class Callback; } } } }
namespace j2cpp { namespace android { namespace view { namespace WindowManager_ { class LayoutParams; } } } }
namespace j2cpp { namespace android { namespace view { class MotionEvent; } } }
namespace j2cpp { namespace android { namespace view { namespace ViewGroup_ { class LayoutParams; } } } }
namespace j2cpp { namespace android { namespace view { namespace View_ { class OnCreateContextMenuListener; } } } }
namespace j2cpp { namespace android { namespace net { class Uri; } } }
namespace j2cpp { namespace android { namespace content { class DialogInterface; } } }
namespace j2cpp { namespace android { namespace content { namespace DialogInterface_ { class OnKeyListener; } } } }
namespace j2cpp { namespace android { namespace content { namespace DialogInterface_ { class OnCancelListener; } } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace content { namespace DialogInterface_ { class OnDismissListener; } } } }
namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace app { class Activity; } } }


#include <android/app/Activity.hpp>
#include <android/content/Context.hpp>
#include <android/content/DialogInterface.hpp>
#include <android/graphics/drawable/Drawable.hpp>
#include <android/net/Uri.hpp>
#include <android/os/Bundle.hpp>
#include <android/os/Message.hpp>
#include <android/view/ContextMenu.hpp>
#include <android/view/KeyEvent.hpp>
#include <android/view/LayoutInflater.hpp>
#include <android/view/Menu.hpp>
#include <android/view/MenuItem.hpp>
#include <android/view/MotionEvent.hpp>
#include <android/view/View.hpp>
#include <android/view/ViewGroup.hpp>
#include <android/view/Window.hpp>
#include <android/view/WindowManager.hpp>
#include <android/view/accessibility/AccessibilityEvent.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace app {

	class Dialog;
	class Dialog
		: public object<Dialog>
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
		J2CPP_DECLARE_METHOD(48)
		J2CPP_DECLARE_METHOD(49)
		J2CPP_DECLARE_METHOD(50)
		J2CPP_DECLARE_METHOD(51)
		J2CPP_DECLARE_METHOD(52)
		J2CPP_DECLARE_METHOD(53)
		J2CPP_DECLARE_METHOD(54)
		J2CPP_DECLARE_METHOD(55)
		J2CPP_DECLARE_METHOD(56)
		J2CPP_DECLARE_METHOD(57)
		J2CPP_DECLARE_METHOD(58)
		J2CPP_DECLARE_METHOD(59)
		J2CPP_DECLARE_METHOD(60)
		J2CPP_DECLARE_METHOD(61)
		J2CPP_DECLARE_METHOD(62)
		J2CPP_DECLARE_METHOD(63)
		J2CPP_DECLARE_METHOD(64)
		J2CPP_DECLARE_METHOD(65)
		J2CPP_DECLARE_METHOD(66)
		J2CPP_DECLARE_METHOD(67)
		J2CPP_DECLARE_METHOD(68)
		J2CPP_DECLARE_METHOD(69)
		J2CPP_DECLARE_METHOD(70)
		J2CPP_DECLARE_METHOD(71)

		explicit Dialog(jobject jobj)
		: object<Dialog>(jobj)
		{
		}

		operator local_ref<android::view::Window_::Callback>() const;
		operator local_ref<android::view::View_::OnCreateContextMenuListener>() const;
		operator local_ref<android::content::DialogInterface>() const;
		operator local_ref<java::lang::Object>() const;


		Dialog(local_ref< android::content::Context > const&);
		Dialog(local_ref< android::content::Context > const&, jint);
		local_ref< android::content::Context > getContext();
		void setOwnerActivity(local_ref< android::app::Activity >  const&);
		local_ref< android::app::Activity > getOwnerActivity();
		jboolean isShowing();
		void show();
		void hide();
		void dismiss();
		local_ref< android::os::Bundle > onSaveInstanceState();
		void onRestoreInstanceState(local_ref< android::os::Bundle >  const&);
		local_ref< android::view::Window > getWindow();
		local_ref< android::view::View > getCurrentFocus();
		local_ref< android::view::View > findViewById(jint);
		void setContentView(jint);
		void setContentView(local_ref< android::view::View >  const&);
		void setContentView(local_ref< android::view::View >  const&, local_ref< android::view::ViewGroup_::LayoutParams >  const&);
		void addContentView(local_ref< android::view::View >  const&, local_ref< android::view::ViewGroup_::LayoutParams >  const&);
		void setTitle(local_ref< java::lang::CharSequence >  const&);
		void setTitle(jint);
		jboolean onKeyDown(jint, local_ref< android::view::KeyEvent >  const&);
		jboolean onKeyUp(jint, local_ref< android::view::KeyEvent >  const&);
		jboolean onKeyMultiple(jint, jint, local_ref< android::view::KeyEvent >  const&);
		jboolean onTouchEvent(local_ref< android::view::MotionEvent >  const&);
		jboolean onTrackballEvent(local_ref< android::view::MotionEvent >  const&);
		void onWindowAttributesChanged(local_ref< android::view::WindowManager_::LayoutParams >  const&);
		void onContentChanged();
		void onWindowFocusChanged(jboolean);
		jboolean dispatchKeyEvent(local_ref< android::view::KeyEvent >  const&);
		jboolean dispatchTouchEvent(local_ref< android::view::MotionEvent >  const&);
		jboolean dispatchTrackballEvent(local_ref< android::view::MotionEvent >  const&);
		jboolean dispatchPopulateAccessibilityEvent(local_ref< android::view::accessibility::AccessibilityEvent >  const&);
		local_ref< android::view::View > onCreatePanelView(jint);
		jboolean onCreatePanelMenu(jint, local_ref< android::view::Menu >  const&);
		jboolean onPreparePanel(jint, local_ref< android::view::View >  const&, local_ref< android::view::Menu >  const&);
		jboolean onMenuOpened(jint, local_ref< android::view::Menu >  const&);
		jboolean onMenuItemSelected(jint, local_ref< android::view::MenuItem >  const&);
		void onPanelClosed(jint, local_ref< android::view::Menu >  const&);
		jboolean onCreateOptionsMenu(local_ref< android::view::Menu >  const&);
		jboolean onPrepareOptionsMenu(local_ref< android::view::Menu >  const&);
		jboolean onOptionsItemSelected(local_ref< android::view::MenuItem >  const&);
		void onOptionsMenuClosed(local_ref< android::view::Menu >  const&);
		void openOptionsMenu();
		void closeOptionsMenu();
		void onCreateContextMenu(local_ref< android::view::ContextMenu >  const&, local_ref< android::view::View >  const&, local_ref< android::view::ContextMenu_::ContextMenuInfo >  const&);
		void registerForContextMenu(local_ref< android::view::View >  const&);
		void unregisterForContextMenu(local_ref< android::view::View >  const&);
		void openContextMenu(local_ref< android::view::View >  const&);
		jboolean onContextItemSelected(local_ref< android::view::MenuItem >  const&);
		void onContextMenuClosed(local_ref< android::view::Menu >  const&);
		jboolean onSearchRequested();
		void takeKeyEvents(jboolean);
		jboolean requestWindowFeature(jint);
		void setFeatureDrawableResource(jint, jint);
		void setFeatureDrawableUri(jint, local_ref< android::net::Uri >  const&);
		void setFeatureDrawable(jint, local_ref< android::graphics::drawable::Drawable >  const&);
		void setFeatureDrawableAlpha(jint, jint);
		local_ref< android::view::LayoutInflater > getLayoutInflater();
		void setCancelable(jboolean);
		void setCanceledOnTouchOutside(jboolean);
		void cancel();
		void setOnCancelListener(local_ref< android::content::DialogInterface_::OnCancelListener >  const&);
		void setCancelMessage(local_ref< android::os::Message >  const&);
		void setOnDismissListener(local_ref< android::content::DialogInterface_::OnDismissListener >  const&);
		void setDismissMessage(local_ref< android::os::Message >  const&);
		void setVolumeControlStream(jint);
		jint getVolumeControlStream();
		void setOnKeyListener(local_ref< android::content::DialogInterface_::OnKeyListener >  const&);
	}; //class Dialog

} //namespace app
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_APP_DIALOG_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_APP_DIALOG_HPP_IMPL
#define J2CPP_ANDROID_APP_DIALOG_HPP_IMPL

namespace j2cpp {



android::app::Dialog::operator local_ref<android::view::Window_::Callback>() const
{
	return local_ref<android::view::Window_::Callback>(get_jobject());
}

android::app::Dialog::operator local_ref<android::view::View_::OnCreateContextMenuListener>() const
{
	return local_ref<android::view::View_::OnCreateContextMenuListener>(get_jobject());
}

android::app::Dialog::operator local_ref<android::content::DialogInterface>() const
{
	return local_ref<android::content::DialogInterface>(get_jobject());
}

android::app::Dialog::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::app::Dialog::Dialog(local_ref< android::content::Context > const &a0)
: object<android::app::Dialog>(
	call_new_object<
		android::app::Dialog::J2CPP_CLASS_NAME,
		android::app::Dialog::J2CPP_METHOD_NAME(0),
		android::app::Dialog::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}



android::app::Dialog::Dialog(local_ref< android::content::Context > const &a0, jint a1)
: object<android::app::Dialog>(
	call_new_object<
		android::app::Dialog::J2CPP_CLASS_NAME,
		android::app::Dialog::J2CPP_METHOD_NAME(1),
		android::app::Dialog::J2CPP_METHOD_SIGNATURE(1)
	>(a0, a1)
)
{
}



local_ref< android::content::Context > android::app::Dialog::getContext()
{
	return call_method<
		android::app::Dialog::J2CPP_CLASS_NAME,
		android::app::Dialog::J2CPP_METHOD_NAME(3),
		android::app::Dialog::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< android::content::Context >
	>(get_jobject());
}

void android::app::Dialog::setOwnerActivity(local_ref< android::app::Activity > const &a0)
{
	return call_method<
		android::app::Dialog::J2CPP_CLASS_NAME,
		android::app::Dialog::J2CPP_METHOD_NAME(4),
		android::app::Dialog::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0);
}

local_ref< android::app::Activity > android::app::Dialog::getOwnerActivity()
{
	return call_method<
		android::app::Dialog::J2CPP_CLASS_NAME,
		android::app::Dialog::J2CPP_METHOD_NAME(5),
		android::app::Dialog::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< android::app::Activity >
	>(get_jobject());
}

jboolean android::app::Dialog::isShowing()
{
	return call_method<
		android::app::Dialog::J2CPP_CLASS_NAME,
		android::app::Dialog::J2CPP_METHOD_NAME(6),
		android::app::Dialog::J2CPP_METHOD_SIGNATURE(6), 
		jboolean
	>(get_jobject());
}

void android::app::Dialog::show()
{
	return call_method<
		android::app::Dialog::J2CPP_CLASS_NAME,
		android::app::Dialog::J2CPP_METHOD_NAME(7),
		android::app::Dialog::J2CPP_METHOD_SIGNATURE(7), 
		void
	>(get_jobject());
}

void android::app::Dialog::hide()
{
	return call_method<
		android::app::Dialog::J2CPP_CLASS_NAME,
		android::app::Dialog::J2CPP_METHOD_NAME(8),
		android::app::Dialog::J2CPP_METHOD_SIGNATURE(8), 
		void
	>(get_jobject());
}

void android::app::Dialog::dismiss()
{
	return call_method<
		android::app::Dialog::J2CPP_CLASS_NAME,
		android::app::Dialog::J2CPP_METHOD_NAME(9),
		android::app::Dialog::J2CPP_METHOD_SIGNATURE(9), 
		void
	>(get_jobject());
}




local_ref< android::os::Bundle > android::app::Dialog::onSaveInstanceState()
{
	return call_method<
		android::app::Dialog::J2CPP_CLASS_NAME,
		android::app::Dialog::J2CPP_METHOD_NAME(13),
		android::app::Dialog::J2CPP_METHOD_SIGNATURE(13), 
		local_ref< android::os::Bundle >
	>(get_jobject());
}

void android::app::Dialog::onRestoreInstanceState(local_ref< android::os::Bundle > const &a0)
{
	return call_method<
		android::app::Dialog::J2CPP_CLASS_NAME,
		android::app::Dialog::J2CPP_METHOD_NAME(14),
		android::app::Dialog::J2CPP_METHOD_SIGNATURE(14), 
		void
	>(get_jobject(), a0);
}

local_ref< android::view::Window > android::app::Dialog::getWindow()
{
	return call_method<
		android::app::Dialog::J2CPP_CLASS_NAME,
		android::app::Dialog::J2CPP_METHOD_NAME(15),
		android::app::Dialog::J2CPP_METHOD_SIGNATURE(15), 
		local_ref< android::view::Window >
	>(get_jobject());
}

local_ref< android::view::View > android::app::Dialog::getCurrentFocus()
{
	return call_method<
		android::app::Dialog::J2CPP_CLASS_NAME,
		android::app::Dialog::J2CPP_METHOD_NAME(16),
		android::app::Dialog::J2CPP_METHOD_SIGNATURE(16), 
		local_ref< android::view::View >
	>(get_jobject());
}

local_ref< android::view::View > android::app::Dialog::findViewById(jint a0)
{
	return call_method<
		android::app::Dialog::J2CPP_CLASS_NAME,
		android::app::Dialog::J2CPP_METHOD_NAME(17),
		android::app::Dialog::J2CPP_METHOD_SIGNATURE(17), 
		local_ref< android::view::View >
	>(get_jobject(), a0);
}

void android::app::Dialog::setContentView(jint a0)
{
	return call_method<
		android::app::Dialog::J2CPP_CLASS_NAME,
		android::app::Dialog::J2CPP_METHOD_NAME(18),
		android::app::Dialog::J2CPP_METHOD_SIGNATURE(18), 
		void
	>(get_jobject(), a0);
}

void android::app::Dialog::setContentView(local_ref< android::view::View > const &a0)
{
	return call_method<
		android::app::Dialog::J2CPP_CLASS_NAME,
		android::app::Dialog::J2CPP_METHOD_NAME(19),
		android::app::Dialog::J2CPP_METHOD_SIGNATURE(19), 
		void
	>(get_jobject(), a0);
}

void android::app::Dialog::setContentView(local_ref< android::view::View > const &a0, local_ref< android::view::ViewGroup_::LayoutParams > const &a1)
{
	return call_method<
		android::app::Dialog::J2CPP_CLASS_NAME,
		android::app::Dialog::J2CPP_METHOD_NAME(20),
		android::app::Dialog::J2CPP_METHOD_SIGNATURE(20), 
		void
	>(get_jobject(), a0, a1);
}

void android::app::Dialog::addContentView(local_ref< android::view::View > const &a0, local_ref< android::view::ViewGroup_::LayoutParams > const &a1)
{
	return call_method<
		android::app::Dialog::J2CPP_CLASS_NAME,
		android::app::Dialog::J2CPP_METHOD_NAME(21),
		android::app::Dialog::J2CPP_METHOD_SIGNATURE(21), 
		void
	>(get_jobject(), a0, a1);
}

void android::app::Dialog::setTitle(local_ref< java::lang::CharSequence > const &a0)
{
	return call_method<
		android::app::Dialog::J2CPP_CLASS_NAME,
		android::app::Dialog::J2CPP_METHOD_NAME(22),
		android::app::Dialog::J2CPP_METHOD_SIGNATURE(22), 
		void
	>(get_jobject(), a0);
}

void android::app::Dialog::setTitle(jint a0)
{
	return call_method<
		android::app::Dialog::J2CPP_CLASS_NAME,
		android::app::Dialog::J2CPP_METHOD_NAME(23),
		android::app::Dialog::J2CPP_METHOD_SIGNATURE(23), 
		void
	>(get_jobject(), a0);
}

jboolean android::app::Dialog::onKeyDown(jint a0, local_ref< android::view::KeyEvent > const &a1)
{
	return call_method<
		android::app::Dialog::J2CPP_CLASS_NAME,
		android::app::Dialog::J2CPP_METHOD_NAME(24),
		android::app::Dialog::J2CPP_METHOD_SIGNATURE(24), 
		jboolean
	>(get_jobject(), a0, a1);
}

jboolean android::app::Dialog::onKeyUp(jint a0, local_ref< android::view::KeyEvent > const &a1)
{
	return call_method<
		android::app::Dialog::J2CPP_CLASS_NAME,
		android::app::Dialog::J2CPP_METHOD_NAME(25),
		android::app::Dialog::J2CPP_METHOD_SIGNATURE(25), 
		jboolean
	>(get_jobject(), a0, a1);
}

jboolean android::app::Dialog::onKeyMultiple(jint a0, jint a1, local_ref< android::view::KeyEvent > const &a2)
{
	return call_method<
		android::app::Dialog::J2CPP_CLASS_NAME,
		android::app::Dialog::J2CPP_METHOD_NAME(26),
		android::app::Dialog::J2CPP_METHOD_SIGNATURE(26), 
		jboolean
	>(get_jobject(), a0, a1, a2);
}

jboolean android::app::Dialog::onTouchEvent(local_ref< android::view::MotionEvent > const &a0)
{
	return call_method<
		android::app::Dialog::J2CPP_CLASS_NAME,
		android::app::Dialog::J2CPP_METHOD_NAME(27),
		android::app::Dialog::J2CPP_METHOD_SIGNATURE(27), 
		jboolean
	>(get_jobject(), a0);
}

jboolean android::app::Dialog::onTrackballEvent(local_ref< android::view::MotionEvent > const &a0)
{
	return call_method<
		android::app::Dialog::J2CPP_CLASS_NAME,
		android::app::Dialog::J2CPP_METHOD_NAME(28),
		android::app::Dialog::J2CPP_METHOD_SIGNATURE(28), 
		jboolean
	>(get_jobject(), a0);
}

void android::app::Dialog::onWindowAttributesChanged(local_ref< android::view::WindowManager_::LayoutParams > const &a0)
{
	return call_method<
		android::app::Dialog::J2CPP_CLASS_NAME,
		android::app::Dialog::J2CPP_METHOD_NAME(29),
		android::app::Dialog::J2CPP_METHOD_SIGNATURE(29), 
		void
	>(get_jobject(), a0);
}

void android::app::Dialog::onContentChanged()
{
	return call_method<
		android::app::Dialog::J2CPP_CLASS_NAME,
		android::app::Dialog::J2CPP_METHOD_NAME(30),
		android::app::Dialog::J2CPP_METHOD_SIGNATURE(30), 
		void
	>(get_jobject());
}

void android::app::Dialog::onWindowFocusChanged(jboolean a0)
{
	return call_method<
		android::app::Dialog::J2CPP_CLASS_NAME,
		android::app::Dialog::J2CPP_METHOD_NAME(31),
		android::app::Dialog::J2CPP_METHOD_SIGNATURE(31), 
		void
	>(get_jobject(), a0);
}

jboolean android::app::Dialog::dispatchKeyEvent(local_ref< android::view::KeyEvent > const &a0)
{
	return call_method<
		android::app::Dialog::J2CPP_CLASS_NAME,
		android::app::Dialog::J2CPP_METHOD_NAME(32),
		android::app::Dialog::J2CPP_METHOD_SIGNATURE(32), 
		jboolean
	>(get_jobject(), a0);
}

jboolean android::app::Dialog::dispatchTouchEvent(local_ref< android::view::MotionEvent > const &a0)
{
	return call_method<
		android::app::Dialog::J2CPP_CLASS_NAME,
		android::app::Dialog::J2CPP_METHOD_NAME(33),
		android::app::Dialog::J2CPP_METHOD_SIGNATURE(33), 
		jboolean
	>(get_jobject(), a0);
}

jboolean android::app::Dialog::dispatchTrackballEvent(local_ref< android::view::MotionEvent > const &a0)
{
	return call_method<
		android::app::Dialog::J2CPP_CLASS_NAME,
		android::app::Dialog::J2CPP_METHOD_NAME(34),
		android::app::Dialog::J2CPP_METHOD_SIGNATURE(34), 
		jboolean
	>(get_jobject(), a0);
}

jboolean android::app::Dialog::dispatchPopulateAccessibilityEvent(local_ref< android::view::accessibility::AccessibilityEvent > const &a0)
{
	return call_method<
		android::app::Dialog::J2CPP_CLASS_NAME,
		android::app::Dialog::J2CPP_METHOD_NAME(35),
		android::app::Dialog::J2CPP_METHOD_SIGNATURE(35), 
		jboolean
	>(get_jobject(), a0);
}

local_ref< android::view::View > android::app::Dialog::onCreatePanelView(jint a0)
{
	return call_method<
		android::app::Dialog::J2CPP_CLASS_NAME,
		android::app::Dialog::J2CPP_METHOD_NAME(36),
		android::app::Dialog::J2CPP_METHOD_SIGNATURE(36), 
		local_ref< android::view::View >
	>(get_jobject(), a0);
}

jboolean android::app::Dialog::onCreatePanelMenu(jint a0, local_ref< android::view::Menu > const &a1)
{
	return call_method<
		android::app::Dialog::J2CPP_CLASS_NAME,
		android::app::Dialog::J2CPP_METHOD_NAME(37),
		android::app::Dialog::J2CPP_METHOD_SIGNATURE(37), 
		jboolean
	>(get_jobject(), a0, a1);
}

jboolean android::app::Dialog::onPreparePanel(jint a0, local_ref< android::view::View > const &a1, local_ref< android::view::Menu > const &a2)
{
	return call_method<
		android::app::Dialog::J2CPP_CLASS_NAME,
		android::app::Dialog::J2CPP_METHOD_NAME(38),
		android::app::Dialog::J2CPP_METHOD_SIGNATURE(38), 
		jboolean
	>(get_jobject(), a0, a1, a2);
}

jboolean android::app::Dialog::onMenuOpened(jint a0, local_ref< android::view::Menu > const &a1)
{
	return call_method<
		android::app::Dialog::J2CPP_CLASS_NAME,
		android::app::Dialog::J2CPP_METHOD_NAME(39),
		android::app::Dialog::J2CPP_METHOD_SIGNATURE(39), 
		jboolean
	>(get_jobject(), a0, a1);
}

jboolean android::app::Dialog::onMenuItemSelected(jint a0, local_ref< android::view::MenuItem > const &a1)
{
	return call_method<
		android::app::Dialog::J2CPP_CLASS_NAME,
		android::app::Dialog::J2CPP_METHOD_NAME(40),
		android::app::Dialog::J2CPP_METHOD_SIGNATURE(40), 
		jboolean
	>(get_jobject(), a0, a1);
}

void android::app::Dialog::onPanelClosed(jint a0, local_ref< android::view::Menu > const &a1)
{
	return call_method<
		android::app::Dialog::J2CPP_CLASS_NAME,
		android::app::Dialog::J2CPP_METHOD_NAME(41),
		android::app::Dialog::J2CPP_METHOD_SIGNATURE(41), 
		void
	>(get_jobject(), a0, a1);
}

jboolean android::app::Dialog::onCreateOptionsMenu(local_ref< android::view::Menu > const &a0)
{
	return call_method<
		android::app::Dialog::J2CPP_CLASS_NAME,
		android::app::Dialog::J2CPP_METHOD_NAME(42),
		android::app::Dialog::J2CPP_METHOD_SIGNATURE(42), 
		jboolean
	>(get_jobject(), a0);
}

jboolean android::app::Dialog::onPrepareOptionsMenu(local_ref< android::view::Menu > const &a0)
{
	return call_method<
		android::app::Dialog::J2CPP_CLASS_NAME,
		android::app::Dialog::J2CPP_METHOD_NAME(43),
		android::app::Dialog::J2CPP_METHOD_SIGNATURE(43), 
		jboolean
	>(get_jobject(), a0);
}

jboolean android::app::Dialog::onOptionsItemSelected(local_ref< android::view::MenuItem > const &a0)
{
	return call_method<
		android::app::Dialog::J2CPP_CLASS_NAME,
		android::app::Dialog::J2CPP_METHOD_NAME(44),
		android::app::Dialog::J2CPP_METHOD_SIGNATURE(44), 
		jboolean
	>(get_jobject(), a0);
}

void android::app::Dialog::onOptionsMenuClosed(local_ref< android::view::Menu > const &a0)
{
	return call_method<
		android::app::Dialog::J2CPP_CLASS_NAME,
		android::app::Dialog::J2CPP_METHOD_NAME(45),
		android::app::Dialog::J2CPP_METHOD_SIGNATURE(45), 
		void
	>(get_jobject(), a0);
}

void android::app::Dialog::openOptionsMenu()
{
	return call_method<
		android::app::Dialog::J2CPP_CLASS_NAME,
		android::app::Dialog::J2CPP_METHOD_NAME(46),
		android::app::Dialog::J2CPP_METHOD_SIGNATURE(46), 
		void
	>(get_jobject());
}

void android::app::Dialog::closeOptionsMenu()
{
	return call_method<
		android::app::Dialog::J2CPP_CLASS_NAME,
		android::app::Dialog::J2CPP_METHOD_NAME(47),
		android::app::Dialog::J2CPP_METHOD_SIGNATURE(47), 
		void
	>(get_jobject());
}

void android::app::Dialog::onCreateContextMenu(local_ref< android::view::ContextMenu > const &a0, local_ref< android::view::View > const &a1, local_ref< android::view::ContextMenu_::ContextMenuInfo > const &a2)
{
	return call_method<
		android::app::Dialog::J2CPP_CLASS_NAME,
		android::app::Dialog::J2CPP_METHOD_NAME(48),
		android::app::Dialog::J2CPP_METHOD_SIGNATURE(48), 
		void
	>(get_jobject(), a0, a1, a2);
}

void android::app::Dialog::registerForContextMenu(local_ref< android::view::View > const &a0)
{
	return call_method<
		android::app::Dialog::J2CPP_CLASS_NAME,
		android::app::Dialog::J2CPP_METHOD_NAME(49),
		android::app::Dialog::J2CPP_METHOD_SIGNATURE(49), 
		void
	>(get_jobject(), a0);
}

void android::app::Dialog::unregisterForContextMenu(local_ref< android::view::View > const &a0)
{
	return call_method<
		android::app::Dialog::J2CPP_CLASS_NAME,
		android::app::Dialog::J2CPP_METHOD_NAME(50),
		android::app::Dialog::J2CPP_METHOD_SIGNATURE(50), 
		void
	>(get_jobject(), a0);
}

void android::app::Dialog::openContextMenu(local_ref< android::view::View > const &a0)
{
	return call_method<
		android::app::Dialog::J2CPP_CLASS_NAME,
		android::app::Dialog::J2CPP_METHOD_NAME(51),
		android::app::Dialog::J2CPP_METHOD_SIGNATURE(51), 
		void
	>(get_jobject(), a0);
}

jboolean android::app::Dialog::onContextItemSelected(local_ref< android::view::MenuItem > const &a0)
{
	return call_method<
		android::app::Dialog::J2CPP_CLASS_NAME,
		android::app::Dialog::J2CPP_METHOD_NAME(52),
		android::app::Dialog::J2CPP_METHOD_SIGNATURE(52), 
		jboolean
	>(get_jobject(), a0);
}

void android::app::Dialog::onContextMenuClosed(local_ref< android::view::Menu > const &a0)
{
	return call_method<
		android::app::Dialog::J2CPP_CLASS_NAME,
		android::app::Dialog::J2CPP_METHOD_NAME(53),
		android::app::Dialog::J2CPP_METHOD_SIGNATURE(53), 
		void
	>(get_jobject(), a0);
}

jboolean android::app::Dialog::onSearchRequested()
{
	return call_method<
		android::app::Dialog::J2CPP_CLASS_NAME,
		android::app::Dialog::J2CPP_METHOD_NAME(54),
		android::app::Dialog::J2CPP_METHOD_SIGNATURE(54), 
		jboolean
	>(get_jobject());
}

void android::app::Dialog::takeKeyEvents(jboolean a0)
{
	return call_method<
		android::app::Dialog::J2CPP_CLASS_NAME,
		android::app::Dialog::J2CPP_METHOD_NAME(55),
		android::app::Dialog::J2CPP_METHOD_SIGNATURE(55), 
		void
	>(get_jobject(), a0);
}

jboolean android::app::Dialog::requestWindowFeature(jint a0)
{
	return call_method<
		android::app::Dialog::J2CPP_CLASS_NAME,
		android::app::Dialog::J2CPP_METHOD_NAME(56),
		android::app::Dialog::J2CPP_METHOD_SIGNATURE(56), 
		jboolean
	>(get_jobject(), a0);
}

void android::app::Dialog::setFeatureDrawableResource(jint a0, jint a1)
{
	return call_method<
		android::app::Dialog::J2CPP_CLASS_NAME,
		android::app::Dialog::J2CPP_METHOD_NAME(57),
		android::app::Dialog::J2CPP_METHOD_SIGNATURE(57), 
		void
	>(get_jobject(), a0, a1);
}

void android::app::Dialog::setFeatureDrawableUri(jint a0, local_ref< android::net::Uri > const &a1)
{
	return call_method<
		android::app::Dialog::J2CPP_CLASS_NAME,
		android::app::Dialog::J2CPP_METHOD_NAME(58),
		android::app::Dialog::J2CPP_METHOD_SIGNATURE(58), 
		void
	>(get_jobject(), a0, a1);
}

void android::app::Dialog::setFeatureDrawable(jint a0, local_ref< android::graphics::drawable::Drawable > const &a1)
{
	return call_method<
		android::app::Dialog::J2CPP_CLASS_NAME,
		android::app::Dialog::J2CPP_METHOD_NAME(59),
		android::app::Dialog::J2CPP_METHOD_SIGNATURE(59), 
		void
	>(get_jobject(), a0, a1);
}

void android::app::Dialog::setFeatureDrawableAlpha(jint a0, jint a1)
{
	return call_method<
		android::app::Dialog::J2CPP_CLASS_NAME,
		android::app::Dialog::J2CPP_METHOD_NAME(60),
		android::app::Dialog::J2CPP_METHOD_SIGNATURE(60), 
		void
	>(get_jobject(), a0, a1);
}

local_ref< android::view::LayoutInflater > android::app::Dialog::getLayoutInflater()
{
	return call_method<
		android::app::Dialog::J2CPP_CLASS_NAME,
		android::app::Dialog::J2CPP_METHOD_NAME(61),
		android::app::Dialog::J2CPP_METHOD_SIGNATURE(61), 
		local_ref< android::view::LayoutInflater >
	>(get_jobject());
}

void android::app::Dialog::setCancelable(jboolean a0)
{
	return call_method<
		android::app::Dialog::J2CPP_CLASS_NAME,
		android::app::Dialog::J2CPP_METHOD_NAME(62),
		android::app::Dialog::J2CPP_METHOD_SIGNATURE(62), 
		void
	>(get_jobject(), a0);
}

void android::app::Dialog::setCanceledOnTouchOutside(jboolean a0)
{
	return call_method<
		android::app::Dialog::J2CPP_CLASS_NAME,
		android::app::Dialog::J2CPP_METHOD_NAME(63),
		android::app::Dialog::J2CPP_METHOD_SIGNATURE(63), 
		void
	>(get_jobject(), a0);
}

void android::app::Dialog::cancel()
{
	return call_method<
		android::app::Dialog::J2CPP_CLASS_NAME,
		android::app::Dialog::J2CPP_METHOD_NAME(64),
		android::app::Dialog::J2CPP_METHOD_SIGNATURE(64), 
		void
	>(get_jobject());
}

void android::app::Dialog::setOnCancelListener(local_ref< android::content::DialogInterface_::OnCancelListener > const &a0)
{
	return call_method<
		android::app::Dialog::J2CPP_CLASS_NAME,
		android::app::Dialog::J2CPP_METHOD_NAME(65),
		android::app::Dialog::J2CPP_METHOD_SIGNATURE(65), 
		void
	>(get_jobject(), a0);
}

void android::app::Dialog::setCancelMessage(local_ref< android::os::Message > const &a0)
{
	return call_method<
		android::app::Dialog::J2CPP_CLASS_NAME,
		android::app::Dialog::J2CPP_METHOD_NAME(66),
		android::app::Dialog::J2CPP_METHOD_SIGNATURE(66), 
		void
	>(get_jobject(), a0);
}

void android::app::Dialog::setOnDismissListener(local_ref< android::content::DialogInterface_::OnDismissListener > const &a0)
{
	return call_method<
		android::app::Dialog::J2CPP_CLASS_NAME,
		android::app::Dialog::J2CPP_METHOD_NAME(67),
		android::app::Dialog::J2CPP_METHOD_SIGNATURE(67), 
		void
	>(get_jobject(), a0);
}

void android::app::Dialog::setDismissMessage(local_ref< android::os::Message > const &a0)
{
	return call_method<
		android::app::Dialog::J2CPP_CLASS_NAME,
		android::app::Dialog::J2CPP_METHOD_NAME(68),
		android::app::Dialog::J2CPP_METHOD_SIGNATURE(68), 
		void
	>(get_jobject(), a0);
}

void android::app::Dialog::setVolumeControlStream(jint a0)
{
	return call_method<
		android::app::Dialog::J2CPP_CLASS_NAME,
		android::app::Dialog::J2CPP_METHOD_NAME(69),
		android::app::Dialog::J2CPP_METHOD_SIGNATURE(69), 
		void
	>(get_jobject(), a0);
}

jint android::app::Dialog::getVolumeControlStream()
{
	return call_method<
		android::app::Dialog::J2CPP_CLASS_NAME,
		android::app::Dialog::J2CPP_METHOD_NAME(70),
		android::app::Dialog::J2CPP_METHOD_SIGNATURE(70), 
		jint
	>(get_jobject());
}

void android::app::Dialog::setOnKeyListener(local_ref< android::content::DialogInterface_::OnKeyListener > const &a0)
{
	return call_method<
		android::app::Dialog::J2CPP_CLASS_NAME,
		android::app::Dialog::J2CPP_METHOD_NAME(71),
		android::app::Dialog::J2CPP_METHOD_SIGNATURE(71), 
		void
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(android::app::Dialog,"android/app/Dialog")
J2CPP_DEFINE_METHOD(android::app::Dialog,0,"<init>","(Landroid/content/Context;)V")
J2CPP_DEFINE_METHOD(android::app::Dialog,1,"<init>","(Landroid/content/Context;I)V")
J2CPP_DEFINE_METHOD(android::app::Dialog,2,"<init>","(Landroid/content/Context;ZLandroid/content/DialogInterface$OnCancelListener;)V")
J2CPP_DEFINE_METHOD(android::app::Dialog,3,"getContext","()Landroid/content/Context;")
J2CPP_DEFINE_METHOD(android::app::Dialog,4,"setOwnerActivity","(Landroid/app/Activity;)V")
J2CPP_DEFINE_METHOD(android::app::Dialog,5,"getOwnerActivity","()Landroid/app/Activity;")
J2CPP_DEFINE_METHOD(android::app::Dialog,6,"isShowing","()Z")
J2CPP_DEFINE_METHOD(android::app::Dialog,7,"show","()V")
J2CPP_DEFINE_METHOD(android::app::Dialog,8,"hide","()V")
J2CPP_DEFINE_METHOD(android::app::Dialog,9,"dismiss","()V")
J2CPP_DEFINE_METHOD(android::app::Dialog,10,"onCreate","(Landroid/os/Bundle;)V")
J2CPP_DEFINE_METHOD(android::app::Dialog,11,"onStart","()V")
J2CPP_DEFINE_METHOD(android::app::Dialog,12,"onStop","()V")
J2CPP_DEFINE_METHOD(android::app::Dialog,13,"onSaveInstanceState","()Landroid/os/Bundle;")
J2CPP_DEFINE_METHOD(android::app::Dialog,14,"onRestoreInstanceState","(Landroid/os/Bundle;)V")
J2CPP_DEFINE_METHOD(android::app::Dialog,15,"getWindow","()Landroid/view/Window;")
J2CPP_DEFINE_METHOD(android::app::Dialog,16,"getCurrentFocus","()Landroid/view/View;")
J2CPP_DEFINE_METHOD(android::app::Dialog,17,"findViewById","(I)Landroid/view/View;")
J2CPP_DEFINE_METHOD(android::app::Dialog,18,"setContentView","(I)V")
J2CPP_DEFINE_METHOD(android::app::Dialog,19,"setContentView","(Landroid/view/View;)V")
J2CPP_DEFINE_METHOD(android::app::Dialog,20,"setContentView","(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V")
J2CPP_DEFINE_METHOD(android::app::Dialog,21,"addContentView","(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V")
J2CPP_DEFINE_METHOD(android::app::Dialog,22,"setTitle","(Ljava/lang/CharSequence;)V")
J2CPP_DEFINE_METHOD(android::app::Dialog,23,"setTitle","(I)V")
J2CPP_DEFINE_METHOD(android::app::Dialog,24,"onKeyDown","(ILandroid/view/KeyEvent;)Z")
J2CPP_DEFINE_METHOD(android::app::Dialog,25,"onKeyUp","(ILandroid/view/KeyEvent;)Z")
J2CPP_DEFINE_METHOD(android::app::Dialog,26,"onKeyMultiple","(IILandroid/view/KeyEvent;)Z")
J2CPP_DEFINE_METHOD(android::app::Dialog,27,"onTouchEvent","(Landroid/view/MotionEvent;)Z")
J2CPP_DEFINE_METHOD(android::app::Dialog,28,"onTrackballEvent","(Landroid/view/MotionEvent;)Z")
J2CPP_DEFINE_METHOD(android::app::Dialog,29,"onWindowAttributesChanged","(Landroid/view/WindowManager$LayoutParams;)V")
J2CPP_DEFINE_METHOD(android::app::Dialog,30,"onContentChanged","()V")
J2CPP_DEFINE_METHOD(android::app::Dialog,31,"onWindowFocusChanged","(Z)V")
J2CPP_DEFINE_METHOD(android::app::Dialog,32,"dispatchKeyEvent","(Landroid/view/KeyEvent;)Z")
J2CPP_DEFINE_METHOD(android::app::Dialog,33,"dispatchTouchEvent","(Landroid/view/MotionEvent;)Z")
J2CPP_DEFINE_METHOD(android::app::Dialog,34,"dispatchTrackballEvent","(Landroid/view/MotionEvent;)Z")
J2CPP_DEFINE_METHOD(android::app::Dialog,35,"dispatchPopulateAccessibilityEvent","(Landroid/view/accessibility/AccessibilityEvent;)Z")
J2CPP_DEFINE_METHOD(android::app::Dialog,36,"onCreatePanelView","(I)Landroid/view/View;")
J2CPP_DEFINE_METHOD(android::app::Dialog,37,"onCreatePanelMenu","(ILandroid/view/Menu;)Z")
J2CPP_DEFINE_METHOD(android::app::Dialog,38,"onPreparePanel","(ILandroid/view/View;Landroid/view/Menu;)Z")
J2CPP_DEFINE_METHOD(android::app::Dialog,39,"onMenuOpened","(ILandroid/view/Menu;)Z")
J2CPP_DEFINE_METHOD(android::app::Dialog,40,"onMenuItemSelected","(ILandroid/view/MenuItem;)Z")
J2CPP_DEFINE_METHOD(android::app::Dialog,41,"onPanelClosed","(ILandroid/view/Menu;)V")
J2CPP_DEFINE_METHOD(android::app::Dialog,42,"onCreateOptionsMenu","(Landroid/view/Menu;)Z")
J2CPP_DEFINE_METHOD(android::app::Dialog,43,"onPrepareOptionsMenu","(Landroid/view/Menu;)Z")
J2CPP_DEFINE_METHOD(android::app::Dialog,44,"onOptionsItemSelected","(Landroid/view/MenuItem;)Z")
J2CPP_DEFINE_METHOD(android::app::Dialog,45,"onOptionsMenuClosed","(Landroid/view/Menu;)V")
J2CPP_DEFINE_METHOD(android::app::Dialog,46,"openOptionsMenu","()V")
J2CPP_DEFINE_METHOD(android::app::Dialog,47,"closeOptionsMenu","()V")
J2CPP_DEFINE_METHOD(android::app::Dialog,48,"onCreateContextMenu","(Landroid/view/ContextMenu;Landroid/view/View;Landroid/view/ContextMenu$ContextMenuInfo;)V")
J2CPP_DEFINE_METHOD(android::app::Dialog,49,"registerForContextMenu","(Landroid/view/View;)V")
J2CPP_DEFINE_METHOD(android::app::Dialog,50,"unregisterForContextMenu","(Landroid/view/View;)V")
J2CPP_DEFINE_METHOD(android::app::Dialog,51,"openContextMenu","(Landroid/view/View;)V")
J2CPP_DEFINE_METHOD(android::app::Dialog,52,"onContextItemSelected","(Landroid/view/MenuItem;)Z")
J2CPP_DEFINE_METHOD(android::app::Dialog,53,"onContextMenuClosed","(Landroid/view/Menu;)V")
J2CPP_DEFINE_METHOD(android::app::Dialog,54,"onSearchRequested","()Z")
J2CPP_DEFINE_METHOD(android::app::Dialog,55,"takeKeyEvents","(Z)V")
J2CPP_DEFINE_METHOD(android::app::Dialog,56,"requestWindowFeature","(I)Z")
J2CPP_DEFINE_METHOD(android::app::Dialog,57,"setFeatureDrawableResource","(II)V")
J2CPP_DEFINE_METHOD(android::app::Dialog,58,"setFeatureDrawableUri","(ILandroid/net/Uri;)V")
J2CPP_DEFINE_METHOD(android::app::Dialog,59,"setFeatureDrawable","(ILandroid/graphics/drawable/Drawable;)V")
J2CPP_DEFINE_METHOD(android::app::Dialog,60,"setFeatureDrawableAlpha","(II)V")
J2CPP_DEFINE_METHOD(android::app::Dialog,61,"getLayoutInflater","()Landroid/view/LayoutInflater;")
J2CPP_DEFINE_METHOD(android::app::Dialog,62,"setCancelable","(Z)V")
J2CPP_DEFINE_METHOD(android::app::Dialog,63,"setCanceledOnTouchOutside","(Z)V")
J2CPP_DEFINE_METHOD(android::app::Dialog,64,"cancel","()V")
J2CPP_DEFINE_METHOD(android::app::Dialog,65,"setOnCancelListener","(Landroid/content/DialogInterface$OnCancelListener;)V")
J2CPP_DEFINE_METHOD(android::app::Dialog,66,"setCancelMessage","(Landroid/os/Message;)V")
J2CPP_DEFINE_METHOD(android::app::Dialog,67,"setOnDismissListener","(Landroid/content/DialogInterface$OnDismissListener;)V")
J2CPP_DEFINE_METHOD(android::app::Dialog,68,"setDismissMessage","(Landroid/os/Message;)V")
J2CPP_DEFINE_METHOD(android::app::Dialog,69,"setVolumeControlStream","(I)V")
J2CPP_DEFINE_METHOD(android::app::Dialog,70,"getVolumeControlStream","()I")
J2CPP_DEFINE_METHOD(android::app::Dialog,71,"setOnKeyListener","(Landroid/content/DialogInterface$OnKeyListener;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_APP_DIALOG_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
