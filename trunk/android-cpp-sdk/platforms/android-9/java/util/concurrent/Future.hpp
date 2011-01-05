/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.concurrent.Future
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CONCURRENT_FUTURE_HPP_DECL
#define J2CPP_JAVA_UTIL_CONCURRENT_FUTURE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { namespace concurrent { class TimeUnit; } } } }


#include <java/lang/Object.hpp>
#include <java/util/concurrent/TimeUnit.hpp>


namespace j2cpp {

namespace java { namespace util { namespace concurrent {

	class Future;
	class Future
		: public object<Future>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)

		explicit Future(jobject jobj)
		: object<Future>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		jboolean cancel(jboolean);
		jboolean isCancelled();
		jboolean isDone();
		local_ref< java::lang::Object > get();
		local_ref< java::lang::Object > get(jlong, local_ref< java::util::concurrent::TimeUnit >  const&);
	}; //class Future

} //namespace concurrent
} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CONCURRENT_FUTURE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CONCURRENT_FUTURE_HPP_IMPL
#define J2CPP_JAVA_UTIL_CONCURRENT_FUTURE_HPP_IMPL

namespace j2cpp {



java::util::concurrent::Future::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

jboolean java::util::concurrent::Future::cancel(jboolean a0)
{
	return call_method<
		java::util::concurrent::Future::J2CPP_CLASS_NAME,
		java::util::concurrent::Future::J2CPP_METHOD_NAME(0),
		java::util::concurrent::Future::J2CPP_METHOD_SIGNATURE(0), 
		jboolean
	>(get_jobject(), a0);
}

jboolean java::util::concurrent::Future::isCancelled()
{
	return call_method<
		java::util::concurrent::Future::J2CPP_CLASS_NAME,
		java::util::concurrent::Future::J2CPP_METHOD_NAME(1),
		java::util::concurrent::Future::J2CPP_METHOD_SIGNATURE(1), 
		jboolean
	>(get_jobject());
}

jboolean java::util::concurrent::Future::isDone()
{
	return call_method<
		java::util::concurrent::Future::J2CPP_CLASS_NAME,
		java::util::concurrent::Future::J2CPP_METHOD_NAME(2),
		java::util::concurrent::Future::J2CPP_METHOD_SIGNATURE(2), 
		jboolean
	>(get_jobject());
}

local_ref< java::lang::Object > java::util::concurrent::Future::get()
{
	return call_method<
		java::util::concurrent::Future::J2CPP_CLASS_NAME,
		java::util::concurrent::Future::J2CPP_METHOD_NAME(3),
		java::util::concurrent::Future::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::lang::Object >
	>(get_jobject());
}

local_ref< java::lang::Object > java::util::concurrent::Future::get(jlong a0, local_ref< java::util::concurrent::TimeUnit > const &a1)
{
	return call_method<
		java::util::concurrent::Future::J2CPP_CLASS_NAME,
		java::util::concurrent::Future::J2CPP_METHOD_NAME(4),
		java::util::concurrent::Future::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::lang::Object >
	>(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(java::util::concurrent::Future,"java/util/concurrent/Future")
J2CPP_DEFINE_METHOD(java::util::concurrent::Future,0,"cancel","(Z)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::Future,1,"isCancelled","()Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::Future,2,"isDone","()Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::Future,3,"get","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::concurrent::Future,4,"get","(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CONCURRENT_FUTURE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
