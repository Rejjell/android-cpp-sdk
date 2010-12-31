/*================================================================================
  code generated by: java2cpp
  class: java.sql.Date
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SQL_DATE_HPP_DECL
#define J2CPP_JAVA_SQL_DATE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace sql {

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

		Date(jobject jobj)
		: cpp_object<Date>(jobj)
		{
		}

		cpp_int getHours();
		cpp_int getMinutes();
		cpp_int getSeconds();
		void setHours(cpp_int const&);
		void setMinutes(cpp_int const&);
		void setSeconds(cpp_int const&);
		void setTime(cpp_long const&);
		local_ref< java::lang::String > toString();
		static local_ref< java::sql::Date > valueOf(local_ref< java::lang::String > const&);
	}; //class Date

} //namespace sql
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_SQL_DATE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SQL_DATE_HPP_IMPL
#define J2CPP_JAVA_SQL_DATE_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::sql::Date > create< java::sql::Date>(cpp_int const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return local_ref< java::sql::Date >(
		environment::get().get_jenv()->NewObject(
			get_class<java::sql::Date::J2CPP_CLASS_NAME>(),
			get_method_id<java::sql::Date::J2CPP_CLASS_NAME, java::sql::Date::J2CPP_METHOD_NAME(0), java::sql::Date::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

template <>
local_ref< java::sql::Date > create< java::sql::Date>(cpp_long const &a0)
{
	return local_ref< java::sql::Date >(
		environment::get().get_jenv()->NewObject(
			get_class<java::sql::Date::J2CPP_CLASS_NAME>(),
			get_method_id<java::sql::Date::J2CPP_CLASS_NAME, java::sql::Date::J2CPP_METHOD_NAME(1), java::sql::Date::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int java::sql::Date::getHours()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

cpp_int java::sql::Date::getMinutes()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

cpp_int java::sql::Date::getSeconds()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

void java::sql::Date::setHours(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}

void java::sql::Date::setMinutes(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}

void java::sql::Date::setSeconds(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype()
		)
	);
}

void java::sql::Date::setTime(cpp_long const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > java::sql::Date::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}

local_ref< java::sql::Date > java::sql::Date::valueOf(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::sql::Date >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), true>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(java::sql::Date,"java/sql/Date")
J2CPP_DEFINE_METHOD(java::sql::Date,0,"<init>","(III)V")
J2CPP_DEFINE_METHOD(java::sql::Date,1,"<init>","(J)V")
J2CPP_DEFINE_METHOD(java::sql::Date,2,"getHours","()I")
J2CPP_DEFINE_METHOD(java::sql::Date,3,"getMinutes","()I")
J2CPP_DEFINE_METHOD(java::sql::Date,4,"getSeconds","()I")
J2CPP_DEFINE_METHOD(java::sql::Date,5,"setHours","(I)V")
J2CPP_DEFINE_METHOD(java::sql::Date,6,"setMinutes","(I)V")
J2CPP_DEFINE_METHOD(java::sql::Date,7,"setSeconds","(I)V")
J2CPP_DEFINE_METHOD(java::sql::Date,8,"setTime","(J)V")
J2CPP_DEFINE_METHOD(java::sql::Date,9,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::sql::Date,10,"valueOf","(Ljava/lang/String;)Ljava/sql/Date;")

} //namespace j2cpp

#endif //J2CPP_JAVA_SQL_DATE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION