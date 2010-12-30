/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.w3c.dom.Notation
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_W3C_DOM_NOTATION_HPP_DECL
#define J2CPP_ORG_W3C_DOM_NOTATION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace org { namespace w3c { namespace dom { class Node; } } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <org/w3c/dom/Node.hpp>


namespace j2cpp {

namespace org { namespace w3c { namespace dom {

	class Notation;
	class Notation
		: public object<Notation>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit Notation(jobject jobj)
		: object<Notation>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<org::w3c::dom::Node>() const;


		local_ref< java::lang::String > getPublicId();
		local_ref< java::lang::String > getSystemId();
	}; //class Notation

} //namespace dom
} //namespace w3c
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_W3C_DOM_NOTATION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_W3C_DOM_NOTATION_HPP_IMPL
#define J2CPP_ORG_W3C_DOM_NOTATION_HPP_IMPL

namespace j2cpp {



org::w3c::dom::Notation::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

org::w3c::dom::Notation::operator local_ref<org::w3c::dom::Node>() const
{
	return local_ref<org::w3c::dom::Node>(get_jobject());
}

local_ref< java::lang::String > org::w3c::dom::Notation::getPublicId()
{
	return call_method<
		org::w3c::dom::Notation::J2CPP_CLASS_NAME,
		org::w3c::dom::Notation::J2CPP_METHOD_NAME(0),
		org::w3c::dom::Notation::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< java::lang::String > >
	(get_jobject());
}

local_ref< java::lang::String > org::w3c::dom::Notation::getSystemId()
{
	return call_method<
		org::w3c::dom::Notation::J2CPP_CLASS_NAME,
		org::w3c::dom::Notation::J2CPP_METHOD_NAME(1),
		org::w3c::dom::Notation::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::String > >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(org::w3c::dom::Notation,"org/w3c/dom/Notation")
J2CPP_DEFINE_METHOD(org::w3c::dom::Notation,0,"getPublicId","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Notation,1,"getSystemId","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_ORG_W3C_DOM_NOTATION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
