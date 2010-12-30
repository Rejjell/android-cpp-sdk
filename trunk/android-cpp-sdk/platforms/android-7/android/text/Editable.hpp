/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.text.Editable
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_EDITABLE_HPP_DECL
#define J2CPP_ANDROID_TEXT_EDITABLE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Appendable; } } }
namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace android { namespace text { class Spannable; } } }
namespace j2cpp { namespace android { namespace text { class InputFilter; } } }
namespace j2cpp { namespace android { namespace text { namespace Editable_ { class Factory; } } } }
namespace j2cpp { namespace android { namespace text { class GetChars; } } }


#include <android/text/Editable.hpp>
#include <android/text/GetChars.hpp>
#include <android/text/InputFilter.hpp>
#include <android/text/Spannable.hpp>
#include <java/lang/Appendable.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace text {

	class Editable;
	namespace Editable_ {

		class Factory;
		class Factory
			: public object<Factory>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)
			J2CPP_DECLARE_METHOD(2)

			explicit Factory(jobject jobj)
			: object<Factory>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			Factory();
			static local_ref< android::text::Editable_::Factory > getInstance();
			local_ref< android::text::Editable > newEditable(local_ref< java::lang::CharSequence >  const&);
		}; //class Factory

	} //namespace Editable_

	class Editable
		: public object<Editable>
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

		typedef Editable_::Factory Factory;

		explicit Editable(jobject jobj)
		: object<Editable>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::lang::CharSequence>() const;
		operator local_ref<android::text::GetChars>() const;
		operator local_ref<android::text::Spannable>() const;
		operator local_ref<java::lang::Appendable>() const;


		local_ref< android::text::Editable > replace(jint, jint, local_ref< java::lang::CharSequence >  const&, jint, jint);
		local_ref< android::text::Editable > replace(jint, jint, local_ref< java::lang::CharSequence >  const&);
		local_ref< android::text::Editable > insert(jint, local_ref< java::lang::CharSequence >  const&, jint, jint);
		local_ref< android::text::Editable > insert(jint, local_ref< java::lang::CharSequence >  const&);
		local_ref< android::text::Editable > delete_(jint, jint);
		local_ref< android::text::Editable > append(local_ref< java::lang::CharSequence >  const&);
		local_ref< android::text::Editable > append(local_ref< java::lang::CharSequence >  const&, jint, jint);
		local_ref< android::text::Editable > append(jchar);
		void clear();
		void clearSpans();
		void setFilters(local_ref< array< local_ref< android::text::InputFilter >, 1> >  const&);
		local_ref< array< local_ref< android::text::InputFilter >, 1> > getFilters();
	}; //class Editable

} //namespace text
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_EDITABLE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_EDITABLE_HPP_IMPL
#define J2CPP_ANDROID_TEXT_EDITABLE_HPP_IMPL

