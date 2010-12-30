/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.security.interfaces.DSAKeyPairGenerator
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_INTERFACES_DSAKEYPAIRGENERATOR_HPP_DECL
#define J2CPP_JAVA_SECURITY_INTERFACES_DSAKEYPAIRGENERATOR_HPP_DECL


namespace j2cpp { namespace java { namespace security { namespace interfaces { class DSAParams; } } } }
namespace j2cpp { namespace java { namespace security { class SecureRandom; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/security/SecureRandom.hpp>
#include <java/security/interfaces/DSAParams.hpp>


namespace j2cpp {

namespace java { namespace security { namespace interfaces {

	class DSAKeyPairGenerator;
	class DSAKeyPairGenerator
		: public object<DSAKeyPairGenerator>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit DSAKeyPairGenerator(jobject jobj)
		: object<DSAKeyPairGenerator>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		void initialize(local_ref< java::security::interfaces::DSAParams >  const&, local_ref< java::security::SecureRandom >  const&);
		void initialize(jint, jboolean, local_ref< java::security::SecureRandom >  const&);
	}; //class DSAKeyPairGenerator

} //namespace interfaces
} //namespace security
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_INTERFACES_DSAKEYPAIRGENERATOR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_INTERFACES_DSAKEYPAIRGENERATOR_HPP_IMPL
#define J2CPP_JAVA_SECURITY_INTERFACES_DSAKEYPAIRGENERATOR_HPP_IMPL

namespace j2cpp {



java::security::interfaces::DSAKeyPairGenerator::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void java::security::interfaces::DSAKeyPairGenerator::initialize(local_ref< java::security::interfaces::DSAParams > const &a0, local_ref< java::security::SecureRandom > const &a1)
{
	return call_method<
		java::security::interfaces::DSAKeyPairGenerator::J2CPP_CLASS_NAME,
		java::security::interfaces::DSAKeyPairGenerator::J2CPP_METHOD_NAME(0),
		java::security::interfaces::DSAKeyPairGenerator::J2CPP_METHOD_SIGNATURE(0), 
		void >
	(get_jobject(), a0, a1);
}

void java::security::interfaces::DSAKeyPairGenerator::initialize(jint a0, jboolean a1, local_ref< java::security::SecureRandom > const &a2)
{
	return call_method<
		java::security::interfaces::DSAKeyPairGenerator::J2CPP_CLASS_NAME,
		java::security::interfaces::DSAKeyPairGenerator::J2CPP_METHOD_NAME(1),
		java::security::interfaces::DSAKeyPairGenerator::J2CPP_METHOD_SIGNATURE(1), 
		void >
	(get_jobject(), a0, a1, a2);
}


J2CPP_DEFINE_CLASS(java::security::interfaces::DSAKeyPairGenerator,"java/security/interfaces/DSAKeyPairGenerator")
J2CPP_DEFINE_METHOD(java::security::interfaces::DSAKeyPairGenerator,0,"initialize","(Ljava/security/interfaces/DSAParams;Ljava/security/SecureRandom;)V")
J2CPP_DEFINE_METHOD(java::security::interfaces::DSAKeyPairGenerator,1,"initialize","(IZLjava/security/SecureRandom;)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_INTERFACES_DSAKEYPAIRGENERATOR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
