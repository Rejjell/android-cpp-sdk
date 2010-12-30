/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.security.cert.TrustAnchor
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_CERT_TRUSTANCHOR_HPP_DECL
#define J2CPP_JAVA_SECURITY_CERT_TRUSTANCHOR_HPP_DECL


namespace j2cpp { namespace javax { namespace security { namespace auth { namespace x500 { class X500Principal; } } } } }
namespace j2cpp { namespace java { namespace security { namespace cert { class X509Certificate; } } } }
namespace j2cpp { namespace java { namespace security { class PublicKey; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/security/PublicKey.hpp>
#include <java/security/cert/X509Certificate.hpp>
#include <javax/security/auth/x500/X500Principal.hpp>


namespace j2cpp {

namespace java { namespace security { namespace cert {

	class TrustAnchor;
	class TrustAnchor
		: public object<TrustAnchor>
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

		explicit TrustAnchor(jobject jobj)
		: object<TrustAnchor>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		TrustAnchor(local_ref< java::security::cert::X509Certificate > const&, local_ref< array<jbyte,1> > const&);
		TrustAnchor(local_ref< java::lang::String > const&, local_ref< java::security::PublicKey > const&, local_ref< array<jbyte,1> > const&);
		TrustAnchor(local_ref< javax::security::auth::x500::X500Principal > const&, local_ref< java::security::PublicKey > const&, local_ref< array<jbyte,1> > const&);
		local_ref< array<jbyte,1> > getNameConstraints();
		local_ref< java::security::cert::X509Certificate > getTrustedCert();
		local_ref< javax::security::auth::x500::X500Principal > getCA();
		local_ref< java::lang::String > getCAName();
		local_ref< java::security::PublicKey > getCAPublicKey();
		local_ref< java::lang::String > toString();
	}; //class TrustAnchor

} //namespace cert
} //namespace security
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_CERT_TRUSTANCHOR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_CERT_TRUSTANCHOR_HPP_IMPL
#define J2CPP_JAVA_SECURITY_CERT_TRUSTANCHOR_HPP_IMPL

namespace j2cpp {



java::security::cert::TrustAnchor::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


java::security::cert::TrustAnchor::TrustAnchor(local_ref< java::security::cert::X509Certificate > const &a0, local_ref< array<jbyte,1> > const &a1)
: object<java::security::cert::TrustAnchor>(
	call_new_object<
		java::security::cert::TrustAnchor::J2CPP_CLASS_NAME,
		java::security::cert::TrustAnchor::J2CPP_METHOD_NAME(0),
		java::security::cert::TrustAnchor::J2CPP_METHOD_SIGNATURE(0)>
	(a0, a1)
)
{
}



java::security::cert::TrustAnchor::TrustAnchor(local_ref< java::lang::String > const &a0, local_ref< java::security::PublicKey > const &a1, local_ref< array<jbyte,1> > const &a2)
: object<java::security::cert::TrustAnchor>(
	call_new_object<
		java::security::cert::TrustAnchor::J2CPP_CLASS_NAME,
		java::security::cert::TrustAnchor::J2CPP_METHOD_NAME(1),
		java::security::cert::TrustAnchor::J2CPP_METHOD_SIGNATURE(1)>
	(a0, a1, a2)
)
{
}



java::security::cert::TrustAnchor::TrustAnchor(local_ref< javax::security::auth::x500::X500Principal > const &a0, local_ref< java::security::PublicKey > const &a1, local_ref< array<jbyte,1> > const &a2)
: object<java::security::cert::TrustAnchor>(
	call_new_object<
		java::security::cert::TrustAnchor::J2CPP_CLASS_NAME,
		java::security::cert::TrustAnchor::J2CPP_METHOD_NAME(2),
		java::security::cert::TrustAnchor::J2CPP_METHOD_SIGNATURE(2)>
	(a0, a1, a2)
)
{
}


local_ref< array<jbyte,1> > java::security::cert::TrustAnchor::getNameConstraints()
{
	return call_method<
		java::security::cert::TrustAnchor::J2CPP_CLASS_NAME,
		java::security::cert::TrustAnchor::J2CPP_METHOD_NAME(3),
		java::security::cert::TrustAnchor::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< array<jbyte,1> > >
	(get_jobject());
}

local_ref< java::security::cert::X509Certificate > java::security::cert::TrustAnchor::getTrustedCert()
{
	return call_method<
		java::security::cert::TrustAnchor::J2CPP_CLASS_NAME,
		java::security::cert::TrustAnchor::J2CPP_METHOD_NAME(4),
		java::security::cert::TrustAnchor::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::security::cert::X509Certificate > >
	(get_jobject());
}

local_ref< javax::security::auth::x500::X500Principal > java::security::cert::TrustAnchor::getCA()
{
	return call_method<
		java::security::cert::TrustAnchor::J2CPP_CLASS_NAME,
		java::security::cert::TrustAnchor::J2CPP_METHOD_NAME(5),
		java::security::cert::TrustAnchor::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< javax::security::auth::x500::X500Principal > >
	(get_jobject());
}

local_ref< java::lang::String > java::security::cert::TrustAnchor::getCAName()
{
	return call_method<
		java::security::cert::TrustAnchor::J2CPP_CLASS_NAME,
		java::security::cert::TrustAnchor::J2CPP_METHOD_NAME(6),
		java::security::cert::TrustAnchor::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::lang::String > >
	(get_jobject());
}

local_ref< java::security::PublicKey > java::security::cert::TrustAnchor::getCAPublicKey()
{
	return call_method<
		java::security::cert::TrustAnchor::J2CPP_CLASS_NAME,
		java::security::cert::TrustAnchor::J2CPP_METHOD_NAME(7),
		java::security::cert::TrustAnchor::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< java::security::PublicKey > >
	(get_jobject());
}

local_ref< java::lang::String > java::security::cert::TrustAnchor::toString()
{
	return call_method<
		java::security::cert::TrustAnchor::J2CPP_CLASS_NAME,
		java::security::cert::TrustAnchor::J2CPP_METHOD_NAME(8),
		java::security::cert::TrustAnchor::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< java::lang::String > >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(java::security::cert::TrustAnchor,"java/security/cert/TrustAnchor")
J2CPP_DEFINE_METHOD(java::security::cert::TrustAnchor,0,"<init>","(Ljava/security/cert/X509Certificate;[B)V")
J2CPP_DEFINE_METHOD(java::security::cert::TrustAnchor,1,"<init>","(Ljava/lang/String;Ljava/security/PublicKey;[B)V")
J2CPP_DEFINE_METHOD(java::security::cert::TrustAnchor,2,"<init>","(Ljavax/security/auth/x500/X500Principal;Ljava/security/PublicKey;[B)V")
J2CPP_DEFINE_METHOD(java::security::cert::TrustAnchor,3,"getNameConstraints","()[B")
J2CPP_DEFINE_METHOD(java::security::cert::TrustAnchor,4,"getTrustedCert","()Ljava/security/cert/X509Certificate;")
J2CPP_DEFINE_METHOD(java::security::cert::TrustAnchor,5,"getCA","()Ljavax/security/auth/x500/X500Principal;")
J2CPP_DEFINE_METHOD(java::security::cert::TrustAnchor,6,"getCAName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::security::cert::TrustAnchor,7,"getCAPublicKey","()Ljava/security/PublicKey;")
J2CPP_DEFINE_METHOD(java::security::cert::TrustAnchor,8,"toString","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_CERT_TRUSTANCHOR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
