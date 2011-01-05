/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.security.interfaces.DSAPrivateKey
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_INTERFACES_DSAPRIVATEKEY_HPP_DECL
#define J2CPP_JAVA_SECURITY_INTERFACES_DSAPRIVATEKEY_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace security { class PrivateKey; } } }
namespace j2cpp { namespace java { namespace security { class Key; } } }
namespace j2cpp { namespace java { namespace security { namespace interfaces { class DSAKey; } } } }
namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace java { namespace math { class BigInteger; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Object.hpp>
#include <java/math/BigInteger.hpp>
#include <java/security/Key.hpp>
#include <java/security/PrivateKey.hpp>
#include <java/security/interfaces/DSAKey.hpp>


namespace j2cpp {

namespace java { namespace security { namespace interfaces {

	class DSAPrivateKey;
	class DSAPrivateKey
		: public object<DSAPrivateKey>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_FIELD(0)

		explicit DSAPrivateKey(jobject jobj)
		: object<DSAPrivateKey>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::security::PrivateKey>() const;
		operator local_ref<java::security::Key>() const;
		operator local_ref<java::security::interfaces::DSAKey>() const;
		operator local_ref<java::io::Serializable>() const;


		local_ref< java::math::BigInteger > getX();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jlong > serialVersionUID;
	}; //class DSAPrivateKey

} //namespace interfaces
} //namespace security
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_INTERFACES_DSAPRIVATEKEY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_INTERFACES_DSAPRIVATEKEY_HPP_IMPL
#define J2CPP_JAVA_SECURITY_INTERFACES_DSAPRIVATEKEY_HPP_IMPL

namespace j2cpp {



java::security::interfaces::DSAPrivateKey::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::security::interfaces::DSAPrivateKey::operator local_ref<java::security::PrivateKey>() const
{
	return local_ref<java::security::PrivateKey>(get_jobject());
}

java::security::interfaces::DSAPrivateKey::operator local_ref<java::security::Key>() const
{
	return local_ref<java::security::Key>(get_jobject());
}

java::security::interfaces::DSAPrivateKey::operator local_ref<java::security::interfaces::DSAKey>() const
{
	return local_ref<java::security::interfaces::DSAKey>(get_jobject());
}

java::security::interfaces::DSAPrivateKey::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}

local_ref< java::math::BigInteger > java::security::interfaces::DSAPrivateKey::getX()
{
	return call_method<
		java::security::interfaces::DSAPrivateKey::J2CPP_CLASS_NAME,
		java::security::interfaces::DSAPrivateKey::J2CPP_METHOD_NAME(0),
		java::security::interfaces::DSAPrivateKey::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< java::math::BigInteger >
	>(get_jobject());
}


static_field<
	java::security::interfaces::DSAPrivateKey::J2CPP_CLASS_NAME,
	java::security::interfaces::DSAPrivateKey::J2CPP_FIELD_NAME(0),
	java::security::interfaces::DSAPrivateKey::J2CPP_FIELD_SIGNATURE(0),
	jlong
> java::security::interfaces::DSAPrivateKey::serialVersionUID;


J2CPP_DEFINE_CLASS(java::security::interfaces::DSAPrivateKey,"java/security/interfaces/DSAPrivateKey")
J2CPP_DEFINE_METHOD(java::security::interfaces::DSAPrivateKey,0,"getX","()Ljava/math/BigInteger;")
J2CPP_DEFINE_FIELD(java::security::interfaces::DSAPrivateKey,0,"serialVersionUID","J")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_INTERFACES_DSAPRIVATEKEY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
