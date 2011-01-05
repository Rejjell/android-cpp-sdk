/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.logging.ConsoleHandler
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_LOGGING_CONSOLEHANDLER_HPP_DECL
#define J2CPP_JAVA_UTIL_LOGGING_CONSOLEHANDLER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { namespace logging { class Handler; } } } }
namespace j2cpp { namespace java { namespace util { namespace logging { class LogRecord; } } } }
namespace j2cpp { namespace java { namespace util { namespace logging { class StreamHandler; } } } }


#include <java/lang/Object.hpp>
#include <java/util/logging/Handler.hpp>
#include <java/util/logging/LogRecord.hpp>
#include <java/util/logging/StreamHandler.hpp>


namespace j2cpp {

namespace java { namespace util { namespace logging {

	class ConsoleHandler;
	class ConsoleHandler
		: public object<ConsoleHandler>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		explicit ConsoleHandler(jobject jobj)
		: object<ConsoleHandler>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::util::logging::Handler>() const;
		operator local_ref<java::util::logging::StreamHandler>() const;


		ConsoleHandler();
		void close();
		void publish(local_ref< java::util::logging::LogRecord >  const&);
	}; //class ConsoleHandler

} //namespace logging
} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_LOGGING_CONSOLEHANDLER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_LOGGING_CONSOLEHANDLER_HPP_IMPL
#define J2CPP_JAVA_UTIL_LOGGING_CONSOLEHANDLER_HPP_IMPL

namespace j2cpp {



java::util::logging::ConsoleHandler::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::util::logging::ConsoleHandler::operator local_ref<java::util::logging::Handler>() const
{
	return local_ref<java::util::logging::Handler>(get_jobject());
}

java::util::logging::ConsoleHandler::operator local_ref<java::util::logging::StreamHandler>() const
{
	return local_ref<java::util::logging::StreamHandler>(get_jobject());
}


java::util::logging::ConsoleHandler::ConsoleHandler()
: object<java::util::logging::ConsoleHandler>(
	call_new_object<
		java::util::logging::ConsoleHandler::J2CPP_CLASS_NAME,
		java::util::logging::ConsoleHandler::J2CPP_METHOD_NAME(0),
		java::util::logging::ConsoleHandler::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}


void java::util::logging::ConsoleHandler::close()
{
	return call_method<
		java::util::logging::ConsoleHandler::J2CPP_CLASS_NAME,
		java::util::logging::ConsoleHandler::J2CPP_METHOD_NAME(1),
		java::util::logging::ConsoleHandler::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject());
}

void java::util::logging::ConsoleHandler::publish(local_ref< java::util::logging::LogRecord > const &a0)
{
	return call_method<
		java::util::logging::ConsoleHandler::J2CPP_CLASS_NAME,
		java::util::logging::ConsoleHandler::J2CPP_METHOD_NAME(2),
		java::util::logging::ConsoleHandler::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(java::util::logging::ConsoleHandler,"java/util/logging/ConsoleHandler")
J2CPP_DEFINE_METHOD(java::util::logging::ConsoleHandler,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::util::logging::ConsoleHandler,1,"close","()V")
J2CPP_DEFINE_METHOD(java::util::logging::ConsoleHandler,2,"publish","(Ljava/util/logging/LogRecord;)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_LOGGING_CONSOLEHANDLER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
