/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.security.spec.RSAMultiPrimePrivateCrtKeySpec
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_SPEC_RSAMULTIPRIMEPRIVATECRTKEYSPEC_HPP_DECL
#define J2CPP_JAVA_SECURITY_SPEC_RSAMULTIPRIMEPRIVATECRTKEYSPEC_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace math { class BigInteger; } } }
namespace j2cpp { namespace java { namespace security { namespace spec { class KeySpec; } } } }
namespace j2cpp { namespace java { namespace security { namespace spec { class RSAOtherPrimeInfo; } } } }
namespace j2cpp { namespace java { namespace security { namespace spec { class RSAPrivateKeySpec; } } } }


#include <java/lang/Object.hpp>
#include <java/math/BigInteger.hpp>
#include <java/security/spec/KeySpec.hpp>
#include <java/security/spec/RSAOtherPrimeInfo.hpp>
#include <java/security/spec/RSAPrivateKeySpec.hpp>


namespace j2cpp {

namespace java { namespace security { namespace spec {

	class RSAMultiPrimePrivateCrtKeySpec;
	class RSAMultiPrimePrivateCrtKeySpec
		: public object<RSAMultiPrimePrivateCrtKeySpec>
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

		explicit RSAMultiPrimePrivateCrtKeySpec(jobject jobj)
		: object<RSAMultiPrimePrivateCrtKeySpec>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::security::spec::KeySpec>() const;
		operator local_ref<java::security::spec::RSAPrivateKeySpec>() const;


		RSAMultiPrimePrivateCrtKeySpec(local_ref< java::math::BigInteger > const&, local_ref< java::math::BigInteger > const&, local_ref< java::math::BigInteger > const&, local_ref< java::math::BigInteger > const&, local_ref< java::math::BigInteger > const&, local_ref< java::math::BigInteger > const&, local_ref< java::math::BigInteger > const&, local_ref< java::math::BigInteger > const&, local_ref< array< local_ref< java::security::spec::RSAOtherPrimeInfo >, 1> > const&);
		local_ref< java::math::BigInteger > getCrtCoefficient();
		local_ref< array< local_ref< java::security::spec::RSAOtherPrimeInfo >, 1> > getOtherPrimeInfo();
		local_ref< java::math::BigInteger > getPrimeExponentP();
		local_ref< java::math::BigInteger > getPrimeExponentQ();
		local_ref< java::math::BigInteger > getPrimeP();
		local_ref< java::math::BigInteger > getPrimeQ();
		local_ref< java::math::BigInteger > getPublicExponent();
	}; //class RSAMultiPrimePrivateCrtKeySpec

} //namespace spec
} //namespace security
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_SPEC_RSAMULTIPRIMEPRIVATECRTKEYSPEC_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_SPEC_RSAMULTIPRIMEPRIVATECRTKEYSPEC_HPP_IMPL
#define J2CPP_JAVA_SECURITY_SPEC_RSAMULTIPRIMEPRIVATECRTKEYSPEC_HPP_IMPL

namespace j2cpp {



java::security::spec::RSAMultiPrimePrivateCrtKeySpec::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::security::spec::RSAMultiPrimePrivateCrtKeySpec::operator local_ref<java::security::spec::KeySpec>() const
{
	return local_ref<java::security::spec::KeySpec>(get_jobject());
}

java::security::spec::RSAMultiPrimePrivateCrtKeySpec::operator local_ref<java::security::spec::RSAPrivateKeySpec>() const
{
	return local_ref<java::security::spec::RSAPrivateKeySpec>(get_jobject());
}


java::security::spec::RSAMultiPrimePrivateCrtKeySpec::RSAMultiPrimePrivateCrtKeySpec(local_ref< java::math::BigInteger > const &a0, local_ref< java::math::BigInteger > const &a1, local_ref< java::math::BigInteger > const &a2, local_ref< java::math::BigInteger > const &a3, local_ref< java::math::BigInteger > const &a4, local_ref< java::math::BigInteger > const &a5, local_ref< java::math::BigInteger > const &a6, local_ref< java::math::BigInteger > const &a7, local_ref< array< local_ref< java::security::spec::RSAOtherPrimeInfo >, 1> > const &a8)
: object<java::security::spec::RSAMultiPrimePrivateCrtKeySpec>(
	call_new_object<
		java::security::spec::RSAMultiPrimePrivateCrtKeySpec::J2CPP_CLASS_NAME,
		java::security::spec::RSAMultiPrimePrivateCrtKeySpec::J2CPP_METHOD_NAME(0),
		java::security::spec::RSAMultiPrimePrivateCrtKeySpec::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1, a2, a3, a4, a5, a6, a7, a8)
)
{
}


local_ref< java::math::BigInteger > java::security::spec::RSAMultiPrimePrivateCrtKeySpec::getCrtCoefficient()
{
	return call_method<
		java::security::spec::RSAMultiPrimePrivateCrtKeySpec::J2CPP_CLASS_NAME,
		java::security::spec::RSAMultiPrimePrivateCrtKeySpec::J2CPP_METHOD_NAME(1),
		java::security::spec::RSAMultiPrimePrivateCrtKeySpec::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::math::BigInteger >
	>(get_jobject());
}

local_ref< array< local_ref< java::security::spec::RSAOtherPrimeInfo >, 1> > java::security::spec::RSAMultiPrimePrivateCrtKeySpec::getOtherPrimeInfo()
{
	return call_method<
		java::security::spec::RSAMultiPrimePrivateCrtKeySpec::J2CPP_CLASS_NAME,
		java::security::spec::RSAMultiPrimePrivateCrtKeySpec::J2CPP_METHOD_NAME(2),
		java::security::spec::RSAMultiPrimePrivateCrtKeySpec::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< array< local_ref< java::security::spec::RSAOtherPrimeInfo >, 1> >
	>(get_jobject());
}

local_ref< java::math::BigInteger > java::security::spec::RSAMultiPrimePrivateCrtKeySpec::getPrimeExponentP()
{
	return call_method<
		java::security::spec::RSAMultiPrimePrivateCrtKeySpec::J2CPP_CLASS_NAME,
		java::security::spec::RSAMultiPrimePrivateCrtKeySpec::J2CPP_METHOD_NAME(3),
		java::security::spec::RSAMultiPrimePrivateCrtKeySpec::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::math::BigInteger >
	>(get_jobject());
}

local_ref< java::math::BigInteger > java::security::spec::RSAMultiPrimePrivateCrtKeySpec::getPrimeExponentQ()
{
	return call_method<
		java::security::spec::RSAMultiPrimePrivateCrtKeySpec::J2CPP_CLASS_NAME,
		java::security::spec::RSAMultiPrimePrivateCrtKeySpec::J2CPP_METHOD_NAME(4),
		java::security::spec::RSAMultiPrimePrivateCrtKeySpec::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::math::BigInteger >
	>(get_jobject());
}

local_ref< java::math::BigInteger > java::security::spec::RSAMultiPrimePrivateCrtKeySpec::getPrimeP()
{
	return call_method<
		java::security::spec::RSAMultiPrimePrivateCrtKeySpec::J2CPP_CLASS_NAME,
		java::security::spec::RSAMultiPrimePrivateCrtKeySpec::J2CPP_METHOD_NAME(5),
		java::security::spec::RSAMultiPrimePrivateCrtKeySpec::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::math::BigInteger >
	>(get_jobject());
}

local_ref< java::math::BigInteger > java::security::spec::RSAMultiPrimePrivateCrtKeySpec::getPrimeQ()
{
	return call_method<
		java::security::spec::RSAMultiPrimePrivateCrtKeySpec::J2CPP_CLASS_NAME,
		java::security::spec::RSAMultiPrimePrivateCrtKeySpec::J2CPP_METHOD_NAME(6),
		java::security::spec::RSAMultiPrimePrivateCrtKeySpec::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::math::BigInteger >
	>(get_jobject());
}

local_ref< java::math::BigInteger > java::security::spec::RSAMultiPrimePrivateCrtKeySpec::getPublicExponent()
{
	return call_method<
		java::security::spec::RSAMultiPrimePrivateCrtKeySpec::J2CPP_CLASS_NAME,
		java::security::spec::RSAMultiPrimePrivateCrtKeySpec::J2CPP_METHOD_NAME(7),
		java::security::spec::RSAMultiPrimePrivateCrtKeySpec::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< java::math::BigInteger >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(java::security::spec::RSAMultiPrimePrivateCrtKeySpec,"java/security/spec/RSAMultiPrimePrivateCrtKeySpec")
J2CPP_DEFINE_METHOD(java::security::spec::RSAMultiPrimePrivateCrtKeySpec,0,"<init>","(Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;[java.security.spec.RSAOtherPrimeInfo)V")
J2CPP_DEFINE_METHOD(java::security::spec::RSAMultiPrimePrivateCrtKeySpec,1,"getCrtCoefficient","()Ljava/math/BigInteger;")
J2CPP_DEFINE_METHOD(java::security::spec::RSAMultiPrimePrivateCrtKeySpec,2,"getOtherPrimeInfo","()[java.security.spec.RSAOtherPrimeInfo")
J2CPP_DEFINE_METHOD(java::security::spec::RSAMultiPrimePrivateCrtKeySpec,3,"getPrimeExponentP","()Ljava/math/BigInteger;")
J2CPP_DEFINE_METHOD(java::security::spec::RSAMultiPrimePrivateCrtKeySpec,4,"getPrimeExponentQ","()Ljava/math/BigInteger;")
J2CPP_DEFINE_METHOD(java::security::spec::RSAMultiPrimePrivateCrtKeySpec,5,"getPrimeP","()Ljava/math/BigInteger;")
J2CPP_DEFINE_METHOD(java::security::spec::RSAMultiPrimePrivateCrtKeySpec,6,"getPrimeQ","()Ljava/math/BigInteger;")
J2CPP_DEFINE_METHOD(java::security::spec::RSAMultiPrimePrivateCrtKeySpec,7,"getPublicExponent","()Ljava/math/BigInteger;")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_SPEC_RSAMULTIPRIMEPRIVATECRTKEYSPEC_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
