/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.widget.RemoteViews
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_REMOTEVIEWS_HPP_DECL
#define J2CPP_ANDROID_WIDGET_REMOTEVIEWS_HPP_DECL


namespace j2cpp { namespace android { namespace os { class Parcel; } } }
namespace j2cpp { namespace android { namespace os { class Parcelable; } } }
namespace j2cpp { namespace android { namespace os { namespace Parcelable_ { class Creator; } } } }
namespace j2cpp { namespace android { namespace view { class View; } } }
namespace j2cpp { namespace android { namespace view { namespace LayoutInflater_ { class Filter; } } } }
namespace j2cpp { namespace android { namespace view { class ViewGroup; } } }
namespace j2cpp { namespace android { namespace net { class Uri; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace java { namespace lang { class RuntimeException; } } }
namespace j2cpp { namespace java { namespace lang { namespace annotation { class Annotation; } } } }
namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Throwable; } } }
namespace j2cpp { namespace java { namespace lang { class Exception; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Class; } } }
namespace j2cpp { namespace android { namespace app { class PendingIntent; } } }
namespace j2cpp { namespace android { namespace graphics { class Bitmap; } } }


#include <android/app/PendingIntent.hpp>
#include <android/content/Context.hpp>
#include <android/graphics/Bitmap.hpp>
#include <android/net/Uri.hpp>
#include <android/os/Parcel.hpp>
#include <android/os/Parcelable.hpp>
#include <android/view/LayoutInflater.hpp>
#include <android/view/View.hpp>
#include <android/view/ViewGroup.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/Throwable.hpp>
#include <java/lang/annotation/Annotation.hpp>


namespace j2cpp {

namespace android { namespace widget {

	class RemoteViews;
	namespace RemoteViews_ {

		class RemoteView;
		class RemoteView
			: public object<RemoteView>
		{
		public:

			J2CPP_DECLARE_CLASS


			explicit RemoteView(jobject jobj)
			: object<RemoteView>(jobj)
			{
			}

			operator local_ref<java::lang::annotation::Annotation>() const;
			operator local_ref<java::lang::Object>() const;

		}; //class RemoteView

		class ActionException;
		class ActionException
			: public object<ActionException>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)

			explicit ActionException(jobject jobj)
			: object<ActionException>(jobj)
			{
			}

			operator local_ref<java::io::Serializable>() const;
			operator local_ref<java::lang::RuntimeException>() const;
			operator local_ref<java::lang::Throwable>() const;
			operator local_ref<java::lang::Exception>() const;
			operator local_ref<java::lang::Object>() const;


			ActionException(local_ref< java::lang::Exception > const&);
			ActionException(local_ref< java::lang::String > const&);
		}; //class ActionException

	} //namespace RemoteViews_

	class RemoteViews
		: public object<RemoteViews>
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

		typedef RemoteViews_::RemoteView RemoteView;
		typedef RemoteViews_::ActionException ActionException;

		explicit RemoteViews(jobject jobj)
		: object<RemoteViews>(jobj)
		{
		}

		operator local_ref<android::os::Parcelable>() const;
		operator local_ref<android::view::LayoutInflater_::Filter>() const;
		operator local_ref<java::lang::Object>() const;


		RemoteViews(local_ref< java::lang::String > const&, jint);
		RemoteViews(local_ref< android::os::Parcel > const&);
		local_ref< java::lang::String > getPackage();
		jint getLayoutId();
		void setViewVisibility(jint, jint);
		void setTextViewText(jint, local_ref< java::lang::CharSequence >  const&);
		void setImageViewResource(jint, jint);
		void setImageViewUri(jint, local_ref< android::net::Uri >  const&);
		void setImageViewBitmap(jint, local_ref< android::graphics::Bitmap >  const&);
		void setChronometer(jint, jlong, local_ref< java::lang::String >  const&, jboolean);
		void setProgressBar(jint, jint, jint, jboolean);
		void setOnClickPendingIntent(jint, local_ref< android::app::PendingIntent >  const&);
		void setTextColor(jint, jint);
		void setBoolean(jint, local_ref< java::lang::String >  const&, jboolean);
		void setByte(jint, local_ref< java::lang::String >  const&, jbyte);
		void setShort(jint, local_ref< java::lang::String >  const&, jshort);
		void setInt(jint, local_ref< java::lang::String >  const&, jint);
		void setLong(jint, local_ref< java::lang::String >  const&, jlong);
		void setFloat(jint, local_ref< java::lang::String >  const&, jfloat);
		void setDouble(jint, local_ref< java::lang::String >  const&, jdouble);
		void setChar(jint, local_ref< java::lang::String >  const&, jchar);
		void setString(jint, local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		void setCharSequence(jint, local_ref< java::lang::String >  const&, local_ref< java::lang::CharSequence >  const&);
		void setUri(jint, local_ref< java::lang::String >  const&, local_ref< android::net::Uri >  const&);
		void setBitmap(jint, local_ref< java::lang::String >  const&, local_ref< android::graphics::Bitmap >  const&);
		local_ref< android::view::View > apply(local_ref< android::content::Context >  const&, local_ref< android::view::ViewGroup >  const&);
		void reapply(local_ref< android::content::Context >  const&, local_ref< android::view::View >  const&);
		jboolean onLoadClass(local_ref< java::lang::Class >  const&);
		jint describeContents();
		void writeToParcel(local_ref< android::os::Parcel >  const&, jint);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< android::os::Parcelable_::Creator > > CREATOR;
	}; //class RemoteViews

} //namespace widget
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_REMOTEVIEWS_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_REMOTEVIEWS_HPP_IMPL
#define J2CPP_ANDROID_WIDGET_REMOTEVIEWS_HPP_IMPL

namespace j2cpp {




android::widget::RemoteViews_::RemoteView::operator local_ref<java::lang::annotation::Annotation>() const
{
	return local_ref<java::lang::annotation::Annotation>(get_jobject());
}

android::widget::RemoteViews_::RemoteView::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

J2CPP_DEFINE_CLASS(android::widget::RemoteViews_::RemoteView,"android/widget/RemoteViews$RemoteView")


android::widget::RemoteViews_::ActionException::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}

android::widget::RemoteViews_::ActionException::operator local_ref<java::lang::RuntimeException>() const
{
	return local_ref<java::lang::RuntimeException>(get_jobject());
}

android::widget::RemoteViews_::ActionException::operator local_ref<java::lang::Throwable>() const
{
	return local_ref<java::lang::Throwable>(get_jobject());
}

android::widget::RemoteViews_::ActionException::operator local_ref<java::lang::Exception>() const
{
	return local_ref<java::lang::Exception>(get_jobject());
}

android::widget::RemoteViews_::ActionException::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::widget::RemoteViews_::ActionException::ActionException(local_ref< java::lang::Exception > const &a0)
: object<android::widget::RemoteViews_::ActionException>(
	call_new_object<
		android::widget::RemoteViews_::ActionException::J2CPP_CLASS_NAME,
		android::widget::RemoteViews_::ActionException::J2CPP_METHOD_NAME(0),
		android::widget::RemoteViews_::ActionException::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}



android::widget::RemoteViews_::ActionException::ActionException(local_ref< java::lang::String > const &a0)
: object<android::widget::RemoteViews_::ActionException>(
	call_new_object<
		android::widget::RemoteViews_::ActionException::J2CPP_CLASS_NAME,
		android::widget::RemoteViews_::ActionException::J2CPP_METHOD_NAME(1),
		android::widget::RemoteViews_::ActionException::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}



J2CPP_DEFINE_CLASS(android::widget::RemoteViews_::ActionException,"android/widget/RemoteViews$ActionException")
J2CPP_DEFINE_METHOD(android::widget::RemoteViews_::ActionException,0,"<init>","(Ljava/lang/Exception;)V")
J2CPP_DEFINE_METHOD(android::widget::RemoteViews_::ActionException,1,"<init>","(Ljava/lang/String;)V")



android::widget::RemoteViews::operator local_ref<android::os::Parcelable>() const
{
	return local_ref<android::os::Parcelable>(get_jobject());
}

android::widget::RemoteViews::operator local_ref<android::view::LayoutInflater_::Filter>() const
{
	return local_ref<android::view::LayoutInflater_::Filter>(get_jobject());
}

android::widget::RemoteViews::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::widget::RemoteViews::RemoteViews(local_ref< java::lang::String > const &a0, jint a1)
: object<android::widget::RemoteViews>(
	call_new_object<
		android::widget::RemoteViews::J2CPP_CLASS_NAME,
		android::widget::RemoteViews::J2CPP_METHOD_NAME(0),
		android::widget::RemoteViews::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1)
)
{
}



android::widget::RemoteViews::RemoteViews(local_ref< android::os::Parcel > const &a0)
: object<android::widget::RemoteViews>(
	call_new_object<
		android::widget::RemoteViews::J2CPP_CLASS_NAME,
		android::widget::RemoteViews::J2CPP_METHOD_NAME(1),
		android::widget::RemoteViews::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}


local_ref< java::lang::String > android::widget::RemoteViews::getPackage()
{
	return call_method<
		android::widget::RemoteViews::J2CPP_CLASS_NAME,
		android::widget::RemoteViews::J2CPP_METHOD_NAME(2),
		android::widget::RemoteViews::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::lang::String >
	>(get_jobject());
}

jint android::widget::RemoteViews::getLayoutId()
{
	return call_method<
		android::widget::RemoteViews::J2CPP_CLASS_NAME,
		android::widget::RemoteViews::J2CPP_METHOD_NAME(3),
		android::widget::RemoteViews::J2CPP_METHOD_SIGNATURE(3), 
		jint
	>(get_jobject());
}

void android::widget::RemoteViews::setViewVisibility(jint a0, jint a1)
{
	return call_method<
		android::widget::RemoteViews::J2CPP_CLASS_NAME,
		android::widget::RemoteViews::J2CPP_METHOD_NAME(4),
		android::widget::RemoteViews::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0, a1);
}

void android::widget::RemoteViews::setTextViewText(jint a0, local_ref< java::lang::CharSequence > const &a1)
{
	return call_method<
		android::widget::RemoteViews::J2CPP_CLASS_NAME,
		android::widget::RemoteViews::J2CPP_METHOD_NAME(5),
		android::widget::RemoteViews::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject(), a0, a1);
}

void android::widget::RemoteViews::setImageViewResource(jint a0, jint a1)
{
	return call_method<
		android::widget::RemoteViews::J2CPP_CLASS_NAME,
		android::widget::RemoteViews::J2CPP_METHOD_NAME(6),
		android::widget::RemoteViews::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(get_jobject(), a0, a1);
}

void android::widget::RemoteViews::setImageViewUri(jint a0, local_ref< android::net::Uri > const &a1)
{
	return call_method<
		android::widget::RemoteViews::J2CPP_CLASS_NAME,
		android::widget::RemoteViews::J2CPP_METHOD_NAME(7),
		android::widget::RemoteViews::J2CPP_METHOD_SIGNATURE(7), 
		void
	>(get_jobject(), a0, a1);
}

void android::widget::RemoteViews::setImageViewBitmap(jint a0, local_ref< android::graphics::Bitmap > const &a1)
{
	return call_method<
		android::widget::RemoteViews::J2CPP_CLASS_NAME,
		android::widget::RemoteViews::J2CPP_METHOD_NAME(8),
		android::widget::RemoteViews::J2CPP_METHOD_SIGNATURE(8), 
		void
	>(get_jobject(), a0, a1);
}

void android::widget::RemoteViews::setChronometer(jint a0, jlong a1, local_ref< java::lang::String > const &a2, jboolean a3)
{
	return call_method<
		android::widget::RemoteViews::J2CPP_CLASS_NAME,
		android::widget::RemoteViews::J2CPP_METHOD_NAME(9),
		android::widget::RemoteViews::J2CPP_METHOD_SIGNATURE(9), 
		void
	>(get_jobject(), a0, a1, a2, a3);
}

void android::widget::RemoteViews::setProgressBar(jint a0, jint a1, jint a2, jboolean a3)
{
	return call_method<
		android::widget::RemoteViews::J2CPP_CLASS_NAME,
		android::widget::RemoteViews::J2CPP_METHOD_NAME(10),
		android::widget::RemoteViews::J2CPP_METHOD_SIGNATURE(10), 
		void
	>(get_jobject(), a0, a1, a2, a3);
}

void android::widget::RemoteViews::setOnClickPendingIntent(jint a0, local_ref< android::app::PendingIntent > const &a1)
{
	return call_method<
		android::widget::RemoteViews::J2CPP_CLASS_NAME,
		android::widget::RemoteViews::J2CPP_METHOD_NAME(11),
		android::widget::RemoteViews::J2CPP_METHOD_SIGNATURE(11), 
		void
	>(get_jobject(), a0, a1);
}

void android::widget::RemoteViews::setTextColor(jint a0, jint a1)
{
	return call_method<
		android::widget::RemoteViews::J2CPP_CLASS_NAME,
		android::widget::RemoteViews::J2CPP_METHOD_NAME(12),
		android::widget::RemoteViews::J2CPP_METHOD_SIGNATURE(12), 
		void
	>(get_jobject(), a0, a1);
}

void android::widget::RemoteViews::setBoolean(jint a0, local_ref< java::lang::String > const &a1, jboolean a2)
{
	return call_method<
		android::widget::RemoteViews::J2CPP_CLASS_NAME,
		android::widget::RemoteViews::J2CPP_METHOD_NAME(13),
		android::widget::RemoteViews::J2CPP_METHOD_SIGNATURE(13), 
		void
	>(get_jobject(), a0, a1, a2);
}

void android::widget::RemoteViews::setByte(jint a0, local_ref< java::lang::String > const &a1, jbyte a2)
{
	return call_method<
		android::widget::RemoteViews::J2CPP_CLASS_NAME,
		android::widget::RemoteViews::J2CPP_METHOD_NAME(14),
		android::widget::RemoteViews::J2CPP_METHOD_SIGNATURE(14), 
		void
	>(get_jobject(), a0, a1, a2);
}

void android::widget::RemoteViews::setShort(jint a0, local_ref< java::lang::String > const &a1, jshort a2)
{
	return call_method<
		android::widget::RemoteViews::J2CPP_CLASS_NAME,
		android::widget::RemoteViews::J2CPP_METHOD_NAME(15),
		android::widget::RemoteViews::J2CPP_METHOD_SIGNATURE(15), 
		void
	>(get_jobject(), a0, a1, a2);
}

void android::widget::RemoteViews::setInt(jint a0, local_ref< java::lang::String > const &a1, jint a2)
{
	return call_method<
		android::widget::RemoteViews::J2CPP_CLASS_NAME,
		android::widget::RemoteViews::J2CPP_METHOD_NAME(16),
		android::widget::RemoteViews::J2CPP_METHOD_SIGNATURE(16), 
		void
	>(get_jobject(), a0, a1, a2);
}

void android::widget::RemoteViews::setLong(jint a0, local_ref< java::lang::String > const &a1, jlong a2)
{
	return call_method<
		android::widget::RemoteViews::J2CPP_CLASS_NAME,
		android::widget::RemoteViews::J2CPP_METHOD_NAME(17),
		android::widget::RemoteViews::J2CPP_METHOD_SIGNATURE(17), 
		void
	>(get_jobject(), a0, a1, a2);
}

void android::widget::RemoteViews::setFloat(jint a0, local_ref< java::lang::String > const &a1, jfloat a2)
{
	return call_method<
		android::widget::RemoteViews::J2CPP_CLASS_NAME,
		android::widget::RemoteViews::J2CPP_METHOD_NAME(18),
		android::widget::RemoteViews::J2CPP_METHOD_SIGNATURE(18), 
		void
	>(get_jobject(), a0, a1, a2);
}

void android::widget::RemoteViews::setDouble(jint a0, local_ref< java::lang::String > const &a1, jdouble a2)
{
	return call_method<
		android::widget::RemoteViews::J2CPP_CLASS_NAME,
		android::widget::RemoteViews::J2CPP_METHOD_NAME(19),
		android::widget::RemoteViews::J2CPP_METHOD_SIGNATURE(19), 
		void
	>(get_jobject(), a0, a1, a2);
}

void android::widget::RemoteViews::setChar(jint a0, local_ref< java::lang::String > const &a1, jchar a2)
{
	return call_method<
		android::widget::RemoteViews::J2CPP_CLASS_NAME,
		android::widget::RemoteViews::J2CPP_METHOD_NAME(20),
		android::widget::RemoteViews::J2CPP_METHOD_SIGNATURE(20), 
		void
	>(get_jobject(), a0, a1, a2);
}

