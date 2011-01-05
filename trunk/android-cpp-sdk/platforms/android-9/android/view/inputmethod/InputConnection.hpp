/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.view.inputmethod.InputConnection
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_INPUTMETHOD_INPUTCONNECTION_HPP_DECL
#define J2CPP_ANDROID_VIEW_INPUTMETHOD_INPUTCONNECTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace view { class KeyEvent; } } }
namespace j2cpp { namespace android { namespace view { namespace inputmethod { class ExtractedTextRequest; } } } }
namespace j2cpp { namespace android { namespace view { namespace inputmethod { class ExtractedText; } } } }
namespace j2cpp { namespace android { namespace view { namespace inputmethod { class CompletionInfo; } } } }
namespace j2cpp { namespace android { namespace os { class Bundle; } } }


#include <android/os/Bundle.hpp>
#include <android/view/KeyEvent.hpp>
#include <android/view/inputmethod/CompletionInfo.hpp>
#include <android/view/inputmethod/ExtractedText.hpp>
#include <android/view/inputmethod/ExtractedTextRequest.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace view { namespace inputmethod {

	class InputConnection;
	class InputConnection
		: public object<InputConnection>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)

		explicit InputConnection(jobject jobj)
		: object<InputConnection>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		local_ref< java::lang::CharSequence > getTextBeforeCursor(jint, jint);
		local_ref< java::lang::CharSequence > getTextAfterCursor(jint, jint);
		local_ref< java::lang::CharSequence > getSelectedText(jint);
		jint getCursorCapsMode(jint);
		local_ref< android::view::inputmethod::ExtractedText > getExtractedText(local_ref< android::view::inputmethod::ExtractedTextRequest >  const&, jint);
		jboolean deleteSurroundingText(jint, jint);
		jboolean setComposingText(local_ref< java::lang::CharSequence >  const&, jint);
		jboolean setComposingRegion(jint, jint);
		jboolean finishComposingText();
		jboolean commitText(local_ref< java::lang::CharSequence >  const&, jint);
		jboolean commitCompletion(local_ref< android::view::inputmethod::CompletionInfo >  const&);
		jboolean setSelection(jint, jint);
		jboolean performEditorAction(jint);
		jboolean performContextMenuAction(jint);
		jboolean beginBatchEdit();
		jboolean endBatchEdit();
		jboolean sendKeyEvent(local_ref< android::view::KeyEvent >  const&);
		jboolean clearMetaKeyStates(jint);
		jboolean reportFullscreenMode(jboolean);
		jboolean performPrivateCommand(local_ref< java::lang::String >  const&, local_ref< android::os::Bundle >  const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > GET_TEXT_WITH_STYLES;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > GET_EXTRACTED_TEXT_MONITOR;
	}; //class InputConnection

} //namespace inputmethod
} //namespace view
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_INPUTMETHOD_INPUTCONNECTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_INPUTMETHOD_INPUTCONNECTION_HPP_IMPL
#define J2CPP_ANDROID_VIEW_INPUTMETHOD_INPUTCONNECTION_HPP_IMPL

