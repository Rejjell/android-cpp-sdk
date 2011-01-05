/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.io.FileWriter
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_FILEWRITER_HPP_DECL
#define J2CPP_JAVA_IO_FILEWRITER_HPP_DECL


namespace j2cpp { namespace java { namespace io { class Flushable; } } }
namespace j2cpp { namespace java { namespace io { class OutputStreamWriter; } } }
namespace j2cpp { namespace java { namespace io { class File; } } }
namespace j2cpp { namespace java { namespace io { class Closeable; } } }
namespace j2cpp { namespace java { namespace io { class FileDescriptor; } } }
namespace j2cpp { namespace java { namespace io { class Writer; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Appendable; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/io/Closeable.hpp>
#include <java/io/File.hpp>
#include <java/io/FileDescriptor.hpp>
#include <java/io/Flushable.hpp>
#include <java/io/OutputStreamWriter.hpp>
#include <java/io/Writer.hpp>
#include <java/lang/Appendable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace io {

	class FileWriter;
	class FileWriter
		: public object<FileWriter>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)

		explicit FileWriter(jobject jobj)
		: object<FileWriter>(jobj)
		{
		}

		operator local_ref<java::io::Flushable>() const;
		operator local_ref<java::io::OutputStreamWriter>() const;
		operator local_ref<java::io::Closeable>() const;
		operator local_ref<java::io::Writer>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::lang::Appendable>() const;


		FileWriter(local_ref< java::io::File > const&);
		FileWriter(local_ref< java::io::File > const&, jboolean);
		FileWriter(local_ref< java::io::FileDescriptor > const&);
		FileWriter(local_ref< java::lang::String > const&);
		FileWriter(local_ref< java::lang::String > const&, jboolean);
	}; //class FileWriter

} //namespace io
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_IO_FILEWRITER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_FILEWRITER_HPP_IMPL
#define J2CPP_JAVA_IO_FILEWRITER_HPP_IMPL

namespace j2cpp {



java::io::FileWriter::operator local_ref<java::io::Flushable>() const
{
	return local_ref<java::io::Flushable>(get_jobject());
}

java::io::FileWriter::operator local_ref<java::io::OutputStreamWriter>() const
{
	return local_ref<java::io::OutputStreamWriter>(get_jobject());
}

java::io::FileWriter::operator local_ref<java::io::Closeable>() const
{
	return local_ref<java::io::Closeable>(get_jobject());
}

java::io::FileWriter::operator local_ref<java::io::Writer>() const
{
	return local_ref<java::io::Writer>(get_jobject());
}

java::io::FileWriter::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::io::FileWriter::operator local_ref<java::lang::Appendable>() const
{
	return local_ref<java::lang::Appendable>(get_jobject());
}


java::io::FileWriter::FileWriter(local_ref< java::io::File > const &a0)
: object<java::io::FileWriter>(
	call_new_object<
		java::io::FileWriter::J2CPP_CLASS_NAME,
		java::io::FileWriter::J2CPP_METHOD_NAME(0),
		java::io::FileWriter::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}



java::io::FileWriter::FileWriter(local_ref< java::io::File > const &a0, jboolean a1)
: object<java::io::FileWriter>(
	call_new_object<
		java::io::FileWriter::J2CPP_CLASS_NAME,
		java::io::FileWriter::J2CPP_METHOD_NAME(1),
		java::io::FileWriter::J2CPP_METHOD_SIGNATURE(1)
	>(a0, a1)
)
{
}



java::io::FileWriter::FileWriter(local_ref< java::io::FileDescriptor > const &a0)
: object<java::io::FileWriter>(
	call_new_object<
		java::io::FileWriter::J2CPP_CLASS_NAME,
		java::io::FileWriter::J2CPP_METHOD_NAME(2),
		java::io::FileWriter::J2CPP_METHOD_SIGNATURE(2)
	>(a0)
)
{
}



java::io::FileWriter::FileWriter(local_ref< java::lang::String > const &a0)
: object<java::io::FileWriter>(
	call_new_object<
		java::io::FileWriter::J2CPP_CLASS_NAME,
		java::io::FileWriter::J2CPP_METHOD_NAME(3),
		java::io::FileWriter::J2CPP_METHOD_SIGNATURE(3)
	>(a0)
)
{
}



java::io::FileWriter::FileWriter(local_ref< java::lang::String > const &a0, jboolean a1)
: object<java::io::FileWriter>(
	call_new_object<
		java::io::FileWriter::J2CPP_CLASS_NAME,
		java::io::FileWriter::J2CPP_METHOD_NAME(4),
		java::io::FileWriter::J2CPP_METHOD_SIGNATURE(4)
	>(a0, a1)
)
{
}



J2CPP_DEFINE_CLASS(java::io::FileWriter,"java/io/FileWriter")
J2CPP_DEFINE_METHOD(java::io::FileWriter,0,"<init>","(Ljava/io/File;)V")
J2CPP_DEFINE_METHOD(java::io::FileWriter,1,"<init>","(Ljava/io/File;Z)V")
J2CPP_DEFINE_METHOD(java::io::FileWriter,2,"<init>","(Ljava/io/FileDescriptor;)V")
J2CPP_DEFINE_METHOD(java::io::FileWriter,3,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::io::FileWriter,4,"<init>","(Ljava/lang/String;Z)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_IO_FILEWRITER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
