/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.w3c.dom.ProcessingInstruction
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_W3C_DOM_PROCESSINGINSTRUCTION_HPP_DECL
#define J2CPP_ORG_W3C_DOM_PROCESSINGINSTRUCTION_HPP_DECL


namespace j2cpp { namespace org { namespace w3c { namespace dom { class Node; } } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <org/w3c/dom/Node.hpp>


namespace j2cpp {

namespace org { namespace w3c { namespace dom {

	class ProcessingInstruction;
	class ProcessingInstruction
		: public object<ProcessingInstruction>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		explicit ProcessingInstruction(jobject jobj)
		: object<ProcessingInstruction>(jobj)
		{
		}

		operator local_ref<org::w3c::dom::Node>() const;
		operator local_ref<java::lang::Object>() const;


		local_ref< java::lang::String > getTarget();
		local_ref< java::lang::String > getData();
		void setData(local_ref< java::lang::String >  const&);
	}; //class ProcessingInstruction

} //namespace dom
} //namespace w3c
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_W3C_DOM_PROCESSINGINSTRUCTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_W3C_DOM_PROCESSINGINSTRUCTION_HPP_IMPL
#define J2CPP_ORG_W3C_DOM_PROCESSINGINSTRUCTION_HPP_IMPL

namespace j2cpp {



org::w3c::dom::ProcessingInstruction::operator local_ref<org::w3c::dom::Node>() const
{
	return local_ref<org::w3c::dom::Node>(get_jobject());
}

org::w3c::dom::ProcessingInstruction::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

local_ref< java::lang::String > org::w3c::dom::ProcessingInstruction::getTarget()
{
	return call_method<
		org::w3c::dom::ProcessingInstruction::J2CPP_CLASS_NAME,
		org::w3c::dom::ProcessingInstruction::J2CPP_METHOD_NAME(0),
		org::w3c::dom::ProcessingInstruction::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::lang::String > org::w3c::dom::ProcessingInstruction::getData()
{
	return call_method<
		org::w3c::dom::ProcessingInstruction::J2CPP_CLASS_NAME,
		org::w3c::dom::ProcessingInstruction::J2CPP_METHOD_NAME(1),
		org::w3c::dom::ProcessingInstruction::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::String >
	>(get_jobject());
}

void org::w3c::dom::ProcessingInstruction::setData(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::w3c::dom::ProcessingInstruction::J2CPP_CLASS_NAME,
		org::w3c::dom::ProcessingInstruction::J2CPP_METHOD_NAME(2),
		org::w3c::dom::ProcessingInstruction::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(org::w3c::dom::ProcessingInstruction,"org/w3c/dom/ProcessingInstruction")
J2CPP_DEFINE_METHOD(org::w3c::dom::ProcessingInstruction,0,"getTarget","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::w3c::dom::ProcessingInstruction,1,"getData","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::w3c::dom::ProcessingInstruction,2,"setData","(Ljava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_ORG_W3C_DOM_PROCESSINGINSTRUCTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
