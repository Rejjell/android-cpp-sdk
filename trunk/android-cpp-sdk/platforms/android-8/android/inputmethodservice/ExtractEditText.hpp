/*================================================================================
  code generated by: java2cpp
  class: android.inputmethodservice.ExtractEditText
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_INPUTMETHODSERVICE_EXTRACTEDITTEXT_HPP_DECL
#define J2CPP_ANDROID_INPUTMETHODSERVICE_EXTRACTEDITTEXT_HPP_DECL


namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace util { class AttributeSet; } } }
namespace j2cpp { namespace android { namespace view { namespace inputmethod { class ExtractedText; } } } }


#include <android/content/Context.hpp>
#include <android/util/AttributeSet.hpp>
#include <android/view/inputmethod/ExtractedText.hpp>


namespace j2cpp {

namespace android { namespace inputmethodservice {

	class ExtractEditText;
	class ExtractEditText
		: public cpp_object<ExtractEditText>
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

		ExtractEditText(jobject jobj)
		: cpp_object<ExtractEditText>(jobj)
		{
		}

		void startInternalChanges();
		void finishInternalChanges();
		void setExtractedText(local_ref< android::view::inputmethod::ExtractedText > const&);
		cpp_boolean performClick();
		cpp_boolean onTextContextMenuItem(cpp_int const&);
		cpp_boolean isInputMethodTarget();
		cpp_boolean hasVerticalScrollBar();
		cpp_boolean hasWindowFocus();
		cpp_boolean isFocused();
		cpp_boolean hasFocus();
	}; //class ExtractEditText

} //namespace inputmethodservice
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_INPUTMETHODSERVICE_EXTRACTEDITTEXT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_INPUTMETHODSERVICE_EXTRACTEDITTEXT_HPP_IMPL
#define J2CPP_ANDROID_INPUTMETHODSERVICE_EXTRACTEDITTEXT_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::inputmethodservice::ExtractEditText > create< android::inputmethodservice::ExtractEditText>(local_ref< android::content::Context > const &a0)
{
	return local_ref< android::inputmethodservice::ExtractEditText >(
		environment::get().get_jenv()->NewObject(
			get_class<android::inputmethodservice::ExtractEditText::J2CPP_CLASS_NAME>(),
			get_method_id<android::inputmethodservice::ExtractEditText::J2CPP_CLASS_NAME, android::inputmethodservice::ExtractEditText::J2CPP_METHOD_NAME(0), android::inputmethodservice::ExtractEditText::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< android::inputmethodservice::ExtractEditText > create< android::inputmethodservice::ExtractEditText>(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1)
{
	return local_ref< android::inputmethodservice::ExtractEditText >(
		environment::get().get_jenv()->NewObject(
			get_class<android::inputmethodservice::ExtractEditText::J2CPP_CLASS_NAME>(),
			get_method_id<android::inputmethodservice::ExtractEditText::J2CPP_CLASS_NAME, android::inputmethodservice::ExtractEditText::J2CPP_METHOD_NAME(1), android::inputmethodservice::ExtractEditText::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

template <>
local_ref< android::inputmethodservice::ExtractEditText > create< android::inputmethodservice::ExtractEditText>(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1, cpp_int const &a2)
{
	return local_ref< android::inputmethodservice::ExtractEditText >(
		environment::get().get_jenv()->NewObject(
			get_class<android::inputmethodservice::ExtractEditText::J2CPP_CLASS_NAME>(),
			get_method_id<android::inputmethodservice::ExtractEditText::J2CPP_CLASS_NAME, android::inputmethodservice::ExtractEditText::J2CPP_METHOD_NAME(2), android::inputmethodservice::ExtractEditText::J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void android::inputmethodservice::ExtractEditText::startInternalChanges()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

void android::inputmethodservice::ExtractEditText::finishInternalChanges()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

void android::inputmethodservice::ExtractEditText::setExtractedText(local_ref< android::view::inputmethod::ExtractedText > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}


cpp_boolean android::inputmethodservice::ExtractEditText::performClick()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}

cpp_boolean android::inputmethodservice::ExtractEditText::onTextContextMenuItem(cpp_int const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::inputmethodservice::ExtractEditText::isInputMethodTarget()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}

cpp_boolean android::inputmethodservice::ExtractEditText::hasVerticalScrollBar()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>()
		)
	);
}

cpp_boolean android::inputmethodservice::ExtractEditText::hasWindowFocus()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>()
		)
	);
}

cpp_boolean android::inputmethodservice::ExtractEditText::isFocused()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>()
		)
	);
}

cpp_boolean android::inputmethodservice::ExtractEditText::hasFocus()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(android::inputmethodservice::ExtractEditText,"android/inputmethodservice/ExtractEditText")
J2CPP_DEFINE_METHOD(android::inputmethodservice::ExtractEditText,0,"<init>","(Landroid/content/Context;)V")
J2CPP_DEFINE_METHOD(android::inputmethodservice::ExtractEditText,1,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;)V")
J2CPP_DEFINE_METHOD(android::inputmethodservice::ExtractEditText,2,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;I)V")
J2CPP_DEFINE_METHOD(android::inputmethodservice::ExtractEditText,3,"startInternalChanges","()V")
J2CPP_DEFINE_METHOD(android::inputmethodservice::ExtractEditText,4,"finishInternalChanges","()V")
J2CPP_DEFINE_METHOD(android::inputmethodservice::ExtractEditText,5,"setExtractedText","(Landroid/view/inputmethod/ExtractedText;)V")
J2CPP_DEFINE_METHOD(android::inputmethodservice::ExtractEditText,6,"onSelectionChanged","(II)V")
J2CPP_DEFINE_METHOD(android::inputmethodservice::ExtractEditText,7,"performClick","()Z")
J2CPP_DEFINE_METHOD(android::inputmethodservice::ExtractEditText,8,"onTextContextMenuItem","(I)Z")
J2CPP_DEFINE_METHOD(android::inputmethodservice::ExtractEditText,9,"isInputMethodTarget","()Z")
J2CPP_DEFINE_METHOD(android::inputmethodservice::ExtractEditText,10,"hasVerticalScrollBar","()Z")
J2CPP_DEFINE_METHOD(android::inputmethodservice::ExtractEditText,11,"hasWindowFocus","()Z")
J2CPP_DEFINE_METHOD(android::inputmethodservice::ExtractEditText,12,"isFocused","()Z")
J2CPP_DEFINE_METHOD(android::inputmethodservice::ExtractEditText,13,"hasFocus","()Z")

} //namespace j2cpp

#endif //J2CPP_ANDROID_INPUTMETHODSERVICE_EXTRACTEDITTEXT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION