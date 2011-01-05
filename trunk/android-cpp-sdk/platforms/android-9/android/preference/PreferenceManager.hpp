/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.preference.PreferenceManager
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_PREFERENCE_PREFERENCEMANAGER_HPP_DECL
#define J2CPP_ANDROID_PREFERENCE_PREFERENCEMANAGER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace content { class SharedPreferences; } } }
namespace j2cpp { namespace android { namespace content { class Intent; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace preference { class Preference; } } }
namespace j2cpp { namespace android { namespace preference { class PreferenceScreen; } } }


#include <android/content/Context.hpp>
#include <android/content/Intent.hpp>
#include <android/content/SharedPreferences.hpp>
#include <android/preference/Preference.hpp>
#include <android/preference/PreferenceScreen.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace preference {

	class PreferenceManager;
	namespace PreferenceManager_ {

		class OnActivityDestroyListener;
		class OnActivityDestroyListener
			: public object<OnActivityDestroyListener>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			explicit OnActivityDestroyListener(jobject jobj)
			: object<OnActivityDestroyListener>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			void onActivityDestroy();
		}; //class OnActivityDestroyListener

		class OnActivityStopListener;
		class OnActivityStopListener
			: public object<OnActivityStopListener>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			explicit OnActivityStopListener(jobject jobj)
			: object<OnActivityStopListener>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			void onActivityStop();
		}; //class OnActivityStopListener

		class OnActivityResultListener;
		class OnActivityResultListener
			: public object<OnActivityResultListener>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			explicit OnActivityResultListener(jobject jobj)
			: object<OnActivityResultListener>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			jboolean onActivityResult(jint, jint, local_ref< android::content::Intent >  const&);
		}; //class OnActivityResultListener

	} //namespace PreferenceManager_

	class PreferenceManager
		: public object<PreferenceManager>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)

		typedef PreferenceManager_::OnActivityDestroyListener OnActivityDestroyListener;
		typedef PreferenceManager_::OnActivityStopListener OnActivityStopListener;
		typedef PreferenceManager_::OnActivityResultListener OnActivityResultListener;

		explicit PreferenceManager(jobject jobj)
		: object<PreferenceManager>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		local_ref< android::preference::PreferenceScreen > createPreferenceScreen(local_ref< android::content::Context >  const&);
		local_ref< java::lang::String > getSharedPreferencesName();
		void setSharedPreferencesName(local_ref< java::lang::String >  const&);
		jint getSharedPreferencesMode();
		void setSharedPreferencesMode(jint);
		local_ref< android::content::SharedPreferences > getSharedPreferences();
		static local_ref< android::content::SharedPreferences > getDefaultSharedPreferences(local_ref< android::content::Context >  const&);
		local_ref< android::preference::Preference > findPreference(local_ref< java::lang::CharSequence >  const&);
		static void setDefaultValues(local_ref< android::content::Context >  const&, jint, jboolean);
		static void setDefaultValues(local_ref< android::content::Context >  const&, local_ref< java::lang::String >  const&, jint, jint, jboolean);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::String > > METADATA_KEY_PREFERENCES;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< java::lang::String > > KEY_HAS_SET_DEFAULT_VALUES;
	}; //class PreferenceManager

} //namespace preference
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_PREFERENCE_PREFERENCEMANAGER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_PREFERENCE_PREFERENCEMANAGER_HPP_IMPL
#define J2CPP_ANDROID_PREFERENCE_PREFERENCEMANAGER_HPP_IMPL

