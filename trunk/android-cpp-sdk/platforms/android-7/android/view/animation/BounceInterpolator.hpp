/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.view.animation.BounceInterpolator
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_ANIMATION_BOUNCEINTERPOLATOR_HPP_DECL
#define J2CPP_ANDROID_VIEW_ANIMATION_BOUNCEINTERPOLATOR_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace view { namespace animation { class Interpolator; } } } }
namespace j2cpp { namespace android { namespace util { class AttributeSet; } } }


#include <android/content/Context.hpp>
#include <android/util/AttributeSet.hpp>
#include <android/view/animation/Interpolator.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace view { namespace animation {

	class BounceInterpolator;
	class BounceInterpolator
		: public object<BounceInterpolator>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		explicit BounceInterpolator(jobject jobj)
		: object<BounceInterpolator>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::view::animation::Interpolator>() const;


		BounceInterpolator();
		BounceInterpolator(local_ref< android::content::Context > const&, local_ref< android::util::AttributeSet > const&);
		jfloat getInterpolation(jfloat);
	}; //class BounceInterpolator

} //namespace animation
} //namespace view
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_ANIMATION_BOUNCEINTERPOLATOR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_ANIMATION_BOUNCEINTERPOLATOR_HPP_IMPL
#define J2CPP_ANDROID_VIEW_ANIMATION_BOUNCEINTERPOLATOR_HPP_IMPL

namespace j2cpp {



android::view::animation::BounceInterpolator::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::view::animation::BounceInterpolator::operator local_ref<android::view::animation::Interpolator>() const
{
	return local_ref<android::view::animation::Interpolator>(get_jobject());
}


android::view::animation::BounceInterpolator::BounceInterpolator()
: object<android::view::animation::BounceInterpolator>(
	call_new_object<
		android::view::animation::BounceInterpolator::J2CPP_CLASS_NAME,
		android::view::animation::BounceInterpolator::J2CPP_METHOD_NAME(0),
		android::view::animation::BounceInterpolator::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}



android::view::animation::BounceInterpolator::BounceInterpolator(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1)
: object<android::view::animation::BounceInterpolator>(
	call_new_object<
		android::view::animation::BounceInterpolator::J2CPP_CLASS_NAME,
		android::view::animation::BounceInterpolator::J2CPP_METHOD_NAME(1),
		android::view::animation::BounceInterpolator::J2CPP_METHOD_SIGNATURE(1)>
	(a0, a1)
)
{
}


jfloat android::view::animation::BounceInterpolator::getInterpolation(jfloat a0)
{
	return call_method<
		android::view::animation::BounceInterpolator::J2CPP_CLASS_NAME,
		android::view::animation::BounceInterpolator::J2CPP_METHOD_NAME(2),
		android::view::animation::BounceInterpolator::J2CPP_METHOD_SIGNATURE(2), 
		jfloat >
	(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(android::view::animation::BounceInterpolator,"android/view/animation/BounceInterpolator")
J2CPP_DEFINE_METHOD(android::view::animation::BounceInterpolator,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::view::animation::BounceInterpolator,1,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;)V")
J2CPP_DEFINE_METHOD(android::view::animation::BounceInterpolator,2,"getInterpolation","(F)F")

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_ANIMATION_BOUNCEINTERPOLATOR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
