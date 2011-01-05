/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.media.AudioRecord
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_MEDIA_AUDIORECORD_HPP_DECL
#define J2CPP_ANDROID_MEDIA_AUDIORECORD_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace nio { class ByteBuffer; } } }
namespace j2cpp { namespace android { namespace media { namespace AudioRecord_ { class OnRecordPositionUpdateListener; } } } }
namespace j2cpp { namespace android { namespace os { class Handler; } } }


#include <android/media/AudioRecord.hpp>
#include <android/os/Handler.hpp>
#include <java/lang/Object.hpp>
#include <java/nio/ByteBuffer.hpp>


namespace j2cpp {

namespace android { namespace media {

	class AudioRecord;
	namespace AudioRecord_ {

		class OnRecordPositionUpdateListener;
		class OnRecordPositionUpdateListener
			: public object<OnRecordPositionUpdateListener>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)

			explicit OnRecordPositionUpdateListener(jobject jobj)
			: object<OnRecordPositionUpdateListener>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			void onMarkerReached(local_ref< android::media::AudioRecord >  const&);
			void onPeriodicNotification(local_ref< android::media::AudioRecord >  const&);
		}; //class OnRecordPositionUpdateListener

	} //namespace AudioRecord_

	class AudioRecord
		: public object<AudioRecord>
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
		J2CPP_DECLARE_METHOD(18)
		J2CPP_DECLARE_METHOD(19)
		J2CPP_DECLARE_METHOD(20)
		J2CPP_DECLARE_METHOD(21)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)
		J2CPP_DECLARE_FIELD(6)
		J2CPP_DECLARE_FIELD(7)

		typedef AudioRecord_::OnRecordPositionUpdateListener OnRecordPositionUpdateListener;

		explicit AudioRecord(jobject jobj)
		: object<AudioRecord>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		AudioRecord(jint, jint, jint, jint, jint);
		void release();
		jint getSampleRate();
		jint getAudioSource();
		jint getAudioFormat();
		jint getChannelConfiguration();
		jint getChannelCount();
		jint getState();
		jint getRecordingState();
		jint getNotificationMarkerPosition();
		jint getPositionNotificationPeriod();
		static jint getMinBufferSize(jint, jint, jint);
		void startRecording();
		void stop();
		jint read(local_ref< array<jbyte,1> >  const&, jint, jint);
		jint read(local_ref< array<jshort,1> >  const&, jint, jint);
		jint read(local_ref< java::nio::ByteBuffer >  const&, jint);
		void setRecordPositionUpdateListener(local_ref< android::media::AudioRecord_::OnRecordPositionUpdateListener >  const&);
		void setRecordPositionUpdateListener(local_ref< android::media::AudioRecord_::OnRecordPositionUpdateListener >  const&, local_ref< android::os::Handler >  const&);
		jint setNotificationMarkerPosition(jint);
		jint setPositionNotificationPeriod(jint);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > STATE_UNINITIALIZED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > STATE_INITIALIZED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jint > RECORDSTATE_STOPPED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), jint > RECORDSTATE_RECORDING;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), jint > SUCCESS;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), jint > ERROR;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), jint > ERROR_BAD_VALUE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), jint > ERROR_INVALID_OPERATION;
	}; //class AudioRecord

} //namespace media
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_MEDIA_AUDIORECORD_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_MEDIA_AUDIORECORD_HPP_IMPL
#define J2CPP_ANDROID_MEDIA_AUDIORECORD_HPP_IMPL

namespace j2cpp {




android::media::AudioRecord_::OnRecordPositionUpdateListener::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void android::media::AudioRecord_::OnRecordPositionUpdateListener::onMarkerReached(local_ref< android::media::AudioRecord > const &a0)
{
	return call_method<
		android::media::AudioRecord_::OnRecordPositionUpdateListener::J2CPP_CLASS_NAME,
		android::media::AudioRecord_::OnRecordPositionUpdateListener::J2CPP_METHOD_NAME(0),
		android::media::AudioRecord_::OnRecordPositionUpdateListener::J2CPP_METHOD_SIGNATURE(0), 
		void
	>(get_jobject(), a0);
}

void android::media::AudioRecord_::OnRecordPositionUpdateListener::onPeriodicNotification(local_ref< android::media::AudioRecord > const &a0)
{
	return call_method<
		android::media::AudioRecord_::OnRecordPositionUpdateListener::J2CPP_CLASS_NAME,
		android::media::AudioRecord_::OnRecordPositionUpdateListener::J2CPP_METHOD_NAME(1),
		android::media::AudioRecord_::OnRecordPositionUpdateListener::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(android::media::AudioRecord_::OnRecordPositionUpdateListener,"android/media/AudioRecord$OnRecordPositionUpdateListener")
J2CPP_DEFINE_METHOD(android::media::AudioRecord_::OnRecordPositionUpdateListener,0,"onMarkerReached","(Landroid/media/AudioRecord;)V")
J2CPP_DEFINE_METHOD(android::media::AudioRecord_::OnRecordPositionUpdateListener,1,"onPeriodicNotification","(Landroid/media/AudioRecord;)V")



android::media::AudioRecord::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::media::AudioRecord::AudioRecord(jint a0, jint a1, jint a2, jint a3, jint a4)
: object<android::media::AudioRecord>(
	call_new_object<
		android::media::AudioRecord::J2CPP_CLASS_NAME,
		android::media::AudioRecord::J2CPP_METHOD_NAME(0),
		android::media::AudioRecord::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1, a2, a3, a4)
)
{
}


void android::media::AudioRecord::release()
{
	return call_method<
		android::media::AudioRecord::J2CPP_CLASS_NAME,
		android::media::AudioRecord::J2CPP_METHOD_NAME(1),
		android::media::AudioRecord::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject());
}


jint android::media::AudioRecord::getSampleRate()
{
	return call_method<
		android::media::AudioRecord::J2CPP_CLASS_NAME,
		android::media::AudioRecord::J2CPP_METHOD_NAME(3),
		android::media::AudioRecord::J2CPP_METHOD_SIGNATURE(3), 
		jint
	>(get_jobject());
}

jint android::media::AudioRecord::getAudioSource()
{
	return call_method<
		android::media::AudioRecord::J2CPP_CLASS_NAME,
		android::media::AudioRecord::J2CPP_METHOD_NAME(4),
		android::media::AudioRecord::J2CPP_METHOD_SIGNATURE(4), 
		jint
	>(get_jobject());
}

jint android::media::AudioRecord::getAudioFormat()
{
	return call_method<
		android::media::AudioRecord::J2CPP_CLASS_NAME,
		android::media::AudioRecord::J2CPP_METHOD_NAME(5),
		android::media::AudioRecord::J2CPP_METHOD_SIGNATURE(5), 
		jint
	>(get_jobject());
}

jint android::media::AudioRecord::getChannelConfiguration()
{
	return call_method<
		android::media::AudioRecord::J2CPP_CLASS_NAME,
		android::media::AudioRecord::J2CPP_METHOD_NAME(6),
		android::media::AudioRecord::J2CPP_METHOD_SIGNATURE(6), 
		jint
	>(get_jobject());
}

jint android::media::AudioRecord::getChannelCount()
{
	return call_method<
		android::media::AudioRecord::J2CPP_CLASS_NAME,
		android::media::AudioRecord::J2CPP_METHOD_NAME(7),
		android::media::AudioRecord::J2CPP_METHOD_SIGNATURE(7), 
		jint
	>(get_jobject());
}

jint android::media::AudioRecord::getState()
{
	return call_method<
		android::media::AudioRecord::J2CPP_CLASS_NAME,
		android::media::AudioRecord::J2CPP_METHOD_NAME(8),
		android::media::AudioRecord::J2CPP_METHOD_SIGNATURE(8), 
		jint
	>(get_jobject());
}

jint android::media::AudioRecord::getRecordingState()
{
	return call_method<
		android::media::AudioRecord::J2CPP_CLASS_NAME,
		android::media::AudioRecord::J2CPP_METHOD_NAME(9),
		android::media::AudioRecord::J2CPP_METHOD_SIGNATURE(9), 
		jint
	>(get_jobject());
}

jint android::media::AudioRecord::getNotificationMarkerPosition()
{
	return call_method<
		android::media::AudioRecord::J2CPP_CLASS_NAME,
		android::media::AudioRecord::J2CPP_METHOD_NAME(10),
		android::media::AudioRecord::J2CPP_METHOD_SIGNATURE(10), 
		jint
	>(get_jobject());
}

jint android::media::AudioRecord::getPositionNotificationPeriod()
{
	return call_method<
		android::media::AudioRecord::J2CPP_CLASS_NAME,
		android::media::AudioRecord::J2CPP_METHOD_NAME(11),
		android::media::AudioRecord::J2CPP_METHOD_SIGNATURE(11), 
		jint
	>(get_jobject());
}

jint android::media::AudioRecord::getMinBufferSize(jint a0, jint a1, jint a2)
{
	return call_static_method<
		android::media::AudioRecord::J2CPP_CLASS_NAME,
		android::media::AudioRecord::J2CPP_METHOD_NAME(12),
		android::media::AudioRecord::J2CPP_METHOD_SIGNATURE(12), 
		jint
	>(a0, a1, a2);
}

void android::media::AudioRecord::startRecording()
{
	return call_method<
		android::media::AudioRecord::J2CPP_CLASS_NAME,
		android::media::AudioRecord::J2CPP_METHOD_NAME(13),
		android::media::AudioRecord::J2CPP_METHOD_SIGNATURE(13), 
		void
	>(get_jobject());
}

void android::media::AudioRecord::stop()
{
	return call_method<
		android::media::AudioRecord::J2CPP_CLASS_NAME,
		android::media::AudioRecord::J2CPP_METHOD_NAME(14),
		android::media::AudioRecord::J2CPP_METHOD_SIGNATURE(14), 
		void
	>(get_jobject());
}

jint android::media::AudioRecord::read(local_ref< array<jbyte,1> > const &a0, jint a1, jint a2)
{
	return call_method<
		android::media::AudioRecord::J2CPP_CLASS_NAME,
		android::media::AudioRecord::J2CPP_METHOD_NAME(15),
		android::media::AudioRecord::J2CPP_METHOD_SIGNATURE(15), 
		jint
	>(get_jobject(), a0, a1, a2);
}

jint android::media::AudioRecord::read(local_ref< array<jshort,1> > const &a0, jint a1, jint a2)
{
	return call_method<
		android::media::AudioRecord::J2CPP_CLASS_NAME,
		android::media::AudioRecord::J2CPP_METHOD_NAME(16),
		android::media::AudioRecord::J2CPP_METHOD_SIGNATURE(16), 
		jint
	>(get_jobject(), a0, a1, a2);
}

jint android::media::AudioRecord::read(local_ref< java::nio::ByteBuffer > const &a0, jint a1)
{
	return call_method<
		android::media::AudioRecord::J2CPP_CLASS_NAME,
		android::media::AudioRecord::J2CPP_METHOD_NAME(17),
		android::media::AudioRecord::J2CPP_METHOD_SIGNATURE(17), 
		jint
	>(get_jobject(), a0, a1);
}

void android::media::AudioRecord::setRecordPositionUpdateListener(local_ref< android::media::AudioRecord_::OnRecordPositionUpdateListener > const &a0)
{
	return call_method<
		android::media::AudioRecord::J2CPP_CLASS_NAME,
		android::media::AudioRecord::J2CPP_METHOD_NAME(18),
		android::media::AudioRecord::J2CPP_METHOD_SIGNATURE(18), 
		void
	>(get_jobject(), a0);
}

