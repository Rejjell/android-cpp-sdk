/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.client.AuthenticationHandler
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CLIENT_AUTHENTICATIONHANDLER_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_CLIENT_AUTHENTICATIONHANDLER_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { namespace auth { class AuthScheme; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpResponse; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace protocol { class HttpContext; } } } } }
namespace j2cpp { namespace java { namespace util { class Map; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/util/Map.hpp>
#include <org/apache/http/HttpResponse.hpp>
#include <org/apache/http/auth/AuthScheme.hpp>
#include <org/apache/http/protocol/HttpContext.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace client {

	class AuthenticationHandler;
	class AuthenticationHandler
		: public object<AuthenticationHandler>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		explicit AuthenticationHandler(jobject jobj)
		: object<AuthenticationHandler>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		jboolean isAuthenticationRequested(local_ref< org::apache::http::HttpResponse >  const&, local_ref< org::apache::http::protocol::HttpContext >  const&);
		local_ref< java::util::Map > getChallenges(local_ref< org::apache::http::HttpResponse >  const&, local_ref< org::apache::http::protocol::HttpContext >  const&);
		local_ref< org::apache::http::auth::AuthScheme > selectScheme(local_ref< java::util::Map >  const&, local_ref< org::apache::http::HttpResponse >  const&, local_ref< org::apache::http::protocol::HttpContext >  const&);
	}; //class AuthenticationHandler

} //namespace client
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CLIENT_AUTHENTICATIONHANDLER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CLIENT_AUTHENTICATIONHANDLER_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_CLIENT_AUTHENTICATIONHANDLER_HPP_IMPL

namespace j2cpp {



org::apache::http::client::AuthenticationHandler::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

jboolean org::apache::http::client::AuthenticationHandler::isAuthenticationRequested(local_ref< org::apache::http::HttpResponse > const &a0, local_ref< org::apache::http::protocol::HttpContext > const &a1)
{
	return call_method<
		org::apache::http::client::AuthenticationHandler::J2CPP_CLASS_NAME,
		org::apache::http::client::AuthenticationHandler::J2CPP_METHOD_NAME(0),
		org::apache::http::client::AuthenticationHandler::J2CPP_METHOD_SIGNATURE(0), 
		jboolean >
	(get_jobject(), a0, a1);
}

local_ref< java::util::Map > org::apache::http::client::AuthenticationHandler::getChallenges(local_ref< org::apache::http::HttpResponse > const &a0, local_ref< org::apache::http::protocol::HttpContext > const &a1)
{
	return call_method<
		org::apache::http::client::AuthenticationHandler::J2CPP_CLASS_NAME,
		org::apache::http::client::AuthenticationHandler::J2CPP_METHOD_NAME(1),
		org::apache::http::client::AuthenticationHandler::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::util::Map > >
	(get_jobject(), a0, a1);
}

local_ref< org::apache::http::auth::AuthScheme > org::apache::http::client::AuthenticationHandler::selectScheme(local_ref< java::util::Map > const &a0, local_ref< org::apache::http::HttpResponse > const &a1, local_ref< org::apache::http::protocol::HttpContext > const &a2)
{
	return call_method<
		org::apache::http::client::AuthenticationHandler::J2CPP_CLASS_NAME,
		org::apache::http::client::AuthenticationHandler::J2CPP_METHOD_NAME(2),
		org::apache::http::client::AuthenticationHandler::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< org::apache::http::auth::AuthScheme > >
	(get_jobject(), a0, a1, a2);
}


J2CPP_DEFINE_CLASS(org::apache::http::client::AuthenticationHandler,"org/apache/http/client/AuthenticationHandler")
J2CPP_DEFINE_METHOD(org::apache::http::client::AuthenticationHandler,0,"isAuthenticationRequested","(Lorg/apache/http/HttpResponse;Lorg/apache/http/protocol/HttpContext;)Z")
J2CPP_DEFINE_METHOD(org::apache::http::client::AuthenticationHandler,1,"getChallenges","(Lorg/apache/http/HttpResponse;Lorg/apache/http/protocol/HttpContext;)Ljava/util/Map;")
J2CPP_DEFINE_METHOD(org::apache::http::client::AuthenticationHandler,2,"selectScheme","(Ljava/util/Map;Lorg/apache/http/HttpResponse;Lorg/apache/http/protocol/HttpContext;)Lorg/apache/http/auth/AuthScheme;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CLIENT_AUTHENTICATIONHANDLER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
