/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.os.ParcelUuid
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_OS_PARCELUUID_HPP_DECL
#define J2CPP_ANDROID_OS_PARCELUUID_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace util { class UUID; } } }
namespace j2cpp { namespace android { namespace os { class Parcel; } } }
namespace j2cpp { namespace android { namespace os { class Parcelable; } } }
namespace j2cpp { namespace android { namespace os { namespace Parcelable_ { class Creator; } } } }


#include <android/os/Parcel.hpp>
#include <android/os/Parcelable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/UUID.hpp>


namespace j2cpp {

namespace android { namespace os {

	class ParcelUuid;
	class ParcelUuid
		: public object<ParcelUuid>
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
		J2CPP_DECLARE_FIELD(0)

		explicit ParcelUuid(jobject jobj)
		: object<ParcelUuid>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::os::Parcelable>() const;


		ParcelUuid(local_ref< java::util::UUID > const&);
		static local_ref< android::os::ParcelUuid > fromString(local_ref< java::lang::String >  const&);
		local_ref< java::util::UUID > getUuid();
		local_ref< java::lang::String > toString();
		jint hashCode();
		jboolean equals(local_ref< java::lang::Object >  const&);
		jint describeContents();
		void writeToParcel(local_ref< android::os::Parcel >  const&, jint);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< android::os::Parcelable_::Creator > > CREATOR;
	}; //class ParcelUuid

} //namespace os
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_OS_PARCELUUID_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_OS_PARCELUUID_HPP_IMPL
#define J2CPP_ANDROID_OS_PARCELUUID_HPP_IMPL

namespace j2cpp {



android::os::ParcelUuid::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::os::ParcelUuid::operator local_ref<android::os::Parcelable>() const
{
	return local_ref<android::os::Parcelable>(get_jobject());
}


android::os::ParcelUuid::ParcelUuid(local_ref< java::util::UUID > const &a0)
: object<android::os::ParcelUuid>(
	call_new_object<
		android::os::ParcelUuid::J2CPP_CLASS_NAME,
		android::os::ParcelUuid::J2CPP_METHOD_NAME(0),
		android::os::ParcelUuid::J2CPP_METHOD_SIGNATURE(0)>
	(a0)
)
{
}


local_ref< android::os::ParcelUuid > android::os::ParcelUuid::fromString(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		android::os::ParcelUuid::J2CPP_CLASS_NAME,
		android::os::ParcelUuid::J2CPP_METHOD_NAME(1),
		android::os::ParcelUuid::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< android::os::ParcelUuid > >
	(a0);
}

local_ref< java::util::UUID > android::os::ParcelUuid::getUuid()
{
	return call_method<
		android::os::ParcelUuid::J2CPP_CLASS_NAME,
		android::os::ParcelUuid::J2CPP_METHOD_NAME(2),
		android::os::ParcelUuid::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::util::UUID > >
	(get_jobject());
}

local_ref< java::lang::String > android::os::ParcelUuid::toString()
{
	return call_method<
		android::os::ParcelUuid::J2CPP_CLASS_NAME,
		android::os::ParcelUuid::J2CPP_METHOD_NAME(3),
		android::os::ParcelUuid::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::lang::String > >
	(get_jobject());
}

jint android::os::ParcelUuid::hashCode()
{
	return call_method<
		android::os::ParcelUuid::J2CPP_CLASS_NAME,
		android::os::ParcelUuid::J2CPP_METHOD_NAME(4),
		android::os::ParcelUuid::J2CPP_METHOD_SIGNATURE(4), 
		jint >
	(get_jobject());
}

jboolean android::os::ParcelUuid::equals(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		android::os::ParcelUuid::J2CPP_CLASS_NAME,
		android::os::ParcelUuid::J2CPP_METHOD_NAME(5),
		android::os::ParcelUuid::J2CPP_METHOD_SIGNATURE(5), 
		jboolean >
	(get_jobject(), a0);
}

jint android::os::ParcelUuid::describeContents()
{
	return call_method<
		android::os::ParcelUuid::J2CPP_CLASS_NAME,
		android::os::ParcelUuid::J2CPP_METHOD_NAME(6),
		android::os::ParcelUuid::J2CPP_METHOD_SIGNATURE(6), 
		jint >
	(get_jobject());
}

void android::os::ParcelUuid::writeToParcel(local_ref< android::os::Parcel > const &a0, jint a1)
{
	return call_method<
		android::os::ParcelUuid::J2CPP_CLASS_NAME,
		android::os::ParcelUuid::J2CPP_METHOD_NAME(7),
		android::os::ParcelUuid::J2CPP_METHOD_SIGNATURE(7), 
		void >
	(get_jobject(), a0, a1);
}



static_field<
	android::os::ParcelUuid::J2CPP_CLASS_NAME,
	android::os::ParcelUuid::J2CPP_FIELD_NAME(0),
	android::os::ParcelUuid::J2CPP_FIELD_SIGNATURE(0),
	local_ref< android::os::Parcelable_::Creator >
> android::os::ParcelUuid::CREATOR;


J2CPP_DEFINE_CLASS(android::os::ParcelUuid,"android/os/ParcelUuid")
J2CPP_DEFINE_METHOD(android::os::ParcelUuid,0,"<init>","(Ljava/util/UUID;)V")
J2CPP_DEFINE_METHOD(android::os::ParcelUuid,1,"fromString","(Ljava/lang/String;)Landroid/os/ParcelUuid;")
J2CPP_DEFINE_METHOD(android::os::ParcelUuid,2,"getUuid","()Ljava/util/UUID;")
J2CPP_DEFINE_METHOD(android::os::ParcelUuid,3,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::os::ParcelUuid,4,"hashCode","()I")
J2CPP_DEFINE_METHOD(android::os::ParcelUuid,5,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(android::os::ParcelUuid,6,"describeContents","()I")
J2CPP_DEFINE_METHOD(android::os::ParcelUuid,7,"writeToParcel","(Landroid/os/Parcel;I)V")
J2CPP_DEFINE_METHOD(android::os::ParcelUuid,8,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::os::ParcelUuid,0,"CREATOR","Landroid/os/Parcelable$Creator;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_OS_PARCELUUID_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
