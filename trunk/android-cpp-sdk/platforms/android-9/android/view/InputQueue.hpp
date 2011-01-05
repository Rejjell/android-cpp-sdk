/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.view.InputQueue
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_INPUTQUEUE_HPP_DECL
#define J2CPP_ANDROID_VIEW_INPUTQUEUE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace view {

	class InputQueue;
	namespace InputQueue_ {

		class Callback;
		class Callback
			: public object<Callback>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)

			explicit Callback(jobject jobj)
			: object<Callback>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			void onInputQueueCreated(local_ref< android::view::InputQueue >  const&);
			void onInputQueueDestroyed(local_ref< android::view::InputQueue >  const&);
		}; //class Callback

	} //namespace InputQueue_

	class InputQueue
		: public object<InputQueue>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		typedef InputQueue_::Callback Callback;

		explicit InputQueue(jobject jobj)
		: object<InputQueue>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


	}; //class InputQueue

} //namespace view
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_INPUTQUEUE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_INPUTQUEUE_HPP_IMPL
#define J2CPP_ANDROID_VIEW_INPUTQUEUE_HPP_IMPL

namespace j2cpp {




android::view::InputQueue_::Callback::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void android::view::InputQueue_::Callback::onInputQueueCreated(local_ref< android::view::InputQueue > const &a0)
{
	return call_method<
		android::view::InputQueue_::Callback::J2CPP_CLASS_NAME,
		android::view::InputQueue_::Callback::J2CPP_METHOD_NAME(0),
		android::view::InputQueue_::Callback::J2CPP_METHOD_SIGNATURE(0), 
		void
	>(get_jobject(), a0);
}

void android::view::InputQueue_::Callback::onInputQueueDestroyed(local_ref< android::view::InputQueue > const &a0)
{
	return call_method<
		android::view::InputQueue_::Callback::J2CPP_CLASS_NAME,
		android::view::InputQueue_::Callback::J2CPP_METHOD_NAME(1),
		android::view::InputQueue_::Callback::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(android::view::InputQueue_::Callback,"android/view/InputQueue$Callback")
J2CPP_DEFINE_METHOD(android::view::InputQueue_::Callback,0,"onInputQueueCreated","(Landroid/view/InputQueue;)V")
J2CPP_DEFINE_METHOD(android::view::InputQueue_::Callback,1,"onInputQueueDestroyed","(Landroid/view/InputQueue;)V")



android::view::InputQueue::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}



J2CPP_DEFINE_CLASS(android::view::InputQueue,"android/view/InputQueue")
J2CPP_DEFINE_METHOD(android::view::InputQueue,0,"<init>","()V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_INPUTQUEUE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
