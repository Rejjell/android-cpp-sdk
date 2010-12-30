/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.widget.CheckBox
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_CHECKBOX_HPP_DECL
#define J2CPP_ANDROID_WIDGET_CHECKBOX_HPP_DECL


namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace widget { class CompoundButton; } } }
namespace j2cpp { namespace android { namespace util { class AttributeSet; } } }


#include <android/content/Context.hpp>
#include <android/util/AttributeSet.hpp>
#include <android/widget/CompoundButton.hpp>


namespace j2cpp {

namespace android { namespace widget {

	class CheckBox;
	class CheckBox
		: public object<CheckBox>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		explicit CheckBox(jobject jobj)
		: object<CheckBox>(jobj)
		{
		}

		operator local_ref<android::widget::CompoundButton>() const;


		CheckBox(local_ref< android::content::Context > const&);
		CheckBox(local_ref< android::content::Context > const&, local_ref< android::util::AttributeSet > const&);
		CheckBox(local_ref< android::content::Context > const&, local_ref< android::util::AttributeSet > const&, jint);
	}; //class CheckBox

} //namespace widget
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_CHECKBOX_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_CHECKBOX_HPP_IMPL
#define J2CPP_ANDROID_WIDGET_CHECKBOX_HPP_IMPL

namespace j2cpp {



android::widget::CheckBox::operator local_ref<android::widget::CompoundButton>() const
{
	return local_ref<android::widget::CompoundButton>(get_jobject());
}


android::widget::CheckBox::CheckBox(local_ref< android::content::Context > const &a0)
: object<android::widget::CheckBox>(
	call_new_object<
		android::widget::CheckBox::J2CPP_CLASS_NAME,
		android::widget::CheckBox::J2CPP_METHOD_NAME(0),
		android::widget::CheckBox::J2CPP_METHOD_SIGNATURE(0)>
	(a0)
)
{
}



android::widget::CheckBox::CheckBox(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1)
: object<android::widget::CheckBox>(
	call_new_object<
		android::widget::CheckBox::J2CPP_CLASS_NAME,
		android::widget::CheckBox::J2CPP_METHOD_NAME(1),
		android::widget::CheckBox::J2CPP_METHOD_SIGNATURE(1)>
	(a0, a1)
)
{
}



android::widget::CheckBox::CheckBox(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1, jint a2)
: object<android::widget::CheckBox>(
	call_new_object<
		android::widget::CheckBox::J2CPP_CLASS_NAME,
		android::widget::CheckBox::J2CPP_METHOD_NAME(2),
		android::widget::CheckBox::J2CPP_METHOD_SIGNATURE(2)>
	(a0, a1, a2)
)
{
}



J2CPP_DEFINE_CLASS(android::widget::CheckBox,"android/widget/CheckBox")
J2CPP_DEFINE_METHOD(android::widget::CheckBox,0,"<init>","(Landroid/content/Context;)V")
J2CPP_DEFINE_METHOD(android::widget::CheckBox,1,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;)V")
J2CPP_DEFINE_METHOD(android::widget::CheckBox,2,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;I)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_CHECKBOX_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
