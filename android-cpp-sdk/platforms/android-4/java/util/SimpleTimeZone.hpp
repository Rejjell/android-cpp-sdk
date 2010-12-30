/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.SimpleTimeZone
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_SIMPLETIMEZONE_HPP_DECL
#define J2CPP_JAVA_UTIL_SIMPLETIMEZONE_HPP_DECL


namespace j2cpp { namespace java { namespace util { class TimeZone; } } }
namespace j2cpp { namespace java { namespace util { class Date; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/Date.hpp>
#include <java/util/TimeZone.hpp>


namespace j2cpp {

namespace java { namespace util {

	class SimpleTimeZone;
	class SimpleTimeZone
		: public object<SimpleTimeZone>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)

		explicit SimpleTimeZone(jobject jobj)
		: object<SimpleTimeZone>(jobj)
		{
		}

		operator local_ref<java::util::TimeZone>() const;


		SimpleTimeZone(jint, local_ref< java::lang::String > const&);
		SimpleTimeZone(jint, local_ref< java::lang::String > const&, jint, jint, jint, jint, jint, jint, jint, jint);
		SimpleTimeZone(jint, local_ref< java::lang::String > const&, jint, jint, jint, jint, jint, jint, jint, jint, jint);
		SimpleTimeZone(jint, local_ref< java::lang::String > const&, jint, jint, jint, jint, jint, jint, jint, jint, jint, jint, jint);
		local_ref< java::lang::Object > clone();
		jboolean equals(local_ref< java::lang::Object >  const&);
		jint getDSTSavings();
		jint getOffset(jint, jint, jint, jint, jint, jint);
		jint getOffset(jlong);
		jint getRawOffset();
		jint hashCode();
		jboolean hasSameRules(local_ref< java::util::TimeZone >  const&);
		jboolean inDaylightTime(local_ref< java::util::Date >  const&);
		void setDSTSavings(jint);
		void setEndRule(jint, jint, jint);
		void setEndRule(jint, jint, jint, jint);
		void setEndRule(jint, jint, jint, jint, jboolean);
		void setRawOffset(jint);
		void setStartRule(jint, jint, jint);
		void setStartRule(jint, jint, jint, jint);
		void setStartRule(jint, jint, jint, jint, jboolean);
		void setStartYear(jint);
		local_ref< java::lang::String > toString();
		jboolean useDaylightTime();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > UTC_TIME;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > STANDARD_TIME;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jint > WALL_TIME;
	}; //class SimpleTimeZone

} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_SIMPLETIMEZONE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_SIMPLETIMEZONE_HPP_IMPL
#define J2CPP_JAVA_UTIL_SIMPLETIMEZONE_HPP_IMPL

namespace j2cpp {



java::util::SimpleTimeZone::operator local_ref<java::util::TimeZone>() const
{
	return local_ref<java::util::TimeZone>(get_jobject());
}


java::util::SimpleTimeZone::SimpleTimeZone(jint a0, local_ref< java::lang::String > const &a1)
: object<java::util::SimpleTimeZone>(
	call_new_object<
		java::util::SimpleTimeZone::J2CPP_CLASS_NAME,
		java::util::SimpleTimeZone::J2CPP_METHOD_NAME(0),
		java::util::SimpleTimeZone::J2CPP_METHOD_SIGNATURE(0)>
	(a0, a1)
)
{
}



java::util::SimpleTimeZone::SimpleTimeZone(jint a0, local_ref< java::lang::String > const &a1, jint a2, jint a3, jint a4, jint a5, jint a6, jint a7, jint a8, jint a9)
: object<java::util::SimpleTimeZone>(
	call_new_object<
		java::util::SimpleTimeZone::J2CPP_CLASS_NAME,
		java::util::SimpleTimeZone::J2CPP_METHOD_NAME(1),
		java::util::SimpleTimeZone::J2CPP_METHOD_SIGNATURE(1)>
	(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9)
)
{
}



java::util::SimpleTimeZone::SimpleTimeZone(jint a0, local_ref< java::lang::String > const &a1, jint a2, jint a3, jint a4, jint a5, jint a6, jint a7, jint a8, jint a9, jint a10)
: object<java::util::SimpleTimeZone>(
	call_new_object<
		java::util::SimpleTimeZone::J2CPP_CLASS_NAME,
		java::util::SimpleTimeZone::J2CPP_METHOD_NAME(2),
		java::util::SimpleTimeZone::J2CPP_METHOD_SIGNATURE(2)>
	(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10)
)
{
}



java::util::SimpleTimeZone::SimpleTimeZone(jint a0, local_ref< java::lang::String > const &a1, jint a2, jint a3, jint a4, jint a5, jint a6, jint a7, jint a8, jint a9, jint a10, jint a11, jint a12)
: object<java::util::SimpleTimeZone>(
	call_new_object<
		java::util::SimpleTimeZone::J2CPP_CLASS_NAME,
		java::util::SimpleTimeZone::J2CPP_METHOD_NAME(3),
		java::util::SimpleTimeZone::J2CPP_METHOD_SIGNATURE(3)>
	(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12)
)
{
}


local_ref< java::lang::Object > java::util::SimpleTimeZone::clone()
{
	return call_method<
		java::util::SimpleTimeZone::J2CPP_CLASS_NAME,
		java::util::SimpleTimeZone::J2CPP_METHOD_NAME(4),
		java::util::SimpleTimeZone::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::lang::Object > >
	(get_jobject());
}

jboolean java::util::SimpleTimeZone::equals(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::SimpleTimeZone::J2CPP_CLASS_NAME,
		java::util::SimpleTimeZone::J2CPP_METHOD_NAME(5),
		java::util::SimpleTimeZone::J2CPP_METHOD_SIGNATURE(5), 
		jboolean >
	(get_jobject(), a0);
}

jint java::util::SimpleTimeZone::getDSTSavings()
{
	return call_method<
		java::util::SimpleTimeZone::J2CPP_CLASS_NAME,
		java::util::SimpleTimeZone::J2CPP_METHOD_NAME(6),
		java::util::SimpleTimeZone::J2CPP_METHOD_SIGNATURE(6), 
		jint >
	(get_jobject());
}

jint java::util::SimpleTimeZone::getOffset(jint a0, jint a1, jint a2, jint a3, jint a4, jint a5)
{
	return call_method<
		java::util::SimpleTimeZone::J2CPP_CLASS_NAME,
		java::util::SimpleTimeZone::J2CPP_METHOD_NAME(7),
		java::util::SimpleTimeZone::J2CPP_METHOD_SIGNATURE(7), 
		jint >
	(get_jobject(), a0, a1, a2, a3, a4, a5);
}

jint java::util::SimpleTimeZone::getOffset(jlong a0)
{
	return call_method<
		java::util::SimpleTimeZone::J2CPP_CLASS_NAME,
		java::util::SimpleTimeZone::J2CPP_METHOD_NAME(8),
		java::util::SimpleTimeZone::J2CPP_METHOD_SIGNATURE(8), 
		jint >
	(get_jobject(), a0);
}

jint java::util::SimpleTimeZone::getRawOffset()
{
	return call_method<
		java::util::SimpleTimeZone::J2CPP_CLASS_NAME,
		java::util::SimpleTimeZone::J2CPP_METHOD_NAME(9),
		java::util::SimpleTimeZone::J2CPP_METHOD_SIGNATURE(9), 
		jint >
	(get_jobject());
}

jint java::util::SimpleTimeZone::hashCode()
{
	return call_method<
		java::util::SimpleTimeZone::J2CPP_CLASS_NAME,
		java::util::SimpleTimeZone::J2CPP_METHOD_NAME(10),
		java::util::SimpleTimeZone::J2CPP_METHOD_SIGNATURE(10), 
		jint >
	(get_jobject());
}

jboolean java::util::SimpleTimeZone::hasSameRules(local_ref< java::util::TimeZone > const &a0)
{
	return call_method<
		java::util::SimpleTimeZone::J2CPP_CLASS_NAME,
		java::util::SimpleTimeZone::J2CPP_METHOD_NAME(11),
		java::util::SimpleTimeZone::J2CPP_METHOD_SIGNATURE(11), 
		jboolean >
	(get_jobject(), a0);
}

jboolean java::util::SimpleTimeZone::inDaylightTime(local_ref< java::util::Date > const &a0)
{
	return call_method<
		java::util::SimpleTimeZone::J2CPP_CLASS_NAME,
		java::util::SimpleTimeZone::J2CPP_METHOD_NAME(12),
		java::util::SimpleTimeZone::J2CPP_METHOD_SIGNATURE(12), 
		jboolean >
	(get_jobject(), a0);
}

void java::util::SimpleTimeZone::setDSTSavings(jint a0)
{
	return call_method<
		java::util::SimpleTimeZone::J2CPP_CLASS_NAME,
		java::util::SimpleTimeZone::J2CPP_METHOD_NAME(13),
		java::util::SimpleTimeZone::J2CPP_METHOD_SIGNATURE(13), 
		void >
	(get_jobject(), a0);
}

void java::util::SimpleTimeZone::setEndRule(jint a0, jint a1, jint a2)
{
	return call_method<
		java::util::SimpleTimeZone::J2CPP_CLASS_NAME,
		java::util::SimpleTimeZone::J2CPP_METHOD_NAME(14),
		java::util::SimpleTimeZone::J2CPP_METHOD_SIGNATURE(14), 
		void >
	(get_jobject(), a0, a1, a2);
}

void java::util::SimpleTimeZone::setEndRule(jint a0, jint a1, jint a2, jint a3)
{
	return call_method<
		java::util::SimpleTimeZone::J2CPP_CLASS_NAME,
		java::util::SimpleTimeZone::J2CPP_METHOD_NAME(15),
		java::util::SimpleTimeZone::J2CPP_METHOD_SIGNATURE(15), 
		void >
	(get_jobject(), a0, a1, a2, a3);
}

void java::util::SimpleTimeZone::setEndRule(jint a0, jint a1, jint a2, jint a3, jboolean a4)
{
	return call_method<
		java::util::SimpleTimeZone::J2CPP_CLASS_NAME,
		java::util::SimpleTimeZone::J2CPP_METHOD_NAME(16),
		java::util::SimpleTimeZone::J2CPP_METHOD_SIGNATURE(16), 
		void >
	(get_jobject(), a0, a1, a2, a3, a4);
}

void java::util::SimpleTimeZone::setRawOffset(jint a0)
{
	return call_method<
		java::util::SimpleTimeZone::J2CPP_CLASS_NAME,
		java::util::SimpleTimeZone::J2CPP_METHOD_NAME(17),
		java::util::SimpleTimeZone::J2CPP_METHOD_SIGNATURE(17), 
		void >
	(get_jobject(), a0);
}

void java::util::SimpleTimeZone::setStartRule(jint a0, jint a1, jint a2)
{
	return call_method<
		java::util::SimpleTimeZone::J2CPP_CLASS_NAME,
		java::util::SimpleTimeZone::J2CPP_METHOD_NAME(18),
		java::util::SimpleTimeZone::J2CPP_METHOD_SIGNATURE(18), 
		void >
	(get_jobject(), a0, a1, a2);
}

void java::util::SimpleTimeZone::setStartRule(jint a0, jint a1, jint a2, jint a3)
{
	return call_method<
		java::util::SimpleTimeZone::J2CPP_CLASS_NAME,
		java::util::SimpleTimeZone::J2CPP_METHOD_NAME(19),
		java::util::SimpleTimeZone::J2CPP_METHOD_SIGNATURE(19), 
		void >
	(get_jobject(), a0, a1, a2, a3);
}

void java::util::SimpleTimeZone::setStartRule(jint a0, jint a1, jint a2, jint a3, jboolean a4)
{
	return call_method<
		java::util::SimpleTimeZone::J2CPP_CLASS_NAME,
		java::util::SimpleTimeZone::J2CPP_METHOD_NAME(20),
		java::util::SimpleTimeZone::J2CPP_METHOD_SIGNATURE(20), 
		void >
	(get_jobject(), a0, a1, a2, a3, a4);
}

void java::util::SimpleTimeZone::setStartYear(jint a0)
{
	return call_method<
		java::util::SimpleTimeZone::J2CPP_CLASS_NAME,
		java::util::SimpleTimeZone::J2CPP_METHOD_NAME(21),
		java::util::SimpleTimeZone::J2CPP_METHOD_SIGNATURE(21), 
		void >
	(get_jobject(), a0);
}

local_ref< java::lang::String > java::util::SimpleTimeZone::toString()
{
	return call_method<
		java::util::SimpleTimeZone::J2CPP_CLASS_NAME,
		java::util::SimpleTimeZone::J2CPP_METHOD_NAME(22),
		java::util::SimpleTimeZone::J2CPP_METHOD_SIGNATURE(22), 
		local_ref< java::lang::String > >
	(get_jobject());
}

jboolean java::util::SimpleTimeZone::useDaylightTime()
{
	return call_method<
		java::util::SimpleTimeZone::J2CPP_CLASS_NAME,
		java::util::SimpleTimeZone::J2CPP_METHOD_NAME(23),
		java::util::SimpleTimeZone::J2CPP_METHOD_SIGNATURE(23), 
		jboolean >
	(get_jobject());
}


static_field<
	java::util::SimpleTimeZone::J2CPP_CLASS_NAME,
	java::util::SimpleTimeZone::J2CPP_FIELD_NAME(0),
	java::util::SimpleTimeZone::J2CPP_FIELD_SIGNATURE(0),
	jint
> java::util::SimpleTimeZone::UTC_TIME;

static_field<
	java::util::SimpleTimeZone::J2CPP_CLASS_NAME,
	java::util::SimpleTimeZone::J2CPP_FIELD_NAME(1),
	java::util::SimpleTimeZone::J2CPP_FIELD_SIGNATURE(1),
	jint
> java::util::SimpleTimeZone::STANDARD_TIME;

static_field<
	java::util::SimpleTimeZone::J2CPP_CLASS_NAME,
	java::util::SimpleTimeZone::J2CPP_FIELD_NAME(2),
	java::util::SimpleTimeZone::J2CPP_FIELD_SIGNATURE(2),
	jint
> java::util::SimpleTimeZone::WALL_TIME;


J2CPP_DEFINE_CLASS(java::util::SimpleTimeZone,"java/util/SimpleTimeZone")
J2CPP_DEFINE_METHOD(java::util::SimpleTimeZone,0,"<init>","(ILjava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::util::SimpleTimeZone,1,"<init>","(ILjava/lang/String;IIIIIIII)V")
J2CPP_DEFINE_METHOD(java::util::SimpleTimeZone,2,"<init>","(ILjava/lang/String;IIIIIIIII)V")
J2CPP_DEFINE_METHOD(java::util::SimpleTimeZone,3,"<init>","(ILjava/lang/String;IIIIIIIIIII)V")
J2CPP_DEFINE_METHOD(java::util::SimpleTimeZone,4,"clone","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::SimpleTimeZone,5,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::SimpleTimeZone,6,"getDSTSavings","()I")
J2CPP_DEFINE_METHOD(java::util::SimpleTimeZone,7,"getOffset","(IIIIII)I")
J2CPP_DEFINE_METHOD(java::util::SimpleTimeZone,8,"getOffset","(J)I")
J2CPP_DEFINE_METHOD(java::util::SimpleTimeZone,9,"getRawOffset","()I")
J2CPP_DEFINE_METHOD(java::util::SimpleTimeZone,10,"hashCode","()I")
J2CPP_DEFINE_METHOD(java::util::SimpleTimeZone,11,"hasSameRules","(Ljava/util/TimeZone;)Z")
J2CPP_DEFINE_METHOD(java::util::SimpleTimeZone,12,"inDaylightTime","(Ljava/util/Date;)Z")
J2CPP_DEFINE_METHOD(java::util::SimpleTimeZone,13,"setDSTSavings","(I)V")
J2CPP_DEFINE_METHOD(java::util::SimpleTimeZone,14,"setEndRule","(III)V")
J2CPP_DEFINE_METHOD(java::util::SimpleTimeZone,15,"setEndRule","(IIII)V")
J2CPP_DEFINE_METHOD(java::util::SimpleTimeZone,16,"setEndRule","(IIIIZ)V")
J2CPP_DEFINE_METHOD(java::util::SimpleTimeZone,17,"setRawOffset","(I)V")
J2CPP_DEFINE_METHOD(java::util::SimpleTimeZone,18,"setStartRule","(III)V")
J2CPP_DEFINE_METHOD(java::util::SimpleTimeZone,19,"setStartRule","(IIII)V")
J2CPP_DEFINE_METHOD(java::util::SimpleTimeZone,20,"setStartRule","(IIIIZ)V")
J2CPP_DEFINE_METHOD(java::util::SimpleTimeZone,21,"setStartYear","(I)V")
J2CPP_DEFINE_METHOD(java::util::SimpleTimeZone,22,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::SimpleTimeZone,23,"useDaylightTime","()Z")
J2CPP_DEFINE_FIELD(java::util::SimpleTimeZone,0,"UTC_TIME","I")
J2CPP_DEFINE_FIELD(java::util::SimpleTimeZone,1,"STANDARD_TIME","I")
J2CPP_DEFINE_FIELD(java::util::SimpleTimeZone,2,"WALL_TIME","I")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_SIMPLETIMEZONE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
