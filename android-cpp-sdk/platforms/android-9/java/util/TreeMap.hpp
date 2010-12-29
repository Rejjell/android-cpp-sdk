/*================================================================================
  code generated by: java2cpp
  class: java.util.TreeMap
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_TREEMAP_HPP_DECL
#define J2CPP_JAVA_UTIL_TREEMAP_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { class NavigableSet; } } }
namespace j2cpp { namespace java { namespace util { class Map; } } }
namespace j2cpp { namespace java { namespace util { class Comparator; } } }
namespace j2cpp { namespace java { namespace util { class NavigableMap; } } }
namespace j2cpp { namespace java { namespace util { namespace Map_ { class Entry; } } } }
namespace j2cpp { namespace java { namespace util { class Set; } } }
namespace j2cpp { namespace java { namespace util { class SortedMap; } } }


#include <java/lang/Object.hpp>
#include <java/util/Comparator.hpp>
#include <java/util/Map.hpp>
#include <java/util/NavigableMap.hpp>
#include <java/util/NavigableSet.hpp>
#include <java/util/Set.hpp>
#include <java/util/SortedMap.hpp>


namespace j2cpp {

namespace java { namespace util {

	class TreeMap;
	class TreeMap
		: public cpp_object<TreeMap>
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
		J2CPP_DECLARE_METHOD(31)
		J2CPP_DECLARE_METHOD(32)
		J2CPP_DECLARE_METHOD(33)
		J2CPP_DECLARE_METHOD(34)
		J2CPP_DECLARE_METHOD(35)
		J2CPP_DECLARE_METHOD(36)
		J2CPP_DECLARE_METHOD(37)

		TreeMap(jobject jobj)
		: cpp_object<TreeMap>(jobj)
		{
		}

		local_ref< java::lang::Object > clone();
		cpp_int size();
		cpp_boolean isEmpty();
		local_ref< java::lang::Object > get(local_ref< java::lang::Object > const&);
		cpp_boolean containsKey(local_ref< java::lang::Object > const&);
		local_ref< java::lang::Object > put(local_ref< java::lang::Object > const&, local_ref< java::lang::Object > const&);
		void clear();
		local_ref< java::lang::Object > remove(local_ref< java::lang::Object > const&);
		local_ref< java::util::Map_::Entry > firstEntry();
		local_ref< java::util::Map_::Entry > pollFirstEntry();
		local_ref< java::lang::Object > firstKey();
		local_ref< java::util::Map_::Entry > lastEntry();
		local_ref< java::util::Map_::Entry > pollLastEntry();
		local_ref< java::lang::Object > lastKey();
		local_ref< java::util::Map_::Entry > lowerEntry(local_ref< java::lang::Object > const&);
		local_ref< java::lang::Object > lowerKey(local_ref< java::lang::Object > const&);
		local_ref< java::util::Map_::Entry > floorEntry(local_ref< java::lang::Object > const&);
		local_ref< java::lang::Object > floorKey(local_ref< java::lang::Object > const&);
		local_ref< java::util::Map_::Entry > ceilingEntry(local_ref< java::lang::Object > const&);
		local_ref< java::lang::Object > ceilingKey(local_ref< java::lang::Object > const&);
		local_ref< java::util::Map_::Entry > higherEntry(local_ref< java::lang::Object > const&);
		local_ref< java::lang::Object > higherKey(local_ref< java::lang::Object > const&);
		local_ref< java::util::Comparator > comparator();
		local_ref< java::util::Set > entrySet();
		local_ref< java::util::Set > keySet();
		local_ref< java::util::NavigableSet > navigableKeySet();
		local_ref< java::util::NavigableMap > subMap(local_ref< java::lang::Object > const&, cpp_boolean const&, local_ref< java::lang::Object > const&, cpp_boolean const&);
		local_ref< java::util::SortedMap > subMap(local_ref< java::lang::Object > const&, local_ref< java::lang::Object > const&);
		local_ref< java::util::NavigableMap > headMap(local_ref< java::lang::Object > const&, cpp_boolean const&);
		local_ref< java::util::SortedMap > headMap(local_ref< java::lang::Object > const&);
		local_ref< java::util::NavigableMap > tailMap(local_ref< java::lang::Object > const&, cpp_boolean const&);
		local_ref< java::util::SortedMap > tailMap(local_ref< java::lang::Object > const&);
		local_ref< java::util::NavigableMap > descendingMap();
		local_ref< java::util::NavigableSet > descendingKeySet();
	}; //class TreeMap

} //namespace util
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_TREEMAP_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_TREEMAP_HPP_IMPL
#define J2CPP_JAVA_UTIL_TREEMAP_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::util::TreeMap > create< java::util::TreeMap>()
{
	return local_ref< java::util::TreeMap >(
		environment::get().get_jenv()->NewObject(
			get_class<java::util::TreeMap::J2CPP_CLASS_NAME>(),
			get_method_id<java::util::TreeMap::J2CPP_CLASS_NAME, java::util::TreeMap::J2CPP_METHOD_NAME(0), java::util::TreeMap::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

template <>
local_ref< java::util::TreeMap > create< java::util::TreeMap>(local_ref< java::util::Map > const &a0)
{
	return local_ref< java::util::TreeMap >(
		environment::get().get_jenv()->NewObject(
			get_class<java::util::TreeMap::J2CPP_CLASS_NAME>(),
			get_method_id<java::util::TreeMap::J2CPP_CLASS_NAME, java::util::TreeMap::J2CPP_METHOD_NAME(1), java::util::TreeMap::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< java::util::TreeMap > create< java::util::TreeMap>(local_ref< java::util::Comparator > const &a0)
{
	return local_ref< java::util::TreeMap >(
		environment::get().get_jenv()->NewObject(
			get_class<java::util::TreeMap::J2CPP_CLASS_NAME>(),
			get_method_id<java::util::TreeMap::J2CPP_CLASS_NAME, java::util::TreeMap::J2CPP_METHOD_NAME(2), java::util::TreeMap::J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< java::util::TreeMap > create< java::util::TreeMap>(local_ref< java::util::SortedMap > const &a0)
{
	return local_ref< java::util::TreeMap >(
		environment::get().get_jenv()->NewObject(
			get_class<java::util::TreeMap::J2CPP_CLASS_NAME>(),
			get_method_id<java::util::TreeMap::J2CPP_CLASS_NAME, java::util::TreeMap::J2CPP_METHOD_NAME(3), java::util::TreeMap::J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::Object > java::util::TreeMap::clone()
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

cpp_int java::util::TreeMap::size()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

cpp_boolean java::util::TreeMap::isEmpty()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

local_ref< java::lang::Object > java::util::TreeMap::get(local_ref< java::lang::Object > const &a0)
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::util::TreeMap::containsKey(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::Object > java::util::TreeMap::put(local_ref< java::lang::Object > const &a0, local_ref< java::lang::Object > const &a1)
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void java::util::TreeMap::clear()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>()
		)
	);
}

local_ref< java::lang::Object > java::util::TreeMap::remove(local_ref< java::lang::Object > const &a0)
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::util::Map_::Entry > java::util::TreeMap::firstEntry()
{
	return local_ref< java::util::Map_::Entry >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>()
		)
	);
}

local_ref< java::util::Map_::Entry > java::util::TreeMap::pollFirstEntry()
{
	return local_ref< java::util::Map_::Entry >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>()
		)
	);
}

local_ref< java::lang::Object > java::util::TreeMap::firstKey()
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>()
		)
	);
}

local_ref< java::util::Map_::Entry > java::util::TreeMap::lastEntry()
{
	return local_ref< java::util::Map_::Entry >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>()
		)
	);
}

local_ref< java::util::Map_::Entry > java::util::TreeMap::pollLastEntry()
{
	return local_ref< java::util::Map_::Entry >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>()
		)
	);
}

local_ref< java::lang::Object > java::util::TreeMap::lastKey()
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>()
		)
	);
}

local_ref< java::util::Map_::Entry > java::util::TreeMap::lowerEntry(local_ref< java::lang::Object > const &a0)
{
	return local_ref< java::util::Map_::Entry >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::Object > java::util::TreeMap::lowerKey(local_ref< java::lang::Object > const &a0)
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(19), J2CPP_METHOD_SIGNATURE(19), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::util::Map_::Entry > java::util::TreeMap::floorEntry(local_ref< java::lang::Object > const &a0)
{
	return local_ref< java::util::Map_::Entry >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(20), J2CPP_METHOD_SIGNATURE(20), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::Object > java::util::TreeMap::floorKey(local_ref< java::lang::Object > const &a0)
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(21), J2CPP_METHOD_SIGNATURE(21), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::util::Map_::Entry > java::util::TreeMap::ceilingEntry(local_ref< java::lang::Object > const &a0)
{
	return local_ref< java::util::Map_::Entry >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(22), J2CPP_METHOD_SIGNATURE(22), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::Object > java::util::TreeMap::ceilingKey(local_ref< java::lang::Object > const &a0)
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(23), J2CPP_METHOD_SIGNATURE(23), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::util::Map_::Entry > java::util::TreeMap::higherEntry(local_ref< java::lang::Object > const &a0)
{
	return local_ref< java::util::Map_::Entry >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(24), J2CPP_METHOD_SIGNATURE(24), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::Object > java::util::TreeMap::higherKey(local_ref< java::lang::Object > const &a0)
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(25), J2CPP_METHOD_SIGNATURE(25), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::util::Comparator > java::util::TreeMap::comparator()
{
	return local_ref< java::util::Comparator >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(26), J2CPP_METHOD_SIGNATURE(26), false>()
		)
	);
}

local_ref< java::util::Set > java::util::TreeMap::entrySet()
{
	return local_ref< java::util::Set >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(27), J2CPP_METHOD_SIGNATURE(27), false>()
		)
	);
}

local_ref< java::util::Set > java::util::TreeMap::keySet()
{
	return local_ref< java::util::Set >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(28), J2CPP_METHOD_SIGNATURE(28), false>()
		)
	);
}

local_ref< java::util::NavigableSet > java::util::TreeMap::navigableKeySet()
{
	return local_ref< java::util::NavigableSet >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(29), J2CPP_METHOD_SIGNATURE(29), false>()
		)
	);
}

local_ref< java::util::NavigableMap > java::util::TreeMap::subMap(local_ref< java::lang::Object > const &a0, cpp_boolean const &a1, local_ref< java::lang::Object > const &a2, cpp_boolean const &a3)
{
	return local_ref< java::util::NavigableMap >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(30), J2CPP_METHOD_SIGNATURE(30), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

local_ref< java::util::SortedMap > java::util::TreeMap::subMap(local_ref< java::lang::Object > const &a0, local_ref< java::lang::Object > const &a1)
{
	return local_ref< java::util::SortedMap >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(31), J2CPP_METHOD_SIGNATURE(31), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::util::NavigableMap > java::util::TreeMap::headMap(local_ref< java::lang::Object > const &a0, cpp_boolean const &a1)
{
	return local_ref< java::util::NavigableMap >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(32), J2CPP_METHOD_SIGNATURE(32), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::util::SortedMap > java::util::TreeMap::headMap(local_ref< java::lang::Object > const &a0)
{
	return local_ref< java::util::SortedMap >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(33), J2CPP_METHOD_SIGNATURE(33), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::util::NavigableMap > java::util::TreeMap::tailMap(local_ref< java::lang::Object > const &a0, cpp_boolean const &a1)
{
	return local_ref< java::util::NavigableMap >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(34), J2CPP_METHOD_SIGNATURE(34), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::util::SortedMap > java::util::TreeMap::tailMap(local_ref< java::lang::Object > const &a0)
{
	return local_ref< java::util::SortedMap >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(35), J2CPP_METHOD_SIGNATURE(35), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::util::NavigableMap > java::util::TreeMap::descendingMap()
{
	return local_ref< java::util::NavigableMap >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(36), J2CPP_METHOD_SIGNATURE(36), false>()
		)
	);
}

local_ref< java::util::NavigableSet > java::util::TreeMap::descendingKeySet()
{
	return local_ref< java::util::NavigableSet >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(37), J2CPP_METHOD_SIGNATURE(37), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(java::util::TreeMap,"java/util/TreeMap")
J2CPP_DEFINE_METHOD(java::util::TreeMap,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::util::TreeMap,1,"<init>","(Ljava/util/Map;)V")
J2CPP_DEFINE_METHOD(java::util::TreeMap,2,"<init>","(Ljava/util/Comparator;)V")
J2CPP_DEFINE_METHOD(java::util::TreeMap,3,"<init>","(Ljava/util/SortedMap;)V")
J2CPP_DEFINE_METHOD(java::util::TreeMap,4,"clone","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::TreeMap,5,"size","()I")
J2CPP_DEFINE_METHOD(java::util::TreeMap,6,"isEmpty","()Z")
J2CPP_DEFINE_METHOD(java::util::TreeMap,7,"get","(Ljava/lang/Object;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::TreeMap,8,"containsKey","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::TreeMap,9,"put","(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::TreeMap,10,"clear","()V")
J2CPP_DEFINE_METHOD(java::util::TreeMap,11,"remove","(Ljava/lang/Object;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::TreeMap,12,"firstEntry","()Ljava/util/Map$Entry;")
J2CPP_DEFINE_METHOD(java::util::TreeMap,13,"pollFirstEntry","()Ljava/util/Map$Entry;")
J2CPP_DEFINE_METHOD(java::util::TreeMap,14,"firstKey","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::TreeMap,15,"lastEntry","()Ljava/util/Map$Entry;")
J2CPP_DEFINE_METHOD(java::util::TreeMap,16,"pollLastEntry","()Ljava/util/Map$Entry;")
J2CPP_DEFINE_METHOD(java::util::TreeMap,17,"lastKey","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::TreeMap,18,"lowerEntry","(Ljava/lang/Object;)Ljava/util/Map$Entry;")
J2CPP_DEFINE_METHOD(java::util::TreeMap,19,"lowerKey","(Ljava/lang/Object;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::TreeMap,20,"floorEntry","(Ljava/lang/Object;)Ljava/util/Map$Entry;")
J2CPP_DEFINE_METHOD(java::util::TreeMap,21,"floorKey","(Ljava/lang/Object;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::TreeMap,22,"ceilingEntry","(Ljava/lang/Object;)Ljava/util/Map$Entry;")
J2CPP_DEFINE_METHOD(java::util::TreeMap,23,"ceilingKey","(Ljava/lang/Object;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::TreeMap,24,"higherEntry","(Ljava/lang/Object;)Ljava/util/Map$Entry;")
J2CPP_DEFINE_METHOD(java::util::TreeMap,25,"higherKey","(Ljava/lang/Object;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::TreeMap,26,"comparator","()Ljava/util/Comparator;")
J2CPP_DEFINE_METHOD(java::util::TreeMap,27,"entrySet","()Ljava/util/Set;")
J2CPP_DEFINE_METHOD(java::util::TreeMap,28,"keySet","()Ljava/util/Set;")
J2CPP_DEFINE_METHOD(java::util::TreeMap,29,"navigableKeySet","()Ljava/util/NavigableSet;")
J2CPP_DEFINE_METHOD(java::util::TreeMap,30,"subMap","(Ljava/lang/Object;ZLjava/lang/Object;Z)Ljava/util/NavigableMap;")
J2CPP_DEFINE_METHOD(java::util::TreeMap,31,"subMap","(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/SortedMap;")
J2CPP_DEFINE_METHOD(java::util::TreeMap,32,"headMap","(Ljava/lang/Object;Z)Ljava/util/NavigableMap;")
J2CPP_DEFINE_METHOD(java::util::TreeMap,33,"headMap","(Ljava/lang/Object;)Ljava/util/SortedMap;")
J2CPP_DEFINE_METHOD(java::util::TreeMap,34,"tailMap","(Ljava/lang/Object;Z)Ljava/util/NavigableMap;")
J2CPP_DEFINE_METHOD(java::util::TreeMap,35,"tailMap","(Ljava/lang/Object;)Ljava/util/SortedMap;")
J2CPP_DEFINE_METHOD(java::util::TreeMap,36,"descendingMap","()Ljava/util/NavigableMap;")
J2CPP_DEFINE_METHOD(java::util::TreeMap,37,"descendingKeySet","()Ljava/util/NavigableSet;")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_TREEMAP_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION