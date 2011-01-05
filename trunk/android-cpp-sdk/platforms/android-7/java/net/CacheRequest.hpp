/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.net.CacheRequest
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NET_CACHEREQUEST_HPP_DECL
#define J2CPP_JAVA_NET_CACHEREQUEST_HPP_DECL


namespace j2cpp { namespace java { namespace io { class OutputStream; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/io/OutputStream.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace java { namespace net {

	class CacheRequest;
	class CacheRequest
		: public object<CacheRequest>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		explicit CacheRequest(jobject jobj)
		: object<CacheRequest>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		CacheRequest();
		void abort();
		local_ref< java::io::OutputStream > getBody();
	}; //class CacheRequest

} //namespace net
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_NET_CACHEREQUEST_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NET_CACHEREQUEST_HPP_IMPL
#define J2CPP_JAVA_NET_CACHEREQUEST_HPP_IMPL

namespace j2cpp {



java::net::CacheRequest::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


java::net::CacheRequest::CacheRequest()
: object<java::net::CacheRequest>(
	call_new_object<
		java::net::CacheRequest::J2CPP_CLASS_NAME,
		java::net::CacheRequest::J2CPP_METHOD_NAME(0),
		java::net::CacheRequest::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}


void java::net::CacheRequest::abort()
{
	return call_method<
		java::net::CacheRequest::J2CPP_CLASS_NAME,
		java::net::CacheRequest::J2CPP_METHOD_NAME(1),
		java::net::CacheRequest::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject());
}

local_ref< java::io::OutputStream > java::net::CacheRequest::getBody()
{
	return call_method<
		java::net::CacheRequest::J2CPP_CLASS_NAME,
		java::net::CacheRequest::J2CPP_METHOD_NAME(2),
		java::net::CacheRequest::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::io::OutputStream >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(java::net::CacheRequest,"java/net/CacheRequest")
J2CPP_DEFINE_METHOD(java::net::CacheRequest,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::net::CacheRequest,1,"abort","()V")
J2CPP_DEFINE_METHOD(java::net::CacheRequest,2,"getBody","()Ljava/io/OutputStream;")

} //namespace j2cpp

#endif //J2CPP_JAVA_NET_CACHEREQUEST_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
