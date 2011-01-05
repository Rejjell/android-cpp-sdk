/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.lang.IllegalMonitorStateException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_ILLEGALMONITORSTATEEXCEPTION_HPP_DECL
#define J2CPP_JAVA_LANG_ILLEGALMONITORSTATEEXCEPTION_HPP_DECL


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

	class IllegalMonitorStateException;
	class IllegalMonitorStateException
		: public object<IllegalMonitorStateException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit IllegalMonitorStateException(jobject jobj)
		: object<IllegalMonitorStateException>(jobj)
		{
		}

		operator local_ref<java::io::Serializable>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::lang::RuntimeException>() const;
		operator local_ref<java::lang::Throwable>() const;
		operator local_ref<java::lang::Exception>() const;


		IllegalMonitorStateException();
		IllegalMonitorStateException(local_ref< java::lang::String > const&);
	}; //class IllegalMonitorStateException

} //namespace lang
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_ILLEGALMONITORSTATEEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_ILLEGALMONITORSTATEEXCEPTION_HPP_IMPL
#define J2CPP_JAVA_LANG_ILLEGALMONITORSTATEEXCEPTION_HPP_IMPL

namespace j2cpp {



java::lang::IllegalMonitorStateException::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}

java::lang::IllegalMonitorStateException::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::lang::IllegalMonitorStateException::operator local_ref<java::lang::RuntimeException>() const
{
	return local_ref<java::lang::RuntimeException>(get_jobject());
}

java::lang::IllegalMonitorStateException::operator local_ref<java::lang::Throwable>() const
{
	return local_ref<java::lang::Throwable>(get_jobject());
}

java::lang::IllegalMonitorStateException::operator local_ref<java::lang::Exception>() const
{
	return local_ref<java::lang::Exception>(get_jobject());
}


java::lang::IllegalMonitorStateException::IllegalMonitorStateException()
: object<java::lang::IllegalMonitorStateException>(
	call_new_object<
		java::lang::IllegalMonitorStateException::J2CPP_CLASS_NAME,
		java::lang::IllegalMonitorStateException::J2CPP_METHOD_NAME(0),
		java::lang::IllegalMonitorStateException::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}



java::lang::IllegalMonitorStateException::IllegalMonitorStateException(local_ref< java::lang::String > const &a0)
: object<java::lang::IllegalMonitorStateException>(
	call_new_object<
		java::lang::IllegalMonitorStateException::J2CPP_CLASS_NAME,
		java::lang::IllegalMonitorStateException::J2CPP_METHOD_NAME(1),
		java::lang::IllegalMonitorStateException::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}



J2CPP_DEFINE_CLASS(java::lang::IllegalMonitorStateException,"java/lang/IllegalMonitorStateException")
J2CPP_DEFINE_METHOD(java::lang::IllegalMonitorStateException,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::lang::IllegalMonitorStateException,1,"<init>","(Ljava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_ILLEGALMONITORSTATEEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
