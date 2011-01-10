/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.speech.RecognitionService
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_SPEECH_RECOGNITIONSERVICE_HPP_DECL
#define J2CPP_ANDROID_SPEECH_RECOGNITIONSERVICE_HPP_DECL


namespace j2cpp { namespace android { namespace os { class IBinder; } } }
namespace j2cpp { namespace android { namespace os { class Bundle; } } }
namespace j2cpp { namespace android { namespace app { class Service; } } }
namespace j2cpp { namespace android { namespace content { class ComponentCallbacks; } } }
namespace j2cpp { namespace android { namespace content { class Intent; } } }
namespace j2cpp { namespace android { namespace content { class ContextWrapper; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/app/Service.hpp>
#include <android/content/ComponentCallbacks.hpp>
#include <android/content/Context.hpp>
#include <android/content/ContextWrapper.hpp>
#include <android/content/Intent.hpp>
#include <android/os/Bundle.hpp>
#include <android/os/IBinder.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace speech {

	class RecognitionService;
	namespace RecognitionService_ {

		class Callback;
		class Callback
			: public object<Callback>
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
			J2CPP_DECLARE_FIELD(0)

			explicit Callback(jobject jobj)
			: object<Callback>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			void beginningOfSpeech();
			void bufferReceived(local_ref< array<jbyte,1> >  const&);
			void endOfSpeech();
			void error(jint);
			void partialResults(local_ref< android::os::Bundle >  const&);
			void readyForSpeech(local_ref< android::os::Bundle >  const&);
			void results(local_ref< android::os::Bundle >  const&);
			void rmsChanged(jfloat);

		}; //class Callback

	} //namespace RecognitionService_

	class RecognitionService
		: public object<RecognitionService>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)

		typedef RecognitionService_::Callback Callback;

		explicit RecognitionService(jobject jobj)
		: object<RecognitionService>(jobj)
		{
		}

		operator local_ref<android::app::Service>() const;
		operator local_ref<android::content::ComponentCallbacks>() const;
		operator local_ref<android::content::ContextWrapper>() const;
		operator local_ref<android::content::Context>() const;
		operator local_ref<java::lang::Object>() const;


		RecognitionService();
		local_ref< android::os::IBinder > onBind(local_ref< android::content::Intent >  const&);
		void onDestroy();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::String > > SERVICE_INTERFACE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< java::lang::String > > SERVICE_META_DATA;
	}; //class RecognitionService

} //namespace speech
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_SPEECH_RECOGNITIONSERVICE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_SPEECH_RECOGNITIONSERVICE_HPP_IMPL
#define J2CPP_ANDROID_SPEECH_RECOGNITIONSERVICE_HPP_IMPL

namespace j2cpp {




android::speech::RecognitionService_::Callback::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


void android::speech::RecognitionService_::Callback::beginningOfSpeech()
{
	return call_method<
		android::speech::RecognitionService_::Callback::J2CPP_CLASS_NAME,
		android::speech::RecognitionService_::Callback::J2CPP_METHOD_NAME(1),
		android::speech::RecognitionService_::Callback::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject());
}

void android::speech::RecognitionService_::Callback::bufferReceived(local_ref< array<jbyte,1> > const &a0)
{
	return call_method<
		android::speech::RecognitionService_::Callback::J2CPP_CLASS_NAME,
		android::speech::RecognitionService_::Callback::J2CPP_METHOD_NAME(2),
		android::speech::RecognitionService_::Callback::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject(), a0);
}

void android::speech::RecognitionService_::Callback::endOfSpeech()
{
	return call_method<
		android::speech::RecognitionService_::Callback::J2CPP_CLASS_NAME,
		android::speech::RecognitionService_::Callback::J2CPP_METHOD_NAME(3),
		android::speech::RecognitionService_::Callback::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject());
}

void android::speech::RecognitionService_::Callback::error(jint a0)
{
	return call_method<
		android::speech::RecognitionService_::Callback::J2CPP_CLASS_NAME,
		android::speech::RecognitionService_::Callback::J2CPP_METHOD_NAME(4),
		android::speech::RecognitionService_::Callback::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0);
}

void android::speech::RecognitionService_::Callback::partialResults(local_ref< android::os::Bundle > const &a0)
{
	return call_method<
		android::speech::RecognitionService_::Callback::J2CPP_CLASS_NAME,
		android::speech::RecognitionService_::Callback::J2CPP_METHOD_NAME(5),
		android::speech::RecognitionService_::Callback::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject(), a0);
}

void android::speech::RecognitionService_::Callback::readyForSpeech(local_ref< android::os::Bundle > const &a0)
{
	return call_method<
		android::speech::RecognitionService_::Callback::J2CPP_CLASS_NAME,
		android::speech::RecognitionService_::Callback::J2CPP_METHOD_NAME(6),
		android::speech::RecognitionService_::Callback::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(get_jobject(), a0);
}

void android::speech::RecognitionService_::Callback::results(local_ref< android::os::Bundle > const &a0)
{
	return call_method<
		android::speech::RecognitionService_::Callback::J2CPP_CLASS_NAME,
		android::speech::RecognitionService_::Callback::J2CPP_METHOD_NAME(7),
		android::speech::RecognitionService_::Callback::J2CPP_METHOD_SIGNATURE(7), 
		void
	>(get_jobject(), a0);
}

