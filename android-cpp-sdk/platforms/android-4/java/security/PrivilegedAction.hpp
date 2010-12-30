/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.security.PrivilegedAction
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_PRIVILEGEDACTION_HPP_DECL
#define J2CPP_JAVA_SECURITY_PRIVILEGEDACTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>


namespace j2cpp {

namespace java { namespace security {

	class PrivilegedAction;
	class PrivilegedAction
		: public object<PrivilegedAction>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		explicit PrivilegedAction(jobject jobj)
		: object<PrivilegedAction>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		local_ref< java::lang::Object > run();
	}; //class PrivilegedAction

} //namespace security
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_PRIVILEGEDACTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_PRIVILEGEDACTION_HPP_IMPL
#define J2CPP_JAVA_SECURITY_PRIVILEGEDACTION_HPP_IMPL

namespace j2cpp {



java::security::PrivilegedAction::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

local_ref< java::lang::Object > java::security::PrivilegedAction::run()
{
	return call_method<
		java::security::PrivilegedAction::J2CPP_CLASS_NAME,
		java::security::PrivilegedAction::J2CPP_METHOD_NAME(0),
		java::security::PrivilegedAction::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< java::lang::Object > >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(java::security::PrivilegedAction,"java/security/PrivilegedAction")
J2CPP_DEFINE_METHOD(java::security::PrivilegedAction,0,"run","()Ljava/lang/Object;")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_PRIVILEGEDACTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
