/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.params.AbstractHttpParams
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_PARAMS_ABSTRACTHTTPPARAMS_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_PARAMS_ABSTRACTHTTPPARAMS_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <org/apache/http/params/HttpParams.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace params {

	class AbstractHttpParams;
	class AbstractHttpParams
		: public object<AbstractHttpParams>
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

		explicit AbstractHttpParams(jobject jobj)
		: object<AbstractHttpParams>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<org::apache::http::params::HttpParams>() const;


		jlong getLongParameter(local_ref< java::lang::String >  const&, jlong);
		local_ref< org::apache::http::params::HttpParams > setLongParameter(local_ref< java::lang::String >  const&, jlong);
		jint getIntParameter(local_ref< java::lang::String >  const&, jint);
		local_ref< org::apache::http::params::HttpParams > setIntParameter(local_ref< java::lang::String >  const&, jint);
		jdouble getDoubleParameter(local_ref< java::lang::String >  const&, jdouble);
		local_ref< org::apache::http::params::HttpParams > setDoubleParameter(local_ref< java::lang::String >  const&, jdouble);
		jboolean getBooleanParameter(local_ref< java::lang::String >  const&, jboolean);
		local_ref< org::apache::http::params::HttpParams > setBooleanParameter(local_ref< java::lang::String >  const&, jboolean);
		jboolean isParameterTrue(local_ref< java::lang::String >  const&);
		jboolean isParameterFalse(local_ref< java::lang::String >  const&);
	}; //class AbstractHttpParams

} //namespace params
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_PARAMS_ABSTRACTHTTPPARAMS_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_PARAMS_ABSTRACTHTTPPARAMS_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_PARAMS_ABSTRACTHTTPPARAMS_HPP_IMPL