void android::widget::RemoteViews::setString(jint a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::String > const &a2)
{
	return call_method<
		android::widget::RemoteViews::J2CPP_CLASS_NAME,
		android::widget::RemoteViews::J2CPP_METHOD_NAME(21),
		android::widget::RemoteViews::J2CPP_METHOD_SIGNATURE(21), 
		void
	>(get_jobject(), a0, a1, a2);
}

void android::widget::RemoteViews::setCharSequence(jint a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::CharSequence > const &a2)
{
	return call_method<
		android::widget::RemoteViews::J2CPP_CLASS_NAME,
		android::widget::RemoteViews::J2CPP_METHOD_NAME(22),
		android::widget::RemoteViews::J2CPP_METHOD_SIGNATURE(22), 
		void
	>(get_jobject(), a0, a1, a2);
}

void android::widget::RemoteViews::setUri(jint a0, local_ref< java::lang::String > const &a1, local_ref< android::net::Uri > const &a2)
{
	return call_method<
		android::widget::RemoteViews::J2CPP_CLASS_NAME,
		android::widget::RemoteViews::J2CPP_METHOD_NAME(23),
		android::widget::RemoteViews::J2CPP_METHOD_SIGNATURE(23), 
		void
	>(get_jobject(), a0, a1, a2);
}

void android::widget::RemoteViews::setBitmap(jint a0, local_ref< java::lang::String > const &a1, local_ref< android::graphics::Bitmap > const &a2)
{
	return call_method<
		android::widget::RemoteViews::J2CPP_CLASS_NAME,
		android::widget::RemoteViews::J2CPP_METHOD_NAME(24),
		android::widget::RemoteViews::J2CPP_METHOD_SIGNATURE(24), 
		void
	>(get_jobject(), a0, a1, a2);
}

local_ref< android::view::View > android::widget::RemoteViews::apply(local_ref< android::content::Context > const &a0, local_ref< android::view::ViewGroup > const &a1)
{
	return call_method<
		android::widget::RemoteViews::J2CPP_CLASS_NAME,
		android::widget::RemoteViews::J2CPP_METHOD_NAME(25),
		android::widget::RemoteViews::J2CPP_METHOD_SIGNATURE(25), 
		local_ref< android::view::View >
	>(get_jobject(), a0, a1);
}

void android::widget::RemoteViews::reapply(local_ref< android::content::Context > const &a0, local_ref< android::view::View > const &a1)
{
	return call_method<
		android::widget::RemoteViews::J2CPP_CLASS_NAME,
		android::widget::RemoteViews::J2CPP_METHOD_NAME(26),
		android::widget::RemoteViews::J2CPP_METHOD_SIGNATURE(26), 
		void
	>(get_jobject(), a0, a1);
}

jboolean android::widget::RemoteViews::onLoadClass(local_ref< java::lang::Class > const &a0)
{
	return call_method<
		android::widget::RemoteViews::J2CPP_CLASS_NAME,
		android::widget::RemoteViews::J2CPP_METHOD_NAME(27),
		android::widget::RemoteViews::J2CPP_METHOD_SIGNATURE(27), 
		jboolean
	>(get_jobject(), a0);
}

jint android::widget::RemoteViews::describeContents()
{
	return call_method<
		android::widget::RemoteViews::J2CPP_CLASS_NAME,
		android::widget::RemoteViews::J2CPP_METHOD_NAME(28),
		android::widget::RemoteViews::J2CPP_METHOD_SIGNATURE(28), 
		jint
	>(get_jobject());
}

void android::widget::RemoteViews::writeToParcel(local_ref< android::os::Parcel > const &a0, jint a1)
{
	return call_method<
		android::widget::RemoteViews::J2CPP_CLASS_NAME,
		android::widget::RemoteViews::J2CPP_METHOD_NAME(29),
		android::widget::RemoteViews::J2CPP_METHOD_SIGNATURE(29), 
		void
	>(get_jobject(), a0, a1);
}



static_field<
	android::widget::RemoteViews::J2CPP_CLASS_NAME,
	android::widget::RemoteViews::J2CPP_FIELD_NAME(0),
	android::widget::RemoteViews::J2CPP_FIELD_SIGNATURE(0),
	local_ref< android::os::Parcelable_::Creator >
> android::widget::RemoteViews::CREATOR;


J2CPP_DEFINE_CLASS(android::widget::RemoteViews,"android/widget/RemoteViews")
J2CPP_DEFINE_METHOD(android::widget::RemoteViews,0,"<init>","(Ljava/lang/String;I)V")
J2CPP_DEFINE_METHOD(android::widget::RemoteViews,1,"<init>","(Landroid/os/Parcel;)V")
J2CPP_DEFINE_METHOD(android::widget::RemoteViews,2,"getPackage","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::widget::RemoteViews,3,"getLayoutId","()I")
J2CPP_DEFINE_METHOD(android::widget::RemoteViews,4,"setViewVisibility","(II)V")
J2CPP_DEFINE_METHOD(android::widget::RemoteViews,5,"setTextViewText","(ILjava/lang/CharSequence;)V")
J2CPP_DEFINE_METHOD(android::widget::RemoteViews,6,"setImageViewResource","(II)V")
J2CPP_DEFINE_METHOD(android::widget::RemoteViews,7,"setImageViewUri","(ILandroid/net/Uri;)V")
J2CPP_DEFINE_METHOD(android::widget::RemoteViews,8,"setImageViewBitmap","(ILandroid/graphics/Bitmap;)V")
J2CPP_DEFINE_METHOD(android::widget::RemoteViews,9,"setChronometer","(IJLjava/lang/String;Z)V")
J2CPP_DEFINE_METHOD(android::widget::RemoteViews,10,"setProgressBar","(IIIZ)V")
J2CPP_DEFINE_METHOD(android::widget::RemoteViews,11,"setOnClickPendingIntent","(ILandroid/app/PendingIntent;)V")
J2CPP_DEFINE_METHOD(android::widget::RemoteViews,12,"setTextColor","(II)V")
J2CPP_DEFINE_METHOD(android::widget::RemoteViews,13,"setBoolean","(ILjava/lang/String;Z)V")
J2CPP_DEFINE_METHOD(android::widget::RemoteViews,14,"setByte","(ILjava/lang/String;B)V")
J2CPP_DEFINE_METHOD(android::widget::RemoteViews,15,"setShort","(ILjava/lang/String;S)V")
J2CPP_DEFINE_METHOD(android::widget::RemoteViews,16,"setInt","(ILjava/lang/String;I)V")
J2CPP_DEFINE_METHOD(android::widget::RemoteViews,17,"setLong","(ILjava/lang/String;J)V")
J2CPP_DEFINE_METHOD(android::widget::RemoteViews,18,"setFloat","(ILjava/lang/String;F)V")
J2CPP_DEFINE_METHOD(android::widget::RemoteViews,19,"setDouble","(ILjava/lang/String;D)V")
J2CPP_DEFINE_METHOD(android::widget::RemoteViews,20,"setChar","(ILjava/lang/String;C)V")
J2CPP_DEFINE_METHOD(android::widget::RemoteViews,21,"setString","(ILjava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::widget::RemoteViews,22,"setCharSequence","(ILjava/lang/String;Ljava/lang/CharSequence;)V")
J2CPP_DEFINE_METHOD(android::widget::RemoteViews,23,"setUri","(ILjava/lang/String;Landroid/net/Uri;)V")
J2CPP_DEFINE_METHOD(android::widget::RemoteViews,24,"setBitmap","(ILjava/lang/String;Landroid/graphics/Bitmap;)V")
J2CPP_DEFINE_METHOD(android::widget::RemoteViews,25,"apply","(Landroid/content/Context;Landroid/view/ViewGroup;)Landroid/view/View;")
J2CPP_DEFINE_METHOD(android::widget::RemoteViews,26,"reapply","(Landroid/content/Context;Landroid/view/View;)V")
J2CPP_DEFINE_METHOD(android::widget::RemoteViews,27,"onLoadClass","(Ljava/lang/Class;)Z")
J2CPP_DEFINE_METHOD(android::widget::RemoteViews,28,"describeContents","()I")
J2CPP_DEFINE_METHOD(android::widget::RemoteViews,29,"writeToParcel","(Landroid/os/Parcel;I)V")
J2CPP_DEFINE_METHOD(android::widget::RemoteViews,30,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::widget::RemoteViews,0,"CREATOR","Landroid/os/Parcelable$Creator;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_REMOTEVIEWS_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
