/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.content.pm.ProviderInfo
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_PM_PROVIDERINFO_HPP_DECL
#define J2CPP_ANDROID_CONTENT_PM_PROVIDERINFO_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace android { namespace content { namespace pm { class ComponentInfo; } } } }
namespace j2cpp { namespace android { namespace content { namespace pm { class PathPermission; } } } }
namespace j2cpp { namespace android { namespace os { class Parcel; } } }
namespace j2cpp { namespace android { namespace os { class Parcelable; } } }
namespace j2cpp { namespace android { namespace os { namespace Parcelable_ { class Creator; } } } }
namespace j2cpp { namespace android { namespace os { class PatternMatcher; } } }


#include <android/content/pm/ComponentInfo.hpp>
#include <android/content/pm/PathPermission.hpp>
#include <android/os/Parcel.hpp>
#include <android/os/Parcelable.hpp>
#include <android/os/PatternMatcher.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace content { namespace pm {

	class ProviderInfo;
	class ProviderInfo
		: public object<ProviderInfo>
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
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)
		J2CPP_DECLARE_FIELD(6)
		J2CPP_DECLARE_FIELD(7)
		J2CPP_DECLARE_FIELD(8)
		J2CPP_DECLARE_FIELD(9)

		explicit ProviderInfo(jobject jobj)
		: object<ProviderInfo>(jobj)
		, authority(jobj)
		, readPermission(jobj)
		, writePermission(jobj)
		, grantUriPermissions(jobj)
		, uriPermissionPatterns(jobj)
		, pathPermissions(jobj)
		, multiprocess(jobj)
		, initOrder(jobj)
		, isSyncable(jobj)
		{
		}

		operator local_ref<android::content::pm::ComponentInfo>() const;
		operator local_ref<android::os::Parcelable>() const;


		ProviderInfo();
		ProviderInfo(local_ref< android::content::pm::ProviderInfo > const&);
		jint describeContents();
		void writeToParcel(local_ref< android::os::Parcel >  const&, jint);
		local_ref< java::lang::String > toString();

		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::String > > authority;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< java::lang::String > > readPermission;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< java::lang::String > > writePermission;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), jboolean > grantUriPermissions;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), local_ref< array< local_ref< android::os::PatternMatcher >, 1> > > uriPermissionPatterns;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), local_ref< array< local_ref< android::content::pm::PathPermission >, 1> > > pathPermissions;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), jboolean > multiprocess;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), jint > initOrder;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), jboolean > isSyncable;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(9), J2CPP_FIELD_SIGNATURE(9), local_ref< android::os::Parcelable_::Creator > > CREATOR;
	}; //class ProviderInfo

} //namespace pm
} //namespace content
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_PM_PROVIDERINFO_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_PM_PROVIDERINFO_HPP_IMPL
#define J2CPP_ANDROID_CONTENT_PM_PROVIDERINFO_HPP_IMPL

namespace j2cpp {



android::content::pm::ProviderInfo::operator local_ref<android::content::pm::ComponentInfo>() const
{
	return local_ref<android::content::pm::ComponentInfo>(get_jobject());
}

android::content::pm::ProviderInfo::operator local_ref<android::os::Parcelable>() const
{
	return local_ref<android::os::Parcelable>(get_jobject());
}


android::content::pm::ProviderInfo::ProviderInfo()
: object<android::content::pm::ProviderInfo>(
	call_new_object<
		android::content::pm::ProviderInfo::J2CPP_CLASS_NAME,
		android::content::pm::ProviderInfo::J2CPP_METHOD_NAME(0),
		android::content::pm::ProviderInfo::J2CPP_METHOD_SIGNATURE(0)>
	()
)
, authority(get_jobject())
, readPermission(get_jobject())
, writePermission(get_jobject())
, grantUriPermissions(get_jobject())
, uriPermissionPatterns(get_jobject())
, pathPermissions(get_jobject())
, multiprocess(get_jobject())
, initOrder(get_jobject())
, isSyncable(get_jobject())
{
}



android::content::pm::ProviderInfo::ProviderInfo(local_ref< android::content::pm::ProviderInfo > const &a0)
: object<android::content::pm::ProviderInfo>(
	call_new_object<
		android::content::pm::ProviderInfo::J2CPP_CLASS_NAME,
		android::content::pm::ProviderInfo::J2CPP_METHOD_NAME(1),
		android::content::pm::ProviderInfo::J2CPP_METHOD_SIGNATURE(1)>
	(a0)
)
, authority(get_jobject())
, readPermission(get_jobject())
, writePermission(get_jobject())
, grantUriPermissions(get_jobject())
, uriPermissionPatterns(get_jobject())
, pathPermissions(get_jobject())
, multiprocess(get_jobject())
, initOrder(get_jobject())
, isSyncable(get_jobject())
{
}


jint android::content::pm::ProviderInfo::describeContents()
{
	return call_method<
		android::content::pm::ProviderInfo::J2CPP_CLASS_NAME,
		android::content::pm::ProviderInfo::J2CPP_METHOD_NAME(2),
		android::content::pm::ProviderInfo::J2CPP_METHOD_SIGNATURE(2), 
		jint >
	(get_jobject());
}

void android::content::pm::ProviderInfo::writeToParcel(local_ref< android::os::Parcel > const &a0, jint a1)
{
	return call_method<
		android::content::pm::ProviderInfo::J2CPP_CLASS_NAME,
		android::content::pm::ProviderInfo::J2CPP_METHOD_NAME(3),
		android::content::pm::ProviderInfo::J2CPP_METHOD_SIGNATURE(3), 
		void >
	(get_jobject(), a0, a1);
}

local_ref< java::lang::String > android::content::pm::ProviderInfo::toString()
{
	return call_method<
		android::content::pm::ProviderInfo::J2CPP_CLASS_NAME,
		android::content::pm::ProviderInfo::J2CPP_METHOD_NAME(4),
		android::content::pm::ProviderInfo::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::lang::String > >
	(get_jobject());
}



static_field<
	android::content::pm::ProviderInfo::J2CPP_CLASS_NAME,
	android::content::pm::ProviderInfo::J2CPP_FIELD_NAME(9),
	android::content::pm::ProviderInfo::J2CPP_FIELD_SIGNATURE(9),
	local_ref< android::os::Parcelable_::Creator >
> android::content::pm::ProviderInfo::CREATOR;


J2CPP_DEFINE_CLASS(android::content::pm::ProviderInfo,"android/content/pm/ProviderInfo")
J2CPP_DEFINE_METHOD(android::content::pm::ProviderInfo,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::content::pm::ProviderInfo,1,"<init>","(Landroid/content/pm/ProviderInfo;)V")
J2CPP_DEFINE_METHOD(android::content::pm::ProviderInfo,2,"describeContents","()I")
J2CPP_DEFINE_METHOD(android::content::pm::ProviderInfo,3,"writeToParcel","(Landroid/os/Parcel;I)V")
J2CPP_DEFINE_METHOD(android::content::pm::ProviderInfo,4,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::content::pm::ProviderInfo,5,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::content::pm::ProviderInfo,0,"authority","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::content::pm::ProviderInfo,1,"readPermission","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::content::pm::ProviderInfo,2,"writePermission","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::content::pm::ProviderInfo,3,"grantUriPermissions","Z")
J2CPP_DEFINE_FIELD(android::content::pm::ProviderInfo,4,"uriPermissionPatterns","[android.os.PatternMatcher")
J2CPP_DEFINE_FIELD(android::content::pm::ProviderInfo,5,"pathPermissions","[android.content.pm.PathPermission")
J2CPP_DEFINE_FIELD(android::content::pm::ProviderInfo,6,"multiprocess","Z")
J2CPP_DEFINE_FIELD(android::content::pm::ProviderInfo,7,"initOrder","I")
J2CPP_DEFINE_FIELD(android::content::pm::ProviderInfo,8,"isSyncable","Z")
J2CPP_DEFINE_FIELD(android::content::pm::ProviderInfo,9,"CREATOR","Landroid/os/Parcelable$Creator;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_PM_PROVIDERINFO_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
