/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: javax.net.ssl.SSLContext
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_NET_SSL_SSLCONTEXT_HPP_DECL
#define J2CPP_JAVAX_NET_SSL_SSLCONTEXT_HPP_DECL


namespace j2cpp { namespace javax { namespace net { namespace ssl { class SSLSessionContext; } } } }
namespace j2cpp { namespace javax { namespace net { namespace ssl { class TrustManager; } } } }
namespace j2cpp { namespace javax { namespace net { namespace ssl { class SSLSocketFactory; } } } }
namespace j2cpp { namespace javax { namespace net { namespace ssl { class KeyManager; } } } }
namespace j2cpp { namespace javax { namespace net { namespace ssl { class SSLServerSocketFactory; } } } }
namespace j2cpp { namespace javax { namespace net { namespace ssl { class SSLEngine; } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace security { class Provider; } } }
namespace j2cpp { namespace java { namespace security { class SecureRandom; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/security/Provider.hpp>
#include <java/security/SecureRandom.hpp>
#include <javax/net/ssl/KeyManager.hpp>
#include <javax/net/ssl/SSLEngine.hpp>
#include <javax/net/ssl/SSLServerSocketFactory.hpp>
#include <javax/net/ssl/SSLSessionContext.hpp>
#include <javax/net/ssl/SSLSocketFactory.hpp>
#include <javax/net/ssl/TrustManager.hpp>


namespace j2cpp {

namespace javax { namespace net { namespace ssl {

	class SSLContext;
	class SSLContext
		: public object<SSLContext>
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

