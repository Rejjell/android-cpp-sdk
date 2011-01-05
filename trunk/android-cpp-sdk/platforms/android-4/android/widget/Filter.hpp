/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.widget.Filter
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_FILTER_HPP_DECL
#define J2CPP_ANDROID_WIDGET_FILTER_HPP_DECL


namespace j2cpp { namespace android { namespace widget { namespace Filter_ { class FilterListener; } } } }
namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/widget/Filter.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace widget {

	class Filter;
	namespace Filter_ {

		class FilterResults;
		class FilterResults
			: public object<FilterResults>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_FIELD(0)
			J2CPP_DECLARE_FIELD(1)

			explicit FilterResults(jobject jobj)
			: object<FilterResults>(jobj)
			, values(jobj)
			, count(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			FilterResults();

			field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::Object > > values;
			field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > count;
		}; //class FilterResults

		class FilterListener;
		class FilterListener
			: public object<FilterListener>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			explicit FilterListener(jobject jobj)
			: object<FilterListener>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			void onFilterComplete(jint);
		}; //class FilterListener

	} //namespace Filter_

	class Filter
		: public object<Filter>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)

		typedef Filter_::FilterResults FilterResults;
		typedef Filter_::FilterListener FilterListener;

		explicit Filter(jobject jobj)
		: object<Filter>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		Filter();
		void filter(local_ref< java::lang::CharSequence >  const&);
		void filter(local_ref< java::lang::CharSequence >  const&, local_ref< android::widget::Filter_::FilterListener >  const&);
		local_ref< java::lang::CharSequence > convertResultToString(local_ref< java::lang::Object >  const&);
	}; //class Filter

} //namespace widget
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_FILTER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_FILTER_HPP_IMPL
#define J2CPP_ANDROID_WIDGET_FILTER_HPP_IMPL

namespace j2cpp {




android::widget::Filter_::FilterResults::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::widget::Filter_::FilterResults::FilterResults()
: object<android::widget::Filter_::FilterResults>(
	call_new_object<
		android::widget::Filter_::FilterResults::J2CPP_CLASS_NAME,
		android::widget::Filter_::FilterResults::J2CPP_METHOD_NAME(0),
		android::widget::Filter_::FilterResults::J2CPP_METHOD_SIGNATURE(0)
	>()
)
, values(get_jobject())
, count(get_jobject())
{
}




J2CPP_DEFINE_CLASS(android::widget::Filter_::FilterResults,"android/widget/Filter$FilterResults")
J2CPP_DEFINE_METHOD(android::widget::Filter_::FilterResults,0,"<init>","()V")
J2CPP_DEFINE_FIELD(android::widget::Filter_::FilterResults,0,"values","Ljava/lang/Object;")
J2CPP_DEFINE_FIELD(android::widget::Filter_::FilterResults,1,"count","I")


android::widget::Filter_::FilterListener::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void android::widget::Filter_::FilterListener::onFilterComplete(jint a0)
{
	return call_method<
		android::widget::Filter_::FilterListener::J2CPP_CLASS_NAME,
		android::widget::Filter_::FilterListener::J2CPP_METHOD_NAME(0),
		android::widget::Filter_::FilterListener::J2CPP_METHOD_SIGNATURE(0), 
		void
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(android::widget::Filter_::FilterListener,"android/widget/Filter$FilterListener")
J2CPP_DEFINE_METHOD(android::widget::Filter_::FilterListener,0,"onFilterComplete","(I)V")



android::widget::Filter::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::widget::Filter::Filter()
: object<android::widget::Filter>(
	call_new_object<
		android::widget::Filter::J2CPP_CLASS_NAME,
		android::widget::Filter::J2CPP_METHOD_NAME(0),
		android::widget::Filter::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}


void android::widget::Filter::filter(local_ref< java::lang::CharSequence > const &a0)
{
	return call_method<
		android::widget::Filter::J2CPP_CLASS_NAME,
		android::widget::Filter::J2CPP_METHOD_NAME(1),
		android::widget::Filter::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject(), a0);
}

void android::widget::Filter::filter(local_ref< java::lang::CharSequence > const &a0, local_ref< android::widget::Filter_::FilterListener > const &a1)
{
	return call_method<
		android::widget::Filter::J2CPP_CLASS_NAME,
		android::widget::Filter::J2CPP_METHOD_NAME(2),
		android::widget::Filter::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject(), a0, a1);
}



local_ref< java::lang::CharSequence > android::widget::Filter::convertResultToString(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		android::widget::Filter::J2CPP_CLASS_NAME,
		android::widget::Filter::J2CPP_METHOD_NAME(5),
		android::widget::Filter::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::lang::CharSequence >
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(android::widget::Filter,"android/widget/Filter")
J2CPP_DEFINE_METHOD(android::widget::Filter,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::widget::Filter,1,"filter","(Ljava/lang/CharSequence;)V")
J2CPP_DEFINE_METHOD(android::widget::Filter,2,"filter","(Ljava/lang/CharSequence;Landroid/widget/Filter$FilterListener;)V")
J2CPP_DEFINE_METHOD(android::widget::Filter,3,"performFiltering","(Ljava/lang/CharSequence;)Landroid/widget/Filter$FilterResults;")
J2CPP_DEFINE_METHOD(android::widget::Filter,4,"publishResults","(Ljava/lang/CharSequence;Landroid/widget/Filter$FilterResults;)V")
J2CPP_DEFINE_METHOD(android::widget::Filter,5,"convertResultToString","(Ljava/lang/Object;)Ljava/lang/CharSequence;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_FILTER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
