/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.text.style.LineBackgroundSpan
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_STYLE_LINEBACKGROUNDSPAN_HPP_DECL
#define J2CPP_ANDROID_TEXT_STYLE_LINEBACKGROUNDSPAN_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace android { namespace graphics { class Paint; } } }
namespace j2cpp { namespace android { namespace graphics { class Canvas; } } }
namespace j2cpp { namespace android { namespace text { namespace style { class ParagraphStyle; } } } }


#include <android/graphics/Canvas.hpp>
#include <android/graphics/Paint.hpp>
#include <android/text/style/ParagraphStyle.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace text { namespace style {

	class LineBackgroundSpan;
	class LineBackgroundSpan
		: public object<LineBackgroundSpan>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		explicit LineBackgroundSpan(jobject jobj)
		: object<LineBackgroundSpan>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::text::style::ParagraphStyle>() const;


		void drawBackground(local_ref< android::graphics::Canvas >  const&, local_ref< android::graphics::Paint >  const&, jint, jint, jint, jint, jint, local_ref< java::lang::CharSequence >  const&, jint, jint, jint);
	}; //class LineBackgroundSpan

} //namespace style
} //namespace text
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_STYLE_LINEBACKGROUNDSPAN_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_STYLE_LINEBACKGROUNDSPAN_HPP_IMPL
#define J2CPP_ANDROID_TEXT_STYLE_LINEBACKGROUNDSPAN_HPP_IMPL

namespace j2cpp {



android::text::style::LineBackgroundSpan::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::text::style::LineBackgroundSpan::operator local_ref<android::text::style::ParagraphStyle>() const
{
	return local_ref<android::text::style::ParagraphStyle>(get_jobject());
}

void android::text::style::LineBackgroundSpan::drawBackground(local_ref< android::graphics::Canvas > const &a0, local_ref< android::graphics::Paint > const &a1, jint a2, jint a3, jint a4, jint a5, jint a6, local_ref< java::lang::CharSequence > const &a7, jint a8, jint a9, jint a10)
{
	return call_method<
		android::text::style::LineBackgroundSpan::J2CPP_CLASS_NAME,
		android::text::style::LineBackgroundSpan::J2CPP_METHOD_NAME(0),
		android::text::style::LineBackgroundSpan::J2CPP_METHOD_SIGNATURE(0), 
		void >
	(get_jobject(), a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
}


J2CPP_DEFINE_CLASS(android::text::style::LineBackgroundSpan,"android/text/style/LineBackgroundSpan")
J2CPP_DEFINE_METHOD(android::text::style::LineBackgroundSpan,0,"drawBackground","(Landroid/graphics/Canvas;Landroid/graphics/Paint;IIIIILjava/lang/CharSequence;III)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_STYLE_LINEBACKGROUNDSPAN_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
