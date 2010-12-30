/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: javax.crypto.Mac
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_CRYPTO_MAC_HPP_DECL
#define J2CPP_JAVAX_CRYPTO_MAC_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Cloneable; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace security { class Provider; } } }
namespace j2cpp { namespace java { namespace security { class Key; } } }
namespace j2cpp { namespace java { namespace security { namespace spec { class AlgorithmParameterSpec; } } } }
namespace j2cpp { namespace java { namespace nio { class ByteBuffer; } } }


#include <java/lang/Cloneable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/nio/ByteBuffer.hpp>
#include <java/security/Key.hpp>
#include <java/security/Provider.hpp>
#include <java/security/spec/AlgorithmParameterSpec.hpp>


namespace j2cpp {

namespace javax { namespace crypto {

	class Mac;
	class Mac
		: public object<Mac>
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

		explicit Mac(jobject jobj)
		: object<Mac>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::lang::Cloneable>() const;


		local_ref< java::lang::String > getAlgorithm();
		local_ref< java::security::Provider > getProvider();
		static local_ref< javax::crypto::Mac > getInstance(local_ref< java::lang::String >  const&);
		static local_ref< javax::crypto::Mac > getInstance(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		static local_ref< javax::crypto::Mac > getInstance(local_ref< java::lang::String >  const&, local_ref< java::security::Provider >  const&);
		jint getMacLength();
		void init(local_ref< java::security::Key >  const&, local_ref< java::security::spec::AlgorithmParameterSpec >  const&);
		void init(local_ref< java::security::Key >  const&);
		void update(jbyte);
		void update(local_ref< array<jbyte,1> >  const&, jint, jint);
		void update(local_ref< array<jbyte,1> >  const&);
		void update(local_ref< java::nio::ByteBuffer >  const&);
		local_ref< array<jbyte,1> > doFinal();
		void doFinal(local_ref< array<jbyte,1> >  const&, jint);
		local_ref< array<jbyte,1> > doFinal(local_ref< array<jbyte,1> >  const&);
		void reset();
		local_ref< java::lang::Object > clone();
	}; //class Mac

} //namespace crypto
} //namespace javax

} //namespace j2cpp

#endif //J2CPP_JAVAX_CRYPTO_MAC_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_CRYPTO_MAC_HPP_IMPL
#define J2CPP_JAVAX_CRYPTO_MAC_HPP_IMPL