namespace j2cpp {




android::preference::PreferenceManager_::OnActivityDestroyListener::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void android::preference::PreferenceManager_::OnActivityDestroyListener::onActivityDestroy()
{
	return call_method<
		android::preference::PreferenceManager_::OnActivityDestroyListener::J2CPP_CLASS_NAME,
		android::preference::PreferenceManager_::OnActivityDestroyListener::J2CPP_METHOD_NAME(0),
		android::preference::PreferenceManager_::OnActivityDestroyListener::J2CPP_METHOD_SIGNATURE(0), 
		void
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(android::preference::PreferenceManager_::OnActivityDestroyListener,"android/preference/PreferenceManager$OnActivityDestroyListener")
J2CPP_DEFINE_METHOD(android::preference::PreferenceManager_::OnActivityDestroyListener,0,"onActivityDestroy","()V")


android::preference::PreferenceManager_::OnActivityStopListener::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void android::preference::PreferenceManager_::OnActivityStopListener::onActivityStop()
{
	return call_method<
		android::preference::PreferenceManager_::OnActivityStopListener::J2CPP_CLASS_NAME,
		android::preference::PreferenceManager_::OnActivityStopListener::J2CPP_METHOD_NAME(0),
		android::preference::PreferenceManager_::OnActivityStopListener::J2CPP_METHOD_SIGNATURE(0), 
		void
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(android::preference::PreferenceManager_::OnActivityStopListener,"android/preference/PreferenceManager$OnActivityStopListener")
J2CPP_DEFINE_METHOD(android::preference::PreferenceManager_::OnActivityStopListener,0,"onActivityStop","()V")


android::preference::PreferenceManager_::OnActivityResultListener::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

jboolean android::preference::PreferenceManager_::OnActivityResultListener::onActivityResult(jint a0, jint a1, local_ref< android::content::Intent > const &a2)
{
	return call_method<
		android::preference::PreferenceManager_::OnActivityResultListener::J2CPP_CLASS_NAME,
		android::preference::PreferenceManager_::OnActivityResultListener::J2CPP_METHOD_NAME(0),
		android::preference::PreferenceManager_::OnActivityResultListener::J2CPP_METHOD_SIGNATURE(0), 
		jboolean
	>(get_jobject(), a0, a1, a2);
}


J2CPP_DEFINE_CLASS(android::preference::PreferenceManager_::OnActivityResultListener,"android/preference/PreferenceManager$OnActivityResultListener")
J2CPP_DEFINE_METHOD(android::preference::PreferenceManager_::OnActivityResultListener,0,"onActivityResult","(IILandroid/content/Intent;)Z")



android::preference::PreferenceManager::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


local_ref< android::preference::PreferenceScreen > android::preference::PreferenceManager::createPreferenceScreen(local_ref< android::content::Context > const &a0)
{
	return call_method<
		android::preference::PreferenceManager::J2CPP_CLASS_NAME,
		android::preference::PreferenceManager::J2CPP_METHOD_NAME(1),
		android::preference::PreferenceManager::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< android::preference::PreferenceScreen >
	>(get_jobject(), a0);
}

local_ref< java::lang::String > android::preference::PreferenceManager::getSharedPreferencesName()
{
	return call_method<
		android::preference::PreferenceManager::J2CPP_CLASS_NAME,
		android::preference::PreferenceManager::J2CPP_METHOD_NAME(2),
		android::preference::PreferenceManager::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::lang::String >
	>(get_jobject());
}

void android::preference::PreferenceManager::setSharedPreferencesName(local_ref< java::lang::String > const &a0)
{
	return call_method<
		android::preference::PreferenceManager::J2CPP_CLASS_NAME,
		android::preference::PreferenceManager::J2CPP_METHOD_NAME(3),
		android::preference::PreferenceManager::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject(), a0);
}

jint android::preference::PreferenceManager::getSharedPreferencesMode()
{
	return call_method<
		android::preference::PreferenceManager::J2CPP_CLASS_NAME,
		android::preference::PreferenceManager::J2CPP_METHOD_NAME(4),
		android::preference::PreferenceManager::J2CPP_METHOD_SIGNATURE(4), 
		jint
	>(get_jobject());
}

void android::preference::PreferenceManager::setSharedPreferencesMode(jint a0)
{
	return call_method<
		android::preference::PreferenceManager::J2CPP_CLASS_NAME,
		android::preference::PreferenceManager::J2CPP_METHOD_NAME(5),
		android::preference::PreferenceManager::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject(), a0);
}

local_ref< android::content::SharedPreferences > android::preference::PreferenceManager::getSharedPreferences()
{
	return call_method<
		android::preference::PreferenceManager::J2CPP_CLASS_NAME,
		android::preference::PreferenceManager::J2CPP_METHOD_NAME(6),
		android::preference::PreferenceManager::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< android::content::SharedPreferences >
	>(get_jobject());
}

local_ref< android::content::SharedPreferences > android::preference::PreferenceManager::getDefaultSharedPreferences(local_ref< android::content::Context > const &a0)
{
	return call_static_method<
		android::preference::PreferenceManager::J2CPP_CLASS_NAME,
		android::preference::PreferenceManager::J2CPP_METHOD_NAME(7),
		android::preference::PreferenceManager::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< android::content::SharedPreferences >
	>(a0);
}

local_ref< android::preference::Preference > android::preference::PreferenceManager::findPreference(local_ref< java::lang::CharSequence > const &a0)
{
	return call_method<
		android::preference::PreferenceManager::J2CPP_CLASS_NAME,
		android::preference::PreferenceManager::J2CPP_METHOD_NAME(8),
		android::preference::PreferenceManager::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< android::preference::Preference >
	>(get_jobject(), a0);
}

void android::preference::PreferenceManager::setDefaultValues(local_ref< android::content::Context > const &a0, jint a1, jboolean a2)
{
	return call_static_method<
		android::preference::PreferenceManager::J2CPP_CLASS_NAME,
		android::preference::PreferenceManager::J2CPP_METHOD_NAME(9),
		android::preference::PreferenceManager::J2CPP_METHOD_SIGNATURE(9), 
		void
	>(a0, a1, a2);
}

void android::preference::PreferenceManager::setDefaultValues(local_ref< android::content::Context > const &a0, local_ref< java::lang::String > const &a1, jint a2, jint a3, jboolean a4)
{
	return call_static_method<
		android::preference::PreferenceManager::J2CPP_CLASS_NAME,
		android::preference::PreferenceManager::J2CPP_METHOD_NAME(10),
		android::preference::PreferenceManager::J2CPP_METHOD_SIGNATURE(10), 
		void
	>(a0, a1, a2, a3, a4);
}


static_field<
	android::preference::PreferenceManager::J2CPP_CLASS_NAME,
	android::preference::PreferenceManager::J2CPP_FIELD_NAME(0),
	android::preference::PreferenceManager::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::lang::String >
> android::preference::PreferenceManager::METADATA_KEY_PREFERENCES;

static_field<
	android::preference::PreferenceManager::J2CPP_CLASS_NAME,
	android::preference::PreferenceManager::J2CPP_FIELD_NAME(1),
	android::preference::PreferenceManager::J2CPP_FIELD_SIGNATURE(1),
	local_ref< java::lang::String >
> android::preference::PreferenceManager::KEY_HAS_SET_DEFAULT_VALUES;


J2CPP_DEFINE_CLASS(android::preference::PreferenceManager,"android/preference/PreferenceManager")
J2CPP_DEFINE_METHOD(android::preference::PreferenceManager,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::preference::PreferenceManager,1,"createPreferenceScreen","(Landroid/content/Context;)Landroid/preference/PreferenceScreen;")
J2CPP_DEFINE_METHOD(android::preference::PreferenceManager,2,"getSharedPreferencesName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::preference::PreferenceManager,3,"setSharedPreferencesName","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::preference::PreferenceManager,4,"getSharedPreferencesMode","()I")
J2CPP_DEFINE_METHOD(android::preference::PreferenceManager,5,"setSharedPreferencesMode","(I)V")
J2CPP_DEFINE_METHOD(android::preference::PreferenceManager,6,"getSharedPreferences","()Landroid/content/SharedPreferences;")
J2CPP_DEFINE_METHOD(android::preference::PreferenceManager,7,"getDefaultSharedPreferences","(Landroid/content/Context;)Landroid/content/SharedPreferences;")
J2CPP_DEFINE_METHOD(android::preference::PreferenceManager,8,"findPreference","(Ljava/lang/CharSequence;)Landroid/preference/Preference;")
J2CPP_DEFINE_METHOD(android::preference::PreferenceManager,9,"setDefaultValues","(Landroid/content/Context;IZ)V")
J2CPP_DEFINE_METHOD(android::preference::PreferenceManager,10,"setDefaultValues","(Landroid/content/Context;Ljava/lang/String;IIZ)V")
J2CPP_DEFINE_FIELD(android::preference::PreferenceManager,0,"METADATA_KEY_PREFERENCES","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::preference::PreferenceManager,1,"KEY_HAS_SET_DEFAULT_VALUES","Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_PREFERENCE_PREFERENCEMANAGER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
