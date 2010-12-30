/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.impl.client.RequestWrapper
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_REQUESTWRAPPER_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_REQUESTWRAPPER_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { class ProtocolVersion; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class RequestLine; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace client { namespace methods { class HttpUriRequest; } } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpRequest; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace message { class AbstractHttpMessage; } } } } }
namespace j2cpp { namespace java { namespace net { class URI; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/String.hpp>
#include <java/net/URI.hpp>
#include <org/apache/http/HttpRequest.hpp>
#include <org/apache/http/ProtocolVersion.hpp>
#include <org/apache/http/RequestLine.hpp>
#include <org/apache/http/client/methods/HttpUriRequest.hpp>
#include <org/apache/http/message/AbstractHttpMessage.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace impl { namespace client {

	class RequestWrapper;
	class RequestWrapper
		: public object<RequestWrapper>
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

		explicit RequestWrapper(jobject jobj)
		: object<RequestWrapper>(jobj)
		{
		}

		operator local_ref<org::apache::http::message::AbstractHttpMessage>() const;
		operator local_ref<org::apache::http::client::methods::HttpUriRequest>() const;


		RequestWrapper(local_ref< org::apache::http::HttpRequest > const&);
		void resetHeaders();
		local_ref< java::lang::String > getMethod();
		void setMethod(local_ref< java::lang::String >  const&);
		local_ref< org::apache::http::ProtocolVersion > getProtocolVersion();
		void setProtocolVersion(local_ref< org::apache::http::ProtocolVersion >  const&);
		local_ref< java::net::URI > getURI();
		void setURI(local_ref< java::net::URI >  const&);
		local_ref< org::apache::http::RequestLine > getRequestLine();
		void abort();
		jboolean isAborted();
		local_ref< org::apache::http::HttpRequest > getOriginal();
		jboolean isRepeatable();
		jint getExecCount();
		void incrementExecCount();
	}; //class RequestWrapper

} //namespace client
} //namespace impl
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_REQUESTWRAPPER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_REQUESTWRAPPER_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_REQUESTWRAPPER_HPP_IMPL

