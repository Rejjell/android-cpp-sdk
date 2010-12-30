/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.content.pm.PermissionGroupInfo
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_PM_PERMISSIONGROUPINFO_HPP_DECL
#define J2CPP_ANDROID_CONTENT_PM_PERMISSIONGROUPINFO_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace android { namespace content { namespace pm { class PackageManager; } } } }
namespace j2cpp { namespace android { namespace content { namespace pm { class PackageItemInfo; } } } }
namespace j2cpp { namespace android { namespace os { class Parcel; } } }
namespace j2cpp { namespace android { namespace os { class Parcelable; } } }
namespace j2cpp { namespace android { namespace os { namespace Parcelable_ { class Creator; } } } }


#include <android/content/pm/PackageItemInfo.hpp>
#include <android/content/pm/PackageManager.hpp>
#include <android/os/Parcel.hpp>
#include <android/os/Parcelable.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace content { namespace pm {

	class PermissionGroupInfo;
	class PermissionGroupInfo
		: public object<PermissionGroupInfo>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)

		explicit PermissionGroupInfo(jobject jobj)
		: object<PermissionGroupInfo>(jobj)
		, descriptionRes(jobj)
		, nonLocalizedDescription(jobj)
		{
		}

		operator local_ref<android::content::pm::PackageItemInfo>() const;
		operator local_ref<android::os::Parcelable>() const;


		PermissionGroupInfo();
		PermissionGroupInfo(local_ref< android::content::pm::PermissionGroupInfo > const&);
		local_ref< java::lang::CharSequence > loadDescription(local_ref< android::content::pm::PackageManager >  const&);
		local_ref< java::lang::String > toString();
		jint describeContents();
		void writeToParcel(local_ref< android::os::Parcel >  const&, jint);

		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > descriptionRes;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< java::lang::CharSequence > > nonLocalizedDescription;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< android::os::Parcelable_::Creator > > CREATOR;
	}; //class PermissionGroupInfo

} //namespace pm
} //namespace content
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_PM_PERMISSIONGROUPINFO_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_PM_PERMISSIONGROUPINFO_HPP_IMPL
#define J2CPP_ANDROID_CONTENT_PM_PERMISSIONGROUPINFO_HPP_IMPL

namespace j2cpp {



android::content::pm::PermissionGroupInfo::operator local_ref<android::content::pm::PackageItemInfo>() const
{
	return local_ref<android::content::pm::PackageItemInfo>(get_jobject());
}

android::content::pm::PermissionGroupInfo::operator local_ref<android::os::Parcelable>() const
{
	return local_ref<android::os::Parcelable>(get_jobject());
}


android::content::pm::PermissionGroupInfo::PermissionGroupInfo()
: object<android::content::pm::PermissionGroupInfo>(
	call_new_object<
		android::content::pm::PermissionGroupInfo::J2CPP_CLASS_NAME,
		android::content::pm::PermissionGroupInfo::J2CPP_METHOD_NAME(0),
		android::content::pm::PermissionGroupInfo::J2CPP_METHOD_SIGNATURE(0)>
	()
)
, descriptionRes(get_jobject())
, nonLocalizedDescription(get_jobject())
{
}



android::content::pm::PermissionGroupInfo::PermissionGroupInfo(local_ref< android::content::pm::PermissionGroupInfo > const &a0)
: object<android::content::pm::PermissionGroupInfo>(
	call_new_object<
		android::content::pm::PermissionGroupInfo::J2CPP_CLASS_NAME,
		android::content::pm::PermissionGroupInfo::J2CPP_METHOD_NAME(1),
		android::content::pm::PermissionGroupInfo::J2CPP_METHOD_SIGNATURE(1)>
	(a0)
)
, descriptionRes(get_jobject())
, nonLocalizedDescription(get_jobject())
{
}


local_ref< java::lang::CharSequence > android::content::pm::PermissionGroupInfo::loadDescription(local_ref< android::content::pm::PackageManager > const &a0)
{
	return call_method<
		android::content::pm::PermissionGroupInfo::J2CPP_CLASS_NAME,
		android::content::pm::PermissionGroupInfo::J2CPP_METHOD_NAME(2),
		android::content::pm::PermissionGroupInfo::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::lang::CharSequence > >
	(get_jobject(), a0);
}

local_ref< java::lang::String > android::content::pm::PermissionGroupInfo::toString()
{
	return call_method<
		android::content::pm::PermissionGroupInfo::J2CPP_CLASS_NAME,
		android::content::pm::PermissionGroupInfo::J2CPP_METHOD_NAME(3),
		android::content::pm::PermissionGroupInfo::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::lang::String > >
	(get_jobject());
}

jint android::content::pm::PermissionGroupInfo::describeContents()
{
	return call_method<
		android::content::pm::PermissionGroupInfo::J2CPP_CLASS_NAME,
		android::content::pm::PermissionGroupInfo::J2CPP_METHOD_NAME(4),
		android::content::pm::PermissionGroupInfo::J2CPP_METHOD_SIGNATURE(4), 
		jint >
	(get_jobject());
}

void android::content::pm::PermissionGroupInfo::writeToParcel(local_ref< android::os::Parcel > const &a0, jint a1)
{
	return call_method<
		android::content::pm::PermissionGroupInfo::J2CPP_CLASS_NAME,
		android::content::pm::PermissionGroupInfo::J2CPP_METHOD_NAME(5),
		android::content::pm::PermissionGroupInfo::J2CPP_METHOD_SIGNATURE(5), 
		void >
	(get_jobject(), a0, a1);
}



static_field<
	android::content::pm::PermissionGroupInfo::J2CPP_CLASS_NAME,
	android::content::pm::PermissionGroupInfo::J2CPP_FIELD_NAME(2),
	android::content::pm::PermissionGroupInfo::J2CPP_FIELD_SIGNATURE(2),
	local_ref< android::os::Parcelable_::Creator >
> android::content::pm::PermissionGroupInfo::CREATOR;


J2CPP_DEFINE_CLASS(android::content::pm::PermissionGroupInfo,"android/content/pm/PermissionGroupInfo")
J2CPP_DEFINE_METHOD(android::content::pm::PermissionGroupInfo,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::content::pm::PermissionGroupInfo,1,"<init>","(Landroid/content/pm/PermissionGroupInfo;)V")
J2CPP_DEFINE_METHOD(android::content::pm::PermissionGroupInfo,2,"loadDescription","(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;")
J2CPP_DEFINE_METHOD(android::content::pm::PermissionGroupInfo,3,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::content::pm::PermissionGroupInfo,4,"describeContents","()I")
J2CPP_DEFINE_METHOD(android::content::pm::PermissionGroupInfo,5,"writeToParcel","(Landroid/os/Parcel;I)V")
J2CPP_DEFINE_METHOD(android::content::pm::PermissionGroupInfo,6,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::content::pm::PermissionGroupInfo,0,"descriptionRes","I")
J2CPP_DEFINE_FIELD(android::content::pm::PermissionGroupInfo,1,"nonLocalizedDescription","Ljava/lang/CharSequence;")
J2CPP_DEFINE_FIELD(android::content::pm::PermissionGroupInfo,2,"CREATOR","Landroid/os/Parcelable$Creator;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_PM_PERMISSIONGROUPINFO_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
