/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.xml.sax.ext.DeclHandler
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_XML_SAX_EXT_DECLHANDLER_HPP_DECL
#define J2CPP_ORG_XML_SAX_EXT_DECLHANDLER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace org { namespace xml { namespace sax { namespace ext {

	class DeclHandler;
	class DeclHandler
		: public object<DeclHandler>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		explicit DeclHandler(jobject jobj)
		: object<DeclHandler>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		void elementDecl(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		void attributeDecl(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		void internalEntityDecl(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		void externalEntityDecl(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
	}; //class DeclHandler

} //namespace ext
} //namespace sax
} //namespace xml
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_XML_SAX_EXT_DECLHANDLER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_XML_SAX_EXT_DECLHANDLER_HPP_IMPL
#define J2CPP_ORG_XML_SAX_EXT_DECLHANDLER_HPP_IMPL

namespace j2cpp {



org::xml::sax::ext::DeclHandler::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void org::xml::sax::ext::DeclHandler::elementDecl(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		org::xml::sax::ext::DeclHandler::J2CPP_CLASS_NAME,
		org::xml::sax::ext::DeclHandler::J2CPP_METHOD_NAME(0),
		org::xml::sax::ext::DeclHandler::J2CPP_METHOD_SIGNATURE(0), 
		void >
	(get_jobject(), a0, a1);
}

void org::xml::sax::ext::DeclHandler::attributeDecl(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::String > const &a2, local_ref< java::lang::String > const &a3, local_ref< java::lang::String > const &a4)
{
	return call_method<
		org::xml::sax::ext::DeclHandler::J2CPP_CLASS_NAME,
		org::xml::sax::ext::DeclHandler::J2CPP_METHOD_NAME(1),
		org::xml::sax::ext::DeclHandler::J2CPP_METHOD_SIGNATURE(1), 
		void >
	(get_jobject(), a0, a1, a2, a3, a4);
}

void org::xml::sax::ext::DeclHandler::internalEntityDecl(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		org::xml::sax::ext::DeclHandler::J2CPP_CLASS_NAME,
		org::xml::sax::ext::DeclHandler::J2CPP_METHOD_NAME(2),
		org::xml::sax::ext::DeclHandler::J2CPP_METHOD_SIGNATURE(2), 
		void >
	(get_jobject(), a0, a1);
}

void org::xml::sax::ext::DeclHandler::externalEntityDecl(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::String > const &a2)
{
	return call_method<
		org::xml::sax::ext::DeclHandler::J2CPP_CLASS_NAME,
		org::xml::sax::ext::DeclHandler::J2CPP_METHOD_NAME(3),
		org::xml::sax::ext::DeclHandler::J2CPP_METHOD_SIGNATURE(3), 
		void >
	(get_jobject(), a0, a1, a2);
}


J2CPP_DEFINE_CLASS(org::xml::sax::ext::DeclHandler,"org/xml/sax/ext/DeclHandler")
J2CPP_DEFINE_METHOD(org::xml::sax::ext::DeclHandler,0,"elementDecl","(Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::ext::DeclHandler,1,"attributeDecl","(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::ext::DeclHandler,2,"internalEntityDecl","(Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::ext::DeclHandler,3,"externalEntityDecl","(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_ORG_XML_SAX_EXT_DECLHANDLER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
