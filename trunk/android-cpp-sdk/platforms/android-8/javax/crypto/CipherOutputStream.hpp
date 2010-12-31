/*================================================================================
  code generated by: java2cpp
  class: javax.crypto.CipherOutputStream
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_CRYPTO_CIPHEROUTPUTSTREAM_HPP_DECL
#define J2CPP_JAVAX_CRYPTO_CIPHEROUTPUTSTREAM_HPP_DECL


namespace j2cpp { namespace java { namespace io { class OutputStream; } } }
namespace j2cpp { namespace javax { namespace crypto { class Cipher; } } }


#include <java/io/OutputStream.hpp>
#include <javax/crypto/Cipher.hpp>


namespace j2cpp {

namespace javax { namespace crypto {

	class CipherOutputStream;
	class CipherOutputStream
		: public cpp_object<CipherOutputStream>
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

		CipherOutputStream(jobject jobj)
		: cpp_object<CipherOutputStream>(jobj)
		{
		}

		void write(cpp_int const&);
		void write(local_ref< cpp_byte_array<1> > const&);
		void write(local_ref< cpp_byte_array<1> > const&, cpp_int const&, cpp_int const&);
		void flush();
		void close();
	}; //class CipherOutputStream

} //namespace crypto
} //namespace javax


} //namespace j2cpp

#endif //J2CPP_JAVAX_CRYPTO_CIPHEROUTPUTSTREAM_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_CRYPTO_CIPHEROUTPUTSTREAM_HPP_IMPL
#define J2CPP_JAVAX_CRYPTO_CIPHEROUTPUTSTREAM_HPP_IMPL

namespace j2cpp {


template <>
local_ref< javax::crypto::CipherOutputStream > create< javax::crypto::CipherOutputStream>(local_ref< java::io::OutputStream > const &a0, local_ref< javax::crypto::Cipher > const &a1)
{
	return local_ref< javax::crypto::CipherOutputStream >(
		environment::get().get_jenv()->NewObject(
			get_class<javax::crypto::CipherOutputStream::J2CPP_CLASS_NAME>(),
			get_method_id<javax::crypto::CipherOutputStream::J2CPP_CLASS_NAME, javax::crypto::CipherOutputStream::J2CPP_METHOD_NAME(0), javax::crypto::CipherOutputStream::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

template <>
local_ref< javax::crypto::CipherOutputStream > create< javax::crypto::CipherOutputStream>(local_ref< java::io::OutputStream > const &a0)
{
	return local_ref< javax::crypto::CipherOutputStream >(
		environment::get().get_jenv()->NewObject(
			get_class<javax::crypto::CipherOutputStream::J2CPP_CLASS_NAME>(),
			get_method_id<javax::crypto::CipherOutputStream::J2CPP_CLASS_NAME, javax::crypto::CipherOutputStream::J2CPP_METHOD_NAME(1), javax::crypto::CipherOutputStream::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

void javax::crypto::CipherOutputStream::write(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

void javax::crypto::CipherOutputStream::write(local_ref< cpp_byte_array<1> > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

void javax::crypto::CipherOutputStream::write(local_ref< cpp_byte_array<1> > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void javax::crypto::CipherOutputStream::flush()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

void javax::crypto::CipherOutputStream::close()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(javax::crypto::CipherOutputStream,"javax/crypto/CipherOutputStream")
J2CPP_DEFINE_METHOD(javax::crypto::CipherOutputStream,0,"<init>","(Ljava/io/OutputStream;Ljavax/crypto/Cipher;)V")
J2CPP_DEFINE_METHOD(javax::crypto::CipherOutputStream,1,"<init>","(Ljava/io/OutputStream;)V")
J2CPP_DEFINE_METHOD(javax::crypto::CipherOutputStream,2,"write","(I)V")
J2CPP_DEFINE_METHOD(javax::crypto::CipherOutputStream,3,"write","([B)V")
J2CPP_DEFINE_METHOD(javax::crypto::CipherOutputStream,4,"write","([BII)V")
J2CPP_DEFINE_METHOD(javax::crypto::CipherOutputStream,5,"flush","()V")
J2CPP_DEFINE_METHOD(javax::crypto::CipherOutputStream,6,"close","()V")

} //namespace j2cpp

#endif //J2CPP_JAVAX_CRYPTO_CIPHEROUTPUTSTREAM_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION