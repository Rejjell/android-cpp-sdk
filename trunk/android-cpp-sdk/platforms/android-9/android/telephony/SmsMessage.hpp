/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.telephony.SmsMessage
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TELEPHONY_SMSMESSAGE_HPP_DECL
#define J2CPP_ANDROID_TELEPHONY_SMSMESSAGE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace java { namespace lang { class Comparable; } } }
namespace j2cpp { namespace java { namespace lang { class Enum; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace android { namespace telephony { namespace SmsMessage_ { class SubmitPdu; } } } }
namespace j2cpp { namespace android { namespace telephony { namespace SmsMessage_ { class MessageClass; } } } }


#include <android/telephony/SmsMessage.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Enum.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace telephony {

	class SmsMessage;
	namespace SmsMessage_ {

		class SubmitPdu;
		class SubmitPdu
			: public object<SubmitPdu>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)
			J2CPP_DECLARE_FIELD(0)
			J2CPP_DECLARE_FIELD(1)

			explicit SubmitPdu(jobject jobj)
			: object<SubmitPdu>(jobj)
			, encodedScAddress(jobj)
			, encodedMessage(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			local_ref< java::lang::String > toString();

			field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< array<jbyte,1> > > encodedScAddress;
			field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< array<jbyte,1> > > encodedMessage;
		}; //class SubmitPdu

		class MessageClass;
		class MessageClass
			: public object<MessageClass>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)
			J2CPP_DECLARE_METHOD(2)
			J2CPP_DECLARE_METHOD(3)
			J2CPP_DECLARE_FIELD(0)
			J2CPP_DECLARE_FIELD(1)
			J2CPP_DECLARE_FIELD(2)
			J2CPP_DECLARE_FIELD(3)
			J2CPP_DECLARE_FIELD(4)
			J2CPP_DECLARE_FIELD(5)

			explicit MessageClass(jobject jobj)
			: object<MessageClass>(jobj)
			{
			}

			operator local_ref<java::lang::Comparable>() const;
			operator local_ref<java::lang::Enum>() const;
			operator local_ref<java::lang::Object>() const;
			operator local_ref<java::io::Serializable>() const;


			static local_ref< array< local_ref< android::telephony::SmsMessage_::MessageClass >, 1> > values();
			static local_ref< android::telephony::SmsMessage_::MessageClass > valueOf(local_ref< java::lang::String >  const&);

			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< android::telephony::SmsMessage_::MessageClass > > CLASS_0;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< android::telephony::SmsMessage_::MessageClass > > CLASS_1;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< android::telephony::SmsMessage_::MessageClass > > CLASS_2;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), local_ref< android::telephony::SmsMessage_::MessageClass > > CLASS_3;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), local_ref< android::telephony::SmsMessage_::MessageClass > > UNKNOWN;
		}; //class MessageClass

	} //namespace SmsMessage_

	class SmsMessage
		: public object<SmsMessage>
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
		J2CPP_DECLARE_METHOD(31)
		J2CPP_DECLARE_METHOD(32)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)
		J2CPP_DECLARE_FIELD(6)
		J2CPP_DECLARE_FIELD(7)

		typedef SmsMessage_::SubmitPdu SubmitPdu;
		typedef SmsMessage_::MessageClass MessageClass;

		explicit SmsMessage(jobject jobj)
		: object<SmsMessage>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		static local_ref< android::telephony::SmsMessage > createFromPdu(local_ref< array<jbyte,1> >  const&);
		static jint getTPLayerLengthForPDU(local_ref< java::lang::String >  const&);
		static local_ref< array<jint,1> > calculateLength(local_ref< java::lang::CharSequence >  const&, jboolean);
		static local_ref< array<jint,1> > calculateLength(local_ref< java::lang::String >  const&, jboolean);
		static local_ref< android::telephony::SmsMessage_::SubmitPdu > getSubmitPdu(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&, jboolean);
		static local_ref< android::telephony::SmsMessage_::SubmitPdu > getSubmitPdu(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&, jshort, local_ref< array<jbyte,1> >  const&, jboolean);
		local_ref< java::lang::String > getServiceCenterAddress();
		local_ref< java::lang::String > getOriginatingAddress();
		local_ref< java::lang::String > getDisplayOriginatingAddress();
		local_ref< java::lang::String > getMessageBody();
		local_ref< android::telephony::SmsMessage_::MessageClass > getMessageClass();
		local_ref< java::lang::String > getDisplayMessageBody();
		local_ref< java::lang::String > getPseudoSubject();
		jlong getTimestampMillis();
		jboolean isEmail();
		local_ref< java::lang::String > getEmailBody();
		local_ref< java::lang::String > getEmailFrom();
		jint getProtocolIdentifier();
		jboolean isReplace();
		jboolean isCphsMwiMessage();
		jboolean isMWIClearMessage();
		jboolean isMWISetMessage();
		jboolean isMwiDontStore();
		local_ref< array<jbyte,1> > getUserData();
		local_ref< array<jbyte,1> > getPdu();
		jint getStatusOnSim();
		jint getStatusOnIcc();
		jint getIndexOnSim();
		jint getIndexOnIcc();
		jint getStatus();
		jboolean isStatusReportMessage();
		jboolean isReplyPathPresent();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > ENCODING_UNKNOWN;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > ENCODING_7BIT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jint > ENCODING_8BIT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), jint > ENCODING_16BIT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), jint > MAX_USER_DATA_BYTES;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), jint > MAX_USER_DATA_BYTES_WITH_HEADER;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), jint > MAX_USER_DATA_SEPTETS;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), jint > MAX_USER_DATA_SEPTETS_WITH_HEADER;
	}; //class SmsMessage

} //namespace telephony
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_TELEPHONY_SMSMESSAGE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TELEPHONY_SMSMESSAGE_HPP_IMPL
#define J2CPP_ANDROID_TELEPHONY_SMSMESSAGE_HPP_IMPL

namespace j2cpp {




android::telephony::SmsMessage_::SubmitPdu::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


local_ref< java::lang::String > android::telephony::SmsMessage_::SubmitPdu::toString()
{
	return call_method<
		android::telephony::SmsMessage_::SubmitPdu::J2CPP_CLASS_NAME,
		android::telephony::SmsMessage_::SubmitPdu::J2CPP_METHOD_NAME(1),
		android::telephony::SmsMessage_::SubmitPdu::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::String >
	>(get_jobject());
}



J2CPP_DEFINE_CLASS(android::telephony::SmsMessage_::SubmitPdu,"android/telephony/SmsMessage$SubmitPdu")
J2CPP_DEFINE_METHOD(android::telephony::SmsMessage_::SubmitPdu,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::telephony::SmsMessage_::SubmitPdu,1,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::telephony::SmsMessage_::SubmitPdu,0,"encodedScAddress","[B")
J2CPP_DEFINE_FIELD(android::telephony::SmsMessage_::SubmitPdu,1,"encodedMessage","[B")


android::telephony::SmsMessage_::MessageClass::operator local_ref<java::lang::Comparable>() const
{
	return local_ref<java::lang::Comparable>(get_jobject());
}

android::telephony::SmsMessage_::MessageClass::operator local_ref<java::lang::Enum>() const
{
	return local_ref<java::lang::Enum>(get_jobject());
}

android::telephony::SmsMessage_::MessageClass::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::telephony::SmsMessage_::MessageClass::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}

local_ref< array< local_ref< android::telephony::SmsMessage_::MessageClass >, 1> > android::telephony::SmsMessage_::MessageClass::values()
{
	return call_static_method<
		android::telephony::SmsMessage_::MessageClass::J2CPP_CLASS_NAME,
		android::telephony::SmsMessage_::MessageClass::J2CPP_METHOD_NAME(0),
		android::telephony::SmsMessage_::MessageClass::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< array< local_ref< android::telephony::SmsMessage_::MessageClass >, 1> >
	>();
}

