/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.content.res.AssetManager
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_RES_ASSETMANAGER_HPP_DECL
#define J2CPP_ANDROID_CONTENT_RES_ASSETMANAGER_HPP_DECL


namespace j2cpp { namespace java { namespace io { class InputStream; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace android { namespace content { namespace res { class AssetFileDescriptor; } } } }
namespace j2cpp { namespace android { namespace content { namespace res { class XmlResourceParser; } } } }


#include <android/content/res/AssetFileDescriptor.hpp>
#include <android/content/res/XmlResourceParser.hpp>
#include <java/io/InputStream.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace content { namespace res {

	class AssetManager;
	namespace AssetManager_ {

		class AssetInputStream;
		class AssetInputStream
			: public object<AssetInputStream>
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
			J2CPP_DECLARE_FIELD(0)

			explicit AssetInputStream(jobject jobj)
			: object<AssetInputStream>(jobj)
			{
			}

			operator local_ref<java::io::InputStream>() const;


			jint getAssetInt();
			jint read();
			jboolean markSupported();
			jint available();
			void close();
			void mark(jint);
			void reset();
			jint read(local_ref< array<jbyte,1> >  const&);
			jint read(local_ref< array<jbyte,1> >  const&, jint, jint);
			jlong skip(jlong);

		}; //class AssetInputStream

	} //namespace AssetManager_

	class AssetManager
		: public object<AssetManager>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)

		typedef AssetManager_::AssetInputStream AssetInputStream;

		explicit AssetManager(jobject jobj)
		: object<AssetManager>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		void close();
		local_ref< java::io::InputStream > open(local_ref< java::lang::String >  const&);
		local_ref< java::io::InputStream > open(local_ref< java::lang::String >  const&, jint);
		local_ref< android::content::res::AssetFileDescriptor > openFd(local_ref< java::lang::String >  const&);
		local_ref< array< local_ref< java::lang::String >, 1> > list(local_ref< java::lang::String >  const&);
		local_ref< android::content::res::AssetFileDescriptor > openNonAssetFd(local_ref< java::lang::String >  const&);
		local_ref< android::content::res::AssetFileDescriptor > openNonAssetFd(jint, local_ref< java::lang::String >  const&);
		local_ref< android::content::res::XmlResourceParser > openXmlResourceParser(local_ref< java::lang::String >  const&);
		local_ref< android::content::res::XmlResourceParser > openXmlResourceParser(jint, local_ref< java::lang::String >  const&);
		local_ref< array< local_ref< java::lang::String >, 1> > getLocales();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > ACCESS_UNKNOWN;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > ACCESS_RANDOM;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jint > ACCESS_STREAMING;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), jint > ACCESS_BUFFER;
	}; //class AssetManager

} //namespace res
} //namespace content
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_RES_ASSETMANAGER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_RES_ASSETMANAGER_HPP_IMPL
#define J2CPP_ANDROID_CONTENT_RES_ASSETMANAGER_HPP_IMPL

namespace j2cpp {




android::content::res::AssetManager_::AssetInputStream::operator local_ref<java::io::InputStream>() const
{
	return local_ref<java::io::InputStream>(get_jobject());
}


jint android::content::res::AssetManager_::AssetInputStream::getAssetInt()
{
	return call_method<
		android::content::res::AssetManager_::AssetInputStream::J2CPP_CLASS_NAME,
		android::content::res::AssetManager_::AssetInputStream::J2CPP_METHOD_NAME(1),
		android::content::res::AssetManager_::AssetInputStream::J2CPP_METHOD_SIGNATURE(1), 
		jint >
	(get_jobject());
}

jint android::content::res::AssetManager_::AssetInputStream::read()
{
	return call_method<
		android::content::res::AssetManager_::AssetInputStream::J2CPP_CLASS_NAME,
		android::content::res::AssetManager_::AssetInputStream::J2CPP_METHOD_NAME(2),
		android::content::res::AssetManager_::AssetInputStream::J2CPP_METHOD_SIGNATURE(2), 
		jint >
	(get_jobject());
}

jboolean android::content::res::AssetManager_::AssetInputStream::markSupported()
{
	return call_method<
		android::content::res::AssetManager_::AssetInputStream::J2CPP_CLASS_NAME,
		android::content::res::AssetManager_::AssetInputStream::J2CPP_METHOD_NAME(3),
		android::content::res::AssetManager_::AssetInputStream::J2CPP_METHOD_SIGNATURE(3), 
		jboolean >
	(get_jobject());
}

jint android::content::res::AssetManager_::AssetInputStream::available()
{
	return call_method<
		android::content::res::AssetManager_::AssetInputStream::J2CPP_CLASS_NAME,
		android::content::res::AssetManager_::AssetInputStream::J2CPP_METHOD_NAME(4),
		android::content::res::AssetManager_::AssetInputStream::J2CPP_METHOD_SIGNATURE(4), 
		jint >
	(get_jobject());
}

void android::content::res::AssetManager_::AssetInputStream::close()
{
	return call_method<
		android::content::res::AssetManager_::AssetInputStream::J2CPP_CLASS_NAME,
		android::content::res::AssetManager_::AssetInputStream::J2CPP_METHOD_NAME(5),
		android::content::res::AssetManager_::AssetInputStream::J2CPP_METHOD_SIGNATURE(5), 
		void >
	(get_jobject());
}

void android::content::res::AssetManager_::AssetInputStream::mark(jint a0)
{
	return call_method<
		android::content::res::AssetManager_::AssetInputStream::J2CPP_CLASS_NAME,
		android::content::res::AssetManager_::AssetInputStream::J2CPP_METHOD_NAME(6),
		android::content::res::AssetManager_::AssetInputStream::J2CPP_METHOD_SIGNATURE(6), 
		void >
	(get_jobject(), a0);
}

void android::content::res::AssetManager_::AssetInputStream::reset()
{
	return call_method<
		android::content::res::AssetManager_::AssetInputStream::J2CPP_CLASS_NAME,
		android::content::res::AssetManager_::AssetInputStream::J2CPP_METHOD_NAME(7),
		android::content::res::AssetManager_::AssetInputStream::J2CPP_METHOD_SIGNATURE(7), 
		void >
	(get_jobject());
}

jint android::content::res::AssetManager_::AssetInputStream::read(local_ref< array<jbyte,1> > const &a0)
{
	return call_method<
		android::content::res::AssetManager_::AssetInputStream::J2CPP_CLASS_NAME,
		android::content::res::AssetManager_::AssetInputStream::J2CPP_METHOD_NAME(8),
		android::content::res::AssetManager_::AssetInputStream::J2CPP_METHOD_SIGNATURE(8), 
		jint >
	(get_jobject(), a0);
}

jint android::content::res::AssetManager_::AssetInputStream::read(local_ref< array<jbyte,1> > const &a0, jint a1, jint a2)
{
	return call_method<
		android::content::res::AssetManager_::AssetInputStream::J2CPP_CLASS_NAME,
		android::content::res::AssetManager_::AssetInputStream::J2CPP_METHOD_NAME(9),
		android::content::res::AssetManager_::AssetInputStream::J2CPP_METHOD_SIGNATURE(9), 
		jint >
	(get_jobject(), a0, a1, a2);
}

jlong android::content::res::AssetManager_::AssetInputStream::skip(jlong a0)
{
	return call_method<
		android::content::res::AssetManager_::AssetInputStream::J2CPP_CLASS_NAME,
		android::content::res::AssetManager_::AssetInputStream::J2CPP_METHOD_NAME(10),
		android::content::res::AssetManager_::AssetInputStream::J2CPP_METHOD_SIGNATURE(10), 
		jlong >
	(get_jobject(), a0);
}




J2CPP_DEFINE_CLASS(android::content::res::AssetManager_::AssetInputStream,"android/content/res/AssetManager$AssetInputStream")
J2CPP_DEFINE_METHOD(android::content::res::AssetManager_::AssetInputStream,0,"<init>","(Landroid/content/res/AssetManager;)V")
J2CPP_DEFINE_METHOD(android::content::res::AssetManager_::AssetInputStream,1,"getAssetInt","()I")
J2CPP_DEFINE_METHOD(android::content::res::AssetManager_::AssetInputStream,2,"read","()I")
J2CPP_DEFINE_METHOD(android::content::res::AssetManager_::AssetInputStream,3,"markSupported","()Z")
J2CPP_DEFINE_METHOD(android::content::res::AssetManager_::AssetInputStream,4,"available","()I")
J2CPP_DEFINE_METHOD(android::content::res::AssetManager_::AssetInputStream,5,"close","()V")
J2CPP_DEFINE_METHOD(android::content::res::AssetManager_::AssetInputStream,6,"mark","(I)V")
J2CPP_DEFINE_METHOD(android::content::res::AssetManager_::AssetInputStream,7,"reset","()V")
J2CPP_DEFINE_METHOD(android::content::res::AssetManager_::AssetInputStream,8,"read","([B)I")
J2CPP_DEFINE_METHOD(android::content::res::AssetManager_::AssetInputStream,9,"read","([BII)I")
J2CPP_DEFINE_METHOD(android::content::res::AssetManager_::AssetInputStream,10,"skip","(J)J")
J2CPP_DEFINE_METHOD(android::content::res::AssetManager_::AssetInputStream,11,"finalize","()V")
J2CPP_DEFINE_FIELD(android::content::res::AssetManager_::AssetInputStream,0,"this$0","Landroid/content/res/AssetManager;")



android::content::res::AssetManager::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


void android::content::res::AssetManager::close()
{
	return call_method<
		android::content::res::AssetManager::J2CPP_CLASS_NAME,
		android::content::res::AssetManager::J2CPP_METHOD_NAME(1),
		android::content::res::AssetManager::J2CPP_METHOD_SIGNATURE(1), 
		void >
	(get_jobject());
}

local_ref< java::io::InputStream > android::content::res::AssetManager::open(local_ref< java::lang::String > const &a0)
{
	return call_method<
		android::content::res::AssetManager::J2CPP_CLASS_NAME,
		android::content::res::AssetManager::J2CPP_METHOD_NAME(2),
		android::content::res::AssetManager::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::io::InputStream > >
	(get_jobject(), a0);
}

local_ref< java::io::InputStream > android::content::res::AssetManager::open(local_ref< java::lang::String > const &a0, jint a1)
{
	return call_method<
		android::content::res::AssetManager::J2CPP_CLASS_NAME,
		android::content::res::AssetManager::J2CPP_METHOD_NAME(3),
		android::content::res::AssetManager::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::io::InputStream > >
	(get_jobject(), a0, a1);
}

local_ref< android::content::res::AssetFileDescriptor > android::content::res::AssetManager::openFd(local_ref< java::lang::String > const &a0)
{
	return call_method<
		android::content::res::AssetManager::J2CPP_CLASS_NAME,
		android::content::res::AssetManager::J2CPP_METHOD_NAME(4),
		android::content::res::AssetManager::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< android::content::res::AssetFileDescriptor > >
	(get_jobject(), a0);
}

local_ref< array< local_ref< java::lang::String >, 1> > android::content::res::AssetManager::list(local_ref< java::lang::String > const &a0)
{
	return call_method<
		android::content::res::AssetManager::J2CPP_CLASS_NAME,
		android::content::res::AssetManager::J2CPP_METHOD_NAME(5),
		android::content::res::AssetManager::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< array< local_ref< java::lang::String >, 1> > >
	(get_jobject(), a0);
}

local_ref< android::content::res::AssetFileDescriptor > android::content::res::AssetManager::openNonAssetFd(local_ref< java::lang::String > const &a0)
{
	return call_method<
		android::content::res::AssetManager::J2CPP_CLASS_NAME,
		android::content::res::AssetManager::J2CPP_METHOD_NAME(6),
		android::content::res::AssetManager::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< android::content::res::AssetFileDescriptor > >
	(get_jobject(), a0);
}

local_ref< android::content::res::AssetFileDescriptor > android::content::res::AssetManager::openNonAssetFd(jint a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		android::content::res::AssetManager::J2CPP_CLASS_NAME,
		android::content::res::AssetManager::J2CPP_METHOD_NAME(7),
		android::content::res::AssetManager::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< android::content::res::AssetFileDescriptor > >
	(get_jobject(), a0, a1);
}

local_ref< android::content::res::XmlResourceParser > android::content::res::AssetManager::openXmlResourceParser(local_ref< java::lang::String > const &a0)
{
	return call_method<
		android::content::res::AssetManager::J2CPP_CLASS_NAME,
		android::content::res::AssetManager::J2CPP_METHOD_NAME(8),
		android::content::res::AssetManager::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< android::content::res::XmlResourceParser > >
	(get_jobject(), a0);
}

local_ref< android::content::res::XmlResourceParser > android::content::res::AssetManager::openXmlResourceParser(jint a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		android::content::res::AssetManager::J2CPP_CLASS_NAME,
		android::content::res::AssetManager::J2CPP_METHOD_NAME(9),
		android::content::res::AssetManager::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< android::content::res::XmlResourceParser > >
	(get_jobject(), a0, a1);
}


local_ref< array< local_ref< java::lang::String >, 1> > android::content::res::AssetManager::getLocales()
{
	return call_method<
		android::content::res::AssetManager::J2CPP_CLASS_NAME,
		android::content::res::AssetManager::J2CPP_METHOD_NAME(11),
		android::content::res::AssetManager::J2CPP_METHOD_SIGNATURE(11), 
		local_ref< array< local_ref< java::lang::String >, 1> > >
	(get_jobject());
}


static_field<
	android::content::res::AssetManager::J2CPP_CLASS_NAME,
	android::content::res::AssetManager::J2CPP_FIELD_NAME(0),
	android::content::res::AssetManager::J2CPP_FIELD_SIGNATURE(0),
	jint
> android::content::res::AssetManager::ACCESS_UNKNOWN;

static_field<
	android::content::res::AssetManager::J2CPP_CLASS_NAME,
	android::content::res::AssetManager::J2CPP_FIELD_NAME(1),
	android::content::res::AssetManager::J2CPP_FIELD_SIGNATURE(1),
	jint
> android::content::res::AssetManager::ACCESS_RANDOM;

static_field<
	android::content::res::AssetManager::J2CPP_CLASS_NAME,
	android::content::res::AssetManager::J2CPP_FIELD_NAME(2),
	android::content::res::AssetManager::J2CPP_FIELD_SIGNATURE(2),
	jint
> android::content::res::AssetManager::ACCESS_STREAMING;

static_field<
	android::content::res::AssetManager::J2CPP_CLASS_NAME,
	android::content::res::AssetManager::J2CPP_FIELD_NAME(3),
	android::content::res::AssetManager::J2CPP_FIELD_SIGNATURE(3),
	jint
> android::content::res::AssetManager::ACCESS_BUFFER;


J2CPP_DEFINE_CLASS(android::content::res::AssetManager,"android/content/res/AssetManager")
J2CPP_DEFINE_METHOD(android::content::res::AssetManager,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::content::res::AssetManager,1,"close","()V")
J2CPP_DEFINE_METHOD(android::content::res::AssetManager,2,"open","(Ljava/lang/String;)Ljava/io/InputStream;")
J2CPP_DEFINE_METHOD(android::content::res::AssetManager,3,"open","(Ljava/lang/String;I)Ljava/io/InputStream;")
J2CPP_DEFINE_METHOD(android::content::res::AssetManager,4,"openFd","(Ljava/lang/String;)Landroid/content/res/AssetFileDescriptor;")
J2CPP_DEFINE_METHOD(android::content::res::AssetManager,5,"list","(Ljava/lang/String;)[java.lang.String")
J2CPP_DEFINE_METHOD(android::content::res::AssetManager,6,"openNonAssetFd","(Ljava/lang/String;)Landroid/content/res/AssetFileDescriptor;")
J2CPP_DEFINE_METHOD(android::content::res::AssetManager,7,"openNonAssetFd","(ILjava/lang/String;)Landroid/content/res/AssetFileDescriptor;")
J2CPP_DEFINE_METHOD(android::content::res::AssetManager,8,"openXmlResourceParser","(Ljava/lang/String;)Landroid/content/res/XmlResourceParser;")
J2CPP_DEFINE_METHOD(android::content::res::AssetManager,9,"openXmlResourceParser","(ILjava/lang/String;)Landroid/content/res/XmlResourceParser;")
J2CPP_DEFINE_METHOD(android::content::res::AssetManager,10,"finalize","()V")
J2CPP_DEFINE_METHOD(android::content::res::AssetManager,11,"getLocales","()[java.lang.String")
J2CPP_DEFINE_FIELD(android::content::res::AssetManager,0,"ACCESS_UNKNOWN","I")
J2CPP_DEFINE_FIELD(android::content::res::AssetManager,1,"ACCESS_RANDOM","I")
J2CPP_DEFINE_FIELD(android::content::res::AssetManager,2,"ACCESS_STREAMING","I")
J2CPP_DEFINE_FIELD(android::content::res::AssetManager,3,"ACCESS_BUFFER","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_RES_ASSETMANAGER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
