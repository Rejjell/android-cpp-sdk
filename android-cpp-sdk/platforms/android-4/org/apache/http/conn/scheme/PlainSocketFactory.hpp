/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.conn.scheme.PlainSocketFactory
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CONN_SCHEME_PLAINSOCKETFACTORY_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_CONN_SCHEME_PLAINSOCKETFACTORY_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { namespace conn { namespace scheme { class HostNameResolver; } } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace conn { namespace scheme { class SocketFactory; } } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } } }
namespace j2cpp { namespace java { namespace net { class InetAddress; } } }
namespace j2cpp { namespace java { namespace net { class Socket; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/net/InetAddress.hpp>
#include <java/net/Socket.hpp>
#include <org/apache/http/conn/scheme/HostNameResolver.hpp>
#include <org/apache/http/conn/scheme/SocketFactory.hpp>
#include <org/apache/http/params/HttpParams.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace conn { namespace scheme {

	class PlainSocketFactory;
	class PlainSocketFactory
		: public object<PlainSocketFactory>
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

		explicit PlainSocketFactory(jobject jobj)
		: object<PlainSocketFactory>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<org::apache::http::conn::scheme::SocketFactory>() const;


		PlainSocketFactory(local_ref< org::apache::http::conn::scheme::HostNameResolver > const&);
		PlainSocketFactory();
		static local_ref< org::apache::http::conn::scheme::PlainSocketFactory > getSocketFactory();
		local_ref< java::net::Socket > createSocket();
		local_ref< java::net::Socket > connectSocket(local_ref< java::net::Socket >  const&, local_ref< java::lang::String >  const&, jint, local_ref< java::net::InetAddress >  const&, jint, local_ref< org::apache::http::params::HttpParams >  const&);
		jboolean isSecure(local_ref< java::net::Socket >  const&);
		jboolean equals(local_ref< java::lang::Object >  const&);
		jint hashCode();
	}; //class PlainSocketFactory

} //namespace scheme
} //namespace conn
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CONN_SCHEME_PLAINSOCKETFACTORY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CONN_SCHEME_PLAINSOCKETFACTORY_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_CONN_SCHEME_PLAINSOCKETFACTORY_HPP_IMPL

