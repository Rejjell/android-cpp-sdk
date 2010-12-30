/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.io.FileInputStream
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_FILEINPUTSTREAM_HPP_DECL
#define J2CPP_JAVA_IO_FILEINPUTSTREAM_HPP_DECL


namespace j2cpp { namespace java { namespace io { class File; } } }
namespace j2cpp { namespace java { namespace io { class Closeable; } } }
namespace j2cpp { namespace java { namespace io { class FileDescriptor; } } }
namespace j2cpp { namespace java { namespace io { class InputStream; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace nio { namespace channels { class FileChannel; } } } }


#include <java/io/Closeable.hpp>
#include <java/io/File.hpp>
#include <java/io/FileDescriptor.hpp>
#include <java/io/InputStream.hpp>
#include <java/lang/String.hpp>
#include <java/nio/channels/FileChannel.hpp>


namespace j2cpp {

namespace java { namespace io {

	class FileInputStream;
	class FileInputStream
		: public object<FileInputStream>
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

		explicit FileInputStream(jobject jobj)
		: object<FileInputStream>(jobj)
		{
		}

		operator local_ref<java::io::InputStream>() const;
		operator local_ref<java::io::Closeable>() const;


		FileInputStream(local_ref< java::io::File > const&);
		FileInputStream(local_ref< java::io::FileDescriptor > const&);
		FileInputStream(local_ref< java::lang::String > const&);
		jint available();
		void close();
		local_ref< java::nio::channels::FileChannel > getChannel();
		local_ref< java::io::FileDescriptor > getFD();
		jint read();
		jint read(local_ref< array<jbyte,1> >  const&);
		jint read(local_ref< array<jbyte,1> >  const&, jint, jint);
		jlong skip(jlong);
	}; //class FileInputStream

} //namespace io
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_IO_FILEINPUTSTREAM_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_FILEINPUTSTREAM_HPP_IMPL
#define J2CPP_JAVA_IO_FILEINPUTSTREAM_HPP_IMPL

namespace j2cpp {



java::io::FileInputStream::operator local_ref<java::io::InputStream>() const
{
	return local_ref<java::io::InputStream>(get_jobject());
}

java::io::FileInputStream::operator local_ref<java::io::Closeable>() const
{
	return local_ref<java::io::Closeable>(get_jobject());
}


java::io::FileInputStream::FileInputStream(local_ref< java::io::File > const &a0)
: object<java::io::FileInputStream>(
	call_new_object<
		java::io::FileInputStream::J2CPP_CLASS_NAME,
		java::io::FileInputStream::J2CPP_METHOD_NAME(0),
		java::io::FileInputStream::J2CPP_METHOD_SIGNATURE(0)>
	(a0)
)
{
}



java::io::FileInputStream::FileInputStream(local_ref< java::io::FileDescriptor > const &a0)
: object<java::io::FileInputStream>(
	call_new_object<
		java::io::FileInputStream::J2CPP_CLASS_NAME,
		java::io::FileInputStream::J2CPP_METHOD_NAME(1),
		java::io::FileInputStream::J2CPP_METHOD_SIGNATURE(1)>
	(a0)
)
{
}



java::io::FileInputStream::FileInputStream(local_ref< java::lang::String > const &a0)
: object<java::io::FileInputStream>(
	call_new_object<
		java::io::FileInputStream::J2CPP_CLASS_NAME,
		java::io::FileInputStream::J2CPP_METHOD_NAME(2),
		java::io::FileInputStream::J2CPP_METHOD_SIGNATURE(2)>
	(a0)
)
{
}


jint java::io::FileInputStream::available()
{
	return call_method<
		java::io::FileInputStream::J2CPP_CLASS_NAME,
		java::io::FileInputStream::J2CPP_METHOD_NAME(3),
		java::io::FileInputStream::J2CPP_METHOD_SIGNATURE(3), 
		jint >
	(get_jobject());
}

void java::io::FileInputStream::close()
{
	return call_method<
		java::io::FileInputStream::J2CPP_CLASS_NAME,
		java::io::FileInputStream::J2CPP_METHOD_NAME(4),
		java::io::FileInputStream::J2CPP_METHOD_SIGNATURE(4), 
		void >
	(get_jobject());
}


local_ref< java::nio::channels::FileChannel > java::io::FileInputStream::getChannel()
{
	return call_method<
		java::io::FileInputStream::J2CPP_CLASS_NAME,
		java::io::FileInputStream::J2CPP_METHOD_NAME(6),
		java::io::FileInputStream::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::nio::channels::FileChannel > >
	(get_jobject());
}

local_ref< java::io::FileDescriptor > java::io::FileInputStream::getFD()
{
	return call_method<
		java::io::FileInputStream::J2CPP_CLASS_NAME,
		java::io::FileInputStream::J2CPP_METHOD_NAME(7),
		java::io::FileInputStream::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< java::io::FileDescriptor > >
	(get_jobject());
}

jint java::io::FileInputStream::read()
{
	return call_method<
		java::io::FileInputStream::J2CPP_CLASS_NAME,
		java::io::FileInputStream::J2CPP_METHOD_NAME(8),
		java::io::FileInputStream::J2CPP_METHOD_SIGNATURE(8), 
		jint >
	(get_jobject());
}

jint java::io::FileInputStream::read(local_ref< array<jbyte,1> > const &a0)
{
	return call_method<
		java::io::FileInputStream::J2CPP_CLASS_NAME,
		java::io::FileInputStream::J2CPP_METHOD_NAME(9),
		java::io::FileInputStream::J2CPP_METHOD_SIGNATURE(9), 
		jint >
	(get_jobject(), a0);
}

jint java::io::FileInputStream::read(local_ref< array<jbyte,1> > const &a0, jint a1, jint a2)
{
	return call_method<
		java::io::FileInputStream::J2CPP_CLASS_NAME,
		java::io::FileInputStream::J2CPP_METHOD_NAME(10),
		java::io::FileInputStream::J2CPP_METHOD_SIGNATURE(10), 
		jint >
	(get_jobject(), a0, a1, a2);
}

jlong java::io::FileInputStream::skip(jlong a0)
{
	return call_method<
		java::io::FileInputStream::J2CPP_CLASS_NAME,
		java::io::FileInputStream::J2CPP_METHOD_NAME(11),
		java::io::FileInputStream::J2CPP_METHOD_SIGNATURE(11), 
		jlong >
	(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(java::io::FileInputStream,"java/io/FileInputStream")
J2CPP_DEFINE_METHOD(java::io::FileInputStream,0,"<init>","(Ljava/io/File;)V")
J2CPP_DEFINE_METHOD(java::io::FileInputStream,1,"<init>","(Ljava/io/FileDescriptor;)V")
J2CPP_DEFINE_METHOD(java::io::FileInputStream,2,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::io::FileInputStream,3,"available","()I")
J2CPP_DEFINE_METHOD(java::io::FileInputStream,4,"close","()V")
J2CPP_DEFINE_METHOD(java::io::FileInputStream,5,"finalize","()V")
J2CPP_DEFINE_METHOD(java::io::FileInputStream,6,"getChannel","()Ljava/nio/channels/FileChannel;")
J2CPP_DEFINE_METHOD(java::io::FileInputStream,7,"getFD","()Ljava/io/FileDescriptor;")
J2CPP_DEFINE_METHOD(java::io::FileInputStream,8,"read","()I")
J2CPP_DEFINE_METHOD(java::io::FileInputStream,9,"read","([B)I")
J2CPP_DEFINE_METHOD(java::io::FileInputStream,10,"read","([BII)I")
J2CPP_DEFINE_METHOD(java::io::FileInputStream,11,"skip","(J)J")

} //namespace j2cpp

#endif //J2CPP_JAVA_IO_FILEINPUTSTREAM_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
