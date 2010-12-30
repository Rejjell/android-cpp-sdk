/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.w3c.dom.Text
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_W3C_DOM_TEXT_HPP_DECL
#define J2CPP_ORG_W3C_DOM_TEXT_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace org { namespace w3c { namespace dom { class CharacterData; } } } }


#include <java/lang/Object.hpp>
#include <org/w3c/dom/CharacterData.hpp>


namespace j2cpp {

namespace org { namespace w3c { namespace dom {

	class Text;
	class Text
		: public object<Text>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		explicit Text(jobject jobj)
		: object<Text>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<org::w3c::dom::CharacterData>() const;


		local_ref< org::w3c::dom::Text > splitText(jint);
	}; //class Text

} //namespace dom
} //namespace w3c
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_W3C_DOM_TEXT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_W3C_DOM_TEXT_HPP_IMPL
#define J2CPP_ORG_W3C_DOM_TEXT_HPP_IMPL

namespace j2cpp {



org::w3c::dom::Text::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

org::w3c::dom::Text::operator local_ref<org::w3c::dom::CharacterData>() const
{
	return local_ref<org::w3c::dom::CharacterData>(get_jobject());
}

local_ref< org::w3c::dom::Text > org::w3c::dom::Text::splitText(jint a0)
{
	return call_method<
		org::w3c::dom::Text::J2CPP_CLASS_NAME,
		org::w3c::dom::Text::J2CPP_METHOD_NAME(0),
		org::w3c::dom::Text::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< org::w3c::dom::Text > >
	(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(org::w3c::dom::Text,"org/w3c/dom/Text")
J2CPP_DEFINE_METHOD(org::w3c::dom::Text,0,"splitText","(I)Lorg/w3c/dom/Text;")

} //namespace j2cpp

#endif //J2CPP_ORG_W3C_DOM_TEXT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
