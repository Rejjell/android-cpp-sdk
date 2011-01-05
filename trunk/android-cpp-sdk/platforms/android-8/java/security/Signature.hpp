/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.security.Signature
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_SIGNATURE_HPP_DECL
#define J2CPP_JAVA_SECURITY_SIGNATURE_HPP_DECL


namespace j2cpp { namespace java { namespace nio { class ByteBuffer; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace security { class SignatureSpi; } } }
namespace j2cpp { namespace java { namespace security { class PrivateKey; } } }
namespace j2cpp { namespace java { namespace security { namespace spec { class AlgorithmParameterSpec; } } } }
namespace j2cpp { namespace java { namespace security { class Provider; } } }
namespace j2cpp { namespace java { namespace security { class PublicKey; } } }
namespace j2cpp { namespace java { namespace security { namespace cert { class Certificate; } } } }
namespace j2cpp { namespace java { namespace security { class AlgorithmParameters; } } }
namespace j2cpp { namespace java { namespace security { class SecureRandom; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/nio/ByteBuffer.hpp>
#include <java/security/AlgorithmParameters.hpp>
#include <java/security/PrivateKey.hpp>
#include <java/security/Provider.hpp>
#include <java/security/PublicKey.hpp>
#include <java/security/SecureRandom.hpp>
#include <java/security/SignatureSpi.hpp>
#include <java/security/cert/Certificate.hpp>
#include <java/security/spec/AlgorithmParameterSpec.hpp>


namespace j2cpp {

namespace java { namespace security {

	class Signature;
	class Signature
		: public object<Signature>
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
		J2CPP_DECLARE_METHOD(9)
		J2CPP_DECLARE_METHOD(10)
		J2CPP_DECLARE_METHOD(11)
		J2CPP_DECLARE_METHOD(12)
		J2CPP_DECLARE_METHOD(13)
		J2CPP_DECLARE_METHOD(14)
		J2CPP_DECLARE_METHOD(15)
		J2CPP_DECLARE_METHOD(16)
		J2CPP_DECLARE_METHOD(17)
		J2CPP_DECLARE_METHOD(18)
		J2CPP_DECLARE_METHOD(19)
		J2CPP_DECLARE_METHOD(20)
		J2CPP_DECLARE_METHOD(21)
		J2CPP_DECLARE_METHOD(22)
		J2CPP_DECLARE_METHOD(23)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)

		explicit Signature(jobject jobj)
		: object<Signature>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::security::SignatureSpi>() const;


