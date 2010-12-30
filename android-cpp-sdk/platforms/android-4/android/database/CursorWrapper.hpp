/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.database.CursorWrapper
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_DATABASE_CURSORWRAPPER_HPP_DECL
#define J2CPP_ANDROID_DATABASE_CURSORWRAPPER_HPP_DECL


namespace j2cpp { namespace android { namespace os { class Bundle; } } }
namespace j2cpp { namespace android { namespace database { class DataSetObserver; } } }
namespace j2cpp { namespace android { namespace database { class Cursor; } } }
namespace j2cpp { namespace android { namespace database { class ContentObserver; } } }
namespace j2cpp { namespace android { namespace database { class CharArrayBuffer; } } }
namespace j2cpp { namespace android { namespace net { class Uri; } } }
namespace j2cpp { namespace android { namespace content { class ContentResolver; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/content/ContentResolver.hpp>
#include <android/database/CharArrayBuffer.hpp>
#include <android/database/ContentObserver.hpp>
#include <android/database/Cursor.hpp>
#include <android/database/DataSetObserver.hpp>
#include <android/net/Uri.hpp>
#include <android/os/Bundle.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace database {

	class CursorWrapper;
	class CursorWrapper
		: public object<CursorWrapper>
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
		J2CPP_DECLARE_METHOD(37)
		J2CPP_DECLARE_METHOD(38)

		explicit CursorWrapper(jobject jobj)
		: object<CursorWrapper>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::database::Cursor>() const;


