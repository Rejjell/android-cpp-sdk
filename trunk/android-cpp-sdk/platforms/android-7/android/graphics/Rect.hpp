/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.graphics.Rect
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_RECT_HPP_DECL
#define J2CPP_ANDROID_GRAPHICS_RECT_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace android { namespace os { class Parcel; } } }
namespace j2cpp { namespace android { namespace os { class Parcelable; } } }
namespace j2cpp { namespace android { namespace os { namespace Parcelable_ { class Creator; } } } }


#include <android/os/Parcel.hpp>
#include <android/os/Parcelable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace graphics {

	class Rect;
	class Rect
		: public object<Rect>
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
		J2CPP_DECLARE_METHOD(33)
		J2CPP_DECLARE_METHOD(34)
		J2CPP_DECLARE_METHOD(35)
		J2CPP_DECLARE_METHOD(36)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)

		explicit Rect(jobject jobj)
		: object<Rect>(jobj)
		, left(jobj)
		, top(jobj)
		, right(jobj)
		, bottom(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::os::Parcelable>() const;


		Rect();
		Rect(jint, jint, jint, jint);
		Rect(local_ref< android::graphics::Rect > const&);
		jboolean equals(local_ref< java::lang::Object >  const&);
		local_ref< java::lang::String > toString();
		local_ref< java::lang::String > toShortString();
		local_ref< java::lang::String > flattenToString();
		static local_ref< android::graphics::Rect > unflattenFromString(local_ref< java::lang::String >  const&);
		jboolean isEmpty();
		jint width();
		jint height();
		jint centerX();
		jint centerY();
		jfloat exactCenterX();
		jfloat exactCenterY();
		void setEmpty();
		void set(jint, jint, jint, jint);
		void set(local_ref< android::graphics::Rect >  const&);
		void offset(jint, jint);
		void offsetTo(jint, jint);
		void inset(jint, jint);
		jboolean contains(jint, jint);
		jboolean contains(jint, jint, jint, jint);
		jboolean contains(local_ref< android::graphics::Rect >  const&);
		jboolean intersect(jint, jint, jint, jint);
		jboolean intersect(local_ref< android::graphics::Rect >  const&);
		jboolean setIntersect(local_ref< android::graphics::Rect >  const&, local_ref< android::graphics::Rect >  const&);
		jboolean intersects(jint, jint, jint, jint);
		static jboolean intersects(local_ref< android::graphics::Rect >  const&, local_ref< android::graphics::Rect >  const&);
		void union_(jint, jint, jint, jint);
		void union_(local_ref< android::graphics::Rect >  const&);
		void union_(jint, jint);
		void sort();
		jint describeContents();
		void writeToParcel(local_ref< android::os::Parcel >  const&, jint);
		void readFromParcel(local_ref< android::os::Parcel >  const&);

		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > left;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > top;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jint > right;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), jint > bottom;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), local_ref< android::os::Parcelable_::Creator > > CREATOR;
	}; //class Rect

} //namespace graphics
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_RECT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_RECT_HPP_IMPL
#define J2CPP_ANDROID_GRAPHICS_RECT_HPP_IMPL

namespace j2cpp {



android::graphics::Rect::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::graphics::Rect::operator local_ref<android::os::Parcelable>() const
{
	return local_ref<android::os::Parcelable>(get_jobject());
}


android::graphics::Rect::Rect()
: object<android::graphics::Rect>(
	call_new_object<
		android::graphics::Rect::J2CPP_CLASS_NAME,
		android::graphics::Rect::J2CPP_METHOD_NAME(0),
		android::graphics::Rect::J2CPP_METHOD_SIGNATURE(0)>
	()
)
, left(get_jobject())
, top(get_jobject())
, right(get_jobject())
, bottom(get_jobject())
{
}



android::graphics::Rect::Rect(jint a0, jint a1, jint a2, jint a3)
: object<android::graphics::Rect>(
	call_new_object<
		android::graphics::Rect::J2CPP_CLASS_NAME,
		android::graphics::Rect::J2CPP_METHOD_NAME(1),
		android::graphics::Rect::J2CPP_METHOD_SIGNATURE(1)>
	(a0, a1, a2, a3)
)
, left(get_jobject())
, top(get_jobject())
, right(get_jobject())
, bottom(get_jobject())
{
}



android::graphics::Rect::Rect(local_ref< android::graphics::Rect > const &a0)
: object<android::graphics::Rect>(
	call_new_object<
		android::graphics::Rect::J2CPP_CLASS_NAME,
		android::graphics::Rect::J2CPP_METHOD_NAME(2),
		android::graphics::Rect::J2CPP_METHOD_SIGNATURE(2)>
	(a0)
)
, left(get_jobject())
, top(get_jobject())
, right(get_jobject())
, bottom(get_jobject())
{
}


jboolean android::graphics::Rect::equals(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		android::graphics::Rect::J2CPP_CLASS_NAME,
		android::graphics::Rect::J2CPP_METHOD_NAME(3),
		android::graphics::Rect::J2CPP_METHOD_SIGNATURE(3), 
		jboolean >
	(get_jobject(), a0);
}

local_ref< java::lang::String > android::graphics::Rect::toString()
{
	return call_method<
		android::graphics::Rect::J2CPP_CLASS_NAME,
		android::graphics::Rect::J2CPP_METHOD_NAME(4),
		android::graphics::Rect::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::lang::String > >
	(get_jobject());
}

local_ref< java::lang::String > android::graphics::Rect::toShortString()
{
	return call_method<
		android::graphics::Rect::J2CPP_CLASS_NAME,
		android::graphics::Rect::J2CPP_METHOD_NAME(5),
		android::graphics::Rect::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::lang::String > >
	(get_jobject());
}

local_ref< java::lang::String > android::graphics::Rect::flattenToString()
{
	return call_method<
		android::graphics::Rect::J2CPP_CLASS_NAME,
		android::graphics::Rect::J2CPP_METHOD_NAME(6),
		android::graphics::Rect::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::lang::String > >
	(get_jobject());
}

local_ref< android::graphics::Rect > android::graphics::Rect::unflattenFromString(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		android::graphics::Rect::J2CPP_CLASS_NAME,
		android::graphics::Rect::J2CPP_METHOD_NAME(7),
		android::graphics::Rect::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< android::graphics::Rect > >
	(a0);
}

jboolean android::graphics::Rect::isEmpty()
{
	return call_method<
		android::graphics::Rect::J2CPP_CLASS_NAME,
		android::graphics::Rect::J2CPP_METHOD_NAME(8),
		android::graphics::Rect::J2CPP_METHOD_SIGNATURE(8), 
		jboolean >
	(get_jobject());
}

jint android::graphics::Rect::width()
{
	return call_method<
		android::graphics::Rect::J2CPP_CLASS_NAME,
		android::graphics::Rect::J2CPP_METHOD_NAME(9),
		android::graphics::Rect::J2CPP_METHOD_SIGNATURE(9), 
		jint >
	(get_jobject());
}

jint android::graphics::Rect::height()
{
	return call_method<
		android::graphics::Rect::J2CPP_CLASS_NAME,
		android::graphics::Rect::J2CPP_METHOD_NAME(10),
		android::graphics::Rect::J2CPP_METHOD_SIGNATURE(10), 
		jint >
	(get_jobject());
}

jint android::graphics::Rect::centerX()
{
	return call_method<
		android::graphics::Rect::J2CPP_CLASS_NAME,
		android::graphics::Rect::J2CPP_METHOD_NAME(11),
		android::graphics::Rect::J2CPP_METHOD_SIGNATURE(11), 
		jint >
	(get_jobject());
}

jint android::graphics::Rect::centerY()
{
	return call_method<
		android::graphics::Rect::J2CPP_CLASS_NAME,
		android::graphics::Rect::J2CPP_METHOD_NAME(12),
		android::graphics::Rect::J2CPP_METHOD_SIGNATURE(12), 
		jint >
	(get_jobject());
}

jfloat android::graphics::Rect::exactCenterX()
{
	return call_method<
		android::graphics::Rect::J2CPP_CLASS_NAME,
		android::graphics::Rect::J2CPP_METHOD_NAME(13),
		android::graphics::Rect::J2CPP_METHOD_SIGNATURE(13), 
		jfloat >
	(get_jobject());
}

jfloat android::graphics::Rect::exactCenterY()
{
	return call_method<
		android::graphics::Rect::J2CPP_CLASS_NAME,
		android::graphics::Rect::J2CPP_METHOD_NAME(14),
		android::graphics::Rect::J2CPP_METHOD_SIGNATURE(14), 
		jfloat >
	(get_jobject());
}

void android::graphics::Rect::setEmpty()
{
	return call_method<
		android::graphics::Rect::J2CPP_CLASS_NAME,
		android::graphics::Rect::J2CPP_METHOD_NAME(15),
		android::graphics::Rect::J2CPP_METHOD_SIGNATURE(15), 
		void >
	(get_jobject());
}

void android::graphics::Rect::set(jint a0, jint a1, jint a2, jint a3)
{
	return call_method<
		android::graphics::Rect::J2CPP_CLASS_NAME,
		android::graphics::Rect::J2CPP_METHOD_NAME(16),
		android::graphics::Rect::J2CPP_METHOD_SIGNATURE(16), 
		void >
	(get_jobject(), a0, a1, a2, a3);
}

void android::graphics::Rect::set(local_ref< android::graphics::Rect > const &a0)
{
	return call_method<
		android::graphics::Rect::J2CPP_CLASS_NAME,
		android::graphics::Rect::J2CPP_METHOD_NAME(17),
		android::graphics::Rect::J2CPP_METHOD_SIGNATURE(17), 
		void >
	(get_jobject(), a0);
}

void android::graphics::Rect::offset(jint a0, jint a1)
{
	return call_method<
		android::graphics::Rect::J2CPP_CLASS_NAME,
		android::graphics::Rect::J2CPP_METHOD_NAME(18),
		android::graphics::Rect::J2CPP_METHOD_SIGNATURE(18), 
		void >
	(get_jobject(), a0, a1);
}

void android::graphics::Rect::offsetTo(jint a0, jint a1)
{
	return call_method<
		android::graphics::Rect::J2CPP_CLASS_NAME,
		android::graphics::Rect::J2CPP_METHOD_NAME(19),
		android::graphics::Rect::J2CPP_METHOD_SIGNATURE(19), 
		void >
	(get_jobject(), a0, a1);
}

void android::graphics::Rect::inset(jint a0, jint a1)
{
	return call_method<
		android::graphics::Rect::J2CPP_CLASS_NAME,
		android::graphics::Rect::J2CPP_METHOD_NAME(20),
		android::graphics::Rect::J2CPP_METHOD_SIGNATURE(20), 
		void >
	(get_jobject(), a0, a1);
}

jboolean android::graphics::Rect::contains(jint a0, jint a1)
{
	return call_method<
		android::graphics::Rect::J2CPP_CLASS_NAME,
		android::graphics::Rect::J2CPP_METHOD_NAME(21),
		android::graphics::Rect::J2CPP_METHOD_SIGNATURE(21), 
		jboolean >
	(get_jobject(), a0, a1);
}

jboolean android::graphics::Rect::contains(jint a0, jint a1, jint a2, jint a3)
{
	return call_method<
		android::graphics::Rect::J2CPP_CLASS_NAME,
		android::graphics::Rect::J2CPP_METHOD_NAME(22),
		android::graphics::Rect::J2CPP_METHOD_SIGNATURE(22), 
		jboolean >
	(get_jobject(), a0, a1, a2, a3);
}

jboolean android::graphics::Rect::contains(local_ref< android::graphics::Rect > const &a0)
{
	return call_method<
		android::graphics::Rect::J2CPP_CLASS_NAME,
		android::graphics::Rect::J2CPP_METHOD_NAME(23),
		android::graphics::Rect::J2CPP_METHOD_SIGNATURE(23), 
		jboolean >
	(get_jobject(), a0);
}

jboolean android::graphics::Rect::intersect(jint a0, jint a1, jint a2, jint a3)
{
	return call_method<
		android::graphics::Rect::J2CPP_CLASS_NAME,
		android::graphics::Rect::J2CPP_METHOD_NAME(24),
		android::graphics::Rect::J2CPP_METHOD_SIGNATURE(24), 
		jboolean >
	(get_jobject(), a0, a1, a2, a3);
}

jboolean android::graphics::Rect::intersect(local_ref< android::graphics::Rect > const &a0)
{
	return call_method<
		android::graphics::Rect::J2CPP_CLASS_NAME,
		android::graphics::Rect::J2CPP_METHOD_NAME(25),
		android::graphics::Rect::J2CPP_METHOD_SIGNATURE(25), 
		jboolean >
	(get_jobject(), a0);
}

jboolean android::graphics::Rect::setIntersect(local_ref< android::graphics::Rect > const &a0, local_ref< android::graphics::Rect > const &a1)
{
	return call_method<
		android::graphics::Rect::J2CPP_CLASS_NAME,
		android::graphics::Rect::J2CPP_METHOD_NAME(26),
		android::graphics::Rect::J2CPP_METHOD_SIGNATURE(26), 
		jboolean >
	(get_jobject(), a0, a1);
}

jboolean android::graphics::Rect::intersects(jint a0, jint a1, jint a2, jint a3)
{
	return call_method<
		android::graphics::Rect::J2CPP_CLASS_NAME,
		android::graphics::Rect::J2CPP_METHOD_NAME(27),
		android::graphics::Rect::J2CPP_METHOD_SIGNATURE(27), 
		jboolean >
	(get_jobject(), a0, a1, a2, a3);
}

jboolean android::graphics::Rect::intersects(local_ref< android::graphics::Rect > const &a0, local_ref< android::graphics::Rect > const &a1)
{
	return call_static_method<
		android::graphics::Rect::J2CPP_CLASS_NAME,
		android::graphics::Rect::J2CPP_METHOD_NAME(28),
		android::graphics::Rect::J2CPP_METHOD_SIGNATURE(28), 
		jboolean >
	(a0, a1);
}

void android::graphics::Rect::union_(jint a0, jint a1, jint a2, jint a3)
{
	return call_method<
		android::graphics::Rect::J2CPP_CLASS_NAME,
		android::graphics::Rect::J2CPP_METHOD_NAME(29),
		android::graphics::Rect::J2CPP_METHOD_SIGNATURE(29), 
		void >
	(get_jobject(), a0, a1, a2, a3);
}

void android::graphics::Rect::union_(local_ref< android::graphics::Rect > const &a0)
{
	return call_method<
		android::graphics::Rect::J2CPP_CLASS_NAME,
		android::graphics::Rect::J2CPP_METHOD_NAME(30),
		android::graphics::Rect::J2CPP_METHOD_SIGNATURE(30), 
		void >
	(get_jobject(), a0);
}

void android::graphics::Rect::union_(jint a0, jint a1)
{
	return call_method<
		android::graphics::Rect::J2CPP_CLASS_NAME,
		android::graphics::Rect::J2CPP_METHOD_NAME(31),
		android::graphics::Rect::J2CPP_METHOD_SIGNATURE(31), 
		void >
	(get_jobject(), a0, a1);
}

void android::graphics::Rect::sort()
{
	return call_method<
		android::graphics::Rect::J2CPP_CLASS_NAME,
		android::graphics::Rect::J2CPP_METHOD_NAME(32),
		android::graphics::Rect::J2CPP_METHOD_SIGNATURE(32), 
		void >
	(get_jobject());
}

jint android::graphics::Rect::describeContents()
{
	return call_method<
		android::graphics::Rect::J2CPP_CLASS_NAME,
		android::graphics::Rect::J2CPP_METHOD_NAME(33),
		android::graphics::Rect::J2CPP_METHOD_SIGNATURE(33), 
		jint >
	(get_jobject());
}

void android::graphics::Rect::writeToParcel(local_ref< android::os::Parcel > const &a0, jint a1)
{
	return call_method<
		android::graphics::Rect::J2CPP_CLASS_NAME,
		android::graphics::Rect::J2CPP_METHOD_NAME(34),
		android::graphics::Rect::J2CPP_METHOD_SIGNATURE(34), 
		void >
	(get_jobject(), a0, a1);
}

void android::graphics::Rect::readFromParcel(local_ref< android::os::Parcel > const &a0)
{
	return call_method<
		android::graphics::Rect::J2CPP_CLASS_NAME,
		android::graphics::Rect::J2CPP_METHOD_NAME(35),
		android::graphics::Rect::J2CPP_METHOD_SIGNATURE(35), 
		void >
	(get_jobject(), a0);
}



static_field<
	android::graphics::Rect::J2CPP_CLASS_NAME,
	android::graphics::Rect::J2CPP_FIELD_NAME(4),
	android::graphics::Rect::J2CPP_FIELD_SIGNATURE(4),
	local_ref< android::os::Parcelable_::Creator >
> android::graphics::Rect::CREATOR;


J2CPP_DEFINE_CLASS(android::graphics::Rect,"android/graphics/Rect")
J2CPP_DEFINE_METHOD(android::graphics::Rect,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::graphics::Rect,1,"<init>","(IIII)V")
J2CPP_DEFINE_METHOD(android::graphics::Rect,2,"<init>","(Landroid/graphics/Rect;)V")
J2CPP_DEFINE_METHOD(android::graphics::Rect,3,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(android::graphics::Rect,4,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::graphics::Rect,5,"toShortString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::graphics::Rect,6,"flattenToString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::graphics::Rect,7,"unflattenFromString","(Ljava/lang/String;)Landroid/graphics/Rect;")
J2CPP_DEFINE_METHOD(android::graphics::Rect,8,"isEmpty","()Z")
J2CPP_DEFINE_METHOD(android::graphics::Rect,9,"width","()I")
J2CPP_DEFINE_METHOD(android::graphics::Rect,10,"height","()I")
J2CPP_DEFINE_METHOD(android::graphics::Rect,11,"centerX","()I")
J2CPP_DEFINE_METHOD(android::graphics::Rect,12,"centerY","()I")
J2CPP_DEFINE_METHOD(android::graphics::Rect,13,"exactCenterX","()F")
J2CPP_DEFINE_METHOD(android::graphics::Rect,14,"exactCenterY","()F")
J2CPP_DEFINE_METHOD(android::graphics::Rect,15,"setEmpty","()V")
J2CPP_DEFINE_METHOD(android::graphics::Rect,16,"set","(IIII)V")
J2CPP_DEFINE_METHOD(android::graphics::Rect,17,"set","(Landroid/graphics/Rect;)V")
J2CPP_DEFINE_METHOD(android::graphics::Rect,18,"offset","(II)V")
J2CPP_DEFINE_METHOD(android::graphics::Rect,19,"offsetTo","(II)V")
J2CPP_DEFINE_METHOD(android::graphics::Rect,20,"inset","(II)V")
J2CPP_DEFINE_METHOD(android::graphics::Rect,21,"contains","(II)Z")
J2CPP_DEFINE_METHOD(android::graphics::Rect,22,"contains","(IIII)Z")
J2CPP_DEFINE_METHOD(android::graphics::Rect,23,"contains","(Landroid/graphics/Rect;)Z")
J2CPP_DEFINE_METHOD(android::graphics::Rect,24,"intersect","(IIII)Z")
J2CPP_DEFINE_METHOD(android::graphics::Rect,25,"intersect","(Landroid/graphics/Rect;)Z")
J2CPP_DEFINE_METHOD(android::graphics::Rect,26,"setIntersect","(Landroid/graphics/Rect;Landroid/graphics/Rect;)Z")
J2CPP_DEFINE_METHOD(android::graphics::Rect,27,"intersects","(IIII)Z")
J2CPP_DEFINE_METHOD(android::graphics::Rect,28,"intersects","(Landroid/graphics/Rect;Landroid/graphics/Rect;)Z")
J2CPP_DEFINE_METHOD(android::graphics::Rect,29,"union","(IIII)V")
J2CPP_DEFINE_METHOD(android::graphics::Rect,30,"union","(Landroid/graphics/Rect;)V")
J2CPP_DEFINE_METHOD(android::graphics::Rect,31,"union","(II)V")
J2CPP_DEFINE_METHOD(android::graphics::Rect,32,"sort","()V")
J2CPP_DEFINE_METHOD(android::graphics::Rect,33,"describeContents","()I")
J2CPP_DEFINE_METHOD(android::graphics::Rect,34,"writeToParcel","(Landroid/os/Parcel;I)V")
J2CPP_DEFINE_METHOD(android::graphics::Rect,35,"readFromParcel","(Landroid/os/Parcel;)V")
J2CPP_DEFINE_METHOD(android::graphics::Rect,36,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::graphics::Rect,0,"left","I")
J2CPP_DEFINE_FIELD(android::graphics::Rect,1,"top","I")
J2CPP_DEFINE_FIELD(android::graphics::Rect,2,"right","I")
J2CPP_DEFINE_FIELD(android::graphics::Rect,3,"bottom","I")
J2CPP_DEFINE_FIELD(android::graphics::Rect,4,"CREATOR","Landroid/os/Parcelable$Creator;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_RECT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