local_ref< android::telephony::SmsMessage_::MessageClass > android::telephony::SmsMessage_::MessageClass::valueOf(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		android::telephony::SmsMessage_::MessageClass::J2CPP_CLASS_NAME,
		android::telephony::SmsMessage_::MessageClass::J2CPP_METHOD_NAME(1),
		android::telephony::SmsMessage_::MessageClass::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< android::telephony::SmsMessage_::MessageClass >
	>(a0);
}




static_field<
	android::telephony::SmsMessage_::MessageClass::J2CPP_CLASS_NAME,
	android::telephony::SmsMessage_::MessageClass::J2CPP_FIELD_NAME(0),
	android::telephony::SmsMessage_::MessageClass::J2CPP_FIELD_SIGNATURE(0),
	local_ref< android::telephony::SmsMessage_::MessageClass >
> android::telephony::SmsMessage_::MessageClass::CLASS_0;

static_field<
	android::telephony::SmsMessage_::MessageClass::J2CPP_CLASS_NAME,
	android::telephony::SmsMessage_::MessageClass::J2CPP_FIELD_NAME(1),
	android::telephony::SmsMessage_::MessageClass::J2CPP_FIELD_SIGNATURE(1),
	local_ref< android::telephony::SmsMessage_::MessageClass >
> android::telephony::SmsMessage_::MessageClass::CLASS_1;

static_field<
	android::telephony::SmsMessage_::MessageClass::J2CPP_CLASS_NAME,
	android::telephony::SmsMessage_::MessageClass::J2CPP_FIELD_NAME(2),
	android::telephony::SmsMessage_::MessageClass::J2CPP_FIELD_SIGNATURE(2),
	local_ref< android::telephony::SmsMessage_::MessageClass >
> android::telephony::SmsMessage_::MessageClass::CLASS_2;

static_field<
	android::telephony::SmsMessage_::MessageClass::J2CPP_CLASS_NAME,
	android::telephony::SmsMessage_::MessageClass::J2CPP_FIELD_NAME(3),
	android::telephony::SmsMessage_::MessageClass::J2CPP_FIELD_SIGNATURE(3),
	local_ref< android::telephony::SmsMessage_::MessageClass >
> android::telephony::SmsMessage_::MessageClass::CLASS_3;

static_field<
	android::telephony::SmsMessage_::MessageClass::J2CPP_CLASS_NAME,
	android::telephony::SmsMessage_::MessageClass::J2CPP_FIELD_NAME(4),
	android::telephony::SmsMessage_::MessageClass::J2CPP_FIELD_SIGNATURE(4),
	local_ref< android::telephony::SmsMessage_::MessageClass >
> android::telephony::SmsMessage_::MessageClass::UNKNOWN;


J2CPP_DEFINE_CLASS(android::telephony::SmsMessage_::MessageClass,"android/telephony/SmsMessage$MessageClass")
J2CPP_DEFINE_METHOD(android::telephony::SmsMessage_::MessageClass,0,"values","()[android.telephony.SmsMessage.MessageClass")
J2CPP_DEFINE_METHOD(android::telephony::SmsMessage_::MessageClass,1,"valueOf","(Ljava/lang/String;)Landroid/telephony/SmsMessage$MessageClass;")
J2CPP_DEFINE_METHOD(android::telephony::SmsMessage_::MessageClass,2,"<init>","(Ljava/lang/String;I)V")
J2CPP_DEFINE_METHOD(android::telephony::SmsMessage_::MessageClass,3,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::telephony::SmsMessage_::MessageClass,0,"CLASS_0","Landroid/telephony/SmsMessage$MessageClass;")
J2CPP_DEFINE_FIELD(android::telephony::SmsMessage_::MessageClass,1,"CLASS_1","Landroid/telephony/SmsMessage$MessageClass;")
J2CPP_DEFINE_FIELD(android::telephony::SmsMessage_::MessageClass,2,"CLASS_2","Landroid/telephony/SmsMessage$MessageClass;")
J2CPP_DEFINE_FIELD(android::telephony::SmsMessage_::MessageClass,3,"CLASS_3","Landroid/telephony/SmsMessage$MessageClass;")
J2CPP_DEFINE_FIELD(android::telephony::SmsMessage_::MessageClass,4,"UNKNOWN","Landroid/telephony/SmsMessage$MessageClass;")
J2CPP_DEFINE_FIELD(android::telephony::SmsMessage_::MessageClass,5,"$VALUES","[android.telephony.SmsMessage.MessageClass")



android::telephony::SmsMessage::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


local_ref< android::telephony::SmsMessage > android::telephony::SmsMessage::createFromPdu(local_ref< array<jbyte,1> > const &a0)
{
	return call_static_method<
		android::telephony::SmsMessage::J2CPP_CLASS_NAME,
		android::telephony::SmsMessage::J2CPP_METHOD_NAME(1),
		android::telephony::SmsMessage::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< android::telephony::SmsMessage >
	>(a0);
}

jint android::telephony::SmsMessage::getTPLayerLengthForPDU(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		android::telephony::SmsMessage::J2CPP_CLASS_NAME,
		android::telephony::SmsMessage::J2CPP_METHOD_NAME(2),
		android::telephony::SmsMessage::J2CPP_METHOD_SIGNATURE(2), 
		jint
	>(a0);
}

local_ref< array<jint,1> > android::telephony::SmsMessage::calculateLength(local_ref< java::lang::CharSequence > const &a0, jboolean a1)
{
	return call_static_method<
		android::telephony::SmsMessage::J2CPP_CLASS_NAME,
		android::telephony::SmsMessage::J2CPP_METHOD_NAME(3),
		android::telephony::SmsMessage::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< array<jint,1> >
	>(a0, a1);
}

local_ref< array<jint,1> > android::telephony::SmsMessage::calculateLength(local_ref< java::lang::String > const &a0, jboolean a1)
{
	return call_static_method<
		android::telephony::SmsMessage::J2CPP_CLASS_NAME,
		android::telephony::SmsMessage::J2CPP_METHOD_NAME(4),
		android::telephony::SmsMessage::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< array<jint,1> >
	>(a0, a1);
}

local_ref< android::telephony::SmsMessage_::SubmitPdu > android::telephony::SmsMessage::getSubmitPdu(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::String > const &a2, jboolean a3)
{
	return call_static_method<
		android::telephony::SmsMessage::J2CPP_CLASS_NAME,
		android::telephony::SmsMessage::J2CPP_METHOD_NAME(5),
		android::telephony::SmsMessage::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< android::telephony::SmsMessage_::SubmitPdu >
	>(a0, a1, a2, a3);
}

local_ref< android::telephony::SmsMessage_::SubmitPdu > android::telephony::SmsMessage::getSubmitPdu(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, jshort a2, local_ref< array<jbyte,1> > const &a3, jboolean a4)
{
	return call_static_method<
		android::telephony::SmsMessage::J2CPP_CLASS_NAME,
		android::telephony::SmsMessage::J2CPP_METHOD_NAME(6),
		android::telephony::SmsMessage::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< android::telephony::SmsMessage_::SubmitPdu >
	>(a0, a1, a2, a3, a4);
}

