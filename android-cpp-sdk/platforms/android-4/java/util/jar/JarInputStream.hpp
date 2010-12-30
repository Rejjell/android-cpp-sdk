/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.jar.JarInputStream
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_JAR_JARINPUTSTREAM_HPP_DECL
#define J2CPP_JAVA_UTIL_JAR_JARINPUTSTREAM_HPP_DECL


namespace j2cpp { namespace java { namespace io { class InputStream; } } }
namespace j2cpp { namespace java { namespace util { namespace jar { class Manifest; } } } }
namespace j2cpp { namespace java { namespace util { namespace jar { class JarEntry; } } } }
namespace j2cpp { namespace java { namespace util { namespace zip { class ZipInputStream; } } } }
namespace j2cpp { namespace java { namespace util { namespace zip { class ZipEntry; } } } }


#include <java/io/InputStream.hpp>
#include <java/util/jar/JarEntry.hpp>
#include <java/util/jar/Manifest.hpp>
#include <java/util/zip/ZipEntry.hpp>
#include <java/util/zip/ZipInputStream.hpp>


namespace j2cpp {

namespace java { namespace util { namespace jar {

	class JarInputStream;
	class JarInputStream
		: public object<JarInputStream>
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

		explicit JarInputStream(jobject jobj)
		: object<JarInputStream>(jobj)
		{
		}

		operator local_ref<java::util::zip::ZipInputStream>() const;


		JarInputStream(local_ref< java::io::InputStream > const&, jboolean);
		JarInputStream(local_ref< java::io::InputStream > const&);
		local_ref< java::util::jar::Manifest > getManifest();
		local_ref< java::util::jar::JarEntry > getNextJarEntry();
		jint read(local_ref< array<jbyte,1> >  const&, jint, jint);
		local_ref< java::util::zip::ZipEntry > getNextEntry();
	}; //class JarInputStream

} //namespace jar
} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_JAR_JARINPUTSTREAM_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_JAR_JARINPUTSTREAM_HPP_IMPL
#define J2CPP_JAVA_UTIL_JAR_JARINPUTSTREAM_HPP_IMPL

namespace j2cpp {



java::util::jar::JarInputStream::operator local_ref<java::util::zip::ZipInputStream>() const
{
	return local_ref<java::util::zip::ZipInputStream>(get_jobject());
}


java::util::jar::JarInputStream::JarInputStream(local_ref< java::io::InputStream > const &a0, jboolean a1)
: object<java::util::jar::JarInputStream>(
	call_new_object<
		java::util::jar::JarInputStream::J2CPP_CLASS_NAME,
		java::util::jar::JarInputStream::J2CPP_METHOD_NAME(0),
		java::util::jar::JarInputStream::J2CPP_METHOD_SIGNATURE(0)>
	(a0, a1)
)
{
}



java::util::jar::JarInputStream::JarInputStream(local_ref< java::io::InputStream > const &a0)
: object<java::util::jar::JarInputStream>(
	call_new_object<
		java::util::jar::JarInputStream::J2CPP_CLASS_NAME,
		java::util::jar::JarInputStream::J2CPP_METHOD_NAME(1),
		java::util::jar::JarInputStream::J2CPP_METHOD_SIGNATURE(1)>
	(a0)
)
{
}


local_ref< java::util::jar::Manifest > java::util::jar::JarInputStream::getManifest()
{
	return call_method<
		java::util::jar::JarInputStream::J2CPP_CLASS_NAME,
		java::util::jar::JarInputStream::J2CPP_METHOD_NAME(2),
		java::util::jar::JarInputStream::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::util::jar::Manifest > >
	(get_jobject());
}

local_ref< java::util::jar::JarEntry > java::util::jar::JarInputStream::getNextJarEntry()
{
	return call_method<
		java::util::jar::JarInputStream::J2CPP_CLASS_NAME,
		java::util::jar::JarInputStream::J2CPP_METHOD_NAME(3),
		java::util::jar::JarInputStream::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::util::jar::JarEntry > >
	(get_jobject());
}

jint java::util::jar::JarInputStream::read(local_ref< array<jbyte,1> > const &a0, jint a1, jint a2)
{
	return call_method<
		java::util::jar::JarInputStream::J2CPP_CLASS_NAME,
		java::util::jar::JarInputStream::J2CPP_METHOD_NAME(4),
		java::util::jar::JarInputStream::J2CPP_METHOD_SIGNATURE(4), 
		jint >
	(get_jobject(), a0, a1, a2);
}

local_ref< java::util::zip::ZipEntry > java::util::jar::JarInputStream::getNextEntry()
{
	return call_method<
		java::util::jar::JarInputStream::J2CPP_CLASS_NAME,
		java::util::jar::JarInputStream::J2CPP_METHOD_NAME(5),
		java::util::jar::JarInputStream::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::util::zip::ZipEntry > >
	(get_jobject());
}



J2CPP_DEFINE_CLASS(java::util::jar::JarInputStream,"java/util/jar/JarInputStream")
J2CPP_DEFINE_METHOD(java::util::jar::JarInputStream,0,"<init>","(Ljava/io/InputStream;Z)V")
J2CPP_DEFINE_METHOD(java::util::jar::JarInputStream,1,"<init>","(Ljava/io/InputStream;)V")
J2CPP_DEFINE_METHOD(java::util::jar::JarInputStream,2,"getManifest","()Ljava/util/jar/Manifest;")
J2CPP_DEFINE_METHOD(java::util::jar::JarInputStream,3,"getNextJarEntry","()Ljava/util/jar/JarEntry;")
J2CPP_DEFINE_METHOD(java::util::jar::JarInputStream,4,"read","([BII)I")
J2CPP_DEFINE_METHOD(java::util::jar::JarInputStream,5,"getNextEntry","()Ljava/util/zip/ZipEntry;")
J2CPP_DEFINE_METHOD(java::util::jar::JarInputStream,6,"createZipEntry","(Ljava/lang/String;)Ljava/util/zip/ZipEntry;")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_JAR_JARINPUTSTREAM_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
