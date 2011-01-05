/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.io.FileDescriptor
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_FILEDESCRIPTOR_HPP_DECL
#define J2CPP_JAVA_IO_FILEDESCRIPTOR_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>


namespace j2cpp {

namespace java { namespace io {

	class FileDescriptor;
	class FileDescriptor
		: public object<FileDescriptor>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)

		explicit FileDescriptor(jobject jobj)
		: object<FileDescriptor>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		FileDescriptor();
		void sync();
		jboolean valid();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::io::FileDescriptor > > in;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< java::io::FileDescriptor > > out;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< java::io::FileDescriptor > > err;
	}; //class FileDescriptor

} //namespace io
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_IO_FILEDESCRIPTOR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_FILEDESCRIPTOR_HPP_IMPL
#define J2CPP_JAVA_IO_FILEDESCRIPTOR_HPP_IMPL

namespace j2cpp {



java::io::FileDescriptor::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


java::io::FileDescriptor::FileDescriptor()
: object<java::io::FileDescriptor>(
	call_new_object<
		java::io::FileDescriptor::J2CPP_CLASS_NAME,
		java::io::FileDescriptor::J2CPP_METHOD_NAME(0),
		java::io::FileDescriptor::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}


void java::io::FileDescriptor::sync()
{
	return call_method<
		java::io::FileDescriptor::J2CPP_CLASS_NAME,
		java::io::FileDescriptor::J2CPP_METHOD_NAME(1),
		java::io::FileDescriptor::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject());
}

jboolean java::io::FileDescriptor::valid()
{
	return call_method<
		java::io::FileDescriptor::J2CPP_CLASS_NAME,
		java::io::FileDescriptor::J2CPP_METHOD_NAME(2),
		java::io::FileDescriptor::J2CPP_METHOD_SIGNATURE(2), 
		jboolean
	>(get_jobject());
}



static_field<
	java::io::FileDescriptor::J2CPP_CLASS_NAME,
	java::io::FileDescriptor::J2CPP_FIELD_NAME(0),
	java::io::FileDescriptor::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::io::FileDescriptor >
> java::io::FileDescriptor::in;

static_field<
	java::io::FileDescriptor::J2CPP_CLASS_NAME,
	java::io::FileDescriptor::J2CPP_FIELD_NAME(1),
	java::io::FileDescriptor::J2CPP_FIELD_SIGNATURE(1),
	local_ref< java::io::FileDescriptor >
> java::io::FileDescriptor::out;

static_field<
	java::io::FileDescriptor::J2CPP_CLASS_NAME,
	java::io::FileDescriptor::J2CPP_FIELD_NAME(2),
	java::io::FileDescriptor::J2CPP_FIELD_SIGNATURE(2),
	local_ref< java::io::FileDescriptor >
> java::io::FileDescriptor::err;


J2CPP_DEFINE_CLASS(java::io::FileDescriptor,"java/io/FileDescriptor")
J2CPP_DEFINE_METHOD(java::io::FileDescriptor,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::io::FileDescriptor,1,"sync","()V")
J2CPP_DEFINE_METHOD(java::io::FileDescriptor,2,"valid","()Z")
J2CPP_DEFINE_METHOD(java::io::FileDescriptor,3,"<clinit>","()V")
J2CPP_DEFINE_FIELD(java::io::FileDescriptor,0,"in","Ljava/io/FileDescriptor;")
J2CPP_DEFINE_FIELD(java::io::FileDescriptor,1,"out","Ljava/io/FileDescriptor;")
J2CPP_DEFINE_FIELD(java::io::FileDescriptor,2,"err","Ljava/io/FileDescriptor;")

} //namespace j2cpp

#endif //J2CPP_JAVA_IO_FILEDESCRIPTOR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