local_ref< java::lang::String > android::telephony::SmsMessage::getServiceCenterAddress()
{
	return call_method<
		android::telephony::SmsMessage::J2CPP_CLASS_NAME,
		android::telephony::SmsMessage::J2CPP_METHOD_NAME(7),
		android::telephony::SmsMessage::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::lang::String > android::telephony::SmsMessage::getOriginatingAddress()
{
	return call_method<
		android::telephony::SmsMessage::J2CPP_CLASS_NAME,
		android::telephony::SmsMessage::J2CPP_METHOD_NAME(8),
		android::telephony::SmsMessage::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::lang::String > android::telephony::SmsMessage::getDisplayOriginatingAddress()
{
	return call_method<
		android::telephony::SmsMessage::J2CPP_CLASS_NAME,
		android::telephony::SmsMessage::J2CPP_METHOD_NAME(9),
		android::telephony::SmsMessage::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::lang::String > android::telephony::SmsMessage::getMessageBody()
{
	return call_method<
		android::telephony::SmsMessage::J2CPP_CLASS_NAME,
		android::telephony::SmsMessage::J2CPP_METHOD_NAME(10),
		android::telephony::SmsMessage::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< android::telephony::SmsMessage_::MessageClass > android::telephony::SmsMessage::getMessageClass()
{
	return call_method<
		android::telephony::SmsMessage::J2CPP_CLASS_NAME,
		android::telephony::SmsMessage::J2CPP_METHOD_NAME(11),
		android::telephony::SmsMessage::J2CPP_METHOD_SIGNATURE(11), 
		local_ref< android::telephony::SmsMessage_::MessageClass >
	>(get_jobject());
}

local_ref< java::lang::String > android::telephony::SmsMessage::getDisplayMessageBody()
{
	return call_method<
		android::telephony::SmsMessage::J2CPP_CLASS_NAME,
		android::telephony::SmsMessage::J2CPP_METHOD_NAME(12),
		android::telephony::SmsMessage::J2CPP_METHOD_SIGNATURE(12), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::lang::String > android::telephony::SmsMessage::getPseudoSubject()
{
	return call_method<
		android::telephony::SmsMessage::J2CPP_CLASS_NAME,
		android::telephony::SmsMessage::J2CPP_METHOD_NAME(13),
		android::telephony::SmsMessage::J2CPP_METHOD_SIGNATURE(13), 
		local_ref< java::lang::String >
	>(get_jobject());
}

jlong android::telephony::SmsMessage::getTimestampMillis()
{
	return call_method<
		android::telephony::SmsMessage::J2CPP_CLASS_NAME,
		android::telephony::SmsMessage::J2CPP_METHOD_NAME(14),
		android::telephony::SmsMessage::J2CPP_METHOD_SIGNATURE(14), 
		jlong
	>(get_jobject());
}

jboolean android::telephony::SmsMessage::isEmail()
{
	return call_method<
		android::telephony::SmsMessage::J2CPP_CLASS_NAME,
		android::telephony::SmsMessage::J2CPP_METHOD_NAME(15),
		android::telephony::SmsMessage::J2CPP_METHOD_SIGNATURE(15), 
		jboolean
	>(get_jobject());
}

local_ref< java::lang::String > android::telephony::SmsMessage::getEmailBody()
{
	return call_method<
		android::telephony::SmsMessage::J2CPP_CLASS_NAME,
		android::telephony::SmsMessage::J2CPP_METHOD_NAME(16),
		android::telephony::SmsMessage::J2CPP_METHOD_SIGNATURE(16), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::lang::String > android::telephony::SmsMessage::getEmailFrom()
{
	return call_method<
		android::telephony::SmsMessage::J2CPP_CLASS_NAME,
		android::telephony::SmsMessage::J2CPP_METHOD_NAME(17),
		android::telephony::SmsMessage::J2CPP_METHOD_SIGNATURE(17), 
		local_ref< java::lang::String >
	>(get_jobject());
}

jint android::telephony::SmsMessage::getProtocolIdentifier()
{
	return call_method<
		android::telephony::SmsMessage::J2CPP_CLASS_NAME,
		android::telephony::SmsMessage::J2CPP_METHOD_NAME(18),
		android::telephony::SmsMessage::J2CPP_METHOD_SIGNATURE(18), 
		jint
	>(get_jobject());
}

jboolean android::telephony::SmsMessage::isReplace()
{
	return call_method<
		android::telephony::SmsMessage::J2CPP_CLASS_NAME,
		android::telephony::SmsMessage::J2CPP_METHOD_NAME(19),
		android::telephony::SmsMessage::J2CPP_METHOD_SIGNATURE(19), 
		jboolean
	>(get_jobject());
}

jboolean android::telephony::SmsMessage::isCphsMwiMessage()
{
	return call_method<
		android::telephony::SmsMessage::J2CPP_CLASS_NAME,
		android::telephony::SmsMessage::J2CPP_METHOD_NAME(20),
		android::telephony::SmsMessage::J2CPP_METHOD_SIGNATURE(20), 
		jboolean
	>(get_jobject());
}

jboolean android::telephony::SmsMessage::isMWIClearMessage()
{
	return call_method<
		android::telephony::SmsMessage::J2CPP_CLASS_NAME,
		android::telephony::SmsMessage::J2CPP_METHOD_NAME(21),
		android::telephony::SmsMessage::J2CPP_METHOD_SIGNATURE(21), 
		jboolean
	>(get_jobject());
}

jboolean android::telephony::SmsMessage::isMWISetMessage()
{
	return call_method<
		android::telephony::SmsMessage::J2CPP_CLASS_NAME,
		android::telephony::SmsMessage::J2CPP_METHOD_NAME(22),
		android::telephony::SmsMessage::J2CPP_METHOD_SIGNATURE(22), 
		jboolean
	>(get_jobject());
}

jboolean android::telephony::SmsMessage::isMwiDontStore()
{
	return call_method<
		android::telephony::SmsMessage::J2CPP_CLASS_NAME,
		android::telephony::SmsMessage::J2CPP_METHOD_NAME(23),
		android::telephony::SmsMessage::J2CPP_METHOD_SIGNATURE(23), 
		jboolean
	>(get_jobject());
}

local_ref< array<jbyte,1> > android::telephony::SmsMessage::getUserData()
{
	return call_method<
		android::telephony::SmsMessage::J2CPP_CLASS_NAME,
		android::telephony::SmsMessage::J2CPP_METHOD_NAME(24),
		android::telephony::SmsMessage::J2CPP_METHOD_SIGNATURE(24), 
		local_ref< array<jbyte,1> >
	>(get_jobject());
}

local_ref< array<jbyte,1> > android::telephony::SmsMessage::getPdu()
{
	return call_method<
		android::telephony::SmsMessage::J2CPP_CLASS_NAME,
		android::telephony::SmsMessage::J2CPP_METHOD_NAME(25),
		android::telephony::SmsMessage::J2CPP_METHOD_SIGNATURE(25), 
		local_ref< array<jbyte,1> >
	>(get_jobject());
}

jint android::telephony::SmsMessage::getStatusOnSim()
{
	return call_method<
		android::telephony::SmsMessage::J2CPP_CLASS_NAME,
		android::telephony::SmsMessage::J2CPP_METHOD_NAME(26),
		android::telephony::SmsMessage::J2CPP_METHOD_SIGNATURE(26), 
		jint
	>(get_jobject());
}

jint android::telephony::SmsMessage::getStatusOnIcc()
{
	return call_method<
		android::telephony::SmsMessage::J2CPP_CLASS_NAME,
		android::telephony::SmsMessage::J2CPP_METHOD_NAME(27),
		android::telephony::SmsMessage::J2CPP_METHOD_SIGNATURE(27), 
		jint
	>(get_jobject());
}

jint android::telephony::SmsMessage::getIndexOnSim()
{
	return call_method<
		android::telephony::SmsMessage::J2CPP_CLASS_NAME,
		android::telephony::SmsMessage::J2CPP_METHOD_NAME(28),
		android::telephony::SmsMessage::J2CPP_METHOD_SIGNATURE(28), 
		jint
	>(get_jobject());
}

jint android::telephony::SmsMessage::getIndexOnIcc()
{
	return call_method<
		android::telephony::SmsMessage::J2CPP_CLASS_NAME,
		android::telephony::SmsMessage::J2CPP_METHOD_NAME(29),
		android::telephony::SmsMessage::J2CPP_METHOD_SIGNATURE(29), 
		jint
	>(get_jobject());
}

jint android::telephony::SmsMessage::getStatus()
{
	return call_method<
		android::telephony::SmsMessage::J2CPP_CLASS_NAME,
		android::telephony::SmsMessage::J2CPP_METHOD_NAME(30),
		android::telephony::SmsMessage::J2CPP_METHOD_SIGNATURE(30), 
		jint
	>(get_jobject());
}

jboolean android::telephony::SmsMessage::isStatusReportMessage()
{
	return call_method<
		android::telephony::SmsMessage::J2CPP_CLASS_NAME,
		android::telephony::SmsMessage::J2CPP_METHOD_NAME(31),
		android::telephony::SmsMessage::J2CPP_METHOD_SIGNATURE(31), 
		jboolean
	>(get_jobject());
}

jboolean android::telephony::SmsMessage::isReplyPathPresent()
{
	return call_method<
		android::telephony::SmsMessage::J2CPP_CLASS_NAME,
		android::telephony::SmsMessage::J2CPP_METHOD_NAME(32),
		android::telephony::SmsMessage::J2CPP_METHOD_SIGNATURE(32), 
		jboolean
	>(get_jobject());
}


static_field<
	android::telephony::SmsMessage::J2CPP_CLASS_NAME,
	android::telephony::SmsMessage::J2CPP_FIELD_NAME(0),
	android::telephony::SmsMessage::J2CPP_FIELD_SIGNATURE(0),
	jint
> android::telephony::SmsMessage::ENCODING_UNKNOWN;

static_field<
	android::telephony::SmsMessage::J2CPP_CLASS_NAME,
	android::telephony::SmsMessage::J2CPP_FIELD_NAME(1),
	android::telephony::SmsMessage::J2CPP_FIELD_SIGNATURE(1),
	jint
> android::telephony::SmsMessage::ENCODING_7BIT;

static_field<
	android::telephony::SmsMessage::J2CPP_CLASS_NAME,
	android::telephony::SmsMessage::J2CPP_FIELD_NAME(2),
	android::telephony::SmsMessage::J2CPP_FIELD_SIGNATURE(2),
	jint
> android::telephony::SmsMessage::ENCODING_8BIT;

static_field<
	android::telephony::SmsMessage::J2CPP_CLASS_NAME,
	android::telephony::SmsMessage::J2CPP_FIELD_NAME(3),
	android::telephony::SmsMessage::J2CPP_FIELD_SIGNATURE(3),
	jint
> android::telephony::SmsMessage::ENCODING_16BIT;

static_field<
	android::telephony::SmsMessage::J2CPP_CLASS_NAME,
	android::telephony::SmsMessage::J2CPP_FIELD_NAME(4),
	android::telephony::SmsMessage::J2CPP_FIELD_SIGNATURE(4),
	jint
> android::telephony::SmsMessage::MAX_USER_DATA_BYTES;

static_field<
	android::telephony::SmsMessage::J2CPP_CLASS_NAME,
	android::telephony::SmsMessage::J2CPP_FIELD_NAME(5),
	android::telephony::SmsMessage::J2CPP_FIELD_SIGNATURE(5),
	jint
> android::telephony::SmsMessage::MAX_USER_DATA_BYTES_WITH_HEADER;

static_field<
	android::telephony::SmsMessage::J2CPP_CLASS_NAME,
	android::telephony::SmsMessage::J2CPP_FIELD_NAME(6),
	android::telephony::SmsMessage::J2CPP_FIELD_SIGNATURE(6),
	jint
> android::telephony::SmsMessage::MAX_USER_DATA_SEPTETS;

static_field<
	android::telephony::SmsMessage::J2CPP_CLASS_NAME,
	android::telephony::SmsMessage::J2CPP_FIELD_NAME(7),
	android::telephony::SmsMessage::J2CPP_FIELD_SIGNATURE(7),
	jint
> android::telephony::SmsMessage::MAX_USER_DATA_SEPTETS_WITH_HEADER;


J2CPP_DEFINE_CLASS(android::telephony::SmsMessage,"android/telephony/SmsMessage")
J2CPP_DEFINE_METHOD(android::telephony::SmsMessage,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::telephony::SmsMessage,1,"createFromPdu","([B)Landroid/telephony/SmsMessage;")
J2CPP_DEFINE_METHOD(android::telephony::SmsMessage,2,"getTPLayerLengthForPDU","(Ljava/lang/String;)I")
J2CPP_DEFINE_METHOD(android::telephony::SmsMessage,3,"calculateLength","(Ljava/lang/CharSequence;Z)[I")
J2CPP_DEFINE_METHOD(android::telephony::SmsMessage,4,"calculateLength","(Ljava/lang/String;Z)[I")
J2CPP_DEFINE_METHOD(android::telephony::SmsMessage,5,"getSubmitPdu","(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)Landroid/telephony/SmsMessage$SubmitPdu;")
J2CPP_DEFINE_METHOD(android::telephony::SmsMessage,6,"getSubmitPdu","(Ljava/lang/String;Ljava/lang/String;S[BZ)Landroid/telephony/SmsMessage$SubmitPdu;")
J2CPP_DEFINE_METHOD(android::telephony::SmsMessage,7,"getServiceCenterAddress","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::telephony::SmsMessage,8,"getOriginatingAddress","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::telephony::SmsMessage,9,"getDisplayOriginatingAddress","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::telephony::SmsMessage,10,"getMessageBody","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::telephony::SmsMessage,11,"getMessageClass","()Landroid/telephony/SmsMessage$MessageClass;")
J2CPP_DEFINE_METHOD(android::telephony::SmsMessage,12,"getDisplayMessageBody","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::telephony::SmsMessage,13,"getPseudoSubject","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::telephony::SmsMessage,14,"getTimestampMillis","()J")
J2CPP_DEFINE_METHOD(android::telephony::SmsMessage,15,"isEmail","()Z")
J2CPP_DEFINE_METHOD(android::telephony::SmsMessage,16,"getEmailBody","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::telephony::SmsMessage,17,"getEmailFrom","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::telephony::SmsMessage,18,"getProtocolIdentifier","()I")
J2CPP_DEFINE_METHOD(android::telephony::SmsMessage,19,"isReplace","()Z")
J2CPP_DEFINE_METHOD(android::telephony::SmsMessage,20,"isCphsMwiMessage","()Z")
J2CPP_DEFINE_METHOD(android::telephony::SmsMessage,21,"isMWIClearMessage","()Z")
J2CPP_DEFINE_METHOD(android::telephony::SmsMessage,22,"isMWISetMessage","()Z")
J2CPP_DEFINE_METHOD(android::telephony::SmsMessage,23,"isMwiDontStore","()Z")
J2CPP_DEFINE_METHOD(android::telephony::SmsMessage,24,"getUserData","()[B")
J2CPP_DEFINE_METHOD(android::telephony::SmsMessage,25,"getPdu","()[B")
J2CPP_DEFINE_METHOD(android::telephony::SmsMessage,26,"getStatusOnSim","()I")
J2CPP_DEFINE_METHOD(android::telephony::SmsMessage,27,"getStatusOnIcc","()I")
J2CPP_DEFINE_METHOD(android::telephony::SmsMessage,28,"getIndexOnSim","()I")
J2CPP_DEFINE_METHOD(android::telephony::SmsMessage,29,"getIndexOnIcc","()I")
J2CPP_DEFINE_METHOD(android::telephony::SmsMessage,30,"getStatus","()I")
J2CPP_DEFINE_METHOD(android::telephony::SmsMessage,31,"isStatusReportMessage","()Z")
J2CPP_DEFINE_METHOD(android::telephony::SmsMessage,32,"isReplyPathPresent","()Z")
J2CPP_DEFINE_FIELD(android::telephony::SmsMessage,0,"ENCODING_UNKNOWN","I")
J2CPP_DEFINE_FIELD(android::telephony::SmsMessage,1,"ENCODING_7BIT","I")
J2CPP_DEFINE_FIELD(android::telephony::SmsMessage,2,"ENCODING_8BIT","I")
J2CPP_DEFINE_FIELD(android::telephony::SmsMessage,3,"ENCODING_16BIT","I")
J2CPP_DEFINE_FIELD(android::telephony::SmsMessage,4,"MAX_USER_DATA_BYTES","I")
J2CPP_DEFINE_FIELD(android::telephony::SmsMessage,5,"MAX_USER_DATA_BYTES_WITH_HEADER","I")
J2CPP_DEFINE_FIELD(android::telephony::SmsMessage,6,"MAX_USER_DATA_SEPTETS","I")
J2CPP_DEFINE_FIELD(android::telephony::SmsMessage,7,"MAX_USER_DATA_SEPTETS_WITH_HEADER","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TELEPHONY_SMSMESSAGE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