void android::speech::RecognitionService_::Callback::rmsChanged(jfloat a0)
{
	return call_method<
		android::speech::RecognitionService_::Callback::J2CPP_CLASS_NAME,
		android::speech::RecognitionService_::Callback::J2CPP_METHOD_NAME(8),
		android::speech::RecognitionService_::Callback::J2CPP_METHOD_SIGNATURE(8), 
		void
	>(get_jobject(), a0);
}



J2CPP_DEFINE_CLASS(android::speech::RecognitionService_::Callback,"android/speech/RecognitionService$Callback")
J2CPP_DEFINE_METHOD(android::speech::RecognitionService_::Callback,0,"<init>","(Landroid/speech/RecognitionService;)V")
J2CPP_DEFINE_METHOD(android::speech::RecognitionService_::Callback,1,"beginningOfSpeech","()V")
J2CPP_DEFINE_METHOD(android::speech::RecognitionService_::Callback,2,"bufferReceived","([B)V")
J2CPP_DEFINE_METHOD(android::speech::RecognitionService_::Callback,3,"endOfSpeech","()V")
J2CPP_DEFINE_METHOD(android::speech::RecognitionService_::Callback,4,"error","(I)V")
J2CPP_DEFINE_METHOD(android::speech::RecognitionService_::Callback,5,"partialResults","(Landroid/os/Bundle;)V")
J2CPP_DEFINE_METHOD(android::speech::RecognitionService_::Callback,6,"readyForSpeech","(Landroid/os/Bundle;)V")
J2CPP_DEFINE_METHOD(android::speech::RecognitionService_::Callback,7,"results","(Landroid/os/Bundle;)V")
J2CPP_DEFINE_METHOD(android::speech::RecognitionService_::Callback,8,"rmsChanged","(F)V")
J2CPP_DEFINE_FIELD(android::speech::RecognitionService_::Callback,0,"this$0","Landroid/speech/RecognitionService;")



android::speech::RecognitionService::operator local_ref<android::app::Service>() const
{
	return local_ref<android::app::Service>(get_jobject());
}

android::speech::RecognitionService::operator local_ref<android::content::ComponentCallbacks>() const
{
	return local_ref<android::content::ComponentCallbacks>(get_jobject());
}

android::speech::RecognitionService::operator local_ref<android::content::ContextWrapper>() const
{
	return local_ref<android::content::ContextWrapper>(get_jobject());
}

android::speech::RecognitionService::operator local_ref<android::content::Context>() const
{
	return local_ref<android::content::Context>(get_jobject());
}

android::speech::RecognitionService::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::speech::RecognitionService::RecognitionService()
: object<android::speech::RecognitionService>(
	call_new_object<
		android::speech::RecognitionService::J2CPP_CLASS_NAME,
		android::speech::RecognitionService::J2CPP_METHOD_NAME(0),
		android::speech::RecognitionService::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}





local_ref< android::os::IBinder > android::speech::RecognitionService::onBind(local_ref< android::content::Intent > const &a0)
{
	return call_method<
		android::speech::RecognitionService::J2CPP_CLASS_NAME,
		android::speech::RecognitionService::J2CPP_METHOD_NAME(4),
		android::speech::RecognitionService::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< android::os::IBinder >
	>(get_jobject(), a0);
}

void android::speech::RecognitionService::onDestroy()
{
	return call_method<
		android::speech::RecognitionService::J2CPP_CLASS_NAME,
		android::speech::RecognitionService::J2CPP_METHOD_NAME(5),
		android::speech::RecognitionService::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject());
}


static_field<
	android::speech::RecognitionService::J2CPP_CLASS_NAME,
	android::speech::RecognitionService::J2CPP_FIELD_NAME(0),
	android::speech::RecognitionService::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::lang::String >
> android::speech::RecognitionService::SERVICE_INTERFACE;

static_field<
	android::speech::RecognitionService::J2CPP_CLASS_NAME,
	android::speech::RecognitionService::J2CPP_FIELD_NAME(1),
	android::speech::RecognitionService::J2CPP_FIELD_SIGNATURE(1),
	local_ref< java::lang::String >
> android::speech::RecognitionService::SERVICE_META_DATA;


J2CPP_DEFINE_CLASS(android::speech::RecognitionService,"android/speech/RecognitionService")
J2CPP_DEFINE_METHOD(android::speech::RecognitionService,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::speech::RecognitionService,1,"onStartListening","(Landroid/content/Intent;Landroid/speech/RecognitionService$Callback;)V")
J2CPP_DEFINE_METHOD(android::speech::RecognitionService,2,"onCancel","(Landroid/speech/RecognitionService$Callback;)V")
J2CPP_DEFINE_METHOD(android::speech::RecognitionService,3,"onStopListening","(Landroid/speech/RecognitionService$Callback;)V")
J2CPP_DEFINE_METHOD(android::speech::RecognitionService,4,"onBind","(Landroid/content/Intent;)Landroid/os/IBinder;")
J2CPP_DEFINE_METHOD(android::speech::RecognitionService,5,"onDestroy","()V")
J2CPP_DEFINE_FIELD(android::speech::RecognitionService,0,"SERVICE_INTERFACE","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::speech::RecognitionService,1,"SERVICE_META_DATA","Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_SPEECH_RECOGNITIONSERVICE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION