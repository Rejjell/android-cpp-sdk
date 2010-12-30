/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.graphics.LightingColorFilter
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_LIGHTINGCOLORFILTER_HPP_DECL
#define J2CPP_ANDROID_GRAPHICS_LIGHTINGCOLORFILTER_HPP_DECL


namespace j2cpp { namespace android { namespace graphics { class ColorFilter; } } }


#include <android/graphics/ColorFilter.hpp>


namespace j2cpp {

namespace android { namespace graphics {

	class LightingColorFilter;
	class LightingColorFilter
		: public object<LightingColorFilter>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		explicit LightingColorFilter(jobject jobj)
		: object<LightingColorFilter>(jobj)
		{
		}

		operator local_ref<android::graphics::ColorFilter>() const;


		LightingColorFilter(jint, jint);
	}; //class LightingColorFilter

} //namespace graphics
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_LIGHTINGCOLORFILTER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_LIGHTINGCOLORFILTER_HPP_IMPL
#define J2CPP_ANDROID_GRAPHICS_LIGHTINGCOLORFILTER_HPP_IMPL

namespace j2cpp {



android::graphics::LightingColorFilter::operator local_ref<android::graphics::ColorFilter>() const
{
	return local_ref<android::graphics::ColorFilter>(get_jobject());
}


android::graphics::LightingColorFilter::LightingColorFilter(jint a0, jint a1)
: object<android::graphics::LightingColorFilter>(
	call_new_object<
		android::graphics::LightingColorFilter::J2CPP_CLASS_NAME,
		android::graphics::LightingColorFilter::J2CPP_METHOD_NAME(0),
		android::graphics::LightingColorFilter::J2CPP_METHOD_SIGNATURE(0)>
	(a0, a1)
)
{
}



J2CPP_DEFINE_CLASS(android::graphics::LightingColorFilter,"android/graphics/LightingColorFilter")
J2CPP_DEFINE_METHOD(android::graphics::LightingColorFilter,0,"<init>","(II)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_LIGHTINGCOLORFILTER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
