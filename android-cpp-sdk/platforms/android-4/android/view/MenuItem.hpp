/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.view.MenuItem
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_MENUITEM_HPP_DECL
#define J2CPP_ANDROID_VIEW_MENUITEM_HPP_DECL


namespace j2cpp { namespace android { namespace graphics { namespace drawable { class Drawable; } } } }
namespace j2cpp { namespace android { namespace view { class SubMenu; } } }
namespace j2cpp { namespace android { namespace view { namespace MenuItem_ { class OnMenuItemClickListener; } } } }
namespace j2cpp { namespace android { namespace view { namespace ContextMenu_ { class ContextMenuInfo; } } } }
namespace j2cpp { namespace android { namespace content { class Intent; } } }
namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/content/Intent.hpp>
#include <android/graphics/drawable/Drawable.hpp>
#include <android/view/ContextMenu.hpp>
#include <android/view/MenuItem.hpp>
#include <android/view/SubMenu.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace view {

	class MenuItem;
	namespace MenuItem_ {

		class OnMenuItemClickListener;
		class OnMenuItemClickListener
			: public object<OnMenuItemClickListener>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			explicit OnMenuItemClickListener(jobject jobj)
			: object<OnMenuItemClickListener>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			jboolean onMenuItemClick(local_ref< android::view::MenuItem >  const&);
		}; //class OnMenuItemClickListener

	} //namespace MenuItem_

	class MenuItem
		: public object<MenuItem>
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
		J2CPP_DECLARE_METHOD(18)
		J2CPP_DECLARE_METHOD(19)
		J2CPP_DECLARE_METHOD(20)
		J2CPP_DECLARE_METHOD(21)
		J2CPP_DECLARE_METHOD(22)
		J2CPP_DECLARE_METHOD(23)
		J2CPP_DECLARE_METHOD(24)
		J2CPP_DECLARE_METHOD(25)
		J2CPP_DECLARE_METHOD(26)
		J2CPP_DECLARE_METHOD(27)
		J2CPP_DECLARE_METHOD(28)
		J2CPP_DECLARE_METHOD(29)

		typedef MenuItem_::OnMenuItemClickListener OnMenuItemClickListener;

		explicit MenuItem(jobject jobj)
		: object<MenuItem>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		jint getItemId();
		jint getGroupId();
		jint getOrder();
		local_ref< android::view::MenuItem > setTitle(local_ref< java::lang::CharSequence >  const&);
		local_ref< android::view::MenuItem > setTitle(jint);
		local_ref< java::lang::CharSequence > getTitle();
		local_ref< android::view::MenuItem > setTitleCondensed(local_ref< java::lang::CharSequence >  const&);
		local_ref< java::lang::CharSequence > getTitleCondensed();
		local_ref< android::view::MenuItem > setIcon(local_ref< android::graphics::drawable::Drawable >  const&);
		local_ref< android::view::MenuItem > setIcon(jint);
		local_ref< android::graphics::drawable::Drawable > getIcon();
		local_ref< android::view::MenuItem > setIntent(local_ref< android::content::Intent >  const&);
		local_ref< android::content::Intent > getIntent();
		local_ref< android::view::MenuItem > setShortcut(jchar, jchar);
		local_ref< android::view::MenuItem > setNumericShortcut(jchar);
		jchar getNumericShortcut();
		local_ref< android::view::MenuItem > setAlphabeticShortcut(jchar);
		jchar getAlphabeticShortcut();
		local_ref< android::view::MenuItem > setCheckable(jboolean);
		jboolean isCheckable();
		local_ref< android::view::MenuItem > setChecked(jboolean);
		jboolean isChecked();
		local_ref< android::view::MenuItem > setVisible(jboolean);
		jboolean isVisible();
		local_ref< android::view::MenuItem > setEnabled(jboolean);
		jboolean isEnabled();
		jboolean hasSubMenu();
		local_ref< android::view::SubMenu > getSubMenu();
		local_ref< android::view::MenuItem > setOnMenuItemClickListener(local_ref< android::view::MenuItem_::OnMenuItemClickListener >  const&);
		local_ref< android::view::ContextMenu_::ContextMenuInfo > getMenuInfo();
	}; //class MenuItem

} //namespace view
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_MENUITEM_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_MENUITEM_HPP_IMPL
#define J2CPP_ANDROID_VIEW_MENUITEM_HPP_IMPL

namespace j2cpp {




android::view::MenuItem_::OnMenuItemClickListener::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

jboolean android::view::MenuItem_::OnMenuItemClickListener::onMenuItemClick(local_ref< android::view::MenuItem > const &a0)
{
	return call_method<
		android::view::MenuItem_::OnMenuItemClickListener::J2CPP_CLASS_NAME,
		android::view::MenuItem_::OnMenuItemClickListener::J2CPP_METHOD_NAME(0),
		android::view::MenuItem_::OnMenuItemClickListener::J2CPP_METHOD_SIGNATURE(0), 
		jboolean >
	(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(android::view::MenuItem_::OnMenuItemClickListener,"android/view/MenuItem$OnMenuItemClickListener")
J2CPP_DEFINE_METHOD(android::view::MenuItem_::OnMenuItemClickListener,0,"onMenuItemClick","(Landroid/view/MenuItem;)Z")



android::view::MenuItem::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

jint android::view::MenuItem::getItemId()
{
	return call_method<
		android::view::MenuItem::J2CPP_CLASS_NAME,
		android::view::MenuItem::J2CPP_METHOD_NAME(0),
		android::view::MenuItem::J2CPP_METHOD_SIGNATURE(0), 
		jint >
	(get_jobject());
}

jint android::view::MenuItem::getGroupId()
{
	return call_method<
		android::view::MenuItem::J2CPP_CLASS_NAME,
		android::view::MenuItem::J2CPP_METHOD_NAME(1),
		android::view::MenuItem::J2CPP_METHOD_SIGNATURE(1), 
		jint >
	(get_jobject());
}

jint android::view::MenuItem::getOrder()
{
	return call_method<
		android::view::MenuItem::J2CPP_CLASS_NAME,
		android::view::MenuItem::J2CPP_METHOD_NAME(2),
		android::view::MenuItem::J2CPP_METHOD_SIGNATURE(2), 
		jint >
	(get_jobject());
}

local_ref< android::view::MenuItem > android::view::MenuItem::setTitle(local_ref< java::lang::CharSequence > const &a0)
{
	return call_method<
		android::view::MenuItem::J2CPP_CLASS_NAME,
		android::view::MenuItem::J2CPP_METHOD_NAME(3),
		android::view::MenuItem::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< android::view::MenuItem > >
	(get_jobject(), a0);
}

local_ref< android::view::MenuItem > android::view::MenuItem::setTitle(jint a0)
{
	return call_method<
		android::view::MenuItem::J2CPP_CLASS_NAME,
		android::view::MenuItem::J2CPP_METHOD_NAME(4),
		android::view::MenuItem::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< android::view::MenuItem > >
	(get_jobject(), a0);
}

local_ref< java::lang::CharSequence > android::view::MenuItem::getTitle()
{
	return call_method<
		android::view::MenuItem::J2CPP_CLASS_NAME,
		android::view::MenuItem::J2CPP_METHOD_NAME(5),
		android::view::MenuItem::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::lang::CharSequence > >
	(get_jobject());
}

local_ref< android::view::MenuItem > android::view::MenuItem::setTitleCondensed(local_ref< java::lang::CharSequence > const &a0)
{
	return call_method<
		android::view::MenuItem::J2CPP_CLASS_NAME,
		android::view::MenuItem::J2CPP_METHOD_NAME(6),
		android::view::MenuItem::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< android::view::MenuItem > >
	(get_jobject(), a0);
}

local_ref< java::lang::CharSequence > android::view::MenuItem::getTitleCondensed()
{
	return call_method<
		android::view::MenuItem::J2CPP_CLASS_NAME,
		android::view::MenuItem::J2CPP_METHOD_NAME(7),
		android::view::MenuItem::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< java::lang::CharSequence > >
	(get_jobject());
}

local_ref< android::view::MenuItem > android::view::MenuItem::setIcon(local_ref< android::graphics::drawable::Drawable > const &a0)
{
	return call_method<
		android::view::MenuItem::J2CPP_CLASS_NAME,
		android::view::MenuItem::J2CPP_METHOD_NAME(8),
		android::view::MenuItem::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< android::view::MenuItem > >
	(get_jobject(), a0);
}

local_ref< android::view::MenuItem > android::view::MenuItem::setIcon(jint a0)
{
	return call_method<
		android::view::MenuItem::J2CPP_CLASS_NAME,
		android::view::MenuItem::J2CPP_METHOD_NAME(9),
		android::view::MenuItem::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< android::view::MenuItem > >
	(get_jobject(), a0);
}

local_ref< android::graphics::drawable::Drawable > android::view::MenuItem::getIcon()
{
	return call_method<
		android::view::MenuItem::J2CPP_CLASS_NAME,
		android::view::MenuItem::J2CPP_METHOD_NAME(10),
		android::view::MenuItem::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< android::graphics::drawable::Drawable > >
	(get_jobject());
}

local_ref< android::view::MenuItem > android::view::MenuItem::setIntent(local_ref< android::content::Intent > const &a0)
{
	return call_method<
		android::view::MenuItem::J2CPP_CLASS_NAME,
		android::view::MenuItem::J2CPP_METHOD_NAME(11),
		android::view::MenuItem::J2CPP_METHOD_SIGNATURE(11), 
		local_ref< android::view::MenuItem > >
	(get_jobject(), a0);
}

local_ref< android::content::Intent > android::view::MenuItem::getIntent()
{
	return call_method<
		android::view::MenuItem::J2CPP_CLASS_NAME,
		android::view::MenuItem::J2CPP_METHOD_NAME(12),
		android::view::MenuItem::J2CPP_METHOD_SIGNATURE(12), 
		local_ref< android::content::Intent > >
	(get_jobject());
}

local_ref< android::view::MenuItem > android::view::MenuItem::setShortcut(jchar a0, jchar a1)
{
	return call_method<
		android::view::MenuItem::J2CPP_CLASS_NAME,
		android::view::MenuItem::J2CPP_METHOD_NAME(13),
		android::view::MenuItem::J2CPP_METHOD_SIGNATURE(13), 
		local_ref< android::view::MenuItem > >
	(get_jobject(), a0, a1);
}

local_ref< android::view::MenuItem > android::view::MenuItem::setNumericShortcut(jchar a0)
{
	return call_method<
		android::view::MenuItem::J2CPP_CLASS_NAME,
		android::view::MenuItem::J2CPP_METHOD_NAME(14),
		android::view::MenuItem::J2CPP_METHOD_SIGNATURE(14), 
		local_ref< android::view::MenuItem > >
	(get_jobject(), a0);
}

jchar android::view::MenuItem::getNumericShortcut()
{
	return call_method<
		android::view::MenuItem::J2CPP_CLASS_NAME,
		android::view::MenuItem::J2CPP_METHOD_NAME(15),
		android::view::MenuItem::J2CPP_METHOD_SIGNATURE(15), 
		jchar >
	(get_jobject());
}

local_ref< android::view::MenuItem > android::view::MenuItem::setAlphabeticShortcut(jchar a0)
{
	return call_method<
		android::view::MenuItem::J2CPP_CLASS_NAME,
		android::view::MenuItem::J2CPP_METHOD_NAME(16),
		android::view::MenuItem::J2CPP_METHOD_SIGNATURE(16), 
		local_ref< android::view::MenuItem > >
	(get_jobject(), a0);
}

jchar android::view::MenuItem::getAlphabeticShortcut()
{
	return call_method<
		android::view::MenuItem::J2CPP_CLASS_NAME,
		android::view::MenuItem::J2CPP_METHOD_NAME(17),
		android::view::MenuItem::J2CPP_METHOD_SIGNATURE(17), 
		jchar >
	(get_jobject());
}

local_ref< android::view::MenuItem > android::view::MenuItem::setCheckable(jboolean a0)
{
	return call_method<
		android::view::MenuItem::J2CPP_CLASS_NAME,
		android::view::MenuItem::J2CPP_METHOD_NAME(18),
		android::view::MenuItem::J2CPP_METHOD_SIGNATURE(18), 
		local_ref< android::view::MenuItem > >
	(get_jobject(), a0);
}

jboolean android::view::MenuItem::isCheckable()
{
	return call_method<
		android::view::MenuItem::J2CPP_CLASS_NAME,
		android::view::MenuItem::J2CPP_METHOD_NAME(19),
		android::view::MenuItem::J2CPP_METHOD_SIGNATURE(19), 
		jboolean >
	(get_jobject());
}

local_ref< android::view::MenuItem > android::view::MenuItem::setChecked(jboolean a0)
{
	return call_method<
		android::view::MenuItem::J2CPP_CLASS_NAME,
		android::view::MenuItem::J2CPP_METHOD_NAME(20),
		android::view::MenuItem::J2CPP_METHOD_SIGNATURE(20), 
		local_ref< android::view::MenuItem > >
	(get_jobject(), a0);
}

jboolean android::view::MenuItem::isChecked()
{
	return call_method<
		android::view::MenuItem::J2CPP_CLASS_NAME,
		android::view::MenuItem::J2CPP_METHOD_NAME(21),
		android::view::MenuItem::J2CPP_METHOD_SIGNATURE(21), 
		jboolean >
	(get_jobject());
}

local_ref< android::view::MenuItem > android::view::MenuItem::setVisible(jboolean a0)
{
	return call_method<
		android::view::MenuItem::J2CPP_CLASS_NAME,
		android::view::MenuItem::J2CPP_METHOD_NAME(22),
		android::view::MenuItem::J2CPP_METHOD_SIGNATURE(22), 
		local_ref< android::view::MenuItem > >
	(get_jobject(), a0);
}

jboolean android::view::MenuItem::isVisible()
{
	return call_method<
		android::view::MenuItem::J2CPP_CLASS_NAME,
		android::view::MenuItem::J2CPP_METHOD_NAME(23),
		android::view::MenuItem::J2CPP_METHOD_SIGNATURE(23), 
		jboolean >
	(get_jobject());
}

local_ref< android::view::MenuItem > android::view::MenuItem::setEnabled(jboolean a0)
{
	return call_method<
		android::view::MenuItem::J2CPP_CLASS_NAME,
		android::view::MenuItem::J2CPP_METHOD_NAME(24),
		android::view::MenuItem::J2CPP_METHOD_SIGNATURE(24), 
		local_ref< android::view::MenuItem > >
	(get_jobject(), a0);
}

jboolean android::view::MenuItem::isEnabled()
{
	return call_method<
		android::view::MenuItem::J2CPP_CLASS_NAME,
		android::view::MenuItem::J2CPP_METHOD_NAME(25),
		android::view::MenuItem::J2CPP_METHOD_SIGNATURE(25), 
		jboolean >
	(get_jobject());
}

jboolean android::view::MenuItem::hasSubMenu()
{
	return call_method<
		android::view::MenuItem::J2CPP_CLASS_NAME,
		android::view::MenuItem::J2CPP_METHOD_NAME(26),
		android::view::MenuItem::J2CPP_METHOD_SIGNATURE(26), 
		jboolean >
	(get_jobject());
}

local_ref< android::view::SubMenu > android::view::MenuItem::getSubMenu()
{
	return call_method<
		android::view::MenuItem::J2CPP_CLASS_NAME,
		android::view::MenuItem::J2CPP_METHOD_NAME(27),
		android::view::MenuItem::J2CPP_METHOD_SIGNATURE(27), 
		local_ref< android::view::SubMenu > >
	(get_jobject());
}

local_ref< android::view::MenuItem > android::view::MenuItem::setOnMenuItemClickListener(local_ref< android::view::MenuItem_::OnMenuItemClickListener > const &a0)
{
	return call_method<
		android::view::MenuItem::J2CPP_CLASS_NAME,
		android::view::MenuItem::J2CPP_METHOD_NAME(28),
		android::view::MenuItem::J2CPP_METHOD_SIGNATURE(28), 
		local_ref< android::view::MenuItem > >
	(get_jobject(), a0);
}

local_ref< android::view::ContextMenu_::ContextMenuInfo > android::view::MenuItem::getMenuInfo()
{
	return call_method<
		android::view::MenuItem::J2CPP_CLASS_NAME,
		android::view::MenuItem::J2CPP_METHOD_NAME(29),
		android::view::MenuItem::J2CPP_METHOD_SIGNATURE(29), 
		local_ref< android::view::ContextMenu_::ContextMenuInfo > >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(android::view::MenuItem,"android/view/MenuItem")
J2CPP_DEFINE_METHOD(android::view::MenuItem,0,"getItemId","()I")
J2CPP_DEFINE_METHOD(android::view::MenuItem,1,"getGroupId","()I")
J2CPP_DEFINE_METHOD(android::view::MenuItem,2,"getOrder","()I")
J2CPP_DEFINE_METHOD(android::view::MenuItem,3,"setTitle","(Ljava/lang/CharSequence;)Landroid/view/MenuItem;")
J2CPP_DEFINE_METHOD(android::view::MenuItem,4,"setTitle","(I)Landroid/view/MenuItem;")
J2CPP_DEFINE_METHOD(android::view::MenuItem,5,"getTitle","()Ljava/lang/CharSequence;")
J2CPP_DEFINE_METHOD(android::view::MenuItem,6,"setTitleCondensed","(Ljava/lang/CharSequence;)Landroid/view/MenuItem;")
J2CPP_DEFINE_METHOD(android::view::MenuItem,7,"getTitleCondensed","()Ljava/lang/CharSequence;")
J2CPP_DEFINE_METHOD(android::view::MenuItem,8,"setIcon","(Landroid/graphics/drawable/Drawable;)Landroid/view/MenuItem;")
J2CPP_DEFINE_METHOD(android::view::MenuItem,9,"setIcon","(I)Landroid/view/MenuItem;")
J2CPP_DEFINE_METHOD(android::view::MenuItem,10,"getIcon","()Landroid/graphics/drawable/Drawable;")
J2CPP_DEFINE_METHOD(android::view::MenuItem,11,"setIntent","(Landroid/content/Intent;)Landroid/view/MenuItem;")
J2CPP_DEFINE_METHOD(android::view::MenuItem,12,"getIntent","()Landroid/content/Intent;")
J2CPP_DEFINE_METHOD(android::view::MenuItem,13,"setShortcut","(CC)Landroid/view/MenuItem;")
J2CPP_DEFINE_METHOD(android::view::MenuItem,14,"setNumericShortcut","(C)Landroid/view/MenuItem;")
J2CPP_DEFINE_METHOD(android::view::MenuItem,15,"getNumericShortcut","()C")
J2CPP_DEFINE_METHOD(android::view::MenuItem,16,"setAlphabeticShortcut","(C)Landroid/view/MenuItem;")
J2CPP_DEFINE_METHOD(android::view::MenuItem,17,"getAlphabeticShortcut","()C")
J2CPP_DEFINE_METHOD(android::view::MenuItem,18,"setCheckable","(Z)Landroid/view/MenuItem;")
J2CPP_DEFINE_METHOD(android::view::MenuItem,19,"isCheckable","()Z")
J2CPP_DEFINE_METHOD(android::view::MenuItem,20,"setChecked","(Z)Landroid/view/MenuItem;")
J2CPP_DEFINE_METHOD(android::view::MenuItem,21,"isChecked","()Z")
J2CPP_DEFINE_METHOD(android::view::MenuItem,22,"setVisible","(Z)Landroid/view/MenuItem;")
J2CPP_DEFINE_METHOD(android::view::MenuItem,23,"isVisible","()Z")
J2CPP_DEFINE_METHOD(android::view::MenuItem,24,"setEnabled","(Z)Landroid/view/MenuItem;")
J2CPP_DEFINE_METHOD(android::view::MenuItem,25,"isEnabled","()Z")
J2CPP_DEFINE_METHOD(android::view::MenuItem,26,"hasSubMenu","()Z")
J2CPP_DEFINE_METHOD(android::view::MenuItem,27,"getSubMenu","()Landroid/view/SubMenu;")
J2CPP_DEFINE_METHOD(android::view::MenuItem,28,"setOnMenuItemClickListener","(Landroid/view/MenuItem$OnMenuItemClickListener;)Landroid/view/MenuItem;")
J2CPP_DEFINE_METHOD(android::view::MenuItem,29,"getMenuInfo","()Landroid/view/ContextMenu$ContextMenuInfo;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_MENUITEM_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
