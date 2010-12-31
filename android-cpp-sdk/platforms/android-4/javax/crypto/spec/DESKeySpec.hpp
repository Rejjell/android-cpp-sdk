/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: javax.crypto.spec.DESKeySpec
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_CRYPTO_SPEC_DESKEYSPEC_HPP_DECL
#define J2CPP_JAVAX_CRYPTO_SPEC_DESKEYSPEC_HPP_DECL


namespace j2cpp { namespace java { namespace security { namespace spec { class KeySpec; } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/security/spec/KeySpec.hpp>


namespace j2cpp {

namespace javax { namespace crypto { namespace spec {

	class DESKeySpec;
	class DESKeySpec
		: public object<DESKeySpec>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_FIELD(0)

		explicit DESKeySpec(jobject jobj)
		: object<DESKeySpec>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::security::spec::KeySpec>() const;


		DESKeySpec(local_ref< array<jbyte,1> > const&);
		DESKeySpec(local_ref< array<jbyte,1> > const&, jint);
		local_ref< array<jbyte,1> > getKey();
		static jboolean isParityAdjusted(local_ref< array<jbyte,1> >  const&, jint);
		static jboolean isWeak(local_ref< array<jbyte,1> >  const&, jint);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > DES_KEY_LEN;
	}; //class DESKeySpec

} //namespace spec
} //namespace crypto
} //namespace javax

} //namespace j2cpp

#endif //J2CPP_JAVAX_CRYPTO_SPEC_DESKEYSPEC_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_CRYPTO_SPEC_DESKEYSPEC_HPP_IMPL
#define J2CPP_JAVAX_CRYPTO_SPEC_DESKEYSPEC_HPP_IMPL

namespace j2cpp {



javax::crypto::spec::DESKeySpec::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

javax::crypto::spec::DESKeySpec::operator local_ref<java::security::spec::KeySpec>() const
{
	return local_ref<java::security::spec::KeySpec>(get_jobject());
}


javax::crypto::spec::DESKeySpec::DESKeySpec(local_ref< array<jbyte,1> > const &a0)
: object<javax::crypto::spec::DESKeySpec>(
	call_new_object<
		javax::crypto::spec::DESKeySpec::J2CPP_CLASS_NAME,
		javax::crypto::spec::DESKeySpec::J2CPP_METHOD_NAME(0),
		javax::crypto::spec::DESKeySpec::J2CPP_METHOD_SIGNATURE(0)>
	(a0)
)
{
}



javax::crypto::spec::DESKeySpec::DESKeySpec(local_ref< array<jbyte,1> > const &a0, jint a1)
: object<javax::crypto::spec::DESKeySpec>(
	call_new_object<
		javax::crypto::spec::DESKeySpec::J2CPP_CLASS_NAME,
		javax::crypto::spec::DESKeySpec::J2CPP_METHOD_NAME(1),
		javax::crypto::spec::DESKeySpec::J2CPP_METHOD_SIGNATURE(1)>
	(a0, a1)
)
{
}


local_ref< array<jbyte,1> > javax::crypto::spec::DESKeySpec::getKey()
{
	return call_method<
		javax::crypto::spec::DESKeySpec::J2CPP_CLASS_NAME,
		javax::crypto::spec::DESKeySpec::J2CPP_METHOD_NAME(2),
		javax::crypto::spec::DESKeySpec::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< array<jbyte,1> > >
	(get_jobject());
}

jboolean javax::crypto::spec::DESKeySpec::isParityAdjusted(local_ref< array<jbyte,1> > const &a0, jint a1)
{
	return call_static_method<
		javax::crypto::spec::DESKeySpec::J2CPP_CLASS_NAME,
		javax::crypto::spec::DESKeySpec::J2CPP_METHOD_NAME(3),
		javax::crypto::spec::DESKeySpec::J2CPP_METHOD_SIGNATURE(3), 
		jboolean >
	(a0, a1);
}

jboolean javax::crypto::spec::DESKeySpec::isWeak(local_ref< array<jbyte,1> > const &a0, jint a1)
{
	return call_static_method<
		javax::crypto::spec::DESKeySpec::J2CPP_CLASS_NAME,
		javax::crypto::spec::DESKeySpec::J2CPP_METHOD_NAME(4),
		javax::crypto::spec::DESKeySpec::J2CPP_METHOD_SIGNATURE(4), 
		jboolean >
	(a0, a1);
}


static_field<
	javax::crypto::spec::DESKeySpec::J2CPP_CLASS_NAME,
	javax::crypto::spec::DESKeySpec::J2CPP_FIELD_NAME(0),
	javax::crypto::spec::DESKeySpec::J2CPP_FIELD_SIGNATURE(0),
	jint
> javax::crypto::spec::DESKeySpec::DES_KEY_LEN;


J2CPP_DEFINE_CLASS(javax::crypto::spec::DESKeySpec,"javax/crypto/spec/DESKeySpec")
J2CPP_DEFINE_METHOD(javax::crypto::spec::DESKeySpec,0,"<init>","([B)V")
J2CPP_DEFINE_METHOD(javax::crypto::spec::DESKeySpec,1,"<init>","([BI)V")
J2CPP_DEFINE_METHOD(javax::crypto::spec::DESKeySpec,2,"getKey","()[B")
J2CPP_DEFINE_METHOD(javax::crypto::spec::DESKeySpec,3,"isParityAdjusted","([BI)Z")
J2CPP_DEFINE_METHOD(javax::crypto::spec::DESKeySpec,4,"isWeak","([BI)Z")
J2CPP_DEFINE_FIELD(javax::crypto::spec::DESKeySpec,0,"DES_KEY_LEN","I")

} //namespace j2cpp

#endif //J2CPP_JAVAX_CRYPTO_SPEC_DESKEYSPEC_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION