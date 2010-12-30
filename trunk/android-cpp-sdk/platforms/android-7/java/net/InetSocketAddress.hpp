/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.net.InetSocketAddress
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NET_INETSOCKETADDRESS_HPP_DECL
#define J2CPP_JAVA_NET_INETSOCKETADDRESS_HPP_DECL


namespace j2cpp { namespace java { namespace net { class InetAddress; } } }
namespace j2cpp { namespace java { namespace net { class SocketAddress; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/net/InetAddress.hpp>
#include <java/net/SocketAddress.hpp>


namespace j2cpp {

namespace java { namespace net {

	class InetSocketAddress;
	class InetSocketAddress
		: public object<InetSocketAddress>
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

		explicit InetSocketAddress(jobject jobj)
		: object<InetSocketAddress>(jobj)
		{
		}

		operator local_ref<java::net::SocketAddress>() const;


		InetSocketAddress(jint);
		InetSocketAddress(local_ref< java::net::InetAddress > const&, jint);
		InetSocketAddress(local_ref< java::lang::String > const&, jint);
		static local_ref< java::net::InetSocketAddress > createUnresolved(local_ref< java::lang::String >  const&, jint);
		jint getPort();
		local_ref< java::net::InetAddress > getAddress();
		local_ref< java::lang::String > getHostName();
		jboolean isUnresolved();
		local_ref< java::lang::String > toString();
		jboolean equals(local_ref< java::lang::Object >  const&);
		jint hashCode();
	}; //class InetSocketAddress

} //namespace net
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_NET_INETSOCKETADDRESS_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NET_INETSOCKETADDRESS_HPP_IMPL
#define J2CPP_JAVA_NET_INETSOCKETADDRESS_HPP_IMPL

namespace j2cpp {



java::net::InetSocketAddress::operator local_ref<java::net::SocketAddress>() const
{
	return local_ref<java::net::SocketAddress>(get_jobject());
}


java::net::InetSocketAddress::InetSocketAddress(jint a0)
: object<java::net::InetSocketAddress>(
	call_new_object<
		java::net::InetSocketAddress::J2CPP_CLASS_NAME,
		java::net::InetSocketAddress::J2CPP_METHOD_NAME(0),
		java::net::InetSocketAddress::J2CPP_METHOD_SIGNATURE(0)>
	(a0)
)
{
}



java::net::InetSocketAddress::InetSocketAddress(local_ref< java::net::InetAddress > const &a0, jint a1)
: object<java::net::InetSocketAddress>(
	call_new_object<
		java::net::InetSocketAddress::J2CPP_CLASS_NAME,
		java::net::InetSocketAddress::J2CPP_METHOD_NAME(1),
		java::net::InetSocketAddress::J2CPP_METHOD_SIGNATURE(1)>
	(a0, a1)
)
{
}



java::net::InetSocketAddress::InetSocketAddress(local_ref< java::lang::String > const &a0, jint a1)
: object<java::net::InetSocketAddress>(
	call_new_object<
		java::net::InetSocketAddress::J2CPP_CLASS_NAME,
		java::net::InetSocketAddress::J2CPP_METHOD_NAME(2),
		java::net::InetSocketAddress::J2CPP_METHOD_SIGNATURE(2)>
	(a0, a1)
)
{
}


local_ref< java::net::InetSocketAddress > java::net::InetSocketAddress::createUnresolved(local_ref< java::lang::String > const &a0, jint a1)
{
	return call_static_method<
		java::net::InetSocketAddress::J2CPP_CLASS_NAME,
		java::net::InetSocketAddress::J2CPP_METHOD_NAME(3),
		java::net::InetSocketAddress::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::net::InetSocketAddress > >
	(a0, a1);
}

jint java::net::InetSocketAddress::getPort()
{
	return call_method<
		java::net::InetSocketAddress::J2CPP_CLASS_NAME,
		java::net::InetSocketAddress::J2CPP_METHOD_NAME(4),
		java::net::InetSocketAddress::J2CPP_METHOD_SIGNATURE(4), 
		jint >
	(get_jobject());
}

local_ref< java::net::InetAddress > java::net::InetSocketAddress::getAddress()
{
	return call_method<
		java::net::InetSocketAddress::J2CPP_CLASS_NAME,
		java::net::InetSocketAddress::J2CPP_METHOD_NAME(5),
		java::net::InetSocketAddress::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::net::InetAddress > >
	(get_jobject());
}

local_ref< java::lang::String > java::net::InetSocketAddress::getHostName()
{
	return call_method<
		java::net::InetSocketAddress::J2CPP_CLASS_NAME,
		java::net::InetSocketAddress::J2CPP_METHOD_NAME(6),
		java::net::InetSocketAddress::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::lang::String > >
	(get_jobject());
}

jboolean java::net::InetSocketAddress::isUnresolved()
{
	return call_method<
		java::net::InetSocketAddress::J2CPP_CLASS_NAME,
		java::net::InetSocketAddress::J2CPP_METHOD_NAME(7),
		java::net::InetSocketAddress::J2CPP_METHOD_SIGNATURE(7), 
		jboolean >
	(get_jobject());
}

local_ref< java::lang::String > java::net::InetSocketAddress::toString()
{
	return call_method<
		java::net::InetSocketAddress::J2CPP_CLASS_NAME,
		java::net::InetSocketAddress::J2CPP_METHOD_NAME(8),
		java::net::InetSocketAddress::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< java::lang::String > >
	(get_jobject());
}

jboolean java::net::InetSocketAddress::equals(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::net::InetSocketAddress::J2CPP_CLASS_NAME,
		java::net::InetSocketAddress::J2CPP_METHOD_NAME(9),
		java::net::InetSocketAddress::J2CPP_METHOD_SIGNATURE(9), 
		jboolean >
	(get_jobject(), a0);
}

jint java::net::InetSocketAddress::hashCode()
{
	return call_method<
		java::net::InetSocketAddress::J2CPP_CLASS_NAME,
		java::net::InetSocketAddress::J2CPP_METHOD_NAME(10),
		java::net::InetSocketAddress::J2CPP_METHOD_SIGNATURE(10), 
		jint >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(java::net::InetSocketAddress,"java/net/InetSocketAddress")
J2CPP_DEFINE_METHOD(java::net::InetSocketAddress,0,"<init>","(I)V")
J2CPP_DEFINE_METHOD(java::net::InetSocketAddress,1,"<init>","(Ljava/net/InetAddress;I)V")
J2CPP_DEFINE_METHOD(java::net::InetSocketAddress,2,"<init>","(Ljava/lang/String;I)V")
J2CPP_DEFINE_METHOD(java::net::InetSocketAddress,3,"createUnresolved","(Ljava/lang/String;I)Ljava/net/InetSocketAddress;")
J2CPP_DEFINE_METHOD(java::net::InetSocketAddress,4,"getPort","()I")
J2CPP_DEFINE_METHOD(java::net::InetSocketAddress,5,"getAddress","()Ljava/net/InetAddress;")
J2CPP_DEFINE_METHOD(java::net::InetSocketAddress,6,"getHostName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::net::InetSocketAddress,7,"isUnresolved","()Z")
J2CPP_DEFINE_METHOD(java::net::InetSocketAddress,8,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::net::InetSocketAddress,9,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::net::InetSocketAddress,10,"hashCode","()I")

} //namespace j2cpp

#endif //J2CPP_JAVA_NET_INETSOCKETADDRESS_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
