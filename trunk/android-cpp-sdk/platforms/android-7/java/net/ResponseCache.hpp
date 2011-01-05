/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.net.ResponseCache
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NET_RESPONSECACHE_HPP_DECL
#define J2CPP_JAVA_NET_RESPONSECACHE_HPP_DECL


namespace j2cpp { namespace java { namespace net { class URI; } } }
namespace j2cpp { namespace java { namespace net { class CacheRequest; } } }
namespace j2cpp { namespace java { namespace net { class CacheResponse; } } }
namespace j2cpp { namespace java { namespace net { class URLConnection; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace util { class Map; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/net/CacheRequest.hpp>
#include <java/net/CacheResponse.hpp>
#include <java/net/URI.hpp>
#include <java/net/URLConnection.hpp>
#include <java/util/Map.hpp>


namespace j2cpp {

namespace java { namespace net {

	class ResponseCache;
	class ResponseCache
		: public object<ResponseCache>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)

		explicit ResponseCache(jobject jobj)
		: object<ResponseCache>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		ResponseCache();
		static local_ref< java::net::ResponseCache > getDefault();
		static void setDefault(local_ref< java::net::ResponseCache >  const&);
		local_ref< java::net::CacheResponse > get(local_ref< java::net::URI >  const&, local_ref< java::lang::String >  const&, local_ref< java::util::Map >  const&);
		local_ref< java::net::CacheRequest > put(local_ref< java::net::URI >  const&, local_ref< java::net::URLConnection >  const&);
	}; //class ResponseCache

} //namespace net
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_NET_RESPONSECACHE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NET_RESPONSECACHE_HPP_IMPL
#define J2CPP_JAVA_NET_RESPONSECACHE_HPP_IMPL

namespace j2cpp {



java::net::ResponseCache::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


java::net::ResponseCache::ResponseCache()
: object<java::net::ResponseCache>(
	call_new_object<
		java::net::ResponseCache::J2CPP_CLASS_NAME,
		java::net::ResponseCache::J2CPP_METHOD_NAME(0),
		java::net::ResponseCache::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}


local_ref< java::net::ResponseCache > java::net::ResponseCache::getDefault()
{
	return call_static_method<
		java::net::ResponseCache::J2CPP_CLASS_NAME,
		java::net::ResponseCache::J2CPP_METHOD_NAME(1),
		java::net::ResponseCache::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::net::ResponseCache >
	>();
}

void java::net::ResponseCache::setDefault(local_ref< java::net::ResponseCache > const &a0)
{
	return call_static_method<
		java::net::ResponseCache::J2CPP_CLASS_NAME,
		java::net::ResponseCache::J2CPP_METHOD_NAME(2),
		java::net::ResponseCache::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(a0);
}

local_ref< java::net::CacheResponse > java::net::ResponseCache::get(local_ref< java::net::URI > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::util::Map > const &a2)
{
	return call_method<
		java::net::ResponseCache::J2CPP_CLASS_NAME,
		java::net::ResponseCache::J2CPP_METHOD_NAME(3),
		java::net::ResponseCache::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::net::CacheResponse >
	>(get_jobject(), a0, a1, a2);
}

local_ref< java::net::CacheRequest > java::net::ResponseCache::put(local_ref< java::net::URI > const &a0, local_ref< java::net::URLConnection > const &a1)
{
	return call_method<
		java::net::ResponseCache::J2CPP_CLASS_NAME,
		java::net::ResponseCache::J2CPP_METHOD_NAME(4),
		java::net::ResponseCache::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::net::CacheRequest >
	>(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(java::net::ResponseCache,"java/net/ResponseCache")
J2CPP_DEFINE_METHOD(java::net::ResponseCache,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::net::ResponseCache,1,"getDefault","()Ljava/net/ResponseCache;")
J2CPP_DEFINE_METHOD(java::net::ResponseCache,2,"setDefault","(Ljava/net/ResponseCache;)V")
J2CPP_DEFINE_METHOD(java::net::ResponseCache,3,"get","(Ljava/net/URI;Ljava/lang/String;Ljava/util/Map;)Ljava/net/CacheResponse;")
J2CPP_DEFINE_METHOD(java::net::ResponseCache,4,"put","(Ljava/net/URI;Ljava/net/URLConnection;)Ljava/net/CacheRequest;")

} //namespace j2cpp

#endif //J2CPP_JAVA_NET_RESPONSECACHE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
