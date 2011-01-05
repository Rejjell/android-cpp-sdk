/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.logging.Formatter
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_LOGGING_FORMATTER_HPP_DECL
#define J2CPP_JAVA_UTIL_LOGGING_FORMATTER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { namespace logging { class LogRecord; } } } }
namespace j2cpp { namespace java { namespace util { namespace logging { class Handler; } } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/logging/Handler.hpp>
#include <java/util/logging/LogRecord.hpp>


namespace j2cpp {

namespace java { namespace util { namespace logging {

	class Formatter;
	class Formatter
		: public object<Formatter>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)

		explicit Formatter(jobject jobj)
		: object<Formatter>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		local_ref< java::lang::String > format(local_ref< java::util::logging::LogRecord >  const&);
		local_ref< java::lang::String > formatMessage(local_ref< java::util::logging::LogRecord >  const&);
		local_ref< java::lang::String > getHead(local_ref< java::util::logging::Handler >  const&);
		local_ref< java::lang::String > getTail(local_ref< java::util::logging::Handler >  const&);
	}; //class Formatter

} //namespace logging
} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_LOGGING_FORMATTER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_LOGGING_FORMATTER_HPP_IMPL
#define J2CPP_JAVA_UTIL_LOGGING_FORMATTER_HPP_IMPL

namespace j2cpp {



java::util::logging::Formatter::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


local_ref< java::lang::String > java::util::logging::Formatter::format(local_ref< java::util::logging::LogRecord > const &a0)
{
	return call_method<
		java::util::logging::Formatter::J2CPP_CLASS_NAME,
		java::util::logging::Formatter::J2CPP_METHOD_NAME(1),
		java::util::logging::Formatter::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::String >
	>(get_jobject(), a0);
}

local_ref< java::lang::String > java::util::logging::Formatter::formatMessage(local_ref< java::util::logging::LogRecord > const &a0)
{
	return call_method<
		java::util::logging::Formatter::J2CPP_CLASS_NAME,
		java::util::logging::Formatter::J2CPP_METHOD_NAME(2),
		java::util::logging::Formatter::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::lang::String >
	>(get_jobject(), a0);
}

local_ref< java::lang::String > java::util::logging::Formatter::getHead(local_ref< java::util::logging::Handler > const &a0)
{
	return call_method<
		java::util::logging::Formatter::J2CPP_CLASS_NAME,
		java::util::logging::Formatter::J2CPP_METHOD_NAME(3),
		java::util::logging::Formatter::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::lang::String >
	>(get_jobject(), a0);
}

local_ref< java::lang::String > java::util::logging::Formatter::getTail(local_ref< java::util::logging::Handler > const &a0)
{
	return call_method<
		java::util::logging::Formatter::J2CPP_CLASS_NAME,
		java::util::logging::Formatter::J2CPP_METHOD_NAME(4),
		java::util::logging::Formatter::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::lang::String >
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(java::util::logging::Formatter,"java/util/logging/Formatter")
J2CPP_DEFINE_METHOD(java::util::logging::Formatter,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::util::logging::Formatter,1,"format","(Ljava/util/logging/LogRecord;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::logging::Formatter,2,"formatMessage","(Ljava/util/logging/LogRecord;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::logging::Formatter,3,"getHead","(Ljava/util/logging/Handler;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::logging::Formatter,4,"getTail","(Ljava/util/logging/Handler;)Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_LOGGING_FORMATTER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
