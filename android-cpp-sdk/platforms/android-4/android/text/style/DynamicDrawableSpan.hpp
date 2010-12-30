/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.text.style.DynamicDrawableSpan
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_STYLE_DYNAMICDRAWABLESPAN_HPP_DECL
#define J2CPP_ANDROID_TEXT_STYLE_DYNAMICDRAWABLESPAN_HPP_DECL


namespace j2cpp { namespace android { namespace graphics { class Paint; } } }
namespace j2cpp { namespace android { namespace graphics { class Canvas; } } }
namespace j2cpp { namespace android { namespace graphics { namespace drawable { class Drawable; } } } }
namespace j2cpp { namespace android { namespace graphics { namespace Paint_ { class FontMetricsInt; } } } }
namespace j2cpp { namespace android { namespace text { namespace style { class ReplacementSpan; } } } }
namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }


#include <android/graphics/Canvas.hpp>
#include <android/graphics/Paint.hpp>
#include <android/graphics/drawable/Drawable.hpp>
#include <android/text/style/ReplacementSpan.hpp>
#include <java/lang/CharSequence.hpp>


namespace j2cpp {

namespace android { namespace text { namespace style {

	class DynamicDrawableSpan;
	class DynamicDrawableSpan
		: public object<DynamicDrawableSpan>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)

		explicit DynamicDrawableSpan(jobject jobj)
		: object<DynamicDrawableSpan>(jobj)
		{
		}

		operator local_ref<android::text::style::ReplacementSpan>() const;


		DynamicDrawableSpan();
		jint getVerticalAlignment();
		local_ref< android::graphics::drawable::Drawable > getDrawable();
		jint getSize(local_ref< android::graphics::Paint >  const&, local_ref< java::lang::CharSequence >  const&, jint, jint, local_ref< android::graphics::Paint_::FontMetricsInt >  const&);
		void draw(local_ref< android::graphics::Canvas >  const&, local_ref< java::lang::CharSequence >  const&, jint, jint, jfloat, jint, jint, jint, local_ref< android::graphics::Paint >  const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > ALIGN_BOTTOM;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > ALIGN_BASELINE;
	}; //class DynamicDrawableSpan

} //namespace style
} //namespace text
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_STYLE_DYNAMICDRAWABLESPAN_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_STYLE_DYNAMICDRAWABLESPAN_HPP_IMPL
#define J2CPP_ANDROID_TEXT_STYLE_DYNAMICDRAWABLESPAN_HPP_IMPL

namespace j2cpp {



android::text::style::DynamicDrawableSpan::operator local_ref<android::text::style::ReplacementSpan>() const
{
	return local_ref<android::text::style::ReplacementSpan>(get_jobject());
}


android::text::style::DynamicDrawableSpan::DynamicDrawableSpan()
: object<android::text::style::DynamicDrawableSpan>(
	call_new_object<
		android::text::style::DynamicDrawableSpan::J2CPP_CLASS_NAME,
		android::text::style::DynamicDrawableSpan::J2CPP_METHOD_NAME(0),
		android::text::style::DynamicDrawableSpan::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}



jint android::text::style::DynamicDrawableSpan::getVerticalAlignment()
{
	return call_method<
		android::text::style::DynamicDrawableSpan::J2CPP_CLASS_NAME,
		android::text::style::DynamicDrawableSpan::J2CPP_METHOD_NAME(2),
		android::text::style::DynamicDrawableSpan::J2CPP_METHOD_SIGNATURE(2), 
		jint >
	(get_jobject());
}

local_ref< android::graphics::drawable::Drawable > android::text::style::DynamicDrawableSpan::getDrawable()
{
	return call_method<
		android::text::style::DynamicDrawableSpan::J2CPP_CLASS_NAME,
		android::text::style::DynamicDrawableSpan::J2CPP_METHOD_NAME(3),
		android::text::style::DynamicDrawableSpan::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< android::graphics::drawable::Drawable > >
	(get_jobject());
}

jint android::text::style::DynamicDrawableSpan::getSize(local_ref< android::graphics::Paint > const &a0, local_ref< java::lang::CharSequence > const &a1, jint a2, jint a3, local_ref< android::graphics::Paint_::FontMetricsInt > const &a4)
{
	return call_method<
		android::text::style::DynamicDrawableSpan::J2CPP_CLASS_NAME,
		android::text::style::DynamicDrawableSpan::J2CPP_METHOD_NAME(4),
		android::text::style::DynamicDrawableSpan::J2CPP_METHOD_SIGNATURE(4), 
		jint >
	(get_jobject(), a0, a1, a2, a3, a4);
}

void android::text::style::DynamicDrawableSpan::draw(local_ref< android::graphics::Canvas > const &a0, local_ref< java::lang::CharSequence > const &a1, jint a2, jint a3, jfloat a4, jint a5, jint a6, jint a7, local_ref< android::graphics::Paint > const &a8)
{
	return call_method<
		android::text::style::DynamicDrawableSpan::J2CPP_CLASS_NAME,
		android::text::style::DynamicDrawableSpan::J2CPP_METHOD_NAME(5),
		android::text::style::DynamicDrawableSpan::J2CPP_METHOD_SIGNATURE(5), 
		void >
	(get_jobject(), a0, a1, a2, a3, a4, a5, a6, a7, a8);
}


static_field<
	android::text::style::DynamicDrawableSpan::J2CPP_CLASS_NAME,
	android::text::style::DynamicDrawableSpan::J2CPP_FIELD_NAME(0),
	android::text::style::DynamicDrawableSpan::J2CPP_FIELD_SIGNATURE(0),
	jint
> android::text::style::DynamicDrawableSpan::ALIGN_BOTTOM;

static_field<
	android::text::style::DynamicDrawableSpan::J2CPP_CLASS_NAME,
	android::text::style::DynamicDrawableSpan::J2CPP_FIELD_NAME(1),
	android::text::style::DynamicDrawableSpan::J2CPP_FIELD_SIGNATURE(1),
	jint
> android::text::style::DynamicDrawableSpan::ALIGN_BASELINE;


J2CPP_DEFINE_CLASS(android::text::style::DynamicDrawableSpan,"android/text/style/DynamicDrawableSpan")
J2CPP_DEFINE_METHOD(android::text::style::DynamicDrawableSpan,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::text::style::DynamicDrawableSpan,1,"<init>","(I)V")
J2CPP_DEFINE_METHOD(android::text::style::DynamicDrawableSpan,2,"getVerticalAlignment","()I")
J2CPP_DEFINE_METHOD(android::text::style::DynamicDrawableSpan,3,"getDrawable","()Landroid/graphics/drawable/Drawable;")
J2CPP_DEFINE_METHOD(android::text::style::DynamicDrawableSpan,4,"getSize","(Landroid/graphics/Paint;Ljava/lang/CharSequence;IILandroid/graphics/Paint$FontMetricsInt;)I")
J2CPP_DEFINE_METHOD(android::text::style::DynamicDrawableSpan,5,"draw","(Landroid/graphics/Canvas;Ljava/lang/CharSequence;IIFIIILandroid/graphics/Paint;)V")
J2CPP_DEFINE_FIELD(android::text::style::DynamicDrawableSpan,0,"ALIGN_BOTTOM","I")
J2CPP_DEFINE_FIELD(android::text::style::DynamicDrawableSpan,1,"ALIGN_BASELINE","I")
J2CPP_DEFINE_FIELD(android::text::style::DynamicDrawableSpan,2,"mVerticalAlignment","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_STYLE_DYNAMICDRAWABLESPAN_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
