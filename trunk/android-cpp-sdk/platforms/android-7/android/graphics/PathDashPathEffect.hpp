/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.graphics.PathDashPathEffect
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_PATHDASHPATHEFFECT_HPP_DECL
#define J2CPP_ANDROID_GRAPHICS_PATHDASHPATHEFFECT_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Enum; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace android { namespace graphics { class PathEffect; } } }
namespace j2cpp { namespace android { namespace graphics { namespace PathDashPathEffect_ { class Style; } } } }
namespace j2cpp { namespace android { namespace graphics { class Path; } } }


#include <android/graphics/Path.hpp>
#include <android/graphics/PathDashPathEffect.hpp>
#include <android/graphics/PathEffect.hpp>
#include <java/lang/Enum.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace graphics {

	class PathDashPathEffect;
	namespace PathDashPathEffect_ {

		class Style;
		class Style
			: public object<Style>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)
			J2CPP_DECLARE_METHOD(2)
			J2CPP_DECLARE_METHOD(3)
			J2CPP_DECLARE_FIELD(0)
			J2CPP_DECLARE_FIELD(1)
			J2CPP_DECLARE_FIELD(2)
			J2CPP_DECLARE_FIELD(3)

			explicit Style(jobject jobj)
			: object<Style>(jobj)
			{
			}

			operator local_ref<java::lang::Enum>() const;


			static local_ref< array< local_ref< android::graphics::PathDashPathEffect_::Style >, 1> > values();
			static local_ref< android::graphics::PathDashPathEffect_::Style > valueOf(local_ref< java::lang::String >  const&);

			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< android::graphics::PathDashPathEffect_::Style > > MORPH;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< android::graphics::PathDashPathEffect_::Style > > ROTATE;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< android::graphics::PathDashPathEffect_::Style > > TRANSLATE;
		}; //class Style

	} //namespace PathDashPathEffect_

	class PathDashPathEffect
		: public object<PathDashPathEffect>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		typedef PathDashPathEffect_::Style Style;

		explicit PathDashPathEffect(jobject jobj)
		: object<PathDashPathEffect>(jobj)
		{
		}

		operator local_ref<android::graphics::PathEffect>() const;


		PathDashPathEffect(local_ref< android::graphics::Path > const&, jfloat, jfloat, local_ref< android::graphics::PathDashPathEffect_::Style > const&);
	}; //class PathDashPathEffect

} //namespace graphics
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_PATHDASHPATHEFFECT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_PATHDASHPATHEFFECT_HPP_IMPL
#define J2CPP_ANDROID_GRAPHICS_PATHDASHPATHEFFECT_HPP_IMPL

