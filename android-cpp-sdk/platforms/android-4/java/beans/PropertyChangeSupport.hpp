/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.beans.PropertyChangeSupport
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_BEANS_PROPERTYCHANGESUPPORT_HPP_DECL
#define J2CPP_JAVA_BEANS_PROPERTYCHANGESUPPORT_HPP_DECL


namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace java { namespace beans { class PropertyChangeListener; } } }
namespace j2cpp { namespace java { namespace beans { class PropertyChangeEvent; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/beans/PropertyChangeEvent.hpp>
#include <java/beans/PropertyChangeListener.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace beans {

	class PropertyChangeSupport;
	class PropertyChangeSupport
		: public object<PropertyChangeSupport>
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

		explicit PropertyChangeSupport(jobject jobj)
		: object<PropertyChangeSupport>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::io::Serializable>() const;


		PropertyChangeSupport(local_ref< java::lang::Object > const&);
		void firePropertyChange(local_ref< java::lang::String >  const&, local_ref< java::lang::Object >  const&, local_ref< java::lang::Object >  const&);
		void fireIndexedPropertyChange(local_ref< java::lang::String >  const&, jint, local_ref< java::lang::Object >  const&, local_ref< java::lang::Object >  const&);
		void removePropertyChangeListener(local_ref< java::lang::String >  const&, local_ref< java::beans::PropertyChangeListener >  const&);
		void addPropertyChangeListener(local_ref< java::lang::String >  const&, local_ref< java::beans::PropertyChangeListener >  const&);
		local_ref< array< local_ref< java::beans::PropertyChangeListener >, 1> > getPropertyChangeListeners(local_ref< java::lang::String >  const&);
		void firePropertyChange(local_ref< java::lang::String >  const&, jboolean, jboolean);
		void fireIndexedPropertyChange(local_ref< java::lang::String >  const&, jint, jboolean, jboolean);
		void firePropertyChange(local_ref< java::lang::String >  const&, jint, jint);
		void fireIndexedPropertyChange(local_ref< java::lang::String >  const&, jint, jint, jint);
		jboolean hasListeners(local_ref< java::lang::String >  const&);
		void removePropertyChangeListener(local_ref< java::beans::PropertyChangeListener >  const&);
		void addPropertyChangeListener(local_ref< java::beans::PropertyChangeListener >  const&);
		local_ref< array< local_ref< java::beans::PropertyChangeListener >, 1> > getPropertyChangeListeners();
		void firePropertyChange(local_ref< java::beans::PropertyChangeEvent >  const&);
	}; //class PropertyChangeSupport

} //namespace beans
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_BEANS_PROPERTYCHANGESUPPORT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_BEANS_PROPERTYCHANGESUPPORT_HPP_IMPL
#define J2CPP_JAVA_BEANS_PROPERTYCHANGESUPPORT_HPP_IMPL

namespace j2cpp {



java::beans::PropertyChangeSupport::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::beans::PropertyChangeSupport::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}


java::beans::PropertyChangeSupport::PropertyChangeSupport(local_ref< java::lang::Object > const &a0)
: object<java::beans::PropertyChangeSupport>(
	call_new_object<
		java::beans::PropertyChangeSupport::J2CPP_CLASS_NAME,
		java::beans::PropertyChangeSupport::J2CPP_METHOD_NAME(0),
		java::beans::PropertyChangeSupport::J2CPP_METHOD_SIGNATURE(0)>
	(a0)
)
{
}


void java::beans::PropertyChangeSupport::firePropertyChange(local_ref< java::lang::String > const &a0, local_ref< java::lang::Object > const &a1, local_ref< java::lang::Object > const &a2)
{
	return call_method<
		java::beans::PropertyChangeSupport::J2CPP_CLASS_NAME,
		java::beans::PropertyChangeSupport::J2CPP_METHOD_NAME(1),
		java::beans::PropertyChangeSupport::J2CPP_METHOD_SIGNATURE(1), 
		void >
	(get_jobject(), a0, a1, a2);
}

void java::beans::PropertyChangeSupport::fireIndexedPropertyChange(local_ref< java::lang::String > const &a0, jint a1, local_ref< java::lang::Object > const &a2, local_ref< java::lang::Object > const &a3)
{
	return call_method<
		java::beans::PropertyChangeSupport::J2CPP_CLASS_NAME,
		java::beans::PropertyChangeSupport::J2CPP_METHOD_NAME(2),
		java::beans::PropertyChangeSupport::J2CPP_METHOD_SIGNATURE(2), 
		void >
	(get_jobject(), a0, a1, a2, a3);
}

void java::beans::PropertyChangeSupport::removePropertyChangeListener(local_ref< java::lang::String > const &a0, local_ref< java::beans::PropertyChangeListener > const &a1)
{
	return call_method<
		java::beans::PropertyChangeSupport::J2CPP_CLASS_NAME,
		java::beans::PropertyChangeSupport::J2CPP_METHOD_NAME(3),
		java::beans::PropertyChangeSupport::J2CPP_METHOD_SIGNATURE(3), 
		void >
	(get_jobject(), a0, a1);
}

void java::beans::PropertyChangeSupport::addPropertyChangeListener(local_ref< java::lang::String > const &a0, local_ref< java::beans::PropertyChangeListener > const &a1)
{
	return call_method<
		java::beans::PropertyChangeSupport::J2CPP_CLASS_NAME,
		java::beans::PropertyChangeSupport::J2CPP_METHOD_NAME(4),
		java::beans::PropertyChangeSupport::J2CPP_METHOD_SIGNATURE(4), 
		void >
	(get_jobject(), a0, a1);
}

local_ref< array< local_ref< java::beans::PropertyChangeListener >, 1> > java::beans::PropertyChangeSupport::getPropertyChangeListeners(local_ref< java::lang::String > const &a0)
{
	return call_method<
		java::beans::PropertyChangeSupport::J2CPP_CLASS_NAME,
		java::beans::PropertyChangeSupport::J2CPP_METHOD_NAME(5),
		java::beans::PropertyChangeSupport::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< array< local_ref< java::beans::PropertyChangeListener >, 1> > >
	(get_jobject(), a0);
}

void java::beans::PropertyChangeSupport::firePropertyChange(local_ref< java::lang::String > const &a0, jboolean a1, jboolean a2)
{
	return call_method<
		java::beans::PropertyChangeSupport::J2CPP_CLASS_NAME,
		java::beans::PropertyChangeSupport::J2CPP_METHOD_NAME(6),
		java::beans::PropertyChangeSupport::J2CPP_METHOD_SIGNATURE(6), 
		void >
	(get_jobject(), a0, a1, a2);
}

void java::beans::PropertyChangeSupport::fireIndexedPropertyChange(local_ref< java::lang::String > const &a0, jint a1, jboolean a2, jboolean a3)
{
	return call_method<
		java::beans::PropertyChangeSupport::J2CPP_CLASS_NAME,
		java::beans::PropertyChangeSupport::J2CPP_METHOD_NAME(7),
		java::beans::PropertyChangeSupport::J2CPP_METHOD_SIGNATURE(7), 
		void >
	(get_jobject(), a0, a1, a2, a3);
}

void java::beans::PropertyChangeSupport::firePropertyChange(local_ref< java::lang::String > const &a0, jint a1, jint a2)
{
	return call_method<
		java::beans::PropertyChangeSupport::J2CPP_CLASS_NAME,
		java::beans::PropertyChangeSupport::J2CPP_METHOD_NAME(8),
		java::beans::PropertyChangeSupport::J2CPP_METHOD_SIGNATURE(8), 
		void >
	(get_jobject(), a0, a1, a2);
}

void java::beans::PropertyChangeSupport::fireIndexedPropertyChange(local_ref< java::lang::String > const &a0, jint a1, jint a2, jint a3)
{
	return call_method<
		java::beans::PropertyChangeSupport::J2CPP_CLASS_NAME,
		java::beans::PropertyChangeSupport::J2CPP_METHOD_NAME(9),
		java::beans::PropertyChangeSupport::J2CPP_METHOD_SIGNATURE(9), 
		void >
	(get_jobject(), a0, a1, a2, a3);
}

jboolean java::beans::PropertyChangeSupport::hasListeners(local_ref< java::lang::String > const &a0)
{
	return call_method<
		java::beans::PropertyChangeSupport::J2CPP_CLASS_NAME,
		java::beans::PropertyChangeSupport::J2CPP_METHOD_NAME(10),
		java::beans::PropertyChangeSupport::J2CPP_METHOD_SIGNATURE(10), 
		jboolean >
	(get_jobject(), a0);
}

void java::beans::PropertyChangeSupport::removePropertyChangeListener(local_ref< java::beans::PropertyChangeListener > const &a0)
{
	return call_method<
		java::beans::PropertyChangeSupport::J2CPP_CLASS_NAME,
		java::beans::PropertyChangeSupport::J2CPP_METHOD_NAME(11),
		java::beans::PropertyChangeSupport::J2CPP_METHOD_SIGNATURE(11), 
		void >
	(get_jobject(), a0);
}

void java::beans::PropertyChangeSupport::addPropertyChangeListener(local_ref< java::beans::PropertyChangeListener > const &a0)
{
	return call_method<
		java::beans::PropertyChangeSupport::J2CPP_CLASS_NAME,
		java::beans::PropertyChangeSupport::J2CPP_METHOD_NAME(12),
		java::beans::PropertyChangeSupport::J2CPP_METHOD_SIGNATURE(12), 
		void >
	(get_jobject(), a0);
}

local_ref< array< local_ref< java::beans::PropertyChangeListener >, 1> > java::beans::PropertyChangeSupport::getPropertyChangeListeners()
{
	return call_method<
		java::beans::PropertyChangeSupport::J2CPP_CLASS_NAME,
		java::beans::PropertyChangeSupport::J2CPP_METHOD_NAME(13),
		java::beans::PropertyChangeSupport::J2CPP_METHOD_SIGNATURE(13), 
		local_ref< array< local_ref< java::beans::PropertyChangeListener >, 1> > >
	(get_jobject());
}

void java::beans::PropertyChangeSupport::firePropertyChange(local_ref< java::beans::PropertyChangeEvent > const &a0)
{
	return call_method<
		java::beans::PropertyChangeSupport::J2CPP_CLASS_NAME,
		java::beans::PropertyChangeSupport::J2CPP_METHOD_NAME(14),
		java::beans::PropertyChangeSupport::J2CPP_METHOD_SIGNATURE(14), 
		void >
	(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(java::beans::PropertyChangeSupport,"java/beans/PropertyChangeSupport")
J2CPP_DEFINE_METHOD(java::beans::PropertyChangeSupport,0,"<init>","(Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(java::beans::PropertyChangeSupport,1,"firePropertyChange","(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(java::beans::PropertyChangeSupport,2,"fireIndexedPropertyChange","(Ljava/lang/String;ILjava/lang/Object;Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(java::beans::PropertyChangeSupport,3,"removePropertyChangeListener","(Ljava/lang/String;Ljava/beans/PropertyChangeListener;)V")
J2CPP_DEFINE_METHOD(java::beans::PropertyChangeSupport,4,"addPropertyChangeListener","(Ljava/lang/String;Ljava/beans/PropertyChangeListener;)V")
J2CPP_DEFINE_METHOD(java::beans::PropertyChangeSupport,5,"getPropertyChangeListeners","(Ljava/lang/String;)[java.beans.PropertyChangeListener")
J2CPP_DEFINE_METHOD(java::beans::PropertyChangeSupport,6,"firePropertyChange","(Ljava/lang/String;ZZ)V")
J2CPP_DEFINE_METHOD(java::beans::PropertyChangeSupport,7,"fireIndexedPropertyChange","(Ljava/lang/String;IZZ)V")
J2CPP_DEFINE_METHOD(java::beans::PropertyChangeSupport,8,"firePropertyChange","(Ljava/lang/String;II)V")
J2CPP_DEFINE_METHOD(java::beans::PropertyChangeSupport,9,"fireIndexedPropertyChange","(Ljava/lang/String;III)V")
J2CPP_DEFINE_METHOD(java::beans::PropertyChangeSupport,10,"hasListeners","(Ljava/lang/String;)Z")
J2CPP_DEFINE_METHOD(java::beans::PropertyChangeSupport,11,"removePropertyChangeListener","(Ljava/beans/PropertyChangeListener;)V")
J2CPP_DEFINE_METHOD(java::beans::PropertyChangeSupport,12,"addPropertyChangeListener","(Ljava/beans/PropertyChangeListener;)V")
J2CPP_DEFINE_METHOD(java::beans::PropertyChangeSupport,13,"getPropertyChangeListeners","()[java.beans.PropertyChangeListener")
J2CPP_DEFINE_METHOD(java::beans::PropertyChangeSupport,14,"firePropertyChange","(Ljava/beans/PropertyChangeEvent;)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_BEANS_PROPERTYCHANGESUPPORT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
