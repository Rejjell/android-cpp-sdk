/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.logging.StreamHandler
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_LOGGING_STREAMHANDLER_HPP_DECL
#define J2CPP_JAVA_UTIL_LOGGING_STREAMHANDLER_HPP_DECL


namespace j2cpp { namespace java { namespace io { class OutputStream; } } }
namespace j2cpp { namespace java { namespace util { namespace logging { class Formatter; } } } }
namespace j2cpp { namespace java { namespace util { namespace logging { class Handler; } } } }
namespace j2cpp { namespace java { namespace util { namespace logging { class LogRecord; } } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/io/OutputStream.hpp>
#include <java/lang/String.hpp>
#include <java/util/logging/Formatter.hpp>
#include <java/util/logging/Handler.hpp>
#include <java/util/logging/LogRecord.hpp>


namespace j2cpp {

namespace java { namespace util { namespace logging {

	class StreamHandler;
	class StreamHandler
		: public object<StreamHandler>
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

		explicit StreamHandler(jobject jobj)
		: object<StreamHandler>(jobj)
		{
		}

		operator local_ref<java::util::logging::Handler>() const;


		StreamHandler();
		StreamHandler(local_ref< java::io::OutputStream > const&, local_ref< java::util::logging::Formatter > const&);
		void setEncoding(local_ref< java::lang::String >  const&);
		void close();
		void flush();
		void publish(local_ref< java::util::logging::LogRecord >  const&);
		jboolean isLoggable(local_ref< java::util::logging::LogRecord >  const&);
	}; //class StreamHandler

} //namespace logging
} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_LOGGING_STREAMHANDLER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_LOGGING_STREAMHANDLER_HPP_IMPL
#define J2CPP_JAVA_UTIL_LOGGING_STREAMHANDLER_HPP_IMPL

namespace j2cpp {



java::util::logging::StreamHandler::operator local_ref<java::util::logging::Handler>() const
{
	return local_ref<java::util::logging::Handler>(get_jobject());
}


java::util::logging::StreamHandler::StreamHandler()
: object<java::util::logging::StreamHandler>(
	call_new_object<
		java::util::logging::StreamHandler::J2CPP_CLASS_NAME,
		java::util::logging::StreamHandler::J2CPP_METHOD_NAME(0),
		java::util::logging::StreamHandler::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}



java::util::logging::StreamHandler::StreamHandler(local_ref< java::io::OutputStream > const &a0, local_ref< java::util::logging::Formatter > const &a1)
: object<java::util::logging::StreamHandler>(
	call_new_object<
		java::util::logging::StreamHandler::J2CPP_CLASS_NAME,
		java::util::logging::StreamHandler::J2CPP_METHOD_NAME(1),
		java::util::logging::StreamHandler::J2CPP_METHOD_SIGNATURE(1)>
	(a0, a1)
)
{
}



void java::util::logging::StreamHandler::setEncoding(local_ref< java::lang::String > const &a0)
{
	return call_method<
		java::util::logging::StreamHandler::J2CPP_CLASS_NAME,
		java::util::logging::StreamHandler::J2CPP_METHOD_NAME(3),
		java::util::logging::StreamHandler::J2CPP_METHOD_SIGNATURE(3), 
		void >
	(get_jobject(), a0);
}

void java::util::logging::StreamHandler::close()
{
	return call_method<
		java::util::logging::StreamHandler::J2CPP_CLASS_NAME,
		java::util::logging::StreamHandler::J2CPP_METHOD_NAME(4),
		java::util::logging::StreamHandler::J2CPP_METHOD_SIGNATURE(4), 
		void >
	(get_jobject());
}

void java::util::logging::StreamHandler::flush()
{
	return call_method<
		java::util::logging::StreamHandler::J2CPP_CLASS_NAME,
		java::util::logging::StreamHandler::J2CPP_METHOD_NAME(5),
		java::util::logging::StreamHandler::J2CPP_METHOD_SIGNATURE(5), 
		void >
	(get_jobject());
}

void java::util::logging::StreamHandler::publish(local_ref< java::util::logging::LogRecord > const &a0)
{
	return call_method<
		java::util::logging::StreamHandler::J2CPP_CLASS_NAME,
		java::util::logging::StreamHandler::J2CPP_METHOD_NAME(6),
		java::util::logging::StreamHandler::J2CPP_METHOD_SIGNATURE(6), 
		void >
	(get_jobject(), a0);
}

jboolean java::util::logging::StreamHandler::isLoggable(local_ref< java::util::logging::LogRecord > const &a0)
{
	return call_method<
		java::util::logging::StreamHandler::J2CPP_CLASS_NAME,
		java::util::logging::StreamHandler::J2CPP_METHOD_NAME(7),
		java::util::logging::StreamHandler::J2CPP_METHOD_SIGNATURE(7), 
		jboolean >
	(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(java::util::logging::StreamHandler,"java/util/logging/StreamHandler")
J2CPP_DEFINE_METHOD(java::util::logging::StreamHandler,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::util::logging::StreamHandler,1,"<init>","(Ljava/io/OutputStream;Ljava/util/logging/Formatter;)V")
J2CPP_DEFINE_METHOD(java::util::logging::StreamHandler,2,"setOutputStream","(Ljava/io/OutputStream;)V")
J2CPP_DEFINE_METHOD(java::util::logging::StreamHandler,3,"setEncoding","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::util::logging::StreamHandler,4,"close","()V")
J2CPP_DEFINE_METHOD(java::util::logging::StreamHandler,5,"flush","()V")
J2CPP_DEFINE_METHOD(java::util::logging::StreamHandler,6,"publish","(Ljava/util/logging/LogRecord;)V")
J2CPP_DEFINE_METHOD(java::util::logging::StreamHandler,7,"isLoggable","(Ljava/util/logging/LogRecord;)Z")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_LOGGING_STREAMHANDLER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION