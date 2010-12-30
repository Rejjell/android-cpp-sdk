/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.impl.cookie.BrowserCompatSpec
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_COOKIE_BROWSERCOMPATSPEC_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IMPL_COOKIE_BROWSERCOMPATSPEC_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace util { class List; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace cookie { class CookieOrigin; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class Header; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace impl { namespace cookie { class CookieSpecBase; } } } } } }


#include <java/lang/String.hpp>
#include <java/util/List.hpp>
#include <org/apache/http/Header.hpp>
#include <org/apache/http/cookie/CookieOrigin.hpp>
#include <org/apache/http/impl/cookie/CookieSpecBase.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace impl { namespace cookie {

	class BrowserCompatSpec;
	class BrowserCompatSpec
		: public object<BrowserCompatSpec>
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
		J2CPP_DECLARE_FIELD(0)

		explicit BrowserCompatSpec(jobject jobj)
		: object<BrowserCompatSpec>(jobj)
		{
		}

		operator local_ref<org::apache::http::impl::cookie::CookieSpecBase>() const;


		BrowserCompatSpec(local_ref< array< local_ref< java::lang::String >, 1> > const&);
		BrowserCompatSpec();
		local_ref< java::util::List > parse(local_ref< org::apache::http::Header >  const&, local_ref< org::apache::http::cookie::CookieOrigin >  const&);
		local_ref< java::util::List > formatCookies(local_ref< java::util::List >  const&);
		jint getVersion();
		local_ref< org::apache::http::Header > getVersionHeader();

	}; //class BrowserCompatSpec

} //namespace cookie
} //namespace impl
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_COOKIE_BROWSERCOMPATSPEC_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_COOKIE_BROWSERCOMPATSPEC_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IMPL_COOKIE_BROWSERCOMPATSPEC_HPP_IMPL

namespace j2cpp {



org::apache::http::impl::cookie::BrowserCompatSpec::operator local_ref<org::apache::http::impl::cookie::CookieSpecBase>() const
{
	return local_ref<org::apache::http::impl::cookie::CookieSpecBase>(get_jobject());
}


org::apache::http::impl::cookie::BrowserCompatSpec::BrowserCompatSpec(local_ref< array< local_ref< java::lang::String >, 1> > const &a0)
: object<org::apache::http::impl::cookie::BrowserCompatSpec>(
	call_new_object<
		org::apache::http::impl::cookie::BrowserCompatSpec::J2CPP_CLASS_NAME,
		org::apache::http::impl::cookie::BrowserCompatSpec::J2CPP_METHOD_NAME(0),
		org::apache::http::impl::cookie::BrowserCompatSpec::J2CPP_METHOD_SIGNATURE(0)>
	(a0)
)
{
}



org::apache::http::impl::cookie::BrowserCompatSpec::BrowserCompatSpec()
: object<org::apache::http::impl::cookie::BrowserCompatSpec>(
	call_new_object<
		org::apache::http::impl::cookie::BrowserCompatSpec::J2CPP_CLASS_NAME,
		org::apache::http::impl::cookie::BrowserCompatSpec::J2CPP_METHOD_NAME(1),
		org::apache::http::impl::cookie::BrowserCompatSpec::J2CPP_METHOD_SIGNATURE(1)>
	()
)
{
}


local_ref< java::util::List > org::apache::http::impl::cookie::BrowserCompatSpec::parse(local_ref< org::apache::http::Header > const &a0, local_ref< org::apache::http::cookie::CookieOrigin > const &a1)
{
	return call_method<
		org::apache::http::impl::cookie::BrowserCompatSpec::J2CPP_CLASS_NAME,
		org::apache::http::impl::cookie::BrowserCompatSpec::J2CPP_METHOD_NAME(2),
		org::apache::http::impl::cookie::BrowserCompatSpec::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::util::List > >
	(get_jobject(), a0, a1);
}

local_ref< java::util::List > org::apache::http::impl::cookie::BrowserCompatSpec::formatCookies(local_ref< java::util::List > const &a0)
{
	return call_method<
		org::apache::http::impl::cookie::BrowserCompatSpec::J2CPP_CLASS_NAME,
		org::apache::http::impl::cookie::BrowserCompatSpec::J2CPP_METHOD_NAME(3),
		org::apache::http::impl::cookie::BrowserCompatSpec::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::util::List > >
	(get_jobject(), a0);
}

jint org::apache::http::impl::cookie::BrowserCompatSpec::getVersion()
{
	return call_method<
		org::apache::http::impl::cookie::BrowserCompatSpec::J2CPP_CLASS_NAME,
		org::apache::http::impl::cookie::BrowserCompatSpec::J2CPP_METHOD_NAME(4),
		org::apache::http::impl::cookie::BrowserCompatSpec::J2CPP_METHOD_SIGNATURE(4), 
		jint >
	(get_jobject());
}

local_ref< org::apache::http::Header > org::apache::http::impl::cookie::BrowserCompatSpec::getVersionHeader()
{
	return call_method<
		org::apache::http::impl::cookie::BrowserCompatSpec::J2CPP_CLASS_NAME,
		org::apache::http::impl::cookie::BrowserCompatSpec::J2CPP_METHOD_NAME(5),
		org::apache::http::impl::cookie::BrowserCompatSpec::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< org::apache::http::Header > >
	(get_jobject());
}




J2CPP_DEFINE_CLASS(org::apache::http::impl::cookie::BrowserCompatSpec,"org/apache/http/impl/cookie/BrowserCompatSpec")
J2CPP_DEFINE_METHOD(org::apache::http::impl::cookie::BrowserCompatSpec,0,"<init>","([java.lang.String)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::cookie::BrowserCompatSpec,1,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::cookie::BrowserCompatSpec,2,"parse","(Lorg/apache/http/Header;Lorg/apache/http/cookie/CookieOrigin;)Ljava/util/List;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::cookie::BrowserCompatSpec,3,"formatCookies","(Ljava/util/List;)Ljava/util/List;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::cookie::BrowserCompatSpec,4,"getVersion","()I")
J2CPP_DEFINE_METHOD(org::apache::http::impl::cookie::BrowserCompatSpec,5,"getVersionHeader","()Lorg/apache/http/Header;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::cookie::BrowserCompatSpec,6,"<clinit>","()V")
J2CPP_DEFINE_FIELD(org::apache::http::impl::cookie::BrowserCompatSpec,0,"DATE_PATTERNS","[java.lang.String")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_COOKIE_BROWSERCOMPATSPEC_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
