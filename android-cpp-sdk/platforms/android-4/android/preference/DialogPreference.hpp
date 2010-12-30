/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.preference.DialogPreference
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_PREFERENCE_DIALOGPREFERENCE_HPP_DECL
#define J2CPP_ANDROID_PREFERENCE_DIALOGPREFERENCE_HPP_DECL


namespace j2cpp { namespace android { namespace app { class Dialog; } } }
namespace j2cpp { namespace android { namespace graphics { namespace drawable { class Drawable; } } } }
namespace j2cpp { namespace android { namespace preference { class Preference; } } }
namespace j2cpp { namespace android { namespace preference { namespace PreferenceManager_ { class OnActivityDestroyListener; } } } }
namespace j2cpp { namespace android { namespace util { class AttributeSet; } } }
namespace j2cpp { namespace android { namespace content { class DialogInterface; } } }
namespace j2cpp { namespace android { namespace content { namespace DialogInterface_ { class OnClickListener; } } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace content { namespace DialogInterface_ { class OnDismissListener; } } } }
namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }


#include <android/app/Dialog.hpp>
#include <android/content/Context.hpp>
#include <android/content/DialogInterface.hpp>
#include <android/graphics/drawable/Drawable.hpp>
#include <android/preference/Preference.hpp>
#include <android/preference/PreferenceManager.hpp>
#include <android/util/AttributeSet.hpp>
#include <java/lang/CharSequence.hpp>


namespace j2cpp {

namespace android { namespace preference {

	class DialogPreference;
	class DialogPreference
		: public object<DialogPreference>
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

		explicit DialogPreference(jobject jobj)
		: object<DialogPreference>(jobj)
		{
		}

		operator local_ref<android::preference::Preference>() const;
		operator local_ref<android::content::DialogInterface_::OnClickListener>() const;
		operator local_ref<android::content::DialogInterface_::OnDismissListener>() const;
		operator local_ref<android::preference::PreferenceManager_::OnActivityDestroyListener>() const;


		DialogPreference(local_ref< android::content::Context > const&, local_ref< android::util::AttributeSet > const&, jint);
		DialogPreference(local_ref< android::content::Context > const&, local_ref< android::util::AttributeSet > const&);
		void setDialogTitle(local_ref< java::lang::CharSequence >  const&);
		void setDialogTitle(jint);
		local_ref< java::lang::CharSequence > getDialogTitle();
		void setDialogMessage(local_ref< java::lang::CharSequence >  const&);
		void setDialogMessage(jint);
		local_ref< java::lang::CharSequence > getDialogMessage();
		void setDialogIcon(local_ref< android::graphics::drawable::Drawable >  const&);
		void setDialogIcon(jint);
		local_ref< android::graphics::drawable::Drawable > getDialogIcon();
		void setPositiveButtonText(local_ref< java::lang::CharSequence >  const&);
		void setPositiveButtonText(jint);
		local_ref< java::lang::CharSequence > getPositiveButtonText();
		void setNegativeButtonText(local_ref< java::lang::CharSequence >  const&);
		void setNegativeButtonText(jint);
		local_ref< java::lang::CharSequence > getNegativeButtonText();
		void setDialogLayoutResource(jint);
		jint getDialogLayoutResource();
		void onClick(local_ref< android::content::DialogInterface >  const&, jint);
		void onDismiss(local_ref< android::content::DialogInterface >  const&);
		local_ref< android::app::Dialog > getDialog();
		void onActivityDestroy();
	}; //class DialogPreference

} //namespace preference
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_PREFERENCE_DIALOGPREFERENCE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_PREFERENCE_DIALOGPREFERENCE_HPP_IMPL
#define J2CPP_ANDROID_PREFERENCE_DIALOGPREFERENCE_HPP_IMPL

namespace j2cpp {



android::preference::DialogPreference::operator local_ref<android::preference::Preference>() const
{
	return local_ref<android::preference::Preference>(get_jobject());
}

android::preference::DialogPreference::operator local_ref<android::content::DialogInterface_::OnClickListener>() const
{
	return local_ref<android::content::DialogInterface_::OnClickListener>(get_jobject());
}

android::preference::DialogPreference::operator local_ref<android::content::DialogInterface_::OnDismissListener>() const
{
	return local_ref<android::content::DialogInterface_::OnDismissListener>(get_jobject());
}

android::preference::DialogPreference::operator local_ref<android::preference::PreferenceManager_::OnActivityDestroyListener>() const
{
	return local_ref<android::preference::PreferenceManager_::OnActivityDestroyListener>(get_jobject());
}


android::preference::DialogPreference::DialogPreference(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1, jint a2)
: object<android::preference::DialogPreference>(
	call_new_object<
		android::preference::DialogPreference::J2CPP_CLASS_NAME,
		android::preference::DialogPreference::J2CPP_METHOD_NAME(0),
		android::preference::DialogPreference::J2CPP_METHOD_SIGNATURE(0)>
	(a0, a1, a2)
)
{
}



android::preference::DialogPreference::DialogPreference(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1)
: object<android::preference::DialogPreference>(
	call_new_object<
		android::preference::DialogPreference::J2CPP_CLASS_NAME,
		android::preference::DialogPreference::J2CPP_METHOD_NAME(1),
		android::preference::DialogPreference::J2CPP_METHOD_SIGNATURE(1)>
	(a0, a1)
)
{
}


void android::preference::DialogPreference::setDialogTitle(local_ref< java::lang::CharSequence > const &a0)
{
	return call_method<
		android::preference::DialogPreference::J2CPP_CLASS_NAME,
		android::preference::DialogPreference::J2CPP_METHOD_NAME(2),
		android::preference::DialogPreference::J2CPP_METHOD_SIGNATURE(2), 
		void >
	(get_jobject(), a0);
}

void android::preference::DialogPreference::setDialogTitle(jint a0)
{
	return call_method<
		android::preference::DialogPreference::J2CPP_CLASS_NAME,
		android::preference::DialogPreference::J2CPP_METHOD_NAME(3),
		android::preference::DialogPreference::J2CPP_METHOD_SIGNATURE(3), 
		void >
	(get_jobject(), a0);
}

local_ref< java::lang::CharSequence > android::preference::DialogPreference::getDialogTitle()
{
	return call_method<
		android::preference::DialogPreference::J2CPP_CLASS_NAME,
		android::preference::DialogPreference::J2CPP_METHOD_NAME(4),
		android::preference::DialogPreference::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::lang::CharSequence > >
	(get_jobject());
}

void android::preference::DialogPreference::setDialogMessage(local_ref< java::lang::CharSequence > const &a0)
{
	return call_method<
		android::preference::DialogPreference::J2CPP_CLASS_NAME,
		android::preference::DialogPreference::J2CPP_METHOD_NAME(5),
		android::preference::DialogPreference::J2CPP_METHOD_SIGNATURE(5), 
		void >
	(get_jobject(), a0);
}

void android::preference::DialogPreference::setDialogMessage(jint a0)
{
	return call_method<
		android::preference::DialogPreference::J2CPP_CLASS_NAME,
		android::preference::DialogPreference::J2CPP_METHOD_NAME(6),
		android::preference::DialogPreference::J2CPP_METHOD_SIGNATURE(6), 
		void >
	(get_jobject(), a0);
}

local_ref< java::lang::CharSequence > android::preference::DialogPreference::getDialogMessage()
{
	return call_method<
		android::preference::DialogPreference::J2CPP_CLASS_NAME,
		android::preference::DialogPreference::J2CPP_METHOD_NAME(7),
		android::preference::DialogPreference::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< java::lang::CharSequence > >
	(get_jobject());
}

void android::preference::DialogPreference::setDialogIcon(local_ref< android::graphics::drawable::Drawable > const &a0)
{
	return call_method<
		android::preference::DialogPreference::J2CPP_CLASS_NAME,
		android::preference::DialogPreference::J2CPP_METHOD_NAME(8),
		android::preference::DialogPreference::J2CPP_METHOD_SIGNATURE(8), 
		void >
	(get_jobject(), a0);
}

void android::preference::DialogPreference::setDialogIcon(jint a0)
{
	return call_method<
		android::preference::DialogPreference::J2CPP_CLASS_NAME,
		android::preference::DialogPreference::J2CPP_METHOD_NAME(9),
		android::preference::DialogPreference::J2CPP_METHOD_SIGNATURE(9), 
		void >
	(get_jobject(), a0);
}

local_ref< android::graphics::drawable::Drawable > android::preference::DialogPreference::getDialogIcon()
{
	return call_method<
		android::preference::DialogPreference::J2CPP_CLASS_NAME,
		android::preference::DialogPreference::J2CPP_METHOD_NAME(10),
		android::preference::DialogPreference::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< android::graphics::drawable::Drawable > >
	(get_jobject());
}

void android::preference::DialogPreference::setPositiveButtonText(local_ref< java::lang::CharSequence > const &a0)
{
	return call_method<
		android::preference::DialogPreference::J2CPP_CLASS_NAME,
		android::preference::DialogPreference::J2CPP_METHOD_NAME(11),
		android::preference::DialogPreference::J2CPP_METHOD_SIGNATURE(11), 
		void >
	(get_jobject(), a0);
}

void android::preference::DialogPreference::setPositiveButtonText(jint a0)
{
	return call_method<
		android::preference::DialogPreference::J2CPP_CLASS_NAME,
		android::preference::DialogPreference::J2CPP_METHOD_NAME(12),
		android::preference::DialogPreference::J2CPP_METHOD_SIGNATURE(12), 
		void >
	(get_jobject(), a0);
}

local_ref< java::lang::CharSequence > android::preference::DialogPreference::getPositiveButtonText()
{
	return call_method<
		android::preference::DialogPreference::J2CPP_CLASS_NAME,
		android::preference::DialogPreference::J2CPP_METHOD_NAME(13),
		android::preference::DialogPreference::J2CPP_METHOD_SIGNATURE(13), 
		local_ref< java::lang::CharSequence > >
	(get_jobject());
}

void android::preference::DialogPreference::setNegativeButtonText(local_ref< java::lang::CharSequence > const &a0)
{
	return call_method<
		android::preference::DialogPreference::J2CPP_CLASS_NAME,
		android::preference::DialogPreference::J2CPP_METHOD_NAME(14),
		android::preference::DialogPreference::J2CPP_METHOD_SIGNATURE(14), 
		void >
	(get_jobject(), a0);
}

void android::preference::DialogPreference::setNegativeButtonText(jint a0)
{
	return call_method<
		android::preference::DialogPreference::J2CPP_CLASS_NAME,
		android::preference::DialogPreference::J2CPP_METHOD_NAME(15),
		android::preference::DialogPreference::J2CPP_METHOD_SIGNATURE(15), 
		void >
	(get_jobject(), a0);
}

local_ref< java::lang::CharSequence > android::preference::DialogPreference::getNegativeButtonText()
{
	return call_method<
		android::preference::DialogPreference::J2CPP_CLASS_NAME,
		android::preference::DialogPreference::J2CPP_METHOD_NAME(16),
		android::preference::DialogPreference::J2CPP_METHOD_SIGNATURE(16), 
		local_ref< java::lang::CharSequence > >
	(get_jobject());
}

void android::preference::DialogPreference::setDialogLayoutResource(jint a0)
{
	return call_method<
		android::preference::DialogPreference::J2CPP_CLASS_NAME,
		android::preference::DialogPreference::J2CPP_METHOD_NAME(17),
		android::preference::DialogPreference::J2CPP_METHOD_SIGNATURE(17), 
		void >
	(get_jobject(), a0);
}

jint android::preference::DialogPreference::getDialogLayoutResource()
{
	return call_method<
		android::preference::DialogPreference::J2CPP_CLASS_NAME,
		android::preference::DialogPreference::J2CPP_METHOD_NAME(18),
		android::preference::DialogPreference::J2CPP_METHOD_SIGNATURE(18), 
		jint >
	(get_jobject());
}






void android::preference::DialogPreference::onClick(local_ref< android::content::DialogInterface > const &a0, jint a1)
{
	return call_method<
		android::preference::DialogPreference::J2CPP_CLASS_NAME,
		android::preference::DialogPreference::J2CPP_METHOD_NAME(24),
		android::preference::DialogPreference::J2CPP_METHOD_SIGNATURE(24), 
		void >
	(get_jobject(), a0, a1);
}

void android::preference::DialogPreference::onDismiss(local_ref< android::content::DialogInterface > const &a0)
{
	return call_method<
		android::preference::DialogPreference::J2CPP_CLASS_NAME,
		android::preference::DialogPreference::J2CPP_METHOD_NAME(25),
		android::preference::DialogPreference::J2CPP_METHOD_SIGNATURE(25), 
		void >
	(get_jobject(), a0);
}


local_ref< android::app::Dialog > android::preference::DialogPreference::getDialog()
{
	return call_method<
		android::preference::DialogPreference::J2CPP_CLASS_NAME,
		android::preference::DialogPreference::J2CPP_METHOD_NAME(27),
		android::preference::DialogPreference::J2CPP_METHOD_SIGNATURE(27), 
		local_ref< android::app::Dialog > >
	(get_jobject());
}

void android::preference::DialogPreference::onActivityDestroy()
{
	return call_method<
		android::preference::DialogPreference::J2CPP_CLASS_NAME,
		android::preference::DialogPreference::J2CPP_METHOD_NAME(28),
		android::preference::DialogPreference::J2CPP_METHOD_SIGNATURE(28), 
		void >
	(get_jobject());
}




J2CPP_DEFINE_CLASS(android::preference::DialogPreference,"android/preference/DialogPreference")
J2CPP_DEFINE_METHOD(android::preference::DialogPreference,0,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;I)V")
J2CPP_DEFINE_METHOD(android::preference::DialogPreference,1,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;)V")
J2CPP_DEFINE_METHOD(android::preference::DialogPreference,2,"setDialogTitle","(Ljava/lang/CharSequence;)V")
J2CPP_DEFINE_METHOD(android::preference::DialogPreference,3,"setDialogTitle","(I)V")
J2CPP_DEFINE_METHOD(android::preference::DialogPreference,4,"getDialogTitle","()Ljava/lang/CharSequence;")
J2CPP_DEFINE_METHOD(android::preference::DialogPreference,5,"setDialogMessage","(Ljava/lang/CharSequence;)V")
J2CPP_DEFINE_METHOD(android::preference::DialogPreference,6,"setDialogMessage","(I)V")
J2CPP_DEFINE_METHOD(android::preference::DialogPreference,7,"getDialogMessage","()Ljava/lang/CharSequence;")
J2CPP_DEFINE_METHOD(android::preference::DialogPreference,8,"setDialogIcon","(Landroid/graphics/drawable/Drawable;)V")
J2CPP_DEFINE_METHOD(android::preference::DialogPreference,9,"setDialogIcon","(I)V")
J2CPP_DEFINE_METHOD(android::preference::DialogPreference,10,"getDialogIcon","()Landroid/graphics/drawable/Drawable;")
J2CPP_DEFINE_METHOD(android::preference::DialogPreference,11,"setPositiveButtonText","(Ljava/lang/CharSequence;)V")
J2CPP_DEFINE_METHOD(android::preference::DialogPreference,12,"setPositiveButtonText","(I)V")
J2CPP_DEFINE_METHOD(android::preference::DialogPreference,13,"getPositiveButtonText","()Ljava/lang/CharSequence;")
J2CPP_DEFINE_METHOD(android::preference::DialogPreference,14,"setNegativeButtonText","(Ljava/lang/CharSequence;)V")
J2CPP_DEFINE_METHOD(android::preference::DialogPreference,15,"setNegativeButtonText","(I)V")
J2CPP_DEFINE_METHOD(android::preference::DialogPreference,16,"getNegativeButtonText","()Ljava/lang/CharSequence;")
J2CPP_DEFINE_METHOD(android::preference::DialogPreference,17,"setDialogLayoutResource","(I)V")
J2CPP_DEFINE_METHOD(android::preference::DialogPreference,18,"getDialogLayoutResource","()I")
J2CPP_DEFINE_METHOD(android::preference::DialogPreference,19,"onPrepareDialogBuilder","(Landroid/app/AlertDialog$Builder;)V")
J2CPP_DEFINE_METHOD(android::preference::DialogPreference,20,"onClick","()V")
J2CPP_DEFINE_METHOD(android::preference::DialogPreference,21,"showDialog","(Landroid/os/Bundle;)V")
J2CPP_DEFINE_METHOD(android::preference::DialogPreference,22,"onCreateDialogView","()Landroid/view/View;")
J2CPP_DEFINE_METHOD(android::preference::DialogPreference,23,"onBindDialogView","(Landroid/view/View;)V")
J2CPP_DEFINE_METHOD(android::preference::DialogPreference,24,"onClick","(Landroid/content/DialogInterface;I)V")
J2CPP_DEFINE_METHOD(android::preference::DialogPreference,25,"onDismiss","(Landroid/content/DialogInterface;)V")
J2CPP_DEFINE_METHOD(android::preference::DialogPreference,26,"onDialogClosed","(Z)V")
J2CPP_DEFINE_METHOD(android::preference::DialogPreference,27,"getDialog","()Landroid/app/Dialog;")
J2CPP_DEFINE_METHOD(android::preference::DialogPreference,28,"onActivityDestroy","()V")
J2CPP_DEFINE_METHOD(android::preference::DialogPreference,29,"onSaveInstanceState","()Landroid/os/Parcelable;")
J2CPP_DEFINE_METHOD(android::preference::DialogPreference,30,"onRestoreInstanceState","(Landroid/os/Parcelable;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_PREFERENCE_DIALOGPREFERENCE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
