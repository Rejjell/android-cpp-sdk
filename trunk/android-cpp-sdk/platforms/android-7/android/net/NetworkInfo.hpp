/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.net.NetworkInfo
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_NET_NETWORKINFO_HPP_DECL
#define J2CPP_ANDROID_NET_NETWORKINFO_HPP_DECL


namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Enum; } } }
namespace j2cpp { namespace java { namespace lang { class Comparable; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace android { namespace net { namespace NetworkInfo_ { class State; } } } }
namespace j2cpp { namespace android { namespace net { namespace NetworkInfo_ { class DetailedState; } } } }
namespace j2cpp { namespace android { namespace os { class Parcel; } } }
namespace j2cpp { namespace android { namespace os { class Parcelable; } } }


#include <android/net/NetworkInfo.hpp>
#include <android/os/Parcel.hpp>
#include <android/os/Parcelable.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Enum.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace net {

	class NetworkInfo;
	namespace NetworkInfo_ {

		class State;
		class State
			: public object<State>
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
			J2CPP_DECLARE_FIELD(6)

			explicit State(jobject jobj)
			: object<State>(jobj)
			{
			}

			operator local_ref<java::io::Serializable>() const;
			operator local_ref<java::lang::Object>() const;
			operator local_ref<java::lang::Enum>() const;
			operator local_ref<java::lang::Comparable>() const;


			static local_ref< array< local_ref< android::net::NetworkInfo_::State >, 1> > values();
			static local_ref< android::net::NetworkInfo_::State > valueOf(local_ref< java::lang::String >  const&);

			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< android::net::NetworkInfo_::State > > CONNECTED;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< android::net::NetworkInfo_::State > > CONNECTING;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< android::net::NetworkInfo_::State > > DISCONNECTED;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), local_ref< android::net::NetworkInfo_::State > > DISCONNECTING;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), local_ref< android::net::NetworkInfo_::State > > SUSPENDED;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), local_ref< android::net::NetworkInfo_::State > > UNKNOWN;
		}; //class State

		class DetailedState;
		class DetailedState
			: public object<DetailedState>
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
			J2CPP_DECLARE_FIELD(6)
			J2CPP_DECLARE_FIELD(7)
			J2CPP_DECLARE_FIELD(8)
			J2CPP_DECLARE_FIELD(9)
			J2CPP_DECLARE_FIELD(10)

			explicit DetailedState(jobject jobj)
			: object<DetailedState>(jobj)
			{
			}

			operator local_ref<java::io::Serializable>() const;
			operator local_ref<java::lang::Object>() const;
			operator local_ref<java::lang::Enum>() const;
			operator local_ref<java::lang::Comparable>() const;


			static local_ref< array< local_ref< android::net::NetworkInfo_::DetailedState >, 1> > values();
			static local_ref< android::net::NetworkInfo_::DetailedState > valueOf(local_ref< java::lang::String >  const&);

			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< android::net::NetworkInfo_::DetailedState > > AUTHENTICATING;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< android::net::NetworkInfo_::DetailedState > > CONNECTED;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< android::net::NetworkInfo_::DetailedState > > CONNECTING;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), local_ref< android::net::NetworkInfo_::DetailedState > > DISCONNECTED;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), local_ref< android::net::NetworkInfo_::DetailedState > > DISCONNECTING;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), local_ref< android::net::NetworkInfo_::DetailedState > > FAILED;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), local_ref< android::net::NetworkInfo_::DetailedState > > IDLE;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), local_ref< android::net::NetworkInfo_::DetailedState > > OBTAINING_IPADDR;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), local_ref< android::net::NetworkInfo_::DetailedState > > SCANNING;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(9), J2CPP_FIELD_SIGNATURE(9), local_ref< android::net::NetworkInfo_::DetailedState > > SUSPENDED;
		}; //class DetailedState

	} //namespace NetworkInfo_

	class NetworkInfo
		: public object<NetworkInfo>
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

		typedef NetworkInfo_::State State;
		typedef NetworkInfo_::DetailedState DetailedState;

		explicit NetworkInfo(jobject jobj)
		: object<NetworkInfo>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::os::Parcelable>() const;


		jint getType();
		jint getSubtype();
		local_ref< java::lang::String > getTypeName();
		local_ref< java::lang::String > getSubtypeName();
		jboolean isConnectedOrConnecting();
		jboolean isConnected();
		jboolean isAvailable();
		jboolean isFailover();
		jboolean isRoaming();
		local_ref< android::net::NetworkInfo_::State > getState();
		local_ref< android::net::NetworkInfo_::DetailedState > getDetailedState();
		local_ref< java::lang::String > getReason();
		local_ref< java::lang::String > getExtraInfo();
		local_ref< java::lang::String > toString();
		jint describeContents();
		void writeToParcel(local_ref< android::os::Parcel >  const&, jint);
	}; //class NetworkInfo

} //namespace net
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_NET_NETWORKINFO_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_NET_NETWORKINFO_HPP_IMPL
#define J2CPP_ANDROID_NET_NETWORKINFO_HPP_IMPL

namespace j2cpp {




android::net::NetworkInfo_::State::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}

android::net::NetworkInfo_::State::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::net::NetworkInfo_::State::operator local_ref<java::lang::Enum>() const
{
	return local_ref<java::lang::Enum>(get_jobject());
}

android::net::NetworkInfo_::State::operator local_ref<java::lang::Comparable>() const
{
	return local_ref<java::lang::Comparable>(get_jobject());
}

local_ref< array< local_ref< android::net::NetworkInfo_::State >, 1> > android::net::NetworkInfo_::State::values()
{
	return call_static_method<
		android::net::NetworkInfo_::State::J2CPP_CLASS_NAME,
		android::net::NetworkInfo_::State::J2CPP_METHOD_NAME(0),
		android::net::NetworkInfo_::State::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< array< local_ref< android::net::NetworkInfo_::State >, 1> >
	>();
}

local_ref< android::net::NetworkInfo_::State > android::net::NetworkInfo_::State::valueOf(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		android::net::NetworkInfo_::State::J2CPP_CLASS_NAME,
		android::net::NetworkInfo_::State::J2CPP_METHOD_NAME(1),
		android::net::NetworkInfo_::State::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< android::net::NetworkInfo_::State >
	>(a0);
}




static_field<
	android::net::NetworkInfo_::State::J2CPP_CLASS_NAME,
	android::net::NetworkInfo_::State::J2CPP_FIELD_NAME(0),
	android::net::NetworkInfo_::State::J2CPP_FIELD_SIGNATURE(0),
	local_ref< android::net::NetworkInfo_::State >
> android::net::NetworkInfo_::State::CONNECTED;

static_field<
	android::net::NetworkInfo_::State::J2CPP_CLASS_NAME,
	android::net::NetworkInfo_::State::J2CPP_FIELD_NAME(1),
	android::net::NetworkInfo_::State::J2CPP_FIELD_SIGNATURE(1),
	local_ref< android::net::NetworkInfo_::State >
> android::net::NetworkInfo_::State::CONNECTING;

static_field<
	android::net::NetworkInfo_::State::J2CPP_CLASS_NAME,
	android::net::NetworkInfo_::State::J2CPP_FIELD_NAME(2),
	android::net::NetworkInfo_::State::J2CPP_FIELD_SIGNATURE(2),
	local_ref< android::net::NetworkInfo_::State >
> android::net::NetworkInfo_::State::DISCONNECTED;

static_field<
	android::net::NetworkInfo_::State::J2CPP_CLASS_NAME,
	android::net::NetworkInfo_::State::J2CPP_FIELD_NAME(3),
	android::net::NetworkInfo_::State::J2CPP_FIELD_SIGNATURE(3),
	local_ref< android::net::NetworkInfo_::State >
> android::net::NetworkInfo_::State::DISCONNECTING;

static_field<
	android::net::NetworkInfo_::State::J2CPP_CLASS_NAME,
	android::net::NetworkInfo_::State::J2CPP_FIELD_NAME(4),
	android::net::NetworkInfo_::State::J2CPP_FIELD_SIGNATURE(4),
	local_ref< android::net::NetworkInfo_::State >
> android::net::NetworkInfo_::State::SUSPENDED;

static_field<
	android::net::NetworkInfo_::State::J2CPP_CLASS_NAME,
	android::net::NetworkInfo_::State::J2CPP_FIELD_NAME(5),
	android::net::NetworkInfo_::State::J2CPP_FIELD_SIGNATURE(5),
	local_ref< android::net::NetworkInfo_::State >
> android::net::NetworkInfo_::State::UNKNOWN;


J2CPP_DEFINE_CLASS(android::net::NetworkInfo_::State,"android/net/NetworkInfo$State")
J2CPP_DEFINE_METHOD(android::net::NetworkInfo_::State,0,"values","()[android.net.NetworkInfo.State")
J2CPP_DEFINE_METHOD(android::net::NetworkInfo_::State,1,"valueOf","(Ljava/lang/String;)Landroid/net/NetworkInfo$State;")
J2CPP_DEFINE_METHOD(android::net::NetworkInfo_::State,2,"<init>","(Ljava/lang/String;I)V")
J2CPP_DEFINE_METHOD(android::net::NetworkInfo_::State,3,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::net::NetworkInfo_::State,0,"CONNECTED","Landroid/net/NetworkInfo$State;")
J2CPP_DEFINE_FIELD(android::net::NetworkInfo_::State,1,"CONNECTING","Landroid/net/NetworkInfo$State;")
J2CPP_DEFINE_FIELD(android::net::NetworkInfo_::State,2,"DISCONNECTED","Landroid/net/NetworkInfo$State;")
J2CPP_DEFINE_FIELD(android::net::NetworkInfo_::State,3,"DISCONNECTING","Landroid/net/NetworkInfo$State;")
J2CPP_DEFINE_FIELD(android::net::NetworkInfo_::State,4,"SUSPENDED","Landroid/net/NetworkInfo$State;")
J2CPP_DEFINE_FIELD(android::net::NetworkInfo_::State,5,"UNKNOWN","Landroid/net/NetworkInfo$State;")
J2CPP_DEFINE_FIELD(android::net::NetworkInfo_::State,6,"$VALUES","[android.net.NetworkInfo.State")


android::net::NetworkInfo_::DetailedState::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}

android::net::NetworkInfo_::DetailedState::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::net::NetworkInfo_::DetailedState::operator local_ref<java::lang::Enum>() const
{
	return local_ref<java::lang::Enum>(get_jobject());
}

android::net::NetworkInfo_::DetailedState::operator local_ref<java::lang::Comparable>() const
{
	return local_ref<java::lang::Comparable>(get_jobject());
}

local_ref< array< local_ref< android::net::NetworkInfo_::DetailedState >, 1> > android::net::NetworkInfo_::DetailedState::values()
{
	return call_static_method<
		android::net::NetworkInfo_::DetailedState::J2CPP_CLASS_NAME,
		android::net::NetworkInfo_::DetailedState::J2CPP_METHOD_NAME(0),
		android::net::NetworkInfo_::DetailedState::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< array< local_ref< android::net::NetworkInfo_::DetailedState >, 1> >
	>();
}

local_ref< android::net::NetworkInfo_::DetailedState > android::net::NetworkInfo_::DetailedState::valueOf(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		android::net::NetworkInfo_::DetailedState::J2CPP_CLASS_NAME,
		android::net::NetworkInfo_::DetailedState::J2CPP_METHOD_NAME(1),
		android::net::NetworkInfo_::DetailedState::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< android::net::NetworkInfo_::DetailedState >
	>(a0);
}




static_field<
	android::net::NetworkInfo_::DetailedState::J2CPP_CLASS_NAME,
	android::net::NetworkInfo_::DetailedState::J2CPP_FIELD_NAME(0),
	android::net::NetworkInfo_::DetailedState::J2CPP_FIELD_SIGNATURE(0),
	local_ref< android::net::NetworkInfo_::DetailedState >
> android::net::NetworkInfo_::DetailedState::AUTHENTICATING;

static_field<
	android::net::NetworkInfo_::DetailedState::J2CPP_CLASS_NAME,
	android::net::NetworkInfo_::DetailedState::J2CPP_FIELD_NAME(1),
	android::net::NetworkInfo_::DetailedState::J2CPP_FIELD_SIGNATURE(1),
	local_ref< android::net::NetworkInfo_::DetailedState >
> android::net::NetworkInfo_::DetailedState::CONNECTED;

static_field<
	android::net::NetworkInfo_::DetailedState::J2CPP_CLASS_NAME,
	android::net::NetworkInfo_::DetailedState::J2CPP_FIELD_NAME(2),
	android::net::NetworkInfo_::DetailedState::J2CPP_FIELD_SIGNATURE(2),
	local_ref< android::net::NetworkInfo_::DetailedState >
> android::net::NetworkInfo_::DetailedState::CONNECTING;

static_field<
	android::net::NetworkInfo_::DetailedState::J2CPP_CLASS_NAME,
	android::net::NetworkInfo_::DetailedState::J2CPP_FIELD_NAME(3),
	android::net::NetworkInfo_::DetailedState::J2CPP_FIELD_SIGNATURE(3),
	local_ref< android::net::NetworkInfo_::DetailedState >
> android::net::NetworkInfo_::DetailedState::DISCONNECTED;

static_field<
	android::net::NetworkInfo_::DetailedState::J2CPP_CLASS_NAME,
	android::net::NetworkInfo_::DetailedState::J2CPP_FIELD_NAME(4),
	android::net::NetworkInfo_::DetailedState::J2CPP_FIELD_SIGNATURE(4),
	local_ref< android::net::NetworkInfo_::DetailedState >
> android::net::NetworkInfo_::DetailedState::DISCONNECTING;

static_field<
	android::net::NetworkInfo_::DetailedState::J2CPP_CLASS_NAME,
	android::net::NetworkInfo_::DetailedState::J2CPP_FIELD_NAME(5),
	android::net::NetworkInfo_::DetailedState::J2CPP_FIELD_SIGNATURE(5),
	local_ref< android::net::NetworkInfo_::DetailedState >
> android::net::NetworkInfo_::DetailedState::FAILED;

static_field<
	android::net::NetworkInfo_::DetailedState::J2CPP_CLASS_NAME,
	android::net::NetworkInfo_::DetailedState::J2CPP_FIELD_NAME(6),
	android::net::NetworkInfo_::DetailedState::J2CPP_FIELD_SIGNATURE(6),
	local_ref< android::net::NetworkInfo_::DetailedState >
> android::net::NetworkInfo_::DetailedState::IDLE;

static_field<
	android::net::NetworkInfo_::DetailedState::J2CPP_CLASS_NAME,
	android::net::NetworkInfo_::DetailedState::J2CPP_FIELD_NAME(7),
	android::net::NetworkInfo_::DetailedState::J2CPP_FIELD_SIGNATURE(7),
	local_ref< android::net::NetworkInfo_::DetailedState >
> android::net::NetworkInfo_::DetailedState::OBTAINING_IPADDR;

static_field<
	android::net::NetworkInfo_::DetailedState::J2CPP_CLASS_NAME,
	android::net::NetworkInfo_::DetailedState::J2CPP_FIELD_NAME(8),
	android::net::NetworkInfo_::DetailedState::J2CPP_FIELD_SIGNATURE(8),
	local_ref< android::net::NetworkInfo_::DetailedState >
> android::net::NetworkInfo_::DetailedState::SCANNING;

static_field<
	android::net::NetworkInfo_::DetailedState::J2CPP_CLASS_NAME,
	android::net::NetworkInfo_::DetailedState::J2CPP_FIELD_NAME(9),
	android::net::NetworkInfo_::DetailedState::J2CPP_FIELD_SIGNATURE(9),
	local_ref< android::net::NetworkInfo_::DetailedState >
> android::net::NetworkInfo_::DetailedState::SUSPENDED;


J2CPP_DEFINE_CLASS(android::net::NetworkInfo_::DetailedState,"android/net/NetworkInfo$DetailedState")
J2CPP_DEFINE_METHOD(android::net::NetworkInfo_::DetailedState,0,"values","()[android.net.NetworkInfo.DetailedState")
J2CPP_DEFINE_METHOD(android::net::NetworkInfo_::DetailedState,1,"valueOf","(Ljava/lang/String;)Landroid/net/NetworkInfo$DetailedState;")
J2CPP_DEFINE_METHOD(android::net::NetworkInfo_::DetailedState,2,"<init>","(Ljava/lang/String;I)V")
J2CPP_DEFINE_METHOD(android::net::NetworkInfo_::DetailedState,3,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::net::NetworkInfo_::DetailedState,0,"AUTHENTICATING","Landroid/net/NetworkInfo$DetailedState;")
J2CPP_DEFINE_FIELD(android::net::NetworkInfo_::DetailedState,1,"CONNECTED","Landroid/net/NetworkInfo$DetailedState;")
J2CPP_DEFINE_FIELD(android::net::NetworkInfo_::DetailedState,2,"CONNECTING","Landroid/net/NetworkInfo$DetailedState;")
J2CPP_DEFINE_FIELD(android::net::NetworkInfo_::DetailedState,3,"DISCONNECTED","Landroid/net/NetworkInfo$DetailedState;")
J2CPP_DEFINE_FIELD(android::net::NetworkInfo_::DetailedState,4,"DISCONNECTING","Landroid/net/NetworkInfo$DetailedState;")
J2CPP_DEFINE_FIELD(android::net::NetworkInfo_::DetailedState,5,"FAILED","Landroid/net/NetworkInfo$DetailedState;")
J2CPP_DEFINE_FIELD(android::net::NetworkInfo_::DetailedState,6,"IDLE","Landroid/net/NetworkInfo$DetailedState;")
J2CPP_DEFINE_FIELD(android::net::NetworkInfo_::DetailedState,7,"OBTAINING_IPADDR","Landroid/net/NetworkInfo$DetailedState;")
J2CPP_DEFINE_FIELD(android::net::NetworkInfo_::DetailedState,8,"SCANNING","Landroid/net/NetworkInfo$DetailedState;")
J2CPP_DEFINE_FIELD(android::net::NetworkInfo_::DetailedState,9,"SUSPENDED","Landroid/net/NetworkInfo$DetailedState;")
J2CPP_DEFINE_FIELD(android::net::NetworkInfo_::DetailedState,10,"$VALUES","[android.net.NetworkInfo.DetailedState")



android::net::NetworkInfo::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::net::NetworkInfo::operator local_ref<android::os::Parcelable>() const
{
	return local_ref<android::os::Parcelable>(get_jobject());
}


jint android::net::NetworkInfo::getType()
{
	return call_method<
		android::net::NetworkInfo::J2CPP_CLASS_NAME,
		android::net::NetworkInfo::J2CPP_METHOD_NAME(1),
		android::net::NetworkInfo::J2CPP_METHOD_SIGNATURE(1), 
		jint
	>(get_jobject());
}

jint android::net::NetworkInfo::getSubtype()
{
	return call_method<
		android::net::NetworkInfo::J2CPP_CLASS_NAME,
		android::net::NetworkInfo::J2CPP_METHOD_NAME(2),
		android::net::NetworkInfo::J2CPP_METHOD_SIGNATURE(2), 
		jint
	>(get_jobject());
}

local_ref< java::lang::String > android::net::NetworkInfo::getTypeName()
{
	return call_method<
		android::net::NetworkInfo::J2CPP_CLASS_NAME,
		android::net::NetworkInfo::J2CPP_METHOD_NAME(3),
		android::net::NetworkInfo::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::lang::String > android::net::NetworkInfo::getSubtypeName()
{
	return call_method<
		android::net::NetworkInfo::J2CPP_CLASS_NAME,
		android::net::NetworkInfo::J2CPP_METHOD_NAME(4),
		android::net::NetworkInfo::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::lang::String >
	>(get_jobject());
}

jboolean android::net::NetworkInfo::isConnectedOrConnecting()
{
	return call_method<
		android::net::NetworkInfo::J2CPP_CLASS_NAME,
		android::net::NetworkInfo::J2CPP_METHOD_NAME(5),
		android::net::NetworkInfo::J2CPP_METHOD_SIGNATURE(5), 
		jboolean
	>(get_jobject());
}

jboolean android::net::NetworkInfo::isConnected()
{
	return call_method<
		android::net::NetworkInfo::J2CPP_CLASS_NAME,
		android::net::NetworkInfo::J2CPP_METHOD_NAME(6),
		android::net::NetworkInfo::J2CPP_METHOD_SIGNATURE(6), 
		jboolean
	>(get_jobject());
}

jboolean android::net::NetworkInfo::isAvailable()
{
	return call_method<
		android::net::NetworkInfo::J2CPP_CLASS_NAME,
		android::net::NetworkInfo::J2CPP_METHOD_NAME(7),
		android::net::NetworkInfo::J2CPP_METHOD_SIGNATURE(7), 
		jboolean
	>(get_jobject());
}

jboolean android::net::NetworkInfo::isFailover()
{
	return call_method<
		android::net::NetworkInfo::J2CPP_CLASS_NAME,
		android::net::NetworkInfo::J2CPP_METHOD_NAME(8),
		android::net::NetworkInfo::J2CPP_METHOD_SIGNATURE(8), 
		jboolean
	>(get_jobject());
}

jboolean android::net::NetworkInfo::isRoaming()
{
	return call_method<
		android::net::NetworkInfo::J2CPP_CLASS_NAME,
		android::net::NetworkInfo::J2CPP_METHOD_NAME(9),
		android::net::NetworkInfo::J2CPP_METHOD_SIGNATURE(9), 
		jboolean
	>(get_jobject());
}

local_ref< android::net::NetworkInfo_::State > android::net::NetworkInfo::getState()
{
	return call_method<
		android::net::NetworkInfo::J2CPP_CLASS_NAME,
		android::net::NetworkInfo::J2CPP_METHOD_NAME(10),
		android::net::NetworkInfo::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< android::net::NetworkInfo_::State >
	>(get_jobject());
}

local_ref< android::net::NetworkInfo_::DetailedState > android::net::NetworkInfo::getDetailedState()
{
	return call_method<
		android::net::NetworkInfo::J2CPP_CLASS_NAME,
		android::net::NetworkInfo::J2CPP_METHOD_NAME(11),
		android::net::NetworkInfo::J2CPP_METHOD_SIGNATURE(11), 
		local_ref< android::net::NetworkInfo_::DetailedState >
	>(get_jobject());
}

local_ref< java::lang::String > android::net::NetworkInfo::getReason()
{
	return call_method<
		android::net::NetworkInfo::J2CPP_CLASS_NAME,
		android::net::NetworkInfo::J2CPP_METHOD_NAME(12),
		android::net::NetworkInfo::J2CPP_METHOD_SIGNATURE(12), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::lang::String > android::net::NetworkInfo::getExtraInfo()
{
	return call_method<
		android::net::NetworkInfo::J2CPP_CLASS_NAME,
		android::net::NetworkInfo::J2CPP_METHOD_NAME(13),
		android::net::NetworkInfo::J2CPP_METHOD_SIGNATURE(13), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::lang::String > android::net::NetworkInfo::toString()
{
	return call_method<
		android::net::NetworkInfo::J2CPP_CLASS_NAME,
		android::net::NetworkInfo::J2CPP_METHOD_NAME(14),
		android::net::NetworkInfo::J2CPP_METHOD_SIGNATURE(14), 
		local_ref< java::lang::String >
	>(get_jobject());
}

jint android::net::NetworkInfo::describeContents()
{
	return call_method<
		android::net::NetworkInfo::J2CPP_CLASS_NAME,
		android::net::NetworkInfo::J2CPP_METHOD_NAME(15),
		android::net::NetworkInfo::J2CPP_METHOD_SIGNATURE(15), 
		jint
	>(get_jobject());
}

void android::net::NetworkInfo::writeToParcel(local_ref< android::os::Parcel > const &a0, jint a1)
{
	return call_method<
		android::net::NetworkInfo::J2CPP_CLASS_NAME,
		android::net::NetworkInfo::J2CPP_METHOD_NAME(16),
		android::net::NetworkInfo::J2CPP_METHOD_SIGNATURE(16), 
		void
	>(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(android::net::NetworkInfo,"android/net/NetworkInfo")
J2CPP_DEFINE_METHOD(android::net::NetworkInfo,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::net::NetworkInfo,1,"getType","()I")
J2CPP_DEFINE_METHOD(android::net::NetworkInfo,2,"getSubtype","()I")
J2CPP_DEFINE_METHOD(android::net::NetworkInfo,3,"getTypeName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::net::NetworkInfo,4,"getSubtypeName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::net::NetworkInfo,5,"isConnectedOrConnecting","()Z")
J2CPP_DEFINE_METHOD(android::net::NetworkInfo,6,"isConnected","()Z")
J2CPP_DEFINE_METHOD(android::net::NetworkInfo,7,"isAvailable","()Z")
J2CPP_DEFINE_METHOD(android::net::NetworkInfo,8,"isFailover","()Z")
J2CPP_DEFINE_METHOD(android::net::NetworkInfo,9,"isRoaming","()Z")
J2CPP_DEFINE_METHOD(android::net::NetworkInfo,10,"getState","()Landroid/net/NetworkInfo$State;")
J2CPP_DEFINE_METHOD(android::net::NetworkInfo,11,"getDetailedState","()Landroid/net/NetworkInfo$DetailedState;")
J2CPP_DEFINE_METHOD(android::net::NetworkInfo,12,"getReason","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::net::NetworkInfo,13,"getExtraInfo","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::net::NetworkInfo,14,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::net::NetworkInfo,15,"describeContents","()I")
J2CPP_DEFINE_METHOD(android::net::NetworkInfo,16,"writeToParcel","(Landroid/os/Parcel;I)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_NET_NETWORKINFO_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