namespace j2cpp {



org::apache::http::params::AbstractHttpParams::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

org::apache::http::params::AbstractHttpParams::operator local_ref<org::apache::http::params::HttpParams>() const
{
	return local_ref<org::apache::http::params::HttpParams>(get_jobject());
}


jlong org::apache::http::params::AbstractHttpParams::getLongParameter(local_ref< java::lang::String > const &a0, jlong a1)
{
	return call_method<
		org::apache::http::params::AbstractHttpParams::J2CPP_CLASS_NAME,
		org::apache::http::params::AbstractHttpParams::J2CPP_METHOD_NAME(1),
		org::apache::http::params::AbstractHttpParams::J2CPP_METHOD_SIGNATURE(1), 
		jlong
	>(get_jobject(), a0, a1);
}

local_ref< org::apache::http::params::HttpParams > org::apache::http::params::AbstractHttpParams::setLongParameter(local_ref< java::lang::String > const &a0, jlong a1)
{
	return call_method<
		org::apache::http::params::AbstractHttpParams::J2CPP_CLASS_NAME,
		org::apache::http::params::AbstractHttpParams::J2CPP_METHOD_NAME(2),
		org::apache::http::params::AbstractHttpParams::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< org::apache::http::params::HttpParams >
	>(get_jobject(), a0, a1);
}

jint org::apache::http::params::AbstractHttpParams::getIntParameter(local_ref< java::lang::String > const &a0, jint a1)
{
	return call_method<
		org::apache::http::params::AbstractHttpParams::J2CPP_CLASS_NAME,
		org::apache::http::params::AbstractHttpParams::J2CPP_METHOD_NAME(3),
		org::apache::http::params::AbstractHttpParams::J2CPP_METHOD_SIGNATURE(3), 
		jint
	>(get_jobject(), a0, a1);
}

local_ref< org::apache::http::params::HttpParams > org::apache::http::params::AbstractHttpParams::setIntParameter(local_ref< java::lang::String > const &a0, jint a1)
{
	return call_method<
		org::apache::http::params::AbstractHttpParams::J2CPP_CLASS_NAME,
		org::apache::http::params::AbstractHttpParams::J2CPP_METHOD_NAME(4),
		org::apache::http::params::AbstractHttpParams::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< org::apache::http::params::HttpParams >
	>(get_jobject(), a0, a1);
}

jdouble org::apache::http::params::AbstractHttpParams::getDoubleParameter(local_ref< java::lang::String > const &a0, jdouble a1)
{
	return call_method<
		org::apache::http::params::AbstractHttpParams::J2CPP_CLASS_NAME,
		org::apache::http::params::AbstractHttpParams::J2CPP_METHOD_NAME(5),
		org::apache::http::params::AbstractHttpParams::J2CPP_METHOD_SIGNATURE(5), 
		jdouble
	>(get_jobject(), a0, a1);
}

local_ref< org::apache::http::params::HttpParams > org::apache::http::params::AbstractHttpParams::setDoubleParameter(local_ref< java::lang::String > const &a0, jdouble a1)
{
	return call_method<
		org::apache::http::params::AbstractHttpParams::J2CPP_CLASS_NAME,
		org::apache::http::params::AbstractHttpParams::J2CPP_METHOD_NAME(6),
		org::apache::http::params::AbstractHttpParams::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< org::apache::http::params::HttpParams >
	>(get_jobject(), a0, a1);
}

jboolean org::apache::http::params::AbstractHttpParams::getBooleanParameter(local_ref< java::lang::String > const &a0, jboolean a1)
{
	return call_method<
		org::apache::http::params::AbstractHttpParams::J2CPP_CLASS_NAME,
		org::apache::http::params::AbstractHttpParams::J2CPP_METHOD_NAME(7),
		org::apache::http::params::AbstractHttpParams::J2CPP_METHOD_SIGNATURE(7), 
		jboolean
	>(get_jobject(), a0, a1);
}

local_ref< org::apache::http::params::HttpParams > org::apache::http::params::AbstractHttpParams::setBooleanParameter(local_ref< java::lang::String > const &a0, jboolean a1)
{
	return call_method<
		org::apache::http::params::AbstractHttpParams::J2CPP_CLASS_NAME,
		org::apache::http::params::AbstractHttpParams::J2CPP_METHOD_NAME(8),
		org::apache::http::params::AbstractHttpParams::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< org::apache::http::params::HttpParams >
	>(get_jobject(), a0, a1);
}

jboolean org::apache::http::params::AbstractHttpParams::isParameterTrue(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::apache::http::params::AbstractHttpParams::J2CPP_CLASS_NAME,
		org::apache::http::params::AbstractHttpParams::J2CPP_METHOD_NAME(9),
		org::apache::http::params::AbstractHttpParams::J2CPP_METHOD_SIGNATURE(9), 
		jboolean
	>(get_jobject(), a0);
}

jboolean org::apache::http::params::AbstractHttpParams::isParameterFalse(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::apache::http::params::AbstractHttpParams::J2CPP_CLASS_NAME,
		org::apache::http::params::AbstractHttpParams::J2CPP_METHOD_NAME(10),
		org::apache::http::params::AbstractHttpParams::J2CPP_METHOD_SIGNATURE(10), 
		jboolean
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(org::apache::http::params::AbstractHttpParams,"org/apache/http/params/AbstractHttpParams")
J2CPP_DEFINE_METHOD(org::apache::http::params::AbstractHttpParams,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::params::AbstractHttpParams,1,"getLongParameter","(Ljava/lang/String;J)J")
J2CPP_DEFINE_METHOD(org::apache::http::params::AbstractHttpParams,2,"setLongParameter","(Ljava/lang/String;J)Lorg/apache/http/params/HttpParams;")
J2CPP_DEFINE_METHOD(org::apache::http::params::AbstractHttpParams,3,"getIntParameter","(Ljava/lang/String;I)I")
J2CPP_DEFINE_METHOD(org::apache::http::params::AbstractHttpParams,4,"setIntParameter","(Ljava/lang/String;I)Lorg/apache/http/params/HttpParams;")
J2CPP_DEFINE_METHOD(org::apache::http::params::AbstractHttpParams,5,"getDoubleParameter","(Ljava/lang/String;D)D")
J2CPP_DEFINE_METHOD(org::apache::http::params::AbstractHttpParams,6,"setDoubleParameter","(Ljava/lang/String;D)Lorg/apache/http/params/HttpParams;")
J2CPP_DEFINE_METHOD(org::apache::http::params::AbstractHttpParams,7,"getBooleanParameter","(Ljava/lang/String;Z)Z")
J2CPP_DEFINE_METHOD(org::apache::http::params::AbstractHttpParams,8,"setBooleanParameter","(Ljava/lang/String;Z)Lorg/apache/http/params/HttpParams;")
J2CPP_DEFINE_METHOD(org::apache::http::params::AbstractHttpParams,9,"isParameterTrue","(Ljava/lang/String;)Z")
J2CPP_DEFINE_METHOD(org::apache::http::params::AbstractHttpParams,10,"isParameterFalse","(Ljava/lang/String;)Z")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_PARAMS_ABSTRACTHTTPPARAMS_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
