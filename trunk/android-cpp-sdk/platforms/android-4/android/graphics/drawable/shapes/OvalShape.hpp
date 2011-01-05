/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.graphics.drawable.shapes.OvalShape
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_DRAWABLE_SHAPES_OVALSHAPE_HPP_DECL
#define J2CPP_ANDROID_GRAPHICS_DRAWABLE_SHAPES_OVALSHAPE_HPP_DECL


namespace j2cpp { namespace android { namespace graphics { namespace drawable { namespace shapes { class RectShape; } } } } }
namespace j2cpp { namespace android { namespace graphics { namespace drawable { namespace shapes { class Shape; } } } } }
namespace j2cpp { namespace java { namespace lang { class Cloneable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace graphics { class Paint; } } }
namespace j2cpp { namespace android { namespace graphics { class Canvas; } } }


#include <android/graphics/Canvas.hpp>
#include <android/graphics/Paint.hpp>
#include <android/graphics/drawable/shapes/RectShape.hpp>
#include <android/graphics/drawable/shapes/Shape.hpp>
#include <java/lang/Cloneable.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace graphics { namespace drawable { namespace shapes {

	class OvalShape;
	class OvalShape
		: public object<OvalShape>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit OvalShape(jobject jobj)
		: object<OvalShape>(jobj)
		{
		}

		operator local_ref<android::graphics::drawable::shapes::RectShape>() const;
		operator local_ref<android::graphics::drawable::shapes::Shape>() const;
		operator local_ref<java::lang::Cloneable>() const;
		operator local_ref<java::lang::Object>() const;


		OvalShape();
		void draw(local_ref< android::graphics::Canvas >  const&, local_ref< android::graphics::Paint >  const&);
	}; //class OvalShape

} //namespace shapes
} //namespace drawable
} //namespace graphics
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_DRAWABLE_SHAPES_OVALSHAPE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_DRAWABLE_SHAPES_OVALSHAPE_HPP_IMPL
#define J2CPP_ANDROID_GRAPHICS_DRAWABLE_SHAPES_OVALSHAPE_HPP_IMPL

namespace j2cpp {



android::graphics::drawable::shapes::OvalShape::operator local_ref<android::graphics::drawable::shapes::RectShape>() const
{
	return local_ref<android::graphics::drawable::shapes::RectShape>(get_jobject());
}

android::graphics::drawable::shapes::OvalShape::operator local_ref<android::graphics::drawable::shapes::Shape>() const
{
	return local_ref<android::graphics::drawable::shapes::Shape>(get_jobject());
}

android::graphics::drawable::shapes::OvalShape::operator local_ref<java::lang::Cloneable>() const
{
	return local_ref<java::lang::Cloneable>(get_jobject());
}

android::graphics::drawable::shapes::OvalShape::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::graphics::drawable::shapes::OvalShape::OvalShape()
: object<android::graphics::drawable::shapes::OvalShape>(
	call_new_object<
		android::graphics::drawable::shapes::OvalShape::J2CPP_CLASS_NAME,
		android::graphics::drawable::shapes::OvalShape::J2CPP_METHOD_NAME(0),
		android::graphics::drawable::shapes::OvalShape::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}


void android::graphics::drawable::shapes::OvalShape::draw(local_ref< android::graphics::Canvas > const &a0, local_ref< android::graphics::Paint > const &a1)
{
	return call_method<
		android::graphics::drawable::shapes::OvalShape::J2CPP_CLASS_NAME,
		android::graphics::drawable::shapes::OvalShape::J2CPP_METHOD_NAME(1),
		android::graphics::drawable::shapes::OvalShape::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(android::graphics::drawable::shapes::OvalShape,"android/graphics/drawable/shapes/OvalShape")
J2CPP_DEFINE_METHOD(android::graphics::drawable::shapes::OvalShape,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::shapes::OvalShape,1,"draw","(Landroid/graphics/Canvas;Landroid/graphics/Paint;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_DRAWABLE_SHAPES_OVALSHAPE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
