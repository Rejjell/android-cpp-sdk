/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: javax.crypto.Cipher
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_CRYPTO_CIPHER_HPP_DECL
#define J2CPP_JAVAX_CRYPTO_CIPHER_HPP_DECL


namespace j2cpp { namespace javax { namespace crypto { class ExemptionMechanism; } } }
namespace j2cpp { namespace java { namespace nio { class ByteBuffer; } } }
namespace j2cpp { namespace java { namespace security { class Provider; } } }
namespace j2cpp { namespace java { namespace security { namespace spec { class AlgorithmParameterSpec; } } } }
namespace j2cpp { namespace java { namespace security { namespace cert { class Certificate; } } } }
namespace j2cpp { namespace java { namespace security { class SecureRandom; } } }
namespace j2cpp { namespace java { namespace security { class Key; } } }
namespace j2cpp { namespace java { namespace security { class AlgorithmParameters; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/nio/ByteBuffer.hpp>
#include <java/security/AlgorithmParameters.hpp>
#include <java/security/Key.hpp>
#include <java/security/Provider.hpp>
#include <java/security/SecureRandom.hpp>
#include <java/security/cert/Certificate.hpp>
#include <java/security/spec/AlgorithmParameterSpec.hpp>
#include <javax/crypto/ExemptionMechanism.hpp>


namespace j2cpp {

namespace javax { namespace crypto {

	class Cipher;
	class Cipher
		: public object<Cipher>
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
		J2CPP_DECLARE_METHOD(24)
		J2CPP_DECLARE_METHOD(25)
		J2CPP_DECLARE_METHOD(26)
		J2CPP_DECLARE_METHOD(27)
		J2CPP_DECLARE_METHOD(28)
		J2CPP_DECLARE_METHOD(29)
		J2CPP_DECLARE_METHOD(30)
		J2CPP_DECLARE_METHOD(31)
		J2CPP_DECLARE_METHOD(32)
		J2CPP_DECLARE_METHOD(33)
		J2CPP_DECLARE_METHOD(34)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)
		J2CPP_DECLARE_FIELD(6)

		explicit Cipher(jobject jobj)
		: object<Cipher>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		static local_ref< javax::crypto::Cipher > getInstance(local_ref< java::lang::String >  const&);
		static local_ref< javax::crypto::Cipher > getInstance(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		static local_ref< javax::crypto::Cipher > getInstance(local_ref< java::lang::String >  const&, local_ref< java::security::Provider >  const&);
		local_ref< java::security::Provider > getProvider();
		local_ref< java::lang::String > getAlgorithm();
		jint getBlockSize();
		jint getOutputSize(jint);
		local_ref< array<jbyte,1> > getIV();
		local_ref< java::security::AlgorithmParameters > getParameters();
		local_ref< javax::crypto::ExemptionMechanism > getExemptionMechanism();
		void init(jint, local_ref< java::security::Key >  const&);
		void init(jint, local_ref< java::security::Key >  const&, local_ref< java::security::SecureRandom >  const&);
		void init(jint, local_ref< java::security::Key >  const&, local_ref< java::security::spec::AlgorithmParameterSpec >  const&);
		void init(jint, local_ref< java::security::Key >  const&, local_ref< java::security::spec::AlgorithmParameterSpec >  const&, local_ref< java::security::SecureRandom >  const&);
		void init(jint, local_ref< java::security::Key >  const&, local_ref< java::security::AlgorithmParameters >  const&);
		void init(jint, local_ref< java::security::Key >  const&, local_ref< java::security::AlgorithmParameters >  const&, local_ref< java::security::SecureRandom >  const&);
		void init(jint, local_ref< java::security::cert::Certificate >  const&);
		void init(jint, local_ref< java::security::cert::Certificate >  const&, local_ref< java::security::SecureRandom >  const&);
		local_ref< array<jbyte,1> > update(local_ref< array<jbyte,1> >  const&);
		local_ref< array<jbyte,1> > update(local_ref< array<jbyte,1> >  const&, jint, jint);
		jint update(local_ref< array<jbyte,1> >  const&, jint, jint, local_ref< array<jbyte,1> >  const&);
		jint update(local_ref< array<jbyte,1> >  const&, jint, jint, local_ref< array<jbyte,1> >  const&, jint);
		jint update(local_ref< java::nio::ByteBuffer >  const&, local_ref< java::nio::ByteBuffer >  const&);
		local_ref< array<jbyte,1> > doFinal();
		jint doFinal(local_ref< array<jbyte,1> >  const&, jint);
		local_ref< array<jbyte,1> > doFinal(local_ref< array<jbyte,1> >  const&);
		local_ref< array<jbyte,1> > doFinal(local_ref< array<jbyte,1> >  const&, jint, jint);
		jint doFinal(local_ref< array<jbyte,1> >  const&, jint, jint, local_ref< array<jbyte,1> >  const&);
		jint doFinal(local_ref< array<jbyte,1> >  const&, jint, jint, local_ref< array<jbyte,1> >  const&, jint);
		jint doFinal(local_ref< java::nio::ByteBuffer >  const&, local_ref< java::nio::ByteBuffer >  const&);
		local_ref< array<jbyte,1> > wrap(local_ref< java::security::Key >  const&);
		local_ref< java::security::Key > unwrap(local_ref< array<jbyte,1> >  const&, local_ref< java::lang::String >  const&, jint);
		static jint getMaxAllowedKeyLength(local_ref< java::lang::String >  const&);
		static local_ref< java::security::spec::AlgorithmParameterSpec > getMaxAllowedParameterSpec(local_ref< java::lang::String >  const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > DECRYPT_MODE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > ENCRYPT_MODE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jint > PRIVATE_KEY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), jint > PUBLIC_KEY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), jint > SECRET_KEY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), jint > UNWRAP_MODE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), jint > WRAP_MODE;
	}; //class Cipher

} //namespace crypto
} //namespace javax

} //namespace j2cpp

#endif //J2CPP_JAVAX_CRYPTO_CIPHER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_CRYPTO_CIPHER_HPP_IMPL
#define J2CPP_JAVAX_CRYPTO_CIPHER_HPP_IMPL

namespace j2cpp {



javax::crypto::Cipher::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


local_ref< javax::crypto::Cipher > javax::crypto::Cipher::getInstance(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		javax::crypto::Cipher::J2CPP_CLASS_NAME,
		javax::crypto::Cipher::J2CPP_METHOD_NAME(1),
		javax::crypto::Cipher::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< javax::crypto::Cipher > >
	(a0);
}

local_ref< javax::crypto::Cipher > javax::crypto::Cipher::getInstance(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_static_method<
		javax::crypto::Cipher::J2CPP_CLASS_NAME,
		javax::crypto::Cipher::J2CPP_METHOD_NAME(2),
		javax::crypto::Cipher::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< javax::crypto::Cipher > >
	(a0, a1);
}

local_ref< javax::crypto::Cipher > javax::crypto::Cipher::getInstance(local_ref< java::lang::String > const &a0, local_ref< java::security::Provider > const &a1)
{
	return call_static_method<
		javax::crypto::Cipher::J2CPP_CLASS_NAME,
		javax::crypto::Cipher::J2CPP_METHOD_NAME(3),
		javax::crypto::Cipher::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< javax::crypto::Cipher > >
	(a0, a1);
}

local_ref< java::security::Provider > javax::crypto::Cipher::getProvider()
{
	return call_method<
		javax::crypto::Cipher::J2CPP_CLASS_NAME,
		javax::crypto::Cipher::J2CPP_METHOD_NAME(4),
		javax::crypto::Cipher::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::security::Provider > >
	(get_jobject());
}

local_ref< java::lang::String > javax::crypto::Cipher::getAlgorithm()
{
	return call_method<
		javax::crypto::Cipher::J2CPP_CLASS_NAME,
		javax::crypto::Cipher::J2CPP_METHOD_NAME(5),
		javax::crypto::Cipher::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::lang::String > >
	(get_jobject());
}

jint javax::crypto::Cipher::getBlockSize()
{
	return call_method<
		javax::crypto::Cipher::J2CPP_CLASS_NAME,
		javax::crypto::Cipher::J2CPP_METHOD_NAME(6),
		javax::crypto::Cipher::J2CPP_METHOD_SIGNATURE(6), 
		jint >
	(get_jobject());
}

jint javax::crypto::Cipher::getOutputSize(jint a0)
{
	return call_method<
		javax::crypto::Cipher::J2CPP_CLASS_NAME,
		javax::crypto::Cipher::J2CPP_METHOD_NAME(7),
		javax::crypto::Cipher::J2CPP_METHOD_SIGNATURE(7), 
		jint >
	(get_jobject(), a0);
}

local_ref< array<jbyte,1> > javax::crypto::Cipher::getIV()
{
	return call_method<
		javax::crypto::Cipher::J2CPP_CLASS_NAME,
		javax::crypto::Cipher::J2CPP_METHOD_NAME(8),
		javax::crypto::Cipher::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< array<jbyte,1> > >
	(get_jobject());
}

local_ref< java::security::AlgorithmParameters > javax::crypto::Cipher::getParameters()
{
	return call_method<
		javax::crypto::Cipher::J2CPP_CLASS_NAME,
		javax::crypto::Cipher::J2CPP_METHOD_NAME(9),
		javax::crypto::Cipher::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< java::security::AlgorithmParameters > >
	(get_jobject());
}

local_ref< javax::crypto::ExemptionMechanism > javax::crypto::Cipher::getExemptionMechanism()
{
	return call_method<
		javax::crypto::Cipher::J2CPP_CLASS_NAME,
		javax::crypto::Cipher::J2CPP_METHOD_NAME(10),
		javax::crypto::Cipher::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< javax::crypto::ExemptionMechanism > >
	(get_jobject());
}

void javax::crypto::Cipher::init(jint a0, local_ref< java::security::Key > const &a1)
{
	return call_method<
		javax::crypto::Cipher::J2CPP_CLASS_NAME,
		javax::crypto::Cipher::J2CPP_METHOD_NAME(11),
		javax::crypto::Cipher::J2CPP_METHOD_SIGNATURE(11), 
		void >
	(get_jobject(), a0, a1);
}

void javax::crypto::Cipher::init(jint a0, local_ref< java::security::Key > const &a1, local_ref< java::security::SecureRandom > const &a2)
{
	return call_method<
		javax::crypto::Cipher::J2CPP_CLASS_NAME,
		javax::crypto::Cipher::J2CPP_METHOD_NAME(12),
		javax::crypto::Cipher::J2CPP_METHOD_SIGNATURE(12), 
		void >
	(get_jobject(), a0, a1, a2);
}

void javax::crypto::Cipher::init(jint a0, local_ref< java::security::Key > const &a1, local_ref< java::security::spec::AlgorithmParameterSpec > const &a2)
{
	return call_method<
		javax::crypto::Cipher::J2CPP_CLASS_NAME,
		javax::crypto::Cipher::J2CPP_METHOD_NAME(13),
		javax::crypto::Cipher::J2CPP_METHOD_SIGNATURE(13), 
		void >
	(get_jobject(), a0, a1, a2);
}

void javax::crypto::Cipher::init(jint a0, local_ref< java::security::Key > const &a1, local_ref< java::security::spec::AlgorithmParameterSpec > const &a2, local_ref< java::security::SecureRandom > const &a3)
{
	return call_method<
		javax::crypto::Cipher::J2CPP_CLASS_NAME,
		javax::crypto::Cipher::J2CPP_METHOD_NAME(14),
		javax::crypto::Cipher::J2CPP_METHOD_SIGNATURE(14), 
		void >
	(get_jobject(), a0, a1, a2, a3);
}

void javax::crypto::Cipher::init(jint a0, local_ref< java::security::Key > const &a1, local_ref< java::security::AlgorithmParameters > const &a2)
{
	return call_method<
		javax::crypto::Cipher::J2CPP_CLASS_NAME,
		javax::crypto::Cipher::J2CPP_METHOD_NAME(15),
		javax::crypto::Cipher::J2CPP_METHOD_SIGNATURE(15), 
		void >
	(get_jobject(), a0, a1, a2);
}

void javax::crypto::Cipher::init(jint a0, local_ref< java::security::Key > const &a1, local_ref< java::security::AlgorithmParameters > const &a2, local_ref< java::security::SecureRandom > const &a3)
{
	return call_method<
		javax::crypto::Cipher::J2CPP_CLASS_NAME,
		javax::crypto::Cipher::J2CPP_METHOD_NAME(16),
		javax::crypto::Cipher::J2CPP_METHOD_SIGNATURE(16), 
		void >
	(get_jobject(), a0, a1, a2, a3);
}

void javax::crypto::Cipher::init(jint a0, local_ref< java::security::cert::Certificate > const &a1)
{
	return call_method<
		javax::crypto::Cipher::J2CPP_CLASS_NAME,
		javax::crypto::Cipher::J2CPP_METHOD_NAME(17),
		javax::crypto::Cipher::J2CPP_METHOD_SIGNATURE(17), 
		void >
	(get_jobject(), a0, a1);
}

void javax::crypto::Cipher::init(jint a0, local_ref< java::security::cert::Certificate > const &a1, local_ref< java::security::SecureRandom > const &a2)
{
	return call_method<
		javax::crypto::Cipher::J2CPP_CLASS_NAME,
		javax::crypto::Cipher::J2CPP_METHOD_NAME(18),
		javax::crypto::Cipher::J2CPP_METHOD_SIGNATURE(18), 
		void >
	(get_jobject(), a0, a1, a2);
}

local_ref< array<jbyte,1> > javax::crypto::Cipher::update(local_ref< array<jbyte,1> > const &a0)
{
	return call_method<
		javax::crypto::Cipher::J2CPP_CLASS_NAME,
		javax::crypto::Cipher::J2CPP_METHOD_NAME(19),
		javax::crypto::Cipher::J2CPP_METHOD_SIGNATURE(19), 
		local_ref< array<jbyte,1> > >
	(get_jobject(), a0);
}

local_ref< array<jbyte,1> > javax::crypto::Cipher::update(local_ref< array<jbyte,1> > const &a0, jint a1, jint a2)
{
	return call_method<
		javax::crypto::Cipher::J2CPP_CLASS_NAME,
		javax::crypto::Cipher::J2CPP_METHOD_NAME(20),
		javax::crypto::Cipher::J2CPP_METHOD_SIGNATURE(20), 
		local_ref< array<jbyte,1> > >
	(get_jobject(), a0, a1, a2);
}

jint javax::crypto::Cipher::update(local_ref< array<jbyte,1> > const &a0, jint a1, jint a2, local_ref< array<jbyte,1> > const &a3)
{
	return call_method<
		javax::crypto::Cipher::J2CPP_CLASS_NAME,
		javax::crypto::Cipher::J2CPP_METHOD_NAME(21),
		javax::crypto::Cipher::J2CPP_METHOD_SIGNATURE(21), 
		jint >
	(get_jobject(), a0, a1, a2, a3);
}

jint javax::crypto::Cipher::update(local_ref< array<jbyte,1> > const &a0, jint a1, jint a2, local_ref< array<jbyte,1> > const &a3, jint a4)
{
	return call_method<
		javax::crypto::Cipher::J2CPP_CLASS_NAME,
		javax::crypto::Cipher::J2CPP_METHOD_NAME(22),
		javax::crypto::Cipher::J2CPP_METHOD_SIGNATURE(22), 
		jint >
	(get_jobject(), a0, a1, a2, a3, a4);
}

jint javax::crypto::Cipher::update(local_ref< java::nio::ByteBuffer > const &a0, local_ref< java::nio::ByteBuffer > const &a1)
{
	return call_method<
		javax::crypto::Cipher::J2CPP_CLASS_NAME,
		javax::crypto::Cipher::J2CPP_METHOD_NAME(23),
		javax::crypto::Cipher::J2CPP_METHOD_SIGNATURE(23), 
		jint >
	(get_jobject(), a0, a1);
}

local_ref< array<jbyte,1> > javax::crypto::Cipher::doFinal()
{
	return call_method<
		javax::crypto::Cipher::J2CPP_CLASS_NAME,
		javax::crypto::Cipher::J2CPP_METHOD_NAME(24),
		javax::crypto::Cipher::J2CPP_METHOD_SIGNATURE(24), 
		local_ref< array<jbyte,1> > >
	(get_jobject());
}

jint javax::crypto::Cipher::doFinal(local_ref< array<jbyte,1> > const &a0, jint a1)
{
	return call_method<
		javax::crypto::Cipher::J2CPP_CLASS_NAME,
		javax::crypto::Cipher::J2CPP_METHOD_NAME(25),
		javax::crypto::Cipher::J2CPP_METHOD_SIGNATURE(25), 
		jint >
	(get_jobject(), a0, a1);
}

local_ref< array<jbyte,1> > javax::crypto::Cipher::doFinal(local_ref< array<jbyte,1> > const &a0)
{
	return call_method<
		javax::crypto::Cipher::J2CPP_CLASS_NAME,
		javax::crypto::Cipher::J2CPP_METHOD_NAME(26),
		javax::crypto::Cipher::J2CPP_METHOD_SIGNATURE(26), 
		local_ref< array<jbyte,1> > >
	(get_jobject(), a0);
}

local_ref< array<jbyte,1> > javax::crypto::Cipher::doFinal(local_ref< array<jbyte,1> > const &a0, jint a1, jint a2)
{
	return call_method<
		javax::crypto::Cipher::J2CPP_CLASS_NAME,
		javax::crypto::Cipher::J2CPP_METHOD_NAME(27),
		javax::crypto::Cipher::J2CPP_METHOD_SIGNATURE(27), 
		local_ref< array<jbyte,1> > >
	(get_jobject(), a0, a1, a2);
}

jint javax::crypto::Cipher::doFinal(local_ref< array<jbyte,1> > const &a0, jint a1, jint a2, local_ref< array<jbyte,1> > const &a3)
{
	return call_method<
		javax::crypto::Cipher::J2CPP_CLASS_NAME,
		javax::crypto::Cipher::J2CPP_METHOD_NAME(28),
		javax::crypto::Cipher::J2CPP_METHOD_SIGNATURE(28), 
		jint >
	(get_jobject(), a0, a1, a2, a3);
}

jint javax::crypto::Cipher::doFinal(local_ref< array<jbyte,1> > const &a0, jint a1, jint a2, local_ref< array<jbyte,1> > const &a3, jint a4)
{
	return call_method<
		javax::crypto::Cipher::J2CPP_CLASS_NAME,
		javax::crypto::Cipher::J2CPP_METHOD_NAME(29),
		javax::crypto::Cipher::J2CPP_METHOD_SIGNATURE(29), 
		jint >
	(get_jobject(), a0, a1, a2, a3, a4);
}

jint javax::crypto::Cipher::doFinal(local_ref< java::nio::ByteBuffer > const &a0, local_ref< java::nio::ByteBuffer > const &a1)
{
	return call_method<
		javax::crypto::Cipher::J2CPP_CLASS_NAME,
		javax::crypto::Cipher::J2CPP_METHOD_NAME(30),
		javax::crypto::Cipher::J2CPP_METHOD_SIGNATURE(30), 
		jint >
	(get_jobject(), a0, a1);
}

local_ref< array<jbyte,1> > javax::crypto::Cipher::wrap(local_ref< java::security::Key > const &a0)
{
	return call_method<
		javax::crypto::Cipher::J2CPP_CLASS_NAME,
		javax::crypto::Cipher::J2CPP_METHOD_NAME(31),
		javax::crypto::Cipher::J2CPP_METHOD_SIGNATURE(31), 
		local_ref< array<jbyte,1> > >
	(get_jobject(), a0);
}

local_ref< java::security::Key > javax::crypto::Cipher::unwrap(local_ref< array<jbyte,1> > const &a0, local_ref< java::lang::String > const &a1, jint a2)
{
	return call_method<
		javax::crypto::Cipher::J2CPP_CLASS_NAME,
		javax::crypto::Cipher::J2CPP_METHOD_NAME(32),
		javax::crypto::Cipher::J2CPP_METHOD_SIGNATURE(32), 
		local_ref< java::security::Key > >
	(get_jobject(), a0, a1, a2);
}

jint javax::crypto::Cipher::getMaxAllowedKeyLength(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		javax::crypto::Cipher::J2CPP_CLASS_NAME,
		javax::crypto::Cipher::J2CPP_METHOD_NAME(33),
		javax::crypto::Cipher::J2CPP_METHOD_SIGNATURE(33), 
		jint >
	(a0);
}

local_ref< java::security::spec::AlgorithmParameterSpec > javax::crypto::Cipher::getMaxAllowedParameterSpec(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		javax::crypto::Cipher::J2CPP_CLASS_NAME,
		javax::crypto::Cipher::J2CPP_METHOD_NAME(34),
		javax::crypto::Cipher::J2CPP_METHOD_SIGNATURE(34), 
		local_ref< java::security::spec::AlgorithmParameterSpec > >
	(a0);
}


static_field<
	javax::crypto::Cipher::J2CPP_CLASS_NAME,
	javax::crypto::Cipher::J2CPP_FIELD_NAME(0),
	javax::crypto::Cipher::J2CPP_FIELD_SIGNATURE(0),
	jint
> javax::crypto::Cipher::DECRYPT_MODE;

static_field<
	javax::crypto::Cipher::J2CPP_CLASS_NAME,
	javax::crypto::Cipher::J2CPP_FIELD_NAME(1),
	javax::crypto::Cipher::J2CPP_FIELD_SIGNATURE(1),
	jint
> javax::crypto::Cipher::ENCRYPT_MODE;

static_field<
	javax::crypto::Cipher::J2CPP_CLASS_NAME,
	javax::crypto::Cipher::J2CPP_FIELD_NAME(2),
	javax::crypto::Cipher::J2CPP_FIELD_SIGNATURE(2),
	jint
> javax::crypto::Cipher::PRIVATE_KEY;

static_field<
	javax::crypto::Cipher::J2CPP_CLASS_NAME,
	javax::crypto::Cipher::J2CPP_FIELD_NAME(3),
	javax::crypto::Cipher::J2CPP_FIELD_SIGNATURE(3),
	jint
> javax::crypto::Cipher::PUBLIC_KEY;

static_field<
	javax::crypto::Cipher::J2CPP_CLASS_NAME,
	javax::crypto::Cipher::J2CPP_FIELD_NAME(4),
	javax::crypto::Cipher::J2CPP_FIELD_SIGNATURE(4),
	jint
> javax::crypto::Cipher::SECRET_KEY;

static_field<
	javax::crypto::Cipher::J2CPP_CLASS_NAME,
	javax::crypto::Cipher::J2CPP_FIELD_NAME(5),
	javax::crypto::Cipher::J2CPP_FIELD_SIGNATURE(5),
	jint
> javax::crypto::Cipher::UNWRAP_MODE;

static_field<
	javax::crypto::Cipher::J2CPP_CLASS_NAME,
	javax::crypto::Cipher::J2CPP_FIELD_NAME(6),
	javax::crypto::Cipher::J2CPP_FIELD_SIGNATURE(6),
	jint
> javax::crypto::Cipher::WRAP_MODE;


J2CPP_DEFINE_CLASS(javax::crypto::Cipher,"javax/crypto/Cipher")
J2CPP_DEFINE_METHOD(javax::crypto::Cipher,0,"<init>","(Ljavax/crypto/CipherSpi;Ljava/security/Provider;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(javax::crypto::Cipher,1,"getInstance","(Ljava/lang/String;)Ljavax/crypto/Cipher;")
J2CPP_DEFINE_METHOD(javax::crypto::Cipher,2,"getInstance","(Ljava/lang/String;Ljava/lang/String;)Ljavax/crypto/Cipher;")
J2CPP_DEFINE_METHOD(javax::crypto::Cipher,3,"getInstance","(Ljava/lang/String;Ljava/security/Provider;)Ljavax/crypto/Cipher;")
J2CPP_DEFINE_METHOD(javax::crypto::Cipher,4,"getProvider","()Ljava/security/Provider;")
J2CPP_DEFINE_METHOD(javax::crypto::Cipher,5,"getAlgorithm","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(javax::crypto::Cipher,6,"getBlockSize","()I")
J2CPP_DEFINE_METHOD(javax::crypto::Cipher,7,"getOutputSize","(I)I")
J2CPP_DEFINE_METHOD(javax::crypto::Cipher,8,"getIV","()[B")
J2CPP_DEFINE_METHOD(javax::crypto::Cipher,9,"getParameters","()Ljava/security/AlgorithmParameters;")
J2CPP_DEFINE_METHOD(javax::crypto::Cipher,10,"getExemptionMechanism","()Ljavax/crypto/ExemptionMechanism;")
J2CPP_DEFINE_METHOD(javax::crypto::Cipher,11,"init","(ILjava/security/Key;)V")
J2CPP_DEFINE_METHOD(javax::crypto::Cipher,12,"init","(ILjava/security/Key;Ljava/security/SecureRandom;)V")
J2CPP_DEFINE_METHOD(javax::crypto::Cipher,13,"init","(ILjava/security/Key;Ljava/security/spec/AlgorithmParameterSpec;)V")
J2CPP_DEFINE_METHOD(javax::crypto::Cipher,14,"init","(ILjava/security/Key;Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)V")
J2CPP_DEFINE_METHOD(javax::crypto::Cipher,15,"init","(ILjava/security/Key;Ljava/security/AlgorithmParameters;)V")
J2CPP_DEFINE_METHOD(javax::crypto::Cipher,16,"init","(ILjava/security/Key;Ljava/security/AlgorithmParameters;Ljava/security/SecureRandom;)V")
J2CPP_DEFINE_METHOD(javax::crypto::Cipher,17,"init","(ILjava/security/cert/Certificate;)V")
J2CPP_DEFINE_METHOD(javax::crypto::Cipher,18,"init","(ILjava/security/cert/Certificate;Ljava/security/SecureRandom;)V")
J2CPP_DEFINE_METHOD(javax::crypto::Cipher,19,"update","([B)[B")
J2CPP_DEFINE_METHOD(javax::crypto::Cipher,20,"update","([BII)[B")
J2CPP_DEFINE_METHOD(javax::crypto::Cipher,21,"update","([BII[B)I")
J2CPP_DEFINE_METHOD(javax::crypto::Cipher,22,"update","([BII[BI)I")
J2CPP_DEFINE_METHOD(javax::crypto::Cipher,23,"update","(Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;)I")
J2CPP_DEFINE_METHOD(javax::crypto::Cipher,24,"doFinal","()[B")
J2CPP_DEFINE_METHOD(javax::crypto::Cipher,25,"doFinal","([BI)I")
J2CPP_DEFINE_METHOD(javax::crypto::Cipher,26,"doFinal","([B)[B")
J2CPP_DEFINE_METHOD(javax::crypto::Cipher,27,"doFinal","([BII)[B")
J2CPP_DEFINE_METHOD(javax::crypto::Cipher,28,"doFinal","([BII[B)I")
J2CPP_DEFINE_METHOD(javax::crypto::Cipher,29,"doFinal","([BII[BI)I")
J2CPP_DEFINE_METHOD(javax::crypto::Cipher,30,"doFinal","(Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;)I")
J2CPP_DEFINE_METHOD(javax::crypto::Cipher,31,"wrap","(Ljava/security/Key;)[B")
J2CPP_DEFINE_METHOD(javax::crypto::Cipher,32,"unwrap","([BLjava/lang/String;I)Ljava/security/Key;")
J2CPP_DEFINE_METHOD(javax::crypto::Cipher,33,"getMaxAllowedKeyLength","(Ljava/lang/String;)I")
J2CPP_DEFINE_METHOD(javax::crypto::Cipher,34,"getMaxAllowedParameterSpec","(Ljava/lang/String;)Ljava/security/spec/AlgorithmParameterSpec;")
J2CPP_DEFINE_FIELD(javax::crypto::Cipher,0,"DECRYPT_MODE","I")
J2CPP_DEFINE_FIELD(javax::crypto::Cipher,1,"ENCRYPT_MODE","I")
J2CPP_DEFINE_FIELD(javax::crypto::Cipher,2,"PRIVATE_KEY","I")
J2CPP_DEFINE_FIELD(javax::crypto::Cipher,3,"PUBLIC_KEY","I")
J2CPP_DEFINE_FIELD(javax::crypto::Cipher,4,"SECRET_KEY","I")
J2CPP_DEFINE_FIELD(javax::crypto::Cipher,5,"UNWRAP_MODE","I")
J2CPP_DEFINE_FIELD(javax::crypto::Cipher,6,"WRAP_MODE","I")

} //namespace j2cpp

#endif //J2CPP_JAVAX_CRYPTO_CIPHER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