namespace j2cpp {



org::apache::http::conn::scheme::PlainSocketFactory::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

org::apache::http::conn::scheme::PlainSocketFactory::operator local_ref<org::apache::http::conn::scheme::SocketFactory>() const
{
	return local_ref<org::apache::http::conn::scheme::SocketFactory>(get_jobject());
}


org::apache::http::conn::scheme::PlainSocketFactory::PlainSocketFactory(local_ref< org::apache::http::conn::scheme::HostNameResolver > const &a0)
: object<org::apache::http::conn::scheme::PlainSocketFactory>(
	call_new_object<
		org::apache::http::conn::scheme::PlainSocketFactory::J2CPP_CLASS_NAME,
		org::apache::http::conn::scheme::PlainSocketFactory::J2CPP_METHOD_NAME(0),
		org::apache::http::conn::scheme::PlainSocketFactory::J2CPP_METHOD_SIGNATURE(0)>
	(a0)
)
{
}



org::apache::http::conn::scheme::PlainSocketFactory::PlainSocketFactory()
: object<org::apache::http::conn::scheme::PlainSocketFactory>(
	call_new_object<
		org::apache::http::conn::scheme::PlainSocketFactory::J2CPP_CLASS_NAME,
		org::apache::http::conn::scheme::PlainSocketFactory::J2CPP_METHOD_NAME(1),
		org::apache::http::conn::scheme::PlainSocketFactory::J2CPP_METHOD_SIGNATURE(1)>
	()
)
{
}


local_ref< org::apache::http::conn::scheme::PlainSocketFactory > org::apache::http::conn::scheme::PlainSocketFactory::getSocketFactory()
{
	return call_static_method<
		org::apache::http::conn::scheme::PlainSocketFactory::J2CPP_CLASS_NAME,
		org::apache::http::conn::scheme::PlainSocketFactory::J2CPP_METHOD_NAME(2),
		org::apache::http::conn::scheme::PlainSocketFactory::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< org::apache::http::conn::scheme::PlainSocketFactory > >
	();
}

local_ref< java::net::Socket > org::apache::http::conn::scheme::PlainSocketFactory::createSocket()
{
	return call_method<
		org::apache::http::conn::scheme::PlainSocketFactory::J2CPP_CLASS_NAME,
		org::apache::http::conn::scheme::PlainSocketFactory::J2CPP_METHOD_NAME(3),
		org::apache::http::conn::scheme::PlainSocketFactory::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::net::Socket > >
	(get_jobject());
}

local_ref< java::net::Socket > org::apache::http::conn::scheme::PlainSocketFactory::connectSocket(local_ref< java::net::Socket > const &a0, local_ref< java::lang::String > const &a1, jint a2, local_ref< java::net::InetAddress > const &a3, jint a4, local_ref< org::apache::http::params::HttpParams > const &a5)
{
	return call_method<
		org::apache::http::conn::scheme::PlainSocketFactory::J2CPP_CLASS_NAME,
		org::apache::http::conn::scheme::PlainSocketFactory::J2CPP_METHOD_NAME(4),
		org::apache::http::conn::scheme::PlainSocketFactory::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::net::Socket > >
	(get_jobject(), a0, a1, a2, a3, a4, a5);
}

jboolean org::apache::http::conn::scheme::PlainSocketFactory::isSecure(local_ref< java::net::Socket > const &a0)
{
	return call_method<
		org::apache::http::conn::scheme::PlainSocketFactory::J2CPP_CLASS_NAME,
		org::apache::http::conn::scheme::PlainSocketFactory::J2CPP_METHOD_NAME(5),
		org::apache::http::conn::scheme::PlainSocketFactory::J2CPP_METHOD_SIGNATURE(5), 
		jboolean >
	(get_jobject(), a0);
}

jboolean org::apache::http::conn::scheme::PlainSocketFactory::equals(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		org::apache::http::conn::scheme::PlainSocketFactory::J2CPP_CLASS_NAME,
		org::apache::http::conn::scheme::PlainSocketFactory::J2CPP_METHOD_NAME(6),
		org::apache::http::conn::scheme::PlainSocketFactory::J2CPP_METHOD_SIGNATURE(6), 
		jboolean >
	(get_jobject(), a0);
}

jint org::apache::http::conn::scheme::PlainSocketFactory::hashCode()
{
	return call_method<
		org::apache::http::conn::scheme::PlainSocketFactory::J2CPP_CLASS_NAME,
		org::apache::http::conn::scheme::PlainSocketFactory::J2CPP_METHOD_NAME(7),
		org::apache::http::conn::scheme::PlainSocketFactory::J2CPP_METHOD_SIGNATURE(7), 
		jint >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(org::apache::http::conn::scheme::PlainSocketFactory,"org/apache/http/conn/scheme/PlainSocketFactory")
J2CPP_DEFINE_METHOD(org::apache::http::conn::scheme::PlainSocketFactory,0,"<init>","(Lorg/apache/http/conn/scheme/HostNameResolver;)V")
J2CPP_DEFINE_METHOD(org::apache::http::conn::scheme::PlainSocketFactory,1,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::conn::scheme::PlainSocketFactory,2,"getSocketFactory","()Lorg/apache/http/conn/scheme/PlainSocketFactory;")
J2CPP_DEFINE_METHOD(org::apache::http::conn::scheme::PlainSocketFactory,3,"createSocket","()Ljava/net/Socket;")
J2CPP_DEFINE_METHOD(org::apache::http::conn::scheme::PlainSocketFactory,4,"connectSocket","(Ljava/net/Socket;Ljava/lang/String;ILjava/net/InetAddress;ILorg/apache/http/params/HttpParams;)Ljava/net/Socket;")
J2CPP_DEFINE_METHOD(org::apache::http::conn::scheme::PlainSocketFactory,5,"isSecure","(Ljava/net/Socket;)Z")
J2CPP_DEFINE_METHOD(org::apache::http::conn::scheme::PlainSocketFactory,6,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(org::apache::http::conn::scheme::PlainSocketFactory,7,"hashCode","()I")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CONN_SCHEME_PLAINSOCKETFACTORY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
