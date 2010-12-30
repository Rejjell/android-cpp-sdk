/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.widget.SectionIndexer
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_SECTIONINDEXER_HPP_DECL
#define J2CPP_ANDROID_WIDGET_SECTIONINDEXER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace widget {

	class SectionIndexer;
	class SectionIndexer
		: public object<SectionIndexer>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		explicit SectionIndexer(jobject jobj)
		: object<SectionIndexer>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		local_ref< array< local_ref< java::lang::Object >, 1> > getSections();
		jint getPositionForSection(jint);
		jint getSectionForPosition(jint);
	}; //class SectionIndexer

} //namespace widget
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_SECTIONINDEXER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_SECTIONINDEXER_HPP_IMPL
#define J2CPP_ANDROID_WIDGET_SECTIONINDEXER_HPP_IMPL

namespace j2cpp {



android::widget::SectionIndexer::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

local_ref< array< local_ref< java::lang::Object >, 1> > android::widget::SectionIndexer::getSections()
{
	return call_method<
		android::widget::SectionIndexer::J2CPP_CLASS_NAME,
		android::widget::SectionIndexer::J2CPP_METHOD_NAME(0),
		android::widget::SectionIndexer::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< array< local_ref< java::lang::Object >, 1> > >
	(get_jobject());
}

jint android::widget::SectionIndexer::getPositionForSection(jint a0)
{
	return call_method<
		android::widget::SectionIndexer::J2CPP_CLASS_NAME,
		android::widget::SectionIndexer::J2CPP_METHOD_NAME(1),
		android::widget::SectionIndexer::J2CPP_METHOD_SIGNATURE(1), 
		jint >
	(get_jobject(), a0);
}

jint android::widget::SectionIndexer::getSectionForPosition(jint a0)
{
	return call_method<
		android::widget::SectionIndexer::J2CPP_CLASS_NAME,
		android::widget::SectionIndexer::J2CPP_METHOD_NAME(2),
		android::widget::SectionIndexer::J2CPP_METHOD_SIGNATURE(2), 
		jint >
	(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(android::widget::SectionIndexer,"android/widget/SectionIndexer")
J2CPP_DEFINE_METHOD(android::widget::SectionIndexer,0,"getSections","()[java.lang.Object")
J2CPP_DEFINE_METHOD(android::widget::SectionIndexer,1,"getPositionForSection","(I)I")
J2CPP_DEFINE_METHOD(android::widget::SectionIndexer,2,"getSectionForPosition","(I)I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_SECTIONINDEXER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
