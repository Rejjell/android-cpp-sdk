/*================================================================================
  code generated by: java2cpp
  class: javax.xml.xpath.XPathVariableResolver
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_XML_XPATH_XPATHVARIABLERESOLVER_HPP_DECL
#define J2CPP_JAVAX_XML_XPATH_XPATHVARIABLERESOLVER_HPP_DECL


namespace j2cpp { namespace javax { namespace xml { namespace namespace { class QName; } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <javax/xml/namespace/QName.hpp>


namespace j2cpp {

namespace javax { namespace xml { namespace xpath {

	class XPathVariableResolver;
	class XPathVariableResolver
		: public cpp_object<XPathVariableResolver>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		XPathVariableResolver(jobject jobj)
		: cpp_object<XPathVariableResolver>(jobj)
		{
		}

		local_ref< java::lang::Object > resolveVariable(local_ref< javax::xml::namespace::QName > const&);
	}; //class XPathVariableResolver

} //namespace xpath
} //namespace xml
} //namespace javax


} //namespace j2cpp

#endif //J2CPP_JAVAX_XML_XPATH_XPATHVARIABLERESOLVER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_XML_XPATH_XPATHVARIABLERESOLVER_HPP_IMPL
#define J2CPP_JAVAX_XML_XPATH_XPATHVARIABLERESOLVER_HPP_IMPL

namespace j2cpp {


local_ref< java::lang::Object > javax::xml::xpath::XPathVariableResolver::resolveVariable(local_ref< javax::xml::namespace::QName > const &a0)
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(javax::xml::xpath::XPathVariableResolver,"javax/xml/xpath/XPathVariableResolver")
J2CPP_DEFINE_METHOD(javax::xml::xpath::XPathVariableResolver,0,"resolveVariable","(Ljavax/xml/namespace/QName;)Ljava/lang/Object;")

} //namespace j2cpp

#endif //J2CPP_JAVAX_XML_XPATH_XPATHVARIABLERESOLVER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION