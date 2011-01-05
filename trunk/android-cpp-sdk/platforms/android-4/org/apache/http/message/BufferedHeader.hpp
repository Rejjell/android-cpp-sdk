/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.message.BufferedHeader
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_MESSAGE_BUFFEREDHEADER_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_MESSAGE_BUFFEREDHEADER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Cloneable; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class Header; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace util { class CharArrayBuffer; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HeaderElement; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class FormattedHeader; } } } }


#include <java/lang/Cloneable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <org/apache/http/FormattedHeader.hpp>
#include <org/apache/http/Header.hpp>
#include <org/apache/http/HeaderElement.hpp>
#include <org/apache/http/util/CharArrayBuffer.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace message {

	class BufferedHeader;
	class BufferedHeader
		: public object<BufferedHeader>
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

		explicit BufferedHeader(jobject jobj)
		: object<BufferedHeader>(jobj)
		{
		}

		operator local_ref<java::lang::Cloneable>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<org::apache::http::Header>() const;
		operator local_ref<org::apache::http::FormattedHeader>() const;


		BufferedHeader(local_ref< org::apache::http::util::CharArrayBuffer > const&);
		local_ref< java::lang::String > getName();
		local_ref< java::lang::String > getValue();
		local_ref< array< local_ref< org::apache::http::HeaderElement >, 1> > getElements();
		jint getValuePos();
		local_ref< org::apache::http::util::CharArrayBuffer > getBuffer();
		local_ref< java::lang::String > toString();
		local_ref< java::lang::Object > clone();
	}; //class BufferedHeader

} //namespace message
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_MESSAGE_BUFFEREDHEADER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_MESSAGE_BUFFEREDHEADER_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_MESSAGE_BUFFEREDHEADER_HPP_IMPL

namespace j2cpp {



org::apache::http::message::BufferedHeader::operator local_ref<java::lang::Cloneable>() const
{
	return local_ref<java::lang::Cloneable>(get_jobject());
}

org::apache::http::message::BufferedHeader::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

org::apache::http::message::BufferedHeader::operator local_ref<org::apache::http::Header>() const
{
	return local_ref<org::apache::http::Header>(get_jobject());
}

org::apache::http::message::BufferedHeader::operator local_ref<org::apache::http::FormattedHeader>() const
{
	return local_ref<org::apache::http::FormattedHeader>(get_jobject());
}


org::apache::http::message::BufferedHeader::BufferedHeader(local_ref< org::apache::http::util::CharArrayBuffer > const &a0)
: object<org::apache::http::message::BufferedHeader>(
	call_new_object<
		org::apache::http::message::BufferedHeader::J2CPP_CLASS_NAME,
		org::apache::http::message::BufferedHeader::J2CPP_METHOD_NAME(0),
		org::apache::http::message::BufferedHeader::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}


local_ref< java::lang::String > org::apache::http::message::BufferedHeader::getName()
{
	return call_method<
		org::apache::http::message::BufferedHeader::J2CPP_CLASS_NAME,
		org::apache::http::message::BufferedHeader::J2CPP_METHOD_NAME(1),
		org::apache::http::message::BufferedHeader::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::lang::String > org::apache::http::message::BufferedHeader::getValue()
{
	return call_method<
		org::apache::http::message::BufferedHeader::J2CPP_CLASS_NAME,
		org::apache::http::message::BufferedHeader::J2CPP_METHOD_NAME(2),
		org::apache::http::message::BufferedHeader::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< array< local_ref< org::apache::http::HeaderElement >, 1> > org::apache::http::message::BufferedHeader::getElements()
{
	return call_method<
		org::apache::http::message::BufferedHeader::J2CPP_CLASS_NAME,
		org::apache::http::message::BufferedHeader::J2CPP_METHOD_NAME(3),
		org::apache::http::message::BufferedHeader::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< array< local_ref< org::apache::http::HeaderElement >, 1> >
	>(get_jobject());
}

jint org::apache::http::message::BufferedHeader::getValuePos()
{
	return call_method<
		org::apache::http::message::BufferedHeader::J2CPP_CLASS_NAME,
		org::apache::http::message::BufferedHeader::J2CPP_METHOD_NAME(4),
		org::apache::http::message::BufferedHeader::J2CPP_METHOD_SIGNATURE(4), 
		jint
	>(get_jobject());
}

local_ref< org::apache::http::util::CharArrayBuffer > org::apache::http::message::BufferedHeader::getBuffer()
{
	return call_method<
		org::apache::http::message::BufferedHeader::J2CPP_CLASS_NAME,
		org::apache::http::message::BufferedHeader::J2CPP_METHOD_NAME(5),
		org::apache::http::message::BufferedHeader::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< org::apache::http::util::CharArrayBuffer >
	>(get_jobject());
}

local_ref< java::lang::String > org::apache::http::message::BufferedHeader::toString()
{
	return call_method<
		org::apache::http::message::BufferedHeader::J2CPP_CLASS_NAME,
		org::apache::http::message::BufferedHeader::J2CPP_METHOD_NAME(6),
		org::apache::http::message::BufferedHeader::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::lang::Object > org::apache::http::message::BufferedHeader::clone()
{
	return call_method<
		org::apache::http::message::BufferedHeader::J2CPP_CLASS_NAME,
		org::apache::http::message::BufferedHeader::J2CPP_METHOD_NAME(7),
		org::apache::http::message::BufferedHeader::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< java::lang::Object >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(org::apache::http::message::BufferedHeader,"org/apache/http/message/BufferedHeader")
J2CPP_DEFINE_METHOD(org::apache::http::message::BufferedHeader,0,"<init>","(Lorg/apache/http/util/CharArrayBuffer;)V")
J2CPP_DEFINE_METHOD(org::apache::http::message::BufferedHeader,1,"getName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::message::BufferedHeader,2,"getValue","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::message::BufferedHeader,3,"getElements","()[org.apache.http.HeaderElement")
J2CPP_DEFINE_METHOD(org::apache::http::message::BufferedHeader,4,"getValuePos","()I")
J2CPP_DEFINE_METHOD(org::apache::http::message::BufferedHeader,5,"getBuffer","()Lorg/apache/http/util/CharArrayBuffer;")
J2CPP_DEFINE_METHOD(org::apache::http::message::BufferedHeader,6,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::message::BufferedHeader,7,"clone","()Ljava/lang/Object;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_MESSAGE_BUFFEREDHEADER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
