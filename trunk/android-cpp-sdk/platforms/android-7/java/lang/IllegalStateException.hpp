/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.lang.IllegalStateException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_ILLEGALSTATEEXCEPTION_HPP_DECL
#define J2CPP_JAVA_LANG_ILLEGALSTATEEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class RuntimeException; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Throwable; } } }
namespace j2cpp { namespace java { namespace lang { class Exception; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/Throwable.hpp>


namespace j2cpp {

namespace java { namespace lang {

	class IllegalStateException;
	class IllegalStateException
		: public object<IllegalStateException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		explicit IllegalStateException(jobject jobj)
		: object<IllegalStateException>(jobj)
		{
		}

		operator local_ref<java::io::Serializable>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::lang::RuntimeException>() const;
		operator local_ref<java::lang::Throwable>() const;
		operator local_ref<java::lang::Exception>() const;


		IllegalStateException();
		IllegalStateException(local_ref< java::lang::String > const&);
		IllegalStateException(local_ref< java::lang::String > const&, local_ref< java::lang::Throwable > const&);
		IllegalStateException(local_ref< java::lang::Throwable > const&);
	}; //class IllegalStateException

} //namespace lang
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_ILLEGALSTATEEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_ILLEGALSTATEEXCEPTION_HPP_IMPL
#define J2CPP_JAVA_LANG_ILLEGALSTATEEXCEPTION_HPP_IMPL

namespace j2cpp {



java::lang::IllegalStateException::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}

java::lang::IllegalStateException::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::lang::IllegalStateException::operator local_ref<java::lang::RuntimeException>() const
{
	return local_ref<java::lang::RuntimeException>(get_jobject());
}

java::lang::IllegalStateException::operator local_ref<java::lang::Throwable>() const
{
	return local_ref<java::lang::Throwable>(get_jobject());
}

java::lang::IllegalStateException::operator local_ref<java::lang::Exception>() const
{
	return local_ref<java::lang::Exception>(get_jobject());
}


java::lang::IllegalStateException::IllegalStateException()
: object<java::lang::IllegalStateException>(
	call_new_object<
		java::lang::IllegalStateException::J2CPP_CLASS_NAME,
		java::lang::IllegalStateException::J2CPP_METHOD_NAME(0),
		java::lang::IllegalStateException::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}



java::lang::IllegalStateException::IllegalStateException(local_ref< java::lang::String > const &a0)
: object<java::lang::IllegalStateException>(
	call_new_object<
		java::lang::IllegalStateException::J2CPP_CLASS_NAME,
		java::lang::IllegalStateException::J2CPP_METHOD_NAME(1),
		java::lang::IllegalStateException::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}



java::lang::IllegalStateException::IllegalStateException(local_ref< java::lang::String > const &a0, local_ref< java::lang::Throwable > const &a1)
: object<java::lang::IllegalStateException>(
	call_new_object<
		java::lang::IllegalStateException::J2CPP_CLASS_NAME,
		java::lang::IllegalStateException::J2CPP_METHOD_NAME(2),
		java::lang::IllegalStateException::J2CPP_METHOD_SIGNATURE(2)
	>(a0, a1)
)
{
}



java::lang::IllegalStateException::IllegalStateException(local_ref< java::lang::Throwable > const &a0)
: object<java::lang::IllegalStateException>(
	call_new_object<
		java::lang::IllegalStateException::J2CPP_CLASS_NAME,
		java::lang::IllegalStateException::J2CPP_METHOD_NAME(3),
		java::lang::IllegalStateException::J2CPP_METHOD_SIGNATURE(3)
	>(a0)
)
{
}



J2CPP_DEFINE_CLASS(java::lang::IllegalStateException,"java/lang/IllegalStateException")
J2CPP_DEFINE_METHOD(java::lang::IllegalStateException,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::lang::IllegalStateException,1,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::lang::IllegalStateException,2,"<init>","(Ljava/lang/String;Ljava/lang/Throwable;)V")
J2CPP_DEFINE_METHOD(java::lang::IllegalStateException,3,"<init>","(Ljava/lang/Throwable;)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_ILLEGALSTATEEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
