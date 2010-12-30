/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.security.Principal
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_PRINCIPAL_HPP_DECL
#define J2CPP_JAVA_SECURITY_PRINCIPAL_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace security {

	class Principal;
	class Principal
		: public object<Principal>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		explicit Principal(jobject jobj)
		: object<Principal>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		jboolean equals(local_ref< java::lang::Object >  const&);
		local_ref< java::lang::String > getName();
		jint hashCode();
		local_ref< java::lang::String > toString();
	}; //class Principal

} //namespace security
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_PRINCIPAL_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_PRINCIPAL_HPP_IMPL
#define J2CPP_JAVA_SECURITY_PRINCIPAL_HPP_IMPL

namespace j2cpp {



java::security::Principal::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

jboolean java::security::Principal::equals(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::security::Principal::J2CPP_CLASS_NAME,
		java::security::Principal::J2CPP_METHOD_NAME(0),
		java::security::Principal::J2CPP_METHOD_SIGNATURE(0), 
		jboolean >
	(get_jobject(), a0);
}

local_ref< java::lang::String > java::security::Principal::getName()
{
	return call_method<
		java::security::Principal::J2CPP_CLASS_NAME,
		java::security::Principal::J2CPP_METHOD_NAME(1),
		java::security::Principal::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::String > >
	(get_jobject());
}

jint java::security::Principal::hashCode()
{
	return call_method<
		java::security::Principal::J2CPP_CLASS_NAME,
		java::security::Principal::J2CPP_METHOD_NAME(2),
		java::security::Principal::J2CPP_METHOD_SIGNATURE(2), 
		jint >
	(get_jobject());
}

local_ref< java::lang::String > java::security::Principal::toString()
{
	return call_method<
		java::security::Principal::J2CPP_CLASS_NAME,
		java::security::Principal::J2CPP_METHOD_NAME(3),
		java::security::Principal::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::lang::String > >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(java::security::Principal,"java/security/Principal")
J2CPP_DEFINE_METHOD(java::security::Principal,0,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::security::Principal,1,"getName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::security::Principal,2,"hashCode","()I")
J2CPP_DEFINE_METHOD(java::security::Principal,3,"toString","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_PRINCIPAL_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
