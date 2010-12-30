/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.protocol.ExecutionContext
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_PROTOCOL_EXECUTIONCONTEXT_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_PROTOCOL_EXECUTIONCONTEXT_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace protocol {

	class ExecutionContext;
	class ExecutionContext
		: public object<ExecutionContext>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)

		explicit ExecutionContext(jobject jobj)
		: object<ExecutionContext>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::String > > HTTP_CONNECTION;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< java::lang::String > > HTTP_REQUEST;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< java::lang::String > > HTTP_RESPONSE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), local_ref< java::lang::String > > HTTP_TARGET_HOST;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), local_ref< java::lang::String > > HTTP_PROXY_HOST;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), local_ref< java::lang::String > > HTTP_REQ_SENT;
	}; //class ExecutionContext

} //namespace protocol
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_PROTOCOL_EXECUTIONCONTEXT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_PROTOCOL_EXECUTIONCONTEXT_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_PROTOCOL_EXECUTIONCONTEXT_HPP_IMPL

namespace j2cpp {



org::apache::http::protocol::ExecutionContext::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

static_field<
	org::apache::http::protocol::ExecutionContext::J2CPP_CLASS_NAME,
	org::apache::http::protocol::ExecutionContext::J2CPP_FIELD_NAME(0),
	org::apache::http::protocol::ExecutionContext::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::lang::String >
> org::apache::http::protocol::ExecutionContext::HTTP_CONNECTION;

static_field<
	org::apache::http::protocol::ExecutionContext::J2CPP_CLASS_NAME,
	org::apache::http::protocol::ExecutionContext::J2CPP_FIELD_NAME(1),
	org::apache::http::protocol::ExecutionContext::J2CPP_FIELD_SIGNATURE(1),
	local_ref< java::lang::String >
> org::apache::http::protocol::ExecutionContext::HTTP_REQUEST;

static_field<
	org::apache::http::protocol::ExecutionContext::J2CPP_CLASS_NAME,
	org::apache::http::protocol::ExecutionContext::J2CPP_FIELD_NAME(2),
	org::apache::http::protocol::ExecutionContext::J2CPP_FIELD_SIGNATURE(2),
	local_ref< java::lang::String >
> org::apache::http::protocol::ExecutionContext::HTTP_RESPONSE;

static_field<
	org::apache::http::protocol::ExecutionContext::J2CPP_CLASS_NAME,
	org::apache::http::protocol::ExecutionContext::J2CPP_FIELD_NAME(3),
	org::apache::http::protocol::ExecutionContext::J2CPP_FIELD_SIGNATURE(3),
	local_ref< java::lang::String >
> org::apache::http::protocol::ExecutionContext::HTTP_TARGET_HOST;

static_field<
	org::apache::http::protocol::ExecutionContext::J2CPP_CLASS_NAME,
	org::apache::http::protocol::ExecutionContext::J2CPP_FIELD_NAME(4),
	org::apache::http::protocol::ExecutionContext::J2CPP_FIELD_SIGNATURE(4),
	local_ref< java::lang::String >
> org::apache::http::protocol::ExecutionContext::HTTP_PROXY_HOST;

static_field<
	org::apache::http::protocol::ExecutionContext::J2CPP_CLASS_NAME,
	org::apache::http::protocol::ExecutionContext::J2CPP_FIELD_NAME(5),
	org::apache::http::protocol::ExecutionContext::J2CPP_FIELD_SIGNATURE(5),
	local_ref< java::lang::String >
> org::apache::http::protocol::ExecutionContext::HTTP_REQ_SENT;


J2CPP_DEFINE_CLASS(org::apache::http::protocol::ExecutionContext,"org/apache/http/protocol/ExecutionContext")
J2CPP_DEFINE_FIELD(org::apache::http::protocol::ExecutionContext,0,"HTTP_CONNECTION","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(org::apache::http::protocol::ExecutionContext,1,"HTTP_REQUEST","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(org::apache::http::protocol::ExecutionContext,2,"HTTP_RESPONSE","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(org::apache::http::protocol::ExecutionContext,3,"HTTP_TARGET_HOST","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(org::apache::http::protocol::ExecutionContext,4,"HTTP_PROXY_HOST","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(org::apache::http::protocol::ExecutionContext,5,"HTTP_REQ_SENT","Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_PROTOCOL_EXECUTIONCONTEXT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
