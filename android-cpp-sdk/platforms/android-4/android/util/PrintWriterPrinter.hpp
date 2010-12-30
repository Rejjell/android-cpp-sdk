/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.util.PrintWriterPrinter
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_UTIL_PRINTWRITERPRINTER_HPP_DECL
#define J2CPP_ANDROID_UTIL_PRINTWRITERPRINTER_HPP_DECL


namespace j2cpp { namespace android { namespace util { class Printer; } } }
namespace j2cpp { namespace java { namespace io { class PrintWriter; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/util/Printer.hpp>
#include <java/io/PrintWriter.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace util {

	class PrintWriterPrinter;
	class PrintWriterPrinter
		: public object<PrintWriterPrinter>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit PrintWriterPrinter(jobject jobj)
		: object<PrintWriterPrinter>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::util::Printer>() const;


		PrintWriterPrinter(local_ref< java::io::PrintWriter > const&);
		void println(local_ref< java::lang::String >  const&);
	}; //class PrintWriterPrinter

} //namespace util
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_UTIL_PRINTWRITERPRINTER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_UTIL_PRINTWRITERPRINTER_HPP_IMPL
#define J2CPP_ANDROID_UTIL_PRINTWRITERPRINTER_HPP_IMPL

namespace j2cpp {



android::util::PrintWriterPrinter::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::util::PrintWriterPrinter::operator local_ref<android::util::Printer>() const
{
	return local_ref<android::util::Printer>(get_jobject());
}


android::util::PrintWriterPrinter::PrintWriterPrinter(local_ref< java::io::PrintWriter > const &a0)
: object<android::util::PrintWriterPrinter>(
	call_new_object<
		android::util::PrintWriterPrinter::J2CPP_CLASS_NAME,
		android::util::PrintWriterPrinter::J2CPP_METHOD_NAME(0),
		android::util::PrintWriterPrinter::J2CPP_METHOD_SIGNATURE(0)>
	(a0)
)
{
}


void android::util::PrintWriterPrinter::println(local_ref< java::lang::String > const &a0)
{
	return call_method<
		android::util::PrintWriterPrinter::J2CPP_CLASS_NAME,
		android::util::PrintWriterPrinter::J2CPP_METHOD_NAME(1),
		android::util::PrintWriterPrinter::J2CPP_METHOD_SIGNATURE(1), 
		void >
	(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(android::util::PrintWriterPrinter,"android/util/PrintWriterPrinter")
J2CPP_DEFINE_METHOD(android::util::PrintWriterPrinter,0,"<init>","(Ljava/io/PrintWriter;)V")
J2CPP_DEFINE_METHOD(android::util::PrintWriterPrinter,1,"println","(Ljava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_UTIL_PRINTWRITERPRINTER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
