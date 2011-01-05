/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.gesture.GestureLibraries
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GESTURE_GESTURELIBRARIES_HPP_DECL
#define J2CPP_ANDROID_GESTURE_GESTURELIBRARIES_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace io { class File; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace gesture { class GestureLibrary; } } }


#include <android/content/Context.hpp>
#include <android/gesture/GestureLibrary.hpp>
#include <java/io/File.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace gesture {

	class GestureLibraries;
	class GestureLibraries
		: public object<GestureLibraries>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)

		explicit GestureLibraries(jobject jobj)
		: object<GestureLibraries>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		static local_ref< android::gesture::GestureLibrary > fromFile(local_ref< java::lang::String >  const&);
		static local_ref< android::gesture::GestureLibrary > fromFile(local_ref< java::io::File >  const&);
		static local_ref< android::gesture::GestureLibrary > fromPrivateFile(local_ref< android::content::Context >  const&, local_ref< java::lang::String >  const&);
		static local_ref< android::gesture::GestureLibrary > fromRawResource(local_ref< android::content::Context >  const&, jint);
	}; //class GestureLibraries

} //namespace gesture
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_GESTURE_GESTURELIBRARIES_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GESTURE_GESTURELIBRARIES_HPP_IMPL
#define J2CPP_ANDROID_GESTURE_GESTURELIBRARIES_HPP_IMPL

namespace j2cpp {



android::gesture::GestureLibraries::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


local_ref< android::gesture::GestureLibrary > android::gesture::GestureLibraries::fromFile(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		android::gesture::GestureLibraries::J2CPP_CLASS_NAME,
		android::gesture::GestureLibraries::J2CPP_METHOD_NAME(1),
		android::gesture::GestureLibraries::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< android::gesture::GestureLibrary >
	>(a0);
}

local_ref< android::gesture::GestureLibrary > android::gesture::GestureLibraries::fromFile(local_ref< java::io::File > const &a0)
{
	return call_static_method<
		android::gesture::GestureLibraries::J2CPP_CLASS_NAME,
		android::gesture::GestureLibraries::J2CPP_METHOD_NAME(2),
		android::gesture::GestureLibraries::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< android::gesture::GestureLibrary >
	>(a0);
}

local_ref< android::gesture::GestureLibrary > android::gesture::GestureLibraries::fromPrivateFile(local_ref< android::content::Context > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_static_method<
		android::gesture::GestureLibraries::J2CPP_CLASS_NAME,
		android::gesture::GestureLibraries::J2CPP_METHOD_NAME(3),
		android::gesture::GestureLibraries::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< android::gesture::GestureLibrary >
	>(a0, a1);
}

local_ref< android::gesture::GestureLibrary > android::gesture::GestureLibraries::fromRawResource(local_ref< android::content::Context > const &a0, jint a1)
{
	return call_static_method<
		android::gesture::GestureLibraries::J2CPP_CLASS_NAME,
		android::gesture::GestureLibraries::J2CPP_METHOD_NAME(4),
		android::gesture::GestureLibraries::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< android::gesture::GestureLibrary >
	>(a0, a1);
}


J2CPP_DEFINE_CLASS(android::gesture::GestureLibraries,"android/gesture/GestureLibraries")
J2CPP_DEFINE_METHOD(android::gesture::GestureLibraries,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::gesture::GestureLibraries,1,"fromFile","(Ljava/lang/String;)Landroid/gesture/GestureLibrary;")
J2CPP_DEFINE_METHOD(android::gesture::GestureLibraries,2,"fromFile","(Ljava/io/File;)Landroid/gesture/GestureLibrary;")
J2CPP_DEFINE_METHOD(android::gesture::GestureLibraries,3,"fromPrivateFile","(Landroid/content/Context;Ljava/lang/String;)Landroid/gesture/GestureLibrary;")
J2CPP_DEFINE_METHOD(android::gesture::GestureLibraries,4,"fromRawResource","(Landroid/content/Context;I)Landroid/gesture/GestureLibrary;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_GESTURE_GESTURELIBRARIES_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
