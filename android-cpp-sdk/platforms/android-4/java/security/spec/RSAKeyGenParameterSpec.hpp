/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.security.spec.RSAKeyGenParameterSpec
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_SPEC_RSAKEYGENPARAMETERSPEC_HPP_DECL
#define J2CPP_JAVA_SECURITY_SPEC_RSAKEYGENPARAMETERSPEC_HPP_DECL


namespace j2cpp { namespace java { namespace math { class BigInteger; } } }
namespace j2cpp { namespace java { namespace security { namespace spec { class AlgorithmParameterSpec; } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/math/BigInteger.hpp>
#include <java/security/spec/AlgorithmParameterSpec.hpp>


namespace j2cpp {

namespace java { namespace security { namespace spec {

	class RSAKeyGenParameterSpec;
	class RSAKeyGenParameterSpec
		: public object<RSAKeyGenParameterSpec>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)

		explicit RSAKeyGenParameterSpec(jobject jobj)
		: object<RSAKeyGenParameterSpec>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::security::spec::AlgorithmParameterSpec>() const;


		RSAKeyGenParameterSpec(jint, local_ref< java::math::BigInteger > const&);
		jint getKeysize();
		local_ref< java::math::BigInteger > getPublicExponent();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::math::BigInteger > > F0;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< java::math::BigInteger > > F4;
	}; //class RSAKeyGenParameterSpec

} //namespace spec
} //namespace security
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_SPEC_RSAKEYGENPARAMETERSPEC_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_SPEC_RSAKEYGENPARAMETERSPEC_HPP_IMPL
#define J2CPP_JAVA_SECURITY_SPEC_RSAKEYGENPARAMETERSPEC_HPP_IMPL

namespace j2cpp {



java::security::spec::RSAKeyGenParameterSpec::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::security::spec::RSAKeyGenParameterSpec::operator local_ref<java::security::spec::AlgorithmParameterSpec>() const
{
	return local_ref<java::security::spec::AlgorithmParameterSpec>(get_jobject());
}


java::security::spec::RSAKeyGenParameterSpec::RSAKeyGenParameterSpec(jint a0, local_ref< java::math::BigInteger > const &a1)
: object<java::security::spec::RSAKeyGenParameterSpec>(
	call_new_object<
		java::security::spec::RSAKeyGenParameterSpec::J2CPP_CLASS_NAME,
		java::security::spec::RSAKeyGenParameterSpec::J2CPP_METHOD_NAME(0),
		java::security::spec::RSAKeyGenParameterSpec::J2CPP_METHOD_SIGNATURE(0)>
	(a0, a1)
)
{
}


jint java::security::spec::RSAKeyGenParameterSpec::getKeysize()
{
	return call_method<
		java::security::spec::RSAKeyGenParameterSpec::J2CPP_CLASS_NAME,
		java::security::spec::RSAKeyGenParameterSpec::J2CPP_METHOD_NAME(1),
		java::security::spec::RSAKeyGenParameterSpec::J2CPP_METHOD_SIGNATURE(1), 
		jint >
	(get_jobject());
}

local_ref< java::math::BigInteger > java::security::spec::RSAKeyGenParameterSpec::getPublicExponent()
{
	return call_method<
		java::security::spec::RSAKeyGenParameterSpec::J2CPP_CLASS_NAME,
		java::security::spec::RSAKeyGenParameterSpec::J2CPP_METHOD_NAME(2),
		java::security::spec::RSAKeyGenParameterSpec::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::math::BigInteger > >
	(get_jobject());
}



static_field<
	java::security::spec::RSAKeyGenParameterSpec::J2CPP_CLASS_NAME,
	java::security::spec::RSAKeyGenParameterSpec::J2CPP_FIELD_NAME(0),
	java::security::spec::RSAKeyGenParameterSpec::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::math::BigInteger >
> java::security::spec::RSAKeyGenParameterSpec::F0;

static_field<
	java::security::spec::RSAKeyGenParameterSpec::J2CPP_CLASS_NAME,
	java::security::spec::RSAKeyGenParameterSpec::J2CPP_FIELD_NAME(1),
	java::security::spec::RSAKeyGenParameterSpec::J2CPP_FIELD_SIGNATURE(1),
	local_ref< java::math::BigInteger >
> java::security::spec::RSAKeyGenParameterSpec::F4;


J2CPP_DEFINE_CLASS(java::security::spec::RSAKeyGenParameterSpec,"java/security/spec/RSAKeyGenParameterSpec")
J2CPP_DEFINE_METHOD(java::security::spec::RSAKeyGenParameterSpec,0,"<init>","(ILjava/math/BigInteger;)V")
J2CPP_DEFINE_METHOD(java::security::spec::RSAKeyGenParameterSpec,1,"getKeysize","()I")
J2CPP_DEFINE_METHOD(java::security::spec::RSAKeyGenParameterSpec,2,"getPublicExponent","()Ljava/math/BigInteger;")
J2CPP_DEFINE_METHOD(java::security::spec::RSAKeyGenParameterSpec,3,"<clinit>","()V")
J2CPP_DEFINE_FIELD(java::security::spec::RSAKeyGenParameterSpec,0,"F0","Ljava/math/BigInteger;")
J2CPP_DEFINE_FIELD(java::security::spec::RSAKeyGenParameterSpec,1,"F4","Ljava/math/BigInteger;")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_SPEC_RSAKEYGENPARAMETERSPEC_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
