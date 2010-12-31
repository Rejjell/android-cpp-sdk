/*================================================================================
  code generated by: java2cpp
  class: android.os.Looper
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_OS_LOOPER_HPP_DECL
#define J2CPP_ANDROID_OS_LOOPER_HPP_DECL


namespace j2cpp { namespace android { namespace os { class MessageQueue; } } }
namespace j2cpp { namespace android { namespace util { class Printer; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Thread; } } }


#include <android/os/MessageQueue.hpp>
#include <android/util/Printer.hpp>
#include <java/lang/String.hpp>
#include <java/lang/Thread.hpp>


namespace j2cpp {

namespace android { namespace os {

	class Looper;
	class Looper
		: public cpp_object<Looper>
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

		Looper(jobject jobj)
		: cpp_object<Looper>(jobj)
		{
		}

		static void prepare();
		static void prepareMainLooper();
		static local_ref< android::os::Looper > getMainLooper();
		static void loop();
		static local_ref< android::os::Looper > myLooper();
		void setMessageLogging(local_ref< android::util::Printer > const&);
		static local_ref< android::os::MessageQueue > myQueue();
		void quit();
		local_ref< java::lang::Thread > getThread();
		void dump(local_ref< android::util::Printer > const&, local_ref< java::lang::String > const&);
		local_ref< java::lang::String > toString();
	}; //class Looper

} //namespace os
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_OS_LOOPER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_OS_LOOPER_HPP_IMPL
#define J2CPP_ANDROID_OS_LOOPER_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::os::Looper > create< android::os::Looper>()
{
	return local_ref< android::os::Looper >(
		environment::get().get_jenv()->NewObject(
			get_class<android::os::Looper::J2CPP_CLASS_NAME>(),
			get_method_id<android::os::Looper::J2CPP_CLASS_NAME, android::os::Looper::J2CPP_METHOD_NAME(0), android::os::Looper::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

void android::os::Looper::prepare()
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), true>()
		)
	);
}

void android::os::Looper::prepareMainLooper()
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), true>()
		)
	);
}

local_ref< android::os::Looper > android::os::Looper::getMainLooper()
{
	return local_ref< android::os::Looper >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), true>()
		)
	);
}

void android::os::Looper::loop()
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), true>()
		)
	);
}

local_ref< android::os::Looper > android::os::Looper::myLooper()
{
	return local_ref< android::os::Looper >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), true>()
		)
	);
}

void android::os::Looper::setMessageLogging(local_ref< android::util::Printer > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::os::MessageQueue > android::os::Looper::myQueue()
{
	return local_ref< android::os::MessageQueue >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), true>()
		)
	);
}

void android::os::Looper::quit()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>()
		)
	);
}

local_ref< java::lang::Thread > android::os::Looper::getThread()
{
	return local_ref< java::lang::Thread >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}

void android::os::Looper::dump(local_ref< android::util::Printer > const &a0, local_ref< java::lang::String > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::lang::String > android::os::Looper::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(android::os::Looper,"android/os/Looper")
J2CPP_DEFINE_METHOD(android::os::Looper,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::os::Looper,1,"prepare","()V")
J2CPP_DEFINE_METHOD(android::os::Looper,2,"prepareMainLooper","()V")
J2CPP_DEFINE_METHOD(android::os::Looper,3,"getMainLooper","()Landroid/os/Looper;")
J2CPP_DEFINE_METHOD(android::os::Looper,4,"loop","()V")
J2CPP_DEFINE_METHOD(android::os::Looper,5,"myLooper","()Landroid/os/Looper;")
J2CPP_DEFINE_METHOD(android::os::Looper,6,"setMessageLogging","(Landroid/util/Printer;)V")
J2CPP_DEFINE_METHOD(android::os::Looper,7,"myQueue","()Landroid/os/MessageQueue;")
J2CPP_DEFINE_METHOD(android::os::Looper,8,"quit","()V")
J2CPP_DEFINE_METHOD(android::os::Looper,9,"getThread","()Ljava/lang/Thread;")
J2CPP_DEFINE_METHOD(android::os::Looper,10,"dump","(Landroid/util/Printer;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::os::Looper,11,"toString","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_OS_LOOPER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION