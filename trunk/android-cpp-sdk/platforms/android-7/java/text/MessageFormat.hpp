/*================================================================================
  code generated by: java2cpp
  class: java.text.MessageFormat
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_TEXT_MESSAGEFORMAT_HPP_DECL
#define J2CPP_JAVA_TEXT_MESSAGEFORMAT_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class StringBuffer; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace text { namespace MessageFormat_ { class Field; } } } }
namespace j2cpp { namespace java { namespace text { class Format; } } }
namespace j2cpp { namespace java { namespace text { namespace Format_ { class Field; } } } }
namespace j2cpp { namespace java { namespace text { class AttributedCharacterIterator; } } }
namespace j2cpp { namespace java { namespace text { class ParsePosition; } } }
namespace j2cpp { namespace java { namespace text { class FieldPosition; } } }
namespace j2cpp { namespace java { namespace util { class Locale; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/text/AttributedCharacterIterator.hpp>
#include <java/text/FieldPosition.hpp>
#include <java/text/Format.hpp>
#include <java/text/MessageFormat.hpp>
#include <java/text/ParsePosition.hpp>
#include <java/util/Locale.hpp>


namespace j2cpp {

namespace java { namespace text {

	class MessageFormat;
	namespace MessageFormat_ {

		class Field;
		class Field
			: public cpp_object<Field>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)
			J2CPP_DECLARE_METHOD(2)
			J2CPP_DECLARE_FIELD(0)

			explicit Field(jobject jobj)
			: cpp_object<Field>(jobj)
			{
			}

			operator local_ref<java::text::Format_::Field>() const;



			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::text::MessageFormat_::Field > > ARGUMENT;
		}; //class Field

	} //namespace MessageFormat_

	class MessageFormat
		: public cpp_object<MessageFormat>
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

		typedef MessageFormat_::Field Field;

		explicit MessageFormat(jobject jobj)
		: cpp_object<MessageFormat>(jobj)
		{
		}

		operator local_ref<java::text::Format>() const;


		MessageFormat(local_ref< java::lang::String > const&, local_ref< java::util::Locale > const&);
		MessageFormat(local_ref< java::lang::String > const&);
		void applyPattern(local_ref< java::lang::String > const&);
		local_ref< java::lang::Object > clone();
		cpp_boolean equals(local_ref< java::lang::Object > const&);
		local_ref< java::text::AttributedCharacterIterator > formatToCharacterIterator(local_ref< java::lang::Object > const&);
		local_ref< java::lang::StringBuffer > format(local_ref< cpp_object_array<java::lang::Object, 1> > const&, local_ref< java::lang::StringBuffer > const&, local_ref< java::text::FieldPosition > const&);
		local_ref< java::lang::StringBuffer > format(local_ref< java::lang::Object > const&, local_ref< java::lang::StringBuffer > const&, local_ref< java::text::FieldPosition > const&);
		static local_ref< java::lang::String > format(local_ref< java::lang::String > const&, local_ref< cpp_object_array<java::lang::Object, 1> > const&);
		local_ref< cpp_object_array<java::text::Format, 1> > getFormats();
		local_ref< cpp_object_array<java::text::Format, 1> > getFormatsByArgumentIndex();
		void setFormatByArgumentIndex(cpp_int const&, local_ref< java::text::Format > const&);
		void setFormatsByArgumentIndex(local_ref< cpp_object_array<java::text::Format, 1> > const&);
		local_ref< java::util::Locale > getLocale();
		cpp_int hashCode();
		local_ref< cpp_object_array<java::lang::Object, 1> > parse(local_ref< java::lang::String > const&);
		local_ref< cpp_object_array<java::lang::Object, 1> > parse(local_ref< java::lang::String > const&, local_ref< java::text::ParsePosition > const&);
		local_ref< java::lang::Object > parseObject(local_ref< java::lang::String > const&, local_ref< java::text::ParsePosition > const&);
		void setFormat(cpp_int const&, local_ref< java::text::Format > const&);
		void setFormats(local_ref< cpp_object_array<java::text::Format, 1> > const&);
		void setLocale(local_ref< java::util::Locale > const&);
		local_ref< java::lang::String > toPattern();
	}; //class MessageFormat

} //namespace text
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_TEXT_MESSAGEFORMAT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_TEXT_MESSAGEFORMAT_HPP_IMPL
#define J2CPP_JAVA_TEXT_MESSAGEFORMAT_HPP_IMPL

namespace j2cpp {




java::text::MessageFormat_::Field::operator local_ref<java::text::Format_::Field>() const
{
	return local_ref<java::text::Format_::Field>(get_jtype());
}





static_field<
	java::text::MessageFormat_::Field::J2CPP_CLASS_NAME,
	java::text::MessageFormat_::Field::J2CPP_FIELD_NAME(0),
	java::text::MessageFormat_::Field::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::text::MessageFormat_::Field >
> java::text::MessageFormat_::Field::ARGUMENT;


J2CPP_DEFINE_CLASS(java::text::MessageFormat_::Field,"java/text/MessageFormat$Field")
J2CPP_DEFINE_METHOD(java::text::MessageFormat_::Field,0,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::text::MessageFormat_::Field,1,"readResolve","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::text::MessageFormat_::Field,2,"<clinit>","()V")
J2CPP_DEFINE_FIELD(java::text::MessageFormat_::Field,0,"ARGUMENT","Ljava/text/MessageFormat$Field;")



java::text::MessageFormat::operator local_ref<java::text::Format>() const
{
	return local_ref<java::text::Format>(get_jtype());
}


java::text::MessageFormat::MessageFormat(local_ref< java::lang::String > const &a0, local_ref< java::util::Locale > const &a1)
: cpp_object<java::text::MessageFormat>(
	environment::get().get_jenv()->NewObject(
		get_class<java::text::MessageFormat::J2CPP_CLASS_NAME>(),
		get_method_id<java::text::MessageFormat::J2CPP_CLASS_NAME, java::text::MessageFormat::J2CPP_METHOD_NAME(0), java::text::MessageFormat::J2CPP_METHOD_SIGNATURE(0), false>(),
		a0.get_jtype(), a1.get_jtype()
	)
)
{
}



java::text::MessageFormat::MessageFormat(local_ref< java::lang::String > const &a0)
: cpp_object<java::text::MessageFormat>(
	environment::get().get_jenv()->NewObject(
		get_class<java::text::MessageFormat::J2CPP_CLASS_NAME>(),
		get_method_id<java::text::MessageFormat::J2CPP_CLASS_NAME, java::text::MessageFormat::J2CPP_METHOD_NAME(1), java::text::MessageFormat::J2CPP_METHOD_SIGNATURE(1), false>(),
		a0.get_jtype()
	)
)
{
}


void java::text::MessageFormat::applyPattern(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::Object > java::text::MessageFormat::clone()
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

cpp_boolean java::text::MessageFormat::equals(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::text::AttributedCharacterIterator > java::text::MessageFormat::formatToCharacterIterator(local_ref< java::lang::Object > const &a0)
{
	return local_ref< java::text::AttributedCharacterIterator >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::StringBuffer > java::text::MessageFormat::format(local_ref< cpp_object_array<java::lang::Object, 1> > const &a0, local_ref< java::lang::StringBuffer > const &a1, local_ref< java::text::FieldPosition > const &a2)
{
	return local_ref< java::lang::StringBuffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< java::lang::StringBuffer > java::text::MessageFormat::format(local_ref< java::lang::Object > const &a0, local_ref< java::lang::StringBuffer > const &a1, local_ref< java::text::FieldPosition > const &a2)
{
	return local_ref< java::lang::StringBuffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< java::lang::String > java::text::MessageFormat::format(local_ref< java::lang::String > const &a0, local_ref< cpp_object_array<java::lang::Object, 1> > const &a1)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< cpp_object_array<java::text::Format, 1> > java::text::MessageFormat::getFormats()
{
	return local_ref< cpp_object_array<java::text::Format, 1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}

local_ref< cpp_object_array<java::text::Format, 1> > java::text::MessageFormat::getFormatsByArgumentIndex()
{
	return local_ref< cpp_object_array<java::text::Format, 1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>()
		)
	);
}

void java::text::MessageFormat::setFormatByArgumentIndex(cpp_int const &a0, local_ref< java::text::Format > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void java::text::MessageFormat::setFormatsByArgumentIndex(local_ref< cpp_object_array<java::text::Format, 1> > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::util::Locale > java::text::MessageFormat::getLocale()
{
	return local_ref< java::util::Locale >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>()
		)
	);
}

cpp_int java::text::MessageFormat::hashCode()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>()
		)
	);
}

local_ref< cpp_object_array<java::lang::Object, 1> > java::text::MessageFormat::parse(local_ref< java::lang::String > const &a0)
{
	return local_ref< cpp_object_array<java::lang::Object, 1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< cpp_object_array<java::lang::Object, 1> > java::text::MessageFormat::parse(local_ref< java::lang::String > const &a0, local_ref< java::text::ParsePosition > const &a1)
{
	return local_ref< cpp_object_array<java::lang::Object, 1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::lang::Object > java::text::MessageFormat::parseObject(local_ref< java::lang::String > const &a0, local_ref< java::text::ParsePosition > const &a1)
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void java::text::MessageFormat::setFormat(cpp_int const &a0, local_ref< java::text::Format > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void java::text::MessageFormat::setFormats(local_ref< cpp_object_array<java::text::Format, 1> > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(19), J2CPP_METHOD_SIGNATURE(19), false>(),
			a0.get_jtype()
		)
	);
}

void java::text::MessageFormat::setLocale(local_ref< java::util::Locale > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(20), J2CPP_METHOD_SIGNATURE(20), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > java::text::MessageFormat::toPattern()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(21), J2CPP_METHOD_SIGNATURE(21), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(java::text::MessageFormat,"java/text/MessageFormat")
J2CPP_DEFINE_METHOD(java::text::MessageFormat,0,"<init>","(Ljava/lang/String;Ljava/util/Locale;)V")
J2CPP_DEFINE_METHOD(java::text::MessageFormat,1,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::text::MessageFormat,2,"applyPattern","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::text::MessageFormat,3,"clone","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::text::MessageFormat,4,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::text::MessageFormat,5,"formatToCharacterIterator","(Ljava/lang/Object;)Ljava/text/AttributedCharacterIterator;")
J2CPP_DEFINE_METHOD(java::text::MessageFormat,6,"format","([java.lang.ObjectLjava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;")
J2CPP_DEFINE_METHOD(java::text::MessageFormat,7,"format","(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;")
J2CPP_DEFINE_METHOD(java::text::MessageFormat,8,"format","(Ljava/lang/String;[java.lang.Object)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::text::MessageFormat,9,"getFormats","()[java.text.Format")
J2CPP_DEFINE_METHOD(java::text::MessageFormat,10,"getFormatsByArgumentIndex","()[java.text.Format")
J2CPP_DEFINE_METHOD(java::text::MessageFormat,11,"setFormatByArgumentIndex","(ILjava/text/Format;)V")
J2CPP_DEFINE_METHOD(java::text::MessageFormat,12,"setFormatsByArgumentIndex","([java.text.Format)V")
J2CPP_DEFINE_METHOD(java::text::MessageFormat,13,"getLocale","()Ljava/util/Locale;")
J2CPP_DEFINE_METHOD(java::text::MessageFormat,14,"hashCode","()I")
J2CPP_DEFINE_METHOD(java::text::MessageFormat,15,"parse","(Ljava/lang/String;)[java.lang.Object")
J2CPP_DEFINE_METHOD(java::text::MessageFormat,16,"parse","(Ljava/lang/String;Ljava/text/ParsePosition;)[java.lang.Object")
J2CPP_DEFINE_METHOD(java::text::MessageFormat,17,"parseObject","(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::text::MessageFormat,18,"setFormat","(ILjava/text/Format;)V")
J2CPP_DEFINE_METHOD(java::text::MessageFormat,19,"setFormats","([java.text.Format)V")
J2CPP_DEFINE_METHOD(java::text::MessageFormat,20,"setLocale","(Ljava/util/Locale;)V")
J2CPP_DEFINE_METHOD(java::text::MessageFormat,21,"toPattern","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVA_TEXT_MESSAGEFORMAT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION