/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.view.inputmethod.InputBinding
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_INPUTMETHOD_INPUTBINDING_HPP_DECL
#define J2CPP_ANDROID_VIEW_INPUTMETHOD_INPUTBINDING_HPP_DECL


namespace j2cpp { namespace android { namespace os { class Parcel; } } }
namespace j2cpp { namespace android { namespace os { class IBinder; } } }
namespace j2cpp { namespace android { namespace os { class Parcelable; } } }
namespace j2cpp { namespace android { namespace os { namespace Parcelable_ { class Creator; } } } }
namespace j2cpp { namespace android { namespace view { namespace inputmethod { class InputConnection; } } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/os/IBinder.hpp>
#include <android/os/Parcel.hpp>
#include <android/os/Parcelable.hpp>
#include <android/view/inputmethod/InputConnection.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace view { namespace inputmethod {

	class InputBinding;
	class InputBinding
		: public object<InputBinding>
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
		J2CPP_DECLARE_FIELD(0)

		explicit InputBinding(jobject jobj)
		: object<InputBinding>(jobj)
		{
		}

		operator local_ref<android::os::Parcelable>() const;
		operator local_ref<java::lang::Object>() const;


		InputBinding(local_ref< android::view::inputmethod::InputConnection > const&, local_ref< android::os::IBinder > const&, jint, jint);
		InputBinding(local_ref< android::view::inputmethod::InputConnection > const&, local_ref< android::view::inputmethod::InputBinding > const&);
		local_ref< android::view::inputmethod::InputConnection > getConnection();
		local_ref< android::os::IBinder > getConnectionToken();
		jint getUid();
		jint getPid();
		local_ref< java::lang::String > toString();
		void writeToParcel(local_ref< android::os::Parcel >  const&, jint);
		jint describeContents();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< android::os::Parcelable_::Creator > > CREATOR;
	}; //class InputBinding

} //namespace inputmethod
} //namespace view
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_INPUTMETHOD_INPUTBINDING_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_INPUTMETHOD_INPUTBINDING_HPP_IMPL
#define J2CPP_ANDROID_VIEW_INPUTMETHOD_INPUTBINDING_HPP_IMPL

namespace j2cpp {



android::view::inputmethod::InputBinding::operator local_ref<android::os::Parcelable>() const
{
	return local_ref<android::os::Parcelable>(get_jobject());
}

android::view::inputmethod::InputBinding::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::view::inputmethod::InputBinding::InputBinding(local_ref< android::view::inputmethod::InputConnection > const &a0, local_ref< android::os::IBinder > const &a1, jint a2, jint a3)
: object<android::view::inputmethod::InputBinding>(
	call_new_object<
		android::view::inputmethod::InputBinding::J2CPP_CLASS_NAME,
		android::view::inputmethod::InputBinding::J2CPP_METHOD_NAME(0),
		android::view::inputmethod::InputBinding::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1, a2, a3)
)
{
}



android::view::inputmethod::InputBinding::InputBinding(local_ref< android::view::inputmethod::InputConnection > const &a0, local_ref< android::view::inputmethod::InputBinding > const &a1)
: object<android::view::inputmethod::InputBinding>(
	call_new_object<
		android::view::inputmethod::InputBinding::J2CPP_CLASS_NAME,
		android::view::inputmethod::InputBinding::J2CPP_METHOD_NAME(1),
		android::view::inputmethod::InputBinding::J2CPP_METHOD_SIGNATURE(1)
	>(a0, a1)
)
{
}


local_ref< android::view::inputmethod::InputConnection > android::view::inputmethod::InputBinding::getConnection()
{
	return call_method<
		android::view::inputmethod::InputBinding::J2CPP_CLASS_NAME,
		android::view::inputmethod::InputBinding::J2CPP_METHOD_NAME(2),
		android::view::inputmethod::InputBinding::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< android::view::inputmethod::InputConnection >
	>(get_jobject());
}

local_ref< android::os::IBinder > android::view::inputmethod::InputBinding::getConnectionToken()
{
	return call_method<
		android::view::inputmethod::InputBinding::J2CPP_CLASS_NAME,
		android::view::inputmethod::InputBinding::J2CPP_METHOD_NAME(3),
		android::view::inputmethod::InputBinding::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< android::os::IBinder >
	>(get_jobject());
}

jint android::view::inputmethod::InputBinding::getUid()
{
	return call_method<
		android::view::inputmethod::InputBinding::J2CPP_CLASS_NAME,
		android::view::inputmethod::InputBinding::J2CPP_METHOD_NAME(4),
		android::view::inputmethod::InputBinding::J2CPP_METHOD_SIGNATURE(4), 
		jint
	>(get_jobject());
}

jint android::view::inputmethod::InputBinding::getPid()
{
	return call_method<
		android::view::inputmethod::InputBinding::J2CPP_CLASS_NAME,
		android::view::inputmethod::InputBinding::J2CPP_METHOD_NAME(5),
		android::view::inputmethod::InputBinding::J2CPP_METHOD_SIGNATURE(5), 
		jint
	>(get_jobject());
}

local_ref< java::lang::String > android::view::inputmethod::InputBinding::toString()
{
	return call_method<
		android::view::inputmethod::InputBinding::J2CPP_CLASS_NAME,
		android::view::inputmethod::InputBinding::J2CPP_METHOD_NAME(6),
		android::view::inputmethod::InputBinding::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::lang::String >
	>(get_jobject());
}

void android::view::inputmethod::InputBinding::writeToParcel(local_ref< android::os::Parcel > const &a0, jint a1)
{
	return call_method<
		android::view::inputmethod::InputBinding::J2CPP_CLASS_NAME,
		android::view::inputmethod::InputBinding::J2CPP_METHOD_NAME(7),
		android::view::inputmethod::InputBinding::J2CPP_METHOD_SIGNATURE(7), 
		void
	>(get_jobject(), a0, a1);
}

jint android::view::inputmethod::InputBinding::describeContents()
{
	return call_method<
		android::view::inputmethod::InputBinding::J2CPP_CLASS_NAME,
		android::view::inputmethod::InputBinding::J2CPP_METHOD_NAME(8),
		android::view::inputmethod::InputBinding::J2CPP_METHOD_SIGNATURE(8), 
		jint
	>(get_jobject());
}



static_field<
	android::view::inputmethod::InputBinding::J2CPP_CLASS_NAME,
	android::view::inputmethod::InputBinding::J2CPP_FIELD_NAME(0),
	android::view::inputmethod::InputBinding::J2CPP_FIELD_SIGNATURE(0),
	local_ref< android::os::Parcelable_::Creator >
> android::view::inputmethod::InputBinding::CREATOR;


J2CPP_DEFINE_CLASS(android::view::inputmethod::InputBinding,"android/view/inputmethod/InputBinding")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputBinding,0,"<init>","(Landroid/view/inputmethod/InputConnection;Landroid/os/IBinder;II)V")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputBinding,1,"<init>","(Landroid/view/inputmethod/InputConnection;Landroid/view/inputmethod/InputBinding;)V")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputBinding,2,"getConnection","()Landroid/view/inputmethod/InputConnection;")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputBinding,3,"getConnectionToken","()Landroid/os/IBinder;")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputBinding,4,"getUid","()I")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputBinding,5,"getPid","()I")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputBinding,6,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputBinding,7,"writeToParcel","(Landroid/os/Parcel;I)V")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputBinding,8,"describeContents","()I")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputBinding,9,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::view::inputmethod::InputBinding,0,"CREATOR","Landroid/os/Parcelable$Creator;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_INPUTMETHOD_INPUTBINDING_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
