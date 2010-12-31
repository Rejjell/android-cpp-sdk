/*================================================================================
  code generated by: java2cpp
  class: android.graphics.ColorFilter
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_COLORFILTER_HPP_DECL
#define J2CPP_ANDROID_GRAPHICS_COLORFILTER_HPP_DECL






namespace j2cpp {

namespace android { namespace graphics {

	class ColorFilter;
	class ColorFilter
		: public cpp_object<ColorFilter>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		ColorFilter(jobject jobj)
		: cpp_object<ColorFilter>(jobj)
		{
		}

	}; //class ColorFilter

} //namespace graphics
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_COLORFILTER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_COLORFILTER_HPP_IMPL
#define J2CPP_ANDROID_GRAPHICS_COLORFILTER_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::graphics::ColorFilter > create< android::graphics::ColorFilter>()
{
	return local_ref< android::graphics::ColorFilter >(
		environment::get().get_jenv()->NewObject(
			get_class<android::graphics::ColorFilter::J2CPP_CLASS_NAME>(),
			get_method_id<android::graphics::ColorFilter::J2CPP_CLASS_NAME, android::graphics::ColorFilter::J2CPP_METHOD_NAME(0), android::graphics::ColorFilter::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}



J2CPP_DEFINE_CLASS(android::graphics::ColorFilter,"android/graphics/ColorFilter")
J2CPP_DEFINE_METHOD(android::graphics::ColorFilter,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::graphics::ColorFilter,1,"finalize","()V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_COLORFILTER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION