/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.concurrent.atomic.AtomicInteger
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICINTEGER_HPP_DECL
#define J2CPP_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICINTEGER_HPP_DECL


namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace java { namespace lang { class Number; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Number.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace util { namespace concurrent { namespace atomic {

	class AtomicInteger;
	class AtomicInteger
		: public object<AtomicInteger>
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
		J2CPP_DECLARE_METHOD(17)

		explicit AtomicInteger(jobject jobj)
		: object<AtomicInteger>(jobj)
		{
		}

		operator local_ref<java::lang::Number>() const;
		operator local_ref<java::io::Serializable>() const;


		AtomicInteger(jint);
		AtomicInteger();
		jint get();
		void set(jint);
		jint getAndSet(jint);
		jboolean compareAndSet(jint, jint);
		jboolean weakCompareAndSet(jint, jint);
		jint getAndIncrement();
		jint getAndDecrement();
		jint getAndAdd(jint);
		jint incrementAndGet();
		jint decrementAndGet();
		jint addAndGet(jint);
		local_ref< java::lang::String > toString();
		jint intValue();
		jlong longValue();
		jfloat floatValue();
		jdouble doubleValue();
	}; //class AtomicInteger

} //namespace atomic
} //namespace concurrent
} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICINTEGER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICINTEGER_HPP_IMPL
#define J2CPP_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICINTEGER_HPP_IMPL

namespace j2cpp {



java::util::concurrent::atomic::AtomicInteger::operator local_ref<java::lang::Number>() const
{
	return local_ref<java::lang::Number>(get_jobject());
}

java::util::concurrent::atomic::AtomicInteger::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}


java::util::concurrent::atomic::AtomicInteger::AtomicInteger(jint a0)
: object<java::util::concurrent::atomic::AtomicInteger>(
	call_new_object<
		java::util::concurrent::atomic::AtomicInteger::J2CPP_CLASS_NAME,
		java::util::concurrent::atomic::AtomicInteger::J2CPP_METHOD_NAME(0),
		java::util::concurrent::atomic::AtomicInteger::J2CPP_METHOD_SIGNATURE(0)>
	(a0)
)
{
}



java::util::concurrent::atomic::AtomicInteger::AtomicInteger()
: object<java::util::concurrent::atomic::AtomicInteger>(
	call_new_object<
		java::util::concurrent::atomic::AtomicInteger::J2CPP_CLASS_NAME,
		java::util::concurrent::atomic::AtomicInteger::J2CPP_METHOD_NAME(1),
		java::util::concurrent::atomic::AtomicInteger::J2CPP_METHOD_SIGNATURE(1)>
	()
)
{
}


jint java::util::concurrent::atomic::AtomicInteger::get()
{
	return call_method<
		java::util::concurrent::atomic::AtomicInteger::J2CPP_CLASS_NAME,
		java::util::concurrent::atomic::AtomicInteger::J2CPP_METHOD_NAME(2),
		java::util::concurrent::atomic::AtomicInteger::J2CPP_METHOD_SIGNATURE(2), 
		jint >
	(get_jobject());
}

void java::util::concurrent::atomic::AtomicInteger::set(jint a0)
{
	return call_method<
		java::util::concurrent::atomic::AtomicInteger::J2CPP_CLASS_NAME,
		java::util::concurrent::atomic::AtomicInteger::J2CPP_METHOD_NAME(3),
		java::util::concurrent::atomic::AtomicInteger::J2CPP_METHOD_SIGNATURE(3), 
		void >
	(get_jobject(), a0);
}

jint java::util::concurrent::atomic::AtomicInteger::getAndSet(jint a0)
{
	return call_method<
		java::util::concurrent::atomic::AtomicInteger::J2CPP_CLASS_NAME,
		java::util::concurrent::atomic::AtomicInteger::J2CPP_METHOD_NAME(4),
		java::util::concurrent::atomic::AtomicInteger::J2CPP_METHOD_SIGNATURE(4), 
		jint >
	(get_jobject(), a0);
}

jboolean java::util::concurrent::atomic::AtomicInteger::compareAndSet(jint a0, jint a1)
{
	return call_method<
		java::util::concurrent::atomic::AtomicInteger::J2CPP_CLASS_NAME,
		java::util::concurrent::atomic::AtomicInteger::J2CPP_METHOD_NAME(5),
		java::util::concurrent::atomic::AtomicInteger::J2CPP_METHOD_SIGNATURE(5), 
		jboolean >
	(get_jobject(), a0, a1);
}

jboolean java::util::concurrent::atomic::AtomicInteger::weakCompareAndSet(jint a0, jint a1)
{
	return call_method<
		java::util::concurrent::atomic::AtomicInteger::J2CPP_CLASS_NAME,
		java::util::concurrent::atomic::AtomicInteger::J2CPP_METHOD_NAME(6),
		java::util::concurrent::atomic::AtomicInteger::J2CPP_METHOD_SIGNATURE(6), 
		jboolean >
	(get_jobject(), a0, a1);
}

jint java::util::concurrent::atomic::AtomicInteger::getAndIncrement()
{
	return call_method<
		java::util::concurrent::atomic::AtomicInteger::J2CPP_CLASS_NAME,
		java::util::concurrent::atomic::AtomicInteger::J2CPP_METHOD_NAME(7),
		java::util::concurrent::atomic::AtomicInteger::J2CPP_METHOD_SIGNATURE(7), 
		jint >
	(get_jobject());
}

jint java::util::concurrent::atomic::AtomicInteger::getAndDecrement()
{
	return call_method<
		java::util::concurrent::atomic::AtomicInteger::J2CPP_CLASS_NAME,
		java::util::concurrent::atomic::AtomicInteger::J2CPP_METHOD_NAME(8),
		java::util::concurrent::atomic::AtomicInteger::J2CPP_METHOD_SIGNATURE(8), 
		jint >
	(get_jobject());
}

jint java::util::concurrent::atomic::AtomicInteger::getAndAdd(jint a0)
{
	return call_method<
		java::util::concurrent::atomic::AtomicInteger::J2CPP_CLASS_NAME,
		java::util::concurrent::atomic::AtomicInteger::J2CPP_METHOD_NAME(9),
		java::util::concurrent::atomic::AtomicInteger::J2CPP_METHOD_SIGNATURE(9), 
		jint >
	(get_jobject(), a0);
}

jint java::util::concurrent::atomic::AtomicInteger::incrementAndGet()
{
	return call_method<
		java::util::concurrent::atomic::AtomicInteger::J2CPP_CLASS_NAME,
		java::util::concurrent::atomic::AtomicInteger::J2CPP_METHOD_NAME(10),
		java::util::concurrent::atomic::AtomicInteger::J2CPP_METHOD_SIGNATURE(10), 
		jint >
	(get_jobject());
}

jint java::util::concurrent::atomic::AtomicInteger::decrementAndGet()
{
	return call_method<
		java::util::concurrent::atomic::AtomicInteger::J2CPP_CLASS_NAME,
		java::util::concurrent::atomic::AtomicInteger::J2CPP_METHOD_NAME(11),
		java::util::concurrent::atomic::AtomicInteger::J2CPP_METHOD_SIGNATURE(11), 
		jint >
	(get_jobject());
}

jint java::util::concurrent::atomic::AtomicInteger::addAndGet(jint a0)
{
	return call_method<
		java::util::concurrent::atomic::AtomicInteger::J2CPP_CLASS_NAME,
		java::util::concurrent::atomic::AtomicInteger::J2CPP_METHOD_NAME(12),
		java::util::concurrent::atomic::AtomicInteger::J2CPP_METHOD_SIGNATURE(12), 
		jint >
	(get_jobject(), a0);
}

local_ref< java::lang::String > java::util::concurrent::atomic::AtomicInteger::toString()
{
	return call_method<
		java::util::concurrent::atomic::AtomicInteger::J2CPP_CLASS_NAME,
		java::util::concurrent::atomic::AtomicInteger::J2CPP_METHOD_NAME(13),
		java::util::concurrent::atomic::AtomicInteger::J2CPP_METHOD_SIGNATURE(13), 
		local_ref< java::lang::String > >
	(get_jobject());
}

jint java::util::concurrent::atomic::AtomicInteger::intValue()
{
	return call_method<
		java::util::concurrent::atomic::AtomicInteger::J2CPP_CLASS_NAME,
		java::util::concurrent::atomic::AtomicInteger::J2CPP_METHOD_NAME(14),
		java::util::concurrent::atomic::AtomicInteger::J2CPP_METHOD_SIGNATURE(14), 
		jint >
	(get_jobject());
}

jlong java::util::concurrent::atomic::AtomicInteger::longValue()
{
	return call_method<
		java::util::concurrent::atomic::AtomicInteger::J2CPP_CLASS_NAME,
		java::util::concurrent::atomic::AtomicInteger::J2CPP_METHOD_NAME(15),
		java::util::concurrent::atomic::AtomicInteger::J2CPP_METHOD_SIGNATURE(15), 
		jlong >
	(get_jobject());
}

jfloat java::util::concurrent::atomic::AtomicInteger::floatValue()
{
	return call_method<
		java::util::concurrent::atomic::AtomicInteger::J2CPP_CLASS_NAME,
		java::util::concurrent::atomic::AtomicInteger::J2CPP_METHOD_NAME(16),
		java::util::concurrent::atomic::AtomicInteger::J2CPP_METHOD_SIGNATURE(16), 
		jfloat >
	(get_jobject());
}

jdouble java::util::concurrent::atomic::AtomicInteger::doubleValue()
{
	return call_method<
		java::util::concurrent::atomic::AtomicInteger::J2CPP_CLASS_NAME,
		java::util::concurrent::atomic::AtomicInteger::J2CPP_METHOD_NAME(17),
		java::util::concurrent::atomic::AtomicInteger::J2CPP_METHOD_SIGNATURE(17), 
		jdouble >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(java::util::concurrent::atomic::AtomicInteger,"java/util/concurrent/atomic/AtomicInteger")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicInteger,0,"<init>","(I)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicInteger,1,"<init>","()V")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicInteger,2,"get","()I")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicInteger,3,"set","(I)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicInteger,4,"getAndSet","(I)I")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicInteger,5,"compareAndSet","(II)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicInteger,6,"weakCompareAndSet","(II)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicInteger,7,"getAndIncrement","()I")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicInteger,8,"getAndDecrement","()I")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicInteger,9,"getAndAdd","(I)I")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicInteger,10,"incrementAndGet","()I")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicInteger,11,"decrementAndGet","()I")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicInteger,12,"addAndGet","(I)I")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicInteger,13,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicInteger,14,"intValue","()I")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicInteger,15,"longValue","()J")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicInteger,16,"floatValue","()F")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicInteger,17,"doubleValue","()D")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICINTEGER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
