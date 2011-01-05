/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.media.AudioManager
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_MEDIA_AUDIOMANAGER_HPP_DECL
#define J2CPP_ANDROID_MEDIA_AUDIOMANAGER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace media {

	class AudioManager;
	class AudioManager
		: public object<AudioManager>
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
		J2CPP_DECLARE_METHOD(22)
		J2CPP_DECLARE_METHOD(23)
		J2CPP_DECLARE_METHOD(24)
		J2CPP_DECLARE_METHOD(25)
		J2CPP_DECLARE_METHOD(26)
		J2CPP_DECLARE_METHOD(27)
		J2CPP_DECLARE_METHOD(28)
		J2CPP_DECLARE_METHOD(29)
		J2CPP_DECLARE_METHOD(30)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)
		J2CPP_DECLARE_FIELD(6)
		J2CPP_DECLARE_FIELD(7)
		J2CPP_DECLARE_FIELD(8)
		J2CPP_DECLARE_FIELD(9)
		J2CPP_DECLARE_FIELD(10)
		J2CPP_DECLARE_FIELD(11)
		J2CPP_DECLARE_FIELD(12)
		J2CPP_DECLARE_FIELD(13)
		J2CPP_DECLARE_FIELD(14)
		J2CPP_DECLARE_FIELD(15)
		J2CPP_DECLARE_FIELD(16)
		J2CPP_DECLARE_FIELD(17)
		J2CPP_DECLARE_FIELD(18)
		J2CPP_DECLARE_FIELD(19)
		J2CPP_DECLARE_FIELD(20)
		J2CPP_DECLARE_FIELD(21)
		J2CPP_DECLARE_FIELD(22)
		J2CPP_DECLARE_FIELD(23)
		J2CPP_DECLARE_FIELD(24)
		J2CPP_DECLARE_FIELD(25)
		J2CPP_DECLARE_FIELD(26)
		J2CPP_DECLARE_FIELD(27)
		J2CPP_DECLARE_FIELD(28)
		J2CPP_DECLARE_FIELD(29)
		J2CPP_DECLARE_FIELD(30)
		J2CPP_DECLARE_FIELD(31)
		J2CPP_DECLARE_FIELD(32)
		J2CPP_DECLARE_FIELD(33)
		J2CPP_DECLARE_FIELD(34)
		J2CPP_DECLARE_FIELD(35)
		J2CPP_DECLARE_FIELD(36)
		J2CPP_DECLARE_FIELD(37)
		J2CPP_DECLARE_FIELD(38)
		J2CPP_DECLARE_FIELD(39)
		J2CPP_DECLARE_FIELD(40)
		J2CPP_DECLARE_FIELD(41)
		J2CPP_DECLARE_FIELD(42)
		J2CPP_DECLARE_FIELD(43)
		J2CPP_DECLARE_FIELD(44)
		J2CPP_DECLARE_FIELD(45)
		J2CPP_DECLARE_FIELD(46)
		J2CPP_DECLARE_FIELD(47)
		J2CPP_DECLARE_FIELD(48)
		J2CPP_DECLARE_FIELD(49)
		J2CPP_DECLARE_FIELD(50)

		explicit AudioManager(jobject jobj)
		: object<AudioManager>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		void adjustStreamVolume(jint, jint, jint);
		void adjustVolume(jint, jint);
		void adjustSuggestedStreamVolume(jint, jint, jint);
		jint getRingerMode();
		jint getStreamMaxVolume(jint);
		jint getStreamVolume(jint);
		void setRingerMode(jint);
		void setStreamVolume(jint, jint, jint);
		void setStreamSolo(jint, jboolean);
		void setStreamMute(jint, jboolean);
		jboolean shouldVibrate(jint);
		jint getVibrateSetting(jint);
		void setVibrateSetting(jint, jint);
		void setSpeakerphoneOn(jboolean);
		jboolean isSpeakerphoneOn();
		void setBluetoothScoOn(jboolean);
		jboolean isBluetoothScoOn();
		void setBluetoothA2dpOn(jboolean);
		jboolean isBluetoothA2dpOn();
		void setMicrophoneMute(jboolean);
		jboolean isMicrophoneMute();
		void setMode(jint);
		jint getMode();
		void setRouting(jint, jint, jint);
		jint getRouting(jint);
		jboolean isMusicActive();
		void playSoundEffect(jint);
		void playSoundEffect(jint, jfloat);
		void loadSoundEffects();
		void unloadSoundEffects();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::String > > ACTION_AUDIO_BECOMING_NOISY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< java::lang::String > > RINGER_MODE_CHANGED_ACTION;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< java::lang::String > > EXTRA_RINGER_MODE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), local_ref< java::lang::String > > VIBRATE_SETTING_CHANGED_ACTION;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), local_ref< java::lang::String > > EXTRA_VIBRATE_SETTING;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), local_ref< java::lang::String > > EXTRA_VIBRATE_TYPE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), jint > STREAM_VOICE_CALL;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), jint > STREAM_SYSTEM;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), jint > STREAM_RING;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(9), J2CPP_FIELD_SIGNATURE(9), jint > STREAM_MUSIC;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(10), J2CPP_FIELD_SIGNATURE(10), jint > STREAM_ALARM;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(11), J2CPP_FIELD_SIGNATURE(11), jint > STREAM_NOTIFICATION;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(12), J2CPP_FIELD_SIGNATURE(12), jint > NUM_STREAMS;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(13), J2CPP_FIELD_SIGNATURE(13), jint > ADJUST_RAISE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(14), J2CPP_FIELD_SIGNATURE(14), jint > ADJUST_LOWER;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(15), J2CPP_FIELD_SIGNATURE(15), jint > ADJUST_SAME;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(16), J2CPP_FIELD_SIGNATURE(16), jint > FLAG_SHOW_UI;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(17), J2CPP_FIELD_SIGNATURE(17), jint > FLAG_ALLOW_RINGER_MODES;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(18), J2CPP_FIELD_SIGNATURE(18), jint > FLAG_PLAY_SOUND;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(19), J2CPP_FIELD_SIGNATURE(19), jint > FLAG_REMOVE_SOUND_AND_VIBRATE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(20), J2CPP_FIELD_SIGNATURE(20), jint > FLAG_VIBRATE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(21), J2CPP_FIELD_SIGNATURE(21), jint > RINGER_MODE_SILENT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(22), J2CPP_FIELD_SIGNATURE(22), jint > RINGER_MODE_VIBRATE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(23), J2CPP_FIELD_SIGNATURE(23), jint > RINGER_MODE_NORMAL;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(24), J2CPP_FIELD_SIGNATURE(24), jint > VIBRATE_TYPE_RINGER;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(25), J2CPP_FIELD_SIGNATURE(25), jint > VIBRATE_TYPE_NOTIFICATION;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(26), J2CPP_FIELD_SIGNATURE(26), jint > VIBRATE_SETTING_OFF;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(27), J2CPP_FIELD_SIGNATURE(27), jint > VIBRATE_SETTING_ON;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(28), J2CPP_FIELD_SIGNATURE(28), jint > VIBRATE_SETTING_ONLY_SILENT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(29), J2CPP_FIELD_SIGNATURE(29), jint > USE_DEFAULT_STREAM_TYPE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(30), J2CPP_FIELD_SIGNATURE(30), jint > MODE_INVALID;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(31), J2CPP_FIELD_SIGNATURE(31), jint > MODE_CURRENT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(32), J2CPP_FIELD_SIGNATURE(32), jint > MODE_NORMAL;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(33), J2CPP_FIELD_SIGNATURE(33), jint > MODE_RINGTONE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(34), J2CPP_FIELD_SIGNATURE(34), jint > MODE_IN_CALL;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(35), J2CPP_FIELD_SIGNATURE(35), jint > ROUTE_EARPIECE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(36), J2CPP_FIELD_SIGNATURE(36), jint > ROUTE_SPEAKER;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(37), J2CPP_FIELD_SIGNATURE(37), jint > ROUTE_BLUETOOTH;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(38), J2CPP_FIELD_SIGNATURE(38), jint > ROUTE_BLUETOOTH_SCO;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(39), J2CPP_FIELD_SIGNATURE(39), jint > ROUTE_HEADSET;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(40), J2CPP_FIELD_SIGNATURE(40), jint > ROUTE_BLUETOOTH_A2DP;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(41), J2CPP_FIELD_SIGNATURE(41), jint > ROUTE_ALL;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(42), J2CPP_FIELD_SIGNATURE(42), jint > FX_KEY_CLICK;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(43), J2CPP_FIELD_SIGNATURE(43), jint > FX_FOCUS_NAVIGATION_UP;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(44), J2CPP_FIELD_SIGNATURE(44), jint > FX_FOCUS_NAVIGATION_DOWN;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(45), J2CPP_FIELD_SIGNATURE(45), jint > FX_FOCUS_NAVIGATION_LEFT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(46), J2CPP_FIELD_SIGNATURE(46), jint > FX_FOCUS_NAVIGATION_RIGHT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(47), J2CPP_FIELD_SIGNATURE(47), jint > FX_KEYPRESS_STANDARD;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(48), J2CPP_FIELD_SIGNATURE(48), jint > FX_KEYPRESS_SPACEBAR;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(49), J2CPP_FIELD_SIGNATURE(49), jint > FX_KEYPRESS_DELETE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(50), J2CPP_FIELD_SIGNATURE(50), jint > FX_KEYPRESS_RETURN;
	}; //class AudioManager

} //namespace media
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_MEDIA_AUDIOMANAGER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_MEDIA_AUDIOMANAGER_HPP_IMPL
#define J2CPP_ANDROID_MEDIA_AUDIOMANAGER_HPP_IMPL

namespace j2cpp {



android::media::AudioManager::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


void android::media::AudioManager::adjustStreamVolume(jint a0, jint a1, jint a2)
{
	return call_method<
		android::media::AudioManager::J2CPP_CLASS_NAME,
		android::media::AudioManager::J2CPP_METHOD_NAME(1),
		android::media::AudioManager::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject(), a0, a1, a2);
}

void android::media::AudioManager::adjustVolume(jint a0, jint a1)
{
	return call_method<
		android::media::AudioManager::J2CPP_CLASS_NAME,
		android::media::AudioManager::J2CPP_METHOD_NAME(2),
		android::media::AudioManager::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject(), a0, a1);
}

void android::media::AudioManager::adjustSuggestedStreamVolume(jint a0, jint a1, jint a2)
{
	return call_method<
		android::media::AudioManager::J2CPP_CLASS_NAME,
		android::media::AudioManager::J2CPP_METHOD_NAME(3),
		android::media::AudioManager::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject(), a0, a1, a2);
}

jint android::media::AudioManager::getRingerMode()
{
	return call_method<
		android::media::AudioManager::J2CPP_CLASS_NAME,
		android::media::AudioManager::J2CPP_METHOD_NAME(4),
		android::media::AudioManager::J2CPP_METHOD_SIGNATURE(4), 
		jint
	>(get_jobject());
}

jint android::media::AudioManager::getStreamMaxVolume(jint a0)
{
	return call_method<
		android::media::AudioManager::J2CPP_CLASS_NAME,
		android::media::AudioManager::J2CPP_METHOD_NAME(5),
		android::media::AudioManager::J2CPP_METHOD_SIGNATURE(5), 
		jint
	>(get_jobject(), a0);
}

