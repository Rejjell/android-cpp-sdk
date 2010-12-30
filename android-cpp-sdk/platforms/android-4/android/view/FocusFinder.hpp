/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.view.FocusFinder
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_FOCUSFINDER_HPP_DECL
#define J2CPP_ANDROID_VIEW_FOCUSFINDER_HPP_DECL


namespace j2cpp { namespace android { namespace graphics { class Rect; } } }
namespace j2cpp { namespace android { namespace view { class View; } } }
namespace j2cpp { namespace android { namespace view { class ViewGroup; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/graphics/Rect.hpp>
#include <android/view/View.hpp>
#include <android/view/ViewGroup.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace view {

	class FocusFinder;
	class FocusFinder
		: public object<FocusFinder>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)

		explicit FocusFinder(jobject jobj)
		: object<FocusFinder>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		static local_ref< android::view::FocusFinder > getInstance();
		local_ref< android::view::View > findNextFocus(local_ref< android::view::ViewGroup >  const&, local_ref< android::view::View >  const&, jint);
		local_ref< android::view::View > findNextFocusFromRect(local_ref< android::view::ViewGroup >  const&, local_ref< android::graphics::Rect >  const&, jint);
		local_ref< android::view::View > findNearestTouchable(local_ref< android::view::ViewGroup >  const&, jint, jint, jint, local_ref< array<jint,1> >  const&);
	}; //class FocusFinder

} //namespace view
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_FOCUSFINDER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_FOCUSFINDER_HPP_IMPL
#define J2CPP_ANDROID_VIEW_FOCUSFINDER_HPP_IMPL

namespace j2cpp {



android::view::FocusFinder::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


local_ref< android::view::FocusFinder > android::view::FocusFinder::getInstance()
{
	return call_static_method<
		android::view::FocusFinder::J2CPP_CLASS_NAME,
		android::view::FocusFinder::J2CPP_METHOD_NAME(1),
		android::view::FocusFinder::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< android::view::FocusFinder > >
	();
}

local_ref< android::view::View > android::view::FocusFinder::findNextFocus(local_ref< android::view::ViewGroup > const &a0, local_ref< android::view::View > const &a1, jint a2)
{
	return call_method<
		android::view::FocusFinder::J2CPP_CLASS_NAME,
		android::view::FocusFinder::J2CPP_METHOD_NAME(2),
		android::view::FocusFinder::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< android::view::View > >
	(get_jobject(), a0, a1, a2);
}

local_ref< android::view::View > android::view::FocusFinder::findNextFocusFromRect(local_ref< android::view::ViewGroup > const &a0, local_ref< android::graphics::Rect > const &a1, jint a2)
{
	return call_method<
		android::view::FocusFinder::J2CPP_CLASS_NAME,
		android::view::FocusFinder::J2CPP_METHOD_NAME(3),
		android::view::FocusFinder::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< android::view::View > >
	(get_jobject(), a0, a1, a2);
}

local_ref< android::view::View > android::view::FocusFinder::findNearestTouchable(local_ref< android::view::ViewGroup > const &a0, jint a1, jint a2, jint a3, local_ref< array<jint,1> > const &a4)
{
	return call_method<
		android::view::FocusFinder::J2CPP_CLASS_NAME,
		android::view::FocusFinder::J2CPP_METHOD_NAME(4),
		android::view::FocusFinder::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< android::view::View > >
	(get_jobject(), a0, a1, a2, a3, a4);
}


J2CPP_DEFINE_CLASS(android::view::FocusFinder,"android/view/FocusFinder")
J2CPP_DEFINE_METHOD(android::view::FocusFinder,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::view::FocusFinder,1,"getInstance","()Landroid/view/FocusFinder;")
J2CPP_DEFINE_METHOD(android::view::FocusFinder,2,"findNextFocus","(Landroid/view/ViewGroup;Landroid/view/View;I)Landroid/view/View;")
J2CPP_DEFINE_METHOD(android::view::FocusFinder,3,"findNextFocusFromRect","(Landroid/view/ViewGroup;Landroid/graphics/Rect;I)Landroid/view/View;")
J2CPP_DEFINE_METHOD(android::view::FocusFinder,4,"findNearestTouchable","(Landroid/view/ViewGroup;III[I)Landroid/view/View;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_FOCUSFINDER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
