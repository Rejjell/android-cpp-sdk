/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.zip.DataFormatException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_ZIP_DATAFORMATEXCEPTION_HPP_DECL
#define J2CPP_JAVA_UTIL_ZIP_DATAFORMATEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Exception; } } }


#include <java/lang/Exception.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace util { namespace zip {

	class DataFormatException;
	class DataFormatException
		: public object<DataFormatException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit DataFormatException(jobject jobj)
		: object<DataFormatException>(jobj)
		{
		}

		operator local_ref<java::lang::Exception>() const;


		DataFormatException();
		DataFormatException(local_ref< java::lang::String > const&);
	}; //class DataFormatException

} //namespace zip
} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_ZIP_DATAFORMATEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_ZIP_DATAFORMATEXCEPTION_HPP_IMPL
#define J2CPP_JAVA_UTIL_ZIP_DATAFORMATEXCEPTION_HPP_IMPL

namespace j2cpp {



java::util::zip::DataFormatException::operator local_ref<java::lang::Exception>() const
{
	return local_ref<java::lang::Exception>(get_jobject());
}


java::util::zip::DataFormatException::DataFormatException()
: object<java::util::zip::DataFormatException>(
	call_new_object<
		java::util::zip::DataFormatException::J2CPP_CLASS_NAME,
		java::util::zip::DataFormatException::J2CPP_METHOD_NAME(0),
		java::util::zip::DataFormatException::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}



java::util::zip::DataFormatException::DataFormatException(local_ref< java::lang::String > const &a0)
: object<java::util::zip::DataFormatException>(
	call_new_object<
		java::util::zip::DataFormatException::J2CPP_CLASS_NAME,
		java::util::zip::DataFormatException::J2CPP_METHOD_NAME(1),
		java::util::zip::DataFormatException::J2CPP_METHOD_SIGNATURE(1)>
	(a0)
)
{
}



J2CPP_DEFINE_CLASS(java::util::zip::DataFormatException,"java/util/zip/DataFormatException")
J2CPP_DEFINE_METHOD(java::util::zip::DataFormatException,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::util::zip::DataFormatException,1,"<init>","(Ljava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_ZIP_DATAFORMATEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