jint android::media::AudioManager::getStreamVolume(jint a0)
{
	return call_method<
		android::media::AudioManager::J2CPP_CLASS_NAME,
		android::media::AudioManager::J2CPP_METHOD_NAME(6),
		android::media::AudioManager::J2CPP_METHOD_SIGNATURE(6), 
		jint
	>(get_jobject(), a0);
}

void android::media::AudioManager::setRingerMode(jint a0)
{
	return call_method<
		android::media::AudioManager::J2CPP_CLASS_NAME,
		android::media::AudioManager::J2CPP_METHOD_NAME(7),
		android::media::AudioManager::J2CPP_METHOD_SIGNATURE(7), 
		void
	>(get_jobject(), a0);
}

void android::media::AudioManager::setStreamVolume(jint a0, jint a1, jint a2)
{
	return call_method<
		android::media::AudioManager::J2CPP_CLASS_NAME,
		android::media::AudioManager::J2CPP_METHOD_NAME(8),
		android::media::AudioManager::J2CPP_METHOD_SIGNATURE(8), 
		void
	>(get_jobject(), a0, a1, a2);
}

void android::media::AudioManager::setStreamSolo(jint a0, jboolean a1)
{
	return call_method<
		android::media::AudioManager::J2CPP_CLASS_NAME,
		android::media::AudioManager::J2CPP_METHOD_NAME(9),
		android::media::AudioManager::J2CPP_METHOD_SIGNATURE(9), 
		void
	>(get_jobject(), a0, a1);
}

void android::media::AudioManager::setStreamMute(jint a0, jboolean a1)
{
	return call_method<
		android::media::AudioManager::J2CPP_CLASS_NAME,
		android::media::AudioManager::J2CPP_METHOD_NAME(10),
		android::media::AudioManager::J2CPP_METHOD_SIGNATURE(10), 
		void
	>(get_jobject(), a0, a1);
}

jboolean android::media::AudioManager::shouldVibrate(jint a0)
{
	return call_method<
		android::media::AudioManager::J2CPP_CLASS_NAME,
		android::media::AudioManager::J2CPP_METHOD_NAME(11),
		android::media::AudioManager::J2CPP_METHOD_SIGNATURE(11), 
		jboolean
	>(get_jobject(), a0);
}

jint android::media::AudioManager::getVibrateSetting(jint a0)
{
	return call_method<
		android::media::AudioManager::J2CPP_CLASS_NAME,
		android::media::AudioManager::J2CPP_METHOD_NAME(12),
		android::media::AudioManager::J2CPP_METHOD_SIGNATURE(12), 
		jint
	>(get_jobject(), a0);
}

void android::media::AudioManager::setVibrateSetting(jint a0, jint a1)
{
	return call_method<
		android::media::AudioManager::J2CPP_CLASS_NAME,
		android::media::AudioManager::J2CPP_METHOD_NAME(13),
		android::media::AudioManager::J2CPP_METHOD_SIGNATURE(13), 
		void
	>(get_jobject(), a0, a1);
}

void android::media::AudioManager::setSpeakerphoneOn(jboolean a0)
{
	return call_method<
		android::media::AudioManager::J2CPP_CLASS_NAME,
		android::media::AudioManager::J2CPP_METHOD_NAME(14),
		android::media::AudioManager::J2CPP_METHOD_SIGNATURE(14), 
		void
	>(get_jobject(), a0);
}

jboolean android::media::AudioManager::isSpeakerphoneOn()
{
	return call_method<
		android::media::AudioManager::J2CPP_CLASS_NAME,
		android::media::AudioManager::J2CPP_METHOD_NAME(15),
		android::media::AudioManager::J2CPP_METHOD_SIGNATURE(15), 
		jboolean
	>(get_jobject());
}

void android::media::AudioManager::setBluetoothScoOn(jboolean a0)
{
	return call_method<
		android::media::AudioManager::J2CPP_CLASS_NAME,
		android::media::AudioManager::J2CPP_METHOD_NAME(16),
		android::media::AudioManager::J2CPP_METHOD_SIGNATURE(16), 
		void
	>(get_jobject(), a0);
}

jboolean android::media::AudioManager::isBluetoothScoOn()
{
	return call_method<
		android::media::AudioManager::J2CPP_CLASS_NAME,
		android::media::AudioManager::J2CPP_METHOD_NAME(17),
		android::media::AudioManager::J2CPP_METHOD_SIGNATURE(17), 
		jboolean
	>(get_jobject());
}

void android::media::AudioManager::setBluetoothA2dpOn(jboolean a0)
{
	return call_method<
		android::media::AudioManager::J2CPP_CLASS_NAME,
		android::media::AudioManager::J2CPP_METHOD_NAME(18),
		android::media::AudioManager::J2CPP_METHOD_SIGNATURE(18), 
		void
	>(get_jobject(), a0);
}

jboolean android::media::AudioManager::isBluetoothA2dpOn()
{
	return call_method<
		android::media::AudioManager::J2CPP_CLASS_NAME,
		android::media::AudioManager::J2CPP_METHOD_NAME(19),
		android::media::AudioManager::J2CPP_METHOD_SIGNATURE(19), 
		jboolean
	>(get_jobject());
}

void android::media::AudioManager::setMicrophoneMute(jboolean a0)
{
	return call_method<
		android::media::AudioManager::J2CPP_CLASS_NAME,
		android::media::AudioManager::J2CPP_METHOD_NAME(20),
		android::media::AudioManager::J2CPP_METHOD_SIGNATURE(20), 
		void
	>(get_jobject(), a0);
}

jboolean android::media::AudioManager::isMicrophoneMute()
{
	return call_method<
		android::media::AudioManager::J2CPP_CLASS_NAME,
		android::media::AudioManager::J2CPP_METHOD_NAME(21),
		android::media::AudioManager::J2CPP_METHOD_SIGNATURE(21), 
		jboolean
	>(get_jobject());
}

void android::media::AudioManager::setMode(jint a0)
{
	return call_method<
		android::media::AudioManager::J2CPP_CLASS_NAME,
		android::media::AudioManager::J2CPP_METHOD_NAME(22),
		android::media::AudioManager::J2CPP_METHOD_SIGNATURE(22), 
		void
	>(get_jobject(), a0);
}

jint android::media::AudioManager::getMode()
{
	return call_method<
		android::media::AudioManager::J2CPP_CLASS_NAME,
		android::media::AudioManager::J2CPP_METHOD_NAME(23),
		android::media::AudioManager::J2CPP_METHOD_SIGNATURE(23), 
		jint
	>(get_jobject());
}

void android::media::AudioManager::setRouting(jint a0, jint a1, jint a2)
{
	return call_method<
		android::media::AudioManager::J2CPP_CLASS_NAME,
		android::media::AudioManager::J2CPP_METHOD_NAME(24),
		android::media::AudioManager::J2CPP_METHOD_SIGNATURE(24), 
		void
	>(get_jobject(), a0, a1, a2);
}

jint android::media::AudioManager::getRouting(jint a0)
{
	return call_method<
		android::media::AudioManager::J2CPP_CLASS_NAME,
		android::media::AudioManager::J2CPP_METHOD_NAME(25),
		android::media::AudioManager::J2CPP_METHOD_SIGNATURE(25), 
		jint
	>(get_jobject(), a0);
}

jboolean android::media::AudioManager::isMusicActive()
{
	return call_method<
		android::media::AudioManager::J2CPP_CLASS_NAME,
		android::media::AudioManager::J2CPP_METHOD_NAME(26),
		android::media::AudioManager::J2CPP_METHOD_SIGNATURE(26), 
		jboolean
	>(get_jobject());
}

void android::media::AudioManager::playSoundEffect(jint a0)
{
	return call_method<
		android::media::AudioManager::J2CPP_CLASS_NAME,
		android::media::AudioManager::J2CPP_METHOD_NAME(27),
		android::media::AudioManager::J2CPP_METHOD_SIGNATURE(27), 
		void
	>(get_jobject(), a0);
}

void android::media::AudioManager::playSoundEffect(jint a0, jfloat a1)
{
	return call_method<
		android::media::AudioManager::J2CPP_CLASS_NAME,
		android::media::AudioManager::J2CPP_METHOD_NAME(28),
		android::media::AudioManager::J2CPP_METHOD_SIGNATURE(28), 
		void
	>(get_jobject(), a0, a1);
}

void android::media::AudioManager::loadSoundEffects()
{
	return call_method<
		android::media::AudioManager::J2CPP_CLASS_NAME,
		android::media::AudioManager::J2CPP_METHOD_NAME(29),
		android::media::AudioManager::J2CPP_METHOD_SIGNATURE(29), 
		void
	>(get_jobject());
}

void android::media::AudioManager::unloadSoundEffects()
{
	return call_method<
		android::media::AudioManager::J2CPP_CLASS_NAME,
		android::media::AudioManager::J2CPP_METHOD_NAME(30),
		android::media::AudioManager::J2CPP_METHOD_SIGNATURE(30), 
		void
	>(get_jobject());
}


static_field<
	android::media::AudioManager::J2CPP_CLASS_NAME,
	android::media::AudioManager::J2CPP_FIELD_NAME(0),
	android::media::AudioManager::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::lang::String >
> android::media::AudioManager::ACTION_AUDIO_BECOMING_NOISY;

static_field<
	android::media::AudioManager::J2CPP_CLASS_NAME,
	android::media::AudioManager::J2CPP_FIELD_NAME(1),
	android::media::AudioManager::J2CPP_FIELD_SIGNATURE(1),
	local_ref< java::lang::String >
> android::media::AudioManager::RINGER_MODE_CHANGED_ACTION;

static_field<
	android::media::AudioManager::J2CPP_CLASS_NAME,
	android::media::AudioManager::J2CPP_FIELD_NAME(2),
	android::media::AudioManager::J2CPP_FIELD_SIGNATURE(2),
	local_ref< java::lang::String >
> android::media::AudioManager::EXTRA_RINGER_MODE;

static_field<
	android::media::AudioManager::J2CPP_CLASS_NAME,
	android::media::AudioManager::J2CPP_FIELD_NAME(3),
	android::media::AudioManager::J2CPP_FIELD_SIGNATURE(3),
	local_ref< java::lang::String >
> android::media::AudioManager::VIBRATE_SETTING_CHANGED_ACTION;

static_field<
	android::media::AudioManager::J2CPP_CLASS_NAME,
	android::media::AudioManager::J2CPP_FIELD_NAME(4),
	android::media::AudioManager::J2CPP_FIELD_SIGNATURE(4),
	local_ref< java::lang::String >
> android::media::AudioManager::EXTRA_VIBRATE_SETTING;

static_field<
	android::media::AudioManager::J2CPP_CLASS_NAME,
	android::media::AudioManager::J2CPP_FIELD_NAME(5),
	android::media::AudioManager::J2CPP_FIELD_SIGNATURE(5),
	local_ref< java::lang::String >
> android::media::AudioManager::EXTRA_VIBRATE_TYPE;

static_field<
	android::media::AudioManager::J2CPP_CLASS_NAME,
	android::media::AudioManager::J2CPP_FIELD_NAME(6),
	android::media::AudioManager::J2CPP_FIELD_SIGNATURE(6),
	jint
> android::media::AudioManager::STREAM_VOICE_CALL;

