/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.accessibilityservice.AccessibilityService
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_ACCESSIBILITYSERVICE_ACCESSIBILITYSERVICE_HPP_DECL
#define J2CPP_ANDROID_ACCESSIBILITYSERVICE_ACCESSIBILITYSERVICE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace android { namespace app { class Service; } } }
namespace j2cpp { namespace android { namespace content { class Intent; } } }
namespace j2cpp { namespace android { namespace content { class ComponentCallbacks; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace content { class ContextWrapper; } } }
namespace j2cpp { namespace android { namespace accessibilityservice { class AccessibilityServiceInfo; } } }
namespace j2cpp { namespace android { namespace view { namespace accessibility { class AccessibilityEvent; } } } }
namespace j2cpp { namespace android { namespace os { class IBinder; } } }


#include <android/accessibilityservice/AccessibilityServiceInfo.hpp>
#include <android/app/Service.hpp>
#include <android/content/ComponentCallbacks.hpp>
#include <android/content/Context.hpp>
#include <android/content/ContextWrapper.hpp>
#include <android/content/Intent.hpp>
#include <android/os/IBinder.hpp>
#include <android/view/accessibility/AccessibilityEvent.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace accessibilityservice {

	class AccessibilityService;
	class AccessibilityService
		: public object<AccessibilityService>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)
		J2CPP_DECLARE_FIELD(0)

		explicit AccessibilityService(jobject jobj)
		: object<AccessibilityService>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::app::Service>() const;
		operator local_ref<android::content::ComponentCallbacks>() const;
		operator local_ref<android::content::Context>() const;
		operator local_ref<android::content::ContextWrapper>() const;


		AccessibilityService();
		void onAccessibilityEvent(local_ref< android::view::accessibility::AccessibilityEvent >  const&);
		void onInterrupt();
		void setServiceInfo(local_ref< android::accessibilityservice::AccessibilityServiceInfo >  const&);
		local_ref< android::os::IBinder > onBind(local_ref< android::content::Intent >  const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::String > > SERVICE_INTERFACE;
	}; //class AccessibilityService

} //namespace accessibilityservice
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_ACCESSIBILITYSERVICE_ACCESSIBILITYSERVICE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_ACCESSIBILITYSERVICE_ACCESSIBILITYSERVICE_HPP_IMPL
#define J2CPP_ANDROID_ACCESSIBILITYSERVICE_ACCESSIBILITYSERVICE_HPP_IMPL

namespace j2cpp {



android::accessibilityservice::AccessibilityService::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::accessibilityservice::AccessibilityService::operator local_ref<android::app::Service>() const
{
	return local_ref<android::app::Service>(get_jobject());
}

android::accessibilityservice::AccessibilityService::operator local_ref<android::content::ComponentCallbacks>() const
{
	return local_ref<android::content::ComponentCallbacks>(get_jobject());
}

android::accessibilityservice::AccessibilityService::operator local_ref<android::content::Context>() const
{
	return local_ref<android::content::Context>(get_jobject());
}

android::accessibilityservice::AccessibilityService::operator local_ref<android::content::ContextWrapper>() const
{
	return local_ref<android::content::ContextWrapper>(get_jobject());
}


android::accessibilityservice::AccessibilityService::AccessibilityService()
: object<android::accessibilityservice::AccessibilityService>(
	call_new_object<
		android::accessibilityservice::AccessibilityService::J2CPP_CLASS_NAME,
		android::accessibilityservice::AccessibilityService::J2CPP_METHOD_NAME(0),
		android::accessibilityservice::AccessibilityService::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}


void android::accessibilityservice::AccessibilityService::onAccessibilityEvent(local_ref< android::view::accessibility::AccessibilityEvent > const &a0)
{
	return call_method<
		android::accessibilityservice::AccessibilityService::J2CPP_CLASS_NAME,
		android::accessibilityservice::AccessibilityService::J2CPP_METHOD_NAME(1),
		android::accessibilityservice::AccessibilityService::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject(), a0);
}

void android::accessibilityservice::AccessibilityService::onInterrupt()
{
	return call_method<
		android::accessibilityservice::AccessibilityService::J2CPP_CLASS_NAME,
		android::accessibilityservice::AccessibilityService::J2CPP_METHOD_NAME(2),
		android::accessibilityservice::AccessibilityService::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject());
}


void android::accessibilityservice::AccessibilityService::setServiceInfo(local_ref< android::accessibilityservice::AccessibilityServiceInfo > const &a0)
{
	return call_method<
		android::accessibilityservice::AccessibilityService::J2CPP_CLASS_NAME,
		android::accessibilityservice::AccessibilityService::J2CPP_METHOD_NAME(4),
		android::accessibilityservice::AccessibilityService::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0);
}

local_ref< android::os::IBinder > android::accessibilityservice::AccessibilityService::onBind(local_ref< android::content::Intent > const &a0)
{
	return call_method<
		android::accessibilityservice::AccessibilityService::J2CPP_CLASS_NAME,
		android::accessibilityservice::AccessibilityService::J2CPP_METHOD_NAME(5),
		android::accessibilityservice::AccessibilityService::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< android::os::IBinder >
	>(get_jobject(), a0);
}


static_field<
	android::accessibilityservice::AccessibilityService::J2CPP_CLASS_NAME,
	android::accessibilityservice::AccessibilityService::J2CPP_FIELD_NAME(0),
	android::accessibilityservice::AccessibilityService::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::lang::String >
> android::accessibilityservice::AccessibilityService::SERVICE_INTERFACE;


J2CPP_DEFINE_CLASS(android::accessibilityservice::AccessibilityService,"android/accessibilityservice/AccessibilityService")
J2CPP_DEFINE_METHOD(android::accessibilityservice::AccessibilityService,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::accessibilityservice::AccessibilityService,1,"onAccessibilityEvent","(Landroid/view/accessibility/AccessibilityEvent;)V")
J2CPP_DEFINE_METHOD(android::accessibilityservice::AccessibilityService,2,"onInterrupt","()V")
J2CPP_DEFINE_METHOD(android::accessibilityservice::AccessibilityService,3,"onServiceConnected","()V")
J2CPP_DEFINE_METHOD(android::accessibilityservice::AccessibilityService,4,"setServiceInfo","(Landroid/accessibilityservice/AccessibilityServiceInfo;)V")
J2CPP_DEFINE_METHOD(android::accessibilityservice::AccessibilityService,5,"onBind","(Landroid/content/Intent;)Landroid/os/IBinder;")
J2CPP_DEFINE_FIELD(android::accessibilityservice::AccessibilityService,0,"SERVICE_INTERFACE","Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_ACCESSIBILITYSERVICE_ACCESSIBILITYSERVICE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
