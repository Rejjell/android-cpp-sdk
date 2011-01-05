/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.Locale
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_LOCALE_HPP_DECL
#define J2CPP_JAVA_UTIL_LOCALE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Cloneable; } } }
namespace j2cpp { namespace java { namespace io { class Serializable; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Cloneable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace util {

	class Locale;
	class Locale
		: public object<Locale>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)
		J2CPP_DECLARE_FIELD(6)
		J2CPP_DECLARE_FIELD(7)
		J2CPP_DECLARE_FIELD(8)
		J2CPP_DECLARE_FIELD(9)
		J2CPP_DECLARE_FIELD(10)
		J2CPP_DECLARE_FIELD(11)
		J2CPP_DECLARE_FIELD(12)
		J2CPP_DECLARE_FIELD(13)
		J2CPP_DECLARE_FIELD(14)
		J2CPP_DECLARE_FIELD(15)
		J2CPP_DECLARE_FIELD(16)
		J2CPP_DECLARE_FIELD(17)
		J2CPP_DECLARE_FIELD(18)
		J2CPP_DECLARE_FIELD(19)
		J2CPP_DECLARE_FIELD(20)

		explicit Locale(jobject jobj)
		: object<Locale>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::lang::Cloneable>() const;
		operator local_ref<java::io::Serializable>() const;


		Locale(local_ref< java::lang::String > const&);
		Locale(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		Locale(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		local_ref< java::lang::Object > clone();
		jboolean equals(local_ref< java::lang::Object >  const&);
		static local_ref< array< local_ref< java::util::Locale >, 1> > getAvailableLocales();
		local_ref< java::lang::String > getCountry();
		static local_ref< java::util::Locale > getDefault();
		local_ref< java::lang::String > getDisplayCountry();
		local_ref< java::lang::String > getDisplayCountry(local_ref< java::util::Locale >  const&);
		local_ref< java::lang::String > getDisplayLanguage();
		local_ref< java::lang::String > getDisplayLanguage(local_ref< java::util::Locale >  const&);
		local_ref< java::lang::String > getDisplayName();
		local_ref< java::lang::String > getDisplayName(local_ref< java::util::Locale >  const&);
		local_ref< java::lang::String > getDisplayVariant();
		local_ref< java::lang::String > getDisplayVariant(local_ref< java::util::Locale >  const&);
		local_ref< java::lang::String > getISO3Country();
		local_ref< java::lang::String > getISO3Language();
		static local_ref< array< local_ref< java::lang::String >, 1> > getISOCountries();
		static local_ref< array< local_ref< java::lang::String >, 1> > getISOLanguages();
		local_ref< java::lang::String > getLanguage();
		local_ref< java::lang::String > getVariant();
		jint hashCode();
		static void setDefault(local_ref< java::util::Locale >  const&);
		local_ref< java::lang::String > toString();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::util::Locale > > CANADA;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< java::util::Locale > > CANADA_FRENCH;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< java::util::Locale > > CHINA;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), local_ref< java::util::Locale > > CHINESE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), local_ref< java::util::Locale > > ENGLISH;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), local_ref< java::util::Locale > > FRANCE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), local_ref< java::util::Locale > > FRENCH;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), local_ref< java::util::Locale > > GERMAN;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), local_ref< java::util::Locale > > GERMANY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(9), J2CPP_FIELD_SIGNATURE(9), local_ref< java::util::Locale > > ITALIAN;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(10), J2CPP_FIELD_SIGNATURE(10), local_ref< java::util::Locale > > ITALY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(11), J2CPP_FIELD_SIGNATURE(11), local_ref< java::util::Locale > > JAPAN;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(12), J2CPP_FIELD_SIGNATURE(12), local_ref< java::util::Locale > > JAPANESE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(13), J2CPP_FIELD_SIGNATURE(13), local_ref< java::util::Locale > > KOREA;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(14), J2CPP_FIELD_SIGNATURE(14), local_ref< java::util::Locale > > KOREAN;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(15), J2CPP_FIELD_SIGNATURE(15), local_ref< java::util::Locale > > PRC;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(16), J2CPP_FIELD_SIGNATURE(16), local_ref< java::util::Locale > > SIMPLIFIED_CHINESE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(17), J2CPP_FIELD_SIGNATURE(17), local_ref< java::util::Locale > > TAIWAN;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(18), J2CPP_FIELD_SIGNATURE(18), local_ref< java::util::Locale > > TRADITIONAL_CHINESE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(19), J2CPP_FIELD_SIGNATURE(19), local_ref< java::util::Locale > > UK;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(20), J2CPP_FIELD_SIGNATURE(20), local_ref< java::util::Locale > > US;
	}; //class Locale

} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_LOCALE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_LOCALE_HPP_IMPL
#define J2CPP_JAVA_UTIL_LOCALE_HPP_IMPL

namespace j2cpp {



java::util::Locale::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::util::Locale::operator local_ref<java::lang::Cloneable>() const
{
	return local_ref<java::lang::Cloneable>(get_jobject());
}

java::util::Locale::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}


java::util::Locale::Locale(local_ref< java::lang::String > const &a0)
: object<java::util::Locale>(
	call_new_object<
		java::util::Locale::J2CPP_CLASS_NAME,
		java::util::Locale::J2CPP_METHOD_NAME(0),
		java::util::Locale::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}



java::util::Locale::Locale(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
: object<java::util::Locale>(
	call_new_object<
		java::util::Locale::J2CPP_CLASS_NAME,
		java::util::Locale::J2CPP_METHOD_NAME(1),
		java::util::Locale::J2CPP_METHOD_SIGNATURE(1)
	>(a0, a1)
)
{
}



java::util::Locale::Locale(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::String > const &a2)
: object<java::util::Locale>(
	call_new_object<
		java::util::Locale::J2CPP_CLASS_NAME,
		java::util::Locale::J2CPP_METHOD_NAME(2),
		java::util::Locale::J2CPP_METHOD_SIGNATURE(2)
	>(a0, a1, a2)
)
{
}


local_ref< java::lang::Object > java::util::Locale::clone()
{
	return call_method<
		java::util::Locale::J2CPP_CLASS_NAME,
		java::util::Locale::J2CPP_METHOD_NAME(3),
		java::util::Locale::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::lang::Object >
	>(get_jobject());
}

jboolean java::util::Locale::equals(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::Locale::J2CPP_CLASS_NAME,
		java::util::Locale::J2CPP_METHOD_NAME(4),
		java::util::Locale::J2CPP_METHOD_SIGNATURE(4), 
		jboolean
	>(get_jobject(), a0);
}

local_ref< array< local_ref< java::util::Locale >, 1> > java::util::Locale::getAvailableLocales()
{
	return call_static_method<
		java::util::Locale::J2CPP_CLASS_NAME,
		java::util::Locale::J2CPP_METHOD_NAME(5),
		java::util::Locale::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< array< local_ref< java::util::Locale >, 1> >
	>();
}

local_ref< java::lang::String > java::util::Locale::getCountry()
{
	return call_method<
		java::util::Locale::J2CPP_CLASS_NAME,
		java::util::Locale::J2CPP_METHOD_NAME(6),
		java::util::Locale::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::util::Locale > java::util::Locale::getDefault()
{
	return call_static_method<
		java::util::Locale::J2CPP_CLASS_NAME,
		java::util::Locale::J2CPP_METHOD_NAME(7),
		java::util::Locale::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< java::util::Locale >
	>();
}

local_ref< java::lang::String > java::util::Locale::getDisplayCountry()
{
	return call_method<
		java::util::Locale::J2CPP_CLASS_NAME,
		java::util::Locale::J2CPP_METHOD_NAME(8),
		java::util::Locale::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::lang::String > java::util::Locale::getDisplayCountry(local_ref< java::util::Locale > const &a0)
{
	return call_method<
		java::util::Locale::J2CPP_CLASS_NAME,
		java::util::Locale::J2CPP_METHOD_NAME(9),
		java::util::Locale::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< java::lang::String >
	>(get_jobject(), a0);
}

local_ref< java::lang::String > java::util::Locale::getDisplayLanguage()
{
	return call_method<
		java::util::Locale::J2CPP_CLASS_NAME,
		java::util::Locale::J2CPP_METHOD_NAME(10),
		java::util::Locale::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::lang::String > java::util::Locale::getDisplayLanguage(local_ref< java::util::Locale > const &a0)
{
	return call_method<
		java::util::Locale::J2CPP_CLASS_NAME,
		java::util::Locale::J2CPP_METHOD_NAME(11),
		java::util::Locale::J2CPP_METHOD_SIGNATURE(11), 
		local_ref< java::lang::String >
	>(get_jobject(), a0);
}

local_ref< java::lang::String > java::util::Locale::getDisplayName()
{
	return call_method<
		java::util::Locale::J2CPP_CLASS_NAME,
		java::util::Locale::J2CPP_METHOD_NAME(12),
		java::util::Locale::J2CPP_METHOD_SIGNATURE(12), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::lang::String > java::util::Locale::getDisplayName(local_ref< java::util::Locale > const &a0)
{
	return call_method<
		java::util::Locale::J2CPP_CLASS_NAME,
		java::util::Locale::J2CPP_METHOD_NAME(13),
		java::util::Locale::J2CPP_METHOD_SIGNATURE(13), 
		local_ref< java::lang::String >
	>(get_jobject(), a0);
}

local_ref< java::lang::String > java::util::Locale::getDisplayVariant()
{
	return call_method<
		java::util::Locale::J2CPP_CLASS_NAME,
		java::util::Locale::J2CPP_METHOD_NAME(14),
		java::util::Locale::J2CPP_METHOD_SIGNATURE(14), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::lang::String > java::util::Locale::getDisplayVariant(local_ref< java::util::Locale > const &a0)
{
	return call_method<
		java::util::Locale::J2CPP_CLASS_NAME,
		java::util::Locale::J2CPP_METHOD_NAME(15),
		java::util::Locale::J2CPP_METHOD_SIGNATURE(15), 
		local_ref< java::lang::String >
	>(get_jobject(), a0);
}

local_ref< java::lang::String > java::util::Locale::getISO3Country()
{
	return call_method<
		java::util::Locale::J2CPP_CLASS_NAME,
		java::util::Locale::J2CPP_METHOD_NAME(16),
		java::util::Locale::J2CPP_METHOD_SIGNATURE(16), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::lang::String > java::util::Locale::getISO3Language()
{
	return call_method<
		java::util::Locale::J2CPP_CLASS_NAME,
		java::util::Locale::J2CPP_METHOD_NAME(17),
		java::util::Locale::J2CPP_METHOD_SIGNATURE(17), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< array< local_ref< java::lang::String >, 1> > java::util::Locale::getISOCountries()
{
	return call_static_method<
		java::util::Locale::J2CPP_CLASS_NAME,
		java::util::Locale::J2CPP_METHOD_NAME(18),
		java::util::Locale::J2CPP_METHOD_SIGNATURE(18), 
		local_ref< array< local_ref< java::lang::String >, 1> >
	>();
}

local_ref< array< local_ref< java::lang::String >, 1> > java::util::Locale::getISOLanguages()
{
	return call_static_method<
		java::util::Locale::J2CPP_CLASS_NAME,
		java::util::Locale::J2CPP_METHOD_NAME(19),
		java::util::Locale::J2CPP_METHOD_SIGNATURE(19), 
		local_ref< array< local_ref< java::lang::String >, 1> >
	>();
}

local_ref< java::lang::String > java::util::Locale::getLanguage()
{
	return call_method<
		java::util::Locale::J2CPP_CLASS_NAME,
		java::util::Locale::J2CPP_METHOD_NAME(20),
		java::util::Locale::J2CPP_METHOD_SIGNATURE(20), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::lang::String > java::util::Locale::getVariant()
{
	return call_method<
		java::util::Locale::J2CPP_CLASS_NAME,
		java::util::Locale::J2CPP_METHOD_NAME(21),
		java::util::Locale::J2CPP_METHOD_SIGNATURE(21), 
		local_ref< java::lang::String >
	>(get_jobject());
}

jint java::util::Locale::hashCode()
{
	return call_method<
		java::util::Locale::J2CPP_CLASS_NAME,
		java::util::Locale::J2CPP_METHOD_NAME(22),
		java::util::Locale::J2CPP_METHOD_SIGNATURE(22), 
		jint
	>(get_jobject());
}

void java::util::Locale::setDefault(local_ref< java::util::Locale > const &a0)
{
	return call_static_method<
		java::util::Locale::J2CPP_CLASS_NAME,
		java::util::Locale::J2CPP_METHOD_NAME(23),
		java::util::Locale::J2CPP_METHOD_SIGNATURE(23), 
		void
	>(a0);
}

local_ref< java::lang::String > java::util::Locale::toString()
{
	return call_method<
		java::util::Locale::J2CPP_CLASS_NAME,
		java::util::Locale::J2CPP_METHOD_NAME(24),
		java::util::Locale::J2CPP_METHOD_SIGNATURE(24), 
		local_ref< java::lang::String >
	>(get_jobject());
}



static_field<
	java::util::Locale::J2CPP_CLASS_NAME,
	java::util::Locale::J2CPP_FIELD_NAME(0),
	java::util::Locale::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::util::Locale >
> java::util::Locale::CANADA;

static_field<
	java::util::Locale::J2CPP_CLASS_NAME,
	java::util::Locale::J2CPP_FIELD_NAME(1),
	java::util::Locale::J2CPP_FIELD_SIGNATURE(1),
	local_ref< java::util::Locale >
> java::util::Locale::CANADA_FRENCH;

static_field<
	java::util::Locale::J2CPP_CLASS_NAME,
	java::util::Locale::J2CPP_FIELD_NAME(2),
	java::util::Locale::J2CPP_FIELD_SIGNATURE(2),
	local_ref< java::util::Locale >
> java::util::Locale::CHINA;

static_field<
	java::util::Locale::J2CPP_CLASS_NAME,
	java::util::Locale::J2CPP_FIELD_NAME(3),
	java::util::Locale::J2CPP_FIELD_SIGNATURE(3),
	local_ref< java::util::Locale >
> java::util::Locale::CHINESE;

static_field<
	java::util::Locale::J2CPP_CLASS_NAME,
	java::util::Locale::J2CPP_FIELD_NAME(4),
	java::util::Locale::J2CPP_FIELD_SIGNATURE(4),
	local_ref< java::util::Locale >
> java::util::Locale::ENGLISH;

static_field<
	java::util::Locale::J2CPP_CLASS_NAME,
	java::util::Locale::J2CPP_FIELD_NAME(5),
	java::util::Locale::J2CPP_FIELD_SIGNATURE(5),
	local_ref< java::util::Locale >
> java::util::Locale::FRANCE;

static_field<
	java::util::Locale::J2CPP_CLASS_NAME,
	java::util::Locale::J2CPP_FIELD_NAME(6),
	java::util::Locale::J2CPP_FIELD_SIGNATURE(6),
	local_ref< java::util::Locale >
> java::util::Locale::FRENCH;

static_field<
	java::util::Locale::J2CPP_CLASS_NAME,
	java::util::Locale::J2CPP_FIELD_NAME(7),
	java::util::Locale::J2CPP_FIELD_SIGNATURE(7),
	local_ref< java::util::Locale >
> java::util::Locale::GERMAN;

static_field<
	java::util::Locale::J2CPP_CLASS_NAME,
	java::util::Locale::J2CPP_FIELD_NAME(8),
	java::util::Locale::J2CPP_FIELD_SIGNATURE(8),
	local_ref< java::util::Locale >
> java::util::Locale::GERMANY;

static_field<
	java::util::Locale::J2CPP_CLASS_NAME,
	java::util::Locale::J2CPP_FIELD_NAME(9),
	java::util::Locale::J2CPP_FIELD_SIGNATURE(9),
	local_ref< java::util::Locale >
> java::util::Locale::ITALIAN;

static_field<
	java::util::Locale::J2CPP_CLASS_NAME,
	java::util::Locale::J2CPP_FIELD_NAME(10),
	java::util::Locale::J2CPP_FIELD_SIGNATURE(10),
	local_ref< java::util::Locale >
> java::util::Locale::ITALY;

static_field<
	java::util::Locale::J2CPP_CLASS_NAME,
	java::util::Locale::J2CPP_FIELD_NAME(11),
	java::util::Locale::J2CPP_FIELD_SIGNATURE(11),
	local_ref< java::util::Locale >
> java::util::Locale::JAPAN;

static_field<
	java::util::Locale::J2CPP_CLASS_NAME,
	java::util::Locale::J2CPP_FIELD_NAME(12),
	java::util::Locale::J2CPP_FIELD_SIGNATURE(12),
	local_ref< java::util::Locale >
> java::util::Locale::JAPANESE;

static_field<
	java::util::Locale::J2CPP_CLASS_NAME,
	java::util::Locale::J2CPP_FIELD_NAME(13),
	java::util::Locale::J2CPP_FIELD_SIGNATURE(13),
	local_ref< java::util::Locale >
> java::util::Locale::KOREA;

static_field<
	java::util::Locale::J2CPP_CLASS_NAME,
	java::util::Locale::J2CPP_FIELD_NAME(14),
	java::util::Locale::J2CPP_FIELD_SIGNATURE(14),
	local_ref< java::util::Locale >
> java::util::Locale::KOREAN;

static_field<
	java::util::Locale::J2CPP_CLASS_NAME,
	java::util::Locale::J2CPP_FIELD_NAME(15),
	java::util::Locale::J2CPP_FIELD_SIGNATURE(15),
	local_ref< java::util::Locale >
> java::util::Locale::PRC;

static_field<
	java::util::Locale::J2CPP_CLASS_NAME,
	java::util::Locale::J2CPP_FIELD_NAME(16),
	java::util::Locale::J2CPP_FIELD_SIGNATURE(16),
	local_ref< java::util::Locale >
> java::util::Locale::SIMPLIFIED_CHINESE;

static_field<
	java::util::Locale::J2CPP_CLASS_NAME,
	java::util::Locale::J2CPP_FIELD_NAME(17),
	java::util::Locale::J2CPP_FIELD_SIGNATURE(17),
	local_ref< java::util::Locale >
> java::util::Locale::TAIWAN;

static_field<
	java::util::Locale::J2CPP_CLASS_NAME,
	java::util::Locale::J2CPP_FIELD_NAME(18),
	java::util::Locale::J2CPP_FIELD_SIGNATURE(18),
	local_ref< java::util::Locale >
> java::util::Locale::TRADITIONAL_CHINESE;

static_field<
	java::util::Locale::J2CPP_CLASS_NAME,
	java::util::Locale::J2CPP_FIELD_NAME(19),
	java::util::Locale::J2CPP_FIELD_SIGNATURE(19),
	local_ref< java::util::Locale >
> java::util::Locale::UK;

static_field<
	java::util::Locale::J2CPP_CLASS_NAME,
	java::util::Locale::J2CPP_FIELD_NAME(20),
	java::util::Locale::J2CPP_FIELD_SIGNATURE(20),
	local_ref< java::util::Locale >
> java::util::Locale::US;


J2CPP_DEFINE_CLASS(java::util::Locale,"java/util/Locale")
J2CPP_DEFINE_METHOD(java::util::Locale,0,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::util::Locale,1,"<init>","(Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::util::Locale,2,"<init>","(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::util::Locale,3,"clone","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::Locale,4,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::Locale,5,"getAvailableLocales","()[java.util.Locale")
J2CPP_DEFINE_METHOD(java::util::Locale,6,"getCountry","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::Locale,7,"getDefault","()Ljava/util/Locale;")
J2CPP_DEFINE_METHOD(java::util::Locale,8,"getDisplayCountry","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::Locale,9,"getDisplayCountry","(Ljava/util/Locale;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::Locale,10,"getDisplayLanguage","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::Locale,11,"getDisplayLanguage","(Ljava/util/Locale;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::Locale,12,"getDisplayName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::Locale,13,"getDisplayName","(Ljava/util/Locale;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::Locale,14,"getDisplayVariant","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::Locale,15,"getDisplayVariant","(Ljava/util/Locale;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::Locale,16,"getISO3Country","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::Locale,17,"getISO3Language","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::Locale,18,"getISOCountries","()[java.lang.String")
J2CPP_DEFINE_METHOD(java::util::Locale,19,"getISOLanguages","()[java.lang.String")
J2CPP_DEFINE_METHOD(java::util::Locale,20,"getLanguage","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::Locale,21,"getVariant","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::Locale,22,"hashCode","()I")
J2CPP_DEFINE_METHOD(java::util::Locale,23,"setDefault","(Ljava/util/Locale;)V")
J2CPP_DEFINE_METHOD(java::util::Locale,24,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::Locale,25,"<clinit>","()V")
J2CPP_DEFINE_FIELD(java::util::Locale,0,"CANADA","Ljava/util/Locale;")
J2CPP_DEFINE_FIELD(java::util::Locale,1,"CANADA_FRENCH","Ljava/util/Locale;")
J2CPP_DEFINE_FIELD(java::util::Locale,2,"CHINA","Ljava/util/Locale;")
J2CPP_DEFINE_FIELD(java::util::Locale,3,"CHINESE","Ljava/util/Locale;")
J2CPP_DEFINE_FIELD(java::util::Locale,4,"ENGLISH","Ljava/util/Locale;")
J2CPP_DEFINE_FIELD(java::util::Locale,5,"FRANCE","Ljava/util/Locale;")
J2CPP_DEFINE_FIELD(java::util::Locale,6,"FRENCH","Ljava/util/Locale;")
J2CPP_DEFINE_FIELD(java::util::Locale,7,"GERMAN","Ljava/util/Locale;")
J2CPP_DEFINE_FIELD(java::util::Locale,8,"GERMANY","Ljava/util/Locale;")
J2CPP_DEFINE_FIELD(java::util::Locale,9,"ITALIAN","Ljava/util/Locale;")
J2CPP_DEFINE_FIELD(java::util::Locale,10,"ITALY","Ljava/util/Locale;")
J2CPP_DEFINE_FIELD(java::util::Locale,11,"JAPAN","Ljava/util/Locale;")
J2CPP_DEFINE_FIELD(java::util::Locale,12,"JAPANESE","Ljava/util/Locale;")
J2CPP_DEFINE_FIELD(java::util::Locale,13,"KOREA","Ljava/util/Locale;")
J2CPP_DEFINE_FIELD(java::util::Locale,14,"KOREAN","Ljava/util/Locale;")
J2CPP_DEFINE_FIELD(java::util::Locale,15,"PRC","Ljava/util/Locale;")
J2CPP_DEFINE_FIELD(java::util::Locale,16,"SIMPLIFIED_CHINESE","Ljava/util/Locale;")
J2CPP_DEFINE_FIELD(java::util::Locale,17,"TAIWAN","Ljava/util/Locale;")
J2CPP_DEFINE_FIELD(java::util::Locale,18,"TRADITIONAL_CHINESE","Ljava/util/Locale;")
J2CPP_DEFINE_FIELD(java::util::Locale,19,"UK","Ljava/util/Locale;")
J2CPP_DEFINE_FIELD(java::util::Locale,20,"US","Ljava/util/Locale;")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_LOCALE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
