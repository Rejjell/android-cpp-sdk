/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.widget.ExpandableListAdapter
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_EXPANDABLELISTADAPTER_HPP_DECL
#define J2CPP_ANDROID_WIDGET_EXPANDABLELISTADAPTER_HPP_DECL


namespace j2cpp { namespace android { namespace view { class View; } } }
namespace j2cpp { namespace android { namespace view { class ViewGroup; } } }
namespace j2cpp { namespace android { namespace database { class DataSetObserver; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/database/DataSetObserver.hpp>
#include <android/view/View.hpp>
#include <android/view/ViewGroup.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace widget {

	class ExpandableListAdapter;
	class ExpandableListAdapter
		: public object<ExpandableListAdapter>
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
		J2CPP_DECLARE_METHOD(8)
		J2CPP_DECLARE_METHOD(9)
		J2CPP_DECLARE_METHOD(10)
		J2CPP_DECLARE_METHOD(11)
		J2CPP_DECLARE_METHOD(12)
		J2CPP_DECLARE_METHOD(13)
		J2CPP_DECLARE_METHOD(14)
		J2CPP_DECLARE_METHOD(15)
		J2CPP_DECLARE_METHOD(16)
		J2CPP_DECLARE_METHOD(17)

		explicit ExpandableListAdapter(jobject jobj)
		: object<ExpandableListAdapter>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		void registerDataSetObserver(local_ref< android::database::DataSetObserver >  const&);
		void unregisterDataSetObserver(local_ref< android::database::DataSetObserver >  const&);
		jint getGroupCount();
		jint getChildrenCount(jint);
		local_ref< java::lang::Object > getGroup(jint);
		local_ref< java::lang::Object > getChild(jint, jint);
		jlong getGroupId(jint);
		jlong getChildId(jint, jint);
		jboolean hasStableIds();
		local_ref< android::view::View > getGroupView(jint, jboolean, local_ref< android::view::View >  const&, local_ref< android::view::ViewGroup >  const&);
		local_ref< android::view::View > getChildView(jint, jint, jboolean, local_ref< android::view::View >  const&, local_ref< android::view::ViewGroup >  const&);
		jboolean isChildSelectable(jint, jint);
		jboolean areAllItemsEnabled();
		jboolean isEmpty();
		void onGroupExpanded(jint);
		void onGroupCollapsed(jint);
		jlong getCombinedChildId(jlong, jlong);
		jlong getCombinedGroupId(jlong);
	}; //class ExpandableListAdapter

} //namespace widget
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_EXPANDABLELISTADAPTER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_EXPANDABLELISTADAPTER_HPP_IMPL
#define J2CPP_ANDROID_WIDGET_EXPANDABLELISTADAPTER_HPP_IMPL

namespace j2cpp {



android::widget::ExpandableListAdapter::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void android::widget::ExpandableListAdapter::registerDataSetObserver(local_ref< android::database::DataSetObserver > const &a0)
{
	return call_method<
		android::widget::ExpandableListAdapter::J2CPP_CLASS_NAME,
		android::widget::ExpandableListAdapter::J2CPP_METHOD_NAME(0),
		android::widget::ExpandableListAdapter::J2CPP_METHOD_SIGNATURE(0), 
		void
	>(get_jobject(), a0);
}

void android::widget::ExpandableListAdapter::unregisterDataSetObserver(local_ref< android::database::DataSetObserver > const &a0)
{
	return call_method<
		android::widget::ExpandableListAdapter::J2CPP_CLASS_NAME,
		android::widget::ExpandableListAdapter::J2CPP_METHOD_NAME(1),
		android::widget::ExpandableListAdapter::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject(), a0);
}

jint android::widget::ExpandableListAdapter::getGroupCount()
{
	return call_method<
		android::widget::ExpandableListAdapter::J2CPP_CLASS_NAME,
		android::widget::ExpandableListAdapter::J2CPP_METHOD_NAME(2),
		android::widget::ExpandableListAdapter::J2CPP_METHOD_SIGNATURE(2), 
		jint
	>(get_jobject());
}

jint android::widget::ExpandableListAdapter::getChildrenCount(jint a0)
{
	return call_method<
		android::widget::ExpandableListAdapter::J2CPP_CLASS_NAME,
		android::widget::ExpandableListAdapter::J2CPP_METHOD_NAME(3),
		android::widget::ExpandableListAdapter::J2CPP_METHOD_SIGNATURE(3), 
		jint
	>(get_jobject(), a0);
}

local_ref< java::lang::Object > android::widget::ExpandableListAdapter::getGroup(jint a0)
{
	return call_method<
		android::widget::ExpandableListAdapter::J2CPP_CLASS_NAME,
		android::widget::ExpandableListAdapter::J2CPP_METHOD_NAME(4),
		android::widget::ExpandableListAdapter::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::lang::Object >
	>(get_jobject(), a0);
}

local_ref< java::lang::Object > android::widget::ExpandableListAdapter::getChild(jint a0, jint a1)
{
	return call_method<
		android::widget::ExpandableListAdapter::J2CPP_CLASS_NAME,
		android::widget::ExpandableListAdapter::J2CPP_METHOD_NAME(5),
		android::widget::ExpandableListAdapter::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::lang::Object >
	>(get_jobject(), a0, a1);
}

jlong android::widget::ExpandableListAdapter::getGroupId(jint a0)
{
	return call_method<
		android::widget::ExpandableListAdapter::J2CPP_CLASS_NAME,
		android::widget::ExpandableListAdapter::J2CPP_METHOD_NAME(6),
		android::widget::ExpandableListAdapter::J2CPP_METHOD_SIGNATURE(6), 
		jlong
	>(get_jobject(), a0);
}

jlong android::widget::ExpandableListAdapter::getChildId(jint a0, jint a1)
{
	return call_method<
		android::widget::ExpandableListAdapter::J2CPP_CLASS_NAME,
		android::widget::ExpandableListAdapter::J2CPP_METHOD_NAME(7),
		android::widget::ExpandableListAdapter::J2CPP_METHOD_SIGNATURE(7), 
		jlong
	>(get_jobject(), a0, a1);
}

jboolean android::widget::ExpandableListAdapter::hasStableIds()
{
	return call_method<
		android::widget::ExpandableListAdapter::J2CPP_CLASS_NAME,
		android::widget::ExpandableListAdapter::J2CPP_METHOD_NAME(8),
		android::widget::ExpandableListAdapter::J2CPP_METHOD_SIGNATURE(8), 
		jboolean
	>(get_jobject());
}

local_ref< android::view::View > android::widget::ExpandableListAdapter::getGroupView(jint a0, jboolean a1, local_ref< android::view::View > const &a2, local_ref< android::view::ViewGroup > const &a3)
{
	return call_method<
		android::widget::ExpandableListAdapter::J2CPP_CLASS_NAME,
		android::widget::ExpandableListAdapter::J2CPP_METHOD_NAME(9),
		android::widget::ExpandableListAdapter::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< android::view::View >
	>(get_jobject(), a0, a1, a2, a3);
}

local_ref< android::view::View > android::widget::ExpandableListAdapter::getChildView(jint a0, jint a1, jboolean a2, local_ref< android::view::View > const &a3, local_ref< android::view::ViewGroup > const &a4)
{
	return call_method<
		android::widget::ExpandableListAdapter::J2CPP_CLASS_NAME,
		android::widget::ExpandableListAdapter::J2CPP_METHOD_NAME(10),
		android::widget::ExpandableListAdapter::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< android::view::View >
	>(get_jobject(), a0, a1, a2, a3, a4);
}

jboolean android::widget::ExpandableListAdapter::isChildSelectable(jint a0, jint a1)
{
	return call_method<
		android::widget::ExpandableListAdapter::J2CPP_CLASS_NAME,
		android::widget::ExpandableListAdapter::J2CPP_METHOD_NAME(11),
		android::widget::ExpandableListAdapter::J2CPP_METHOD_SIGNATURE(11), 
		jboolean
	>(get_jobject(), a0, a1);
}

jboolean android::widget::ExpandableListAdapter::areAllItemsEnabled()
{
	return call_method<
		android::widget::ExpandableListAdapter::J2CPP_CLASS_NAME,
		android::widget::ExpandableListAdapter::J2CPP_METHOD_NAME(12),
		android::widget::ExpandableListAdapter::J2CPP_METHOD_SIGNATURE(12), 
		jboolean
	>(get_jobject());
}

jboolean android::widget::ExpandableListAdapter::isEmpty()
{
	return call_method<
		android::widget::ExpandableListAdapter::J2CPP_CLASS_NAME,
		android::widget::ExpandableListAdapter::J2CPP_METHOD_NAME(13),
		android::widget::ExpandableListAdapter::J2CPP_METHOD_SIGNATURE(13), 
		jboolean
	>(get_jobject());
}

void android::widget::ExpandableListAdapter::onGroupExpanded(jint a0)
{
	return call_method<
		android::widget::ExpandableListAdapter::J2CPP_CLASS_NAME,
		android::widget::ExpandableListAdapter::J2CPP_METHOD_NAME(14),
		android::widget::ExpandableListAdapter::J2CPP_METHOD_SIGNATURE(14), 
		void
	>(get_jobject(), a0);
}

void android::widget::ExpandableListAdapter::onGroupCollapsed(jint a0)
{
	return call_method<
		android::widget::ExpandableListAdapter::J2CPP_CLASS_NAME,
		android::widget::ExpandableListAdapter::J2CPP_METHOD_NAME(15),
		android::widget::ExpandableListAdapter::J2CPP_METHOD_SIGNATURE(15), 
		void
	>(get_jobject(), a0);
}

jlong android::widget::ExpandableListAdapter::getCombinedChildId(jlong a0, jlong a1)
{
	return call_method<
		android::widget::ExpandableListAdapter::J2CPP_CLASS_NAME,
		android::widget::ExpandableListAdapter::J2CPP_METHOD_NAME(16),
		android::widget::ExpandableListAdapter::J2CPP_METHOD_SIGNATURE(16), 
		jlong
	>(get_jobject(), a0, a1);
}

jlong android::widget::ExpandableListAdapter::getCombinedGroupId(jlong a0)
{
	return call_method<
		android::widget::ExpandableListAdapter::J2CPP_CLASS_NAME,
		android::widget::ExpandableListAdapter::J2CPP_METHOD_NAME(17),
		android::widget::ExpandableListAdapter::J2CPP_METHOD_SIGNATURE(17), 
		jlong
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(android::widget::ExpandableListAdapter,"android/widget/ExpandableListAdapter")
J2CPP_DEFINE_METHOD(android::widget::ExpandableListAdapter,0,"registerDataSetObserver","(Landroid/database/DataSetObserver;)V")
J2CPP_DEFINE_METHOD(android::widget::ExpandableListAdapter,1,"unregisterDataSetObserver","(Landroid/database/DataSetObserver;)V")
J2CPP_DEFINE_METHOD(android::widget::ExpandableListAdapter,2,"getGroupCount","()I")
J2CPP_DEFINE_METHOD(android::widget::ExpandableListAdapter,3,"getChildrenCount","(I)I")
J2CPP_DEFINE_METHOD(android::widget::ExpandableListAdapter,4,"getGroup","(I)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(android::widget::ExpandableListAdapter,5,"getChild","(II)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(android::widget::ExpandableListAdapter,6,"getGroupId","(I)J")
J2CPP_DEFINE_METHOD(android::widget::ExpandableListAdapter,7,"getChildId","(II)J")
J2CPP_DEFINE_METHOD(android::widget::ExpandableListAdapter,8,"hasStableIds","()Z")
J2CPP_DEFINE_METHOD(android::widget::ExpandableListAdapter,9,"getGroupView","(IZLandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;")
J2CPP_DEFINE_METHOD(android::widget::ExpandableListAdapter,10,"getChildView","(IIZLandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;")
J2CPP_DEFINE_METHOD(android::widget::ExpandableListAdapter,11,"isChildSelectable","(II)Z")
J2CPP_DEFINE_METHOD(android::widget::ExpandableListAdapter,12,"areAllItemsEnabled","()Z")
J2CPP_DEFINE_METHOD(android::widget::ExpandableListAdapter,13,"isEmpty","()Z")
J2CPP_DEFINE_METHOD(android::widget::ExpandableListAdapter,14,"onGroupExpanded","(I)V")
J2CPP_DEFINE_METHOD(android::widget::ExpandableListAdapter,15,"onGroupCollapsed","(I)V")
J2CPP_DEFINE_METHOD(android::widget::ExpandableListAdapter,16,"getCombinedChildId","(JJ)J")
J2CPP_DEFINE_METHOD(android::widget::ExpandableListAdapter,17,"getCombinedGroupId","(J)J")

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_EXPANDABLELISTADAPTER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
