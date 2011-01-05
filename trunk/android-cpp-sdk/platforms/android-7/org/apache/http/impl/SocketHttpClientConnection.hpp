/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.impl.SocketHttpClientConnection
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_SOCKETHTTPCLIENTCONNECTION_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IMPL_SOCKETHTTPCLIENTCONNECTION_HPP_DECL


namespace j2cpp { namespace java { namespace net { class InetAddress; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpConnection; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpClientConnection; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpInetConnection; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace impl { class AbstractHttpClientConnection; } } } } }


#include <java/lang/Object.hpp>
#include <java/net/InetAddress.hpp>
#include <org/apache/http/HttpClientConnection.hpp>
#include <org/apache/http/HttpConnection.hpp>
#include <org/apache/http/HttpInetConnection.hpp>
#include <org/apache/http/impl/AbstractHttpClientConnection.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace impl {

	class SocketHttpClientConnection;
	class SocketHttpClientConnection
		: public object<SocketHttpClientConnection>
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

		explicit SocketHttpClientConnection(jobject jobj)
		: object<SocketHttpClientConnection>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<org::apache::http::HttpConnection>() const;
		operator local_ref<org::apache::http::HttpClientConnection>() const;
		operator local_ref<org::apache::http::HttpInetConnection>() const;
		operator local_ref<org::apache::http::impl::AbstractHttpClientConnection>() const;


		SocketHttpClientConnection();
		jboolean isOpen();
		local_ref< java::net::InetAddress > getLocalAddress();
		jint getLocalPort();
		local_ref< java::net::InetAddress > getRemoteAddress();
		jint getRemotePort();
		void setSocketTimeout(jint);
		jint getSocketTimeout();
		void shutdown();
		void close();
	}; //class SocketHttpClientConnection

} //namespace impl
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_SOCKETHTTPCLIENTCONNECTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_SOCKETHTTPCLIENTCONNECTION_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IMPL_SOCKETHTTPCLIENTCONNECTION_HPP_IMPL

namespace j2cpp {



org::apache::http::impl::SocketHttpClientConnection::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

org::apache::http::impl::SocketHttpClientConnection::operator local_ref<org::apache::http::HttpConnection>() const
{
	return local_ref<org::apache::http::HttpConnection>(get_jobject());
}

org::apache::http::impl::SocketHttpClientConnection::operator local_ref<org::apache::http::HttpClientConnection>() const
{
	return local_ref<org::apache::http::HttpClientConnection>(get_jobject());
}

org::apache::http::impl::SocketHttpClientConnection::operator local_ref<org::apache::http::HttpInetConnection>() const
{
	return local_ref<org::apache::http::HttpInetConnection>(get_jobject());
}

org::apache::http::impl::SocketHttpClientConnection::operator local_ref<org::apache::http::impl::AbstractHttpClientConnection>() const
{
	return local_ref<org::apache::http::impl::AbstractHttpClientConnection>(get_jobject());
}


org::apache::http::impl::SocketHttpClientConnection::SocketHttpClientConnection()
: object<org::apache::http::impl::SocketHttpClientConnection>(
	call_new_object<
		org::apache::http::impl::SocketHttpClientConnection::J2CPP_CLASS_NAME,
		org::apache::http::impl::SocketHttpClientConnection::J2CPP_METHOD_NAME(0),
		org::apache::http::impl::SocketHttpClientConnection::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}







jboolean org::apache::http::impl::SocketHttpClientConnection::isOpen()
{
	return call_method<
		org::apache::http::impl::SocketHttpClientConnection::J2CPP_CLASS_NAME,
		org::apache::http::impl::SocketHttpClientConnection::J2CPP_METHOD_NAME(6),
		org::apache::http::impl::SocketHttpClientConnection::J2CPP_METHOD_SIGNATURE(6), 
		jboolean
	>(get_jobject());
}


local_ref< java::net::InetAddress > org::apache::http::impl::SocketHttpClientConnection::getLocalAddress()
{
	return call_method<
		org::apache::http::impl::SocketHttpClientConnection::J2CPP_CLASS_NAME,
		org::apache::http::impl::SocketHttpClientConnection::J2CPP_METHOD_NAME(8),
		org::apache::http::impl::SocketHttpClientConnection::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< java::net::InetAddress >
	>(get_jobject());
}

jint org::apache::http::impl::SocketHttpClientConnection::getLocalPort()
{
	return call_method<
		org::apache::http::impl::SocketHttpClientConnection::J2CPP_CLASS_NAME,
		org::apache::http::impl::SocketHttpClientConnection::J2CPP_METHOD_NAME(9),
		org::apache::http::impl::SocketHttpClientConnection::J2CPP_METHOD_SIGNATURE(9), 
		jint
	>(get_jobject());
}

local_ref< java::net::InetAddress > org::apache::http::impl::SocketHttpClientConnection::getRemoteAddress()
{
	return call_method<
		org::apache::http::impl::SocketHttpClientConnection::J2CPP_CLASS_NAME,
		org::apache::http::impl::SocketHttpClientConnection::J2CPP_METHOD_NAME(10),
		org::apache::http::impl::SocketHttpClientConnection::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< java::net::InetAddress >
	>(get_jobject());
}

jint org::apache::http::impl::SocketHttpClientConnection::getRemotePort()
{
	return call_method<
		org::apache::http::impl::SocketHttpClientConnection::J2CPP_CLASS_NAME,
		org::apache::http::impl::SocketHttpClientConnection::J2CPP_METHOD_NAME(11),
		org::apache::http::impl::SocketHttpClientConnection::J2CPP_METHOD_SIGNATURE(11), 
		jint
	>(get_jobject());
}

void org::apache::http::impl::SocketHttpClientConnection::setSocketTimeout(jint a0)
{
	return call_method<
		org::apache::http::impl::SocketHttpClientConnection::J2CPP_CLASS_NAME,
		org::apache::http::impl::SocketHttpClientConnection::J2CPP_METHOD_NAME(12),
		org::apache::http::impl::SocketHttpClientConnection::J2CPP_METHOD_SIGNATURE(12), 
		void
	>(get_jobject(), a0);
}

jint org::apache::http::impl::SocketHttpClientConnection::getSocketTimeout()
{
	return call_method<
		org::apache::http::impl::SocketHttpClientConnection::J2CPP_CLASS_NAME,
		org::apache::http::impl::SocketHttpClientConnection::J2CPP_METHOD_NAME(13),
		org::apache::http::impl::SocketHttpClientConnection::J2CPP_METHOD_SIGNATURE(13), 
		jint
	>(get_jobject());
}

void org::apache::http::impl::SocketHttpClientConnection::shutdown()
{
	return call_method<
		org::apache::http::impl::SocketHttpClientConnection::J2CPP_CLASS_NAME,
		org::apache::http::impl::SocketHttpClientConnection::J2CPP_METHOD_NAME(14),
		org::apache::http::impl::SocketHttpClientConnection::J2CPP_METHOD_SIGNATURE(14), 
		void
	>(get_jobject());
}

void org::apache::http::impl::SocketHttpClientConnection::close()
{
	return call_method<
		org::apache::http::impl::SocketHttpClientConnection::J2CPP_CLASS_NAME,
		org::apache::http::impl::SocketHttpClientConnection::J2CPP_METHOD_NAME(15),
		org::apache::http::impl::SocketHttpClientConnection::J2CPP_METHOD_SIGNATURE(15), 
		void
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(org::apache::http::impl::SocketHttpClientConnection,"org/apache/http/impl/SocketHttpClientConnection")
J2CPP_DEFINE_METHOD(org::apache::http::impl::SocketHttpClientConnection,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::SocketHttpClientConnection,1,"assertNotOpen","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::SocketHttpClientConnection,2,"assertOpen","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::SocketHttpClientConnection,3,"createSessionInputBuffer","(Ljava/net/Socket;ILorg/apache/http/params/HttpParams;)Lorg/apache/http/io/SessionInputBuffer;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::SocketHttpClientConnection,4,"createSessionOutputBuffer","(Ljava/net/Socket;ILorg/apache/http/params/HttpParams;)Lorg/apache/http/io/SessionOutputBuffer;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::SocketHttpClientConnection,5,"bind","(Ljava/net/Socket;Lorg/apache/http/params/HttpParams;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::SocketHttpClientConnection,6,"isOpen","()Z")
J2CPP_DEFINE_METHOD(org::apache::http::impl::SocketHttpClientConnection,7,"getSocket","()Ljava/net/Socket;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::SocketHttpClientConnection,8,"getLocalAddress","()Ljava/net/InetAddress;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::SocketHttpClientConnection,9,"getLocalPort","()I")
J2CPP_DEFINE_METHOD(org::apache::http::impl::SocketHttpClientConnection,10,"getRemoteAddress","()Ljava/net/InetAddress;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::SocketHttpClientConnection,11,"getRemotePort","()I")
J2CPP_DEFINE_METHOD(org::apache::http::impl::SocketHttpClientConnection,12,"setSocketTimeout","(I)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::SocketHttpClientConnection,13,"getSocketTimeout","()I")
J2CPP_DEFINE_METHOD(org::apache::http::impl::SocketHttpClientConnection,14,"shutdown","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::SocketHttpClientConnection,15,"close","()V")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_SOCKETHTTPCLIENTCONNECTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
