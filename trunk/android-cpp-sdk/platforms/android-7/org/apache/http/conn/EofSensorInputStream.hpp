/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.conn.EofSensorInputStream
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CONN_EOFSENSORINPUTSTREAM_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_CONN_EOFSENSORINPUTSTREAM_HPP_DECL


namespace j2cpp { namespace java { namespace io { class InputStream; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace conn { class ConnectionReleaseTrigger; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace conn { class EofSensorWatcher; } } } } }


#include <java/io/InputStream.hpp>
#include <org/apache/http/conn/ConnectionReleaseTrigger.hpp>
#include <org/apache/http/conn/EofSensorWatcher.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace conn {

	class EofSensorInputStream;
	class EofSensorInputStream
		: public object<EofSensorInputStream>
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
		J2CPP_DECLARE_FIELD(0)

		explicit EofSensorInputStream(jobject jobj)
		: object<EofSensorInputStream>(jobj)
		{
		}

		operator local_ref<java::io::InputStream>() const;
		operator local_ref<org::apache::http::conn::ConnectionReleaseTrigger>() const;


		EofSensorInputStream(local_ref< java::io::InputStream > const&, local_ref< org::apache::http::conn::EofSensorWatcher > const&);
		jint read();
		jint read(local_ref< array<jbyte,1> >  const&, jint, jint);
		jint read(local_ref< array<jbyte,1> >  const&);
		jint available();
		void close();
		void releaseConnection();
		void abortConnection();

	}; //class EofSensorInputStream

} //namespace conn
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CONN_EOFSENSORINPUTSTREAM_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CONN_EOFSENSORINPUTSTREAM_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_CONN_EOFSENSORINPUTSTREAM_HPP_IMPL

