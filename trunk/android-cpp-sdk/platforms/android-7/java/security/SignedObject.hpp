/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.security.SignedObject
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_SIGNEDOBJECT_HPP_DECL
#define J2CPP_JAVA_SECURITY_SIGNEDOBJECT_HPP_DECL


namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace security { class Signature; } } }
namespace j2cpp { namespace java { namespace security { class PublicKey; } } }
namespace j2cpp { namespace java { namespace security { class PrivateKey; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/security/PrivateKey.hpp>
#include <java/security/PublicKey.hpp>
#include <java/security/Signature.hpp>


namespace j2cpp {

namespace java { namespace security {

	class SignedObject;
	class SignedObject
		: public object<SignedObject>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)

		explicit SignedObject(jobject jobj)
		: object<SignedObject>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::io::Serializable>() const;


		SignedObject(local_ref< java::io::Serializable > const&, local_ref< java::security::PrivateKey > const&, local_ref< java::security::Signature > const&);
		local_ref< java::lang::Object > getObject();
		local_ref< array<jbyte,1> > getSignature();
		local_ref< java::lang::String > getAlgorithm();
		jboolean verify(local_ref< java::security::PublicKey >  const&, local_ref< java::security::Signature >  const&);
	}; //class SignedObject

} //namespace security
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_SIGNEDOBJECT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_SIGNEDOBJECT_HPP_IMPL
#define J2CPP_JAVA_SECURITY_SIGNEDOBJECT_HPP_IMPL

namespace j2cpp {



java::security::SignedObject::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::security::SignedObject::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}


java::security::SignedObject::SignedObject(local_ref< java::io::Serializable > const &a0, local_ref< java::security::PrivateKey > const &a1, local_ref< java::security::Signature > const &a2)
: object<java::security::SignedObject>(
	call_new_object<
		java::security::SignedObject::J2CPP_CLASS_NAME,
		java::security::SignedObject::J2CPP_METHOD_NAME(0),
		java::security::SignedObject::J2CPP_METHOD_SIGNATURE(0)>
	(a0, a1, a2)
)
{
}


local_ref< java::lang::Object > java::security::SignedObject::getObject()
{
	return call_method<
		java::security::SignedObject::J2CPP_CLASS_NAME,
		java::security::SignedObject::J2CPP_METHOD_NAME(1),
		java::security::SignedObject::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::Object > >
	(get_jobject());
}

local_ref< array<jbyte,1> > java::security::SignedObject::getSignature()
{
	return call_method<
		java::security::SignedObject::J2CPP_CLASS_NAME,
		java::security::SignedObject::J2CPP_METHOD_NAME(2),
		java::security::SignedObject::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< array<jbyte,1> > >
	(get_jobject());
}

local_ref< java::lang::String > java::security::SignedObject::getAlgorithm()
{
	return call_method<
		java::security::SignedObject::J2CPP_CLASS_NAME,
		java::security::SignedObject::J2CPP_METHOD_NAME(3),
		java::security::SignedObject::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::lang::String > >
	(get_jobject());
}

jboolean java::security::SignedObject::verify(local_ref< java::security::PublicKey > const &a0, local_ref< java::security::Signature > const &a1)
{
	return call_method<
		java::security::SignedObject::J2CPP_CLASS_NAME,
		java::security::SignedObject::J2CPP_METHOD_NAME(4),
		java::security::SignedObject::J2CPP_METHOD_SIGNATURE(4), 
		jboolean >
	(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(java::security::SignedObject,"java/security/SignedObject")
J2CPP_DEFINE_METHOD(java::security::SignedObject,0,"<init>","(Ljava/io/Serializable;Ljava/security/PrivateKey;Ljava/security/Signature;)V")
J2CPP_DEFINE_METHOD(java::security::SignedObject,1,"getObject","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::security::SignedObject,2,"getSignature","()[B")
J2CPP_DEFINE_METHOD(java::security::SignedObject,3,"getAlgorithm","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::security::SignedObject,4,"verify","(Ljava/security/PublicKey;Ljava/security/Signature;)Z")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_SIGNEDOBJECT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
