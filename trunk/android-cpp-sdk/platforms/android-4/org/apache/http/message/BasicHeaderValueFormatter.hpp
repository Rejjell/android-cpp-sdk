/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.message.BasicHeaderValueFormatter
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_MESSAGE_BASICHEADERVALUEFORMATTER_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_MESSAGE_BASICHEADERVALUEFORMATTER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class NameValuePair; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace util { class CharArrayBuffer; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HeaderElement; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace message { class HeaderValueFormatter; } } } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <org/apache/http/HeaderElement.hpp>
#include <org/apache/http/NameValuePair.hpp>
#include <org/apache/http/message/HeaderValueFormatter.hpp>
#include <org/apache/http/util/CharArrayBuffer.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace message {

	class BasicHeaderValueFormatter;
	class BasicHeaderValueFormatter
		: public object<BasicHeaderValueFormatter>
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
		J2CPP_DECLARE_METHOD(15)
		J2CPP_DECLARE_METHOD(16)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)

		explicit BasicHeaderValueFormatter(jobject jobj)
		: object<BasicHeaderValueFormatter>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<org::apache::http::message::HeaderValueFormatter>() const;


		BasicHeaderValueFormatter();
		static local_ref< java::lang::String > formatElements(local_ref< array< local_ref< org::apache::http::HeaderElement >, 1> >  const&, jboolean, local_ref< org::apache::http::message::HeaderValueFormatter >  const&);
		local_ref< org::apache::http::util::CharArrayBuffer > formatElements(local_ref< org::apache::http::util::CharArrayBuffer >  const&, local_ref< array< local_ref< org::apache::http::HeaderElement >, 1> >  const&, jboolean);
		static local_ref< java::lang::String > formatHeaderElement(local_ref< org::apache::http::HeaderElement >  const&, jboolean, local_ref< org::apache::http::message::HeaderValueFormatter >  const&);
		local_ref< org::apache::http::util::CharArrayBuffer > formatHeaderElement(local_ref< org::apache::http::util::CharArrayBuffer >  const&, local_ref< org::apache::http::HeaderElement >  const&, jboolean);
		static local_ref< java::lang::String > formatParameters(local_ref< array< local_ref< org::apache::http::NameValuePair >, 1> >  const&, jboolean, local_ref< org::apache::http::message::HeaderValueFormatter >  const&);
		local_ref< org::apache::http::util::CharArrayBuffer > formatParameters(local_ref< org::apache::http::util::CharArrayBuffer >  const&, local_ref< array< local_ref< org::apache::http::NameValuePair >, 1> >  const&, jboolean);
		static local_ref< java::lang::String > formatNameValuePair(local_ref< org::apache::http::NameValuePair >  const&, jboolean, local_ref< org::apache::http::message::HeaderValueFormatter >  const&);
		local_ref< org::apache::http::util::CharArrayBuffer > formatNameValuePair(local_ref< org::apache::http::util::CharArrayBuffer >  const&, local_ref< org::apache::http::NameValuePair >  const&, jboolean);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< org::apache::http::message::BasicHeaderValueFormatter > > DEFAULT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< java::lang::String > > SEPARATORS;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< java::lang::String > > UNSAFE_CHARS;
	}; //class BasicHeaderValueFormatter

} //namespace message
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_MESSAGE_BASICHEADERVALUEFORMATTER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_MESSAGE_BASICHEADERVALUEFORMATTER_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_MESSAGE_BASICHEADERVALUEFORMATTER_HPP_IMPL

namespace j2cpp {



org::apache::http::message::BasicHeaderValueFormatter::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

org::apache::http::message::BasicHeaderValueFormatter::operator local_ref<org::apache::http::message::HeaderValueFormatter>() const
{
	return local_ref<org::apache::http::message::HeaderValueFormatter>(get_jobject());
}


org::apache::http::message::BasicHeaderValueFormatter::BasicHeaderValueFormatter()
: object<org::apache::http::message::BasicHeaderValueFormatter>(
	call_new_object<
		org::apache::http::message::BasicHeaderValueFormatter::J2CPP_CLASS_NAME,
		org::apache::http::message::BasicHeaderValueFormatter::J2CPP_METHOD_NAME(0),
		org::apache::http::message::BasicHeaderValueFormatter::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}


local_ref< java::lang::String > org::apache::http::message::BasicHeaderValueFormatter::formatElements(local_ref< array< local_ref< org::apache::http::HeaderElement >, 1> > const &a0, jboolean a1, local_ref< org::apache::http::message::HeaderValueFormatter > const &a2)
{
	return call_static_method<
		org::apache::http::message::BasicHeaderValueFormatter::J2CPP_CLASS_NAME,
		org::apache::http::message::BasicHeaderValueFormatter::J2CPP_METHOD_NAME(1),
		org::apache::http::message::BasicHeaderValueFormatter::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::String >
	>(a0, a1, a2);
}

local_ref< org::apache::http::util::CharArrayBuffer > org::apache::http::message::BasicHeaderValueFormatter::formatElements(local_ref< org::apache::http::util::CharArrayBuffer > const &a0, local_ref< array< local_ref< org::apache::http::HeaderElement >, 1> > const &a1, jboolean a2)
{
	return call_method<
		org::apache::http::message::BasicHeaderValueFormatter::J2CPP_CLASS_NAME,
		org::apache::http::message::BasicHeaderValueFormatter::J2CPP_METHOD_NAME(2),
		org::apache::http::message::BasicHeaderValueFormatter::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< org::apache::http::util::CharArrayBuffer >
	>(get_jobject(), a0, a1, a2);
}


local_ref< java::lang::String > org::apache::http::message::BasicHeaderValueFormatter::formatHeaderElement(local_ref< org::apache::http::HeaderElement > const &a0, jboolean a1, local_ref< org::apache::http::message::HeaderValueFormatter > const &a2)
{
	return call_static_method<
		org::apache::http::message::BasicHeaderValueFormatter::J2CPP_CLASS_NAME,
		org::apache::http::message::BasicHeaderValueFormatter::J2CPP_METHOD_NAME(4),
		org::apache::http::message::BasicHeaderValueFormatter::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::lang::String >
	>(a0, a1, a2);
}

local_ref< org::apache::http::util::CharArrayBuffer > org::apache::http::message::BasicHeaderValueFormatter::formatHeaderElement(local_ref< org::apache::http::util::CharArrayBuffer > const &a0, local_ref< org::apache::http::HeaderElement > const &a1, jboolean a2)
{
	return call_method<
		org::apache::http::message::BasicHeaderValueFormatter::J2CPP_CLASS_NAME,
		org::apache::http::message::BasicHeaderValueFormatter::J2CPP_METHOD_NAME(5),
		org::apache::http::message::BasicHeaderValueFormatter::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< org::apache::http::util::CharArrayBuffer >
	>(get_jobject(), a0, a1, a2);
}


local_ref< java::lang::String > org::apache::http::message::BasicHeaderValueFormatter::formatParameters(local_ref< array< local_ref< org::apache::http::NameValuePair >, 1> > const &a0, jboolean a1, local_ref< org::apache::http::message::HeaderValueFormatter > const &a2)
{
	return call_static_method<
		org::apache::http::message::BasicHeaderValueFormatter::J2CPP_CLASS_NAME,
		org::apache::http::message::BasicHeaderValueFormatter::J2CPP_METHOD_NAME(7),
		org::apache::http::message::BasicHeaderValueFormatter::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< java::lang::String >
	>(a0, a1, a2);
}

local_ref< org::apache::http::util::CharArrayBuffer > org::apache::http::message::BasicHeaderValueFormatter::formatParameters(local_ref< org::apache::http::util::CharArrayBuffer > const &a0, local_ref< array< local_ref< org::apache::http::NameValuePair >, 1> > const &a1, jboolean a2)
{
	return call_method<
		org::apache::http::message::BasicHeaderValueFormatter::J2CPP_CLASS_NAME,
		org::apache::http::message::BasicHeaderValueFormatter::J2CPP_METHOD_NAME(8),
		org::apache::http::message::BasicHeaderValueFormatter::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< org::apache::http::util::CharArrayBuffer >
	>(get_jobject(), a0, a1, a2);
}


local_ref< java::lang::String > org::apache::http::message::BasicHeaderValueFormatter::formatNameValuePair(local_ref< org::apache::http::NameValuePair > const &a0, jboolean a1, local_ref< org::apache::http::message::HeaderValueFormatter > const &a2)
{
	return call_static_method<
		org::apache::http::message::BasicHeaderValueFormatter::J2CPP_CLASS_NAME,
		org::apache::http::message::BasicHeaderValueFormatter::J2CPP_METHOD_NAME(10),
		org::apache::http::message::BasicHeaderValueFormatter::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< java::lang::String >
	>(a0, a1, a2);
}

local_ref< org::apache::http::util::CharArrayBuffer > org::apache::http::message::BasicHeaderValueFormatter::formatNameValuePair(local_ref< org::apache::http::util::CharArrayBuffer > const &a0, local_ref< org::apache::http::NameValuePair > const &a1, jboolean a2)
{
	return call_method<
		org::apache::http::message::BasicHeaderValueFormatter::J2CPP_CLASS_NAME,
		org::apache::http::message::BasicHeaderValueFormatter::J2CPP_METHOD_NAME(11),
		org::apache::http::message::BasicHeaderValueFormatter::J2CPP_METHOD_SIGNATURE(11), 
		local_ref< org::apache::http::util::CharArrayBuffer >
	>(get_jobject(), a0, a1, a2);
}







static_field<
	org::apache::http::message::BasicHeaderValueFormatter::J2CPP_CLASS_NAME,
	org::apache::http::message::BasicHeaderValueFormatter::J2CPP_FIELD_NAME(0),
	org::apache::http::message::BasicHeaderValueFormatter::J2CPP_FIELD_SIGNATURE(0),
	local_ref< org::apache::http::message::BasicHeaderValueFormatter >
> org::apache::http::message::BasicHeaderValueFormatter::DEFAULT;

static_field<
	org::apache::http::message::BasicHeaderValueFormatter::J2CPP_CLASS_NAME,
	org::apache::http::message::BasicHeaderValueFormatter::J2CPP_FIELD_NAME(1),
	org::apache::http::message::BasicHeaderValueFormatter::J2CPP_FIELD_SIGNATURE(1),
	local_ref< java::lang::String >
> org::apache::http::message::BasicHeaderValueFormatter::SEPARATORS;

static_field<
	org::apache::http::message::BasicHeaderValueFormatter::J2CPP_CLASS_NAME,
	org::apache::http::message::BasicHeaderValueFormatter::J2CPP_FIELD_NAME(2),
	org::apache::http::message::BasicHeaderValueFormatter::J2CPP_FIELD_SIGNATURE(2),
	local_ref< java::lang::String >
> org::apache::http::message::BasicHeaderValueFormatter::UNSAFE_CHARS;


J2CPP_DEFINE_CLASS(org::apache::http::message::BasicHeaderValueFormatter,"org/apache/http/message/BasicHeaderValueFormatter")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicHeaderValueFormatter,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicHeaderValueFormatter,1,"formatElements","([org.apache.http.HeaderElementZLorg/apache/http/message/HeaderValueFormatter;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicHeaderValueFormatter,2,"formatElements","(Lorg/apache/http/util/CharArrayBuffer;[org.apache.http.HeaderElementZ)Lorg/apache/http/util/CharArrayBuffer;")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicHeaderValueFormatter,3,"estimateElementsLen","([org.apache.http.HeaderElement)I")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicHeaderValueFormatter,4,"formatHeaderElement","(Lorg/apache/http/HeaderElement;ZLorg/apache/http/message/HeaderValueFormatter;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicHeaderValueFormatter,5,"formatHeaderElement","(Lorg/apache/http/util/CharArrayBuffer;Lorg/apache/http/HeaderElement;Z)Lorg/apache/http/util/CharArrayBuffer;")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicHeaderValueFormatter,6,"estimateHeaderElementLen","(Lorg/apache/http/HeaderElement;)I")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicHeaderValueFormatter,7,"formatParameters","([org.apache.http.NameValuePairZLorg/apache/http/message/HeaderValueFormatter;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicHeaderValueFormatter,8,"formatParameters","(Lorg/apache/http/util/CharArrayBuffer;[org.apache.http.NameValuePairZ)Lorg/apache/http/util/CharArrayBuffer;")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicHeaderValueFormatter,9,"estimateParametersLen","([org.apache.http.NameValuePair)I")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicHeaderValueFormatter,10,"formatNameValuePair","(Lorg/apache/http/NameValuePair;ZLorg/apache/http/message/HeaderValueFormatter;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicHeaderValueFormatter,11,"formatNameValuePair","(Lorg/apache/http/util/CharArrayBuffer;Lorg/apache/http/NameValuePair;Z)Lorg/apache/http/util/CharArrayBuffer;")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicHeaderValueFormatter,12,"estimateNameValuePairLen","(Lorg/apache/http/NameValuePair;)I")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicHeaderValueFormatter,13,"doFormatValue","(Lorg/apache/http/util/CharArrayBuffer;Ljava/lang/String;Z)V")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicHeaderValueFormatter,14,"isSeparator","(C)Z")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicHeaderValueFormatter,15,"isUnsafe","(C)Z")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicHeaderValueFormatter,16,"<clinit>","()V")
J2CPP_DEFINE_FIELD(org::apache::http::message::BasicHeaderValueFormatter,0,"DEFAULT","Lorg/apache/http/message/BasicHeaderValueFormatter;")
J2CPP_DEFINE_FIELD(org::apache::http::message::BasicHeaderValueFormatter,1,"SEPARATORS","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(org::apache::http::message::BasicHeaderValueFormatter,2,"UNSAFE_CHARS","Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_MESSAGE_BASICHEADERVALUEFORMATTER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
