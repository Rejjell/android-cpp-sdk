/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.impl.client.AbstractAuthenticationHandler
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_ABSTRACTAUTHENTICATIONHANDLER_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_ABSTRACTAUTHENTICATIONHANDLER_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { namespace auth { class AuthScheme; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpResponse; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace protocol { class HttpContext; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace client { class AuthenticationHandler; } } } } }
namespace j2cpp { namespace java { namespace util { class Map; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/util/Map.hpp>
#include <org/apache/http/HttpResponse.hpp>
#include <org/apache/http/auth/AuthScheme.hpp>
#include <org/apache/http/client/AuthenticationHandler.hpp>
#include <org/apache/http/protocol/HttpContext.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace impl { namespace client {

	class AbstractAuthenticationHandler;
	class AbstractAuthenticationHandler
		: public object<AbstractAuthenticationHandler>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		explicit AbstractAuthenticationHandler(jobject jobj)
		: object<AbstractAuthenticationHandler>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<org::apache::http::client::AuthenticationHandler>() const;


		AbstractAuthenticationHandler();
		local_ref< org::apache::http::auth::AuthScheme > selectScheme(local_ref< java::util::Map >  const&, local_ref< org::apache::http::HttpResponse >  const&, local_ref< org::apache::http::protocol::HttpContext >  const&);
	}; //class AbstractAuthenticationHandler

} //namespace client
} //namespace impl
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_ABSTRACTAUTHENTICATIONHANDLER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_ABSTRACTAUTHENTICATIONHANDLER_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_ABSTRACTAUTHENTICATIONHANDLER_HPP_IMPL

namespace j2cpp {



org::apache::http::impl::client::AbstractAuthenticationHandler::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

org::apache::http::impl::client::AbstractAuthenticationHandler::operator local_ref<org::apache::http::client::AuthenticationHandler>() const
{
	return local_ref<org::apache::http::client::AuthenticationHandler>(get_jobject());
}


org::apache::http::impl::client::AbstractAuthenticationHandler::AbstractAuthenticationHandler()
: object<org::apache::http::impl::client::AbstractAuthenticationHandler>(
	call_new_object<
		org::apache::http::impl::client::AbstractAuthenticationHandler::J2CPP_CLASS_NAME,
		org::apache::http::impl::client::AbstractAuthenticationHandler::J2CPP_METHOD_NAME(0),
		org::apache::http::impl::client::AbstractAuthenticationHandler::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}




local_ref< org::apache::http::auth::AuthScheme > org::apache::http::impl::client::AbstractAuthenticationHandler::selectScheme(local_ref< java::util::Map > const &a0, local_ref< org::apache::http::HttpResponse > const &a1, local_ref< org::apache::http::protocol::HttpContext > const &a2)
{
	return call_method<
		org::apache::http::impl::client::AbstractAuthenticationHandler::J2CPP_CLASS_NAME,
		org::apache::http::impl::client::AbstractAuthenticationHandler::J2CPP_METHOD_NAME(3),
		org::apache::http::impl::client::AbstractAuthenticationHandler::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< org::apache::http::auth::AuthScheme > >
	(get_jobject(), a0, a1, a2);
}


J2CPP_DEFINE_CLASS(org::apache::http::impl::client::AbstractAuthenticationHandler,"org/apache/http/impl/client/AbstractAuthenticationHandler")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::AbstractAuthenticationHandler,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::AbstractAuthenticationHandler,1,"parseChallenges","([org.apache.http.Header)Ljava/util/Map;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::AbstractAuthenticationHandler,2,"getAuthPreferences","()Ljava/util/List;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::AbstractAuthenticationHandler,3,"selectScheme","(Ljava/util/Map;Lorg/apache/http/HttpResponse;Lorg/apache/http/protocol/HttpContext;)Lorg/apache/http/auth/AuthScheme;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_ABSTRACTAUTHENTICATIONHANDLER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
