/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.appwidget.AppWidgetHost
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_APPWIDGET_APPWIDGETHOST_HPP_DECL
#define J2CPP_ANDROID_APPWIDGET_APPWIDGETHOST_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace appwidget { class AppWidgetHostView; } } }
namespace j2cpp { namespace android { namespace appwidget { class AppWidgetProviderInfo; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }


#include <android/appwidget/AppWidgetHostView.hpp>
#include <android/appwidget/AppWidgetProviderInfo.hpp>
#include <android/content/Context.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace appwidget {

	class AppWidgetHost;
	class AppWidgetHost
		: public object<AppWidgetHost>
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

		explicit AppWidgetHost(jobject jobj)
		: object<AppWidgetHost>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		AppWidgetHost(local_ref< android::content::Context > const&, jint);
		void startListening();
		void stopListening();
		jint allocateAppWidgetId();
		void deleteAppWidgetId(jint);
		void deleteHost();
		static void deleteAllHosts();
		local_ref< android::appwidget::AppWidgetHostView > createView(local_ref< android::content::Context >  const&, jint, local_ref< android::appwidget::AppWidgetProviderInfo >  const&);
	}; //class AppWidgetHost

} //namespace appwidget
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_APPWIDGET_APPWIDGETHOST_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_APPWIDGET_APPWIDGETHOST_HPP_IMPL
#define J2CPP_ANDROID_APPWIDGET_APPWIDGETHOST_HPP_IMPL

namespace j2cpp {



android::appwidget::AppWidgetHost::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::appwidget::AppWidgetHost::AppWidgetHost(local_ref< android::content::Context > const &a0, jint a1)
: object<android::appwidget::AppWidgetHost>(
	call_new_object<
		android::appwidget::AppWidgetHost::J2CPP_CLASS_NAME,
		android::appwidget::AppWidgetHost::J2CPP_METHOD_NAME(0),
		android::appwidget::AppWidgetHost::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1)
)
{
}


void android::appwidget::AppWidgetHost::startListening()
{
	return call_method<
		android::appwidget::AppWidgetHost::J2CPP_CLASS_NAME,
		android::appwidget::AppWidgetHost::J2CPP_METHOD_NAME(1),
		android::appwidget::AppWidgetHost::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject());
}

void android::appwidget::AppWidgetHost::stopListening()
{
	return call_method<
		android::appwidget::AppWidgetHost::J2CPP_CLASS_NAME,
		android::appwidget::AppWidgetHost::J2CPP_METHOD_NAME(2),
		android::appwidget::AppWidgetHost::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject());
}

jint android::appwidget::AppWidgetHost::allocateAppWidgetId()
{
	return call_method<
		android::appwidget::AppWidgetHost::J2CPP_CLASS_NAME,
		android::appwidget::AppWidgetHost::J2CPP_METHOD_NAME(3),
		android::appwidget::AppWidgetHost::J2CPP_METHOD_SIGNATURE(3), 
		jint
	>(get_jobject());
}

void android::appwidget::AppWidgetHost::deleteAppWidgetId(jint a0)
{
	return call_method<
		android::appwidget::AppWidgetHost::J2CPP_CLASS_NAME,
		android::appwidget::AppWidgetHost::J2CPP_METHOD_NAME(4),
		android::appwidget::AppWidgetHost::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0);
}

void android::appwidget::AppWidgetHost::deleteHost()
{
	return call_method<
		android::appwidget::AppWidgetHost::J2CPP_CLASS_NAME,
		android::appwidget::AppWidgetHost::J2CPP_METHOD_NAME(5),
		android::appwidget::AppWidgetHost::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject());
}

void android::appwidget::AppWidgetHost::deleteAllHosts()
{
	return call_static_method<
		android::appwidget::AppWidgetHost::J2CPP_CLASS_NAME,
		android::appwidget::AppWidgetHost::J2CPP_METHOD_NAME(6),
		android::appwidget::AppWidgetHost::J2CPP_METHOD_SIGNATURE(6), 
		void
	>();
}

local_ref< android::appwidget::AppWidgetHostView > android::appwidget::AppWidgetHost::createView(local_ref< android::content::Context > const &a0, jint a1, local_ref< android::appwidget::AppWidgetProviderInfo > const &a2)
{
	return call_method<
		android::appwidget::AppWidgetHost::J2CPP_CLASS_NAME,
		android::appwidget::AppWidgetHost::J2CPP_METHOD_NAME(7),
		android::appwidget::AppWidgetHost::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< android::appwidget::AppWidgetHostView >
	>(get_jobject(), a0, a1, a2);
}




J2CPP_DEFINE_CLASS(android::appwidget::AppWidgetHost,"android/appwidget/AppWidgetHost")
J2CPP_DEFINE_METHOD(android::appwidget::AppWidgetHost,0,"<init>","(Landroid/content/Context;I)V")
J2CPP_DEFINE_METHOD(android::appwidget::AppWidgetHost,1,"startListening","()V")
J2CPP_DEFINE_METHOD(android::appwidget::AppWidgetHost,2,"stopListening","()V")
J2CPP_DEFINE_METHOD(android::appwidget::AppWidgetHost,3,"allocateAppWidgetId","()I")
J2CPP_DEFINE_METHOD(android::appwidget::AppWidgetHost,4,"deleteAppWidgetId","(I)V")
J2CPP_DEFINE_METHOD(android::appwidget::AppWidgetHost,5,"deleteHost","()V")
J2CPP_DEFINE_METHOD(android::appwidget::AppWidgetHost,6,"deleteAllHosts","()V")
J2CPP_DEFINE_METHOD(android::appwidget::AppWidgetHost,7,"createView","(Landroid/content/Context;ILandroid/appwidget/AppWidgetProviderInfo;)Landroid/appwidget/AppWidgetHostView;")
J2CPP_DEFINE_METHOD(android::appwidget::AppWidgetHost,8,"onCreateView","(Landroid/content/Context;ILandroid/appwidget/AppWidgetProviderInfo;)Landroid/appwidget/AppWidgetHostView;")
J2CPP_DEFINE_METHOD(android::appwidget::AppWidgetHost,9,"onProviderChanged","(ILandroid/appwidget/AppWidgetProviderInfo;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_APPWIDGET_APPWIDGETHOST_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
