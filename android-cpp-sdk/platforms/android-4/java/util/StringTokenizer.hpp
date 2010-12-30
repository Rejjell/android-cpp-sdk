/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.StringTokenizer
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_STRINGTOKENIZER_HPP_DECL
#define J2CPP_JAVA_UTIL_STRINGTOKENIZER_HPP_DECL


namespace j2cpp { namespace java { namespace util { class Enumeration; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/Enumeration.hpp>


namespace j2cpp {

namespace java { namespace util {

	class StringTokenizer;
	class StringTokenizer
		: public object<StringTokenizer>
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

		explicit StringTokenizer(jobject jobj)
		: object<StringTokenizer>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::util::Enumeration>() const;


		StringTokenizer(local_ref< java::lang::String > const&);
		StringTokenizer(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		StringTokenizer(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&, jboolean);
		jint countTokens();
		jboolean hasMoreElements();
		jboolean hasMoreTokens();
		local_ref< java::lang::Object > nextElement();
		local_ref< java::lang::String > nextToken();
		local_ref< java::lang::String > nextToken(local_ref< java::lang::String >  const&);
	}; //class StringTokenizer

} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_STRINGTOKENIZER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_STRINGTOKENIZER_HPP_IMPL
#define J2CPP_JAVA_UTIL_STRINGTOKENIZER_HPP_IMPL

namespace j2cpp {



java::util::StringTokenizer::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::util::StringTokenizer::operator local_ref<java::util::Enumeration>() const
{
	return local_ref<java::util::Enumeration>(get_jobject());
}


java::util::StringTokenizer::StringTokenizer(local_ref< java::lang::String > const &a0)
: object<java::util::StringTokenizer>(
	call_new_object<
		java::util::StringTokenizer::J2CPP_CLASS_NAME,
		java::util::StringTokenizer::J2CPP_METHOD_NAME(0),
		java::util::StringTokenizer::J2CPP_METHOD_SIGNATURE(0)>
	(a0)
)
{
}



java::util::StringTokenizer::StringTokenizer(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
: object<java::util::StringTokenizer>(
	call_new_object<
		java::util::StringTokenizer::J2CPP_CLASS_NAME,
		java::util::StringTokenizer::J2CPP_METHOD_NAME(1),
		java::util::StringTokenizer::J2CPP_METHOD_SIGNATURE(1)>
	(a0, a1)
)
{
}



java::util::StringTokenizer::StringTokenizer(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, jboolean a2)
: object<java::util::StringTokenizer>(
	call_new_object<
		java::util::StringTokenizer::J2CPP_CLASS_NAME,
		java::util::StringTokenizer::J2CPP_METHOD_NAME(2),
		java::util::StringTokenizer::J2CPP_METHOD_SIGNATURE(2)>
	(a0, a1, a2)
)
{
}


jint java::util::StringTokenizer::countTokens()
{
	return call_method<
		java::util::StringTokenizer::J2CPP_CLASS_NAME,
		java::util::StringTokenizer::J2CPP_METHOD_NAME(3),
		java::util::StringTokenizer::J2CPP_METHOD_SIGNATURE(3), 
		jint >
	(get_jobject());
}

jboolean java::util::StringTokenizer::hasMoreElements()
{
	return call_method<
		java::util::StringTokenizer::J2CPP_CLASS_NAME,
		java::util::StringTokenizer::J2CPP_METHOD_NAME(4),
		java::util::StringTokenizer::J2CPP_METHOD_SIGNATURE(4), 
		jboolean >
	(get_jobject());
}

jboolean java::util::StringTokenizer::hasMoreTokens()
{
	return call_method<
		java::util::StringTokenizer::J2CPP_CLASS_NAME,
		java::util::StringTokenizer::J2CPP_METHOD_NAME(5),
		java::util::StringTokenizer::J2CPP_METHOD_SIGNATURE(5), 
		jboolean >
	(get_jobject());
}

local_ref< java::lang::Object > java::util::StringTokenizer::nextElement()
{
	return call_method<
		java::util::StringTokenizer::J2CPP_CLASS_NAME,
		java::util::StringTokenizer::J2CPP_METHOD_NAME(6),
		java::util::StringTokenizer::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::lang::Object > >
	(get_jobject());
}

local_ref< java::lang::String > java::util::StringTokenizer::nextToken()
{
	return call_method<
		java::util::StringTokenizer::J2CPP_CLASS_NAME,
		java::util::StringTokenizer::J2CPP_METHOD_NAME(7),
		java::util::StringTokenizer::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< java::lang::String > >
	(get_jobject());
}

local_ref< java::lang::String > java::util::StringTokenizer::nextToken(local_ref< java::lang::String > const &a0)
{
	return call_method<
		java::util::StringTokenizer::J2CPP_CLASS_NAME,
		java::util::StringTokenizer::J2CPP_METHOD_NAME(8),
		java::util::StringTokenizer::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< java::lang::String > >
	(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(java::util::StringTokenizer,"java/util/StringTokenizer")
J2CPP_DEFINE_METHOD(java::util::StringTokenizer,0,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::util::StringTokenizer,1,"<init>","(Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::util::StringTokenizer,2,"<init>","(Ljava/lang/String;Ljava/lang/String;Z)V")
J2CPP_DEFINE_METHOD(java::util::StringTokenizer,3,"countTokens","()I")
J2CPP_DEFINE_METHOD(java::util::StringTokenizer,4,"hasMoreElements","()Z")
J2CPP_DEFINE_METHOD(java::util::StringTokenizer,5,"hasMoreTokens","()Z")
J2CPP_DEFINE_METHOD(java::util::StringTokenizer,6,"nextElement","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::StringTokenizer,7,"nextToken","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::StringTokenizer,8,"nextToken","(Ljava/lang/String;)Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_STRINGTOKENIZER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
