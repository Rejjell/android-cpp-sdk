/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.security.Provider
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_PROVIDER_HPP_DECL
#define J2CPP_JAVA_SECURITY_PROVIDER_HPP_DECL


namespace j2cpp { namespace java { namespace io { class InputStream; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace security { namespace Provider_ { class Service; } } } }
namespace j2cpp { namespace java { namespace util { class Set; } } }
namespace j2cpp { namespace java { namespace util { class Map; } } }
namespace j2cpp { namespace java { namespace util { class Properties; } } }
namespace j2cpp { namespace java { namespace util { class Collection; } } }
namespace j2cpp { namespace java { namespace util { class List; } } }


#include <java/io/InputStream.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/security/Provider.hpp>
#include <java/util/Collection.hpp>
#include <java/util/List.hpp>
#include <java/util/Map.hpp>
#include <java/util/Properties.hpp>
#include <java/util/Set.hpp>


namespace j2cpp {

namespace java { namespace security {

	class Provider;
	namespace Provider_ {

		class Service;
		class Service
			: public object<Service>
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

			explicit Service(jobject jobj)
			: object<Service>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			Service(local_ref< java::security::Provider > const&, local_ref< java::lang::String > const&, local_ref< java::lang::String > const&, local_ref< java::lang::String > const&, local_ref< java::util::List > const&, local_ref< java::util::Map > const&);
			local_ref< java::lang::String > getType();
			local_ref< java::lang::String > getAlgorithm();
			local_ref< java::security::Provider > getProvider();
			local_ref< java::lang::String > getClassName();
			local_ref< java::lang::String > getAttribute(local_ref< java::lang::String >  const&);
			local_ref< java::lang::Object > newInstance(local_ref< java::lang::Object >  const&);
			jboolean supportsParameter(local_ref< java::lang::Object >  const&);
			local_ref< java::lang::String > toString();
		}; //class Service

	} //namespace Provider_

	class Provider
		: public object<Provider>
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

		typedef Provider_::Service Service;

		explicit Provider(jobject jobj)
		: object<Provider>(jobj)
		{
		}

		operator local_ref<java::util::Properties>() const;