namespace j2cpp {



android::view::inputmethod::InputConnection::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

local_ref< java::lang::CharSequence > android::view::inputmethod::InputConnection::getTextBeforeCursor(jint a0, jint a1)
{
	return call_method<
		android::view::inputmethod::InputConnection::J2CPP_CLASS_NAME,
		android::view::inputmethod::InputConnection::J2CPP_METHOD_NAME(0),
		android::view::inputmethod::InputConnection::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< java::lang::CharSequence >
	>(get_jobject(), a0, a1);
}

local_ref< java::lang::CharSequence > android::view::inputmethod::InputConnection::getTextAfterCursor(jint a0, jint a1)
{
	return call_method<
		android::view::inputmethod::InputConnection::J2CPP_CLASS_NAME,
		android::view::inputmethod::InputConnection::J2CPP_METHOD_NAME(1),
		android::view::inputmethod::InputConnection::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::CharSequence >
	>(get_jobject(), a0, a1);
}

local_ref< java::lang::CharSequence > android::view::inputmethod::InputConnection::getSelectedText(jint a0)
{
	return call_method<
		android::view::inputmethod::InputConnection::J2CPP_CLASS_NAME,
		android::view::inputmethod::InputConnection::J2CPP_METHOD_NAME(2),
		android::view::inputmethod::InputConnection::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::lang::CharSequence >
	>(get_jobject(), a0);
}

jint android::view::inputmethod::InputConnection::getCursorCapsMode(jint a0)
{
	return call_method<
		android::view::inputmethod::InputConnection::J2CPP_CLASS_NAME,
		android::view::inputmethod::InputConnection::J2CPP_METHOD_NAME(3),
		android::view::inputmethod::InputConnection::J2CPP_METHOD_SIGNATURE(3), 
		jint
	>(get_jobject(), a0);
}

local_ref< android::view::inputmethod::ExtractedText > android::view::inputmethod::InputConnection::getExtractedText(local_ref< android::view::inputmethod::ExtractedTextRequest > const &a0, jint a1)
{
	return call_method<
		android::view::inputmethod::InputConnection::J2CPP_CLASS_NAME,
		android::view::inputmethod::InputConnection::J2CPP_METHOD_NAME(4),
		android::view::inputmethod::InputConnection::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< android::view::inputmethod::ExtractedText >
	>(get_jobject(), a0, a1);
}

jboolean android::view::inputmethod::InputConnection::deleteSurroundingText(jint a0, jint a1)
{
	return call_method<
		android::view::inputmethod::InputConnection::J2CPP_CLASS_NAME,
		android::view::inputmethod::InputConnection::J2CPP_METHOD_NAME(5),
		android::view::inputmethod::InputConnection::J2CPP_METHOD_SIGNATURE(5), 
		jboolean
	>(get_jobject(), a0, a1);
}

jboolean android::view::inputmethod::InputConnection::setComposingText(local_ref< java::lang::CharSequence > const &a0, jint a1)
{
	return call_method<
		android::view::inputmethod::InputConnection::J2CPP_CLASS_NAME,
		android::view::inputmethod::InputConnection::J2CPP_METHOD_NAME(6),
		android::view::inputmethod::InputConnection::J2CPP_METHOD_SIGNATURE(6), 
		jboolean
	>(get_jobject(), a0, a1);
}

jboolean android::view::inputmethod::InputConnection::setComposingRegion(jint a0, jint a1)
{
	return call_method<
		android::view::inputmethod::InputConnection::J2CPP_CLASS_NAME,
		android::view::inputmethod::InputConnection::J2CPP_METHOD_NAME(7),
		android::view::inputmethod::InputConnection::J2CPP_METHOD_SIGNATURE(7), 
		jboolean
	>(get_jobject(), a0, a1);
}

jboolean android::view::inputmethod::InputConnection::finishComposingText()
{
	return call_method<
		android::view::inputmethod::InputConnection::J2CPP_CLASS_NAME,
		android::view::inputmethod::InputConnection::J2CPP_METHOD_NAME(8),
		android::view::inputmethod::InputConnection::J2CPP_METHOD_SIGNATURE(8), 
		jboolean
	>(get_jobject());
}

jboolean android::view::inputmethod::InputConnection::commitText(local_ref< java::lang::CharSequence > const &a0, jint a1)
{
	return call_method<
		android::view::inputmethod::InputConnection::J2CPP_CLASS_NAME,
		android::view::inputmethod::InputConnection::J2CPP_METHOD_NAME(9),
		android::view::inputmethod::InputConnection::J2CPP_METHOD_SIGNATURE(9), 
		jboolean
	>(get_jobject(), a0, a1);
}

jboolean android::view::inputmethod::InputConnection::commitCompletion(local_ref< android::view::inputmethod::CompletionInfo > const &a0)
{
	return call_method<
		android::view::inputmethod::InputConnection::J2CPP_CLASS_NAME,
		android::view::inputmethod::InputConnection::J2CPP_METHOD_NAME(10),
		android::view::inputmethod::InputConnection::J2CPP_METHOD_SIGNATURE(10), 
		jboolean
	>(get_jobject(), a0);
}

jboolean android::view::inputmethod::InputConnection::setSelection(jint a0, jint a1)
{
	return call_method<
		android::view::inputmethod::InputConnection::J2CPP_CLASS_NAME,
		android::view::inputmethod::InputConnection::J2CPP_METHOD_NAME(11),
		android::view::inputmethod::InputConnection::J2CPP_METHOD_SIGNATURE(11), 
		jboolean
	>(get_jobject(), a0, a1);
}

jboolean android::view::inputmethod::InputConnection::performEditorAction(jint a0)
{
	return call_method<
		android::view::inputmethod::InputConnection::J2CPP_CLASS_NAME,
		android::view::inputmethod::InputConnection::J2CPP_METHOD_NAME(12),
		android::view::inputmethod::InputConnection::J2CPP_METHOD_SIGNATURE(12), 
		jboolean
	>(get_jobject(), a0);
}

jboolean android::view::inputmethod::InputConnection::performContextMenuAction(jint a0)
{
	return call_method<
		android::view::inputmethod::InputConnection::J2CPP_CLASS_NAME,
		android::view::inputmethod::InputConnection::J2CPP_METHOD_NAME(13),
		android::view::inputmethod::InputConnection::J2CPP_METHOD_SIGNATURE(13), 
		jboolean
	>(get_jobject(), a0);
}

jboolean android::view::inputmethod::InputConnection::beginBatchEdit()
{
	return call_method<
		android::view::inputmethod::InputConnection::J2CPP_CLASS_NAME,
		android::view::inputmethod::InputConnection::J2CPP_METHOD_NAME(14),
		android::view::inputmethod::InputConnection::J2CPP_METHOD_SIGNATURE(14), 
		jboolean
	>(get_jobject());
}

jboolean android::view::inputmethod::InputConnection::endBatchEdit()
{
	return call_method<
		android::view::inputmethod::InputConnection::J2CPP_CLASS_NAME,
		android::view::inputmethod::InputConnection::J2CPP_METHOD_NAME(15),
		android::view::inputmethod::InputConnection::J2CPP_METHOD_SIGNATURE(15), 
		jboolean
	>(get_jobject());
}

jboolean android::view::inputmethod::InputConnection::sendKeyEvent(local_ref< android::view::KeyEvent > const &a0)
{
	return call_method<
		android::view::inputmethod::InputConnection::J2CPP_CLASS_NAME,
		android::view::inputmethod::InputConnection::J2CPP_METHOD_NAME(16),
		android::view::inputmethod::InputConnection::J2CPP_METHOD_SIGNATURE(16), 
		jboolean
	>(get_jobject(), a0);
}

jboolean android::view::inputmethod::InputConnection::clearMetaKeyStates(jint a0)
{
	return call_method<
		android::view::inputmethod::InputConnection::J2CPP_CLASS_NAME,
		android::view::inputmethod::InputConnection::J2CPP_METHOD_NAME(17),
		android::view::inputmethod::InputConnection::J2CPP_METHOD_SIGNATURE(17), 
		jboolean
	>(get_jobject(), a0);
}

jboolean android::view::inputmethod::InputConnection::reportFullscreenMode(jboolean a0)
{
	return call_method<
		android::view::inputmethod::InputConnection::J2CPP_CLASS_NAME,
		android::view::inputmethod::InputConnection::J2CPP_METHOD_NAME(18),
		android::view::inputmethod::InputConnection::J2CPP_METHOD_SIGNATURE(18), 
		jboolean
	>(get_jobject(), a0);
}

jboolean android::view::inputmethod::InputConnection::performPrivateCommand(local_ref< java::lang::String > const &a0, local_ref< android::os::Bundle > const &a1)
{
	return call_method<
		android::view::inputmethod::InputConnection::J2CPP_CLASS_NAME,
		android::view::inputmethod::InputConnection::J2CPP_METHOD_NAME(19),
		android::view::inputmethod::InputConnection::J2CPP_METHOD_SIGNATURE(19), 
		jboolean
	>(get_jobject(), a0, a1);
}


static_field<
	android::view::inputmethod::InputConnection::J2CPP_CLASS_NAME,
	android::view::inputmethod::InputConnection::J2CPP_FIELD_NAME(0),
	android::view::inputmethod::InputConnection::J2CPP_FIELD_SIGNATURE(0),
	jint
> android::view::inputmethod::InputConnection::GET_TEXT_WITH_STYLES;

static_field<
	android::view::inputmethod::InputConnection::J2CPP_CLASS_NAME,
	android::view::inputmethod::InputConnection::J2CPP_FIELD_NAME(1),
	android::view::inputmethod::InputConnection::J2CPP_FIELD_SIGNATURE(1),
	jint
> android::view::inputmethod::InputConnection::GET_EXTRACTED_TEXT_MONITOR;


J2CPP_DEFINE_CLASS(android::view::inputmethod::InputConnection,"android/view/inputmethod/InputConnection")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputConnection,0,"getTextBeforeCursor","(II)Ljava/lang/CharSequence;")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputConnection,1,"getTextAfterCursor","(II)Ljava/lang/CharSequence;")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputConnection,2,"getSelectedText","(I)Ljava/lang/CharSequence;")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputConnection,3,"getCursorCapsMode","(I)I")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputConnection,4,"getExtractedText","(Landroid/view/inputmethod/ExtractedTextRequest;I)Landroid/view/inputmethod/ExtractedText;")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputConnection,5,"deleteSurroundingText","(II)Z")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputConnection,6,"setComposingText","(Ljava/lang/CharSequence;I)Z")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputConnection,7,"setComposingRegion","(II)Z")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputConnection,8,"finishComposingText","()Z")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputConnection,9,"commitText","(Ljava/lang/CharSequence;I)Z")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputConnection,10,"commitCompletion","(Landroid/view/inputmethod/CompletionInfo;)Z")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputConnection,11,"setSelection","(II)Z")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputConnection,12,"performEditorAction","(I)Z")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputConnection,13,"performContextMenuAction","(I)Z")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputConnection,14,"beginBatchEdit","()Z")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputConnection,15,"endBatchEdit","()Z")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputConnection,16,"sendKeyEvent","(Landroid/view/KeyEvent;)Z")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputConnection,17,"clearMetaKeyStates","(I)Z")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputConnection,18,"reportFullscreenMode","(Z)Z")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputConnection,19,"performPrivateCommand","(Ljava/lang/String;Landroid/os/Bundle;)Z")
J2CPP_DEFINE_FIELD(android::view::inputmethod::InputConnection,0,"GET_TEXT_WITH_STYLES","I")
J2CPP_DEFINE_FIELD(android::view::inputmethod::InputConnection,1,"GET_EXTRACTED_TEXT_MONITOR","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_INPUTMETHOD_INPUTCONNECTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
