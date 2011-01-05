/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.database.MatrixCursor
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_DATABASE_MATRIXCURSOR_HPP_DECL
#define J2CPP_ANDROID_DATABASE_MATRIXCURSOR_HPP_DECL


namespace j2cpp { namespace android { namespace database { class Cursor; } } }
namespace j2cpp { namespace android { namespace database { class AbstractCursor; } } }
namespace j2cpp { namespace android { namespace database { class CrossProcessCursor; } } }
namespace j2cpp { namespace android { namespace database { namespace MatrixCursor_ { class RowBuilder; } } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Iterable; } } }


#include <android/database/AbstractCursor.hpp>
#include <android/database/CrossProcessCursor.hpp>
#include <android/database/Cursor.hpp>
#include <android/database/MatrixCursor.hpp>
#include <java/lang/Iterable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace database {

	class MatrixCursor;
	namespace MatrixCursor_ {

		class RowBuilder;
		class RowBuilder
			: public object<RowBuilder>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)
			J2CPP_DECLARE_FIELD(0)

			explicit RowBuilder(jobject jobj)
			: object<RowBuilder>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			local_ref< android::database::MatrixCursor_::RowBuilder > add(local_ref< java::lang::Object >  const&);

		}; //class RowBuilder

	} //namespace MatrixCursor_

	class MatrixCursor
		: public object<MatrixCursor>
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

		typedef MatrixCursor_::RowBuilder RowBuilder;

		explicit MatrixCursor(jobject jobj)
		: object<MatrixCursor>(jobj)
		{
		}

		operator local_ref<android::database::Cursor>() const;
		operator local_ref<android::database::AbstractCursor>() const;
		operator local_ref<android::database::CrossProcessCursor>() const;
		operator local_ref<java::lang::Object>() const;


		MatrixCursor(local_ref< array< local_ref< java::lang::String >, 1> > const&, jint);
		MatrixCursor(local_ref< array< local_ref< java::lang::String >, 1> > const&);
		local_ref< android::database::MatrixCursor_::RowBuilder > newRow();
		void addRow(local_ref< array< local_ref< java::lang::Object >, 1> >  const&);
		void addRow(local_ref< java::lang::Iterable >  const&);
		jint getCount();
		local_ref< array< local_ref< java::lang::String >, 1> > getColumnNames();
		local_ref< java::lang::String > getString(jint);
		jshort getShort(jint);
		jint getInt(jint);
		jlong getLong(jint);
		jfloat getFloat(jint);
		jdouble getDouble(jint);
		jboolean isNull(jint);
	}; //class MatrixCursor

} //namespace database
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_DATABASE_MATRIXCURSOR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_DATABASE_MATRIXCURSOR_HPP_IMPL
#define J2CPP_ANDROID_DATABASE_MATRIXCURSOR_HPP_IMPL

namespace j2cpp {




android::database::MatrixCursor_::RowBuilder::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


local_ref< android::database::MatrixCursor_::RowBuilder > android::database::MatrixCursor_::RowBuilder::add(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		android::database::MatrixCursor_::RowBuilder::J2CPP_CLASS_NAME,
		android::database::MatrixCursor_::RowBuilder::J2CPP_METHOD_NAME(1),
		android::database::MatrixCursor_::RowBuilder::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< android::database::MatrixCursor_::RowBuilder >
	>(get_jobject(), a0);
}



J2CPP_DEFINE_CLASS(android::database::MatrixCursor_::RowBuilder,"android/database/MatrixCursor$RowBuilder")
J2CPP_DEFINE_METHOD(android::database::MatrixCursor_::RowBuilder,0,"<init>","(Landroid/database/MatrixCursor;)V")
J2CPP_DEFINE_METHOD(android::database::MatrixCursor_::RowBuilder,1,"add","(Ljava/lang/Object;)Landroid/database/MatrixCursor$RowBuilder;")
J2CPP_DEFINE_FIELD(android::database::MatrixCursor_::RowBuilder,0,"this$0","Landroid/database/MatrixCursor;")



android::database::MatrixCursor::operator local_ref<android::database::Cursor>() const
{
	return local_ref<android::database::Cursor>(get_jobject());
}

android::database::MatrixCursor::operator local_ref<android::database::AbstractCursor>() const
{
	return local_ref<android::database::AbstractCursor>(get_jobject());
}

android::database::MatrixCursor::operator local_ref<android::database::CrossProcessCursor>() const
{
	return local_ref<android::database::CrossProcessCursor>(get_jobject());
}

android::database::MatrixCursor::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::database::MatrixCursor::MatrixCursor(local_ref< array< local_ref< java::lang::String >, 1> > const &a0, jint a1)
: object<android::database::MatrixCursor>(
	call_new_object<
		android::database::MatrixCursor::J2CPP_CLASS_NAME,
		android::database::MatrixCursor::J2CPP_METHOD_NAME(0),
		android::database::MatrixCursor::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1)
)
{
}



android::database::MatrixCursor::MatrixCursor(local_ref< array< local_ref< java::lang::String >, 1> > const &a0)
: object<android::database::MatrixCursor>(
	call_new_object<
		android::database::MatrixCursor::J2CPP_CLASS_NAME,
		android::database::MatrixCursor::J2CPP_METHOD_NAME(1),
		android::database::MatrixCursor::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}


local_ref< android::database::MatrixCursor_::RowBuilder > android::database::MatrixCursor::newRow()
{
	return call_method<
		android::database::MatrixCursor::J2CPP_CLASS_NAME,
		android::database::MatrixCursor::J2CPP_METHOD_NAME(2),
		android::database::MatrixCursor::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< android::database::MatrixCursor_::RowBuilder >
	>(get_jobject());
}

