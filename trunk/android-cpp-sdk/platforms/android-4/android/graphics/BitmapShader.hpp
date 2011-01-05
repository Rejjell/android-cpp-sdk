/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.graphics.BitmapShader
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_BITMAPSHADER_HPP_DECL
#define J2CPP_ANDROID_GRAPHICS_BITMAPSHADER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace graphics { class Shader; } } }
namespace j2cpp { namespace android { namespace graphics { class Bitmap; } } }
namespace j2cpp { namespace android { namespace graphics { namespace Shader_ { class TileMode; } } } }


#include <android/graphics/Bitmap.hpp>
#include <android/graphics/Shader.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace graphics {

	class BitmapShader;
	class BitmapShader
		: public object<BitmapShader>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		explicit BitmapShader(jobject jobj)
		: object<BitmapShader>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::graphics::Shader>() const;


		BitmapShader(local_ref< android::graphics::Bitmap > const&, local_ref< android::graphics::Shader_::TileMode > const&, local_ref< android::graphics::Shader_::TileMode > const&);
	}; //class BitmapShader

} //namespace graphics
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_BITMAPSHADER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_BITMAPSHADER_HPP_IMPL
#define J2CPP_ANDROID_GRAPHICS_BITMAPSHADER_HPP_IMPL

namespace j2cpp {



android::graphics::BitmapShader::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::graphics::BitmapShader::operator local_ref<android::graphics::Shader>() const
{
	return local_ref<android::graphics::Shader>(get_jobject());
}


android::graphics::BitmapShader::BitmapShader(local_ref< android::graphics::Bitmap > const &a0, local_ref< android::graphics::Shader_::TileMode > const &a1, local_ref< android::graphics::Shader_::TileMode > const &a2)
: object<android::graphics::BitmapShader>(
	call_new_object<
		android::graphics::BitmapShader::J2CPP_CLASS_NAME,
		android::graphics::BitmapShader::J2CPP_METHOD_NAME(0),
		android::graphics::BitmapShader::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1, a2)
)
{
}



J2CPP_DEFINE_CLASS(android::graphics::BitmapShader,"android/graphics/BitmapShader")
J2CPP_DEFINE_METHOD(android::graphics::BitmapShader,0,"<init>","(Landroid/graphics/Bitmap;Landroid/graphics/Shader$TileMode;Landroid/graphics/Shader$TileMode;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_BITMAPSHADER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