		local_ref< java::lang::String > getName();
		jdouble getVersion();
		local_ref< java::lang::String > getInfo();
		local_ref< java::lang::String > toString();
		void clear();
		void load(local_ref< java::io::InputStream >  const&);
		void putAll(local_ref< java::util::Map >  const&);
		local_ref< java::util::Set > entrySet();
		local_ref< java::util::Set > keySet();
		local_ref< java::util::Collection > values();
		local_ref< java::lang::Object > put(local_ref< java::lang::Object >  const&, local_ref< java::lang::Object >  const&);
		local_ref< java::lang::Object > remove(local_ref< java::lang::Object >  const&);
		local_ref< java::security::Provider_::Service > getService(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		local_ref< java::util::Set > getServices();
	}; //class Provider

} //namespace security
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_PROVIDER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_PROVIDER_HPP_IMPL
#define J2CPP_JAVA_SECURITY_PROVIDER_HPP_IMPL

namespace j2cpp {




java::security::Provider_::Service::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


java::security::Provider_::Service::Service(local_ref< java::security::Provider > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::String > const &a2, local_ref< java::lang::String > const &a3, local_ref< java::util::List > const &a4, local_ref< java::util::Map > const &a5)
: object<java::security::Provider_::Service>(
	call_new_object<
		java::security::Provider_::Service::J2CPP_CLASS_NAME,
		java::security::Provider_::Service::J2CPP_METHOD_NAME(0),
		java::security::Provider_::Service::J2CPP_METHOD_SIGNATURE(0)>
	(a0, a1, a2, a3, a4, a5)
)
{
}


local_ref< java::lang::String > java::security::Provider_::Service::getType()
{
	return call_method<
		java::security::Provider_::Service::J2CPP_CLASS_NAME,
		java::security::Provider_::Service::J2CPP_METHOD_NAME(1),
		java::security::Provider_::Service::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::String > >
	(get_jobject());
}

local_ref< java::lang::String > java::security::Provider_::Service::getAlgorithm()
{
	return call_method<
		java::security::Provider_::Service::J2CPP_CLASS_NAME,
		java::security::Provider_::Service::J2CPP_METHOD_NAME(2),
		java::security::Provider_::Service::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::lang::String > >
	(get_jobject());
}

local_ref< java::security::Provider > java::security::Provider_::Service::getProvider()
{
	return call_method<
		java::security::Provider_::Service::J2CPP_CLASS_NAME,
		java::security::Provider_::Service::J2CPP_METHOD_NAME(3),
		java::security::Provider_::Service::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::security::Provider > >
	(get_jobject());
}

local_ref< java::lang::String > java::security::Provider_::Service::getClassName()
{
	return call_method<
		java::security::Provider_::Service::J2CPP_CLASS_NAME,
		java::security::Provider_::Service::J2CPP_METHOD_NAME(4),
		java::security::Provider_::Service::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::lang::String > >
	(get_jobject());
}

local_ref< java::lang::String > java::security::Provider_::Service::getAttribute(local_ref< java::lang::String > const &a0)
{
	return call_method<
		java::security::Provider_::Service::J2CPP_CLASS_NAME,
		java::security::Provider_::Service::J2CPP_METHOD_NAME(5),
		java::security::Provider_::Service::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::lang::String > >
	(get_jobject(), a0);
}

local_ref< java::lang::Object > java::security::Provider_::Service::newInstance(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::security::Provider_::Service::J2CPP_CLASS_NAME,
		java::security::Provider_::Service::J2CPP_METHOD_NAME(6),
		java::security::Provider_::Service::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::lang::Object > >
	(get_jobject(), a0);
}

jboolean java::security::Provider_::Service::supportsParameter(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::security::Provider_::Service::J2CPP_CLASS_NAME,
		java::security::Provider_::Service::J2CPP_METHOD_NAME(7),
		java::security::Provider_::Service::J2CPP_METHOD_SIGNATURE(7), 
		jboolean >
	(get_jobject(), a0);
}

local_ref< java::lang::String > java::security::Provider_::Service::toString()
{
	return call_method<
		java::security::Provider_::Service::J2CPP_CLASS_NAME,
		java::security::Provider_::Service::J2CPP_METHOD_NAME(8),
		java::security::Provider_::Service::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< java::lang::String > >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(java::security::Provider_::Service,"java/security/Provider$Service")
J2CPP_DEFINE_METHOD(java::security::Provider_::Service,0,"<init>","(Ljava/security/Provider;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/List;Ljava/util/Map;)V")
J2CPP_DEFINE_METHOD(java::security::Provider_::Service,1,"getType","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::security::Provider_::Service,2,"getAlgorithm","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::security::Provider_::Service,3,"getProvider","()Ljava/security/Provider;")
J2CPP_DEFINE_METHOD(java::security::Provider_::Service,4,"getClassName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::security::Provider_::Service,5,"getAttribute","(Ljava/lang/String;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::security::Provider_::Service,6,"newInstance","(Ljava/lang/Object;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::security::Provider_::Service,7,"supportsParameter","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::security::Provider_::Service,8,"toString","()Ljava/lang/String;")



java::security::Provider::operator local_ref<java::util::Properties>() const
{
	return local_ref<java::util::Properties>(get_jobject());
}


local_ref< java::lang::String > java::security::Provider::getName()
{
	return call_method<
		java::security::Provider::J2CPP_CLASS_NAME,
		java::security::Provider::J2CPP_METHOD_NAME(1),
		java::security::Provider::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::String > >
	(get_jobject());
}

jdouble java::security::Provider::getVersion()
{
	return call_method<
		java::security::Provider::J2CPP_CLASS_NAME,
		java::security::Provider::J2CPP_METHOD_NAME(2),
		java::security::Provider::J2CPP_METHOD_SIGNATURE(2), 
		jdouble >
	(get_jobject());
}

local_ref< java::lang::String > java::security::Provider::getInfo()
{
	return call_method<
		java::security::Provider::J2CPP_CLASS_NAME,
		java::security::Provider::J2CPP_METHOD_NAME(3),
		java::security::Provider::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::lang::String > >
	(get_jobject());
}

local_ref< java::lang::String > java::security::Provider::toString()
{
	return call_method<
		java::security::Provider::J2CPP_CLASS_NAME,
		java::security::Provider::J2CPP_METHOD_NAME(4),
		java::security::Provider::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::lang::String > >
	(get_jobject());
}

void java::security::Provider::clear()
{
	return call_method<
		java::security::Provider::J2CPP_CLASS_NAME,
		java::security::Provider::J2CPP_METHOD_NAME(5),
		java::security::Provider::J2CPP_METHOD_SIGNATURE(5), 
		void >
	(get_jobject());
}

void java::security::Provider::load(local_ref< java::io::InputStream > const &a0)
{
	return call_method<
		java::security::Provider::J2CPP_CLASS_NAME,
		java::security::Provider::J2CPP_METHOD_NAME(6),
		java::security::Provider::J2CPP_METHOD_SIGNATURE(6), 
		void >
	(get_jobject(), a0);
}

void java::security::Provider::putAll(local_ref< java::util::Map > const &a0)
{
	return call_method<
		java::security::Provider::J2CPP_CLASS_NAME,
		java::security::Provider::J2CPP_METHOD_NAME(7),
		java::security::Provider::J2CPP_METHOD_SIGNATURE(7), 
		void >
	(get_jobject(), a0);
}

local_ref< java::util::Set > java::security::Provider::entrySet()
{
	return call_method<
		java::security::Provider::J2CPP_CLASS_NAME,
		java::security::Provider::J2CPP_METHOD_NAME(8),
		java::security::Provider::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< java::util::Set > >
	(get_jobject());
}

local_ref< java::util::Set > java::security::Provider::keySet()
{
	return call_method<
		java::security::Provider::J2CPP_CLASS_NAME,
		java::security::Provider::J2CPP_METHOD_NAME(9),
		java::security::Provider::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< java::util::Set > >
	(get_jobject());
}

local_ref< java::util::Collection > java::security::Provider::values()
{
	return call_method<
		java::security::Provider::J2CPP_CLASS_NAME,
		java::security::Provider::J2CPP_METHOD_NAME(10),
		java::security::Provider::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< java::util::Collection > >
	(get_jobject());
}

local_ref< java::lang::Object > java::security::Provider::put(local_ref< java::lang::Object > const &a0, local_ref< java::lang::Object > const &a1)
{
	return call_method<
		java::security::Provider::J2CPP_CLASS_NAME,
		java::security::Provider::J2CPP_METHOD_NAME(11),
		java::security::Provider::J2CPP_METHOD_SIGNATURE(11), 
		local_ref< java::lang::Object > >
	(get_jobject(), a0, a1);
}

local_ref< java::lang::Object > java::security::Provider::remove(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::security::Provider::J2CPP_CLASS_NAME,
		java::security::Provider::J2CPP_METHOD_NAME(12),
		java::security::Provider::J2CPP_METHOD_SIGNATURE(12), 
		local_ref< java::lang::Object > >
	(get_jobject(), a0);
}

local_ref< java::security::Provider_::Service > java::security::Provider::getService(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		java::security::Provider::J2CPP_CLASS_NAME,
		java::security::Provider::J2CPP_METHOD_NAME(13),
		java::security::Provider::J2CPP_METHOD_SIGNATURE(13), 
		local_ref< java::security::Provider_::Service > >
	(get_jobject(), a0, a1);
}

local_ref< java::util::Set > java::security::Provider::getServices()
{
	return call_method<
		java::security::Provider::J2CPP_CLASS_NAME,
		java::security::Provider::J2CPP_METHOD_NAME(14),
		java::security::Provider::J2CPP_METHOD_SIGNATURE(14), 
		local_ref< java::util::Set > >
	(get_jobject());
}




J2CPP_DEFINE_CLASS(java::security::Provider,"java/security/Provider")
J2CPP_DEFINE_METHOD(java::security::Provider,0,"<init>","(Ljava/lang/String;DLjava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::security::Provider,1,"getName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::security::Provider,2,"getVersion","()D")
J2CPP_DEFINE_METHOD(java::security::Provider,3,"getInfo","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::security::Provider,4,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::security::Provider,5,"clear","()V")
J2CPP_DEFINE_METHOD(java::security::Provider,6,"load","(Ljava/io/InputStream;)V")
J2CPP_DEFINE_METHOD(java::security::Provider,7,"putAll","(Ljava/util/Map;)V")
J2CPP_DEFINE_METHOD(java::security::Provider,8,"entrySet","()Ljava/util/Set;")
J2CPP_DEFINE_METHOD(java::security::Provider,9,"keySet","()Ljava/util/Set;")
J2CPP_DEFINE_METHOD(java::security::Provider,10,"values","()Ljava/util/Collection;")
J2CPP_DEFINE_METHOD(java::security::Provider,11,"put","(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::security::Provider,12,"remove","(Ljava/lang/Object;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::security::Provider,13,"getService","(Ljava/lang/String;Ljava/lang/String;)Ljava/security/Provider$Service;")
J2CPP_DEFINE_METHOD(java::security::Provider,14,"getServices","()Ljava/util/Set;")
J2CPP_DEFINE_METHOD(java::security::Provider,15,"putService","(Ljava/security/Provider$Service;)V")
J2CPP_DEFINE_METHOD(java::security::Provider,16,"removeService","(Ljava/security/Provider$Service;)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_PROVIDER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