void android::database::MatrixCursor::addRow(local_ref< array< local_ref< java::lang::Object >, 1> > const &a0)
{
	return call_method<
		android::database::MatrixCursor::J2CPP_CLASS_NAME,
		android::database::MatrixCursor::J2CPP_METHOD_NAME(3),
		android::database::MatrixCursor::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject(), a0);
}

void android::database::MatrixCursor::addRow(local_ref< java::lang::Iterable > const &a0)
{
	return call_method<
		android::database::MatrixCursor::J2CPP_CLASS_NAME,
		android::database::MatrixCursor::J2CPP_METHOD_NAME(4),
		android::database::MatrixCursor::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0);
}

jint android::database::MatrixCursor::getCount()
{
	return call_method<
		android::database::MatrixCursor::J2CPP_CLASS_NAME,
		android::database::MatrixCursor::J2CPP_METHOD_NAME(5),
		android::database::MatrixCursor::J2CPP_METHOD_SIGNATURE(5), 
		jint
	>(get_jobject());
}

local_ref< array< local_ref< java::lang::String >, 1> > android::database::MatrixCursor::getColumnNames()
{
	return call_method<
		android::database::MatrixCursor::J2CPP_CLASS_NAME,
		android::database::MatrixCursor::J2CPP_METHOD_NAME(6),
		android::database::MatrixCursor::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< array< local_ref< java::lang::String >, 1> >
	>(get_jobject());
}

local_ref< java::lang::String > android::database::MatrixCursor::getString(jint a0)
{
	return call_method<
		android::database::MatrixCursor::J2CPP_CLASS_NAME,
		android::database::MatrixCursor::J2CPP_METHOD_NAME(7),
		android::database::MatrixCursor::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< java::lang::String >
	>(get_jobject(), a0);
}

jshort android::database::MatrixCursor::getShort(jint a0)
{
	return call_method<
		android::database::MatrixCursor::J2CPP_CLASS_NAME,
		android::database::MatrixCursor::J2CPP_METHOD_NAME(8),
		android::database::MatrixCursor::J2CPP_METHOD_SIGNATURE(8), 
		jshort
	>(get_jobject(), a0);
}

jint android::database::MatrixCursor::getInt(jint a0)
{
	return call_method<
		android::database::MatrixCursor::J2CPP_CLASS_NAME,
		android::database::MatrixCursor::J2CPP_METHOD_NAME(9),
		android::database::MatrixCursor::J2CPP_METHOD_SIGNATURE(9), 
		jint
	>(get_jobject(), a0);
}

jlong android::database::MatrixCursor::getLong(jint a0)
{
	return call_method<
		android::database::MatrixCursor::J2CPP_CLASS_NAME,
		android::database::MatrixCursor::J2CPP_METHOD_NAME(10),
		android::database::MatrixCursor::J2CPP_METHOD_SIGNATURE(10), 
		jlong
	>(get_jobject(), a0);
}

jfloat android::database::MatrixCursor::getFloat(jint a0)
{
	return call_method<
		android::database::MatrixCursor::J2CPP_CLASS_NAME,
		android::database::MatrixCursor::J2CPP_METHOD_NAME(11),
		android::database::MatrixCursor::J2CPP_METHOD_SIGNATURE(11), 
		jfloat
	>(get_jobject(), a0);
}

jdouble android::database::MatrixCursor::getDouble(jint a0)
{
	return call_method<
		android::database::MatrixCursor::J2CPP_CLASS_NAME,
		android::database::MatrixCursor::J2CPP_METHOD_NAME(12),
		android::database::MatrixCursor::J2CPP_METHOD_SIGNATURE(12), 
		jdouble
	>(get_jobject(), a0);
}

jboolean android::database::MatrixCursor::isNull(jint a0)
{
	return call_method<
		android::database::MatrixCursor::J2CPP_CLASS_NAME,
		android::database::MatrixCursor::J2CPP_METHOD_NAME(13),
		android::database::MatrixCursor::J2CPP_METHOD_SIGNATURE(13), 
		jboolean
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(android::database::MatrixCursor,"android/database/MatrixCursor")
J2CPP_DEFINE_METHOD(android::database::MatrixCursor,0,"<init>","([java.lang.StringI)V")
J2CPP_DEFINE_METHOD(android::database::MatrixCursor,1,"<init>","([java.lang.String)V")
J2CPP_DEFINE_METHOD(android::database::MatrixCursor,2,"newRow","()Landroid/database/MatrixCursor$RowBuilder;")
J2CPP_DEFINE_METHOD(android::database::MatrixCursor,3,"addRow","([java.lang.Object)V")
J2CPP_DEFINE_METHOD(android::database::MatrixCursor,4,"addRow","(Ljava/lang/Iterable;)V")
J2CPP_DEFINE_METHOD(android::database::MatrixCursor,5,"getCount","()I")
J2CPP_DEFINE_METHOD(android::database::MatrixCursor,6,"getColumnNames","()[java.lang.String")
J2CPP_DEFINE_METHOD(android::database::MatrixCursor,7,"getString","(I)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::database::MatrixCursor,8,"getShort","(I)S")
J2CPP_DEFINE_METHOD(android::database::MatrixCursor,9,"getInt","(I)I")
J2CPP_DEFINE_METHOD(android::database::MatrixCursor,10,"getLong","(I)J")
J2CPP_DEFINE_METHOD(android::database::MatrixCursor,11,"getFloat","(I)F")
J2CPP_DEFINE_METHOD(android::database::MatrixCursor,12,"getDouble","(I)D")
J2CPP_DEFINE_METHOD(android::database::MatrixCursor,13,"isNull","(I)Z")

} //namespace j2cpp

#endif //J2CPP_ANDROID_DATABASE_MATRIXCURSOR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