namespace j2cpp {



org::apache::http::conn::EofSensorInputStream::operator local_ref<java::io::InputStream>() const
{
	return local_ref<java::io::InputStream>(get_jobject());
}

org::apache::http::conn::EofSensorInputStream::operator local_ref<org::apache::http::conn::ConnectionReleaseTrigger>() const
{
	return local_ref<org::apache::http::conn::ConnectionReleaseTrigger>(get_jobject());
}


org::apache::http::conn::EofSensorInputStream::EofSensorInputStream(local_ref< java::io::InputStream > const &a0, local_ref< org::apache::http::conn::EofSensorWatcher > const &a1)
: object<org::apache::http::conn::EofSensorInputStream>(
	call_new_object<
		org::apache::http::conn::EofSensorInputStream::J2CPP_CLASS_NAME,
		org::apache::http::conn::EofSensorInputStream::J2CPP_METHOD_NAME(0),
		org::apache::http::conn::EofSensorInputStream::J2CPP_METHOD_SIGNATURE(0)>
	(a0, a1)
)
{
}



jint org::apache::http::conn::EofSensorInputStream::read()
{
	return call_method<
		org::apache::http::conn::EofSensorInputStream::J2CPP_CLASS_NAME,
		org::apache::http::conn::EofSensorInputStream::J2CPP_METHOD_NAME(2),
		org::apache::http::conn::EofSensorInputStream::J2CPP_METHOD_SIGNATURE(2), 
		jint >
	(get_jobject());
}

jint org::apache::http::conn::EofSensorInputStream::read(local_ref< array<jbyte,1> > const &a0, jint a1, jint a2)
{
	return call_method<
		org::apache::http::conn::EofSensorInputStream::J2CPP_CLASS_NAME,
		org::apache::http::conn::EofSensorInputStream::J2CPP_METHOD_NAME(3),
		org::apache::http::conn::EofSensorInputStream::J2CPP_METHOD_SIGNATURE(3), 
		jint >
	(get_jobject(), a0, a1, a2);
}

jint org::apache::http::conn::EofSensorInputStream::read(local_ref< array<jbyte,1> > const &a0)
{
	return call_method<
		org::apache::http::conn::EofSensorInputStream::J2CPP_CLASS_NAME,
		org::apache::http::conn::EofSensorInputStream::J2CPP_METHOD_NAME(4),
		org::apache::http::conn::EofSensorInputStream::J2CPP_METHOD_SIGNATURE(4), 
		jint >
	(get_jobject(), a0);
}

jint org::apache::http::conn::EofSensorInputStream::available()
{
	return call_method<
		org::apache::http::conn::EofSensorInputStream::J2CPP_CLASS_NAME,
		org::apache::http::conn::EofSensorInputStream::J2CPP_METHOD_NAME(5),
		org::apache::http::conn::EofSensorInputStream::J2CPP_METHOD_SIGNATURE(5), 
		jint >
	(get_jobject());
}

void org::apache::http::conn::EofSensorInputStream::close()
{
	return call_method<
		org::apache::http::conn::EofSensorInputStream::J2CPP_CLASS_NAME,
		org::apache::http::conn::EofSensorInputStream::J2CPP_METHOD_NAME(6),
		org::apache::http::conn::EofSensorInputStream::J2CPP_METHOD_SIGNATURE(6), 
		void >
	(get_jobject());
}




void org::apache::http::conn::EofSensorInputStream::releaseConnection()
{
	return call_method<
		org::apache::http::conn::EofSensorInputStream::J2CPP_CLASS_NAME,
		org::apache::http::conn::EofSensorInputStream::J2CPP_METHOD_NAME(10),
		org::apache::http::conn::EofSensorInputStream::J2CPP_METHOD_SIGNATURE(10), 
		void >
	(get_jobject());
}

void org::apache::http::conn::EofSensorInputStream::abortConnection()
{
	return call_method<
		org::apache::http::conn::EofSensorInputStream::J2CPP_CLASS_NAME,
		org::apache::http::conn::EofSensorInputStream::J2CPP_METHOD_NAME(11),
		org::apache::http::conn::EofSensorInputStream::J2CPP_METHOD_SIGNATURE(11), 
		void >
	(get_jobject());
}



J2CPP_DEFINE_CLASS(org::apache::http::conn::EofSensorInputStream,"org/apache/http/conn/EofSensorInputStream")
J2CPP_DEFINE_METHOD(org::apache::http::conn::EofSensorInputStream,0,"<init>","(Ljava/io/InputStream;Lorg/apache/http/conn/EofSensorWatcher;)V")
J2CPP_DEFINE_METHOD(org::apache::http::conn::EofSensorInputStream,1,"isReadAllowed","()Z")
J2CPP_DEFINE_METHOD(org::apache::http::conn::EofSensorInputStream,2,"read","()I")
J2CPP_DEFINE_METHOD(org::apache::http::conn::EofSensorInputStream,3,"read","([BII)I")
J2CPP_DEFINE_METHOD(org::apache::http::conn::EofSensorInputStream,4,"read","([B)I")
J2CPP_DEFINE_METHOD(org::apache::http::conn::EofSensorInputStream,5,"available","()I")
J2CPP_DEFINE_METHOD(org::apache::http::conn::EofSensorInputStream,6,"close","()V")
J2CPP_DEFINE_METHOD(org::apache::http::conn::EofSensorInputStream,7,"checkEOF","(I)V")
J2CPP_DEFINE_METHOD(org::apache::http::conn::EofSensorInputStream,8,"checkClose","()V")
J2CPP_DEFINE_METHOD(org::apache::http::conn::EofSensorInputStream,9,"checkAbort","()V")
J2CPP_DEFINE_METHOD(org::apache::http::conn::EofSensorInputStream,10,"releaseConnection","()V")
J2CPP_DEFINE_METHOD(org::apache::http::conn::EofSensorInputStream,11,"abortConnection","()V")
J2CPP_DEFINE_FIELD(org::apache::http::conn::EofSensorInputStream,0,"wrappedStream","Ljava/io/InputStream;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CONN_EOFSENSORINPUTSTREAM_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
