/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.security.InvalidParameterException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_INVALIDPARAMETEREXCEPTION_HPP_DECL
#define J2CPP_JAVA_SECURITY_INVALIDPARAMETEREXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class IllegalArgumentException; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace security {

	class InvalidParameterException;
	class InvalidParameterException
		: public object<InvalidParameterException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit InvalidParameterException(jobject jobj)
		: object<InvalidParameterException>(jobj)
		{
		}

		operator local_ref<java::lang::IllegalArgumentException>() const;


		InvalidParameterException(local_ref< java::lang::String > const&);
		InvalidParameterException();
	}; //class InvalidParameterException

} //namespace security
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_INVALIDPARAMETEREXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_INVALIDPARAMETEREXCEPTION_HPP_IMPL
#define J2CPP_JAVA_SECURITY_INVALIDPARAMETEREXCEPTION_HPP_IMPL

namespace j2cpp {



java::security::InvalidParameterException::operator local_ref<java::lang::IllegalArgumentException>() const
{
	return local_ref<java::lang::IllegalArgumentException>(get_jobject());
}


java::security::InvalidParameterException::InvalidParameterException(local_ref< java::lang::String > const &a0)
: object<java::security::InvalidParameterException>(
	call_new_object<
		java::security::InvalidParameterException::J2CPP_CLASS_NAME,
		java::security::InvalidParameterException::J2CPP_METHOD_NAME(0),
		java::security::InvalidParameterException::J2CPP_METHOD_SIGNATURE(0)>
	(a0)
)
{
}



java::security::InvalidParameterException::InvalidParameterException()
: object<java::security::InvalidParameterException>(
	call_new_object<
		java::security::InvalidParameterException::J2CPP_CLASS_NAME,
		java::security::InvalidParameterException::J2CPP_METHOD_NAME(1),
		java::security::InvalidParameterException::J2CPP_METHOD_SIGNATURE(1)>
	()
)
{
}



J2CPP_DEFINE_CLASS(java::security::InvalidParameterException,"java/security/InvalidParameterException")
J2CPP_DEFINE_METHOD(java::security::InvalidParameterException,0,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::security::InvalidParameterException,1,"<init>","()V")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_INVALIDPARAMETEREXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
