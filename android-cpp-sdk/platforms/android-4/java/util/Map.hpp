/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.Map
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_MAP_HPP_DECL
#define J2CPP_JAVA_UTIL_MAP_HPP_DECL


namespace j2cpp { namespace java { namespace util { class Set; } } }
namespace j2cpp { namespace java { namespace util { class Collection; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Set.hpp>


namespace j2cpp {

namespace java { namespace util {

	class Map;
	namespace Map_ {

		class Entry;
		class Entry
			: public object<Entry>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)
			J2CPP_DECLARE_METHOD(2)
			J2CPP_DECLARE_METHOD(3)
			J2CPP_DECLARE_METHOD(4)

			explicit Entry(jobject jobj)
			: object<Entry>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			jboolean equals(local_ref< java::lang::Object >  const&);
			local_ref< java::lang::Object > getKey();
			local_ref< java::lang::Object > getValue();
			jint hashCode();
			local_ref< java::lang::Object > setValue(local_ref< java::lang::Object >  const&);
		}; //class Entry

	} //namespace Map_

	class Map
		: public object<Map>
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

		typedef Map_::Entry Entry;

		explicit Map(jobject jobj)
		: object<Map>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		void clear();
		jboolean containsKey(local_ref< java::lang::Object >  const&);
		jboolean containsValue(local_ref< java::lang::Object >  const&);
		local_ref< java::util::Set > entrySet();
		jboolean equals(local_ref< java::lang::Object >  const&);
		local_ref< java::lang::Object > get(local_ref< java::lang::Object >  const&);
		jint hashCode();
		jboolean isEmpty();
		local_ref< java::util::Set > keySet();
		local_ref< java::lang::Object > put(local_ref< java::lang::Object >  const&, local_ref< java::lang::Object >  const&);
		void putAll(local_ref< java::util::Map >  const&);
		local_ref< java::lang::Object > remove(local_ref< java::lang::Object >  const&);
		jint size();
		local_ref< java::util::Collection > values();
	}; //class Map

} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_MAP_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_MAP_HPP_IMPL
#define J2CPP_JAVA_UTIL_MAP_HPP_IMPL

namespace j2cpp {




java::util::Map_::Entry::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

jboolean java::util::Map_::Entry::equals(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::Map_::Entry::J2CPP_CLASS_NAME,
		java::util::Map_::Entry::J2CPP_METHOD_NAME(0),
		java::util::Map_::Entry::J2CPP_METHOD_SIGNATURE(0), 
		jboolean >
	(get_jobject(), a0);
}

local_ref< java::lang::Object > java::util::Map_::Entry::getKey()
{
	return call_method<
		java::util::Map_::Entry::J2CPP_CLASS_NAME,
		java::util::Map_::Entry::J2CPP_METHOD_NAME(1),
		java::util::Map_::Entry::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::Object > >
	(get_jobject());
}

local_ref< java::lang::Object > java::util::Map_::Entry::getValue()
{
	return call_method<
		java::util::Map_::Entry::J2CPP_CLASS_NAME,
		java::util::Map_::Entry::J2CPP_METHOD_NAME(2),
		java::util::Map_::Entry::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::lang::Object > >
	(get_jobject());
}

jint java::util::Map_::Entry::hashCode()
{
	return call_method<
		java::util::Map_::Entry::J2CPP_CLASS_NAME,
		java::util::Map_::Entry::J2CPP_METHOD_NAME(3),
		java::util::Map_::Entry::J2CPP_METHOD_SIGNATURE(3), 
		jint >
	(get_jobject());
}

local_ref< java::lang::Object > java::util::Map_::Entry::setValue(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::Map_::Entry::J2CPP_CLASS_NAME,
		java::util::Map_::Entry::J2CPP_METHOD_NAME(4),
		java::util::Map_::Entry::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::lang::Object > >
	(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(java::util::Map_::Entry,"java/util/Map$Entry")
J2CPP_DEFINE_METHOD(java::util::Map_::Entry,0,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::Map_::Entry,1,"getKey","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::Map_::Entry,2,"getValue","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::Map_::Entry,3,"hashCode","()I")
J2CPP_DEFINE_METHOD(java::util::Map_::Entry,4,"setValue","(Ljava/lang/Object;)Ljava/lang/Object;")



java::util::Map::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void java::util::Map::clear()
{
	return call_method<
		java::util::Map::J2CPP_CLASS_NAME,
		java::util::Map::J2CPP_METHOD_NAME(0),
		java::util::Map::J2CPP_METHOD_SIGNATURE(0), 
		void >
	(get_jobject());
}

jboolean java::util::Map::containsKey(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::Map::J2CPP_CLASS_NAME,
		java::util::Map::J2CPP_METHOD_NAME(1),
		java::util::Map::J2CPP_METHOD_SIGNATURE(1), 
		jboolean >
	(get_jobject(), a0);
}

jboolean java::util::Map::containsValue(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::Map::J2CPP_CLASS_NAME,
		java::util::Map::J2CPP_METHOD_NAME(2),
		java::util::Map::J2CPP_METHOD_SIGNATURE(2), 
		jboolean >
	(get_jobject(), a0);
}

local_ref< java::util::Set > java::util::Map::entrySet()
{
	return call_method<
		java::util::Map::J2CPP_CLASS_NAME,
		java::util::Map::J2CPP_METHOD_NAME(3),
		java::util::Map::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::util::Set > >
	(get_jobject());
}

jboolean java::util::Map::equals(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::Map::J2CPP_CLASS_NAME,
		java::util::Map::J2CPP_METHOD_NAME(4),
		java::util::Map::J2CPP_METHOD_SIGNATURE(4), 
		jboolean >
	(get_jobject(), a0);
}

local_ref< java::lang::Object > java::util::Map::get(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::Map::J2CPP_CLASS_NAME,
		java::util::Map::J2CPP_METHOD_NAME(5),
		java::util::Map::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::lang::Object > >
	(get_jobject(), a0);
}

jint java::util::Map::hashCode()
{
	return call_method<
		java::util::Map::J2CPP_CLASS_NAME,
		java::util::Map::J2CPP_METHOD_NAME(6),
		java::util::Map::J2CPP_METHOD_SIGNATURE(6), 
		jint >
	(get_jobject());
}

jboolean java::util::Map::isEmpty()
{
	return call_method<
		java::util::Map::J2CPP_CLASS_NAME,
		java::util::Map::J2CPP_METHOD_NAME(7),
		java::util::Map::J2CPP_METHOD_SIGNATURE(7), 
		jboolean >
	(get_jobject());
}

local_ref< java::util::Set > java::util::Map::keySet()
{
	return call_method<
		java::util::Map::J2CPP_CLASS_NAME,
		java::util::Map::J2CPP_METHOD_NAME(8),
		java::util::Map::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< java::util::Set > >
	(get_jobject());
}

local_ref< java::lang::Object > java::util::Map::put(local_ref< java::lang::Object > const &a0, local_ref< java::lang::Object > const &a1)
{
	return call_method<
		java::util::Map::J2CPP_CLASS_NAME,
		java::util::Map::J2CPP_METHOD_NAME(9),
		java::util::Map::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< java::lang::Object > >
	(get_jobject(), a0, a1);
}

void java::util::Map::putAll(local_ref< java::util::Map > const &a0)
{
	return call_method<
		java::util::Map::J2CPP_CLASS_NAME,
		java::util::Map::J2CPP_METHOD_NAME(10),
		java::util::Map::J2CPP_METHOD_SIGNATURE(10), 
		void >
	(get_jobject(), a0);
}

local_ref< java::lang::Object > java::util::Map::remove(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::Map::J2CPP_CLASS_NAME,
		java::util::Map::J2CPP_METHOD_NAME(11),
		java::util::Map::J2CPP_METHOD_SIGNATURE(11), 
		local_ref< java::lang::Object > >
	(get_jobject(), a0);
}

jint java::util::Map::size()
{
	return call_method<
		java::util::Map::J2CPP_CLASS_NAME,
		java::util::Map::J2CPP_METHOD_NAME(12),
		java::util::Map::J2CPP_METHOD_SIGNATURE(12), 
		jint >
	(get_jobject());
}

local_ref< java::util::Collection > java::util::Map::values()
{
	return call_method<
		java::util::Map::J2CPP_CLASS_NAME,
		java::util::Map::J2CPP_METHOD_NAME(13),
		java::util::Map::J2CPP_METHOD_SIGNATURE(13), 
		local_ref< java::util::Collection > >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(java::util::Map,"java/util/Map")
J2CPP_DEFINE_METHOD(java::util::Map,0,"clear","()V")
J2CPP_DEFINE_METHOD(java::util::Map,1,"containsKey","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::Map,2,"containsValue","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::Map,3,"entrySet","()Ljava/util/Set;")
J2CPP_DEFINE_METHOD(java::util::Map,4,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::Map,5,"get","(Ljava/lang/Object;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::Map,6,"hashCode","()I")
J2CPP_DEFINE_METHOD(java::util::Map,7,"isEmpty","()Z")
J2CPP_DEFINE_METHOD(java::util::Map,8,"keySet","()Ljava/util/Set;")
J2CPP_DEFINE_METHOD(java::util::Map,9,"put","(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::Map,10,"putAll","(Ljava/util/Map;)V")
J2CPP_DEFINE_METHOD(java::util::Map,11,"remove","(Ljava/lang/Object;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::Map,12,"size","()I")
J2CPP_DEFINE_METHOD(java::util::Map,13,"values","()Ljava/util/Collection;")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_MAP_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
