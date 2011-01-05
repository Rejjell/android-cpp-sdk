/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.cookie.CookieSpecRegistry
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_COOKIE_COOKIESPECREGISTRY_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_COOKIE_COOKIESPECREGISTRY_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { namespace cookie { class CookieSpecFactory; } } } } }
namespace j2cpp { namespace java { namespace util { class Map; } } }
namespace j2cpp { namespace java { namespace util { class List; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace cookie { class CookieSpec; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/List.hpp>
#include <java/util/Map.hpp>
#include <org/apache/http/cookie/CookieSpec.hpp>
#include <org/apache/http/cookie/CookieSpecFactory.hpp>
#include <org/apache/http/params/HttpParams.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace cookie {

	class CookieSpecRegistry;
	class CookieSpecRegistry
		: public object<CookieSpecRegistry>
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

		explicit CookieSpecRegistry(jobject jobj)
		: object<CookieSpecRegistry>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		CookieSpecRegistry();
		void register_(local_ref< java::lang::String >  const&, local_ref< org::apache::http::cookie::CookieSpecFactory >  const&);
		void unregister(local_ref< java::lang::String >  const&);
		local_ref< org::apache::http::cookie::CookieSpec > getCookieSpec(local_ref< java::lang::String >  const&, local_ref< org::apache::http::params::HttpParams >  const&);
		local_ref< org::apache::http::cookie::CookieSpec > getCookieSpec(local_ref< java::lang::String >  const&);
		local_ref< java::util::List > getSpecNames();
		void setItems(local_ref< java::util::Map >  const&);
	}; //class CookieSpecRegistry

} //namespace cookie
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_COOKIE_COOKIESPECREGISTRY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_COOKIE_COOKIESPECREGISTRY_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_COOKIE_COOKIESPECREGISTRY_HPP_IMPL

namespace j2cpp {



org::apache::http::cookie::CookieSpecRegistry::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


org::apache::http::cookie::CookieSpecRegistry::CookieSpecRegistry()
: object<org::apache::http::cookie::CookieSpecRegistry>(
	call_new_object<
		org::apache::http::cookie::CookieSpecRegistry::J2CPP_CLASS_NAME,
		org::apache::http::cookie::CookieSpecRegistry::J2CPP_METHOD_NAME(0),
		org::apache::http::cookie::CookieSpecRegistry::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}


void org::apache::http::cookie::CookieSpecRegistry::register_(local_ref< java::lang::String > const &a0, local_ref< org::apache::http::cookie::CookieSpecFactory > const &a1)
{
	return call_method<
		org::apache::http::cookie::CookieSpecRegistry::J2CPP_CLASS_NAME,
		org::apache::http::cookie::CookieSpecRegistry::J2CPP_METHOD_NAME(1),
		org::apache::http::cookie::CookieSpecRegistry::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject(), a0, a1);
}

void org::apache::http::cookie::CookieSpecRegistry::unregister(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::apache::http::cookie::CookieSpecRegistry::J2CPP_CLASS_NAME,
		org::apache::http::cookie::CookieSpecRegistry::J2CPP_METHOD_NAME(2),
		org::apache::http::cookie::CookieSpecRegistry::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject(), a0);
}

local_ref< org::apache::http::cookie::CookieSpec > org::apache::http::cookie::CookieSpecRegistry::getCookieSpec(local_ref< java::lang::String > const &a0, local_ref< org::apache::http::params::HttpParams > const &a1)
{
	return call_method<
		org::apache::http::cookie::CookieSpecRegistry::J2CPP_CLASS_NAME,
		org::apache::http::cookie::CookieSpecRegistry::J2CPP_METHOD_NAME(3),
		org::apache::http::cookie::CookieSpecRegistry::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< org::apache::http::cookie::CookieSpec >
	>(get_jobject(), a0, a1);
}

local_ref< org::apache::http::cookie::CookieSpec > org::apache::http::cookie::CookieSpecRegistry::getCookieSpec(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::apache::http::cookie::CookieSpecRegistry::J2CPP_CLASS_NAME,
		org::apache::http::cookie::CookieSpecRegistry::J2CPP_METHOD_NAME(4),
		org::apache::http::cookie::CookieSpecRegistry::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< org::apache::http::cookie::CookieSpec >
	>(get_jobject(), a0);
}

local_ref< java::util::List > org::apache::http::cookie::CookieSpecRegistry::getSpecNames()
{
	return call_method<
		org::apache::http::cookie::CookieSpecRegistry::J2CPP_CLASS_NAME,
		org::apache::http::cookie::CookieSpecRegistry::J2CPP_METHOD_NAME(5),
		org::apache::http::cookie::CookieSpecRegistry::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::util::List >
	>(get_jobject());
}

void org::apache::http::cookie::CookieSpecRegistry::setItems(local_ref< java::util::Map > const &a0)
{
	return call_method<
		org::apache::http::cookie::CookieSpecRegistry::J2CPP_CLASS_NAME,
		org::apache::http::cookie::CookieSpecRegistry::J2CPP_METHOD_NAME(6),
		org::apache::http::cookie::CookieSpecRegistry::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(org::apache::http::cookie::CookieSpecRegistry,"org/apache/http/cookie/CookieSpecRegistry")
J2CPP_DEFINE_METHOD(org::apache::http::cookie::CookieSpecRegistry,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::cookie::CookieSpecRegistry,1,"register","(Ljava/lang/String;Lorg/apache/http/cookie/CookieSpecFactory;)V")
J2CPP_DEFINE_METHOD(org::apache::http::cookie::CookieSpecRegistry,2,"unregister","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::apache::http::cookie::CookieSpecRegistry,3,"getCookieSpec","(Ljava/lang/String;Lorg/apache/http/params/HttpParams;)Lorg/apache/http/cookie/CookieSpec;")
J2CPP_DEFINE_METHOD(org::apache::http::cookie::CookieSpecRegistry,4,"getCookieSpec","(Ljava/lang/String;)Lorg/apache/http/cookie/CookieSpec;")
J2CPP_DEFINE_METHOD(org::apache::http::cookie::CookieSpecRegistry,5,"getSpecNames","()Ljava/util/List;")
J2CPP_DEFINE_METHOD(org::apache::http::cookie::CookieSpecRegistry,6,"setItems","(Ljava/util/Map;)V")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_COOKIE_COOKIESPECREGISTRY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