namespace j2cpp {




android::graphics::PathDashPathEffect_::Style::operator local_ref<java::lang::Enum>() const
{
	return local_ref<java::lang::Enum>(get_jobject());
}

local_ref< array< local_ref< android::graphics::PathDashPathEffect_::Style >, 1> > android::graphics::PathDashPathEffect_::Style::values()
{
	return call_static_method<
		android::graphics::PathDashPathEffect_::Style::J2CPP_CLASS_NAME,
		android::graphics::PathDashPathEffect_::Style::J2CPP_METHOD_NAME(0),
		android::graphics::PathDashPathEffect_::Style::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< array< local_ref< android::graphics::PathDashPathEffect_::Style >, 1> > >
	();
}

local_ref< android::graphics::PathDashPathEffect_::Style > android::graphics::PathDashPathEffect_::Style::valueOf(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		android::graphics::PathDashPathEffect_::Style::J2CPP_CLASS_NAME,
		android::graphics::PathDashPathEffect_::Style::J2CPP_METHOD_NAME(1),
		android::graphics::PathDashPathEffect_::Style::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< android::graphics::PathDashPathEffect_::Style > >
	(a0);
}




static_field<
	android::graphics::PathDashPathEffect_::Style::J2CPP_CLASS_NAME,
	android::graphics::PathDashPathEffect_::Style::J2CPP_FIELD_NAME(0),
	android::graphics::PathDashPathEffect_::Style::J2CPP_FIELD_SIGNATURE(0),
	local_ref< android::graphics::PathDashPathEffect_::Style >
> android::graphics::PathDashPathEffect_::Style::MORPH;

static_field<
	android::graphics::PathDashPathEffect_::Style::J2CPP_CLASS_NAME,
	android::graphics::PathDashPathEffect_::Style::J2CPP_FIELD_NAME(1),
	android::graphics::PathDashPathEffect_::Style::J2CPP_FIELD_SIGNATURE(1),
	local_ref< android::graphics::PathDashPathEffect_::Style >
> android::graphics::PathDashPathEffect_::Style::ROTATE;

static_field<
	android::graphics::PathDashPathEffect_::Style::J2CPP_CLASS_NAME,
	android::graphics::PathDashPathEffect_::Style::J2CPP_FIELD_NAME(2),
	android::graphics::PathDashPathEffect_::Style::J2CPP_FIELD_SIGNATURE(2),
	local_ref< android::graphics::PathDashPathEffect_::Style >
> android::graphics::PathDashPathEffect_::Style::TRANSLATE;


J2CPP_DEFINE_CLASS(android::graphics::PathDashPathEffect_::Style,"android/graphics/PathDashPathEffect$Style")
J2CPP_DEFINE_METHOD(android::graphics::PathDashPathEffect_::Style,0,"values","()[android.graphics.PathDashPathEffect.Style")
J2CPP_DEFINE_METHOD(android::graphics::PathDashPathEffect_::Style,1,"valueOf","(Ljava/lang/String;)Landroid/graphics/PathDashPathEffect$Style;")
J2CPP_DEFINE_METHOD(android::graphics::PathDashPathEffect_::Style,2,"<init>","(Ljava/lang/String;I)V")
J2CPP_DEFINE_METHOD(android::graphics::PathDashPathEffect_::Style,3,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::graphics::PathDashPathEffect_::Style,0,"MORPH","Landroid/graphics/PathDashPathEffect$Style;")
J2CPP_DEFINE_FIELD(android::graphics::PathDashPathEffect_::Style,1,"ROTATE","Landroid/graphics/PathDashPathEffect$Style;")
J2CPP_DEFINE_FIELD(android::graphics::PathDashPathEffect_::Style,2,"TRANSLATE","Landroid/graphics/PathDashPathEffect$Style;")
J2CPP_DEFINE_FIELD(android::graphics::PathDashPathEffect_::Style,3,"$VALUES","[android.graphics.PathDashPathEffect.Style")



android::graphics::PathDashPathEffect::operator local_ref<android::graphics::PathEffect>() const
{
	return local_ref<android::graphics::PathEffect>(get_jobject());
}


android::graphics::PathDashPathEffect::PathDashPathEffect(local_ref< android::graphics::Path > const &a0, jfloat a1, jfloat a2, local_ref< android::graphics::PathDashPathEffect_::Style > const &a3)
: object<android::graphics::PathDashPathEffect>(
	call_new_object<
		android::graphics::PathDashPathEffect::J2CPP_CLASS_NAME,
		android::graphics::PathDashPathEffect::J2CPP_METHOD_NAME(0),
		android::graphics::PathDashPathEffect::J2CPP_METHOD_SIGNATURE(0)>
	(a0, a1, a2, a3)
)
{
}



J2CPP_DEFINE_CLASS(android::graphics::PathDashPathEffect,"android/graphics/PathDashPathEffect")
J2CPP_DEFINE_METHOD(android::graphics::PathDashPathEffect,0,"<init>","(Landroid/graphics/Path;FFLandroid/graphics/PathDashPathEffect$Style;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_PATHDASHPATHEFFECT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
