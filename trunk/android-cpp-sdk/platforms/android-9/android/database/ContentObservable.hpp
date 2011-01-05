/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.database.ContentObservable
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_DATABASE_CONTENTOBSERVABLE_HPP_DECL
#define J2CPP_ANDROID_DATABASE_CONTENTOBSERVABLE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace database { class Observable; } } }
namespace j2cpp { namespace android { namespace database { class ContentObserver; } } }


#include <android/database/ContentObserver.hpp>
#include <android/database/Observable.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace database {

	class ContentObservable;
	class ContentObservable
		: public object<ContentObservable>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)

		explicit ContentObservable(jobject jobj)
		: object<ContentObservable>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::database::Observable>() const;


		ContentObservable();
		void registerObserver(local_ref< android::database::ContentObserver >  const&);
		void dispatchChange(jboolean);
		void notifyChange(jboolean);
		void registerObserver(local_ref< java::lang::Object >  const&);
	}; //class ContentObservable

} //namespace database
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_DATABASE_CONTENTOBSERVABLE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_DATABASE_CONTENTOBSERVABLE_HPP_IMPL
#define J2CPP_ANDROID_DATABASE_CONTENTOBSERVABLE_HPP_IMPL

namespace j2cpp {



android::database::ContentObservable::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::database::ContentObservable::operator local_ref<android::database::Observable>() const
{
	return local_ref<android::database::Observable>(get_jobject());
}


android::database::ContentObservable::ContentObservable()
: object<android::database::ContentObservable>(
	call_new_object<
		android::database::ContentObservable::J2CPP_CLASS_NAME,
		android::database::ContentObservable::J2CPP_METHOD_NAME(0),
		android::database::ContentObservable::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}


void android::database::ContentObservable::registerObserver(local_ref< android::database::ContentObserver > const &a0)
{
	return call_method<
		android::database::ContentObservable::J2CPP_CLASS_NAME,
		android::database::ContentObservable::J2CPP_METHOD_NAME(1),
		android::database::ContentObservable::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject(), a0);
}

void android::database::ContentObservable::dispatchChange(jboolean a0)
{
	return call_method<
		android::database::ContentObservable::J2CPP_CLASS_NAME,
		android::database::ContentObservable::J2CPP_METHOD_NAME(2),
		android::database::ContentObservable::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject(), a0);
}

void android::database::ContentObservable::notifyChange(jboolean a0)
{
	return call_method<
		android::database::ContentObservable::J2CPP_CLASS_NAME,
		android::database::ContentObservable::J2CPP_METHOD_NAME(3),
		android::database::ContentObservable::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject(), a0);
}

void android::database::ContentObservable::registerObserver(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		android::database::ContentObservable::J2CPP_CLASS_NAME,
		android::database::ContentObservable::J2CPP_METHOD_NAME(4),
		android::database::ContentObservable::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(android::database::ContentObservable,"android/database/ContentObservable")
J2CPP_DEFINE_METHOD(android::database::ContentObservable,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::database::ContentObservable,1,"registerObserver","(Landroid/database/ContentObserver;)V")
J2CPP_DEFINE_METHOD(android::database::ContentObservable,2,"dispatchChange","(Z)V")
J2CPP_DEFINE_METHOD(android::database::ContentObservable,3,"notifyChange","(Z)V")
J2CPP_DEFINE_METHOD(android::database::ContentObservable,4,"registerObserver","(Ljava/lang/Object;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_DATABASE_CONTENTOBSERVABLE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
