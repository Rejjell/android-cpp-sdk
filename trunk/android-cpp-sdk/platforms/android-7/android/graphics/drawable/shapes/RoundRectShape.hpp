/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.graphics.drawable.shapes.RoundRectShape
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_DRAWABLE_SHAPES_ROUNDRECTSHAPE_HPP_DECL
#define J2CPP_ANDROID_GRAPHICS_DRAWABLE_SHAPES_ROUNDRECTSHAPE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace graphics { class Paint; } } }
namespace j2cpp { namespace android { namespace graphics { class Canvas; } } }
namespace j2cpp { namespace android { namespace graphics { namespace drawable { namespace shapes { class Shape; } } } } }
namespace j2cpp { namespace android { namespace graphics { namespace drawable { namespace shapes { class RectShape; } } } } }
namespace j2cpp { namespace android { namespace graphics { class RectF; } } }


#include <android/graphics/Canvas.hpp>
#include <android/graphics/Paint.hpp>
#include <android/graphics/RectF.hpp>
#include <android/graphics/drawable/shapes/RectShape.hpp>
#include <android/graphics/drawable/shapes/Shape.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace graphics { namespace drawable { namespace shapes {

	class RoundRectShape;
	class RoundRectShape
		: public object<RoundRectShape>
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

		explicit RoundRectShape(jobject jobj)
		: object<RoundRectShape>(jobj)
		{
		}

		operator local_ref<android::graphics::drawable::shapes::RectShape>() const;


		RoundRectShape(local_ref< array<jfloat,1> > const&, local_ref< android::graphics::RectF > const&, local_ref< array<jfloat,1> > const&);
		void draw(local_ref< android::graphics::Canvas >  const&, local_ref< android::graphics::Paint >  const&);
		local_ref< android::graphics::drawable::shapes::RoundRectShape > clone();
		local_ref< android::graphics::drawable::shapes::RectShape > clone_1();
		local_ref< android::graphics::drawable::shapes::Shape > clone_2();
		local_ref< java::lang::Object > clone_3();
	}; //class RoundRectShape

} //namespace shapes
} //namespace drawable
} //namespace graphics
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_DRAWABLE_SHAPES_ROUNDRECTSHAPE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_DRAWABLE_SHAPES_ROUNDRECTSHAPE_HPP_IMPL
#define J2CPP_ANDROID_GRAPHICS_DRAWABLE_SHAPES_ROUNDRECTSHAPE_HPP_IMPL

namespace j2cpp {



android::graphics::drawable::shapes::RoundRectShape::operator local_ref<android::graphics::drawable::shapes::RectShape>() const
{
	return local_ref<android::graphics::drawable::shapes::RectShape>(get_jobject());
}


android::graphics::drawable::shapes::RoundRectShape::RoundRectShape(local_ref< array<jfloat,1> > const &a0, local_ref< android::graphics::RectF > const &a1, local_ref< array<jfloat,1> > const &a2)
: object<android::graphics::drawable::shapes::RoundRectShape>(
	call_new_object<
		android::graphics::drawable::shapes::RoundRectShape::J2CPP_CLASS_NAME,
		android::graphics::drawable::shapes::RoundRectShape::J2CPP_METHOD_NAME(0),
		android::graphics::drawable::shapes::RoundRectShape::J2CPP_METHOD_SIGNATURE(0)>
	(a0, a1, a2)
)
{
}


void android::graphics::drawable::shapes::RoundRectShape::draw(local_ref< android::graphics::Canvas > const &a0, local_ref< android::graphics::Paint > const &a1)
{
	return call_method<
		android::graphics::drawable::shapes::RoundRectShape::J2CPP_CLASS_NAME,
		android::graphics::drawable::shapes::RoundRectShape::J2CPP_METHOD_NAME(1),
		android::graphics::drawable::shapes::RoundRectShape::J2CPP_METHOD_SIGNATURE(1), 
		void >
	(get_jobject(), a0, a1);
}


local_ref< android::graphics::drawable::shapes::RoundRectShape > android::graphics::drawable::shapes::RoundRectShape::clone()
{
	return call_method<
		android::graphics::drawable::shapes::RoundRectShape::J2CPP_CLASS_NAME,
		android::graphics::drawable::shapes::RoundRectShape::J2CPP_METHOD_NAME(3),
		android::graphics::drawable::shapes::RoundRectShape::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< android::graphics::drawable::shapes::RoundRectShape > >
	(get_jobject());
}

local_ref< android::graphics::drawable::shapes::RectShape > android::graphics::drawable::shapes::RoundRectShape::clone_1()
{
	return call_method<
		android::graphics::drawable::shapes::RoundRectShape::J2CPP_CLASS_NAME,
		android::graphics::drawable::shapes::RoundRectShape::J2CPP_METHOD_NAME(4),
		android::graphics::drawable::shapes::RoundRectShape::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< android::graphics::drawable::shapes::RectShape > >
	(get_jobject());
}

local_ref< android::graphics::drawable::shapes::Shape > android::graphics::drawable::shapes::RoundRectShape::clone_2()
{
	return call_method<
		android::graphics::drawable::shapes::RoundRectShape::J2CPP_CLASS_NAME,
		android::graphics::drawable::shapes::RoundRectShape::J2CPP_METHOD_NAME(5),
		android::graphics::drawable::shapes::RoundRectShape::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< android::graphics::drawable::shapes::Shape > >
	(get_jobject());
}

local_ref< java::lang::Object > android::graphics::drawable::shapes::RoundRectShape::clone_3()
{
	return call_method<
		android::graphics::drawable::shapes::RoundRectShape::J2CPP_CLASS_NAME,
		android::graphics::drawable::shapes::RoundRectShape::J2CPP_METHOD_NAME(6),
		android::graphics::drawable::shapes::RoundRectShape::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::lang::Object > >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(android::graphics::drawable::shapes::RoundRectShape,"android/graphics/drawable/shapes/RoundRectShape")
J2CPP_DEFINE_METHOD(android::graphics::drawable::shapes::RoundRectShape,0,"<init>","([FLandroid/graphics/RectF;[F)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::shapes::RoundRectShape,1,"draw","(Landroid/graphics/Canvas;Landroid/graphics/Paint;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::shapes::RoundRectShape,2,"onResize","(FF)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::shapes::RoundRectShape,3,"clone","()Landroid/graphics/drawable/shapes/RoundRectShape;")
J2CPP_DEFINE_METHOD(android::graphics::drawable::shapes::RoundRectShape,4,"clone","()Landroid/graphics/drawable/shapes/RectShape;")
J2CPP_DEFINE_METHOD(android::graphics::drawable::shapes::RoundRectShape,5,"clone","()Landroid/graphics/drawable/shapes/Shape;")
J2CPP_DEFINE_METHOD(android::graphics::drawable::shapes::RoundRectShape,6,"clone","()Ljava/lang/Object;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_DRAWABLE_SHAPES_ROUNDRECTSHAPE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