		static local_ref< java::security::Signature > getInstance(local_ref< java::lang::String >  const&);
		static local_ref< java::security::Signature > getInstance(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		static local_ref< java::security::Signature > getInstance(local_ref< java::lang::String >  const&, local_ref< java::security::Provider >  const&);
		local_ref< java::security::Provider > getProvider();
		local_ref< java::lang::String > getAlgorithm();
		void initVerify(local_ref< java::security::PublicKey >  const&);
		void initVerify(local_ref< java::security::cert::Certificate >  const&);
		void initSign(local_ref< java::security::PrivateKey >  const&);
		void initSign(local_ref< java::security::PrivateKey >  const&, local_ref< java::security::SecureRandom >  const&);
		local_ref< array<jbyte,1> > sign();
		jint sign(local_ref< array<jbyte,1> >  const&, jint, jint);
		jboolean verify(local_ref< array<jbyte,1> >  const&);
		jboolean verify(local_ref< array<jbyte,1> >  const&, jint, jint);
		void update(jbyte);
		void update(local_ref< array<jbyte,1> >  const&);
		void update(local_ref< array<jbyte,1> >  const&, jint, jint);
		void update(local_ref< java::nio::ByteBuffer >  const&);
		local_ref< java::lang::String > toString();
		void setParameter(local_ref< java::lang::String >  const&, local_ref< java::lang::Object >  const&);
		void setParameter(local_ref< java::security::spec::AlgorithmParameterSpec >  const&);
		local_ref< java::security::AlgorithmParameters > getParameters();
		local_ref< java::lang::Object > getParameter(local_ref< java::lang::String >  const&);
		local_ref< java::lang::Object > clone();

	}; //class Signature

} //namespace security
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_SIGNATURE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_SIGNATURE_HPP_IMPL
#define J2CPP_JAVA_SECURITY_SIGNATURE_HPP_IMPL

namespace j2cpp {



java::security::Signature::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::security::Signature::operator local_ref<java::security::SignatureSpi>() const
{
	return local_ref<java::security::SignatureSpi>(get_jobject());
}


local_ref< java::security::Signature > java::security::Signature::getInstance(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		java::security::Signature::J2CPP_CLASS_NAME,
		java::security::Signature::J2CPP_METHOD_NAME(1),
		java::security::Signature::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::security::Signature >
	>(a0);
}

local_ref< java::security::Signature > java::security::Signature::getInstance(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_static_method<
		java::security::Signature::J2CPP_CLASS_NAME,
		java::security::Signature::J2CPP_METHOD_NAME(2),
		java::security::Signature::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::security::Signature >
	>(a0, a1);
}

local_ref< java::security::Signature > java::security::Signature::getInstance(local_ref< java::lang::String > const &a0, local_ref< java::security::Provider > const &a1)
{
	return call_static_method<
		java::security::Signature::J2CPP_CLASS_NAME,
		java::security::Signature::J2CPP_METHOD_NAME(3),
		java::security::Signature::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::security::Signature >
	>(a0, a1);
}

local_ref< java::security::Provider > java::security::Signature::getProvider()
{
	return call_method<
		java::security::Signature::J2CPP_CLASS_NAME,
		java::security::Signature::J2CPP_METHOD_NAME(4),
		java::security::Signature::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::security::Provider >
	>(get_jobject());
}

local_ref< java::lang::String > java::security::Signature::getAlgorithm()
{
	return call_method<
		java::security::Signature::J2CPP_CLASS_NAME,
		java::security::Signature::J2CPP_METHOD_NAME(5),
		java::security::Signature::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::lang::String >
	>(get_jobject());
}

void java::security::Signature::initVerify(local_ref< java::security::PublicKey > const &a0)
{
	return call_method<
		java::security::Signature::J2CPP_CLASS_NAME,
		java::security::Signature::J2CPP_METHOD_NAME(6),
		java::security::Signature::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(get_jobject(), a0);
}

void java::security::Signature::initVerify(local_ref< java::security::cert::Certificate > const &a0)
{
	return call_method<
		java::security::Signature::J2CPP_CLASS_NAME,
		java::security::Signature::J2CPP_METHOD_NAME(7),
		java::security::Signature::J2CPP_METHOD_SIGNATURE(7), 
		void
	>(get_jobject(), a0);
}

void java::security::Signature::initSign(local_ref< java::security::PrivateKey > const &a0)
{
	return call_method<
		java::security::Signature::J2CPP_CLASS_NAME,
		java::security::Signature::J2CPP_METHOD_NAME(8),
		java::security::Signature::J2CPP_METHOD_SIGNATURE(8), 
		void
	>(get_jobject(), a0);
}

void java::security::Signature::initSign(local_ref< java::security::PrivateKey > const &a0, local_ref< java::security::SecureRandom > const &a1)
{
	return call_method<
		java::security::Signature::J2CPP_CLASS_NAME,
		java::security::Signature::J2CPP_METHOD_NAME(9),
		java::security::Signature::J2CPP_METHOD_SIGNATURE(9), 
		void
	>(get_jobject(), a0, a1);
}

local_ref< array<jbyte,1> > java::security::Signature::sign()
{
	return call_method<
		java::security::Signature::J2CPP_CLASS_NAME,
		java::security::Signature::J2CPP_METHOD_NAME(10),
		java::security::Signature::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< array<jbyte,1> >
	>(get_jobject());
}

jint java::security::Signature::sign(local_ref< array<jbyte,1> > const &a0, jint a1, jint a2)
{
	return call_method<
		java::security::Signature::J2CPP_CLASS_NAME,
		java::security::Signature::J2CPP_METHOD_NAME(11),
		java::security::Signature::J2CPP_METHOD_SIGNATURE(11), 
		jint
	>(get_jobject(), a0, a1, a2);
}

jboolean java::security::Signature::verify(local_ref< array<jbyte,1> > const &a0)
{
	return call_method<
		java::security::Signature::J2CPP_CLASS_NAME,
		java::security::Signature::J2CPP_METHOD_NAME(12),
		java::security::Signature::J2CPP_METHOD_SIGNATURE(12), 
		jboolean
	>(get_jobject(), a0);
}

jboolean java::security::Signature::verify(local_ref< array<jbyte,1> > const &a0, jint a1, jint a2)
{
	return call_method<
		java::security::Signature::J2CPP_CLASS_NAME,
		java::security::Signature::J2CPP_METHOD_NAME(13),
		java::security::Signature::J2CPP_METHOD_SIGNATURE(13), 
		jboolean
	>(get_jobject(), a0, a1, a2);
}

void java::security::Signature::update(jbyte a0)
{
	return call_method<
		java::security::Signature::J2CPP_CLASS_NAME,
		java::security::Signature::J2CPP_METHOD_NAME(14),
		java::security::Signature::J2CPP_METHOD_SIGNATURE(14), 
		void
	>(get_jobject(), a0);
}

void java::security::Signature::update(local_ref< array<jbyte,1> > const &a0)
{
	return call_method<
		java::security::Signature::J2CPP_CLASS_NAME,
		java::security::Signature::J2CPP_METHOD_NAME(15),
		java::security::Signature::J2CPP_METHOD_SIGNATURE(15), 
		void
	>(get_jobject(), a0);
}

void java::security::Signature::update(local_ref< array<jbyte,1> > const &a0, jint a1, jint a2)
{
	return call_method<
		java::security::Signature::J2CPP_CLASS_NAME,
		java::security::Signature::J2CPP_METHOD_NAME(16),
		java::security::Signature::J2CPP_METHOD_SIGNATURE(16), 
		void
	>(get_jobject(), a0, a1, a2);
}

void java::security::Signature::update(local_ref< java::nio::ByteBuffer > const &a0)
{
	return call_method<
		java::security::Signature::J2CPP_CLASS_NAME,
		java::security::Signature::J2CPP_METHOD_NAME(17),
		java::security::Signature::J2CPP_METHOD_SIGNATURE(17), 
		void
	>(get_jobject(), a0);
}

local_ref< java::lang::String > java::security::Signature::toString()
{
	return call_method<
		java::security::Signature::J2CPP_CLASS_NAME,
		java::security::Signature::J2CPP_METHOD_NAME(18),
		java::security::Signature::J2CPP_METHOD_SIGNATURE(18), 
		local_ref< java::lang::String >
	>(get_jobject());
}

void java::security::Signature::setParameter(local_ref< java::lang::String > const &a0, local_ref< java::lang::Object > const &a1)
{
	return call_method<
		java::security::Signature::J2CPP_CLASS_NAME,
		java::security::Signature::J2CPP_METHOD_NAME(19),
		java::security::Signature::J2CPP_METHOD_SIGNATURE(19), 
		void
	>(get_jobject(), a0, a1);
}

void java::security::Signature::setParameter(local_ref< java::security::spec::AlgorithmParameterSpec > const &a0)
{
	return call_method<
		java::security::Signature::J2CPP_CLASS_NAME,
		java::security::Signature::J2CPP_METHOD_NAME(20),
		java::security::Signature::J2CPP_METHOD_SIGNATURE(20), 
		void
	>(get_jobject(), a0);
}

local_ref< java::security::AlgorithmParameters > java::security::Signature::getParameters()
{
	return call_method<
		java::security::Signature::J2CPP_CLASS_NAME,
		java::security::Signature::J2CPP_METHOD_NAME(21),
		java::security::Signature::J2CPP_METHOD_SIGNATURE(21), 
		local_ref< java::security::AlgorithmParameters >
	>(get_jobject());
}

local_ref< java::lang::Object > java::security::Signature::getParameter(local_ref< java::lang::String > const &a0)
{
	return call_method<
		java::security::Signature::J2CPP_CLASS_NAME,
		java::security::Signature::J2CPP_METHOD_NAME(22),
		java::security::Signature::J2CPP_METHOD_SIGNATURE(22), 
		local_ref< java::lang::Object >
	>(get_jobject(), a0);
}

local_ref< java::lang::Object > java::security::Signature::clone()
{
	return call_method<
		java::security::Signature::J2CPP_CLASS_NAME,
		java::security::Signature::J2CPP_METHOD_NAME(23),
		java::security::Signature::J2CPP_METHOD_SIGNATURE(23), 
		local_ref< java::lang::Object >
	>(get_jobject());
}



J2CPP_DEFINE_CLASS(java::security::Signature,"java/security/Signature")
J2CPP_DEFINE_METHOD(java::security::Signature,0,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::security::Signature,1,"getInstance","(Ljava/lang/String;)Ljava/security/Signature;")
J2CPP_DEFINE_METHOD(java::security::Signature,2,"getInstance","(Ljava/lang/String;Ljava/lang/String;)Ljava/security/Signature;")
J2CPP_DEFINE_METHOD(java::security::Signature,3,"getInstance","(Ljava/lang/String;Ljava/security/Provider;)Ljava/security/Signature;")
J2CPP_DEFINE_METHOD(java::security::Signature,4,"getProvider","()Ljava/security/Provider;")
J2CPP_DEFINE_METHOD(java::security::Signature,5,"getAlgorithm","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::security::Signature,6,"initVerify","(Ljava/security/PublicKey;)V")
J2CPP_DEFINE_METHOD(java::security::Signature,7,"initVerify","(Ljava/security/cert/Certificate;)V")
J2CPP_DEFINE_METHOD(java::security::Signature,8,"initSign","(Ljava/security/PrivateKey;)V")
J2CPP_DEFINE_METHOD(java::security::Signature,9,"initSign","(Ljava/security/PrivateKey;Ljava/security/SecureRandom;)V")
J2CPP_DEFINE_METHOD(java::security::Signature,10,"sign","()[B")
J2CPP_DEFINE_METHOD(java::security::Signature,11,"sign","([BII)I")
J2CPP_DEFINE_METHOD(java::security::Signature,12,"verify","([B)Z")
J2CPP_DEFINE_METHOD(java::security::Signature,13,"verify","([BII)Z")
J2CPP_DEFINE_METHOD(java::security::Signature,14,"update","(B)V")
J2CPP_DEFINE_METHOD(java::security::Signature,15,"update","([B)V")
J2CPP_DEFINE_METHOD(java::security::Signature,16,"update","([BII)V")
J2CPP_DEFINE_METHOD(java::security::Signature,17,"update","(Ljava/nio/ByteBuffer;)V")
J2CPP_DEFINE_METHOD(java::security::Signature,18,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::security::Signature,19,"setParameter","(Ljava/lang/String;Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(java::security::Signature,20,"setParameter","(Ljava/security/spec/AlgorithmParameterSpec;)V")
J2CPP_DEFINE_METHOD(java::security::Signature,21,"getParameters","()Ljava/security/AlgorithmParameters;")
J2CPP_DEFINE_METHOD(java::security::Signature,22,"getParameter","(Ljava/lang/String;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::security::Signature,23,"clone","()Ljava/lang/Object;")
J2CPP_DEFINE_FIELD(java::security::Signature,0,"UNINITIALIZED","I")
J2CPP_DEFINE_FIELD(java::security::Signature,1,"SIGN","I")
J2CPP_DEFINE_FIELD(java::security::Signature,2,"VERIFY","I")
J2CPP_DEFINE_FIELD(java::security::Signature,3,"state","I")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_SIGNATURE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