static_field<
	android::media::AudioManager::J2CPP_CLASS_NAME,
	android::media::AudioManager::J2CPP_FIELD_NAME(7),
	android::media::AudioManager::J2CPP_FIELD_SIGNATURE(7),
	jint
> android::media::AudioManager::STREAM_SYSTEM;

static_field<
	android::media::AudioManager::J2CPP_CLASS_NAME,
	android::media::AudioManager::J2CPP_FIELD_NAME(8),
	android::media::AudioManager::J2CPP_FIELD_SIGNATURE(8),
	jint
> android::media::AudioManager::STREAM_RING;

static_field<
	android::media::AudioManager::J2CPP_CLASS_NAME,
	android::media::AudioManager::J2CPP_FIELD_NAME(9),
	android::media::AudioManager::J2CPP_FIELD_SIGNATURE(9),
	jint
> android::media::AudioManager::STREAM_MUSIC;

static_field<
	android::media::AudioManager::J2CPP_CLASS_NAME,
	android::media::AudioManager::J2CPP_FIELD_NAME(10),
	android::media::AudioManager::J2CPP_FIELD_SIGNATURE(10),
	jint
> android::media::AudioManager::STREAM_ALARM;

static_field<
	android::media::AudioManager::J2CPP_CLASS_NAME,
	android::media::AudioManager::J2CPP_FIELD_NAME(11),
	android::media::AudioManager::J2CPP_FIELD_SIGNATURE(11),
	jint
> android::media::AudioManager::STREAM_NOTIFICATION;

static_field<
	android::media::AudioManager::J2CPP_CLASS_NAME,
	android::media::AudioManager::J2CPP_FIELD_NAME(12),
	android::media::AudioManager::J2CPP_FIELD_SIGNATURE(12),
	jint
> android::media::AudioManager::NUM_STREAMS;

static_field<
	android::media::AudioManager::J2CPP_CLASS_NAME,
	android::media::AudioManager::J2CPP_FIELD_NAME(13),
	android::media::AudioManager::J2CPP_FIELD_SIGNATURE(13),
	jint
> android::media::AudioManager::ADJUST_RAISE;

static_field<
	android::media::AudioManager::J2CPP_CLASS_NAME,
	android::media::AudioManager::J2CPP_FIELD_NAME(14),
	android::media::AudioManager::J2CPP_FIELD_SIGNATURE(14),
	jint
> android::media::AudioManager::ADJUST_LOWER;

static_field<
	android::media::AudioManager::J2CPP_CLASS_NAME,
	android::media::AudioManager::J2CPP_FIELD_NAME(15),
	android::media::AudioManager::J2CPP_FIELD_SIGNATURE(15),
	jint
> android::media::AudioManager::ADJUST_SAME;

static_field<
	android::media::AudioManager::J2CPP_CLASS_NAME,
	android::media::AudioManager::J2CPP_FIELD_NAME(16),
	android::media::AudioManager::J2CPP_FIELD_SIGNATURE(16),
	jint
> android::media::AudioManager::FLAG_SHOW_UI;

static_field<
	android::media::AudioManager::J2CPP_CLASS_NAME,
	android::media::AudioManager::J2CPP_FIELD_NAME(17),
	android::media::AudioManager::J2CPP_FIELD_SIGNATURE(17),
	jint
> android::media::AudioManager::FLAG_ALLOW_RINGER_MODES;

static_field<
	android::media::AudioManager::J2CPP_CLASS_NAME,
	android::media::AudioManager::J2CPP_FIELD_NAME(18),
	android::media::AudioManager::J2CPP_FIELD_SIGNATURE(18),
	jint
> android::media::AudioManager::FLAG_PLAY_SOUND;

static_field<
	android::media::AudioManager::J2CPP_CLASS_NAME,
	android::media::AudioManager::J2CPP_FIELD_NAME(19),
	android::media::AudioManager::J2CPP_FIELD_SIGNATURE(19),
	jint
> android::media::AudioManager::FLAG_REMOVE_SOUND_AND_VIBRATE;

static_field<
	android::media::AudioManager::J2CPP_CLASS_NAME,
	android::media::AudioManager::J2CPP_FIELD_NAME(20),
	android::media::AudioManager::J2CPP_FIELD_SIGNATURE(20),
	jint
> android::media::AudioManager::FLAG_VIBRATE;

static_field<
	android::media::AudioManager::J2CPP_CLASS_NAME,
	android::media::AudioManager::J2CPP_FIELD_NAME(21),
	android::media::AudioManager::J2CPP_FIELD_SIGNATURE(21),
	jint
> android::media::AudioManager::RINGER_MODE_SILENT;

static_field<
	android::media::AudioManager::J2CPP_CLASS_NAME,
	android::media::AudioManager::J2CPP_FIELD_NAME(22),
	android::media::AudioManager::J2CPP_FIELD_SIGNATURE(22),
	jint
> android::media::AudioManager::RINGER_MODE_VIBRATE;

static_field<
	android::media::AudioManager::J2CPP_CLASS_NAME,
	android::media::AudioManager::J2CPP_FIELD_NAME(23),
	android::media::AudioManager::J2CPP_FIELD_SIGNATURE(23),
	jint
> android::media::AudioManager::RINGER_MODE_NORMAL;

static_field<
	android::media::AudioManager::J2CPP_CLASS_NAME,
	android::media::AudioManager::J2CPP_FIELD_NAME(24),
	android::media::AudioManager::J2CPP_FIELD_SIGNATURE(24),
	jint
> android::media::AudioManager::VIBRATE_TYPE_RINGER;

static_field<
	android::media::AudioManager::J2CPP_CLASS_NAME,
	android::media::AudioManager::J2CPP_FIELD_NAME(25),
	android::media::AudioManager::J2CPP_FIELD_SIGNATURE(25),
	jint
> android::media::AudioManager::VIBRATE_TYPE_NOTIFICATION;

static_field<
	android::media::AudioManager::J2CPP_CLASS_NAME,
	android::media::AudioManager::J2CPP_FIELD_NAME(26),
	android::media::AudioManager::J2CPP_FIELD_SIGNATURE(26),
	jint
> android::media::AudioManager::VIBRATE_SETTING_OFF;

static_field<
	android::media::AudioManager::J2CPP_CLASS_NAME,
	android::media::AudioManager::J2CPP_FIELD_NAME(27),
	android::media::AudioManager::J2CPP_FIELD_SIGNATURE(27),
	jint
> android::media::AudioManager::VIBRATE_SETTING_ON;

static_field<
	android::media::AudioManager::J2CPP_CLASS_NAME,
	android::media::AudioManager::J2CPP_FIELD_NAME(28),
	android::media::AudioManager::J2CPP_FIELD_SIGNATURE(28),
	jint
> android::media::AudioManager::VIBRATE_SETTING_ONLY_SILENT;

static_field<
	android::media::AudioManager::J2CPP_CLASS_NAME,
	android::media::AudioManager::J2CPP_FIELD_NAME(29),
	android::media::AudioManager::J2CPP_FIELD_SIGNATURE(29),
	jint
> android::media::AudioManager::USE_DEFAULT_STREAM_TYPE;

static_field<
	android::media::AudioManager::J2CPP_CLASS_NAME,
	android::media::AudioManager::J2CPP_FIELD_NAME(30),
	android::media::AudioManager::J2CPP_FIELD_SIGNATURE(30),
	jint
> android::media::AudioManager::MODE_INVALID;

static_field<
	android::media::AudioManager::J2CPP_CLASS_NAME,
	android::media::AudioManager::J2CPP_FIELD_NAME(31),
	android::media::AudioManager::J2CPP_FIELD_SIGNATURE(31),
	jint
> android::media::AudioManager::MODE_CURRENT;

static_field<
	android::media::AudioManager::J2CPP_CLASS_NAME,
	android::media::AudioManager::J2CPP_FIELD_NAME(32),
	android::media::AudioManager::J2CPP_FIELD_SIGNATURE(32),
	jint
> android::media::AudioManager::MODE_NORMAL;

static_field<
	android::media::AudioManager::J2CPP_CLASS_NAME,
	android::media::AudioManager::J2CPP_FIELD_NAME(33),
	android::media::AudioManager::J2CPP_FIELD_SIGNATURE(33),
	jint
> android::media::AudioManager::MODE_RINGTONE;

static_field<
	android::media::AudioManager::J2CPP_CLASS_NAME,
	android::media::AudioManager::J2CPP_FIELD_NAME(34),
	android::media::AudioManager::J2CPP_FIELD_SIGNATURE(34),
	jint
> android::media::AudioManager::MODE_IN_CALL;

static_field<
	android::media::AudioManager::J2CPP_CLASS_NAME,
	android::media::AudioManager::J2CPP_FIELD_NAME(35),
	android::media::AudioManager::J2CPP_FIELD_SIGNATURE(35),
	jint
> android::media::AudioManager::ROUTE_EARPIECE;

static_field<
	android::media::AudioManager::J2CPP_CLASS_NAME,
	android::media::AudioManager::J2CPP_FIELD_NAME(36),
	android::media::AudioManager::J2CPP_FIELD_SIGNATURE(36),
	jint
> android::media::AudioManager::ROUTE_SPEAKER;

static_field<
	android::media::AudioManager::J2CPP_CLASS_NAME,
	android::media::AudioManager::J2CPP_FIELD_NAME(37),
	android::media::AudioManager::J2CPP_FIELD_SIGNATURE(37),
	jint
> android::media::AudioManager::ROUTE_BLUETOOTH;

static_field<
	android::media::AudioManager::J2CPP_CLASS_NAME,
	android::media::AudioManager::J2CPP_FIELD_NAME(38),
	android::media::AudioManager::J2CPP_FIELD_SIGNATURE(38),
	jint
> android::media::AudioManager::ROUTE_BLUETOOTH_SCO;

static_field<
	android::media::AudioManager::J2CPP_CLASS_NAME,
	android::media::AudioManager::J2CPP_FIELD_NAME(39),
	android::media::AudioManager::J2CPP_FIELD_SIGNATURE(39),
	jint
> android::media::AudioManager::ROUTE_HEADSET;

static_field<
	android::media::AudioManager::J2CPP_CLASS_NAME,
	android::media::AudioManager::J2CPP_FIELD_NAME(40),
	android::media::AudioManager::J2CPP_FIELD_SIGNATURE(40),
	jint
> android::media::AudioManager::ROUTE_BLUETOOTH_A2DP;

static_field<
	android::media::AudioManager::J2CPP_CLASS_NAME,
	android::media::AudioManager::J2CPP_FIELD_NAME(41),
	android::media::AudioManager::J2CPP_FIELD_SIGNATURE(41),
	jint
> android::media::AudioManager::ROUTE_ALL;

static_field<
	android::media::AudioManager::J2CPP_CLASS_NAME,
	android::media::AudioManager::J2CPP_FIELD_NAME(42),
	android::media::AudioManager::J2CPP_FIELD_SIGNATURE(42),
	jint
> android::media::AudioManager::FX_KEY_CLICK;

static_field<
	android::media::AudioManager::J2CPP_CLASS_NAME,
	android::media::AudioManager::J2CPP_FIELD_NAME(43),
	android::media::AudioManager::J2CPP_FIELD_SIGNATURE(43),
	jint
> android::media::AudioManager::FX_FOCUS_NAVIGATION_UP;

static_field<
	android::media::AudioManager::J2CPP_CLASS_NAME,
	android::media::AudioManager::J2CPP_FIELD_NAME(44),
	android::media::AudioManager::J2CPP_FIELD_SIGNATURE(44),
	jint
