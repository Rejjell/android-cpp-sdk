/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.text.style.RasterizerSpan
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_STYLE_RASTERIZERSPAN_HPP_DECL
#define J2CPP_ANDROID_TEXT_STYLE_RASTERIZERSPAN_HPP_DECL


namespace j2cpp { namespace android { namespace graphics { class Rasterizer; } } }
namespace j2cpp { namespace android { namespace text { class TextPaint; } } }
namespace j2cpp { namespace android { namespace text { namespace style { class CharacterStyle; } } } }
namespace j2cpp { namespace android { namespace text { namespace style { class UpdateAppearance; } } } }


#include <android/graphics/Rasterizer.hpp>
#include <android/text/TextPaint.hpp>
#include <android/text/style/CharacterStyle.hpp>
#include <android/text/style/UpdateAppearance.hpp>


namespace j2cpp {

namespace android { namespace text { namespace style {

	class RasterizerSpan;
	class RasterizerSpan
		: public object<RasterizerSpan>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		explicit RasterizerSpan(jobject jobj)
		: object<RasterizerSpan>(jobj)
		{
		}

		operator local_ref<android::text::style::CharacterStyle>() const;
		operator local_ref<android::text::style::UpdateAppearance>() const;


		RasterizerSpan(local_ref< android::graphics::Rasterizer > const&);
		local_ref< android::graphics::Rasterizer > getRasterizer();
		void updateDrawState(local_ref< android::text::TextPaint >  const&);
	}; //class RasterizerSpan

} //namespace style
} //namespace text
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_STYLE_RASTERIZERSPAN_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_STYLE_RASTERIZERSPAN_HPP_IMPL
#define J2CPP_ANDROID_TEXT_STYLE_RASTERIZERSPAN_HPP_IMPL

namespace j2cpp {



android::text::style::RasterizerSpan::operator local_ref<android::text::style::CharacterStyle>() const
{
	return local_ref<android::text::style::CharacterStyle>(get_jobject());
}

android::text::style::RasterizerSpan::operator local_ref<android::text::style::UpdateAppearance>() const
{
	return local_ref<android::text::style::UpdateAppearance>(get_jobject());
}


android::text::style::RasterizerSpan::RasterizerSpan(local_ref< android::graphics::Rasterizer > const &a0)
: object<android::text::style::RasterizerSpan>(
	call_new_object<
		android::text::style::RasterizerSpan::J2CPP_CLASS_NAME,
		android::text::style::RasterizerSpan::J2CPP_METHOD_NAME(0),
		android::text::style::RasterizerSpan::J2CPP_METHOD_SIGNATURE(0)>
	(a0)
)
{
}


local_ref< android::graphics::Rasterizer > android::text::style::RasterizerSpan::getRasterizer()
{
	return call_method<
		android::text::style::RasterizerSpan::J2CPP_CLASS_NAME,
		android::text::style::RasterizerSpan::J2CPP_METHOD_NAME(1),
		android::text::style::RasterizerSpan::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< android::graphics::Rasterizer > >
	(get_jobject());
}

void android::text::style::RasterizerSpan::updateDrawState(local_ref< android::text::TextPaint > const &a0)
{
	return call_method<
		android::text::style::RasterizerSpan::J2CPP_CLASS_NAME,
		android::text::style::RasterizerSpan::J2CPP_METHOD_NAME(2),
		android::text::style::RasterizerSpan::J2CPP_METHOD_SIGNATURE(2), 
		void >
	(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(android::text::style::RasterizerSpan,"android/text/style/RasterizerSpan")
J2CPP_DEFINE_METHOD(android::text::style::RasterizerSpan,0,"<init>","(Landroid/graphics/Rasterizer;)V")
J2CPP_DEFINE_METHOD(android::text::style::RasterizerSpan,1,"getRasterizer","()Landroid/graphics/Rasterizer;")
J2CPP_DEFINE_METHOD(android::text::style::RasterizerSpan,2,"updateDrawState","(Landroid/text/TextPaint;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_STYLE_RASTERIZERSPAN_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
