/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.FormatFlagsConversionMismatchException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_FORMATFLAGSCONVERSIONMISMATCHEXCEPTION_HPP_DECL
#define J2CPP_JAVA_UTIL_FORMATFLAGSCONVERSIONMISMATCHEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class RuntimeException; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class IllegalArgumentException; } } }
namespace j2cpp { namespace java { namespace lang { class Throwable; } } }
namespace j2cpp { namespace java { namespace lang { class Exception; } } }
namespace j2cpp { namespace java { namespace util { class IllegalFormatException; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/Throwable.hpp>
#include <java/util/IllegalFormatException.hpp>


namespace j2cpp {

namespace java { namespace util {

	class FormatFlagsConversionMismatchException;
	class FormatFlagsConversionMismatchException
		: public object<FormatFlagsConversionMismatchException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		explicit FormatFlagsConversionMismatchException(jobject jobj)
		: object<FormatFlagsConversionMismatchException>(jobj)
		{
		}

		operator local_ref<java::io::Serializable>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::lang::RuntimeException>() const;
		operator local_ref<java::lang::IllegalArgumentException>() const;
		operator local_ref<java::lang::Throwable>() const;
		operator local_ref<java::lang::Exception>() const;
		operator local_ref<java::util::IllegalFormatException>() const;


		FormatFlagsConversionMismatchException(local_ref< java::lang::String > const&, jchar);
		local_ref< java::lang::String > getFlags();
		jchar getConversion();
		local_ref< java::lang::String > getMessage();
	}; //class FormatFlagsConversionMismatchException

} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_FORMATFLAGSCONVERSIONMISMATCHEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_FORMATFLAGSCONVERSIONMISMATCHEXCEPTION_HPP_IMPL
#define J2CPP_JAVA_UTIL_FORMATFLAGSCONVERSIONMISMATCHEXCEPTION_HPP_IMPL

namespace j2cpp {



java::util::FormatFlagsConversionMismatchException::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}

java::util::FormatFlagsConversionMismatchException::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::util::FormatFlagsConversionMismatchException::operator local_ref<java::lang::RuntimeException>() const
{
	return local_ref<java::lang::RuntimeException>(get_jobject());
}

java::util::FormatFlagsConversionMismatchException::operator local_ref<java::lang::IllegalArgumentException>() const
{
	return local_ref<java::lang::IllegalArgumentException>(get_jobject());
}

java::util::FormatFlagsConversionMismatchException::operator local_ref<java::lang::Throwable>() const
{
	return local_ref<java::lang::Throwable>(get_jobject());
}

java::util::FormatFlagsConversionMismatchException::operator local_ref<java::lang::Exception>() const
{
	return local_ref<java::lang::Exception>(get_jobject());
}

java::util::FormatFlagsConversionMismatchException::operator local_ref<java::util::IllegalFormatException>() const
{
	return local_ref<java::util::IllegalFormatException>(get_jobject());
}


java::util::FormatFlagsConversionMismatchException::FormatFlagsConversionMismatchException(local_ref< java::lang::String > const &a0, jchar a1)
: object<java::util::FormatFlagsConversionMismatchException>(
	call_new_object<
		java::util::FormatFlagsConversionMismatchException::J2CPP_CLASS_NAME,
		java::util::FormatFlagsConversionMismatchException::J2CPP_METHOD_NAME(0),
		java::util::FormatFlagsConversionMismatchException::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1)
)
{
}


local_ref< java::lang::String > java::util::FormatFlagsConversionMismatchException::getFlags()
{
	return call_method<
		java::util::FormatFlagsConversionMismatchException::J2CPP_CLASS_NAME,
		java::util::FormatFlagsConversionMismatchException::J2CPP_METHOD_NAME(1),
		java::util::FormatFlagsConversionMismatchException::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::String >
	>(get_jobject());
}

jchar java::util::FormatFlagsConversionMismatchException::getConversion()
{
	return call_method<
		java::util::FormatFlagsConversionMismatchException::J2CPP_CLASS_NAME,
		java::util::FormatFlagsConversionMismatchException::J2CPP_METHOD_NAME(2),
		java::util::FormatFlagsConversionMismatchException::J2CPP_METHOD_SIGNATURE(2), 
		jchar
	>(get_jobject());
}

local_ref< java::lang::String > java::util::FormatFlagsConversionMismatchException::getMessage()
{
	return call_method<
		java::util::FormatFlagsConversionMismatchException::J2CPP_CLASS_NAME,
		java::util::FormatFlagsConversionMismatchException::J2CPP_METHOD_NAME(3),
		java::util::FormatFlagsConversionMismatchException::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::lang::String >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(java::util::FormatFlagsConversionMismatchException,"java/util/FormatFlagsConversionMismatchException")
J2CPP_DEFINE_METHOD(java::util::FormatFlagsConversionMismatchException,0,"<init>","(Ljava/lang/String;C)V")
J2CPP_DEFINE_METHOD(java::util::FormatFlagsConversionMismatchException,1,"getFlags","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::FormatFlagsConversionMismatchException,2,"getConversion","()C")
J2CPP_DEFINE_METHOD(java::util::FormatFlagsConversionMismatchException,3,"getMessage","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_FORMATFLAGSCONVERSIONMISMATCHEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
