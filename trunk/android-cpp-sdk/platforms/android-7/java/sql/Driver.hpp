/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.sql.Driver
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SQL_DRIVER_HPP_DECL
#define J2CPP_JAVA_SQL_DRIVER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace sql { class Connection; } } }
namespace j2cpp { namespace java { namespace sql { class DriverPropertyInfo; } } }
namespace j2cpp { namespace java { namespace util { class Properties; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/sql/Connection.hpp>
#include <java/sql/DriverPropertyInfo.hpp>
#include <java/util/Properties.hpp>


namespace j2cpp {

namespace java { namespace sql {

	class Driver;
	class Driver
		: public object<Driver>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)

		explicit Driver(jobject jobj)
		: object<Driver>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		jboolean acceptsURL(local_ref< java::lang::String >  const&);
		local_ref< java::sql::Connection > connect(local_ref< java::lang::String >  const&, local_ref< java::util::Properties >  const&);
		jint getMajorVersion();
		jint getMinorVersion();
		local_ref< array< local_ref< java::sql::DriverPropertyInfo >, 1> > getPropertyInfo(local_ref< java::lang::String >  const&, local_ref< java::util::Properties >  const&);
		jboolean jdbcCompliant();
	}; //class Driver

} //namespace sql
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SQL_DRIVER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SQL_DRIVER_HPP_IMPL
#define J2CPP_JAVA_SQL_DRIVER_HPP_IMPL

namespace j2cpp {



java::sql::Driver::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

jboolean java::sql::Driver::acceptsURL(local_ref< java::lang::String > const &a0)
{
	return call_method<
		java::sql::Driver::J2CPP_CLASS_NAME,
		java::sql::Driver::J2CPP_METHOD_NAME(0),
		java::sql::Driver::J2CPP_METHOD_SIGNATURE(0), 
		jboolean >
	(get_jobject(), a0);
}

local_ref< java::sql::Connection > java::sql::Driver::connect(local_ref< java::lang::String > const &a0, local_ref< java::util::Properties > const &a1)
{
	return call_method<
		java::sql::Driver::J2CPP_CLASS_NAME,
		java::sql::Driver::J2CPP_METHOD_NAME(1),
		java::sql::Driver::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::sql::Connection > >
	(get_jobject(), a0, a1);
}

jint java::sql::Driver::getMajorVersion()
{
	return call_method<
		java::sql::Driver::J2CPP_CLASS_NAME,
		java::sql::Driver::J2CPP_METHOD_NAME(2),
		java::sql::Driver::J2CPP_METHOD_SIGNATURE(2), 
		jint >
	(get_jobject());
}

jint java::sql::Driver::getMinorVersion()
{
	return call_method<
		java::sql::Driver::J2CPP_CLASS_NAME,
		java::sql::Driver::J2CPP_METHOD_NAME(3),
		java::sql::Driver::J2CPP_METHOD_SIGNATURE(3), 
		jint >
	(get_jobject());
}

local_ref< array< local_ref< java::sql::DriverPropertyInfo >, 1> > java::sql::Driver::getPropertyInfo(local_ref< java::lang::String > const &a0, local_ref< java::util::Properties > const &a1)
{
	return call_method<
		java::sql::Driver::J2CPP_CLASS_NAME,
		java::sql::Driver::J2CPP_METHOD_NAME(4),
		java::sql::Driver::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< array< local_ref< java::sql::DriverPropertyInfo >, 1> > >
	(get_jobject(), a0, a1);
}

jboolean java::sql::Driver::jdbcCompliant()
{
	return call_method<
		java::sql::Driver::J2CPP_CLASS_NAME,
		java::sql::Driver::J2CPP_METHOD_NAME(5),
		java::sql::Driver::J2CPP_METHOD_SIGNATURE(5), 
		jboolean >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(java::sql::Driver,"java/sql/Driver")
J2CPP_DEFINE_METHOD(java::sql::Driver,0,"acceptsURL","(Ljava/lang/String;)Z")
J2CPP_DEFINE_METHOD(java::sql::Driver,1,"connect","(Ljava/lang/String;Ljava/util/Properties;)Ljava/sql/Connection;")
J2CPP_DEFINE_METHOD(java::sql::Driver,2,"getMajorVersion","()I")
J2CPP_DEFINE_METHOD(java::sql::Driver,3,"getMinorVersion","()I")
J2CPP_DEFINE_METHOD(java::sql::Driver,4,"getPropertyInfo","(Ljava/lang/String;Ljava/util/Properties;)[java.sql.DriverPropertyInfo")
J2CPP_DEFINE_METHOD(java::sql::Driver,5,"jdbcCompliant","()Z")

} //namespace j2cpp

#endif //J2CPP_JAVA_SQL_DRIVER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION