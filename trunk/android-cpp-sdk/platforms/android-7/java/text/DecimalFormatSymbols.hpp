/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.text.DecimalFormatSymbols
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_TEXT_DECIMALFORMATSYMBOLS_HPP_DECL
#define J2CPP_JAVA_TEXT_DECIMALFORMATSYMBOLS_HPP_DECL


namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Cloneable; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace util { class Currency; } } }
namespace j2cpp { namespace java { namespace util { class Locale; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Cloneable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/Currency.hpp>
#include <java/util/Locale.hpp>


namespace j2cpp {

namespace java { namespace text {

	class DecimalFormatSymbols;
	class DecimalFormatSymbols
		: public object<DecimalFormatSymbols>
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
		J2CPP_DECLARE_METHOD(30)
		J2CPP_DECLARE_METHOD(31)
		J2CPP_DECLARE_METHOD(32)

		explicit DecimalFormatSymbols(jobject jobj)
		: object<DecimalFormatSymbols>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::lang::Cloneable>() const;
		operator local_ref<java::io::Serializable>() const;


		DecimalFormatSymbols();
		DecimalFormatSymbols(local_ref< java::util::Locale > const&);
		local_ref< java::lang::Object > clone();
		jboolean equals(local_ref< java::lang::Object >  const&);
		local_ref< java::util::Currency > getCurrency();
		local_ref< java::lang::String > getInternationalCurrencySymbol();
		local_ref< java::lang::String > getCurrencySymbol();
		jchar getDecimalSeparator();
		jchar getDigit();
		jchar getGroupingSeparator();
		local_ref< java::lang::String > getInfinity();
		jchar getMinusSign();
		jchar getMonetaryDecimalSeparator();
		local_ref< java::lang::String > getNaN();
		jchar getPatternSeparator();
		jchar getPercent();
		jchar getPerMill();
		jchar getZeroDigit();
		jint hashCode();
		void setCurrency(local_ref< java::util::Currency >  const&);
		void setInternationalCurrencySymbol(local_ref< java::lang::String >  const&);
		void setCurrencySymbol(local_ref< java::lang::String >  const&);
		void setDecimalSeparator(jchar);
		void setDigit(jchar);
		void setGroupingSeparator(jchar);
		void setInfinity(local_ref< java::lang::String >  const&);
		void setMinusSign(jchar);
		void setMonetaryDecimalSeparator(jchar);
		void setNaN(local_ref< java::lang::String >  const&);
		void setPatternSeparator(jchar);
		void setPercent(jchar);
		void setPerMill(jchar);
		void setZeroDigit(jchar);
	}; //class DecimalFormatSymbols

} //namespace text
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_TEXT_DECIMALFORMATSYMBOLS_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_TEXT_DECIMALFORMATSYMBOLS_HPP_IMPL
#define J2CPP_JAVA_TEXT_DECIMALFORMATSYMBOLS_HPP_IMPL

namespace j2cpp {



java::text::DecimalFormatSymbols::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::text::DecimalFormatSymbols::operator local_ref<java::lang::Cloneable>() const
{
	return local_ref<java::lang::Cloneable>(get_jobject());
}

java::text::DecimalFormatSymbols::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}


java::text::DecimalFormatSymbols::DecimalFormatSymbols()
: object<java::text::DecimalFormatSymbols>(
	call_new_object<
		java::text::DecimalFormatSymbols::J2CPP_CLASS_NAME,
		java::text::DecimalFormatSymbols::J2CPP_METHOD_NAME(0),
		java::text::DecimalFormatSymbols::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}



java::text::DecimalFormatSymbols::DecimalFormatSymbols(local_ref< java::util::Locale > const &a0)
: object<java::text::DecimalFormatSymbols>(
	call_new_object<
		java::text::DecimalFormatSymbols::J2CPP_CLASS_NAME,
		java::text::DecimalFormatSymbols::J2CPP_METHOD_NAME(1),
		java::text::DecimalFormatSymbols::J2CPP_METHOD_SIGNATURE(1)>
	(a0)
)
{
}


local_ref< java::lang::Object > java::text::DecimalFormatSymbols::clone()
{
	return call_method<
		java::text::DecimalFormatSymbols::J2CPP_CLASS_NAME,
		java::text::DecimalFormatSymbols::J2CPP_METHOD_NAME(2),
		java::text::DecimalFormatSymbols::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::lang::Object > >
	(get_jobject());
}

jboolean java::text::DecimalFormatSymbols::equals(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::text::DecimalFormatSymbols::J2CPP_CLASS_NAME,
		java::text::DecimalFormatSymbols::J2CPP_METHOD_NAME(3),
		java::text::DecimalFormatSymbols::J2CPP_METHOD_SIGNATURE(3), 
		jboolean >
	(get_jobject(), a0);
}

local_ref< java::util::Currency > java::text::DecimalFormatSymbols::getCurrency()
{
	return call_method<
		java::text::DecimalFormatSymbols::J2CPP_CLASS_NAME,
		java::text::DecimalFormatSymbols::J2CPP_METHOD_NAME(4),
		java::text::DecimalFormatSymbols::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::util::Currency > >
	(get_jobject());
}

local_ref< java::lang::String > java::text::DecimalFormatSymbols::getInternationalCurrencySymbol()
{
	return call_method<
		java::text::DecimalFormatSymbols::J2CPP_CLASS_NAME,
		java::text::DecimalFormatSymbols::J2CPP_METHOD_NAME(5),
		java::text::DecimalFormatSymbols::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::lang::String > >
	(get_jobject());
}

local_ref< java::lang::String > java::text::DecimalFormatSymbols::getCurrencySymbol()
{
	return call_method<
		java::text::DecimalFormatSymbols::J2CPP_CLASS_NAME,
		java::text::DecimalFormatSymbols::J2CPP_METHOD_NAME(6),
		java::text::DecimalFormatSymbols::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::lang::String > >
	(get_jobject());
}

jchar java::text::DecimalFormatSymbols::getDecimalSeparator()
{
	return call_method<
		java::text::DecimalFormatSymbols::J2CPP_CLASS_NAME,
		java::text::DecimalFormatSymbols::J2CPP_METHOD_NAME(7),
		java::text::DecimalFormatSymbols::J2CPP_METHOD_SIGNATURE(7), 
		jchar >
	(get_jobject());
}

jchar java::text::DecimalFormatSymbols::getDigit()
{
	return call_method<
		java::text::DecimalFormatSymbols::J2CPP_CLASS_NAME,
		java::text::DecimalFormatSymbols::J2CPP_METHOD_NAME(8),
		java::text::DecimalFormatSymbols::J2CPP_METHOD_SIGNATURE(8), 
		jchar >
	(get_jobject());
}

jchar java::text::DecimalFormatSymbols::getGroupingSeparator()
{
	return call_method<
		java::text::DecimalFormatSymbols::J2CPP_CLASS_NAME,
		java::text::DecimalFormatSymbols::J2CPP_METHOD_NAME(9),
		java::text::DecimalFormatSymbols::J2CPP_METHOD_SIGNATURE(9), 
		jchar >
	(get_jobject());
}

local_ref< java::lang::String > java::text::DecimalFormatSymbols::getInfinity()
{
	return call_method<
		java::text::DecimalFormatSymbols::J2CPP_CLASS_NAME,
		java::text::DecimalFormatSymbols::J2CPP_METHOD_NAME(10),
		java::text::DecimalFormatSymbols::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< java::lang::String > >
	(get_jobject());
}

jchar java::text::DecimalFormatSymbols::getMinusSign()
{
	return call_method<
		java::text::DecimalFormatSymbols::J2CPP_CLASS_NAME,
		java::text::DecimalFormatSymbols::J2CPP_METHOD_NAME(11),
		java::text::DecimalFormatSymbols::J2CPP_METHOD_SIGNATURE(11), 
		jchar >
	(get_jobject());
}

jchar java::text::DecimalFormatSymbols::getMonetaryDecimalSeparator()
{
	return call_method<
		java::text::DecimalFormatSymbols::J2CPP_CLASS_NAME,
		java::text::DecimalFormatSymbols::J2CPP_METHOD_NAME(12),
		java::text::DecimalFormatSymbols::J2CPP_METHOD_SIGNATURE(12), 
		jchar >
	(get_jobject());
}

local_ref< java::lang::String > java::text::DecimalFormatSymbols::getNaN()
{
	return call_method<
		java::text::DecimalFormatSymbols::J2CPP_CLASS_NAME,
		java::text::DecimalFormatSymbols::J2CPP_METHOD_NAME(13),
		java::text::DecimalFormatSymbols::J2CPP_METHOD_SIGNATURE(13), 
		local_ref< java::lang::String > >
	(get_jobject());
}

jchar java::text::DecimalFormatSymbols::getPatternSeparator()
{
	return call_method<
		java::text::DecimalFormatSymbols::J2CPP_CLASS_NAME,
		java::text::DecimalFormatSymbols::J2CPP_METHOD_NAME(14),
		java::text::DecimalFormatSymbols::J2CPP_METHOD_SIGNATURE(14), 
		jchar >
	(get_jobject());
}

jchar java::text::DecimalFormatSymbols::getPercent()
{
	return call_method<
		java::text::DecimalFormatSymbols::J2CPP_CLASS_NAME,
		java::text::DecimalFormatSymbols::J2CPP_METHOD_NAME(15),
		java::text::DecimalFormatSymbols::J2CPP_METHOD_SIGNATURE(15), 
		jchar >
	(get_jobject());
}

jchar java::text::DecimalFormatSymbols::getPerMill()
{
	return call_method<
		java::text::DecimalFormatSymbols::J2CPP_CLASS_NAME,
		java::text::DecimalFormatSymbols::J2CPP_METHOD_NAME(16),
		java::text::DecimalFormatSymbols::J2CPP_METHOD_SIGNATURE(16), 
		jchar >
	(get_jobject());
}

jchar java::text::DecimalFormatSymbols::getZeroDigit()
{
	return call_method<
		java::text::DecimalFormatSymbols::J2CPP_CLASS_NAME,
		java::text::DecimalFormatSymbols::J2CPP_METHOD_NAME(17),
		java::text::DecimalFormatSymbols::J2CPP_METHOD_SIGNATURE(17), 
		jchar >
	(get_jobject());
}

jint java::text::DecimalFormatSymbols::hashCode()
{
	return call_method<
		java::text::DecimalFormatSymbols::J2CPP_CLASS_NAME,
		java::text::DecimalFormatSymbols::J2CPP_METHOD_NAME(18),
		java::text::DecimalFormatSymbols::J2CPP_METHOD_SIGNATURE(18), 
		jint >
	(get_jobject());
}

void java::text::DecimalFormatSymbols::setCurrency(local_ref< java::util::Currency > const &a0)
{
	return call_method<
		java::text::DecimalFormatSymbols::J2CPP_CLASS_NAME,
		java::text::DecimalFormatSymbols::J2CPP_METHOD_NAME(19),
		java::text::DecimalFormatSymbols::J2CPP_METHOD_SIGNATURE(19), 
		void >
	(get_jobject(), a0);
}

void java::text::DecimalFormatSymbols::setInternationalCurrencySymbol(local_ref< java::lang::String > const &a0)
{
	return call_method<
		java::text::DecimalFormatSymbols::J2CPP_CLASS_NAME,
		java::text::DecimalFormatSymbols::J2CPP_METHOD_NAME(20),
		java::text::DecimalFormatSymbols::J2CPP_METHOD_SIGNATURE(20), 
		void >
	(get_jobject(), a0);
}

void java::text::DecimalFormatSymbols::setCurrencySymbol(local_ref< java::lang::String > const &a0)
{
	return call_method<
		java::text::DecimalFormatSymbols::J2CPP_CLASS_NAME,
		java::text::DecimalFormatSymbols::J2CPP_METHOD_NAME(21),
		java::text::DecimalFormatSymbols::J2CPP_METHOD_SIGNATURE(21), 
		void >
	(get_jobject(), a0);
}

void java::text::DecimalFormatSymbols::setDecimalSeparator(jchar a0)
{
	return call_method<
		java::text::DecimalFormatSymbols::J2CPP_CLASS_NAME,
		java::text::DecimalFormatSymbols::J2CPP_METHOD_NAME(22),
		java::text::DecimalFormatSymbols::J2CPP_METHOD_SIGNATURE(22), 
		void >
	(get_jobject(), a0);
}

void java::text::DecimalFormatSymbols::setDigit(jchar a0)
{
	return call_method<
		java::text::DecimalFormatSymbols::J2CPP_CLASS_NAME,
		java::text::DecimalFormatSymbols::J2CPP_METHOD_NAME(23),
		java::text::DecimalFormatSymbols::J2CPP_METHOD_SIGNATURE(23), 
		void >
	(get_jobject(), a0);
}

void java::text::DecimalFormatSymbols::setGroupingSeparator(jchar a0)
{
	return call_method<
		java::text::DecimalFormatSymbols::J2CPP_CLASS_NAME,
		java::text::DecimalFormatSymbols::J2CPP_METHOD_NAME(24),
		java::text::DecimalFormatSymbols::J2CPP_METHOD_SIGNATURE(24), 
		void >
	(get_jobject(), a0);
}

void java::text::DecimalFormatSymbols::setInfinity(local_ref< java::lang::String > const &a0)
{
	return call_method<
		java::text::DecimalFormatSymbols::J2CPP_CLASS_NAME,
		java::text::DecimalFormatSymbols::J2CPP_METHOD_NAME(25),
		java::text::DecimalFormatSymbols::J2CPP_METHOD_SIGNATURE(25), 
		void >
	(get_jobject(), a0);
}

void java::text::DecimalFormatSymbols::setMinusSign(jchar a0)
{
	return call_method<
		java::text::DecimalFormatSymbols::J2CPP_CLASS_NAME,
		java::text::DecimalFormatSymbols::J2CPP_METHOD_NAME(26),
		java::text::DecimalFormatSymbols::J2CPP_METHOD_SIGNATURE(26), 
		void >
	(get_jobject(), a0);
}

void java::text::DecimalFormatSymbols::setMonetaryDecimalSeparator(jchar a0)
{
	return call_method<
		java::text::DecimalFormatSymbols::J2CPP_CLASS_NAME,
		java::text::DecimalFormatSymbols::J2CPP_METHOD_NAME(27),
		java::text::DecimalFormatSymbols::J2CPP_METHOD_SIGNATURE(27), 
		void >
	(get_jobject(), a0);
}

void java::text::DecimalFormatSymbols::setNaN(local_ref< java::lang::String > const &a0)
{
	return call_method<
		java::text::DecimalFormatSymbols::J2CPP_CLASS_NAME,
		java::text::DecimalFormatSymbols::J2CPP_METHOD_NAME(28),
		java::text::DecimalFormatSymbols::J2CPP_METHOD_SIGNATURE(28), 
		void >
	(get_jobject(), a0);
}

void java::text::DecimalFormatSymbols::setPatternSeparator(jchar a0)
{
	return call_method<
		java::text::DecimalFormatSymbols::J2CPP_CLASS_NAME,
		java::text::DecimalFormatSymbols::J2CPP_METHOD_NAME(29),
		java::text::DecimalFormatSymbols::J2CPP_METHOD_SIGNATURE(29), 
		void >
	(get_jobject(), a0);
}

void java::text::DecimalFormatSymbols::setPercent(jchar a0)
{
	return call_method<
		java::text::DecimalFormatSymbols::J2CPP_CLASS_NAME,
		java::text::DecimalFormatSymbols::J2CPP_METHOD_NAME(30),
		java::text::DecimalFormatSymbols::J2CPP_METHOD_SIGNATURE(30), 
		void >
	(get_jobject(), a0);
}

void java::text::DecimalFormatSymbols::setPerMill(jchar a0)
{
	return call_method<
		java::text::DecimalFormatSymbols::J2CPP_CLASS_NAME,
		java::text::DecimalFormatSymbols::J2CPP_METHOD_NAME(31),
		java::text::DecimalFormatSymbols::J2CPP_METHOD_SIGNATURE(31), 
		void >
	(get_jobject(), a0);
}

void java::text::DecimalFormatSymbols::setZeroDigit(jchar a0)
{
	return call_method<
		java::text::DecimalFormatSymbols::J2CPP_CLASS_NAME,
		java::text::DecimalFormatSymbols::J2CPP_METHOD_NAME(32),
		java::text::DecimalFormatSymbols::J2CPP_METHOD_SIGNATURE(32), 
		void >
	(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(java::text::DecimalFormatSymbols,"java/text/DecimalFormatSymbols")
J2CPP_DEFINE_METHOD(java::text::DecimalFormatSymbols,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::text::DecimalFormatSymbols,1,"<init>","(Ljava/util/Locale;)V")
J2CPP_DEFINE_METHOD(java::text::DecimalFormatSymbols,2,"clone","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::text::DecimalFormatSymbols,3,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::text::DecimalFormatSymbols,4,"getCurrency","()Ljava/util/Currency;")
J2CPP_DEFINE_METHOD(java::text::DecimalFormatSymbols,5,"getInternationalCurrencySymbol","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::text::DecimalFormatSymbols,6,"getCurrencySymbol","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::text::DecimalFormatSymbols,7,"getDecimalSeparator","()C")
J2CPP_DEFINE_METHOD(java::text::DecimalFormatSymbols,8,"getDigit","()C")
J2CPP_DEFINE_METHOD(java::text::DecimalFormatSymbols,9,"getGroupingSeparator","()C")
J2CPP_DEFINE_METHOD(java::text::DecimalFormatSymbols,10,"getInfinity","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::text::DecimalFormatSymbols,11,"getMinusSign","()C")
J2CPP_DEFINE_METHOD(java::text::DecimalFormatSymbols,12,"getMonetaryDecimalSeparator","()C")
J2CPP_DEFINE_METHOD(java::text::DecimalFormatSymbols,13,"getNaN","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::text::DecimalFormatSymbols,14,"getPatternSeparator","()C")
J2CPP_DEFINE_METHOD(java::text::DecimalFormatSymbols,15,"getPercent","()C")
J2CPP_DEFINE_METHOD(java::text::DecimalFormatSymbols,16,"getPerMill","()C")
J2CPP_DEFINE_METHOD(java::text::DecimalFormatSymbols,17,"getZeroDigit","()C")
J2CPP_DEFINE_METHOD(java::text::DecimalFormatSymbols,18,"hashCode","()I")
J2CPP_DEFINE_METHOD(java::text::DecimalFormatSymbols,19,"setCurrency","(Ljava/util/Currency;)V")
J2CPP_DEFINE_METHOD(java::text::DecimalFormatSymbols,20,"setInternationalCurrencySymbol","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::text::DecimalFormatSymbols,21,"setCurrencySymbol","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::text::DecimalFormatSymbols,22,"setDecimalSeparator","(C)V")
J2CPP_DEFINE_METHOD(java::text::DecimalFormatSymbols,23,"setDigit","(C)V")
J2CPP_DEFINE_METHOD(java::text::DecimalFormatSymbols,24,"setGroupingSeparator","(C)V")
J2CPP_DEFINE_METHOD(java::text::DecimalFormatSymbols,25,"setInfinity","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::text::DecimalFormatSymbols,26,"setMinusSign","(C)V")
J2CPP_DEFINE_METHOD(java::text::DecimalFormatSymbols,27,"setMonetaryDecimalSeparator","(C)V")
J2CPP_DEFINE_METHOD(java::text::DecimalFormatSymbols,28,"setNaN","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::text::DecimalFormatSymbols,29,"setPatternSeparator","(C)V")
J2CPP_DEFINE_METHOD(java::text::DecimalFormatSymbols,30,"setPercent","(C)V")
J2CPP_DEFINE_METHOD(java::text::DecimalFormatSymbols,31,"setPerMill","(C)V")
J2CPP_DEFINE_METHOD(java::text::DecimalFormatSymbols,32,"setZeroDigit","(C)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_TEXT_DECIMALFORMATSYMBOLS_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
