/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.protocol.HttpResponseInterceptorList
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_PROTOCOL_HTTPRESPONSEINTERCEPTORLIST_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_PROTOCOL_HTTPRESPONSEINTERCEPTORLIST_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Class; } } }
namespace j2cpp { namespace java { namespace util { class List; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpResponseInterceptor; } } } }


#include <java/lang/Class.hpp>
#include <java/lang/Object.hpp>
#include <java/util/List.hpp>
#include <org/apache/http/HttpResponseInterceptor.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace protocol {

	class HttpResponseInterceptorList;
	class HttpResponseInterceptorList
		: public object<HttpResponseInterceptorList>
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

		explicit HttpResponseInterceptorList(jobject jobj)
		: object<HttpResponseInterceptorList>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		void addResponseInterceptor(local_ref< org::apache::http::HttpResponseInterceptor >  const&);
		void addResponseInterceptor(local_ref< org::apache::http::HttpResponseInterceptor >  const&, jint);
		jint getResponseInterceptorCount();
		local_ref< org::apache::http::HttpResponseInterceptor > getResponseInterceptor(jint);
		void clearResponseInterceptors();
		void removeResponseInterceptorByClass(local_ref< java::lang::Class >  const&);
		void setInterceptors(local_ref< java::util::List >  const&);
	}; //class HttpResponseInterceptorList

} //namespace protocol
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_PROTOCOL_HTTPRESPONSEINTERCEPTORLIST_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_PROTOCOL_HTTPRESPONSEINTERCEPTORLIST_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_PROTOCOL_HTTPRESPONSEINTERCEPTORLIST_HPP_IMPL

namespace j2cpp {



org::apache::http::protocol::HttpResponseInterceptorList::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void org::apache::http::protocol::HttpResponseInterceptorList::addResponseInterceptor(local_ref< org::apache::http::HttpResponseInterceptor > const &a0)
{
	return call_method<
		org::apache::http::protocol::HttpResponseInterceptorList::J2CPP_CLASS_NAME,
		org::apache::http::protocol::HttpResponseInterceptorList::J2CPP_METHOD_NAME(0),
		org::apache::http::protocol::HttpResponseInterceptorList::J2CPP_METHOD_SIGNATURE(0), 
		void >
	(get_jobject(), a0);
}

void org::apache::http::protocol::HttpResponseInterceptorList::addResponseInterceptor(local_ref< org::apache::http::HttpResponseInterceptor > const &a0, jint a1)
{
	return call_method<
		org::apache::http::protocol::HttpResponseInterceptorList::J2CPP_CLASS_NAME,
		org::apache::http::protocol::HttpResponseInterceptorList::J2CPP_METHOD_NAME(1),
		org::apache::http::protocol::HttpResponseInterceptorList::J2CPP_METHOD_SIGNATURE(1), 
		void >
	(get_jobject(), a0, a1);
}

jint org::apache::http::protocol::HttpResponseInterceptorList::getResponseInterceptorCount()
{
	return call_method<
		org::apache::http::protocol::HttpResponseInterceptorList::J2CPP_CLASS_NAME,
		org::apache::http::protocol::HttpResponseInterceptorList::J2CPP_METHOD_NAME(2),
		org::apache::http::protocol::HttpResponseInterceptorList::J2CPP_METHOD_SIGNATURE(2), 
		jint >
	(get_jobject());
}

local_ref< org::apache::http::HttpResponseInterceptor > org::apache::http::protocol::HttpResponseInterceptorList::getResponseInterceptor(jint a0)
{
	return call_method<
		org::apache::http::protocol::HttpResponseInterceptorList::J2CPP_CLASS_NAME,
		org::apache::http::protocol::HttpResponseInterceptorList::J2CPP_METHOD_NAME(3),
		org::apache::http::protocol::HttpResponseInterceptorList::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< org::apache::http::HttpResponseInterceptor > >
	(get_jobject(), a0);
}

void org::apache::http::protocol::HttpResponseInterceptorList::clearResponseInterceptors()
{
	return call_method<
		org::apache::http::protocol::HttpResponseInterceptorList::J2CPP_CLASS_NAME,
		org::apache::http::protocol::HttpResponseInterceptorList::J2CPP_METHOD_NAME(4),
		org::apache::http::protocol::HttpResponseInterceptorList::J2CPP_METHOD_SIGNATURE(4), 
		void >
	(get_jobject());
}

void org::apache::http::protocol::HttpResponseInterceptorList::removeResponseInterceptorByClass(local_ref< java::lang::Class > const &a0)
{
	return call_method<
		org::apache::http::protocol::HttpResponseInterceptorList::J2CPP_CLASS_NAME,
		org::apache::http::protocol::HttpResponseInterceptorList::J2CPP_METHOD_NAME(5),
		org::apache::http::protocol::HttpResponseInterceptorList::J2CPP_METHOD_SIGNATURE(5), 
		void >
	(get_jobject(), a0);
}

void org::apache::http::protocol::HttpResponseInterceptorList::setInterceptors(local_ref< java::util::List > const &a0)
{
	return call_method<
		org::apache::http::protocol::HttpResponseInterceptorList::J2CPP_CLASS_NAME,
		org::apache::http::protocol::HttpResponseInterceptorList::J2CPP_METHOD_NAME(6),
		org::apache::http::protocol::HttpResponseInterceptorList::J2CPP_METHOD_SIGNATURE(6), 
		void >
	(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(org::apache::http::protocol::HttpResponseInterceptorList,"org/apache/http/protocol/HttpResponseInterceptorList")
J2CPP_DEFINE_METHOD(org::apache::http::protocol::HttpResponseInterceptorList,0,"addResponseInterceptor","(Lorg/apache/http/HttpResponseInterceptor;)V")
J2CPP_DEFINE_METHOD(org::apache::http::protocol::HttpResponseInterceptorList,1,"addResponseInterceptor","(Lorg/apache/http/HttpResponseInterceptor;I)V")
J2CPP_DEFINE_METHOD(org::apache::http::protocol::HttpResponseInterceptorList,2,"getResponseInterceptorCount","()I")
J2CPP_DEFINE_METHOD(org::apache::http::protocol::HttpResponseInterceptorList,3,"getResponseInterceptor","(I)Lorg/apache/http/HttpResponseInterceptor;")
J2CPP_DEFINE_METHOD(org::apache::http::protocol::HttpResponseInterceptorList,4,"clearResponseInterceptors","()V")
J2CPP_DEFINE_METHOD(org::apache::http::protocol::HttpResponseInterceptorList,5,"removeResponseInterceptorByClass","(Ljava/lang/Class;)V")
J2CPP_DEFINE_METHOD(org::apache::http::protocol::HttpResponseInterceptorList,6,"setInterceptors","(Ljava/util/List;)V")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_PROTOCOL_HTTPRESPONSEINTERCEPTORLIST_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
