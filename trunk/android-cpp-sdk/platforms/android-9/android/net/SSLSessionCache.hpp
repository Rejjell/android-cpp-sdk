/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.net.SSLSessionCache
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_NET_SSLSESSIONCACHE_HPP_DECL
#define J2CPP_ANDROID_NET_SSLSESSIONCACHE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace io { class File; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }


#include <android/content/Context.hpp>
#include <java/io/File.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace net {

	class SSLSessionCache;
	class SSLSessionCache
		: public object<SSLSessionCache>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit SSLSessionCache(jobject jobj)
		: object<SSLSessionCache>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		SSLSessionCache(local_ref< java::io::File > const&);
		SSLSessionCache(local_ref< android::content::Context > const&);
	}; //class SSLSessionCache

} //namespace net
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_NET_SSLSESSIONCACHE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_NET_SSLSESSIONCACHE_HPP_IMPL
#define J2CPP_ANDROID_NET_SSLSESSIONCACHE_HPP_IMPL

namespace j2cpp {



android::net::SSLSessionCache::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::net::SSLSessionCache::SSLSessionCache(local_ref< java::io::File > const &a0)
: object<android::net::SSLSessionCache>(
	call_new_object<
		android::net::SSLSessionCache::J2CPP_CLASS_NAME,
		android::net::SSLSessionCache::J2CPP_METHOD_NAME(0),
		android::net::SSLSessionCache::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}



android::net::SSLSessionCache::SSLSessionCache(local_ref< android::content::Context > const &a0)
: object<android::net::SSLSessionCache>(
	call_new_object<
		android::net::SSLSessionCache::J2CPP_CLASS_NAME,
		android::net::SSLSessionCache::J2CPP_METHOD_NAME(1),
		android::net::SSLSessionCache::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}



J2CPP_DEFINE_CLASS(android::net::SSLSessionCache,"android/net/SSLSessionCache")
J2CPP_DEFINE_METHOD(android::net::SSLSessionCache,0,"<init>","(Ljava/io/File;)V")
J2CPP_DEFINE_METHOD(android::net::SSLSessionCache,1,"<init>","(Landroid/content/Context;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_NET_SSLSESSIONCACHE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
