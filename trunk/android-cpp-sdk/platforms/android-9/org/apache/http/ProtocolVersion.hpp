/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.ProtocolVersion
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_PROTOCOLVERSION_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_PROTOCOLVERSION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Cloneable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace io { class Serializable; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Cloneable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http {

	class ProtocolVersion;
	class ProtocolVersion
		: public object<ProtocolVersion>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)

		explicit ProtocolVersion(jobject jobj)
		: object<ProtocolVersion>(jobj)
		{
		}

		operator local_ref<java::lang::Cloneable>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::io::Serializable>() const;


		ProtocolVersion(local_ref< java::lang::String > const&, jint, jint);
		local_ref< java::lang::String > getProtocol();
		jint getMajor();
		jint getMinor();
		local_ref< org::apache::http::ProtocolVersion > forVersion(jint, jint);
		jint hashCode();
		jboolean equals(local_ref< java::lang::Object >  const&);
		jboolean isComparable(local_ref< org::apache::http::ProtocolVersion >  const&);
		jint compareToVersion(local_ref< org::apache::http::ProtocolVersion >  const&);
		jboolean greaterEquals(local_ref< org::apache::http::ProtocolVersion >  const&);
		jboolean lessEquals(local_ref< org::apache::http::ProtocolVersion >  const&);
		local_ref< java::lang::String > toString();
		local_ref< java::lang::Object > clone();

	}; //class ProtocolVersion

} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_PROTOCOLVERSION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_PROTOCOLVERSION_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_PROTOCOLVERSION_HPP_IMPL

namespace j2cpp {



org::apache::http::ProtocolVersion::operator local_ref<java::lang::Cloneable>() const
{
	return local_ref<java::lang::Cloneable>(get_jobject());
}

org::apache::http::ProtocolVersion::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

org::apache::http::ProtocolVersion::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}


org::apache::http::ProtocolVersion::ProtocolVersion(local_ref< java::lang::String > const &a0, jint a1, jint a2)
: object<org::apache::http::ProtocolVersion>(
	call_new_object<
		org::apache::http::ProtocolVersion::J2CPP_CLASS_NAME,
		org::apache::http::ProtocolVersion::J2CPP_METHOD_NAME(0),
		org::apache::http::ProtocolVersion::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1, a2)
)
{
}


local_ref< java::lang::String > org::apache::http::ProtocolVersion::getProtocol()
{
	return call_method<
		org::apache::http::ProtocolVersion::J2CPP_CLASS_NAME,
		org::apache::http::ProtocolVersion::J2CPP_METHOD_NAME(1),
		org::apache::http::ProtocolVersion::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::String >
	>(get_jobject());
}

jint org::apache::http::ProtocolVersion::getMajor()
{
	return call_method<
		org::apache::http::ProtocolVersion::J2CPP_CLASS_NAME,
		org::apache::http::ProtocolVersion::J2CPP_METHOD_NAME(2),
		org::apache::http::ProtocolVersion::J2CPP_METHOD_SIGNATURE(2), 
		jint
	>(get_jobject());
}

jint org::apache::http::ProtocolVersion::getMinor()
{
	return call_method<
		org::apache::http::ProtocolVersion::J2CPP_CLASS_NAME,
		org::apache::http::ProtocolVersion::J2CPP_METHOD_NAME(3),
		org::apache::http::ProtocolVersion::J2CPP_METHOD_SIGNATURE(3), 
		jint
	>(get_jobject());
}

local_ref< org::apache::http::ProtocolVersion > org::apache::http::ProtocolVersion::forVersion(jint a0, jint a1)
{
	return call_method<
		org::apache::http::ProtocolVersion::J2CPP_CLASS_NAME,
		org::apache::http::ProtocolVersion::J2CPP_METHOD_NAME(4),
		org::apache::http::ProtocolVersion::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< org::apache::http::ProtocolVersion >
	>(get_jobject(), a0, a1);
}

jint org::apache::http::ProtocolVersion::hashCode()
{
	return call_method<
		org::apache::http::ProtocolVersion::J2CPP_CLASS_NAME,
		org::apache::http::ProtocolVersion::J2CPP_METHOD_NAME(5),
		org::apache::http::ProtocolVersion::J2CPP_METHOD_SIGNATURE(5), 
		jint
	>(get_jobject());
}

jboolean org::apache::http::ProtocolVersion::equals(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		org::apache::http::ProtocolVersion::J2CPP_CLASS_NAME,
		org::apache::http::ProtocolVersion::J2CPP_METHOD_NAME(6),
		org::apache::http::ProtocolVersion::J2CPP_METHOD_SIGNATURE(6), 
		jboolean
	>(get_jobject(), a0);
}

jboolean org::apache::http::ProtocolVersion::isComparable(local_ref< org::apache::http::ProtocolVersion > const &a0)
{
	return call_method<
		org::apache::http::ProtocolVersion::J2CPP_CLASS_NAME,
		org::apache::http::ProtocolVersion::J2CPP_METHOD_NAME(7),
		org::apache::http::ProtocolVersion::J2CPP_METHOD_SIGNATURE(7), 
		jboolean
	>(get_jobject(), a0);
}

jint org::apache::http::ProtocolVersion::compareToVersion(local_ref< org::apache::http::ProtocolVersion > const &a0)
{
	return call_method<
		org::apache::http::ProtocolVersion::J2CPP_CLASS_NAME,
		org::apache::http::ProtocolVersion::J2CPP_METHOD_NAME(8),
		org::apache::http::ProtocolVersion::J2CPP_METHOD_SIGNATURE(8), 
		jint
	>(get_jobject(), a0);
}

jboolean org::apache::http::ProtocolVersion::greaterEquals(local_ref< org::apache::http::ProtocolVersion > const &a0)
{
	return call_method<
		org::apache::http::ProtocolVersion::J2CPP_CLASS_NAME,
		org::apache::http::ProtocolVersion::J2CPP_METHOD_NAME(9),
		org::apache::http::ProtocolVersion::J2CPP_METHOD_SIGNATURE(9), 
		jboolean
	>(get_jobject(), a0);
}

jboolean org::apache::http::ProtocolVersion::lessEquals(local_ref< org::apache::http::ProtocolVersion > const &a0)
{
	return call_method<
		org::apache::http::ProtocolVersion::J2CPP_CLASS_NAME,
		org::apache::http::ProtocolVersion::J2CPP_METHOD_NAME(10),
		org::apache::http::ProtocolVersion::J2CPP_METHOD_SIGNATURE(10), 
		jboolean
	>(get_jobject(), a0);
}

local_ref< java::lang::String > org::apache::http::ProtocolVersion::toString()
{
	return call_method<
		org::apache::http::ProtocolVersion::J2CPP_CLASS_NAME,
		org::apache::http::ProtocolVersion::J2CPP_METHOD_NAME(11),
		org::apache::http::ProtocolVersion::J2CPP_METHOD_SIGNATURE(11), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::lang::Object > org::apache::http::ProtocolVersion::clone()
{
	return call_method<
		org::apache::http::ProtocolVersion::J2CPP_CLASS_NAME,
		org::apache::http::ProtocolVersion::J2CPP_METHOD_NAME(12),
		org::apache::http::ProtocolVersion::J2CPP_METHOD_SIGNATURE(12), 
		local_ref< java::lang::Object >
	>(get_jobject());
}



J2CPP_DEFINE_CLASS(org::apache::http::ProtocolVersion,"org/apache/http/ProtocolVersion")
J2CPP_DEFINE_METHOD(org::apache::http::ProtocolVersion,0,"<init>","(Ljava/lang/String;II)V")
J2CPP_DEFINE_METHOD(org::apache::http::ProtocolVersion,1,"getProtocol","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::ProtocolVersion,2,"getMajor","()I")
J2CPP_DEFINE_METHOD(org::apache::http::ProtocolVersion,3,"getMinor","()I")
J2CPP_DEFINE_METHOD(org::apache::http::ProtocolVersion,4,"forVersion","(II)Lorg/apache/http/ProtocolVersion;")
J2CPP_DEFINE_METHOD(org::apache::http::ProtocolVersion,5,"hashCode","()I")
J2CPP_DEFINE_METHOD(org::apache::http::ProtocolVersion,6,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(org::apache::http::ProtocolVersion,7,"isComparable","(Lorg/apache/http/ProtocolVersion;)Z")
J2CPP_DEFINE_METHOD(org::apache::http::ProtocolVersion,8,"compareToVersion","(Lorg/apache/http/ProtocolVersion;)I")
J2CPP_DEFINE_METHOD(org::apache::http::ProtocolVersion,9,"greaterEquals","(Lorg/apache/http/ProtocolVersion;)Z")
J2CPP_DEFINE_METHOD(org::apache::http::ProtocolVersion,10,"lessEquals","(Lorg/apache/http/ProtocolVersion;)Z")
J2CPP_DEFINE_METHOD(org::apache::http::ProtocolVersion,11,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::ProtocolVersion,12,"clone","()Ljava/lang/Object;")
J2CPP_DEFINE_FIELD(org::apache::http::ProtocolVersion,0,"protocol","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(org::apache::http::ProtocolVersion,1,"major","I")
J2CPP_DEFINE_FIELD(org::apache::http::ProtocolVersion,2,"minor","I")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_PROTOCOLVERSION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
