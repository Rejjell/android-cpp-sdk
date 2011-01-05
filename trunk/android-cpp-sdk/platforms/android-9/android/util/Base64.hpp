/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.util.Base64
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_UTIL_BASE64_HPP_DECL
#define J2CPP_ANDROID_UTIL_BASE64_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace util {

	class Base64;
	class Base64
		: public object<Base64>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)

		explicit Base64(jobject jobj)
		: object<Base64>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		static local_ref< array<jbyte,1> > decode(local_ref< java::lang::String >  const&, jint);
		static local_ref< array<jbyte,1> > decode(local_ref< array<jbyte,1> >  const&, jint);
		static local_ref< array<jbyte,1> > decode(local_ref< array<jbyte,1> >  const&, jint, jint, jint);
		static local_ref< java::lang::String > encodeToString(local_ref< array<jbyte,1> >  const&, jint);
		static local_ref< java::lang::String > encodeToString(local_ref< array<jbyte,1> >  const&, jint, jint, jint);
		static local_ref< array<jbyte,1> > encode(local_ref< array<jbyte,1> >  const&, jint);
		static local_ref< array<jbyte,1> > encode(local_ref< array<jbyte,1> >  const&, jint, jint, jint);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > DEFAULT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > NO_PADDING;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jint > NO_WRAP;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), jint > CRLF;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), jint > URL_SAFE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), jint > NO_CLOSE;
	}; //class Base64

} //namespace util
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_UTIL_BASE64_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_UTIL_BASE64_HPP_IMPL
#define J2CPP_ANDROID_UTIL_BASE64_HPP_IMPL

namespace j2cpp {



android::util::Base64::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


local_ref< array<jbyte,1> > android::util::Base64::decode(local_ref< java::lang::String > const &a0, jint a1)
{
	return call_static_method<
		android::util::Base64::J2CPP_CLASS_NAME,
		android::util::Base64::J2CPP_METHOD_NAME(1),
		android::util::Base64::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< array<jbyte,1> >
	>(a0, a1);
}

local_ref< array<jbyte,1> > android::util::Base64::decode(local_ref< array<jbyte,1> > const &a0, jint a1)
{
	return call_static_method<
		android::util::Base64::J2CPP_CLASS_NAME,
		android::util::Base64::J2CPP_METHOD_NAME(2),
		android::util::Base64::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< array<jbyte,1> >
	>(a0, a1);
}

local_ref< array<jbyte,1> > android::util::Base64::decode(local_ref< array<jbyte,1> > const &a0, jint a1, jint a2, jint a3)
{
	return call_static_method<
		android::util::Base64::J2CPP_CLASS_NAME,
		android::util::Base64::J2CPP_METHOD_NAME(3),
		android::util::Base64::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< array<jbyte,1> >
	>(a0, a1, a2, a3);
}

local_ref< java::lang::String > android::util::Base64::encodeToString(local_ref< array<jbyte,1> > const &a0, jint a1)
{
	return call_static_method<
		android::util::Base64::J2CPP_CLASS_NAME,
		android::util::Base64::J2CPP_METHOD_NAME(4),
		android::util::Base64::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::lang::String >
	>(a0, a1);
}

local_ref< java::lang::String > android::util::Base64::encodeToString(local_ref< array<jbyte,1> > const &a0, jint a1, jint a2, jint a3)
{
	return call_static_method<
		android::util::Base64::J2CPP_CLASS_NAME,
		android::util::Base64::J2CPP_METHOD_NAME(5),
		android::util::Base64::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::lang::String >
	>(a0, a1, a2, a3);
}

local_ref< array<jbyte,1> > android::util::Base64::encode(local_ref< array<jbyte,1> > const &a0, jint a1)
{
	return call_static_method<
		android::util::Base64::J2CPP_CLASS_NAME,
		android::util::Base64::J2CPP_METHOD_NAME(6),
		android::util::Base64::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< array<jbyte,1> >
	>(a0, a1);
}

local_ref< array<jbyte,1> > android::util::Base64::encode(local_ref< array<jbyte,1> > const &a0, jint a1, jint a2, jint a3)
{
	return call_static_method<
		android::util::Base64::J2CPP_CLASS_NAME,
		android::util::Base64::J2CPP_METHOD_NAME(7),
		android::util::Base64::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< array<jbyte,1> >
	>(a0, a1, a2, a3);
}


static_field<
	android::util::Base64::J2CPP_CLASS_NAME,
	android::util::Base64::J2CPP_FIELD_NAME(0),
	android::util::Base64::J2CPP_FIELD_SIGNATURE(0),
	jint
> android::util::Base64::DEFAULT;

static_field<
	android::util::Base64::J2CPP_CLASS_NAME,
	android::util::Base64::J2CPP_FIELD_NAME(1),
	android::util::Base64::J2CPP_FIELD_SIGNATURE(1),
	jint
> android::util::Base64::NO_PADDING;

static_field<
	android::util::Base64::J2CPP_CLASS_NAME,
	android::util::Base64::J2CPP_FIELD_NAME(2),
	android::util::Base64::J2CPP_FIELD_SIGNATURE(2),
	jint
> android::util::Base64::NO_WRAP;

static_field<
	android::util::Base64::J2CPP_CLASS_NAME,
	android::util::Base64::J2CPP_FIELD_NAME(3),
	android::util::Base64::J2CPP_FIELD_SIGNATURE(3),
	jint
> android::util::Base64::CRLF;

static_field<
	android::util::Base64::J2CPP_CLASS_NAME,
	android::util::Base64::J2CPP_FIELD_NAME(4),
	android::util::Base64::J2CPP_FIELD_SIGNATURE(4),
	jint
> android::util::Base64::URL_SAFE;

static_field<
	android::util::Base64::J2CPP_CLASS_NAME,
	android::util::Base64::J2CPP_FIELD_NAME(5),
	android::util::Base64::J2CPP_FIELD_SIGNATURE(5),
	jint
> android::util::Base64::NO_CLOSE;


J2CPP_DEFINE_CLASS(android::util::Base64,"android/util/Base64")
J2CPP_DEFINE_METHOD(android::util::Base64,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::util::Base64,1,"decode","(Ljava/lang/String;I)[B")
J2CPP_DEFINE_METHOD(android::util::Base64,2,"decode","([BI)[B")
J2CPP_DEFINE_METHOD(android::util::Base64,3,"decode","([BIII)[B")
J2CPP_DEFINE_METHOD(android::util::Base64,4,"encodeToString","([BI)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::util::Base64,5,"encodeToString","([BIII)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::util::Base64,6,"encode","([BI)[B")
J2CPP_DEFINE_METHOD(android::util::Base64,7,"encode","([BIII)[B")
J2CPP_DEFINE_FIELD(android::util::Base64,0,"DEFAULT","I")
J2CPP_DEFINE_FIELD(android::util::Base64,1,"NO_PADDING","I")
J2CPP_DEFINE_FIELD(android::util::Base64,2,"NO_WRAP","I")
J2CPP_DEFINE_FIELD(android::util::Base64,3,"CRLF","I")
J2CPP_DEFINE_FIELD(android::util::Base64,4,"URL_SAFE","I")
J2CPP_DEFINE_FIELD(android::util::Base64,5,"NO_CLOSE","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_UTIL_BASE64_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
