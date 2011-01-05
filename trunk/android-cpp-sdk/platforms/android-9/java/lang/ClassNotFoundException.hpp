/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.lang.ClassNotFoundException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_CLASSNOTFOUNDEXCEPTION_HPP_DECL
#define J2CPP_JAVA_LANG_CLASSNOTFOUNDEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Exception; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Throwable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace io { class Serializable; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/Throwable.hpp>


namespace j2cpp {

namespace java { namespace lang {

	class ClassNotFoundException;
	class ClassNotFoundException
		: public object<ClassNotFoundException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)

		explicit ClassNotFoundException(jobject jobj)
		: object<ClassNotFoundException>(jobj)
		{
		}

		operator local_ref<java::lang::Exception>() const;
		operator local_ref<java::lang::Throwable>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::io::Serializable>() const;


		ClassNotFoundException();
		ClassNotFoundException(local_ref< java::lang::String > const&);
		ClassNotFoundException(local_ref< java::lang::String > const&, local_ref< java::lang::Throwable > const&);
		local_ref< java::lang::Throwable > getException();
		local_ref< java::lang::Throwable > getCause();
	}; //class ClassNotFoundException

} //namespace lang
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_CLASSNOTFOUNDEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_CLASSNOTFOUNDEXCEPTION_HPP_IMPL
#define J2CPP_JAVA_LANG_CLASSNOTFOUNDEXCEPTION_HPP_IMPL

namespace j2cpp {



java::lang::ClassNotFoundException::operator local_ref<java::lang::Exception>() const
{
	return local_ref<java::lang::Exception>(get_jobject());
}

java::lang::ClassNotFoundException::operator local_ref<java::lang::Throwable>() const
{
	return local_ref<java::lang::Throwable>(get_jobject());
}

java::lang::ClassNotFoundException::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::lang::ClassNotFoundException::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}


java::lang::ClassNotFoundException::ClassNotFoundException()
: object<java::lang::ClassNotFoundException>(
	call_new_object<
		java::lang::ClassNotFoundException::J2CPP_CLASS_NAME,
		java::lang::ClassNotFoundException::J2CPP_METHOD_NAME(0),
		java::lang::ClassNotFoundException::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}



java::lang::ClassNotFoundException::ClassNotFoundException(local_ref< java::lang::String > const &a0)
: object<java::lang::ClassNotFoundException>(
	call_new_object<
		java::lang::ClassNotFoundException::J2CPP_CLASS_NAME,
		java::lang::ClassNotFoundException::J2CPP_METHOD_NAME(1),
		java::lang::ClassNotFoundException::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}



java::lang::ClassNotFoundException::ClassNotFoundException(local_ref< java::lang::String > const &a0, local_ref< java::lang::Throwable > const &a1)
: object<java::lang::ClassNotFoundException>(
	call_new_object<
		java::lang::ClassNotFoundException::J2CPP_CLASS_NAME,
		java::lang::ClassNotFoundException::J2CPP_METHOD_NAME(2),
		java::lang::ClassNotFoundException::J2CPP_METHOD_SIGNATURE(2)
	>(a0, a1)
)
{
}


local_ref< java::lang::Throwable > java::lang::ClassNotFoundException::getException()
{
	return call_method<
		java::lang::ClassNotFoundException::J2CPP_CLASS_NAME,
		java::lang::ClassNotFoundException::J2CPP_METHOD_NAME(3),
		java::lang::ClassNotFoundException::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::lang::Throwable >
	>(get_jobject());
}

local_ref< java::lang::Throwable > java::lang::ClassNotFoundException::getCause()
{
	return call_method<
		java::lang::ClassNotFoundException::J2CPP_CLASS_NAME,
		java::lang::ClassNotFoundException::J2CPP_METHOD_NAME(4),
		java::lang::ClassNotFoundException::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::lang::Throwable >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(java::lang::ClassNotFoundException,"java/lang/ClassNotFoundException")
J2CPP_DEFINE_METHOD(java::lang::ClassNotFoundException,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::lang::ClassNotFoundException,1,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::lang::ClassNotFoundException,2,"<init>","(Ljava/lang/String;Ljava/lang/Throwable;)V")
J2CPP_DEFINE_METHOD(java::lang::ClassNotFoundException,3,"getException","()Ljava/lang/Throwable;")
J2CPP_DEFINE_METHOD(java::lang::ClassNotFoundException,4,"getCause","()Ljava/lang/Throwable;")

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_CLASSNOTFOUNDEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
