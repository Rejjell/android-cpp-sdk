/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.security.DomainCombiner
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_DOMAINCOMBINER_HPP_DECL
#define J2CPP_JAVA_SECURITY_DOMAINCOMBINER_HPP_DECL


namespace j2cpp { namespace java { namespace security { class ProtectionDomain; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/security/ProtectionDomain.hpp>


namespace j2cpp {

namespace java { namespace security {

	class DomainCombiner;
	class DomainCombiner
		: public object<DomainCombiner>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		explicit DomainCombiner(jobject jobj)
		: object<DomainCombiner>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		local_ref< array< local_ref< java::security::ProtectionDomain >, 1> > combine(local_ref< array< local_ref< java::security::ProtectionDomain >, 1> >  const&, local_ref< array< local_ref< java::security::ProtectionDomain >, 1> >  const&);
	}; //class DomainCombiner

} //namespace security
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_DOMAINCOMBINER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_DOMAINCOMBINER_HPP_IMPL
#define J2CPP_JAVA_SECURITY_DOMAINCOMBINER_HPP_IMPL

namespace j2cpp {



java::security::DomainCombiner::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

local_ref< array< local_ref< java::security::ProtectionDomain >, 1> > java::security::DomainCombiner::combine(local_ref< array< local_ref< java::security::ProtectionDomain >, 1> > const &a0, local_ref< array< local_ref< java::security::ProtectionDomain >, 1> > const &a1)
{
	return call_method<
		java::security::DomainCombiner::J2CPP_CLASS_NAME,
		java::security::DomainCombiner::J2CPP_METHOD_NAME(0),
		java::security::DomainCombiner::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< array< local_ref< java::security::ProtectionDomain >, 1> >
	>(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(java::security::DomainCombiner,"java/security/DomainCombiner")
J2CPP_DEFINE_METHOD(java::security::DomainCombiner,0,"combine","([java.security.ProtectionDomain[java.security.ProtectionDomain)[java.security.ProtectionDomain")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_DOMAINCOMBINER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
