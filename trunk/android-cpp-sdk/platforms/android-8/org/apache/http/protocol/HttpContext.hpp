/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.protocol.HttpContext
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_PROTOCOL_HTTPCONTEXT_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_PROTOCOL_HTTPCONTEXT_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace protocol {

	class HttpContext;
	class HttpContext
		: public object<HttpContext>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_FIELD(0)

		explicit HttpContext(jobject jobj)
		: object<HttpContext>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		local_ref< java::lang::Object > getAttribute(local_ref< java::lang::String >  const&);
		void setAttribute(local_ref< java::lang::String >  const&, local_ref< java::lang::Object >  const&);
		local_ref< java::lang::Object > removeAttribute(local_ref< java::lang::String >  const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::String > > RESERVED_PREFIX;
	}; //class HttpContext

} //namespace protocol
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_PROTOCOL_HTTPCONTEXT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_PROTOCOL_HTTPCONTEXT_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_PROTOCOL_HTTPCONTEXT_HPP_IMPL

namespace j2cpp {



org::apache::http::protocol::HttpContext::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

local_ref< java::lang::Object > org::apache::http::protocol::HttpContext::getAttribute(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::apache::http::protocol::HttpContext::J2CPP_CLASS_NAME,
		org::apache::http::protocol::HttpContext::J2CPP_METHOD_NAME(0),
		org::apache::http::protocol::HttpContext::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< java::lang::Object >
	>(get_jobject(), a0);
}

void org::apache::http::protocol::HttpContext::setAttribute(local_ref< java::lang::String > const &a0, local_ref< java::lang::Object > const &a1)
{
	return call_method<
		org::apache::http::protocol::HttpContext::J2CPP_CLASS_NAME,
		org::apache::http::protocol::HttpContext::J2CPP_METHOD_NAME(1),
		org::apache::http::protocol::HttpContext::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject(), a0, a1);
}

local_ref< java::lang::Object > org::apache::http::protocol::HttpContext::removeAttribute(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::apache::http::protocol::HttpContext::J2CPP_CLASS_NAME,
		org::apache::http::protocol::HttpContext::J2CPP_METHOD_NAME(2),
		org::apache::http::protocol::HttpContext::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::lang::Object >
	>(get_jobject(), a0);
}


static_field<
	org::apache::http::protocol::HttpContext::J2CPP_CLASS_NAME,
	org::apache::http::protocol::HttpContext::J2CPP_FIELD_NAME(0),
	org::apache::http::protocol::HttpContext::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::lang::String >
> org::apache::http::protocol::HttpContext::RESERVED_PREFIX;


J2CPP_DEFINE_CLASS(org::apache::http::protocol::HttpContext,"org/apache/http/protocol/HttpContext")
J2CPP_DEFINE_METHOD(org::apache::http::protocol::HttpContext,0,"getAttribute","(Ljava/lang/String;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(org::apache::http::protocol::HttpContext,1,"setAttribute","(Ljava/lang/String;Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(org::apache::http::protocol::HttpContext,2,"removeAttribute","(Ljava/lang/String;)Ljava/lang/Object;")
J2CPP_DEFINE_FIELD(org::apache::http::protocol::HttpContext,0,"RESERVED_PREFIX","Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_PROTOCOL_HTTPCONTEXT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
