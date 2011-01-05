/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.w3c.dom.ls.LSParserFilter
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_W3C_DOM_LS_LSPARSERFILTER_HPP_DECL
#define J2CPP_ORG_W3C_DOM_LS_LSPARSERFILTER_HPP_DECL


namespace j2cpp { namespace org { namespace w3c { namespace dom { class Node; } } } }
namespace j2cpp { namespace org { namespace w3c { namespace dom { class Element; } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <org/w3c/dom/Element.hpp>
#include <org/w3c/dom/Node.hpp>


namespace j2cpp {

namespace org { namespace w3c { namespace dom { namespace ls {

	class LSParserFilter;
	class LSParserFilter
		: public object<LSParserFilter>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)

		explicit LSParserFilter(jobject jobj)
		: object<LSParserFilter>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		jshort startElement(local_ref< org::w3c::dom::Element >  const&);
		jshort acceptNode(local_ref< org::w3c::dom::Node >  const&);
		jint getWhatToShow();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jshort > FILTER_ACCEPT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jshort > FILTER_REJECT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jshort > FILTER_SKIP;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), jshort > FILTER_INTERRUPT;
	}; //class LSParserFilter

} //namespace ls
} //namespace dom
} //namespace w3c
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_W3C_DOM_LS_LSPARSERFILTER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_W3C_DOM_LS_LSPARSERFILTER_HPP_IMPL
#define J2CPP_ORG_W3C_DOM_LS_LSPARSERFILTER_HPP_IMPL

namespace j2cpp {



org::w3c::dom::ls::LSParserFilter::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

jshort org::w3c::dom::ls::LSParserFilter::startElement(local_ref< org::w3c::dom::Element > const &a0)
{
	return call_method<
		org::w3c::dom::ls::LSParserFilter::J2CPP_CLASS_NAME,
		org::w3c::dom::ls::LSParserFilter::J2CPP_METHOD_NAME(0),
		org::w3c::dom::ls::LSParserFilter::J2CPP_METHOD_SIGNATURE(0), 
		jshort
	>(get_jobject(), a0);
}

jshort org::w3c::dom::ls::LSParserFilter::acceptNode(local_ref< org::w3c::dom::Node > const &a0)
{
	return call_method<
		org::w3c::dom::ls::LSParserFilter::J2CPP_CLASS_NAME,
		org::w3c::dom::ls::LSParserFilter::J2CPP_METHOD_NAME(1),
		org::w3c::dom::ls::LSParserFilter::J2CPP_METHOD_SIGNATURE(1), 
		jshort
	>(get_jobject(), a0);
}

jint org::w3c::dom::ls::LSParserFilter::getWhatToShow()
{
	return call_method<
		org::w3c::dom::ls::LSParserFilter::J2CPP_CLASS_NAME,
		org::w3c::dom::ls::LSParserFilter::J2CPP_METHOD_NAME(2),
		org::w3c::dom::ls::LSParserFilter::J2CPP_METHOD_SIGNATURE(2), 
		jint
	>(get_jobject());
}


static_field<
	org::w3c::dom::ls::LSParserFilter::J2CPP_CLASS_NAME,
	org::w3c::dom::ls::LSParserFilter::J2CPP_FIELD_NAME(0),
	org::w3c::dom::ls::LSParserFilter::J2CPP_FIELD_SIGNATURE(0),
	jshort
> org::w3c::dom::ls::LSParserFilter::FILTER_ACCEPT;

static_field<
	org::w3c::dom::ls::LSParserFilter::J2CPP_CLASS_NAME,
	org::w3c::dom::ls::LSParserFilter::J2CPP_FIELD_NAME(1),
	org::w3c::dom::ls::LSParserFilter::J2CPP_FIELD_SIGNATURE(1),
	jshort
> org::w3c::dom::ls::LSParserFilter::FILTER_REJECT;

static_field<
	org::w3c::dom::ls::LSParserFilter::J2CPP_CLASS_NAME,
	org::w3c::dom::ls::LSParserFilter::J2CPP_FIELD_NAME(2),
	org::w3c::dom::ls::LSParserFilter::J2CPP_FIELD_SIGNATURE(2),
	jshort
> org::w3c::dom::ls::LSParserFilter::FILTER_SKIP;

static_field<
	org::w3c::dom::ls::LSParserFilter::J2CPP_CLASS_NAME,
	org::w3c::dom::ls::LSParserFilter::J2CPP_FIELD_NAME(3),
	org::w3c::dom::ls::LSParserFilter::J2CPP_FIELD_SIGNATURE(3),
	jshort
> org::w3c::dom::ls::LSParserFilter::FILTER_INTERRUPT;


J2CPP_DEFINE_CLASS(org::w3c::dom::ls::LSParserFilter,"org/w3c/dom/ls/LSParserFilter")
J2CPP_DEFINE_METHOD(org::w3c::dom::ls::LSParserFilter,0,"startElement","(Lorg/w3c/dom/Element;)S")
J2CPP_DEFINE_METHOD(org::w3c::dom::ls::LSParserFilter,1,"acceptNode","(Lorg/w3c/dom/Node;)S")
J2CPP_DEFINE_METHOD(org::w3c::dom::ls::LSParserFilter,2,"getWhatToShow","()I")
J2CPP_DEFINE_FIELD(org::w3c::dom::ls::LSParserFilter,0,"FILTER_ACCEPT","S")
J2CPP_DEFINE_FIELD(org::w3c::dom::ls::LSParserFilter,1,"FILTER_REJECT","S")
J2CPP_DEFINE_FIELD(org::w3c::dom::ls::LSParserFilter,2,"FILTER_SKIP","S")
J2CPP_DEFINE_FIELD(org::w3c::dom::ls::LSParserFilter,3,"FILTER_INTERRUPT","S")

} //namespace j2cpp

#endif //J2CPP_ORG_W3C_DOM_LS_LSPARSERFILTER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