> android::media::AudioManager::FX_FOCUS_NAVIGATION_DOWN;

static_field<
	android::media::AudioManager::J2CPP_CLASS_NAME,
	android::media::AudioManager::J2CPP_FIELD_NAME(45),
	android::media::AudioManager::J2CPP_FIELD_SIGNATURE(45),
	jint
> android::media::AudioManager::FX_FOCUS_NAVIGATION_LEFT;

static_field<
	android::media::AudioManager::J2CPP_CLASS_NAME,
	android::media::AudioManager::J2CPP_FIELD_NAME(46),
	android::media::AudioManager::J2CPP_FIELD_SIGNATURE(46),
	jint
> android::media::AudioManager::FX_FOCUS_NAVIGATION_RIGHT;

static_field<
	android::media::AudioManager::J2CPP_CLASS_NAME,
	android::media::AudioManager::J2CPP_FIELD_NAME(47),
	android::media::AudioManager::J2CPP_FIELD_SIGNATURE(47),
	jint
> android::media::AudioManager::FX_KEYPRESS_STANDARD;

static_field<
	android::media::AudioManager::J2CPP_CLASS_NAME,
	android::media::AudioManager::J2CPP_FIELD_NAME(48),
	android::media::AudioManager::J2CPP_FIELD_SIGNATURE(48),
	jint
> android::media::AudioManager::FX_KEYPRESS_SPACEBAR;

static_field<
	android::media::AudioManager::J2CPP_CLASS_NAME,
	android::media::AudioManager::J2CPP_FIELD_NAME(49),
	android::media::AudioManager::J2CPP_FIELD_SIGNATURE(49),
	jint
> android::media::AudioManager::FX_KEYPRESS_DELETE;

static_field<
	android::media::AudioManager::J2CPP_CLASS_NAME,
	android::media::AudioManager::J2CPP_FIELD_NAME(50),
	android::media::AudioManager::J2CPP_FIELD_SIGNATURE(50),
	jint
> android::media::AudioManager::FX_KEYPRESS_RETURN;


J2CPP_DEFINE_CLASS(android::media::AudioManager,"android/media/AudioManager")
J2CPP_DEFINE_METHOD(android::media::AudioManager,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::media::AudioManager,1,"adjustStreamVolume","(III)V")
J2CPP_DEFINE_METHOD(android::media::AudioManager,2,"adjustVolume","(II)V")
J2CPP_DEFINE_METHOD(android::media::AudioManager,3,"adjustSuggestedStreamVolume","(III)V")
J2CPP_DEFINE_METHOD(android::media::AudioManager,4,"getRingerMode","()I")
J2CPP_DEFINE_METHOD(android::media::AudioManager,5,"getStreamMaxVolume","(I)I")
J2CPP_DEFINE_METHOD(android::media::AudioManager,6,"getStreamVolume","(I)I")
J2CPP_DEFINE_METHOD(android::media::AudioManager,7,"setRingerMode","(I)V")
J2CPP_DEFINE_METHOD(android::media::AudioManager,8,"setStreamVolume","(III)V")
J2CPP_DEFINE_METHOD(android::media::AudioManager,9,"setStreamSolo","(IZ)V")
J2CPP_DEFINE_METHOD(android::media::AudioManager,10,"setStreamMute","(IZ)V")
J2CPP_DEFINE_METHOD(android::media::AudioManager,11,"shouldVibrate","(I)Z")
J2CPP_DEFINE_METHOD(android::media::AudioManager,12,"getVibrateSetting","(I)I")
J2CPP_DEFINE_METHOD(android::media::AudioManager,13,"setVibrateSetting","(II)V")
J2CPP_DEFINE_METHOD(android::media::AudioManager,14,"setSpeakerphoneOn","(Z)V")
J2CPP_DEFINE_METHOD(android::media::AudioManager,15,"isSpeakerphoneOn","()Z")
J2CPP_DEFINE_METHOD(android::media::AudioManager,16,"setBluetoothScoOn","(Z)V")
J2CPP_DEFINE_METHOD(android::media::AudioManager,17,"isBluetoothScoOn","()Z")
J2CPP_DEFINE_METHOD(android::media::AudioManager,18,"setBluetoothA2dpOn","(Z)V")
J2CPP_DEFINE_METHOD(android::media::AudioManager,19,"isBluetoothA2dpOn","()Z")
J2CPP_DEFINE_METHOD(android::media::AudioManager,20,"setMicrophoneMute","(Z)V")
J2CPP_DEFINE_METHOD(android::media::AudioManager,21,"isMicrophoneMute","()Z")
J2CPP_DEFINE_METHOD(android::media::AudioManager,22,"setMode","(I)V")
J2CPP_DEFINE_METHOD(android::media::AudioManager,23,"getMode","()I")
J2CPP_DEFINE_METHOD(android::media::AudioManager,24,"setRouting","(III)V")
J2CPP_DEFINE_METHOD(android::media::AudioManager,25,"getRouting","(I)I")
J2CPP_DEFINE_METHOD(android::media::AudioManager,26,"isMusicActive","()Z")
J2CPP_DEFINE_METHOD(android::media::AudioManager,27,"playSoundEffect","(I)V")
J2CPP_DEFINE_METHOD(android::media::AudioManager,28,"playSoundEffect","(IF)V")
J2CPP_DEFINE_METHOD(android::media::AudioManager,29,"loadSoundEffects","()V")
J2CPP_DEFINE_METHOD(android::media::AudioManager,30,"unloadSoundEffects","()V")
J2CPP_DEFINE_FIELD(android::media::AudioManager,0,"ACTION_AUDIO_BECOMING_NOISY","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::media::AudioManager,1,"RINGER_MODE_CHANGED_ACTION","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::media::AudioManager,2,"EXTRA_RINGER_MODE","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::media::AudioManager,3,"VIBRATE_SETTING_CHANGED_ACTION","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::media::AudioManager,4,"EXTRA_VIBRATE_SETTING","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::media::AudioManager,5,"EXTRA_VIBRATE_TYPE","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::media::AudioManager,6,"STREAM_VOICE_CALL","I")
J2CPP_DEFINE_FIELD(android::media::AudioManager,7,"STREAM_SYSTEM","I")
J2CPP_DEFINE_FIELD(android::media::AudioManager,8,"STREAM_RING","I")
J2CPP_DEFINE_FIELD(android::media::AudioManager,9,"STREAM_MUSIC","I")
J2CPP_DEFINE_FIELD(android::media::AudioManager,10,"STREAM_ALARM","I")
J2CPP_DEFINE_FIELD(android::media::AudioManager,11,"STREAM_NOTIFICATION","I")
J2CPP_DEFINE_FIELD(android::media::AudioManager,12,"NUM_STREAMS","I")
J2CPP_DEFINE_FIELD(android::media::AudioManager,13,"ADJUST_RAISE","I")
J2CPP_DEFINE_FIELD(android::media::AudioManager,14,"ADJUST_LOWER","I")
J2CPP_DEFINE_FIELD(android::media::AudioManager,15,"ADJUST_SAME","I")
J2CPP_DEFINE_FIELD(android::media::AudioManager,16,"FLAG_SHOW_UI","I")
J2CPP_DEFINE_FIELD(android::media::AudioManager,17,"FLAG_ALLOW_RINGER_MODES","I")
J2CPP_DEFINE_FIELD(android::media::AudioManager,18,"FLAG_PLAY_SOUND","I")
J2CPP_DEFINE_FIELD(android::media::AudioManager,19,"FLAG_REMOVE_SOUND_AND_VIBRATE","I")
J2CPP_DEFINE_FIELD(android::media::AudioManager,20,"FLAG_VIBRATE","I")
J2CPP_DEFINE_FIELD(android::media::AudioManager,21,"RINGER_MODE_SILENT","I")
J2CPP_DEFINE_FIELD(android::media::AudioManager,22,"RINGER_MODE_VIBRATE","I")
J2CPP_DEFINE_FIELD(android::media::AudioManager,23,"RINGER_MODE_NORMAL","I")
J2CPP_DEFINE_FIELD(android::media::AudioManager,24,"VIBRATE_TYPE_RINGER","I")
J2CPP_DEFINE_FIELD(android::media::AudioManager,25,"VIBRATE_TYPE_NOTIFICATION","I")
J2CPP_DEFINE_FIELD(android::media::AudioManager,26,"VIBRATE_SETTING_OFF","I")
J2CPP_DEFINE_FIELD(android::media::AudioManager,27,"VIBRATE_SETTING_ON","I")
J2CPP_DEFINE_FIELD(android::media::AudioManager,28,"VIBRATE_SETTING_ONLY_SILENT","I")
J2CPP_DEFINE_FIELD(android::media::AudioManager,29,"USE_DEFAULT_STREAM_TYPE","I")
J2CPP_DEFINE_FIELD(android::media::AudioManager,30,"MODE_INVALID","I")
J2CPP_DEFINE_FIELD(android::media::AudioManager,31,"MODE_CURRENT","I")
J2CPP_DEFINE_FIELD(android::media::AudioManager,32,"MODE_NORMAL","I")
J2CPP_DEFINE_FIELD(android::media::AudioManager,33,"MODE_RINGTONE","I")
J2CPP_DEFINE_FIELD(android::media::AudioManager,34,"MODE_IN_CALL","I")
J2CPP_DEFINE_FIELD(android::media::AudioManager,35,"ROUTE_EARPIECE","I")
J2CPP_DEFINE_FIELD(android::media::AudioManager,36,"ROUTE_SPEAKER","I")
J2CPP_DEFINE_FIELD(android::media::AudioManager,37,"ROUTE_BLUETOOTH","I")
J2CPP_DEFINE_FIELD(android::media::AudioManager,38,"ROUTE_BLUETOOTH_SCO","I")
J2CPP_DEFINE_FIELD(android::media::AudioManager,39,"ROUTE_HEADSET","I")
J2CPP_DEFINE_FIELD(android::media::AudioManager,40,"ROUTE_BLUETOOTH_A2DP","I")
J2CPP_DEFINE_FIELD(android::media::AudioManager,41,"ROUTE_ALL","I")
J2CPP_DEFINE_FIELD(android::media::AudioManager,42,"FX_KEY_CLICK","I")
J2CPP_DEFINE_FIELD(android::media::AudioManager,43,"FX_FOCUS_NAVIGATION_UP","I")
J2CPP_DEFINE_FIELD(android::media::AudioManager,44,"FX_FOCUS_NAVIGATION_DOWN","I")
J2CPP_DEFINE_FIELD(android::media::AudioManager,45,"FX_FOCUS_NAVIGATION_LEFT","I")
J2CPP_DEFINE_FIELD(android::media::AudioManager,46,"FX_FOCUS_NAVIGATION_RIGHT","I")
J2CPP_DEFINE_FIELD(android::media::AudioManager,47,"FX_KEYPRESS_STANDARD","I")
J2CPP_DEFINE_FIELD(android::media::AudioManager,48,"FX_KEYPRESS_SPACEBAR","I")
J2CPP_DEFINE_FIELD(android::media::AudioManager,49,"FX_KEYPRESS_DELETE","I")
J2CPP_DEFINE_FIELD(android::media::AudioManager,50,"FX_KEYPRESS_RETURN","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_MEDIA_AUDIOMANAGER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
