/*================================================================================
  code generated by: java2cpp
  class: org.w3c.dom.Document
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_W3C_DOM_DOCUMENT_HPP_DECL
#define J2CPP_ORG_W3C_DOM_DOCUMENT_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace org { namespace w3c { namespace dom { class ProcessingInstruction; } } } }
namespace j2cpp { namespace org { namespace w3c { namespace dom { class DocumentType; } } } }
namespace j2cpp { namespace org { namespace w3c { namespace dom { class DOMImplementation; } } } }
namespace j2cpp { namespace org { namespace w3c { namespace dom { class Comment; } } } }
namespace j2cpp { namespace org { namespace w3c { namespace dom { class Node; } } } }
namespace j2cpp { namespace org { namespace w3c { namespace dom { class DOMConfiguration; } } } }
namespace j2cpp { namespace org { namespace w3c { namespace dom { class EntityReference; } } } }
namespace j2cpp { namespace org { namespace w3c { namespace dom { class NodeList; } } } }
namespace j2cpp { namespace org { namespace w3c { namespace dom { class DocumentFragment; } } } }
namespace j2cpp { namespace org { namespace w3c { namespace dom { class Element; } } } }
namespace j2cpp { namespace org { namespace w3c { namespace dom { class Attr; } } } }
namespace j2cpp { namespace org { namespace w3c { namespace dom { class Text; } } } }
namespace j2cpp { namespace org { namespace w3c { namespace dom { class CDATASection; } } } }


#include <java/lang/String.hpp>
#include <org/w3c/dom/Attr.hpp>
#include <org/w3c/dom/CDATASection.hpp>
#include <org/w3c/dom/Comment.hpp>
#include <org/w3c/dom/DOMConfiguration.hpp>
#include <org/w3c/dom/DOMImplementation.hpp>
#include <org/w3c/dom/DocumentFragment.hpp>
#include <org/w3c/dom/DocumentType.hpp>
#include <org/w3c/dom/Element.hpp>
#include <org/w3c/dom/EntityReference.hpp>
#include <org/w3c/dom/Node.hpp>
#include <org/w3c/dom/NodeList.hpp>
#include <org/w3c/dom/ProcessingInstruction.hpp>
#include <org/w3c/dom/Text.hpp>


namespace j2cpp {

namespace org { namespace w3c { namespace dom {

	class Document;
	class Document
		: public cpp_object<Document>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)
		J2CPP_DECLARE_METHOD(6)
		J2CPP_DECLARE_METHOD(7)
		J2CPP_DECLARE_METHOD(8)
		J2CPP_DECLARE_METHOD(9)
		J2CPP_DECLARE_METHOD(10)
		J2CPP_DECLARE_METHOD(11)
		J2CPP_DECLARE_METHOD(12)
		J2CPP_DECLARE_METHOD(13)
		J2CPP_DECLARE_METHOD(14)
		J2CPP_DECLARE_METHOD(15)
		J2CPP_DECLARE_METHOD(16)
		J2CPP_DECLARE_METHOD(17)
		J2CPP_DECLARE_METHOD(18)
		J2CPP_DECLARE_METHOD(19)
		J2CPP_DECLARE_METHOD(20)
		J2CPP_DECLARE_METHOD(21)
		J2CPP_DECLARE_METHOD(22)
		J2CPP_DECLARE_METHOD(23)
		J2CPP_DECLARE_METHOD(24)
		J2CPP_DECLARE_METHOD(25)
		J2CPP_DECLARE_METHOD(26)
		J2CPP_DECLARE_METHOD(27)
		J2CPP_DECLARE_METHOD(28)
		J2CPP_DECLARE_METHOD(29)
		J2CPP_DECLARE_METHOD(30)

		Document(jobject jobj)
		: cpp_object<Document>(jobj)
		{
		}

		local_ref< org::w3c::dom::DocumentType > getDoctype();
		local_ref< org::w3c::dom::DOMImplementation > getImplementation();
		local_ref< org::w3c::dom::Element > getDocumentElement();
		local_ref< org::w3c::dom::Element > createElement(local_ref< java::lang::String > const&);
		local_ref< org::w3c::dom::DocumentFragment > createDocumentFragment();
		local_ref< org::w3c::dom::Text > createTextNode(local_ref< java::lang::String > const&);
		local_ref< org::w3c::dom::Comment > createComment(local_ref< java::lang::String > const&);
		local_ref< org::w3c::dom::CDATASection > createCDATASection(local_ref< java::lang::String > const&);
		local_ref< org::w3c::dom::ProcessingInstruction > createProcessingInstruction(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		local_ref< org::w3c::dom::Attr > createAttribute(local_ref< java::lang::String > const&);
		local_ref< org::w3c::dom::EntityReference > createEntityReference(local_ref< java::lang::String > const&);
		local_ref< org::w3c::dom::NodeList > getElementsByTagName(local_ref< java::lang::String > const&);
		local_ref< org::w3c::dom::Node > importNode(local_ref< org::w3c::dom::Node > const&, cpp_boolean const&);
		local_ref< org::w3c::dom::Element > createElementNS(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		local_ref< org::w3c::dom::Attr > createAttributeNS(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		local_ref< org::w3c::dom::NodeList > getElementsByTagNameNS(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		local_ref< org::w3c::dom::Element > getElementById(local_ref< java::lang::String > const&);
		local_ref< java::lang::String > getInputEncoding();
		local_ref< java::lang::String > getXmlEncoding();
		cpp_boolean getXmlStandalone();
		void setXmlStandalone(cpp_boolean const&);
		local_ref< java::lang::String > getXmlVersion();
		void setXmlVersion(local_ref< java::lang::String > const&);
		cpp_boolean getStrictErrorChecking();
		void setStrictErrorChecking(cpp_boolean const&);
		local_ref< java::lang::String > getDocumentURI();
		void setDocumentURI(local_ref< java::lang::String > const&);
		local_ref< org::w3c::dom::Node > adoptNode(local_ref< org::w3c::dom::Node > const&);
		local_ref< org::w3c::dom::DOMConfiguration > getDomConfig();
		void normalizeDocument();
		local_ref< org::w3c::dom::Node > renameNode(local_ref< org::w3c::dom::Node > const&, local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
	}; //class Document

} //namespace dom
} //namespace w3c
} //namespace org


} //namespace j2cpp

#endif //J2CPP_ORG_W3C_DOM_DOCUMENT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_W3C_DOM_DOCUMENT_HPP_IMPL
#define J2CPP_ORG_W3C_DOM_DOCUMENT_HPP_IMPL

namespace j2cpp {


local_ref< org::w3c::dom::DocumentType > org::w3c::dom::Document::getDoctype()
{
	return local_ref< org::w3c::dom::DocumentType >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

local_ref< org::w3c::dom::DOMImplementation > org::w3c::dom::Document::getImplementation()
{
	return local_ref< org::w3c::dom::DOMImplementation >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

local_ref< org::w3c::dom::Element > org::w3c::dom::Document::getDocumentElement()
{
	return local_ref< org::w3c::dom::Element >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

local_ref< org::w3c::dom::Element > org::w3c::dom::Document::createElement(local_ref< java::lang::String > const &a0)
{
	return local_ref< org::w3c::dom::Element >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< org::w3c::dom::DocumentFragment > org::w3c::dom::Document::createDocumentFragment()
{
	return local_ref< org::w3c::dom::DocumentFragment >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

local_ref< org::w3c::dom::Text > org::w3c::dom::Document::createTextNode(local_ref< java::lang::String > const &a0)
{
	return local_ref< org::w3c::dom::Text >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< org::w3c::dom::Comment > org::w3c::dom::Document::createComment(local_ref< java::lang::String > const &a0)
{
	return local_ref< org::w3c::dom::Comment >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< org::w3c::dom::CDATASection > org::w3c::dom::Document::createCDATASection(local_ref< java::lang::String > const &a0)
{
	return local_ref< org::w3c::dom::CDATASection >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< org::w3c::dom::ProcessingInstruction > org::w3c::dom::Document::createProcessingInstruction(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return local_ref< org::w3c::dom::ProcessingInstruction >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< org::w3c::dom::Attr > org::w3c::dom::Document::createAttribute(local_ref< java::lang::String > const &a0)
{
	return local_ref< org::w3c::dom::Attr >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< org::w3c::dom::EntityReference > org::w3c::dom::Document::createEntityReference(local_ref< java::lang::String > const &a0)
{
	return local_ref< org::w3c::dom::EntityReference >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< org::w3c::dom::NodeList > org::w3c::dom::Document::getElementsByTagName(local_ref< java::lang::String > const &a0)
{
	return local_ref< org::w3c::dom::NodeList >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< org::w3c::dom::Node > org::w3c::dom::Document::importNode(local_ref< org::w3c::dom::Node > const &a0, cpp_boolean const &a1)
{
	return local_ref< org::w3c::dom::Node >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< org::w3c::dom::Element > org::w3c::dom::Document::createElementNS(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return local_ref< org::w3c::dom::Element >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< org::w3c::dom::Attr > org::w3c::dom::Document::createAttributeNS(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return local_ref< org::w3c::dom::Attr >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< org::w3c::dom::NodeList > org::w3c::dom::Document::getElementsByTagNameNS(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return local_ref< org::w3c::dom::NodeList >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< org::w3c::dom::Element > org::w3c::dom::Document::getElementById(local_ref< java::lang::String > const &a0)
{
	return local_ref< org::w3c::dom::Element >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > org::w3c::dom::Document::getInputEncoding()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>()
		)
	);
}

local_ref< java::lang::String > org::w3c::dom::Document::getXmlEncoding()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), false>()
		)
	);
}

cpp_boolean org::w3c::dom::Document::getXmlStandalone()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(19), J2CPP_METHOD_SIGNATURE(19), false>()
		)
	);
}

void org::w3c::dom::Document::setXmlStandalone(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(20), J2CPP_METHOD_SIGNATURE(20), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > org::w3c::dom::Document::getXmlVersion()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(21), J2CPP_METHOD_SIGNATURE(21), false>()
		)
	);
}

void org::w3c::dom::Document::setXmlVersion(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(22), J2CPP_METHOD_SIGNATURE(22), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean org::w3c::dom::Document::getStrictErrorChecking()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(23), J2CPP_METHOD_SIGNATURE(23), false>()
		)
	);
}

void org::w3c::dom::Document::setStrictErrorChecking(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(24), J2CPP_METHOD_SIGNATURE(24), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > org::w3c::dom::Document::getDocumentURI()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(25), J2CPP_METHOD_SIGNATURE(25), false>()
		)
	);
}

void org::w3c::dom::Document::setDocumentURI(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(26), J2CPP_METHOD_SIGNATURE(26), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< org::w3c::dom::Node > org::w3c::dom::Document::adoptNode(local_ref< org::w3c::dom::Node > const &a0)
{
	return local_ref< org::w3c::dom::Node >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(27), J2CPP_METHOD_SIGNATURE(27), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< org::w3c::dom::DOMConfiguration > org::w3c::dom::Document::getDomConfig()
{
	return local_ref< org::w3c::dom::DOMConfiguration >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(28), J2CPP_METHOD_SIGNATURE(28), false>()
		)
	);
}

void org::w3c::dom::Document::normalizeDocument()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(29), J2CPP_METHOD_SIGNATURE(29), false>()
		)
	);
}

local_ref< org::w3c::dom::Node > org::w3c::dom::Document::renameNode(local_ref< org::w3c::dom::Node > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::String > const &a2)
{
	return local_ref< org::w3c::dom::Node >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(30), J2CPP_METHOD_SIGNATURE(30), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(org::w3c::dom::Document,"org/w3c/dom/Document")
J2CPP_DEFINE_METHOD(org::w3c::dom::Document,0,"getDoctype","()Lorg/w3c/dom/DocumentType;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Document,1,"getImplementation","()Lorg/w3c/dom/DOMImplementation;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Document,2,"getDocumentElement","()Lorg/w3c/dom/Element;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Document,3,"createElement","(Ljava/lang/String;)Lorg/w3c/dom/Element;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Document,4,"createDocumentFragment","()Lorg/w3c/dom/DocumentFragment;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Document,5,"createTextNode","(Ljava/lang/String;)Lorg/w3c/dom/Text;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Document,6,"createComment","(Ljava/lang/String;)Lorg/w3c/dom/Comment;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Document,7,"createCDATASection","(Ljava/lang/String;)Lorg/w3c/dom/CDATASection;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Document,8,"createProcessingInstruction","(Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/ProcessingInstruction;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Document,9,"createAttribute","(Ljava/lang/String;)Lorg/w3c/dom/Attr;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Document,10,"createEntityReference","(Ljava/lang/String;)Lorg/w3c/dom/EntityReference;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Document,11,"getElementsByTagName","(Ljava/lang/String;)Lorg/w3c/dom/NodeList;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Document,12,"importNode","(Lorg/w3c/dom/Node;Z)Lorg/w3c/dom/Node;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Document,13,"createElementNS","(Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/Element;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Document,14,"createAttributeNS","(Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/Attr;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Document,15,"getElementsByTagNameNS","(Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/NodeList;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Document,16,"getElementById","(Ljava/lang/String;)Lorg/w3c/dom/Element;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Document,17,"getInputEncoding","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Document,18,"getXmlEncoding","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Document,19,"getXmlStandalone","()Z")
J2CPP_DEFINE_METHOD(org::w3c::dom::Document,20,"setXmlStandalone","(Z)V")
J2CPP_DEFINE_METHOD(org::w3c::dom::Document,21,"getXmlVersion","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Document,22,"setXmlVersion","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::w3c::dom::Document,23,"getStrictErrorChecking","()Z")
J2CPP_DEFINE_METHOD(org::w3c::dom::Document,24,"setStrictErrorChecking","(Z)V")
J2CPP_DEFINE_METHOD(org::w3c::dom::Document,25,"getDocumentURI","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Document,26,"setDocumentURI","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::w3c::dom::Document,27,"adoptNode","(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Document,28,"getDomConfig","()Lorg/w3c/dom/DOMConfiguration;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Document,29,"normalizeDocument","()V")
J2CPP_DEFINE_METHOD(org::w3c::dom::Document,30,"renameNode","(Lorg/w3c/dom/Node;Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/Node;")

} //namespace j2cpp

#endif //J2CPP_ORG_W3C_DOM_DOCUMENT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION