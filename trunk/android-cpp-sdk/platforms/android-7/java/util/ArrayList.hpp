/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.ArrayList
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_ARRAYLIST_HPP_DECL
#define J2CPP_JAVA_UTIL_ARRAYLIST_HPP_DECL


namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Iterable; } } }
namespace j2cpp { namespace java { namespace lang { class Cloneable; } } }
namespace j2cpp { namespace java { namespace util { class AbstractList; } } }
namespace j2cpp { namespace java { namespace util { class AbstractCollection; } } }
namespace j2cpp { namespace java { namespace util { class RandomAccess; } } }
namespace j2cpp { namespace java { namespace util { class Collection; } } }
namespace j2cpp { namespace java { namespace util { class List; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Cloneable.hpp>
#include <java/lang/Iterable.hpp>
#include <java/lang/Object.hpp>
#include <java/util/AbstractCollection.hpp>
#include <java/util/AbstractList.hpp>
#include <java/util/Collection.hpp>
#include <java/util/List.hpp>
#include <java/util/RandomAccess.hpp>


namespace j2cpp {

namespace java { namespace util {

	class ArrayList;
	class ArrayList
		: public object<ArrayList>
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

		explicit ArrayList(jobject jobj)
		: object<ArrayList>(jobj)
		{
		}

		operator local_ref<java::io::Serializable>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::lang::Iterable>() const;
		operator local_ref<java::lang::Cloneable>() const;
		operator local_ref<java::util::AbstractList>() const;
		operator local_ref<java::util::AbstractCollection>() const;
		operator local_ref<java::util::RandomAccess>() const;
		operator local_ref<java::util::Collection>() const;
		operator local_ref<java::util::List>() const;


		ArrayList();
		ArrayList(jint);
		ArrayList(local_ref< java::util::Collection > const&);
		void add(jint, local_ref< java::lang::Object >  const&);
		jboolean add(local_ref< java::lang::Object >  const&);
		jboolean addAll(jint, local_ref< java::util::Collection >  const&);
		jboolean addAll(local_ref< java::util::Collection >  const&);
		void clear();
		local_ref< java::lang::Object > clone();
		jboolean contains(local_ref< java::lang::Object >  const&);
		void ensureCapacity(jint);
		local_ref< java::lang::Object > get(jint);
		jint indexOf(local_ref< java::lang::Object >  const&);
		jboolean isEmpty();
		jint lastIndexOf(local_ref< java::lang::Object >  const&);
		local_ref< java::lang::Object > remove(jint);
		jboolean remove(local_ref< java::lang::Object >  const&);
		local_ref< java::lang::Object > set(jint, local_ref< java::lang::Object >  const&);
		jint size();
		local_ref< array< local_ref< java::lang::Object >, 1> > toArray();
		local_ref< array< local_ref< java::lang::Object >, 1> > toArray(local_ref< array< local_ref< java::lang::Object >, 1> >  const&);
		void trimToSize();
	}; //class ArrayList

} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_ARRAYLIST_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_ARRAYLIST_HPP_IMPL
#define J2CPP_JAVA_UTIL_ARRAYLIST_HPP_IMPL

namespace j2cpp {



java::util::ArrayList::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}

java::util::ArrayList::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::util::ArrayList::operator local_ref<java::lang::Iterable>() const
{
	return local_ref<java::lang::Iterable>(get_jobject());
}

java::util::ArrayList::operator local_ref<java::lang::Cloneable>() const
{
	return local_ref<java::lang::Cloneable>(get_jobject());
}

java::util::ArrayList::operator local_ref<java::util::AbstractList>() const
{
	return local_ref<java::util::AbstractList>(get_jobject());
}

java::util::ArrayList::operator local_ref<java::util::AbstractCollection>() const
{
	return local_ref<java::util::AbstractCollection>(get_jobject());
}

java::util::ArrayList::operator local_ref<java::util::RandomAccess>() const
{
	return local_ref<java::util::RandomAccess>(get_jobject());
}

java::util::ArrayList::operator local_ref<java::util::Collection>() const
{
	return local_ref<java::util::Collection>(get_jobject());
}

java::util::ArrayList::operator local_ref<java::util::List>() const
{
	return local_ref<java::util::List>(get_jobject());
}


java::util::ArrayList::ArrayList()
: object<java::util::ArrayList>(
	call_new_object<
		java::util::ArrayList::J2CPP_CLASS_NAME,
		java::util::ArrayList::J2CPP_METHOD_NAME(0),
		java::util::ArrayList::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}



java::util::ArrayList::ArrayList(jint a0)
: object<java::util::ArrayList>(
	call_new_object<
		java::util::ArrayList::J2CPP_CLASS_NAME,
		java::util::ArrayList::J2CPP_METHOD_NAME(1),
		java::util::ArrayList::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}



java::util::ArrayList::ArrayList(local_ref< java::util::Collection > const &a0)
: object<java::util::ArrayList>(
	call_new_object<
		java::util::ArrayList::J2CPP_CLASS_NAME,
		java::util::ArrayList::J2CPP_METHOD_NAME(2),
		java::util::ArrayList::J2CPP_METHOD_SIGNATURE(2)
	>(a0)
)
{
}


void java::util::ArrayList::add(jint a0, local_ref< java::lang::Object > const &a1)
{
	return call_method<
		java::util::ArrayList::J2CPP_CLASS_NAME,
		java::util::ArrayList::J2CPP_METHOD_NAME(3),
		java::util::ArrayList::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject(), a0, a1);
}

jboolean java::util::ArrayList::add(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::ArrayList::J2CPP_CLASS_NAME,
		java::util::ArrayList::J2CPP_METHOD_NAME(4),
		java::util::ArrayList::J2CPP_METHOD_SIGNATURE(4), 
		jboolean
	>(get_jobject(), a0);
}

jboolean java::util::ArrayList::addAll(jint a0, local_ref< java::util::Collection > const &a1)
{
	return call_method<
		java::util::ArrayList::J2CPP_CLASS_NAME,
		java::util::ArrayList::J2CPP_METHOD_NAME(5),
		java::util::ArrayList::J2CPP_METHOD_SIGNATURE(5), 
		jboolean
	>(get_jobject(), a0, a1);
}

jboolean java::util::ArrayList::addAll(local_ref< java::util::Collection > const &a0)
{
	return call_method<
		java::util::ArrayList::J2CPP_CLASS_NAME,
		java::util::ArrayList::J2CPP_METHOD_NAME(6),
		java::util::ArrayList::J2CPP_METHOD_SIGNATURE(6), 
		jboolean
	>(get_jobject(), a0);
}

void java::util::ArrayList::clear()
{
	return call_method<
		java::util::ArrayList::J2CPP_CLASS_NAME,
		java::util::ArrayList::J2CPP_METHOD_NAME(7),
		java::util::ArrayList::J2CPP_METHOD_SIGNATURE(7), 
		void
	>(get_jobject());
}

local_ref< java::lang::Object > java::util::ArrayList::clone()
{
	return call_method<
		java::util::ArrayList::J2CPP_CLASS_NAME,
		java::util::ArrayList::J2CPP_METHOD_NAME(8),
		java::util::ArrayList::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< java::lang::Object >
	>(get_jobject());
}

jboolean java::util::ArrayList::contains(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::ArrayList::J2CPP_CLASS_NAME,
		java::util::ArrayList::J2CPP_METHOD_NAME(9),
		java::util::ArrayList::J2CPP_METHOD_SIGNATURE(9), 
		jboolean
	>(get_jobject(), a0);
}

void java::util::ArrayList::ensureCapacity(jint a0)
{
	return call_method<
		java::util::ArrayList::J2CPP_CLASS_NAME,
		java::util::ArrayList::J2CPP_METHOD_NAME(10),
		java::util::ArrayList::J2CPP_METHOD_SIGNATURE(10), 
		void
	>(get_jobject(), a0);
}

local_ref< java::lang::Object > java::util::ArrayList::get(jint a0)
{
	return call_method<
		java::util::ArrayList::J2CPP_CLASS_NAME,
		java::util::ArrayList::J2CPP_METHOD_NAME(11),
		java::util::ArrayList::J2CPP_METHOD_SIGNATURE(11), 
		local_ref< java::lang::Object >
	>(get_jobject(), a0);
}

jint java::util::ArrayList::indexOf(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::ArrayList::J2CPP_CLASS_NAME,
		java::util::ArrayList::J2CPP_METHOD_NAME(12),
		java::util::ArrayList::J2CPP_METHOD_SIGNATURE(12), 
		jint
	>(get_jobject(), a0);
}

jboolean java::util::ArrayList::isEmpty()
{
	return call_method<
		java::util::ArrayList::J2CPP_CLASS_NAME,
		java::util::ArrayList::J2CPP_METHOD_NAME(13),
		java::util::ArrayList::J2CPP_METHOD_SIGNATURE(13), 
		jboolean
	>(get_jobject());
}

jint java::util::ArrayList::lastIndexOf(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::ArrayList::J2CPP_CLASS_NAME,
		java::util::ArrayList::J2CPP_METHOD_NAME(14),
		java::util::ArrayList::J2CPP_METHOD_SIGNATURE(14), 
		jint
	>(get_jobject(), a0);
}

local_ref< java::lang::Object > java::util::ArrayList::remove(jint a0)
{
	return call_method<
		java::util::ArrayList::J2CPP_CLASS_NAME,
		java::util::ArrayList::J2CPP_METHOD_NAME(15),
		java::util::ArrayList::J2CPP_METHOD_SIGNATURE(15), 
		local_ref< java::lang::Object >
	>(get_jobject(), a0);
}

jboolean java::util::ArrayList::remove(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::ArrayList::J2CPP_CLASS_NAME,
		java::util::ArrayList::J2CPP_METHOD_NAME(16),
		java::util::ArrayList::J2CPP_METHOD_SIGNATURE(16), 
		jboolean
	>(get_jobject(), a0);
}


local_ref< java::lang::Object > java::util::ArrayList::set(jint a0, local_ref< java::lang::Object > const &a1)
{
	return call_method<
		java::util::ArrayList::J2CPP_CLASS_NAME,
		java::util::ArrayList::J2CPP_METHOD_NAME(18),
		java::util::ArrayList::J2CPP_METHOD_SIGNATURE(18), 
		local_ref< java::lang::Object >
	>(get_jobject(), a0, a1);
}

jint java::util::ArrayList::size()
{
	return call_method<
		java::util::ArrayList::J2CPP_CLASS_NAME,
		java::util::ArrayList::J2CPP_METHOD_NAME(19),
		java::util::ArrayList::J2CPP_METHOD_SIGNATURE(19), 
		jint
	>(get_jobject());
}

local_ref< array< local_ref< java::lang::Object >, 1> > java::util::ArrayList::toArray()
{
	return call_method<
		java::util::ArrayList::J2CPP_CLASS_NAME,
		java::util::ArrayList::J2CPP_METHOD_NAME(20),
		java::util::ArrayList::J2CPP_METHOD_SIGNATURE(20), 
		local_ref< array< local_ref< java::lang::Object >, 1> >
	>(get_jobject());
}

local_ref< array< local_ref< java::lang::Object >, 1> > java::util::ArrayList::toArray(local_ref< array< local_ref< java::lang::Object >, 1> > const &a0)
{
	return call_method<
		java::util::ArrayList::J2CPP_CLASS_NAME,
		java::util::ArrayList::J2CPP_METHOD_NAME(21),
		java::util::ArrayList::J2CPP_METHOD_SIGNATURE(21), 
		local_ref< array< local_ref< java::lang::Object >, 1> >
	>(get_jobject(), a0);
}

void java::util::ArrayList::trimToSize()
{
	return call_method<
		java::util::ArrayList::J2CPP_CLASS_NAME,
		java::util::ArrayList::J2CPP_METHOD_NAME(22),
		java::util::ArrayList::J2CPP_METHOD_SIGNATURE(22), 
		void
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(java::util::ArrayList,"java/util/ArrayList")
J2CPP_DEFINE_METHOD(java::util::ArrayList,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::util::ArrayList,1,"<init>","(I)V")
J2CPP_DEFINE_METHOD(java::util::ArrayList,2,"<init>","(Ljava/util/Collection;)V")
J2CPP_DEFINE_METHOD(java::util::ArrayList,3,"add","(ILjava/lang/Object;)V")
J2CPP_DEFINE_METHOD(java::util::ArrayList,4,"add","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::ArrayList,5,"addAll","(ILjava/util/Collection;)Z")
J2CPP_DEFINE_METHOD(java::util::ArrayList,6,"addAll","(Ljava/util/Collection;)Z")
J2CPP_DEFINE_METHOD(java::util::ArrayList,7,"clear","()V")
J2CPP_DEFINE_METHOD(java::util::ArrayList,8,"clone","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::ArrayList,9,"contains","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::ArrayList,10,"ensureCapacity","(I)V")
J2CPP_DEFINE_METHOD(java::util::ArrayList,11,"get","(I)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::ArrayList,12,"indexOf","(Ljava/lang/Object;)I")
J2CPP_DEFINE_METHOD(java::util::ArrayList,13,"isEmpty","()Z")
J2CPP_DEFINE_METHOD(java::util::ArrayList,14,"lastIndexOf","(Ljava/lang/Object;)I")
J2CPP_DEFINE_METHOD(java::util::ArrayList,15,"remove","(I)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::ArrayList,16,"remove","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::ArrayList,17,"removeRange","(II)V")
J2CPP_DEFINE_METHOD(java::util::ArrayList,18,"set","(ILjava/lang/Object;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::ArrayList,19,"size","()I")
J2CPP_DEFINE_METHOD(java::util::ArrayList,20,"toArray","()[java.lang.Object")
J2CPP_DEFINE_METHOD(java::util::ArrayList,21,"toArray","([java.lang.Object)[java.lang.Object")
J2CPP_DEFINE_METHOD(java::util::ArrayList,22,"trimToSize","()V")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_ARRAYLIST_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
