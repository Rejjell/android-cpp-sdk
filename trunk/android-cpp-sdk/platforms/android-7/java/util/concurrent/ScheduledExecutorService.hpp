/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.concurrent.ScheduledExecutorService
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CONCURRENT_SCHEDULEDEXECUTORSERVICE_HPP_DECL
#define J2CPP_JAVA_UTIL_CONCURRENT_SCHEDULEDEXECUTORSERVICE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Runnable; } } }
namespace j2cpp { namespace java { namespace util { namespace concurrent { class Callable; } } } }
namespace j2cpp { namespace java { namespace util { namespace concurrent { class ScheduledFuture; } } } }
namespace j2cpp { namespace java { namespace util { namespace concurrent { class ExecutorService; } } } }
namespace j2cpp { namespace java { namespace util { namespace concurrent { class TimeUnit; } } } }


#include <java/lang/Object.hpp>
#include <java/lang/Runnable.hpp>
#include <java/util/concurrent/Callable.hpp>
#include <java/util/concurrent/ExecutorService.hpp>
#include <java/util/concurrent/ScheduledFuture.hpp>
#include <java/util/concurrent/TimeUnit.hpp>


namespace j2cpp {

namespace java { namespace util { namespace concurrent {

	class ScheduledExecutorService;
	class ScheduledExecutorService
		: public object<ScheduledExecutorService>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		explicit ScheduledExecutorService(jobject jobj)
		: object<ScheduledExecutorService>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::util::concurrent::ExecutorService>() const;


		local_ref< java::util::concurrent::ScheduledFuture > schedule(local_ref< java::lang::Runnable >  const&, jlong, local_ref< java::util::concurrent::TimeUnit >  const&);
		local_ref< java::util::concurrent::ScheduledFuture > schedule(local_ref< java::util::concurrent::Callable >  const&, jlong, local_ref< java::util::concurrent::TimeUnit >  const&);
		local_ref< java::util::concurrent::ScheduledFuture > scheduleAtFixedRate(local_ref< java::lang::Runnable >  const&, jlong, jlong, local_ref< java::util::concurrent::TimeUnit >  const&);
		local_ref< java::util::concurrent::ScheduledFuture > scheduleWithFixedDelay(local_ref< java::lang::Runnable >  const&, jlong, jlong, local_ref< java::util::concurrent::TimeUnit >  const&);
	}; //class ScheduledExecutorService

} //namespace concurrent
} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CONCURRENT_SCHEDULEDEXECUTORSERVICE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CONCURRENT_SCHEDULEDEXECUTORSERVICE_HPP_IMPL
#define J2CPP_JAVA_UTIL_CONCURRENT_SCHEDULEDEXECUTORSERVICE_HPP_IMPL

namespace j2cpp {



java::util::concurrent::ScheduledExecutorService::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::util::concurrent::ScheduledExecutorService::operator local_ref<java::util::concurrent::ExecutorService>() const
{
	return local_ref<java::util::concurrent::ExecutorService>(get_jobject());
}

local_ref< java::util::concurrent::ScheduledFuture > java::util::concurrent::ScheduledExecutorService::schedule(local_ref< java::lang::Runnable > const &a0, jlong a1, local_ref< java::util::concurrent::TimeUnit > const &a2)
{
	return call_method<
		java::util::concurrent::ScheduledExecutorService::J2CPP_CLASS_NAME,
		java::util::concurrent::ScheduledExecutorService::J2CPP_METHOD_NAME(0),
		java::util::concurrent::ScheduledExecutorService::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< java::util::concurrent::ScheduledFuture > >
	(get_jobject(), a0, a1, a2);
}

local_ref< java::util::concurrent::ScheduledFuture > java::util::concurrent::ScheduledExecutorService::schedule(local_ref< java::util::concurrent::Callable > const &a0, jlong a1, local_ref< java::util::concurrent::TimeUnit > const &a2)
{
	return call_method<
		java::util::concurrent::ScheduledExecutorService::J2CPP_CLASS_NAME,
		java::util::concurrent::ScheduledExecutorService::J2CPP_METHOD_NAME(1),
		java::util::concurrent::ScheduledExecutorService::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::util::concurrent::ScheduledFuture > >
	(get_jobject(), a0, a1, a2);
}

local_ref< java::util::concurrent::ScheduledFuture > java::util::concurrent::ScheduledExecutorService::scheduleAtFixedRate(local_ref< java::lang::Runnable > const &a0, jlong a1, jlong a2, local_ref< java::util::concurrent::TimeUnit > const &a3)
{
	return call_method<
		java::util::concurrent::ScheduledExecutorService::J2CPP_CLASS_NAME,
		java::util::concurrent::ScheduledExecutorService::J2CPP_METHOD_NAME(2),
		java::util::concurrent::ScheduledExecutorService::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::util::concurrent::ScheduledFuture > >
	(get_jobject(), a0, a1, a2, a3);
}

local_ref< java::util::concurrent::ScheduledFuture > java::util::concurrent::ScheduledExecutorService::scheduleWithFixedDelay(local_ref< java::lang::Runnable > const &a0, jlong a1, jlong a2, local_ref< java::util::concurrent::TimeUnit > const &a3)
{
	return call_method<
		java::util::concurrent::ScheduledExecutorService::J2CPP_CLASS_NAME,
		java::util::concurrent::ScheduledExecutorService::J2CPP_METHOD_NAME(3),
		java::util::concurrent::ScheduledExecutorService::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::util::concurrent::ScheduledFuture > >
	(get_jobject(), a0, a1, a2, a3);
}


J2CPP_DEFINE_CLASS(java::util::concurrent::ScheduledExecutorService,"java/util/concurrent/ScheduledExecutorService")
J2CPP_DEFINE_METHOD(java::util::concurrent::ScheduledExecutorService,0,"schedule","(Ljava/lang/Runnable;JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/ScheduledFuture;")
J2CPP_DEFINE_METHOD(java::util::concurrent::ScheduledExecutorService,1,"schedule","(Ljava/util/concurrent/Callable;JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/ScheduledFuture;")
J2CPP_DEFINE_METHOD(java::util::concurrent::ScheduledExecutorService,2,"scheduleAtFixedRate","(Ljava/lang/Runnable;JJLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/ScheduledFuture;")
J2CPP_DEFINE_METHOD(java::util::concurrent::ScheduledExecutorService,3,"scheduleWithFixedDelay","(Ljava/lang/Runnable;JJLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/ScheduledFuture;")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CONCURRENT_SCHEDULEDEXECUTORSERVICE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
