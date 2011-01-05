/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.graphics.ComposeShader
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_COMPOSESHADER_HPP_DECL
#define J2CPP_ANDROID_GRAPHICS_COMPOSESHADER_HPP_DECL


namespace j2cpp { namespace android { namespace graphics { namespace PorterDuff_ { class Mode; } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace graphics { class Shader; } } }
namespace j2cpp { namespace android { namespace graphics { class Xfermode; } } }


#include <android/graphics/PorterDuff.hpp>
#include <android/graphics/Shader.hpp>
#include <android/graphics/Xfermode.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace graphics {

	class ComposeShader;
	class ComposeShader
		: public object<ComposeShader>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit ComposeShader(jobject jobj)
		: object<ComposeShader>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::graphics::Shader>() const;


		ComposeShader(local_ref< android::graphics::Shader > const&, local_ref< android::graphics::Shader > const&, local_ref< android::graphics::Xfermode > const&);
		ComposeShader(local_ref< android::graphics::Shader > const&, local_ref< android::graphics::Shader > const&, local_ref< android::graphics::PorterDuff_::Mode > const&);
	}; //class ComposeShader

} //namespace graphics
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_COMPOSESHADER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_COMPOSESHADER_HPP_IMPL
#define J2CPP_ANDROID_GRAPHICS_COMPOSESHADER_HPP_IMPL

namespace j2cpp {



android::graphics::ComposeShader::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::graphics::ComposeShader::operator local_ref<android::graphics::Shader>() const
{
	return local_ref<android::graphics::Shader>(get_jobject());
}


android::graphics::ComposeShader::ComposeShader(local_ref< android::graphics::Shader > const &a0, local_ref< android::graphics::Shader > const &a1, local_ref< android::graphics::Xfermode > const &a2)
: object<android::graphics::ComposeShader>(
	call_new_object<
		android::graphics::ComposeShader::J2CPP_CLASS_NAME,
		android::graphics::ComposeShader::J2CPP_METHOD_NAME(0),
		android::graphics::ComposeShader::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1, a2)
)
{
}



android::graphics::ComposeShader::ComposeShader(local_ref< android::graphics::Shader > const &a0, local_ref< android::graphics::Shader > const &a1, local_ref< android::graphics::PorterDuff_::Mode > const &a2)
: object<android::graphics::ComposeShader>(
	call_new_object<
		android::graphics::ComposeShader::J2CPP_CLASS_NAME,
		android::graphics::ComposeShader::J2CPP_METHOD_NAME(1),
		android::graphics::ComposeShader::J2CPP_METHOD_SIGNATURE(1)
	>(a0, a1, a2)
)
{
}



J2CPP_DEFINE_CLASS(android::graphics::ComposeShader,"android/graphics/ComposeShader")
J2CPP_DEFINE_METHOD(android::graphics::ComposeShader,0,"<init>","(Landroid/graphics/Shader;Landroid/graphics/Shader;Landroid/graphics/Xfermode;)V")
J2CPP_DEFINE_METHOD(android::graphics::ComposeShader,1,"<init>","(Landroid/graphics/Shader;Landroid/graphics/Shader;Landroid/graphics/PorterDuff$Mode;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_COMPOSESHADER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
