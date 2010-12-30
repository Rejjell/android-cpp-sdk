/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.prefs.NodeChangeListener
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_PREFS_NODECHANGELISTENER_HPP_DECL
#define J2CPP_JAVA_UTIL_PREFS_NODECHANGELISTENER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { namespace prefs { class NodeChangeEvent; } } } }
namespace j2cpp { namespace java { namespace util { class EventListener; } } }


#include <java/lang/Object.hpp>
#include <java/util/EventListener.hpp>
#include <java/util/prefs/NodeChangeEvent.hpp>


namespace j2cpp {

namespace java { namespace util { namespace prefs {

	class NodeChangeListener;
	class NodeChangeListener
		: public object<NodeChangeListener>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit NodeChangeListener(jobject jobj)
		: object<NodeChangeListener>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::util::EventListener>() const;


		void childAdded(local_ref< java::util::prefs::NodeChangeEvent >  const&);
		void childRemoved(local_ref< java::util::prefs::NodeChangeEvent >  const&);
	}; //class NodeChangeListener

} //namespace prefs
} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_PREFS_NODECHANGELISTENER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_PREFS_NODECHANGELISTENER_HPP_IMPL
#define J2CPP_JAVA_UTIL_PREFS_NODECHANGELISTENER_HPP_IMPL

namespace j2cpp {



java::util::prefs::NodeChangeListener::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::util::prefs::NodeChangeListener::operator local_ref<java::util::EventListener>() const
{
	return local_ref<java::util::EventListener>(get_jobject());
}

void java::util::prefs::NodeChangeListener::childAdded(local_ref< java::util::prefs::NodeChangeEvent > const &a0)
{
	return call_method<
		java::util::prefs::NodeChangeListener::J2CPP_CLASS_NAME,
		java::util::prefs::NodeChangeListener::J2CPP_METHOD_NAME(0),
		java::util::prefs::NodeChangeListener::J2CPP_METHOD_SIGNATURE(0), 
		void >
	(get_jobject(), a0);
}

void java::util::prefs::NodeChangeListener::childRemoved(local_ref< java::util::prefs::NodeChangeEvent > const &a0)
{
	return call_method<
		java::util::prefs::NodeChangeListener::J2CPP_CLASS_NAME,
		java::util::prefs::NodeChangeListener::J2CPP_METHOD_NAME(1),
		java::util::prefs::NodeChangeListener::J2CPP_METHOD_SIGNATURE(1), 
		void >
	(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(java::util::prefs::NodeChangeListener,"java/util/prefs/NodeChangeListener")
J2CPP_DEFINE_METHOD(java::util::prefs::NodeChangeListener,0,"childAdded","(Ljava/util/prefs/NodeChangeEvent;)V")
J2CPP_DEFINE_METHOD(java::util::prefs::NodeChangeListener,1,"childRemoved","(Ljava/util/prefs/NodeChangeEvent;)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_PREFS_NODECHANGELISTENER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
