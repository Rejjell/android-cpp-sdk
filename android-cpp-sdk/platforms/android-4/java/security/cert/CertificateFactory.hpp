/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.security.cert.CertificateFactory
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_CERT_CERTIFICATEFACTORY_HPP_DECL
#define J2CPP_JAVA_SECURITY_CERT_CERTIFICATEFACTORY_HPP_DECL


namespace j2cpp { namespace java { namespace io { class InputStream; } } }
namespace j2cpp { namespace java { namespace util { class List; } } }
namespace j2cpp { namespace java { namespace util { class Iterator; } } }
namespace j2cpp { namespace java { namespace util { class Collection; } } }
namespace j2cpp { namespace java { namespace security { class Provider; } } }
namespace j2cpp { namespace java { namespace security { namespace cert { class Certificate; } } } }
namespace j2cpp { namespace java { namespace security { namespace cert { class CRL; } } } }
namespace j2cpp { namespace java { namespace security { namespace cert { class CertPath; } } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/io/InputStream.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/security/Provider.hpp>
#include <java/security/cert/CRL.hpp>
#include <java/security/cert/CertPath.hpp>
#include <java/security/cert/Certificate.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>


namespace j2cpp {

namespace java { namespace security { namespace cert {

	class CertificateFactory;
	class CertificateFactory
		: public object<CertificateFactory>
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

		explicit CertificateFactory(jobject jobj)
		: object<CertificateFactory>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		static local_ref< java::security::cert::CertificateFactory > getInstance(local_ref< java::lang::String >  const&);
		static local_ref< java::security::cert::CertificateFactory > getInstance(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		static local_ref< java::security::cert::CertificateFactory > getInstance(local_ref< java::lang::String >  const&, local_ref< java::security::Provider >  const&);
		local_ref< java::security::Provider > getProvider();
		local_ref< java::lang::String > getType();
		local_ref< java::security::cert::Certificate > generateCertificate(local_ref< java::io::InputStream >  const&);
		local_ref< java::util::Iterator > getCertPathEncodings();
		local_ref< java::security::cert::CertPath > generateCertPath(local_ref< java::io::InputStream >  const&);
		local_ref< java::security::cert::CertPath > generateCertPath(local_ref< java::io::InputStream >  const&, local_ref< java::lang::String >  const&);
		local_ref< java::security::cert::CertPath > generateCertPath(local_ref< java::util::List >  const&);
		local_ref< java::util::Collection > generateCertificates(local_ref< java::io::InputStream >  const&);
		local_ref< java::security::cert::CRL > generateCRL(local_ref< java::io::InputStream >  const&);
		local_ref< java::util::Collection > generateCRLs(local_ref< java::io::InputStream >  const&);
	}; //class CertificateFactory

} //namespace cert
} //namespace security
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_CERT_CERTIFICATEFACTORY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_CERT_CERTIFICATEFACTORY_HPP_IMPL
#define J2CPP_JAVA_SECURITY_CERT_CERTIFICATEFACTORY_HPP_IMPL

namespace j2cpp {



java::security::cert::CertificateFactory::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


local_ref< java::security::cert::CertificateFactory > java::security::cert::CertificateFactory::getInstance(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		java::security::cert::CertificateFactory::J2CPP_CLASS_NAME,
		java::security::cert::CertificateFactory::J2CPP_METHOD_NAME(1),
		java::security::cert::CertificateFactory::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::security::cert::CertificateFactory > >
	(a0);
}

local_ref< java::security::cert::CertificateFactory > java::security::cert::CertificateFactory::getInstance(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_static_method<
		java::security::cert::CertificateFactory::J2CPP_CLASS_NAME,
		java::security::cert::CertificateFactory::J2CPP_METHOD_NAME(2),
		java::security::cert::CertificateFactory::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::security::cert::CertificateFactory > >
	(a0, a1);
}

local_ref< java::security::cert::CertificateFactory > java::security::cert::CertificateFactory::getInstance(local_ref< java::lang::String > const &a0, local_ref< java::security::Provider > const &a1)
{
	return call_static_method<
		java::security::cert::CertificateFactory::J2CPP_CLASS_NAME,
		java::security::cert::CertificateFactory::J2CPP_METHOD_NAME(3),
		java::security::cert::CertificateFactory::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::security::cert::CertificateFactory > >
	(a0, a1);
}

local_ref< java::security::Provider > java::security::cert::CertificateFactory::getProvider()
{
	return call_method<
		java::security::cert::CertificateFactory::J2CPP_CLASS_NAME,
		java::security::cert::CertificateFactory::J2CPP_METHOD_NAME(4),
		java::security::cert::CertificateFactory::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::security::Provider > >
	(get_jobject());
}

local_ref< java::lang::String > java::security::cert::CertificateFactory::getType()
{
	return call_method<
		java::security::cert::CertificateFactory::J2CPP_CLASS_NAME,
		java::security::cert::CertificateFactory::J2CPP_METHOD_NAME(5),
		java::security::cert::CertificateFactory::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::lang::String > >
	(get_jobject());
}

local_ref< java::security::cert::Certificate > java::security::cert::CertificateFactory::generateCertificate(local_ref< java::io::InputStream > const &a0)
{
	return call_method<
		java::security::cert::CertificateFactory::J2CPP_CLASS_NAME,
		java::security::cert::CertificateFactory::J2CPP_METHOD_NAME(6),
		java::security::cert::CertificateFactory::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::security::cert::Certificate > >
	(get_jobject(), a0);
}

local_ref< java::util::Iterator > java::security::cert::CertificateFactory::getCertPathEncodings()
{
	return call_method<
		java::security::cert::CertificateFactory::J2CPP_CLASS_NAME,
		java::security::cert::CertificateFactory::J2CPP_METHOD_NAME(7),
		java::security::cert::CertificateFactory::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< java::util::Iterator > >
	(get_jobject());
}

local_ref< java::security::cert::CertPath > java::security::cert::CertificateFactory::generateCertPath(local_ref< java::io::InputStream > const &a0)
{
	return call_method<
		java::security::cert::CertificateFactory::J2CPP_CLASS_NAME,
		java::security::cert::CertificateFactory::J2CPP_METHOD_NAME(8),
		java::security::cert::CertificateFactory::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< java::security::cert::CertPath > >
	(get_jobject(), a0);
}

local_ref< java::security::cert::CertPath > java::security::cert::CertificateFactory::generateCertPath(local_ref< java::io::InputStream > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		java::security::cert::CertificateFactory::J2CPP_CLASS_NAME,
		java::security::cert::CertificateFactory::J2CPP_METHOD_NAME(9),
		java::security::cert::CertificateFactory::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< java::security::cert::CertPath > >
	(get_jobject(), a0, a1);
}

local_ref< java::security::cert::CertPath > java::security::cert::CertificateFactory::generateCertPath(local_ref< java::util::List > const &a0)
{
	return call_method<
		java::security::cert::CertificateFactory::J2CPP_CLASS_NAME,
		java::security::cert::CertificateFactory::J2CPP_METHOD_NAME(10),
		java::security::cert::CertificateFactory::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< java::security::cert::CertPath > >
	(get_jobject(), a0);
}

local_ref< java::util::Collection > java::security::cert::CertificateFactory::generateCertificates(local_ref< java::io::InputStream > const &a0)
{
	return call_method<
		java::security::cert::CertificateFactory::J2CPP_CLASS_NAME,
		java::security::cert::CertificateFactory::J2CPP_METHOD_NAME(11),
		java::security::cert::CertificateFactory::J2CPP_METHOD_SIGNATURE(11), 
		local_ref< java::util::Collection > >
	(get_jobject(), a0);
}

local_ref< java::security::cert::CRL > java::security::cert::CertificateFactory::generateCRL(local_ref< java::io::InputStream > const &a0)
{
	return call_method<
		java::security::cert::CertificateFactory::J2CPP_CLASS_NAME,
		java::security::cert::CertificateFactory::J2CPP_METHOD_NAME(12),
		java::security::cert::CertificateFactory::J2CPP_METHOD_SIGNATURE(12), 
		local_ref< java::security::cert::CRL > >
	(get_jobject(), a0);
}

local_ref< java::util::Collection > java::security::cert::CertificateFactory::generateCRLs(local_ref< java::io::InputStream > const &a0)
{
	return call_method<
		java::security::cert::CertificateFactory::J2CPP_CLASS_NAME,
		java::security::cert::CertificateFactory::J2CPP_METHOD_NAME(13),
		java::security::cert::CertificateFactory::J2CPP_METHOD_SIGNATURE(13), 
		local_ref< java::util::Collection > >
	(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(java::security::cert::CertificateFactory,"java/security/cert/CertificateFactory")
J2CPP_DEFINE_METHOD(java::security::cert::CertificateFactory,0,"<init>","(Ljava/security/cert/CertificateFactorySpi;Ljava/security/Provider;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::security::cert::CertificateFactory,1,"getInstance","(Ljava/lang/String;)Ljava/security/cert/CertificateFactory;")
J2CPP_DEFINE_METHOD(java::security::cert::CertificateFactory,2,"getInstance","(Ljava/lang/String;Ljava/lang/String;)Ljava/security/cert/CertificateFactory;")
J2CPP_DEFINE_METHOD(java::security::cert::CertificateFactory,3,"getInstance","(Ljava/lang/String;Ljava/security/Provider;)Ljava/security/cert/CertificateFactory;")
J2CPP_DEFINE_METHOD(java::security::cert::CertificateFactory,4,"getProvider","()Ljava/security/Provider;")
J2CPP_DEFINE_METHOD(java::security::cert::CertificateFactory,5,"getType","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::security::cert::CertificateFactory,6,"generateCertificate","(Ljava/io/InputStream;)Ljava/security/cert/Certificate;")
J2CPP_DEFINE_METHOD(java::security::cert::CertificateFactory,7,"getCertPathEncodings","()Ljava/util/Iterator;")
J2CPP_DEFINE_METHOD(java::security::cert::CertificateFactory,8,"generateCertPath","(Ljava/io/InputStream;)Ljava/security/cert/CertPath;")
J2CPP_DEFINE_METHOD(java::security::cert::CertificateFactory,9,"generateCertPath","(Ljava/io/InputStream;Ljava/lang/String;)Ljava/security/cert/CertPath;")
J2CPP_DEFINE_METHOD(java::security::cert::CertificateFactory,10,"generateCertPath","(Ljava/util/List;)Ljava/security/cert/CertPath;")
J2CPP_DEFINE_METHOD(java::security::cert::CertificateFactory,11,"generateCertificates","(Ljava/io/InputStream;)Ljava/util/Collection;")
J2CPP_DEFINE_METHOD(java::security::cert::CertificateFactory,12,"generateCRL","(Ljava/io/InputStream;)Ljava/security/cert/CRL;")
J2CPP_DEFINE_METHOD(java::security::cert::CertificateFactory,13,"generateCRLs","(Ljava/io/InputStream;)Ljava/util/Collection;")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_CERT_CERTIFICATEFACTORY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
