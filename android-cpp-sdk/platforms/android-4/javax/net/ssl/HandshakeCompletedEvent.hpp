/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: javax.net.ssl.HandshakeCompletedEvent
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_NET_SSL_HANDSHAKECOMPLETEDEVENT_HPP_DECL
#define J2CPP_JAVAX_NET_SSL_HANDSHAKECOMPLETEDEVENT_HPP_DECL


namespace j2cpp { namespace javax { namespace net { namespace ssl { class SSLSession; } } } }
namespace j2cpp { namespace javax { namespace net { namespace ssl { class SSLSocket; } } } }
namespace j2cpp { namespace javax { namespace security { namespace cert { class X509Certificate; } } } }
namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace java { namespace util { class EventObject; } } }
namespace j2cpp { namespace java { namespace security { namespace cert { class Certificate; } } } }
namespace j2cpp { namespace java { namespace security { class Principal; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/String.hpp>
#include <java/security/Principal.hpp>
#include <java/security/cert/Certificate.hpp>
#include <java/util/EventObject.hpp>
#include <javax/net/ssl/SSLSession.hpp>
#include <javax/net/ssl/SSLSocket.hpp>
#include <javax/security/cert/X509Certificate.hpp>


namespace j2cpp {

namespace javax { namespace net { namespace ssl {

	class HandshakeCompletedEvent;
	class HandshakeCompletedEvent
		: public object<HandshakeCompletedEvent>
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

		explicit HandshakeCompletedEvent(jobject jobj)
		: object<HandshakeCompletedEvent>(jobj)
		{
		}

		operator local_ref<java::util::EventObject>() const;
		operator local_ref<java::io::Serializable>() const;