		CursorWrapper(local_ref< android::database::Cursor > const&);
		void close();
		jboolean isClosed();
		jint getCount();
		void deactivate();
		jboolean moveToFirst();
		jint getColumnCount();
		jint getColumnIndex(local_ref< java::lang::String >  const&);
		jint getColumnIndexOrThrow(local_ref< java::lang::String >  const&);
		local_ref< java::lang::String > getColumnName(jint);
		local_ref< array< local_ref< java::lang::String >, 1> > getColumnNames();
		jdouble getDouble(jint);
		local_ref< android::os::Bundle > getExtras();
		jfloat getFloat(jint);
		jint getInt(jint);
		jlong getLong(jint);
		jshort getShort(jint);
		local_ref< java::lang::String > getString(jint);
		void copyStringToBuffer(jint, local_ref< android::database::CharArrayBuffer >  const&);
		local_ref< array<jbyte,1> > getBlob(jint);
		jboolean getWantsAllOnMoveCalls();
		jboolean isAfterLast();
		jboolean isBeforeFirst();
		jboolean isFirst();
		jboolean isLast();
		jboolean isNull(jint);
		jboolean moveToLast();
		jboolean move(jint);
		jboolean moveToPosition(jint);
		jboolean moveToNext();
		jint getPosition();
		jboolean moveToPrevious();
		void registerContentObserver(local_ref< android::database::ContentObserver >  const&);
		void registerDataSetObserver(local_ref< android::database::DataSetObserver >  const&);
		jboolean requery();
		local_ref< android::os::Bundle > respond(local_ref< android::os::Bundle >  const&);
		void setNotificationUri(local_ref< android::content::ContentResolver >  const&, local_ref< android::net::Uri >  const&);
		void unregisterContentObserver(local_ref< android::database::ContentObserver >  const&);
		void unregisterDataSetObserver(local_ref< android::database::DataSetObserver >  const&);
	}; //class CursorWrapper

} //namespace database
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_DATABASE_CURSORWRAPPER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_DATABASE_CURSORWRAPPER_HPP_IMPL
#define J2CPP_ANDROID_DATABASE_CURSORWRAPPER_HPP_IMPL

namespace j2cpp {



android::database::CursorWrapper::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::database::CursorWrapper::operator local_ref<android::database::Cursor>() const
{
	return local_ref<android::database::Cursor>(get_jobject());
}


android::database::CursorWrapper::CursorWrapper(local_ref< android::database::Cursor > const &a0)
: object<android::database::CursorWrapper>(
	call_new_object<
		android::database::CursorWrapper::J2CPP_CLASS_NAME,
		android::database::CursorWrapper::J2CPP_METHOD_NAME(0),
		android::database::CursorWrapper::J2CPP_METHOD_SIGNATURE(0)>
	(a0)
)
{
}


void android::database::CursorWrapper::close()
{
	return call_method<
		android::database::CursorWrapper::J2CPP_CLASS_NAME,
		android::database::CursorWrapper::J2CPP_METHOD_NAME(1),
		android::database::CursorWrapper::J2CPP_METHOD_SIGNATURE(1), 
		void >
	(get_jobject());
}

jboolean android::database::CursorWrapper::isClosed()
{
	return call_method<
		android::database::CursorWrapper::J2CPP_CLASS_NAME,
		android::database::CursorWrapper::J2CPP_METHOD_NAME(2),
		android::database::CursorWrapper::J2CPP_METHOD_SIGNATURE(2), 
		jboolean >
	(get_jobject());
}

jint android::database::CursorWrapper::getCount()
{
	return call_method<
		android::database::CursorWrapper::J2CPP_CLASS_NAME,
		android::database::CursorWrapper::J2CPP_METHOD_NAME(3),
		android::database::CursorWrapper::J2CPP_METHOD_SIGNATURE(3), 
		jint >
	(get_jobject());
}

void android::database::CursorWrapper::deactivate()
{
	return call_method<
		android::database::CursorWrapper::J2CPP_CLASS_NAME,
		android::database::CursorWrapper::J2CPP_METHOD_NAME(4),
		android::database::CursorWrapper::J2CPP_METHOD_SIGNATURE(4), 
		void >
	(get_jobject());
}

jboolean android::database::CursorWrapper::moveToFirst()
{
	return call_method<
		android::database::CursorWrapper::J2CPP_CLASS_NAME,
		android::database::CursorWrapper::J2CPP_METHOD_NAME(5),
		android::database::CursorWrapper::J2CPP_METHOD_SIGNATURE(5), 
		jboolean >
	(get_jobject());
}

jint android::database::CursorWrapper::getColumnCount()
{
	return call_method<
		android::database::CursorWrapper::J2CPP_CLASS_NAME,
		android::database::CursorWrapper::J2CPP_METHOD_NAME(6),
		android::database::CursorWrapper::J2CPP_METHOD_SIGNATURE(6), 
		jint >
	(get_jobject());
}

jint android::database::CursorWrapper::getColumnIndex(local_ref< java::lang::String > const &a0)
{
	return call_method<
		android::database::CursorWrapper::J2CPP_CLASS_NAME,
		android::database::CursorWrapper::J2CPP_METHOD_NAME(7),
		android::database::CursorWrapper::J2CPP_METHOD_SIGNATURE(7), 
		jint >
	(get_jobject(), a0);
}

jint android::database::CursorWrapper::getColumnIndexOrThrow(local_ref< java::lang::String > const &a0)
{
	return call_method<
		android::database::CursorWrapper::J2CPP_CLASS_NAME,
		android::database::CursorWrapper::J2CPP_METHOD_NAME(8),
		android::database::CursorWrapper::J2CPP_METHOD_SIGNATURE(8), 
		jint >
	(get_jobject(), a0);
}

local_ref< java::lang::String > android::database::CursorWrapper::getColumnName(jint a0)
{
	return call_method<
		android::database::CursorWrapper::J2CPP_CLASS_NAME,
		android::database::CursorWrapper::J2CPP_METHOD_NAME(9),
		android::database::CursorWrapper::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< java::lang::String > >
	(get_jobject(), a0);
}

local_ref< array< local_ref< java::lang::String >, 1> > android::database::CursorWrapper::getColumnNames()
{
	return call_method<
		android::database::CursorWrapper::J2CPP_CLASS_NAME,
		android::database::CursorWrapper::J2CPP_METHOD_NAME(10),
		android::database::CursorWrapper::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< array< local_ref< java::lang::String >, 1> > >
	(get_jobject());
}

jdouble android::database::CursorWrapper::getDouble(jint a0)
{
	return call_method<
		android::database::CursorWrapper::J2CPP_CLASS_NAME,
		android::database::CursorWrapper::J2CPP_METHOD_NAME(11),
		android::database::CursorWrapper::J2CPP_METHOD_SIGNATURE(11), 
		jdouble >
	(get_jobject(), a0);
}

local_ref< android::os::Bundle > android::database::CursorWrapper::getExtras()
{
	return call_method<
		android::database::CursorWrapper::J2CPP_CLASS_NAME,
		android::database::CursorWrapper::J2CPP_METHOD_NAME(12),
		android::database::CursorWrapper::J2CPP_METHOD_SIGNATURE(12), 
		local_ref< android::os::Bundle > >
	(get_jobject());
}

jfloat android::database::CursorWrapper::getFloat(jint a0)
{
	return call_method<
		android::database::CursorWrapper::J2CPP_CLASS_NAME,
		android::database::CursorWrapper::J2CPP_METHOD_NAME(13),
		android::database::CursorWrapper::J2CPP_METHOD_SIGNATURE(13), 
		jfloat >
	(get_jobject(), a0);
}

jint android::database::CursorWrapper::getInt(jint a0)
{
	return call_method<
		android::database::CursorWrapper::J2CPP_CLASS_NAME,
		android::database::CursorWrapper::J2CPP_METHOD_NAME(14),
		android::database::CursorWrapper::J2CPP_METHOD_SIGNATURE(14), 
		jint >
	(get_jobject(), a0);
}

jlong android::database::CursorWrapper::getLong(jint a0)
{
	return call_method<
		android::database::CursorWrapper::J2CPP_CLASS_NAME,
		android::database::CursorWrapper::J2CPP_METHOD_NAME(15),
		android::database::CursorWrapper::J2CPP_METHOD_SIGNATURE(15), 
		jlong >
	(get_jobject(), a0);
}

jshort android::database::CursorWrapper::getShort(jint a0)
{
	return call_method<
		android::database::CursorWrapper::J2CPP_CLASS_NAME,
		android::database::CursorWrapper::J2CPP_METHOD_NAME(16),
		android::database::CursorWrapper::J2CPP_METHOD_SIGNATURE(16), 
		jshort >
	(get_jobject(), a0);
}

local_ref< java::lang::String > android::database::CursorWrapper::getString(jint a0)
{
	return call_method<
		android::database::CursorWrapper::J2CPP_CLASS_NAME,
		android::database::CursorWrapper::J2CPP_METHOD_NAME(17),
		android::database::CursorWrapper::J2CPP_METHOD_SIGNATURE(17), 
		local_ref< java::lang::String > >
	(get_jobject(), a0);
}

void android::database::CursorWrapper::copyStringToBuffer(jint a0, local_ref< android::database::CharArrayBuffer > const &a1)
{
	return call_method<
		android::database::CursorWrapper::J2CPP_CLASS_NAME,
		android::database::CursorWrapper::J2CPP_METHOD_NAME(18),
		android::database::CursorWrapper::J2CPP_METHOD_SIGNATURE(18), 
		void >
	(get_jobject(), a0, a1);
}

local_ref< array<jbyte,1> > android::database::CursorWrapper::getBlob(jint a0)
{
	return call_method<
		android::database::CursorWrapper::J2CPP_CLASS_NAME,
		android::database::CursorWrapper::J2CPP_METHOD_NAME(19),
		android::database::CursorWrapper::J2CPP_METHOD_SIGNATURE(19), 
		local_ref< array<jbyte,1> > >
	(get_jobject(), a0);
}

jboolean android::database::CursorWrapper::getWantsAllOnMoveCalls()
{
	return call_method<
		android::database::CursorWrapper::J2CPP_CLASS_NAME,
		android::database::CursorWrapper::J2CPP_METHOD_NAME(20),
		android::database::CursorWrapper::J2CPP_METHOD_SIGNATURE(20), 
		jboolean >
	(get_jobject());
}

jboolean android::database::CursorWrapper::isAfterLast()
{
	return call_method<
		android::database::CursorWrapper::J2CPP_CLASS_NAME,
		android::database::CursorWrapper::J2CPP_METHOD_NAME(21),
		android::database::CursorWrapper::J2CPP_METHOD_SIGNATURE(21), 
		jboolean >
	(get_jobject());
}

jboolean android::database::CursorWrapper::isBeforeFirst()
{
	return call_method<
		android::database::CursorWrapper::J2CPP_CLASS_NAME,
		android::database::CursorWrapper::J2CPP_METHOD_NAME(22),
		android::database::CursorWrapper::J2CPP_METHOD_SIGNATURE(22), 
		jboolean >
	(get_jobject());
}

jboolean android::database::CursorWrapper::isFirst()
{
	return call_method<
		android::database::CursorWrapper::J2CPP_CLASS_NAME,
		android::database::CursorWrapper::J2CPP_METHOD_NAME(23),
		android::database::CursorWrapper::J2CPP_METHOD_SIGNATURE(23), 
		jboolean >
	(get_jobject());
}

jboolean android::database::CursorWrapper::isLast()
{
	return call_method<
		android::database::CursorWrapper::J2CPP_CLASS_NAME,
		android::database::CursorWrapper::J2CPP_METHOD_NAME(24),
		android::database::CursorWrapper::J2CPP_METHOD_SIGNATURE(24), 
		jboolean >
	(get_jobject());
}

jboolean android::database::CursorWrapper::isNull(jint a0)
{
	return call_method<
		android::database::CursorWrapper::J2CPP_CLASS_NAME,
		android::database::CursorWrapper::J2CPP_METHOD_NAME(25),
		android::database::CursorWrapper::J2CPP_METHOD_SIGNATURE(25), 
		jboolean >
	(get_jobject(), a0);
}

jboolean android::database::CursorWrapper::moveToLast()
{
	return call_method<
		android::database::CursorWrapper::J2CPP_CLASS_NAME,
		android::database::CursorWrapper::J2CPP_METHOD_NAME(26),
		android::database::CursorWrapper::J2CPP_METHOD_SIGNATURE(26), 
		jboolean >
	(get_jobject());
}

jboolean android::database::CursorWrapper::move(jint a0)
{
	return call_method<
		android::database::CursorWrapper::J2CPP_CLASS_NAME,
		android::database::CursorWrapper::J2CPP_METHOD_NAME(27),
		android::database::CursorWrapper::J2CPP_METHOD_SIGNATURE(27), 
		jboolean >
	(get_jobject(), a0);
}

jboolean android::database::CursorWrapper::moveToPosition(jint a0)
{
	return call_method<
		android::database::CursorWrapper::J2CPP_CLASS_NAME,
		android::database::CursorWrapper::J2CPP_METHOD_NAME(28),
		android::database::CursorWrapper::J2CPP_METHOD_SIGNATURE(28), 
		jboolean >
	(get_jobject(), a0);
}

jboolean android::database::CursorWrapper::moveToNext()
{
	return call_method<
		android::database::CursorWrapper::J2CPP_CLASS_NAME,
		android::database::CursorWrapper::J2CPP_METHOD_NAME(29),
		android::database::CursorWrapper::J2CPP_METHOD_SIGNATURE(29), 
		jboolean >
	(get_jobject());
}

jint android::database::CursorWrapper::getPosition()
{
	return call_method<
		android::database::CursorWrapper::J2CPP_CLASS_NAME,
		android::database::CursorWrapper::J2CPP_METHOD_NAME(30),
		android::database::CursorWrapper::J2CPP_METHOD_SIGNATURE(30), 
		jint >
	(get_jobject());
}

jboolean android::database::CursorWrapper::moveToPrevious()
{
	return call_method<
		android::database::CursorWrapper::J2CPP_CLASS_NAME,
		android::database::CursorWrapper::J2CPP_METHOD_NAME(31),
		android::database::CursorWrapper::J2CPP_METHOD_SIGNATURE(31), 
		jboolean >
	(get_jobject());
}

void android::database::CursorWrapper::registerContentObserver(local_ref< android::database::ContentObserver > const &a0)
{
	return call_method<
		android::database::CursorWrapper::J2CPP_CLASS_NAME,
		android::database::CursorWrapper::J2CPP_METHOD_NAME(32),
		android::database::CursorWrapper::J2CPP_METHOD_SIGNATURE(32), 
		void >
	(get_jobject(), a0);
}

void android::database::CursorWrapper::registerDataSetObserver(local_ref< android::database::DataSetObserver > const &a0)
{
	return call_method<
		android::database::CursorWrapper::J2CPP_CLASS_NAME,
		android::database::CursorWrapper::J2CPP_METHOD_NAME(33),
		android::database::CursorWrapper::J2CPP_METHOD_SIGNATURE(33), 
		void >
	(get_jobject(), a0);
}

jboolean android::database::CursorWrapper::requery()
{
	return call_method<
		android::database::CursorWrapper::J2CPP_CLASS_NAME,
		android::database::CursorWrapper::J2CPP_METHOD_NAME(34),
		android::database::CursorWrapper::J2CPP_METHOD_SIGNATURE(34), 
		jboolean >
	(get_jobject());
}

local_ref< android::os::Bundle > android::database::CursorWrapper::respond(local_ref< android::os::Bundle > const &a0)
{
	return call_method<
		android::database::CursorWrapper::J2CPP_CLASS_NAME,
		android::database::CursorWrapper::J2CPP_METHOD_NAME(35),
		android::database::CursorWrapper::J2CPP_METHOD_SIGNATURE(35), 
		local_ref< android::os::Bundle > >
	(get_jobject(), a0);
}

void android::database::CursorWrapper::setNotificationUri(local_ref< android::content::ContentResolver > const &a0, local_ref< android::net::Uri > const &a1)
{
	return call_method<
		android::database::CursorWrapper::J2CPP_CLASS_NAME,
		android::database::CursorWrapper::J2CPP_METHOD_NAME(36),
		android::database::CursorWrapper::J2CPP_METHOD_SIGNATURE(36), 
		void >
	(get_jobject(), a0, a1);
}

void android::database::CursorWrapper::unregisterContentObserver(local_ref< android::database::ContentObserver > const &a0)
{
	return call_method<
		android::database::CursorWrapper::J2CPP_CLASS_NAME,
		android::database::CursorWrapper::J2CPP_METHOD_NAME(37),
		android::database::CursorWrapper::J2CPP_METHOD_SIGNATURE(37), 
		void >
	(get_jobject(), a0);
}

void android::database::CursorWrapper::unregisterDataSetObserver(local_ref< android::database::DataSetObserver > const &a0)
{
	return call_method<
		android::database::CursorWrapper::J2CPP_CLASS_NAME,
		android::database::CursorWrapper::J2CPP_METHOD_NAME(38),
		android::database::CursorWrapper::J2CPP_METHOD_SIGNATURE(38), 
		void >
	(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(android::database::CursorWrapper,"android/database/CursorWrapper")
J2CPP_DEFINE_METHOD(android::database::CursorWrapper,0,"<init>","(Landroid/database/Cursor;)V")
J2CPP_DEFINE_METHOD(android::database::CursorWrapper,1,"close","()V")
J2CPP_DEFINE_METHOD(android::database::CursorWrapper,2,"isClosed","()Z")
J2CPP_DEFINE_METHOD(android::database::CursorWrapper,3,"getCount","()I")
J2CPP_DEFINE_METHOD(android::database::CursorWrapper,4,"deactivate","()V")
J2CPP_DEFINE_METHOD(android::database::CursorWrapper,5,"moveToFirst","()Z")
J2CPP_DEFINE_METHOD(android::database::CursorWrapper,6,"getColumnCount","()I")
J2CPP_DEFINE_METHOD(android::database::CursorWrapper,7,"getColumnIndex","(Ljava/lang/String;)I")
J2CPP_DEFINE_METHOD(android::database::CursorWrapper,8,"getColumnIndexOrThrow","(Ljava/lang/String;)I")
J2CPP_DEFINE_METHOD(android::database::CursorWrapper,9,"getColumnName","(I)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::database::CursorWrapper,10,"getColumnNames","()[java.lang.String")
J2CPP_DEFINE_METHOD(android::database::CursorWrapper,11,"getDouble","(I)D")
J2CPP_DEFINE_METHOD(android::database::CursorWrapper,12,"getExtras","()Landroid/os/Bundle;")
J2CPP_DEFINE_METHOD(android::database::CursorWrapper,13,"getFloat","(I)F")
J2CPP_DEFINE_METHOD(android::database::CursorWrapper,14,"getInt","(I)I")
J2CPP_DEFINE_METHOD(android::database::CursorWrapper,15,"getLong","(I)J")
J2CPP_DEFINE_METHOD(android::database::CursorWrapper,16,"getShort","(I)S")
J2CPP_DEFINE_METHOD(android::database::CursorWrapper,17,"getString","(I)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::database::CursorWrapper,18,"copyStringToBuffer","(ILandroid/database/CharArrayBuffer;)V")
J2CPP_DEFINE_METHOD(android::database::CursorWrapper,19,"getBlob","(I)[B")
J2CPP_DEFINE_METHOD(android::database::CursorWrapper,20,"getWantsAllOnMoveCalls","()Z")
J2CPP_DEFINE_METHOD(android::database::CursorWrapper,21,"isAfterLast","()Z")
J2CPP_DEFINE_METHOD(android::database::CursorWrapper,22,"isBeforeFirst","()Z")
J2CPP_DEFINE_METHOD(android::database::CursorWrapper,23,"isFirst","()Z")
J2CPP_DEFINE_METHOD(android::database::CursorWrapper,24,"isLast","()Z")
J2CPP_DEFINE_METHOD(android::database::CursorWrapper,25,"isNull","(I)Z")
J2CPP_DEFINE_METHOD(android::database::CursorWrapper,26,"moveToLast","()Z")
J2CPP_DEFINE_METHOD(android::database::CursorWrapper,27,"move","(I)Z")
J2CPP_DEFINE_METHOD(android::database::CursorWrapper,28,"moveToPosition","(I)Z")
J2CPP_DEFINE_METHOD(android::database::CursorWrapper,29,"moveToNext","()Z")
J2CPP_DEFINE_METHOD(android::database::CursorWrapper,30,"getPosition","()I")
J2CPP_DEFINE_METHOD(android::database::CursorWrapper,31,"moveToPrevious","()Z")
J2CPP_DEFINE_METHOD(android::database::CursorWrapper,32,"registerContentObserver","(Landroid/database/ContentObserver;)V")
J2CPP_DEFINE_METHOD(android::database::CursorWrapper,33,"registerDataSetObserver","(Landroid/database/DataSetObserver;)V")
J2CPP_DEFINE_METHOD(android::database::CursorWrapper,34,"requery","()Z")
J2CPP_DEFINE_METHOD(android::database::CursorWrapper,35,"respond","(Landroid/os/Bundle;)Landroid/os/Bundle;")
J2CPP_DEFINE_METHOD(android::database::CursorWrapper,36,"setNotificationUri","(Landroid/content/ContentResolver;Landroid/net/Uri;)V")
J2CPP_DEFINE_METHOD(android::database::CursorWrapper,37,"unregisterContentObserver","(Landroid/database/ContentObserver;)V")
J2CPP_DEFINE_METHOD(android::database::CursorWrapper,38,"unregisterDataSetObserver","(Landroid/database/DataSetObserver;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_DATABASE_CURSORWRAPPER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
