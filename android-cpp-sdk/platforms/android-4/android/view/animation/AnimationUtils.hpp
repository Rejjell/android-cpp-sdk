/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.view.animation.AnimationUtils
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_ANIMATION_ANIMATIONUTILS_HPP_DECL
#define J2CPP_ANDROID_VIEW_ANIMATION_ANIMATIONUTILS_HPP_DECL


namespace j2cpp { namespace android { namespace view { namespace animation { class Interpolator; } } } }
namespace j2cpp { namespace android { namespace view { namespace animation { class Animation; } } } }
namespace j2cpp { namespace android { namespace view { namespace animation { class LayoutAnimationController; } } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/content/Context.hpp>
#include <android/view/animation/Animation.hpp>
#include <android/view/animation/Interpolator.hpp>
#include <android/view/animation/LayoutAnimationController.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace view { namespace animation {

	class AnimationUtils;
	class AnimationUtils
		: public object<AnimationUtils>
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
		J2CPP_DECLARE_METHOD(7)

		explicit AnimationUtils(jobject jobj)
		: object<AnimationUtils>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		AnimationUtils();
		static jlong currentAnimationTimeMillis();
		static local_ref< android::view::animation::Animation > loadAnimation(local_ref< android::content::Context >  const&, jint);
		static local_ref< android::view::animation::LayoutAnimationController > loadLayoutAnimation(local_ref< android::content::Context >  const&, jint);
		static local_ref< android::view::animation::Animation > makeInAnimation(local_ref< android::content::Context >  const&, jboolean);
		static local_ref< android::view::animation::Animation > makeOutAnimation(local_ref< android::content::Context >  const&, jboolean);
		static local_ref< android::view::animation::Animation > makeInChildBottomAnimation(local_ref< android::content::Context >  const&);
		static local_ref< android::view::animation::Interpolator > loadInterpolator(local_ref< android::content::Context >  const&, jint);
	}; //class AnimationUtils

} //namespace animation
} //namespace view
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_ANIMATION_ANIMATIONUTILS_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_ANIMATION_ANIMATIONUTILS_HPP_IMPL
#define J2CPP_ANDROID_VIEW_ANIMATION_ANIMATIONUTILS_HPP_IMPL

namespace j2cpp {



android::view::animation::AnimationUtils::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::view::animation::AnimationUtils::AnimationUtils()
: object<android::view::animation::AnimationUtils>(
	call_new_object<
		android::view::animation::AnimationUtils::J2CPP_CLASS_NAME,
		android::view::animation::AnimationUtils::J2CPP_METHOD_NAME(0),
		android::view::animation::AnimationUtils::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}


jlong android::view::animation::AnimationUtils::currentAnimationTimeMillis()
{
	return call_static_method<
		android::view::animation::AnimationUtils::J2CPP_CLASS_NAME,
		android::view::animation::AnimationUtils::J2CPP_METHOD_NAME(1),
		android::view::animation::AnimationUtils::J2CPP_METHOD_SIGNATURE(1), 
		jlong >
	();
}

local_ref< android::view::animation::Animation > android::view::animation::AnimationUtils::loadAnimation(local_ref< android::content::Context > const &a0, jint a1)
{
	return call_static_method<
		android::view::animation::AnimationUtils::J2CPP_CLASS_NAME,
		android::view::animation::AnimationUtils::J2CPP_METHOD_NAME(2),
		android::view::animation::AnimationUtils::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< android::view::animation::Animation > >
	(a0, a1);
}

local_ref< android::view::animation::LayoutAnimationController > android::view::animation::AnimationUtils::loadLayoutAnimation(local_ref< android::content::Context > const &a0, jint a1)
{
	return call_static_method<
		android::view::animation::AnimationUtils::J2CPP_CLASS_NAME,
		android::view::animation::AnimationUtils::J2CPP_METHOD_NAME(3),
		android::view::animation::AnimationUtils::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< android::view::animation::LayoutAnimationController > >
	(a0, a1);
}

local_ref< android::view::animation::Animation > android::view::animation::AnimationUtils::makeInAnimation(local_ref< android::content::Context > const &a0, jboolean a1)
{
	return call_static_method<
		android::view::animation::AnimationUtils::J2CPP_CLASS_NAME,
		android::view::animation::AnimationUtils::J2CPP_METHOD_NAME(4),
		android::view::animation::AnimationUtils::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< android::view::animation::Animation > >
	(a0, a1);
}

local_ref< android::view::animation::Animation > android::view::animation::AnimationUtils::makeOutAnimation(local_ref< android::content::Context > const &a0, jboolean a1)
{
	return call_static_method<
		android::view::animation::AnimationUtils::J2CPP_CLASS_NAME,
		android::view::animation::AnimationUtils::J2CPP_METHOD_NAME(5),
		android::view::animation::AnimationUtils::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< android::view::animation::Animation > >
	(a0, a1);
}

local_ref< android::view::animation::Animation > android::view::animation::AnimationUtils::makeInChildBottomAnimation(local_ref< android::content::Context > const &a0)
{
	return call_static_method<
		android::view::animation::AnimationUtils::J2CPP_CLASS_NAME,
		android::view::animation::AnimationUtils::J2CPP_METHOD_NAME(6),
		android::view::animation::AnimationUtils::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< android::view::animation::Animation > >
	(a0);
}

local_ref< android::view::animation::Interpolator > android::view::animation::AnimationUtils::loadInterpolator(local_ref< android::content::Context > const &a0, jint a1)
{
	return call_static_method<
		android::view::animation::AnimationUtils::J2CPP_CLASS_NAME,
		android::view::animation::AnimationUtils::J2CPP_METHOD_NAME(7),
		android::view::animation::AnimationUtils::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< android::view::animation::Interpolator > >
	(a0, a1);
}


J2CPP_DEFINE_CLASS(android::view::animation::AnimationUtils,"android/view/animation/AnimationUtils")
J2CPP_DEFINE_METHOD(android::view::animation::AnimationUtils,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::view::animation::AnimationUtils,1,"currentAnimationTimeMillis","()J")
J2CPP_DEFINE_METHOD(android::view::animation::AnimationUtils,2,"loadAnimation","(Landroid/content/Context;I)Landroid/view/animation/Animation;")
J2CPP_DEFINE_METHOD(android::view::animation::AnimationUtils,3,"loadLayoutAnimation","(Landroid/content/Context;I)Landroid/view/animation/LayoutAnimationController;")
J2CPP_DEFINE_METHOD(android::view::animation::AnimationUtils,4,"makeInAnimation","(Landroid/content/Context;Z)Landroid/view/animation/Animation;")
J2CPP_DEFINE_METHOD(android::view::animation::AnimationUtils,5,"makeOutAnimation","(Landroid/content/Context;Z)Landroid/view/animation/Animation;")
J2CPP_DEFINE_METHOD(android::view::animation::AnimationUtils,6,"makeInChildBottomAnimation","(Landroid/content/Context;)Landroid/view/animation/Animation;")
J2CPP_DEFINE_METHOD(android::view::animation::AnimationUtils,7,"loadInterpolator","(Landroid/content/Context;I)Landroid/view/animation/Interpolator;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_ANIMATION_ANIMATIONUTILS_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
