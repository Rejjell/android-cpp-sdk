/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.io.FileOutputStream
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_FILEOUTPUTSTREAM_HPP_DECL
#define J2CPP_JAVA_IO_FILEOUTPUTSTREAM_HPP_DECL


namespace j2cpp { namespace java { namespace nio { namespace channels { class FileChannel; } } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace io { class File; } } }
namespace j2cpp { namespace java { namespace io { class FileDescriptor; } } }
namespace j2cpp { namespace java { namespace io { class Closeable; } } }
namespace j2cpp { namespace java { namespace io { class Flushable; } } }
namespace j2cpp { namespace java { namespace io { class OutputStream; } } }


#include <java/io/Closeable.hpp>
#include <java/io/File.hpp>
#include <java/io/FileDescriptor.hpp>
#include <java/io/Flushable.hpp>
#include <java/io/OutputStream.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/nio/channels/FileChannel.hpp>


namespace j2cpp {

namespace java { namespace io {

	class FileOutputStream;
	class FileOutputStream
		: public object<FileOutputStream>
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

		explicit FileOutputStream(jobject jobj)
		: object<FileOutputStream>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::io::Closeable>() const;
		operator local_ref<java::io::Flushable>() const;
		operator local_ref<java::io::OutputStream>() const;


		FileOutputStream(local_ref< java::io::File > const&);
		FileOutputStream(local_ref< java::io::File > const&, jboolean);
		FileOutputStream(local_ref< java::io::FileDescriptor > const&);
		FileOutputStream(local_ref< java::lang::String > const&);
		FileOutputStream(local_ref< java::lang::String > const&, jboolean);
		void close();
		local_ref< java::nio::channels::FileChannel > getChannel();
		local_ref< java::io::FileDescriptor > getFD();
		void write(local_ref< array<jbyte,1> >  const&);
		void write(local_ref< array<jbyte,1> >  const&, jint, jint);
		void write(jint);
	}; //class FileOutputStream

} //namespace io
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_IO_FILEOUTPUTSTREAM_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_FILEOUTPUTSTREAM_HPP_IMPL
#define J2CPP_JAVA_IO_FILEOUTPUTSTREAM_HPP_IMPL

namespace j2cpp {



java::io::FileOutputStream::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::io::FileOutputStream::operator local_ref<java::io::Closeable>() const
{
	return local_ref<java::io::Closeable>(get_jobject());
}

java::io::FileOutputStream::operator local_ref<java::io::Flushable>() const
{
	return local_ref<java::io::Flushable>(get_jobject());
}

java::io::FileOutputStream::operator local_ref<java::io::OutputStream>() const
{
	return local_ref<java::io::OutputStream>(get_jobject());
}


java::io::FileOutputStream::FileOutputStream(local_ref< java::io::File > const &a0)
: object<java::io::FileOutputStream>(
	call_new_object<
		java::io::FileOutputStream::J2CPP_CLASS_NAME,
		java::io::FileOutputStream::J2CPP_METHOD_NAME(0),
		java::io::FileOutputStream::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}



java::io::FileOutputStream::FileOutputStream(local_ref< java::io::File > const &a0, jboolean a1)
: object<java::io::FileOutputStream>(
	call_new_object<
		java::io::FileOutputStream::J2CPP_CLASS_NAME,
		java::io::FileOutputStream::J2CPP_METHOD_NAME(1),
		java::io::FileOutputStream::J2CPP_METHOD_SIGNATURE(1)
	>(a0, a1)
)
{
}



java::io::FileOutputStream::FileOutputStream(local_ref< java::io::FileDescriptor > const &a0)
: object<java::io::FileOutputStream>(
	call_new_object<
		java::io::FileOutputStream::J2CPP_CLASS_NAME,
		java::io::FileOutputStream::J2CPP_METHOD_NAME(2),
		java::io::FileOutputStream::J2CPP_METHOD_SIGNATURE(2)
	>(a0)
)
{
}



java::io::FileOutputStream::FileOutputStream(local_ref< java::lang::String > const &a0)
: object<java::io::FileOutputStream>(
	call_new_object<
		java::io::FileOutputStream::J2CPP_CLASS_NAME,
		java::io::FileOutputStream::J2CPP_METHOD_NAME(3),
		java::io::FileOutputStream::J2CPP_METHOD_SIGNATURE(3)
	>(a0)
)
{
}



java::io::FileOutputStream::FileOutputStream(local_ref< java::lang::String > const &a0, jboolean a1)
: object<java::io::FileOutputStream>(
	call_new_object<
		java::io::FileOutputStream::J2CPP_CLASS_NAME,
		java::io::FileOutputStream::J2CPP_METHOD_NAME(4),
		java::io::FileOutputStream::J2CPP_METHOD_SIGNATURE(4)
	>(a0, a1)
)
{
}


void java::io::FileOutputStream::close()
{
	return call_method<
		java::io::FileOutputStream::J2CPP_CLASS_NAME,
		java::io::FileOutputStream::J2CPP_METHOD_NAME(5),
		java::io::FileOutputStream::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject());
}


local_ref< java::nio::channels::FileChannel > java::io::FileOutputStream::getChannel()
{
	return call_method<
		java::io::FileOutputStream::J2CPP_CLASS_NAME,
		java::io::FileOutputStream::J2CPP_METHOD_NAME(7),
		java::io::FileOutputStream::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< java::nio::channels::FileChannel >
	>(get_jobject());
}

local_ref< java::io::FileDescriptor > java::io::FileOutputStream::getFD()
{
	return call_method<
		java::io::FileOutputStream::J2CPP_CLASS_NAME,
		java::io::FileOutputStream::J2CPP_METHOD_NAME(8),
		java::io::FileOutputStream::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< java::io::FileDescriptor >
	>(get_jobject());
}

void java::io::FileOutputStream::write(local_ref< array<jbyte,1> > const &a0)
{
	return call_method<
		java::io::FileOutputStream::J2CPP_CLASS_NAME,
		java::io::FileOutputStream::J2CPP_METHOD_NAME(9),
		java::io::FileOutputStream::J2CPP_METHOD_SIGNATURE(9), 
		void
	>(get_jobject(), a0);
}

void java::io::FileOutputStream::write(local_ref< array<jbyte,1> > const &a0, jint a1, jint a2)
{
	return call_method<
		java::io::FileOutputStream::J2CPP_CLASS_NAME,
		java::io::FileOutputStream::J2CPP_METHOD_NAME(10),
		java::io::FileOutputStream::J2CPP_METHOD_SIGNATURE(10), 
		void
	>(get_jobject(), a0, a1, a2);
}

void java::io::FileOutputStream::write(jint a0)
{
	return call_method<
		java::io::FileOutputStream::J2CPP_CLASS_NAME,
		java::io::FileOutputStream::J2CPP_METHOD_NAME(11),
		java::io::FileOutputStream::J2CPP_METHOD_SIGNATURE(11), 
		void
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(java::io::FileOutputStream,"java/io/FileOutputStream")
J2CPP_DEFINE_METHOD(java::io::FileOutputStream,0,"<init>","(Ljava/io/File;)V")
J2CPP_DEFINE_METHOD(java::io::FileOutputStream,1,"<init>","(Ljava/io/File;Z)V")
J2CPP_DEFINE_METHOD(java::io::FileOutputStream,2,"<init>","(Ljava/io/FileDescriptor;)V")
J2CPP_DEFINE_METHOD(java::io::FileOutputStream,3,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::io::FileOutputStream,4,"<init>","(Ljava/lang/String;Z)V")
J2CPP_DEFINE_METHOD(java::io::FileOutputStream,5,"close","()V")
J2CPP_DEFINE_METHOD(java::io::FileOutputStream,6,"finalize","()V")
J2CPP_DEFINE_METHOD(java::io::FileOutputStream,7,"getChannel","()Ljava/nio/channels/FileChannel;")
J2CPP_DEFINE_METHOD(java::io::FileOutputStream,8,"getFD","()Ljava/io/FileDescriptor;")
J2CPP_DEFINE_METHOD(java::io::FileOutputStream,9,"write","([B)V")
J2CPP_DEFINE_METHOD(java::io::FileOutputStream,10,"write","([BII)V")
J2CPP_DEFINE_METHOD(java::io::FileOutputStream,11,"write","(I)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_IO_FILEOUTPUTSTREAM_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