namespace j2cpp {



org::apache::http::impl::client::RequestWrapper::operator local_ref<org::apache::http::message::AbstractHttpMessage>() const
{
	return local_ref<org::apache::http::message::AbstractHttpMessage>(get_jobject());
}

org::apache::http::impl::client::RequestWrapper::operator local_ref<org::apache::http::client::methods::HttpUriRequest>() const
{
	return local_ref<org::apache::http::client::methods::HttpUriRequest>(get_jobject());
}


org::apache::http::impl::client::RequestWrapper::RequestWrapper(local_ref< org::apache::http::HttpRequest > const &a0)
: object<org::apache::http::impl::client::RequestWrapper>(
	call_new_object<
		org::apache::http::impl::client::RequestWrapper::J2CPP_CLASS_NAME,
		org::apache::http::impl::client::RequestWrapper::J2CPP_METHOD_NAME(0),
		org::apache::http::impl::client::RequestWrapper::J2CPP_METHOD_SIGNATURE(0)>
	(a0)
)
{
}


void org::apache::http::impl::client::RequestWrapper::resetHeaders()
{
	return call_method<
		org::apache::http::impl::client::RequestWrapper::J2CPP_CLASS_NAME,
		org::apache::http::impl::client::RequestWrapper::J2CPP_METHOD_NAME(1),
		org::apache::http::impl::client::RequestWrapper::J2CPP_METHOD_SIGNATURE(1), 
		void >
	(get_jobject());
}

local_ref< java::lang::String > org::apache::http::impl::client::RequestWrapper::getMethod()
{
	return call_method<
		org::apache::http::impl::client::RequestWrapper::J2CPP_CLASS_NAME,
		org::apache::http::impl::client::RequestWrapper::J2CPP_METHOD_NAME(2),
		org::apache::http::impl::client::RequestWrapper::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::lang::String > >
	(get_jobject());
}

void org::apache::http::impl::client::RequestWrapper::setMethod(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::apache::http::impl::client::RequestWrapper::J2CPP_CLASS_NAME,
		org::apache::http::impl::client::RequestWrapper::J2CPP_METHOD_NAME(3),
		org::apache::http::impl::client::RequestWrapper::J2CPP_METHOD_SIGNATURE(3), 
		void >
	(get_jobject(), a0);
}

local_ref< org::apache::http::ProtocolVersion > org::apache::http::impl::client::RequestWrapper::getProtocolVersion()
{
	return call_method<
		org::apache::http::impl::client::RequestWrapper::J2CPP_CLASS_NAME,
		org::apache::http::impl::client::RequestWrapper::J2CPP_METHOD_NAME(4),
		org::apache::http::impl::client::RequestWrapper::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< org::apache::http::ProtocolVersion > >
	(get_jobject());
}

void org::apache::http::impl::client::RequestWrapper::setProtocolVersion(local_ref< org::apache::http::ProtocolVersion > const &a0)
{
	return call_method<
		org::apache::http::impl::client::RequestWrapper::J2CPP_CLASS_NAME,
		org::apache::http::impl::client::RequestWrapper::J2CPP_METHOD_NAME(5),
		org::apache::http::impl::client::RequestWrapper::J2CPP_METHOD_SIGNATURE(5), 
		void >
	(get_jobject(), a0);
}

local_ref< java::net::URI > org::apache::http::impl::client::RequestWrapper::getURI()
{
	return call_method<
		org::apache::http::impl::client::RequestWrapper::J2CPP_CLASS_NAME,
		org::apache::http::impl::client::RequestWrapper::J2CPP_METHOD_NAME(6),
		org::apache::http::impl::client::RequestWrapper::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::net::URI > >
	(get_jobject());
}

void org::apache::http::impl::client::RequestWrapper::setURI(local_ref< java::net::URI > const &a0)
{
	return call_method<
		org::apache::http::impl::client::RequestWrapper::J2CPP_CLASS_NAME,
		org::apache::http::impl::client::RequestWrapper::J2CPP_METHOD_NAME(7),
		org::apache::http::impl::client::RequestWrapper::J2CPP_METHOD_SIGNATURE(7), 
		void >
	(get_jobject(), a0);
}

local_ref< org::apache::http::RequestLine > org::apache::http::impl::client::RequestWrapper::getRequestLine()
{
	return call_method<
		org::apache::http::impl::client::RequestWrapper::J2CPP_CLASS_NAME,
		org::apache::http::impl::client::RequestWrapper::J2CPP_METHOD_NAME(8),
		org::apache::http::impl::client::RequestWrapper::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< org::apache::http::RequestLine > >
	(get_jobject());
}

void org::apache::http::impl::client::RequestWrapper::abort()
{
	return call_method<
		org::apache::http::impl::client::RequestWrapper::J2CPP_CLASS_NAME,
		org::apache::http::impl::client::RequestWrapper::J2CPP_METHOD_NAME(9),
		org::apache::http::impl::client::RequestWrapper::J2CPP_METHOD_SIGNATURE(9), 
		void >
	(get_jobject());
}

jboolean org::apache::http::impl::client::RequestWrapper::isAborted()
{
	return call_method<
		org::apache::http::impl::client::RequestWrapper::J2CPP_CLASS_NAME,
		org::apache::http::impl::client::RequestWrapper::J2CPP_METHOD_NAME(10),
		org::apache::http::impl::client::RequestWrapper::J2CPP_METHOD_SIGNATURE(10), 
		jboolean >
	(get_jobject());
}

local_ref< org::apache::http::HttpRequest > org::apache::http::impl::client::RequestWrapper::getOriginal()
{
	return call_method<
		org::apache::http::impl::client::RequestWrapper::J2CPP_CLASS_NAME,
		org::apache::http::impl::client::RequestWrapper::J2CPP_METHOD_NAME(11),
		org::apache::http::impl::client::RequestWrapper::J2CPP_METHOD_SIGNATURE(11), 
		local_ref< org::apache::http::HttpRequest > >
	(get_jobject());
}

jboolean org::apache::http::impl::client::RequestWrapper::isRepeatable()
{
	return call_method<
		org::apache::http::impl::client::RequestWrapper::J2CPP_CLASS_NAME,
		org::apache::http::impl::client::RequestWrapper::J2CPP_METHOD_NAME(12),
		org::apache::http::impl::client::RequestWrapper::J2CPP_METHOD_SIGNATURE(12), 
		jboolean >
	(get_jobject());
}

jint org::apache::http::impl::client::RequestWrapper::getExecCount()
{
	return call_method<
		org::apache::http::impl::client::RequestWrapper::J2CPP_CLASS_NAME,
		org::apache::http::impl::client::RequestWrapper::J2CPP_METHOD_NAME(13),
		org::apache::http::impl::client::RequestWrapper::J2CPP_METHOD_SIGNATURE(13), 
		jint >
	(get_jobject());
}

void org::apache::http::impl::client::RequestWrapper::incrementExecCount()
{
	return call_method<
		org::apache::http::impl::client::RequestWrapper::J2CPP_CLASS_NAME,
		org::apache::http::impl::client::RequestWrapper::J2CPP_METHOD_NAME(14),
		org::apache::http::impl::client::RequestWrapper::J2CPP_METHOD_SIGNATURE(14), 
		void >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(org::apache::http::impl::client::RequestWrapper,"org/apache/http/impl/client/RequestWrapper")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::RequestWrapper,0,"<init>","(Lorg/apache/http/HttpRequest;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::RequestWrapper,1,"resetHeaders","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::RequestWrapper,2,"getMethod","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::RequestWrapper,3,"setMethod","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::RequestWrapper,4,"getProtocolVersion","()Lorg/apache/http/ProtocolVersion;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::RequestWrapper,5,"setProtocolVersion","(Lorg/apache/http/ProtocolVersion;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::RequestWrapper,6,"getURI","()Ljava/net/URI;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::RequestWrapper,7,"setURI","(Ljava/net/URI;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::RequestWrapper,8,"getRequestLine","()Lorg/apache/http/RequestLine;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::RequestWrapper,9,"abort","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::RequestWrapper,10,"isAborted","()Z")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::RequestWrapper,11,"getOriginal","()Lorg/apache/http/HttpRequest;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::RequestWrapper,12,"isRepeatable","()Z")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::RequestWrapper,13,"getExecCount","()I")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::RequestWrapper,14,"incrementExecCount","()V")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_REQUESTWRAPPER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
