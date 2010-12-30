/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.widget.SimpleCursorTreeAdapter
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_SIMPLECURSORTREEADAPTER_HPP_DECL
#define J2CPP_ANDROID_WIDGET_SIMPLECURSORTREEADAPTER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace android { namespace database { class Cursor; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace view { class View; } } }
namespace j2cpp { namespace android { namespace widget { namespace SimpleCursorTreeAdapter_ { class ViewBinder; } } } }
namespace j2cpp { namespace android { namespace widget { class TextView; } } }
namespace j2cpp { namespace android { namespace widget { class ResourceCursorTreeAdapter; } } }


#include <android/content/Context.hpp>
#include <android/database/Cursor.hpp>
#include <android/view/View.hpp>
#include <android/widget/ResourceCursorTreeAdapter.hpp>
#include <android/widget/SimpleCursorTreeAdapter.hpp>
#include <android/widget/TextView.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace widget {

	class SimpleCursorTreeAdapter;
	namespace SimpleCursorTreeAdapter_ {

		class ViewBinder;
		class ViewBinder
			: public object<ViewBinder>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			explicit ViewBinder(jobject jobj)
			: object<ViewBinder>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			jboolean setViewValue(local_ref< android::view::View >  const&, local_ref< android::database::Cursor >  const&, jint);
		}; //class ViewBinder

	} //namespace SimpleCursorTreeAdapter_

	class SimpleCursorTreeAdapter
		: public object<SimpleCursorTreeAdapter>
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

		typedef SimpleCursorTreeAdapter_::ViewBinder ViewBinder;

		explicit SimpleCursorTreeAdapter(jobject jobj)
		: object<SimpleCursorTreeAdapter>(jobj)
		{
		}

		operator local_ref<android::widget::ResourceCursorTreeAdapter>() const;


		SimpleCursorTreeAdapter(local_ref< android::content::Context > const&, local_ref< android::database::Cursor > const&, jint, jint, local_ref< array< local_ref< java::lang::String >, 1> > const&, local_ref< array<jint,1> > const&, jint, jint, local_ref< array< local_ref< java::lang::String >, 1> > const&, local_ref< array<jint,1> > const&);
		SimpleCursorTreeAdapter(local_ref< android::content::Context > const&, local_ref< android::database::Cursor > const&, jint, jint, local_ref< array< local_ref< java::lang::String >, 1> > const&, local_ref< array<jint,1> > const&, jint, local_ref< array< local_ref< java::lang::String >, 1> > const&, local_ref< array<jint,1> > const&);
		SimpleCursorTreeAdapter(local_ref< android::content::Context > const&, local_ref< android::database::Cursor > const&, jint, local_ref< array< local_ref< java::lang::String >, 1> > const&, local_ref< array<jint,1> > const&, jint, local_ref< array< local_ref< java::lang::String >, 1> > const&, local_ref< array<jint,1> > const&);
		local_ref< android::widget::SimpleCursorTreeAdapter_::ViewBinder > getViewBinder();
		void setViewBinder(local_ref< android::widget::SimpleCursorTreeAdapter_::ViewBinder >  const&);
		void setViewText(local_ref< android::widget::TextView >  const&, local_ref< java::lang::String >  const&);
	}; //class SimpleCursorTreeAdapter

} //namespace widget
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_SIMPLECURSORTREEADAPTER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_SIMPLECURSORTREEADAPTER_HPP_IMPL
#define J2CPP_ANDROID_WIDGET_SIMPLECURSORTREEADAPTER_HPP_IMPL

namespace j2cpp {




android::widget::SimpleCursorTreeAdapter_::ViewBinder::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

jboolean android::widget::SimpleCursorTreeAdapter_::ViewBinder::setViewValue(local_ref< android::view::View > const &a0, local_ref< android::database::Cursor > const &a1, jint a2)
{
	return call_method<
		android::widget::SimpleCursorTreeAdapter_::ViewBinder::J2CPP_CLASS_NAME,
		android::widget::SimpleCursorTreeAdapter_::ViewBinder::J2CPP_METHOD_NAME(0),
		android::widget::SimpleCursorTreeAdapter_::ViewBinder::J2CPP_METHOD_SIGNATURE(0), 
		jboolean >
	(get_jobject(), a0, a1, a2);
}


J2CPP_DEFINE_CLASS(android::widget::SimpleCursorTreeAdapter_::ViewBinder,"android/widget/SimpleCursorTreeAdapter$ViewBinder")
J2CPP_DEFINE_METHOD(android::widget::SimpleCursorTreeAdapter_::ViewBinder,0,"setViewValue","(Landroid/view/View;Landroid/database/Cursor;I)Z")



android::widget::SimpleCursorTreeAdapter::operator local_ref<android::widget::ResourceCursorTreeAdapter>() const
{
	return local_ref<android::widget::ResourceCursorTreeAdapter>(get_jobject());
}


android::widget::SimpleCursorTreeAdapter::SimpleCursorTreeAdapter(local_ref< android::content::Context > const &a0, local_ref< android::database::Cursor > const &a1, jint a2, jint a3, local_ref< array< local_ref< java::lang::String >, 1> > const &a4, local_ref< array<jint,1> > const &a5, jint a6, jint a7, local_ref< array< local_ref< java::lang::String >, 1> > const &a8, local_ref< array<jint,1> > const &a9)
: object<android::widget::SimpleCursorTreeAdapter>(
	call_new_object<
		android::widget::SimpleCursorTreeAdapter::J2CPP_CLASS_NAME,
		android::widget::SimpleCursorTreeAdapter::J2CPP_METHOD_NAME(0),
		android::widget::SimpleCursorTreeAdapter::J2CPP_METHOD_SIGNATURE(0)>
	(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9)
)
{
}



android::widget::SimpleCursorTreeAdapter::SimpleCursorTreeAdapter(local_ref< android::content::Context > const &a0, local_ref< android::database::Cursor > const &a1, jint a2, jint a3, local_ref< array< local_ref< java::lang::String >, 1> > const &a4, local_ref< array<jint,1> > const &a5, jint a6, local_ref< array< local_ref< java::lang::String >, 1> > const &a7, local_ref< array<jint,1> > const &a8)
: object<android::widget::SimpleCursorTreeAdapter>(
	call_new_object<
		android::widget::SimpleCursorTreeAdapter::J2CPP_CLASS_NAME,
		android::widget::SimpleCursorTreeAdapter::J2CPP_METHOD_NAME(1),
		android::widget::SimpleCursorTreeAdapter::J2CPP_METHOD_SIGNATURE(1)>
	(a0, a1, a2, a3, a4, a5, a6, a7, a8)
)
{
}



android::widget::SimpleCursorTreeAdapter::SimpleCursorTreeAdapter(local_ref< android::content::Context > const &a0, local_ref< android::database::Cursor > const &a1, jint a2, local_ref< array< local_ref< java::lang::String >, 1> > const &a3, local_ref< array<jint,1> > const &a4, jint a5, local_ref< array< local_ref< java::lang::String >, 1> > const &a6, local_ref< array<jint,1> > const &a7)
: object<android::widget::SimpleCursorTreeAdapter>(
	call_new_object<
		android::widget::SimpleCursorTreeAdapter::J2CPP_CLASS_NAME,
		android::widget::SimpleCursorTreeAdapter::J2CPP_METHOD_NAME(2),
		android::widget::SimpleCursorTreeAdapter::J2CPP_METHOD_SIGNATURE(2)>
	(a0, a1, a2, a3, a4, a5, a6, a7)
)
{
}


local_ref< android::widget::SimpleCursorTreeAdapter_::ViewBinder > android::widget::SimpleCursorTreeAdapter::getViewBinder()
{
	return call_method<
		android::widget::SimpleCursorTreeAdapter::J2CPP_CLASS_NAME,
		android::widget::SimpleCursorTreeAdapter::J2CPP_METHOD_NAME(3),
		android::widget::SimpleCursorTreeAdapter::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< android::widget::SimpleCursorTreeAdapter_::ViewBinder > >
	(get_jobject());
}

void android::widget::SimpleCursorTreeAdapter::setViewBinder(local_ref< android::widget::SimpleCursorTreeAdapter_::ViewBinder > const &a0)
{
	return call_method<
		android::widget::SimpleCursorTreeAdapter::J2CPP_CLASS_NAME,
		android::widget::SimpleCursorTreeAdapter::J2CPP_METHOD_NAME(4),
		android::widget::SimpleCursorTreeAdapter::J2CPP_METHOD_SIGNATURE(4), 
		void >
	(get_jobject(), a0);
}




void android::widget::SimpleCursorTreeAdapter::setViewText(local_ref< android::widget::TextView > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		android::widget::SimpleCursorTreeAdapter::J2CPP_CLASS_NAME,
		android::widget::SimpleCursorTreeAdapter::J2CPP_METHOD_NAME(8),
		android::widget::SimpleCursorTreeAdapter::J2CPP_METHOD_SIGNATURE(8), 
		void >
	(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(android::widget::SimpleCursorTreeAdapter,"android/widget/SimpleCursorTreeAdapter")
J2CPP_DEFINE_METHOD(android::widget::SimpleCursorTreeAdapter,0,"<init>","(Landroid/content/Context;Landroid/database/Cursor;II[java.lang.String[III[java.lang.String[I)V")
J2CPP_DEFINE_METHOD(android::widget::SimpleCursorTreeAdapter,1,"<init>","(Landroid/content/Context;Landroid/database/Cursor;II[java.lang.String[II[java.lang.String[I)V")
J2CPP_DEFINE_METHOD(android::widget::SimpleCursorTreeAdapter,2,"<init>","(Landroid/content/Context;Landroid/database/Cursor;I[java.lang.String[II[java.lang.String[I)V")
J2CPP_DEFINE_METHOD(android::widget::SimpleCursorTreeAdapter,3,"getViewBinder","()Landroid/widget/SimpleCursorTreeAdapter$ViewBinder;")
J2CPP_DEFINE_METHOD(android::widget::SimpleCursorTreeAdapter,4,"setViewBinder","(Landroid/widget/SimpleCursorTreeAdapter$ViewBinder;)V")
J2CPP_DEFINE_METHOD(android::widget::SimpleCursorTreeAdapter,5,"bindChildView","(Landroid/view/View;Landroid/content/Context;Landroid/database/Cursor;Z)V")
J2CPP_DEFINE_METHOD(android::widget::SimpleCursorTreeAdapter,6,"bindGroupView","(Landroid/view/View;Landroid/content/Context;Landroid/database/Cursor;Z)V")
J2CPP_DEFINE_METHOD(android::widget::SimpleCursorTreeAdapter,7,"setViewImage","(Landroid/widget/ImageView;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::widget::SimpleCursorTreeAdapter,8,"setViewText","(Landroid/widget/TextView;Ljava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_SIMPLECURSORTREEADAPTER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