		explicit SSLContext(jobject jobj)
		: object<SSLContext>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		static local_ref< javax::net::ssl::SSLContext > getInstance(local_ref< java::lang::String >  const&);
		static local_ref< javax::net::ssl::SSLContext > getInstance(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		static local_ref< javax::net::ssl::SSLContext > getInstance(local_ref< java::lang::String >  const&, local_ref< java::security::Provider >  const&);
		local_ref< java::lang::String > getProtocol();
		local_ref< java::security::Provider > getProvider();
		void init(local_ref< array< local_ref< javax::net::ssl::KeyManager >, 1> >  const&, local_ref< array< local_ref< javax::net::ssl::TrustManager >, 1> >  const&, local_ref< java::security::SecureRandom >  const&);
		local_ref< javax::net::ssl::SSLSocketFactory > getSocketFactory();
		local_ref< javax::net::ssl::SSLServerSocketFactory > getServerSocketFactory();
		local_ref< javax::net::ssl::SSLEngine > createSSLEngine();
		local_ref< javax::net::ssl::SSLEngine > createSSLEngine(local_ref< java::lang::String >  const&, jint);
		local_ref< javax::net::ssl::SSLSessionContext > getServerSessionContext();
		local_ref< javax::net::ssl::SSLSessionContext > getClientSessionContext();
	}; //class SSLContext

} //namespace ssl
} //namespace net
} //namespace javax

} //namespace j2cpp

#endif //J2CPP_JAVAX_NET_SSL_SSLCONTEXT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_NET_SSL_SSLCONTEXT_HPP_IMPL
#define J2CPP_JAVAX_NET_SSL_SSLCONTEXT_HPP_IMPL

namespace j2cpp {



javax::net::ssl::SSLContext::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


local_ref< javax::net::ssl::SSLContext > javax::net::ssl::SSLContext::getInstance(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		javax::net::ssl::SSLContext::J2CPP_CLASS_NAME,
		javax::net::ssl::SSLContext::J2CPP_METHOD_NAME(1),
		javax::net::ssl::SSLContext::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< javax::net::ssl::SSLContext > >
	(a0);
}

local_ref< javax::net::ssl::SSLContext > javax::net::ssl::SSLContext::getInstance(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_static_method<
		javax::net::ssl::SSLContext::J2CPP_CLASS_NAME,
		javax::net::ssl::SSLContext::J2CPP_METHOD_NAME(2),
		javax::net::ssl::SSLContext::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< javax::net::ssl::SSLContext > >
	(a0, a1);
}

local_ref< javax::net::ssl::SSLContext > javax::net::ssl::SSLContext::getInstance(local_ref< java::lang::String > const &a0, local_ref< java::security::Provider > const &a1)
{
	return call_static_method<
		javax::net::ssl::SSLContext::J2CPP_CLASS_NAME,
		javax::net::ssl::SSLContext::J2CPP_METHOD_NAME(3),
		javax::net::ssl::SSLContext::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< javax::net::ssl::SSLContext > >
	(a0, a1);
}

local_ref< java::lang::String > javax::net::ssl::SSLContext::getProtocol()
{
	return call_method<
		javax::net::ssl::SSLContext::J2CPP_CLASS_NAME,
		javax::net::ssl::SSLContext::J2CPP_METHOD_NAME(4),
		javax::net::ssl::SSLContext::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::lang::String > >
	(get_jobject());
}

local_ref< java::security::Provider > javax::net::ssl::SSLContext::getProvider()
{
	return call_method<
		javax::net::ssl::SSLContext::J2CPP_CLASS_NAME,
		javax::net::ssl::SSLContext::J2CPP_METHOD_NAME(5),
		javax::net::ssl::SSLContext::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::security::Provider > >
	(get_jobject());
}

void javax::net::ssl::SSLContext::init(local_ref< array< local_ref< javax::net::ssl::KeyManager >, 1> > const &a0, local_ref< array< local_ref< javax::net::ssl::TrustManager >, 1> > const &a1, local_ref< java::security::SecureRandom > const &a2)
{
	return call_method<
		javax::net::ssl::SSLContext::J2CPP_CLASS_NAME,
		javax::net::ssl::SSLContext::J2CPP_METHOD_NAME(6),
		javax::net::ssl::SSLContext::J2CPP_METHOD_SIGNATURE(6), 
		void >
	(get_jobject(), a0, a1, a2);
}

local_ref< javax::net::ssl::SSLSocketFactory > javax::net::ssl::SSLContext::getSocketFactory()
{
	return call_method<
		javax::net::ssl::SSLContext::J2CPP_CLASS_NAME,
		javax::net::ssl::SSLContext::J2CPP_METHOD_NAME(7),
		javax::net::ssl::SSLContext::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< javax::net::ssl::SSLSocketFactory > >
	(get_jobject());
}

local_ref< javax::net::ssl::SSLServerSocketFactory > javax::net::ssl::SSLContext::getServerSocketFactory()
{
	return call_method<
		javax::net::ssl::SSLContext::J2CPP_CLASS_NAME,
		javax::net::ssl::SSLContext::J2CPP_METHOD_NAME(8),
		javax::net::ssl::SSLContext::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< javax::net::ssl::SSLServerSocketFactory > >
	(get_jobject());
}

local_ref< javax::net::ssl::SSLEngine > javax::net::ssl::SSLContext::createSSLEngine()
{
	return call_method<
		javax::net::ssl::SSLContext::J2CPP_CLASS_NAME,
		javax::net::ssl::SSLContext::J2CPP_METHOD_NAME(9),
		javax::net::ssl::SSLContext::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< javax::net::ssl::SSLEngine > >
	(get_jobject());
}

local_ref< javax::net::ssl::SSLEngine > javax::net::ssl::SSLContext::createSSLEngine(local_ref< java::lang::String > const &a0, jint a1)
{
	return call_method<
		javax::net::ssl::SSLContext::J2CPP_CLASS_NAME,
		javax::net::ssl::SSLContext::J2CPP_METHOD_NAME(10),
		javax::net::ssl::SSLContext::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< javax::net::ssl::SSLEngine > >
	(get_jobject(), a0, a1);
}

local_ref< javax::net::ssl::SSLSessionContext > javax::net::ssl::SSLContext::getServerSessionContext()
{
	return call_method<
		javax::net::ssl::SSLContext::J2CPP_CLASS_NAME,
		javax::net::ssl::SSLContext::J2CPP_METHOD_NAME(11),
		javax::net::ssl::SSLContext::J2CPP_METHOD_SIGNATURE(11), 
		local_ref< javax::net::ssl::SSLSessionContext > >
	(get_jobject());
}

local_ref< javax::net::ssl::SSLSessionContext > javax::net::ssl::SSLContext::getClientSessionContext()
{
	return call_method<
		javax::net::ssl::SSLContext::J2CPP_CLASS_NAME,
		javax::net::ssl::SSLContext::J2CPP_METHOD_NAME(12),
		javax::net::ssl::SSLContext::J2CPP_METHOD_SIGNATURE(12), 
		local_ref< javax::net::ssl::SSLSessionContext > >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(javax::net::ssl::SSLContext,"javax/net/ssl/SSLContext")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLContext,0,"<init>","(Ljavax/net/ssl/SSLContextSpi;Ljava/security/Provider;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLContext,1,"getInstance","(Ljava/lang/String;)Ljavax/net/ssl/SSLContext;")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLContext,2,"getInstance","(Ljava/lang/String;Ljava/lang/String;)Ljavax/net/ssl/SSLContext;")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLContext,3,"getInstance","(Ljava/lang/String;Ljava/security/Provider;)Ljavax/net/ssl/SSLContext;")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLContext,4,"getProtocol","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLContext,5,"getProvider","()Ljava/security/Provider;")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLContext,6,"init","([javax.net.ssl.KeyManager[javax.net.ssl.TrustManagerLjava/security/SecureRandom;)V")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLContext,7,"getSocketFactory","()Ljavax/net/ssl/SSLSocketFactory;")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLContext,8,"getServerSocketFactory","()Ljavax/net/ssl/SSLServerSocketFactory;")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLContext,9,"createSSLEngine","()Ljavax/net/ssl/SSLEngine;")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLContext,10,"createSSLEngine","(Ljava/lang/String;I)Ljavax/net/ssl/SSLEngine;")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLContext,11,"getServerSessionContext","()Ljavax/net/ssl/SSLSessionContext;")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLContext,12,"getClientSessionContext","()Ljavax/net/ssl/SSLSessionContext;")

} //namespace j2cpp

#endif //J2CPP_JAVAX_NET_SSL_SSLCONTEXT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