		HandshakeCompletedEvent(local_ref< javax::net::ssl::SSLSocket > const&, local_ref< javax::net::ssl::SSLSession > const&);
		local_ref< javax::net::ssl::SSLSession > getSession();
		local_ref< java::lang::String > getCipherSuite();
		local_ref< array< local_ref< java::security::cert::Certificate >, 1> > getLocalCertificates();
		local_ref< array< local_ref< java::security::cert::Certificate >, 1> > getPeerCertificates();
		local_ref< array< local_ref< javax::security::cert::X509Certificate >, 1> > getPeerCertificateChain();
		local_ref< java::security::Principal > getPeerPrincipal();
		local_ref< java::security::Principal > getLocalPrincipal();
		local_ref< javax::net::ssl::SSLSocket > getSocket();
	}; //class HandshakeCompletedEvent

} //namespace ssl
} //namespace net
} //namespace javax

} //namespace j2cpp

#endif //J2CPP_JAVAX_NET_SSL_HANDSHAKECOMPLETEDEVENT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_NET_SSL_HANDSHAKECOMPLETEDEVENT_HPP_IMPL
#define J2CPP_JAVAX_NET_SSL_HANDSHAKECOMPLETEDEVENT_HPP_IMPL

namespace j2cpp {



javax::net::ssl::HandshakeCompletedEvent::operator local_ref<java::util::EventObject>() const
{
	return local_ref<java::util::EventObject>(get_jobject());
}

javax::net::ssl::HandshakeCompletedEvent::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}


javax::net::ssl::HandshakeCompletedEvent::HandshakeCompletedEvent(local_ref< javax::net::ssl::SSLSocket > const &a0, local_ref< javax::net::ssl::SSLSession > const &a1)
: object<javax::net::ssl::HandshakeCompletedEvent>(
	call_new_object<
		javax::net::ssl::HandshakeCompletedEvent::J2CPP_CLASS_NAME,
		javax::net::ssl::HandshakeCompletedEvent::J2CPP_METHOD_NAME(0),
		javax::net::ssl::HandshakeCompletedEvent::J2CPP_METHOD_SIGNATURE(0)>
	(a0, a1)
)
{
}


local_ref< javax::net::ssl::SSLSession > javax::net::ssl::HandshakeCompletedEvent::getSession()
{
	return call_method<
		javax::net::ssl::HandshakeCompletedEvent::J2CPP_CLASS_NAME,
		javax::net::ssl::HandshakeCompletedEvent::J2CPP_METHOD_NAME(1),
		javax::net::ssl::HandshakeCompletedEvent::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< javax::net::ssl::SSLSession > >
	(get_jobject());
}

local_ref< java::lang::String > javax::net::ssl::HandshakeCompletedEvent::getCipherSuite()
{
	return call_method<
		javax::net::ssl::HandshakeCompletedEvent::J2CPP_CLASS_NAME,
		javax::net::ssl::HandshakeCompletedEvent::J2CPP_METHOD_NAME(2),
		javax::net::ssl::HandshakeCompletedEvent::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::lang::String > >
	(get_jobject());
}

local_ref< array< local_ref< java::security::cert::Certificate >, 1> > javax::net::ssl::HandshakeCompletedEvent::getLocalCertificates()
{
	return call_method<
		javax::net::ssl::HandshakeCompletedEvent::J2CPP_CLASS_NAME,
		javax::net::ssl::HandshakeCompletedEvent::J2CPP_METHOD_NAME(3),
		javax::net::ssl::HandshakeCompletedEvent::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< array< local_ref< java::security::cert::Certificate >, 1> > >
	(get_jobject());
}

local_ref< array< local_ref< java::security::cert::Certificate >, 1> > javax::net::ssl::HandshakeCompletedEvent::getPeerCertificates()
{
	return call_method<
		javax::net::ssl::HandshakeCompletedEvent::J2CPP_CLASS_NAME,
		javax::net::ssl::HandshakeCompletedEvent::J2CPP_METHOD_NAME(4),
		javax::net::ssl::HandshakeCompletedEvent::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< array< local_ref< java::security::cert::Certificate >, 1> > >
	(get_jobject());
}

local_ref< array< local_ref< javax::security::cert::X509Certificate >, 1> > javax::net::ssl::HandshakeCompletedEvent::getPeerCertificateChain()
{
	return call_method<
		javax::net::ssl::HandshakeCompletedEvent::J2CPP_CLASS_NAME,
		javax::net::ssl::HandshakeCompletedEvent::J2CPP_METHOD_NAME(5),
		javax::net::ssl::HandshakeCompletedEvent::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< array< local_ref< javax::security::cert::X509Certificate >, 1> > >
	(get_jobject());
}

local_ref< java::security::Principal > javax::net::ssl::HandshakeCompletedEvent::getPeerPrincipal()
{
	return call_method<
		javax::net::ssl::HandshakeCompletedEvent::J2CPP_CLASS_NAME,
		javax::net::ssl::HandshakeCompletedEvent::J2CPP_METHOD_NAME(6),
		javax::net::ssl::HandshakeCompletedEvent::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::security::Principal > >
	(get_jobject());
}

local_ref< java::security::Principal > javax::net::ssl::HandshakeCompletedEvent::getLocalPrincipal()
{
	return call_method<
		javax::net::ssl::HandshakeCompletedEvent::J2CPP_CLASS_NAME,
		javax::net::ssl::HandshakeCompletedEvent::J2CPP_METHOD_NAME(7),
		javax::net::ssl::HandshakeCompletedEvent::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< java::security::Principal > >
	(get_jobject());
}

local_ref< javax::net::ssl::SSLSocket > javax::net::ssl::HandshakeCompletedEvent::getSocket()
{
	return call_method<
		javax::net::ssl::HandshakeCompletedEvent::J2CPP_CLASS_NAME,
		javax::net::ssl::HandshakeCompletedEvent::J2CPP_METHOD_NAME(8),
		javax::net::ssl::HandshakeCompletedEvent::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< javax::net::ssl::SSLSocket > >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(javax::net::ssl::HandshakeCompletedEvent,"javax/net/ssl/HandshakeCompletedEvent")
J2CPP_DEFINE_METHOD(javax::net::ssl::HandshakeCompletedEvent,0,"<init>","(Ljavax/net/ssl/SSLSocket;Ljavax/net/ssl/SSLSession;)V")
J2CPP_DEFINE_METHOD(javax::net::ssl::HandshakeCompletedEvent,1,"getSession","()Ljavax/net/ssl/SSLSession;")
J2CPP_DEFINE_METHOD(javax::net::ssl::HandshakeCompletedEvent,2,"getCipherSuite","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(javax::net::ssl::HandshakeCompletedEvent,3,"getLocalCertificates","()[java.security.cert.Certificate")
J2CPP_DEFINE_METHOD(javax::net::ssl::HandshakeCompletedEvent,4,"getPeerCertificates","()[java.security.cert.Certificate")
J2CPP_DEFINE_METHOD(javax::net::ssl::HandshakeCompletedEvent,5,"getPeerCertificateChain","()[javax.security.cert.X509Certificate")
J2CPP_DEFINE_METHOD(javax::net::ssl::HandshakeCompletedEvent,6,"getPeerPrincipal","()Ljava/security/Principal;")
J2CPP_DEFINE_METHOD(javax::net::ssl::HandshakeCompletedEvent,7,"getLocalPrincipal","()Ljava/security/Principal;")
J2CPP_DEFINE_METHOD(javax::net::ssl::HandshakeCompletedEvent,8,"getSocket","()Ljavax/net/ssl/SSLSocket;")

} //namespace j2cpp

#endif //J2CPP_JAVAX_NET_SSL_HANDSHAKECOMPLETEDEVENT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
