/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.io.SessionInputBuffer
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IO_SESSIONINPUTBUFFER_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IO_SESSIONINPUTBUFFER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace util { class CharArrayBuffer; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace io { class HttpTransportMetrics; } } } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <org/apache/http/io/HttpTransportMetrics.hpp>
#include <org/apache/http/util/CharArrayBuffer.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace io {

	class SessionInputBuffer;
	class SessionInputBuffer
		: public object<SessionInputBuffer>
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

		explicit SessionInputBuffer(jobject jobj)
		: object<SessionInputBuffer>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		jint read(local_ref< array<jbyte,1> >  const&, jint, jint);
		jint read(local_ref< array<jbyte,1> >  const&);
		jint read();
		jint readLine(local_ref< org::apache::http::util::CharArrayBuffer >  const&);
		local_ref< java::lang::String > readLine();
		jboolean isDataAvailable(jint);
		local_ref< org::apache::http::io::HttpTransportMetrics > getMetrics();
	}; //class SessionInputBuffer

} //namespace io
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IO_SESSIONINPUTBUFFER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IO_SESSIONINPUTBUFFER_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IO_SESSIONINPUTBUFFER_HPP_IMPL

namespace j2cpp {



org::apache::http::io::SessionInputBuffer::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

jint org::apache::http::io::SessionInputBuffer::read(local_ref< array<jbyte,1> > const &a0, jint a1, jint a2)
{
	return call_method<
		org::apache::http::io::SessionInputBuffer::J2CPP_CLASS_NAME,
		org::apache::http::io::SessionInputBuffer::J2CPP_METHOD_NAME(0),
		org::apache::http::io::SessionInputBuffer::J2CPP_METHOD_SIGNATURE(0), 
		jint
	>(get_jobject(), a0, a1, a2);
}

jint org::apache::http::io::SessionInputBuffer::read(local_ref< array<jbyte,1> > const &a0)
{
	return call_method<
		org::apache::http::io::SessionInputBuffer::J2CPP_CLASS_NAME,
		org::apache::http::io::SessionInputBuffer::J2CPP_METHOD_NAME(1),
		org::apache::http::io::SessionInputBuffer::J2CPP_METHOD_SIGNATURE(1), 
		jint
	>(get_jobject(), a0);
}

jint org::apache::http::io::SessionInputBuffer::read()
{
	return call_method<
		org::apache::http::io::SessionInputBuffer::J2CPP_CLASS_NAME,
		org::apache::http::io::SessionInputBuffer::J2CPP_METHOD_NAME(2),
		org::apache::http::io::SessionInputBuffer::J2CPP_METHOD_SIGNATURE(2), 
		jint
	>(get_jobject());
}

jint org::apache::http::io::SessionInputBuffer::readLine(local_ref< org::apache::http::util::CharArrayBuffer > const &a0)
{
	return call_method<
		org::apache::http::io::SessionInputBuffer::J2CPP_CLASS_NAME,
		org::apache::http::io::SessionInputBuffer::J2CPP_METHOD_NAME(3),
		org::apache::http::io::SessionInputBuffer::J2CPP_METHOD_SIGNATURE(3), 
		jint
	>(get_jobject(), a0);
}

local_ref< java::lang::String > org::apache::http::io::SessionInputBuffer::readLine()
{
	return call_method<
		org::apache::http::io::SessionInputBuffer::J2CPP_CLASS_NAME,
		org::apache::http::io::SessionInputBuffer::J2CPP_METHOD_NAME(4),
		org::apache::http::io::SessionInputBuffer::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::lang::String >
	>(get_jobject());
}

jboolean org::apache::http::io::SessionInputBuffer::isDataAvailable(jint a0)
{
	return call_method<
		org::apache::http::io::SessionInputBuffer::J2CPP_CLASS_NAME,
		org::apache::http::io::SessionInputBuffer::J2CPP_METHOD_NAME(5),
		org::apache::http::io::SessionInputBuffer::J2CPP_METHOD_SIGNATURE(5), 
		jboolean
	>(get_jobject(), a0);
}

local_ref< org::apache::http::io::HttpTransportMetrics > org::apache::http::io::SessionInputBuffer::getMetrics()
{
	return call_method<
		org::apache::http::io::SessionInputBuffer::J2CPP_CLASS_NAME,
		org::apache::http::io::SessionInputBuffer::J2CPP_METHOD_NAME(6),
		org::apache::http::io::SessionInputBuffer::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< org::apache::http::io::HttpTransportMetrics >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(org::apache::http::io::SessionInputBuffer,"org/apache/http/io/SessionInputBuffer")
J2CPP_DEFINE_METHOD(org::apache::http::io::SessionInputBuffer,0,"read","([BII)I")
J2CPP_DEFINE_METHOD(org::apache::http::io::SessionInputBuffer,1,"read","([B)I")
J2CPP_DEFINE_METHOD(org::apache::http::io::SessionInputBuffer,2,"read","()I")
J2CPP_DEFINE_METHOD(org::apache::http::io::SessionInputBuffer,3,"readLine","(Lorg/apache/http/util/CharArrayBuffer;)I")
J2CPP_DEFINE_METHOD(org::apache::http::io::SessionInputBuffer,4,"readLine","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::io::SessionInputBuffer,5,"isDataAvailable","(I)Z")
J2CPP_DEFINE_METHOD(org::apache::http::io::SessionInputBuffer,6,"getMetrics","()Lorg/apache/http/io/HttpTransportMetrics;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IO_SESSIONINPUTBUFFER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
