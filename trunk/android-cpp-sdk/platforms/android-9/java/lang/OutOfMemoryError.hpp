/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.lang.OutOfMemoryError
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_OUTOFMEMORYERROR_HPP_DECL
#define J2CPP_JAVA_LANG_OUTOFMEMORYERROR_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Throwable; } } }
namespace j2cpp { namespace java { namespace lang { class VirtualMachineError; } } }
namespace j2cpp { namespace java { namespace lang { class Error; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace io { class Serializable; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Error.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/Throwable.hpp>
#include <java/lang/VirtualMachineError.hpp>


namespace j2cpp {

namespace java { namespace lang {

	class OutOfMemoryError;
	class OutOfMemoryError
		: public object<OutOfMemoryError>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit OutOfMemoryError(jobject jobj)
		: object<OutOfMemoryError>(jobj)
		{
		}

		operator local_ref<java::lang::Throwable>() const;
		operator local_ref<java::lang::VirtualMachineError>() const;
		operator local_ref<java::lang::Error>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::io::Serializable>() const;


		OutOfMemoryError();
		OutOfMemoryError(local_ref< java::lang::String > const&);
	}; //class OutOfMemoryError

} //namespace lang
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_OUTOFMEMORYERROR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_OUTOFMEMORYERROR_HPP_IMPL
#define J2CPP_JAVA_LANG_OUTOFMEMORYERROR_HPP_IMPL

namespace j2cpp {



java::lang::OutOfMemoryError::operator local_ref<java::lang::Throwable>() const
{
	return local_ref<java::lang::Throwable>(get_jobject());
}

java::lang::OutOfMemoryError::operator local_ref<java::lang::VirtualMachineError>() const
{
	return local_ref<java::lang::VirtualMachineError>(get_jobject());
}

java::lang::OutOfMemoryError::operator local_ref<java::lang::Error>() const
{
	return local_ref<java::lang::Error>(get_jobject());
}

java::lang::OutOfMemoryError::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::lang::OutOfMemoryError::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}


java::lang::OutOfMemoryError::OutOfMemoryError()
: object<java::lang::OutOfMemoryError>(
	call_new_object<
		java::lang::OutOfMemoryError::J2CPP_CLASS_NAME,
		java::lang::OutOfMemoryError::J2CPP_METHOD_NAME(0),
		java::lang::OutOfMemoryError::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}



java::lang::OutOfMemoryError::OutOfMemoryError(local_ref< java::lang::String > const &a0)
: object<java::lang::OutOfMemoryError>(
	call_new_object<
		java::lang::OutOfMemoryError::J2CPP_CLASS_NAME,
		java::lang::OutOfMemoryError::J2CPP_METHOD_NAME(1),
		java::lang::OutOfMemoryError::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}



J2CPP_DEFINE_CLASS(java::lang::OutOfMemoryError,"java/lang/OutOfMemoryError")
J2CPP_DEFINE_METHOD(java::lang::OutOfMemoryError,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::lang::OutOfMemoryError,1,"<init>","(Ljava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_OUTOFMEMORYERROR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