namespace j2cpp {



javax::crypto::Mac::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

javax::crypto::Mac::operator local_ref<java::lang::Cloneable>() const
{
	return local_ref<java::lang::Cloneable>(get_jobject());
}


local_ref< java::lang::String > javax::crypto::Mac::getAlgorithm()
{
	return call_method<
		javax::crypto::Mac::J2CPP_CLASS_NAME,
		javax::crypto::Mac::J2CPP_METHOD_NAME(1),
		javax::crypto::Mac::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::String > >
	(get_jobject());
}

local_ref< java::security::Provider > javax::crypto::Mac::getProvider()
{
	return call_method<
		javax::crypto::Mac::J2CPP_CLASS_NAME,
		javax::crypto::Mac::J2CPP_METHOD_NAME(2),
		javax::crypto::Mac::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::security::Provider > >
	(get_jobject());
}

local_ref< javax::crypto::Mac > javax::crypto::Mac::getInstance(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		javax::crypto::Mac::J2CPP_CLASS_NAME,
		javax::crypto::Mac::J2CPP_METHOD_NAME(3),
		javax::crypto::Mac::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< javax::crypto::Mac > >
	(a0);
}

local_ref< javax::crypto::Mac > javax::crypto::Mac::getInstance(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_static_method<
		javax::crypto::Mac::J2CPP_CLASS_NAME,
		javax::crypto::Mac::J2CPP_METHOD_NAME(4),
		javax::crypto::Mac::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< javax::crypto::Mac > >
	(a0, a1);
}

local_ref< javax::crypto::Mac > javax::crypto::Mac::getInstance(local_ref< java::lang::String > const &a0, local_ref< java::security::Provider > const &a1)
{
	return call_static_method<
		javax::crypto::Mac::J2CPP_CLASS_NAME,
		javax::crypto::Mac::J2CPP_METHOD_NAME(5),
		javax::crypto::Mac::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< javax::crypto::Mac > >
	(a0, a1);
}

jint javax::crypto::Mac::getMacLength()
{
	return call_method<
		javax::crypto::Mac::J2CPP_CLASS_NAME,
		javax::crypto::Mac::J2CPP_METHOD_NAME(6),
		javax::crypto::Mac::J2CPP_METHOD_SIGNATURE(6), 
		jint >
	(get_jobject());
}

void javax::crypto::Mac::init(local_ref< java::security::Key > const &a0, local_ref< java::security::spec::AlgorithmParameterSpec > const &a1)
{
	return call_method<
		javax::crypto::Mac::J2CPP_CLASS_NAME,
		javax::crypto::Mac::J2CPP_METHOD_NAME(7),
		javax::crypto::Mac::J2CPP_METHOD_SIGNATURE(7), 
		void >
	(get_jobject(), a0, a1);
}

void javax::crypto::Mac::init(local_ref< java::security::Key > const &a0)
{
	return call_method<
		javax::crypto::Mac::J2CPP_CLASS_NAME,
		javax::crypto::Mac::J2CPP_METHOD_NAME(8),
		javax::crypto::Mac::J2CPP_METHOD_SIGNATURE(8), 
		void >
	(get_jobject(), a0);
}

void javax::crypto::Mac::update(jbyte a0)
{
	return call_method<
		javax::crypto::Mac::J2CPP_CLASS_NAME,
		javax::crypto::Mac::J2CPP_METHOD_NAME(9),
		javax::crypto::Mac::J2CPP_METHOD_SIGNATURE(9), 
		void >
	(get_jobject(), a0);
}

void javax::crypto::Mac::update(local_ref< array<jbyte,1> > const &a0, jint a1, jint a2)
{
	return call_method<
		javax::crypto::Mac::J2CPP_CLASS_NAME,
		javax::crypto::Mac::J2CPP_METHOD_NAME(10),
		javax::crypto::Mac::J2CPP_METHOD_SIGNATURE(10), 
		void >
	(get_jobject(), a0, a1, a2);
}

void javax::crypto::Mac::update(local_ref< array<jbyte,1> > const &a0)
{
	return call_method<
		javax::crypto::Mac::J2CPP_CLASS_NAME,
		javax::crypto::Mac::J2CPP_METHOD_NAME(11),
		javax::crypto::Mac::J2CPP_METHOD_SIGNATURE(11), 
		void >
	(get_jobject(), a0);
}

void javax::crypto::Mac::update(local_ref< java::nio::ByteBuffer > const &a0)
{
	return call_method<
		javax::crypto::Mac::J2CPP_CLASS_NAME,
		javax::crypto::Mac::J2CPP_METHOD_NAME(12),
		javax::crypto::Mac::J2CPP_METHOD_SIGNATURE(12), 
		void >
	(get_jobject(), a0);
}

local_ref< array<jbyte,1> > javax::crypto::Mac::doFinal()
{
	return call_method<
		javax::crypto::Mac::J2CPP_CLASS_NAME,
		javax::crypto::Mac::J2CPP_METHOD_NAME(13),
		javax::crypto::Mac::J2CPP_METHOD_SIGNATURE(13), 
		local_ref< array<jbyte,1> > >
	(get_jobject());
}

void javax::crypto::Mac::doFinal(local_ref< array<jbyte,1> > const &a0, jint a1)
{
	return call_method<
		javax::crypto::Mac::J2CPP_CLASS_NAME,
		javax::crypto::Mac::J2CPP_METHOD_NAME(14),
		javax::crypto::Mac::J2CPP_METHOD_SIGNATURE(14), 
		void >
	(get_jobject(), a0, a1);
}

local_ref< array<jbyte,1> > javax::crypto::Mac::doFinal(local_ref< array<jbyte,1> > const &a0)
{
	return call_method<
		javax::crypto::Mac::J2CPP_CLASS_NAME,
		javax::crypto::Mac::J2CPP_METHOD_NAME(15),
		javax::crypto::Mac::J2CPP_METHOD_SIGNATURE(15), 
		local_ref< array<jbyte,1> > >
	(get_jobject(), a0);
}

void javax::crypto::Mac::reset()
{
	return call_method<
		javax::crypto::Mac::J2CPP_CLASS_NAME,
		javax::crypto::Mac::J2CPP_METHOD_NAME(16),
		javax::crypto::Mac::J2CPP_METHOD_SIGNATURE(16), 
		void >
	(get_jobject());
}

local_ref< java::lang::Object > javax::crypto::Mac::clone()
{
	return call_method<
		javax::crypto::Mac::J2CPP_CLASS_NAME,
		javax::crypto::Mac::J2CPP_METHOD_NAME(17),
		javax::crypto::Mac::J2CPP_METHOD_SIGNATURE(17), 
		local_ref< java::lang::Object > >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(javax::crypto::Mac,"javax/crypto/Mac")
J2CPP_DEFINE_METHOD(javax::crypto::Mac,0,"<init>","(Ljavax/crypto/MacSpi;Ljava/security/Provider;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(javax::crypto::Mac,1,"getAlgorithm","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(javax::crypto::Mac,2,"getProvider","()Ljava/security/Provider;")
J2CPP_DEFINE_METHOD(javax::crypto::Mac,3,"getInstance","(Ljava/lang/String;)Ljavax/crypto/Mac;")
J2CPP_DEFINE_METHOD(javax::crypto::Mac,4,"getInstance","(Ljava/lang/String;Ljava/lang/String;)Ljavax/crypto/Mac;")
J2CPP_DEFINE_METHOD(javax::crypto::Mac,5,"getInstance","(Ljava/lang/String;Ljava/security/Provider;)Ljavax/crypto/Mac;")
J2CPP_DEFINE_METHOD(javax::crypto::Mac,6,"getMacLength","()I")
J2CPP_DEFINE_METHOD(javax::crypto::Mac,7,"init","(Ljava/security/Key;Ljava/security/spec/AlgorithmParameterSpec;)V")
J2CPP_DEFINE_METHOD(javax::crypto::Mac,8,"init","(Ljava/security/Key;)V")
J2CPP_DEFINE_METHOD(javax::crypto::Mac,9,"update","(B)V")
J2CPP_DEFINE_METHOD(javax::crypto::Mac,10,"update","([BII)V")
J2CPP_DEFINE_METHOD(javax::crypto::Mac,11,"update","([B)V")
J2CPP_DEFINE_METHOD(javax::crypto::Mac,12,"update","(Ljava/nio/ByteBuffer;)V")
J2CPP_DEFINE_METHOD(javax::crypto::Mac,13,"doFinal","()[B")
J2CPP_DEFINE_METHOD(javax::crypto::Mac,14,"doFinal","([BI)V")
J2CPP_DEFINE_METHOD(javax::crypto::Mac,15,"doFinal","([B)[B")
J2CPP_DEFINE_METHOD(javax::crypto::Mac,16,"reset","()V")
J2CPP_DEFINE_METHOD(javax::crypto::Mac,17,"clone","()Ljava/lang/Object;")

} //namespace j2cpp

#endif //J2CPP_JAVAX_CRYPTO_MAC_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
