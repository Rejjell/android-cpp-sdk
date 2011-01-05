/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.content.pm.PathPermission
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_PM_PATHPERMISSION_HPP_DECL
#define J2CPP_ANDROID_CONTENT_PM_PATHPERMISSION_HPP_DECL


namespace j2cpp { namespace android { namespace os { class Parcelable; } } }
namespace j2cpp { namespace android { namespace os { namespace Parcelable_ { class Creator; } } } }
namespace j2cpp { namespace android { namespace os { class Parcel; } } }
namespace j2cpp { namespace android { namespace os { class PatternMatcher; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/os/Parcel.hpp>
#include <android/os/Parcelable.hpp>
#include <android/os/PatternMatcher.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace content { namespace pm {

	class PathPermission;
	class PathPermission
		: public object<PathPermission>
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

		explicit PathPermission(jobject jobj)
		: object<PathPermission>(jobj)
		{
		}

		operator local_ref<android::os::Parcelable>() const;
		operator local_ref<android::os::PatternMatcher>() const;
		operator local_ref<java::lang::Object>() const;


		PathPermission(local_ref< java::lang::String > const&, jint, local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		PathPermission(local_ref< android::os::Parcel > const&);
		local_ref< java::lang::String > getReadPermission();
		local_ref< java::lang::String > getWritePermission();
		void writeToParcel(local_ref< android::os::Parcel >  const&, jint);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< android::os::Parcelable_::Creator > > CREATOR;
	}; //class PathPermission

} //namespace pm
} //namespace content
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_PM_PATHPERMISSION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_PM_PATHPERMISSION_HPP_IMPL
#define J2CPP_ANDROID_CONTENT_PM_PATHPERMISSION_HPP_IMPL

namespace j2cpp {



android::content::pm::PathPermission::operator local_ref<android::os::Parcelable>() const
{
	return local_ref<android::os::Parcelable>(get_jobject());
}

android::content::pm::PathPermission::operator local_ref<android::os::PatternMatcher>() const
{
	return local_ref<android::os::PatternMatcher>(get_jobject());
}

android::content::pm::PathPermission::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::content::pm::PathPermission::PathPermission(local_ref< java::lang::String > const &a0, jint a1, local_ref< java::lang::String > const &a2, local_ref< java::lang::String > const &a3)
: object<android::content::pm::PathPermission>(
	call_new_object<
		android::content::pm::PathPermission::J2CPP_CLASS_NAME,
		android::content::pm::PathPermission::J2CPP_METHOD_NAME(0),
		android::content::pm::PathPermission::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1, a2, a3)
)
{
}



android::content::pm::PathPermission::PathPermission(local_ref< android::os::Parcel > const &a0)
: object<android::content::pm::PathPermission>(
	call_new_object<
		android::content::pm::PathPermission::J2CPP_CLASS_NAME,
		android::content::pm::PathPermission::J2CPP_METHOD_NAME(1),
		android::content::pm::PathPermission::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}


local_ref< java::lang::String > android::content::pm::PathPermission::getReadPermission()
{
	return call_method<
		android::content::pm::PathPermission::J2CPP_CLASS_NAME,
		android::content::pm::PathPermission::J2CPP_METHOD_NAME(2),
		android::content::pm::PathPermission::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::lang::String > android::content::pm::PathPermission::getWritePermission()
{
	return call_method<
		android::content::pm::PathPermission::J2CPP_CLASS_NAME,
		android::content::pm::PathPermission::J2CPP_METHOD_NAME(3),
		android::content::pm::PathPermission::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::lang::String >
	>(get_jobject());
}

void android::content::pm::PathPermission::writeToParcel(local_ref< android::os::Parcel > const &a0, jint a1)
{
	return call_method<
		android::content::pm::PathPermission::J2CPP_CLASS_NAME,
		android::content::pm::PathPermission::J2CPP_METHOD_NAME(4),
		android::content::pm::PathPermission::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0, a1);
}



static_field<
	android::content::pm::PathPermission::J2CPP_CLASS_NAME,
	android::content::pm::PathPermission::J2CPP_FIELD_NAME(0),
	android::content::pm::PathPermission::J2CPP_FIELD_SIGNATURE(0),
	local_ref< android::os::Parcelable_::Creator >
> android::content::pm::PathPermission::CREATOR;


J2CPP_DEFINE_CLASS(android::content::pm::PathPermission,"android/content/pm/PathPermission")
J2CPP_DEFINE_METHOD(android::content::pm::PathPermission,0,"<init>","(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::content::pm::PathPermission,1,"<init>","(Landroid/os/Parcel;)V")
J2CPP_DEFINE_METHOD(android::content::pm::PathPermission,2,"getReadPermission","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::content::pm::PathPermission,3,"getWritePermission","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::content::pm::PathPermission,4,"writeToParcel","(Landroid/os/Parcel;I)V")
J2CPP_DEFINE_METHOD(android::content::pm::PathPermission,5,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::content::pm::PathPermission,0,"CREATOR","Landroid/os/Parcelable$Creator;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_PM_PATHPERMISSION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