void android::media::AudioRecord::setRecordPositionUpdateListener(local_ref< android::media::AudioRecord_::OnRecordPositionUpdateListener > const &a0, local_ref< android::os::Handler > const &a1)
{
	return call_method<
		android::media::AudioRecord::J2CPP_CLASS_NAME,
		android::media::AudioRecord::J2CPP_METHOD_NAME(19),
		android::media::AudioRecord::J2CPP_METHOD_SIGNATURE(19), 
		void
	>(get_jobject(), a0, a1);
}

jint android::media::AudioRecord::setNotificationMarkerPosition(jint a0)
{
	return call_method<
		android::media::AudioRecord::J2CPP_CLASS_NAME,
		android::media::AudioRecord::J2CPP_METHOD_NAME(20),
		android::media::AudioRecord::J2CPP_METHOD_SIGNATURE(20), 
		jint
	>(get_jobject(), a0);
}

jint android::media::AudioRecord::setPositionNotificationPeriod(jint a0)
{
	return call_method<
		android::media::AudioRecord::J2CPP_CLASS_NAME,
		android::media::AudioRecord::J2CPP_METHOD_NAME(21),
		android::media::AudioRecord::J2CPP_METHOD_SIGNATURE(21), 
		jint
	>(get_jobject(), a0);
}


static_field<
	android::media::AudioRecord::J2CPP_CLASS_NAME,
	android::media::AudioRecord::J2CPP_FIELD_NAME(0),
	android::media::AudioRecord::J2CPP_FIELD_SIGNATURE(0),
	jint
> android::media::AudioRecord::STATE_UNINITIALIZED;

static_field<
	android::media::AudioRecord::J2CPP_CLASS_NAME,
	android::media::AudioRecord::J2CPP_FIELD_NAME(1),
	android::media::AudioRecord::J2CPP_FIELD_SIGNATURE(1),
	jint
> android::media::AudioRecord::STATE_INITIALIZED;

static_field<
	android::media::AudioRecord::J2CPP_CLASS_NAME,
	android::media::AudioRecord::J2CPP_FIELD_NAME(2),
	android::media::AudioRecord::J2CPP_FIELD_SIGNATURE(2),
	jint
> android::media::AudioRecord::RECORDSTATE_STOPPED;

static_field<
	android::media::AudioRecord::J2CPP_CLASS_NAME,
	android::media::AudioRecord::J2CPP_FIELD_NAME(3),
	android::media::AudioRecord::J2CPP_FIELD_SIGNATURE(3),
	jint
> android::media::AudioRecord::RECORDSTATE_RECORDING;

static_field<
	android::media::AudioRecord::J2CPP_CLASS_NAME,
	android::media::AudioRecord::J2CPP_FIELD_NAME(4),
	android::media::AudioRecord::J2CPP_FIELD_SIGNATURE(4),
	jint
> android::media::AudioRecord::SUCCESS;

static_field<
	android::media::AudioRecord::J2CPP_CLASS_NAME,
	android::media::AudioRecord::J2CPP_FIELD_NAME(5),
	android::media::AudioRecord::J2CPP_FIELD_SIGNATURE(5),
	jint
> android::media::AudioRecord::ERROR;

static_field<
	android::media::AudioRecord::J2CPP_CLASS_NAME,
	android::media::AudioRecord::J2CPP_FIELD_NAME(6),
	android::media::AudioRecord::J2CPP_FIELD_SIGNATURE(6),
	jint
> android::media::AudioRecord::ERROR_BAD_VALUE;

static_field<
	android::media::AudioRecord::J2CPP_CLASS_NAME,
	android::media::AudioRecord::J2CPP_FIELD_NAME(7),
	android::media::AudioRecord::J2CPP_FIELD_SIGNATURE(7),
	jint
> android::media::AudioRecord::ERROR_INVALID_OPERATION;


J2CPP_DEFINE_CLASS(android::media::AudioRecord,"android/media/AudioRecord")
J2CPP_DEFINE_METHOD(android::media::AudioRecord,0,"<init>","(IIIII)V")
J2CPP_DEFINE_METHOD(android::media::AudioRecord,1,"release","()V")
J2CPP_DEFINE_METHOD(android::media::AudioRecord,2,"finalize","()V")
J2CPP_DEFINE_METHOD(android::media::AudioRecord,3,"getSampleRate","()I")
J2CPP_DEFINE_METHOD(android::media::AudioRecord,4,"getAudioSource","()I")
J2CPP_DEFINE_METHOD(android::media::AudioRecord,5,"getAudioFormat","()I")
J2CPP_DEFINE_METHOD(android::media::AudioRecord,6,"getChannelConfiguration","()I")
J2CPP_DEFINE_METHOD(android::media::AudioRecord,7,"getChannelCount","()I")
J2CPP_DEFINE_METHOD(android::media::AudioRecord,8,"getState","()I")
J2CPP_DEFINE_METHOD(android::media::AudioRecord,9,"getRecordingState","()I")
J2CPP_DEFINE_METHOD(android::media::AudioRecord,10,"getNotificationMarkerPosition","()I")
J2CPP_DEFINE_METHOD(android::media::AudioRecord,11,"getPositionNotificationPeriod","()I")
J2CPP_DEFINE_METHOD(android::media::AudioRecord,12,"getMinBufferSize","(III)I")
J2CPP_DEFINE_METHOD(android::media::AudioRecord,13,"startRecording","()V")
J2CPP_DEFINE_METHOD(android::media::AudioRecord,14,"stop","()V")
J2CPP_DEFINE_METHOD(android::media::AudioRecord,15,"read","([BII)I")
J2CPP_DEFINE_METHOD(android::media::AudioRecord,16,"read","([SII)I")
J2CPP_DEFINE_METHOD(android::media::AudioRecord,17,"read","(Ljava/nio/ByteBuffer;I)I")
J2CPP_DEFINE_METHOD(android::media::AudioRecord,18,"setRecordPositionUpdateListener","(Landroid/media/AudioRecord$OnRecordPositionUpdateListener;)V")
J2CPP_DEFINE_METHOD(android::media::AudioRecord,19,"setRecordPositionUpdateListener","(Landroid/media/AudioRecord$OnRecordPositionUpdateListener;Landroid/os/Handler;)V")
J2CPP_DEFINE_METHOD(android::media::AudioRecord,20,"setNotificationMarkerPosition","(I)I")
J2CPP_DEFINE_METHOD(android::media::AudioRecord,21,"setPositionNotificationPeriod","(I)I")
J2CPP_DEFINE_FIELD(android::media::AudioRecord,0,"STATE_UNINITIALIZED","I")
J2CPP_DEFINE_FIELD(android::media::AudioRecord,1,"STATE_INITIALIZED","I")
J2CPP_DEFINE_FIELD(android::media::AudioRecord,2,"RECORDSTATE_STOPPED","I")
J2CPP_DEFINE_FIELD(android::media::AudioRecord,3,"RECORDSTATE_RECORDING","I")
J2CPP_DEFINE_FIELD(android::media::AudioRecord,4,"SUCCESS","I")
J2CPP_DEFINE_FIELD(android::media::AudioRecord,5,"ERROR","I")
J2CPP_DEFINE_FIELD(android::media::AudioRecord,6,"ERROR_BAD_VALUE","I")
J2CPP_DEFINE_FIELD(android::media::AudioRecord,7,"ERROR_INVALID_OPERATION","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_MEDIA_AUDIORECORD_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
