/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.test.RenamingDelegatingContext
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEST_RENAMINGDELEGATINGCONTEXT_HPP_DECL
#define J2CPP_ANDROID_TEST_RENAMINGDELEGATINGCONTEXT_HPP_DECL


namespace j2cpp { namespace java { namespace io { class File; } } }
namespace j2cpp { namespace java { namespace io { class FileOutputStream; } } }
namespace j2cpp { namespace java { namespace io { class FileInputStream; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Class; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace android { namespace database { namespace sqlite { class SQLiteDatabase; } } } }
namespace j2cpp { namespace android { namespace database { namespace sqlite { namespace SQLiteDatabase_ { class CursorFactory; } } } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace content { class ContextWrapper; } } }
namespace j2cpp { namespace android { namespace content { class ContentProvider; } } }


#include <android/content/ContentProvider.hpp>
#include <android/content/Context.hpp>
#include <android/content/ContextWrapper.hpp>
#include <android/database/sqlite/SQLiteDatabase.hpp>
#include <java/io/File.hpp>
#include <java/io/FileInputStream.hpp>
#include <java/io/FileOutputStream.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace test {

	class RenamingDelegatingContext;
	class RenamingDelegatingContext
		: public object<RenamingDelegatingContext>
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

		explicit RenamingDelegatingContext(jobject jobj)
		: object<RenamingDelegatingContext>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::content::Context>() const;
		operator local_ref<android::content::ContextWrapper>() const;


		RenamingDelegatingContext(local_ref< android::content::Context > const&, local_ref< java::lang::String > const&);
		RenamingDelegatingContext(local_ref< android::content::Context > const&, local_ref< android::content::Context > const&, local_ref< java::lang::String > const&);
		static local_ref< android::content::ContentProvider > providerWithRenamedContext(local_ref< java::lang::Class >  const&, local_ref< android::content::Context >  const&, local_ref< java::lang::String >  const&);
		static local_ref< android::content::ContentProvider > providerWithRenamedContext(local_ref< java::lang::Class >  const&, local_ref< android::content::Context >  const&, local_ref< java::lang::String >  const&, jboolean);
		void makeExistingFilesAndDbsAccessible();
		local_ref< java::lang::String > getDatabasePrefix();
		local_ref< android::database::sqlite::SQLiteDatabase > openOrCreateDatabase(local_ref< java::lang::String >  const&, jint, local_ref< android::database::sqlite::SQLiteDatabase_::CursorFactory >  const&);
		jboolean deleteDatabase(local_ref< java::lang::String >  const&);
		local_ref< java::io::File > getDatabasePath(local_ref< java::lang::String >  const&);
		local_ref< array< local_ref< java::lang::String >, 1> > databaseList();
		local_ref< java::io::FileInputStream > openFileInput(local_ref< java::lang::String >  const&);
		local_ref< java::io::FileOutputStream > openFileOutput(local_ref< java::lang::String >  const&, jint);
		local_ref< java::io::File > getFileStreamPath(local_ref< java::lang::String >  const&);
		jboolean deleteFile(local_ref< java::lang::String >  const&);
		local_ref< array< local_ref< java::lang::String >, 1> > fileList();
		local_ref< java::io::File > getCacheDir();
	}; //class RenamingDelegatingContext

} //namespace test
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEST_RENAMINGDELEGATINGCONTEXT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEST_RENAMINGDELEGATINGCONTEXT_HPP_IMPL
#define J2CPP_ANDROID_TEST_RENAMINGDELEGATINGCONTEXT_HPP_IMPL

namespace j2cpp {



android::test::RenamingDelegatingContext::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::test::RenamingDelegatingContext::operator local_ref<android::content::Context>() const
{
	return local_ref<android::content::Context>(get_jobject());
}

android::test::RenamingDelegatingContext::operator local_ref<android::content::ContextWrapper>() const
{
	return local_ref<android::content::ContextWrapper>(get_jobject());
}


android::test::RenamingDelegatingContext::RenamingDelegatingContext(local_ref< android::content::Context > const &a0, local_ref< java::lang::String > const &a1)
: object<android::test::RenamingDelegatingContext>(
	call_new_object<
		android::test::RenamingDelegatingContext::J2CPP_CLASS_NAME,
		android::test::RenamingDelegatingContext::J2CPP_METHOD_NAME(0),
		android::test::RenamingDelegatingContext::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1)
)
{
}



android::test::RenamingDelegatingContext::RenamingDelegatingContext(local_ref< android::content::Context > const &a0, local_ref< android::content::Context > const &a1, local_ref< java::lang::String > const &a2)
: object<android::test::RenamingDelegatingContext>(
	call_new_object<
		android::test::RenamingDelegatingContext::J2CPP_CLASS_NAME,
		android::test::RenamingDelegatingContext::J2CPP_METHOD_NAME(1),
		android::test::RenamingDelegatingContext::J2CPP_METHOD_SIGNATURE(1)
	>(a0, a1, a2)
)
{
}


local_ref< android::content::ContentProvider > android::test::RenamingDelegatingContext::providerWithRenamedContext(local_ref< java::lang::Class > const &a0, local_ref< android::content::Context > const &a1, local_ref< java::lang::String > const &a2)
{
	return call_static_method<
		android::test::RenamingDelegatingContext::J2CPP_CLASS_NAME,
		android::test::RenamingDelegatingContext::J2CPP_METHOD_NAME(2),
		android::test::RenamingDelegatingContext::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< android::content::ContentProvider >
	>(a0, a1, a2);
}

local_ref< android::content::ContentProvider > android::test::RenamingDelegatingContext::providerWithRenamedContext(local_ref< java::lang::Class > const &a0, local_ref< android::content::Context > const &a1, local_ref< java::lang::String > const &a2, jboolean a3)
{
	return call_static_method<
		android::test::RenamingDelegatingContext::J2CPP_CLASS_NAME,
		android::test::RenamingDelegatingContext::J2CPP_METHOD_NAME(3),
		android::test::RenamingDelegatingContext::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< android::content::ContentProvider >
	>(a0, a1, a2, a3);
}

void android::test::RenamingDelegatingContext::makeExistingFilesAndDbsAccessible()
{
	return call_method<
		android::test::RenamingDelegatingContext::J2CPP_CLASS_NAME,
		android::test::RenamingDelegatingContext::J2CPP_METHOD_NAME(4),
		android::test::RenamingDelegatingContext::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject());
}

local_ref< java::lang::String > android::test::RenamingDelegatingContext::getDatabasePrefix()
{
	return call_method<
		android::test::RenamingDelegatingContext::J2CPP_CLASS_NAME,
		android::test::RenamingDelegatingContext::J2CPP_METHOD_NAME(5),
		android::test::RenamingDelegatingContext::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< android::database::sqlite::SQLiteDatabase > android::test::RenamingDelegatingContext::openOrCreateDatabase(local_ref< java::lang::String > const &a0, jint a1, local_ref< android::database::sqlite::SQLiteDatabase_::CursorFactory > const &a2)
{
	return call_method<
		android::test::RenamingDelegatingContext::J2CPP_CLASS_NAME,
		android::test::RenamingDelegatingContext::J2CPP_METHOD_NAME(6),
		android::test::RenamingDelegatingContext::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< android::database::sqlite::SQLiteDatabase >
	>(get_jobject(), a0, a1, a2);
}

jboolean android::test::RenamingDelegatingContext::deleteDatabase(local_ref< java::lang::String > const &a0)
{
	return call_method<
		android::test::RenamingDelegatingContext::J2CPP_CLASS_NAME,
		android::test::RenamingDelegatingContext::J2CPP_METHOD_NAME(7),
		android::test::RenamingDelegatingContext::J2CPP_METHOD_SIGNATURE(7), 
		jboolean
	>(get_jobject(), a0);
}

local_ref< java::io::File > android::test::RenamingDelegatingContext::getDatabasePath(local_ref< java::lang::String > const &a0)
{
	return call_method<
		android::test::RenamingDelegatingContext::J2CPP_CLASS_NAME,
		android::test::RenamingDelegatingContext::J2CPP_METHOD_NAME(8),
		android::test::RenamingDelegatingContext::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< java::io::File >
	>(get_jobject(), a0);
}

local_ref< array< local_ref< java::lang::String >, 1> > android::test::RenamingDelegatingContext::databaseList()
{
	return call_method<
		android::test::RenamingDelegatingContext::J2CPP_CLASS_NAME,
		android::test::RenamingDelegatingContext::J2CPP_METHOD_NAME(9),
		android::test::RenamingDelegatingContext::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< array< local_ref< java::lang::String >, 1> >
	>(get_jobject());
}

local_ref< java::io::FileInputStream > android::test::RenamingDelegatingContext::openFileInput(local_ref< java::lang::String > const &a0)
{
	return call_method<
		android::test::RenamingDelegatingContext::J2CPP_CLASS_NAME,
		android::test::RenamingDelegatingContext::J2CPP_METHOD_NAME(10),
		android::test::RenamingDelegatingContext::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< java::io::FileInputStream >
	>(get_jobject(), a0);
}

local_ref< java::io::FileOutputStream > android::test::RenamingDelegatingContext::openFileOutput(local_ref< java::lang::String > const &a0, jint a1)
{
	return call_method<
		android::test::RenamingDelegatingContext::J2CPP_CLASS_NAME,
		android::test::RenamingDelegatingContext::J2CPP_METHOD_NAME(11),
		android::test::RenamingDelegatingContext::J2CPP_METHOD_SIGNATURE(11), 
		local_ref< java::io::FileOutputStream >
	>(get_jobject(), a0, a1);
}

local_ref< java::io::File > android::test::RenamingDelegatingContext::getFileStreamPath(local_ref< java::lang::String > const &a0)
{
	return call_method<
		android::test::RenamingDelegatingContext::J2CPP_CLASS_NAME,
		android::test::RenamingDelegatingContext::J2CPP_METHOD_NAME(12),
		android::test::RenamingDelegatingContext::J2CPP_METHOD_SIGNATURE(12), 
		local_ref< java::io::File >
	>(get_jobject(), a0);
}

jboolean android::test::RenamingDelegatingContext::deleteFile(local_ref< java::lang::String > const &a0)
{
	return call_method<
		android::test::RenamingDelegatingContext::J2CPP_CLASS_NAME,
		android::test::RenamingDelegatingContext::J2CPP_METHOD_NAME(13),
		android::test::RenamingDelegatingContext::J2CPP_METHOD_SIGNATURE(13), 
		jboolean
	>(get_jobject(), a0);
}

local_ref< array< local_ref< java::lang::String >, 1> > android::test::RenamingDelegatingContext::fileList()
{
	return call_method<
		android::test::RenamingDelegatingContext::J2CPP_CLASS_NAME,
		android::test::RenamingDelegatingContext::J2CPP_METHOD_NAME(14),
		android::test::RenamingDelegatingContext::J2CPP_METHOD_SIGNATURE(14), 
		local_ref< array< local_ref< java::lang::String >, 1> >
	>(get_jobject());
}

local_ref< java::io::File > android::test::RenamingDelegatingContext::getCacheDir()
{
	return call_method<
		android::test::RenamingDelegatingContext::J2CPP_CLASS_NAME,
		android::test::RenamingDelegatingContext::J2CPP_METHOD_NAME(15),
		android::test::RenamingDelegatingContext::J2CPP_METHOD_SIGNATURE(15), 
		local_ref< java::io::File >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(android::test::RenamingDelegatingContext,"android/test/RenamingDelegatingContext")
J2CPP_DEFINE_METHOD(android::test::RenamingDelegatingContext,0,"<init>","(Landroid/content/Context;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::test::RenamingDelegatingContext,1,"<init>","(Landroid/content/Context;Landroid/content/Context;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::test::RenamingDelegatingContext,2,"providerWithRenamedContext","(Ljava/lang/Class;Landroid/content/Context;Ljava/lang/String;)Landroid/content/ContentProvider;")
J2CPP_DEFINE_METHOD(android::test::RenamingDelegatingContext,3,"providerWithRenamedContext","(Ljava/lang/Class;Landroid/content/Context;Ljava/lang/String;Z)Landroid/content/ContentProvider;")
J2CPP_DEFINE_METHOD(android::test::RenamingDelegatingContext,4,"makeExistingFilesAndDbsAccessible","()V")
J2CPP_DEFINE_METHOD(android::test::RenamingDelegatingContext,5,"getDatabasePrefix","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::test::RenamingDelegatingContext,6,"openOrCreateDatabase","(Ljava/lang/String;ILandroid/database/sqlite/SQLiteDatabase$CursorFactory;)Landroid/database/sqlite/SQLiteDatabase;")
J2CPP_DEFINE_METHOD(android::test::RenamingDelegatingContext,7,"deleteDatabase","(Ljava/lang/String;)Z")
J2CPP_DEFINE_METHOD(android::test::RenamingDelegatingContext,8,"getDatabasePath","(Ljava/lang/String;)Ljava/io/File;")
J2CPP_DEFINE_METHOD(android::test::RenamingDelegatingContext,9,"databaseList","()[java.lang.String")
J2CPP_DEFINE_METHOD(android::test::RenamingDelegatingContext,10,"openFileInput","(Ljava/lang/String;)Ljava/io/FileInputStream;")
J2CPP_DEFINE_METHOD(android::test::RenamingDelegatingContext,11,"openFileOutput","(Ljava/lang/String;I)Ljava/io/FileOutputStream;")
J2CPP_DEFINE_METHOD(android::test::RenamingDelegatingContext,12,"getFileStreamPath","(Ljava/lang/String;)Ljava/io/File;")
J2CPP_DEFINE_METHOD(android::test::RenamingDelegatingContext,13,"deleteFile","(Ljava/lang/String;)Z")
J2CPP_DEFINE_METHOD(android::test::RenamingDelegatingContext,14,"fileList","()[java.lang.String")
J2CPP_DEFINE_METHOD(android::test::RenamingDelegatingContext,15,"getCacheDir","()Ljava/io/File;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEST_RENAMINGDELEGATINGCONTEXT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