namespace j2cpp {




android::text::Editable_::Factory::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::text::Editable_::Factory::Factory()
: object<android::text::Editable_::Factory>(
	call_new_object<
		android::text::Editable_::Factory::J2CPP_CLASS_NAME,
		android::text::Editable_::Factory::J2CPP_METHOD_NAME(0),
		android::text::Editable_::Factory::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}


local_ref< android::text::Editable_::Factory > android::text::Editable_::Factory::getInstance()
{
	return call_static_method<
		android::text::Editable_::Factory::J2CPP_CLASS_NAME,
		android::text::Editable_::Factory::J2CPP_METHOD_NAME(1),
		android::text::Editable_::Factory::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< android::text::Editable_::Factory > >
	();
}

local_ref< android::text::Editable > android::text::Editable_::Factory::newEditable(local_ref< java::lang::CharSequence > const &a0)
{
	return call_method<
		android::text::Editable_::Factory::J2CPP_CLASS_NAME,
		android::text::Editable_::Factory::J2CPP_METHOD_NAME(2),
		android::text::Editable_::Factory::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< android::text::Editable > >
	(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(android::text::Editable_::Factory,"android/text/Editable$Factory")
J2CPP_DEFINE_METHOD(android::text::Editable_::Factory,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::text::Editable_::Factory,1,"getInstance","()Landroid/text/Editable$Factory;")
J2CPP_DEFINE_METHOD(android::text::Editable_::Factory,2,"newEditable","(Ljava/lang/CharSequence;)Landroid/text/Editable;")



android::text::Editable::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::text::Editable::operator local_ref<java::lang::CharSequence>() const
{
	return local_ref<java::lang::CharSequence>(get_jobject());
}

android::text::Editable::operator local_ref<android::text::GetChars>() const
{
	return local_ref<android::text::GetChars>(get_jobject());
}

android::text::Editable::operator local_ref<android::text::Spannable>() const
{
	return local_ref<android::text::Spannable>(get_jobject());
}

android::text::Editable::operator local_ref<java::lang::Appendable>() const
{
	return local_ref<java::lang::Appendable>(get_jobject());
}

local_ref< android::text::Editable > android::text::Editable::replace(jint a0, jint a1, local_ref< java::lang::CharSequence > const &a2, jint a3, jint a4)
{
	return call_method<
		android::text::Editable::J2CPP_CLASS_NAME,
		android::text::Editable::J2CPP_METHOD_NAME(0),
		android::text::Editable::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< android::text::Editable > >
	(get_jobject(), a0, a1, a2, a3, a4);
}

local_ref< android::text::Editable > android::text::Editable::replace(jint a0, jint a1, local_ref< java::lang::CharSequence > const &a2)
{
	return call_method<
		android::text::Editable::J2CPP_CLASS_NAME,
		android::text::Editable::J2CPP_METHOD_NAME(1),
		android::text::Editable::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< android::text::Editable > >
	(get_jobject(), a0, a1, a2);
}

local_ref< android::text::Editable > android::text::Editable::insert(jint a0, local_ref< java::lang::CharSequence > const &a1, jint a2, jint a3)
{
	return call_method<
		android::text::Editable::J2CPP_CLASS_NAME,
		android::text::Editable::J2CPP_METHOD_NAME(2),
		android::text::Editable::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< android::text::Editable > >
	(get_jobject(), a0, a1, a2, a3);
}

local_ref< android::text::Editable > android::text::Editable::insert(jint a0, local_ref< java::lang::CharSequence > const &a1)
{
	return call_method<
		android::text::Editable::J2CPP_CLASS_NAME,
		android::text::Editable::J2CPP_METHOD_NAME(3),
		android::text::Editable::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< android::text::Editable > >
	(get_jobject(), a0, a1);
}

local_ref< android::text::Editable > android::text::Editable::delete_(jint a0, jint a1)
{
	return call_method<
		android::text::Editable::J2CPP_CLASS_NAME,
		android::text::Editable::J2CPP_METHOD_NAME(4),
		android::text::Editable::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< android::text::Editable > >
	(get_jobject(), a0, a1);
}

local_ref< android::text::Editable > android::text::Editable::append(local_ref< java::lang::CharSequence > const &a0)
{
	return call_method<
		android::text::Editable::J2CPP_CLASS_NAME,
		android::text::Editable::J2CPP_METHOD_NAME(5),
		android::text::Editable::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< android::text::Editable > >
	(get_jobject(), a0);
}

local_ref< android::text::Editable > android::text::Editable::append(local_ref< java::lang::CharSequence > const &a0, jint a1, jint a2)
{
	return call_method<
		android::text::Editable::J2CPP_CLASS_NAME,
		android::text::Editable::J2CPP_METHOD_NAME(6),
		android::text::Editable::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< android::text::Editable > >
	(get_jobject(), a0, a1, a2);
}

local_ref< android::text::Editable > android::text::Editable::append(jchar a0)
{
	return call_method<
		android::text::Editable::J2CPP_CLASS_NAME,
		android::text::Editable::J2CPP_METHOD_NAME(7),
		android::text::Editable::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< android::text::Editable > >
	(get_jobject(), a0);
}

void android::text::Editable::clear()
{
	return call_method<
		android::text::Editable::J2CPP_CLASS_NAME,
		android::text::Editable::J2CPP_METHOD_NAME(8),
		android::text::Editable::J2CPP_METHOD_SIGNATURE(8), 
		void >
	(get_jobject());
}

void android::text::Editable::clearSpans()
{
	return call_method<
		android::text::Editable::J2CPP_CLASS_NAME,
		android::text::Editable::J2CPP_METHOD_NAME(9),
		android::text::Editable::J2CPP_METHOD_SIGNATURE(9), 
		void >
	(get_jobject());
}

void android::text::Editable::setFilters(local_ref< array< local_ref< android::text::InputFilter >, 1> > const &a0)
{
	return call_method<
		android::text::Editable::J2CPP_CLASS_NAME,
		android::text::Editable::J2CPP_METHOD_NAME(10),
		android::text::Editable::J2CPP_METHOD_SIGNATURE(10), 
		void >
	(get_jobject(), a0);
}

local_ref< array< local_ref< android::text::InputFilter >, 1> > android::text::Editable::getFilters()
{
	return call_method<
		android::text::Editable::J2CPP_CLASS_NAME,
		android::text::Editable::J2CPP_METHOD_NAME(11),
		android::text::Editable::J2CPP_METHOD_SIGNATURE(11), 
		local_ref< array< local_ref< android::text::InputFilter >, 1> > >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(android::text::Editable,"android/text/Editable")
J2CPP_DEFINE_METHOD(android::text::Editable,0,"replace","(IILjava/lang/CharSequence;II)Landroid/text/Editable;")
J2CPP_DEFINE_METHOD(android::text::Editable,1,"replace","(IILjava/lang/CharSequence;)Landroid/text/Editable;")
J2CPP_DEFINE_METHOD(android::text::Editable,2,"insert","(ILjava/lang/CharSequence;II)Landroid/text/Editable;")
J2CPP_DEFINE_METHOD(android::text::Editable,3,"insert","(ILjava/lang/CharSequence;)Landroid/text/Editable;")
J2CPP_DEFINE_METHOD(android::text::Editable,4,"delete","(II)Landroid/text/Editable;")
J2CPP_DEFINE_METHOD(android::text::Editable,5,"append","(Ljava/lang/CharSequence;)Landroid/text/Editable;")
J2CPP_DEFINE_METHOD(android::text::Editable,6,"append","(Ljava/lang/CharSequence;II)Landroid/text/Editable;")
J2CPP_DEFINE_METHOD(android::text::Editable,7,"append","(C)Landroid/text/Editable;")
J2CPP_DEFINE_METHOD(android::text::Editable,8,"clear","()V")
J2CPP_DEFINE_METHOD(android::text::Editable,9,"clearSpans","()V")
J2CPP_DEFINE_METHOD(android::text::Editable,10,"setFilters","([android.text.InputFilter)V")
J2CPP_DEFINE_METHOD(android::text::Editable,11,"getFilters","()[android.text.InputFilter")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_EDITABLE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
