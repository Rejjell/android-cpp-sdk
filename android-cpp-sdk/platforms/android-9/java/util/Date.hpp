/*================================================================================
  code generated by: java2cpp
  class: java.util.Date
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_DATE_HPP_DECL
#define J2CPP_JAVA_UTIL_DATE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace util {

	class Date;
	class Date
		: public cpp_object<Date>
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

		Date(jobject jobj)
		: cpp_object<Date>(jobj)
		{
		}

		cpp_boolean after(local_ref< java::util::Date > const&);
		cpp_boolean before(local_ref< java::util::Date > const&);
		local_ref< java::lang::Object > clone();
		cpp_int compareTo(local_ref< java::util::Date > const&);
		cpp_boolean equals(local_ref< java::lang::Object > const&);
		cpp_int getDate();
		cpp_int getDay();
		cpp_int getHours();
		cpp_int getMinutes();
		cpp_int getMonth();
		cpp_int getSeconds();
		cpp_long getTime();
		cpp_int getTimezoneOffset();
		cpp_int getYear();
		cpp_int hashCode();
		static cpp_long parse(local_ref< java::lang::String > const&);
		void setDate(cpp_int const&);
		void setHours(cpp_int const&);
		void setMinutes(cpp_int const&);
		void setMonth(cpp_int const&);
		void setSeconds(cpp_int const&);
		void setTime(cpp_long const&);
		void setYear(cpp_int const&);
		local_ref< java::lang::String > toGMTString();
		local_ref< java::lang::String > toLocaleString();
		local_ref< java::lang::String > toString();
		static cpp_long UTC(cpp_int const&, cpp_int const&, cpp_int const&, cpp_int const&, cpp_int const&, cpp_int const&);
		cpp_int compareTo(local_ref< java::lang::Object > const&);
	}; //class Date

} //namespace util
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_DATE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_DATE_HPP_IMPL
#define J2CPP_JAVA_UTIL_DATE_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::util::Date > create< java::util::Date>()
{
	return local_ref< java::util::Date >(
		environment::get().get_jenv()->NewObject(
			get_class<java::util::Date::J2CPP_CLASS_NAME>(),
			get_method_id<java::util::Date::J2CPP_CLASS_NAME, java::util::Date::J2CPP_METHOD_NAME(0), java::util::Date::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

template <>
local_ref< java::util::Date > create< java::util::Date>(cpp_int const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return local_ref< java::util::Date >(
		environment::get().get_jenv()->NewObject(
			get_class<java::util::Date::J2CPP_CLASS_NAME>(),
			get_method_id<java::util::Date::J2CPP_CLASS_NAME, java::util::Date::J2CPP_METHOD_NAME(1), java::util::Date::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

template <>
local_ref< java::util::Date > create< java::util::Date>(cpp_int const &a0, cpp_int const &a1, cpp_int const &a2, cpp_int const &a3, cpp_int const &a4)
{
	return local_ref< java::util::Date >(
		environment::get().get_jenv()->NewObject(
			get_class<java::util::Date::J2CPP_CLASS_NAME>(),
			get_method_id<java::util::Date::J2CPP_CLASS_NAME, java::util::Date::J2CPP_METHOD_NAME(2), java::util::Date::J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype(), a4.get_jtype()
		)
	);
}

template <>
local_ref< java::util::Date > create< java::util::Date>(cpp_int const &a0, cpp_int const &a1, cpp_int const &a2, cpp_int const &a3, cpp_int const &a4, cpp_int const &a5)
{
	return local_ref< java::util::Date >(
		environment::get().get_jenv()->NewObject(
			get_class<java::util::Date::J2CPP_CLASS_NAME>(),
			get_method_id<java::util::Date::J2CPP_CLASS_NAME, java::util::Date::J2CPP_METHOD_NAME(3), java::util::Date::J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype(), a4.get_jtype(), a5.get_jtype()
		)
	);
}

template <>
local_ref< java::util::Date > create< java::util::Date>(cpp_long const &a0)
{
	return local_ref< java::util::Date >(
		environment::get().get_jenv()->NewObject(
			get_class<java::util::Date::J2CPP_CLASS_NAME>(),
			get_method_id<java::util::Date::J2CPP_CLASS_NAME, java::util::Date::J2CPP_METHOD_NAME(4), java::util::Date::J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< java::util::Date > create< java::util::Date>(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::util::Date >(
		environment::get().get_jenv()->NewObject(
			get_class<java::util::Date::J2CPP_CLASS_NAME>(),
			get_method_id<java::util::Date::J2CPP_CLASS_NAME, java::util::Date::J2CPP_METHOD_NAME(5), java::util::Date::J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::util::Date::after(local_ref< java::util::Date > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::util::Date::before(local_ref< java::util::Date > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::Object > java::util::Date::clone()
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>()
		)
	);
}

cpp_int java::util::Date::compareTo(local_ref< java::util::Date > const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::util::Date::equals(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int java::util::Date::getDate()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>()
		)
	);
}

cpp_int java::util::Date::getDay()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>()
		)
	);
}

cpp_int java::util::Date::getHours()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>()
		)
	);
}

cpp_int java::util::Date::getMinutes()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>()
		)
	);
}

cpp_int java::util::Date::getMonth()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>()
		)
	);
}

cpp_int java::util::Date::getSeconds()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>()
		)
	);
}

cpp_long java::util::Date::getTime()
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>()
		)
	);
}

cpp_int java::util::Date::getTimezoneOffset()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), false>()
		)
	);
}

cpp_int java::util::Date::getYear()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(19), J2CPP_METHOD_SIGNATURE(19), false>()
		)
	);
}

cpp_int java::util::Date::hashCode()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(20), J2CPP_METHOD_SIGNATURE(20), false>()
		)
	);
}

cpp_long java::util::Date::parse(local_ref< java::lang::String > const &a0)
{
	return cpp_long(
		environment::get().get_jenv()->CallStaticLongMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(21), J2CPP_METHOD_SIGNATURE(21), true>(),
			a0.get_jtype()
		)
	);
}

void java::util::Date::setDate(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(22), J2CPP_METHOD_SIGNATURE(22), false>(),
			a0.get_jtype()
		)
	);
}

void java::util::Date::setHours(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(23), J2CPP_METHOD_SIGNATURE(23), false>(),
			a0.get_jtype()
		)
	);
}

void java::util::Date::setMinutes(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(24), J2CPP_METHOD_SIGNATURE(24), false>(),
			a0.get_jtype()
		)
	);
}

void java::util::Date::setMonth(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(25), J2CPP_METHOD_SIGNATURE(25), false>(),
			a0.get_jtype()
		)
	);
}

void java::util::Date::setSeconds(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(26), J2CPP_METHOD_SIGNATURE(26), false>(),
			a0.get_jtype()
		)
	);
}

void java::util::Date::setTime(cpp_long const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(27), J2CPP_METHOD_SIGNATURE(27), false>(),
			a0.get_jtype()
		)
	);
}

void java::util::Date::setYear(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(28), J2CPP_METHOD_SIGNATURE(28), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > java::util::Date::toGMTString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(29), J2CPP_METHOD_SIGNATURE(29), false>()
		)
	);
}

local_ref< java::lang::String > java::util::Date::toLocaleString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(30), J2CPP_METHOD_SIGNATURE(30), false>()
		)
	);
}

local_ref< java::lang::String > java::util::Date::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(31), J2CPP_METHOD_SIGNATURE(31), false>()
		)
	);
}

cpp_long java::util::Date::UTC(cpp_int const &a0, cpp_int const &a1, cpp_int const &a2, cpp_int const &a3, cpp_int const &a4, cpp_int const &a5)
{
	return cpp_long(
		environment::get().get_jenv()->CallStaticLongMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(32), J2CPP_METHOD_SIGNATURE(32), true>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype(), a4.get_jtype(), a5.get_jtype()
		)
	);
}

cpp_int java::util::Date::compareTo(local_ref< java::lang::Object > const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(33), J2CPP_METHOD_SIGNATURE(33), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(java::util::Date,"java/util/Date")
J2CPP_DEFINE_METHOD(java::util::Date,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::util::Date,1,"<init>","(III)V")
J2CPP_DEFINE_METHOD(java::util::Date,2,"<init>","(IIIII)V")
J2CPP_DEFINE_METHOD(java::util::Date,3,"<init>","(IIIIII)V")
J2CPP_DEFINE_METHOD(java::util::Date,4,"<init>","(J)V")
J2CPP_DEFINE_METHOD(java::util::Date,5,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::util::Date,6,"after","(Ljava/util/Date;)Z")
J2CPP_DEFINE_METHOD(java::util::Date,7,"before","(Ljava/util/Date;)Z")
J2CPP_DEFINE_METHOD(java::util::Date,8,"clone","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::Date,9,"compareTo","(Ljava/util/Date;)I")
J2CPP_DEFINE_METHOD(java::util::Date,10,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::Date,11,"getDate","()I")
J2CPP_DEFINE_METHOD(java::util::Date,12,"getDay","()I")
J2CPP_DEFINE_METHOD(java::util::Date,13,"getHours","()I")
J2CPP_DEFINE_METHOD(java::util::Date,14,"getMinutes","()I")
J2CPP_DEFINE_METHOD(java::util::Date,15,"getMonth","()I")
J2CPP_DEFINE_METHOD(java::util::Date,16,"getSeconds","()I")
J2CPP_DEFINE_METHOD(java::util::Date,17,"getTime","()J")
J2CPP_DEFINE_METHOD(java::util::Date,18,"getTimezoneOffset","()I")
J2CPP_DEFINE_METHOD(java::util::Date,19,"getYear","()I")
J2CPP_DEFINE_METHOD(java::util::Date,20,"hashCode","()I")
J2CPP_DEFINE_METHOD(java::util::Date,21,"parse","(Ljava/lang/String;)J")
J2CPP_DEFINE_METHOD(java::util::Date,22,"setDate","(I)V")
J2CPP_DEFINE_METHOD(java::util::Date,23,"setHours","(I)V")
J2CPP_DEFINE_METHOD(java::util::Date,24,"setMinutes","(I)V")
J2CPP_DEFINE_METHOD(java::util::Date,25,"setMonth","(I)V")
J2CPP_DEFINE_METHOD(java::util::Date,26,"setSeconds","(I)V")
J2CPP_DEFINE_METHOD(java::util::Date,27,"setTime","(J)V")
J2CPP_DEFINE_METHOD(java::util::Date,28,"setYear","(I)V")
J2CPP_DEFINE_METHOD(java::util::Date,29,"toGMTString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::Date,30,"toLocaleString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::Date,31,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::Date,32,"UTC","(IIIIII)J")
J2CPP_DEFINE_METHOD(java::util::Date,33,"compareTo","(Ljava/lang/Object;)I")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_DATE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION