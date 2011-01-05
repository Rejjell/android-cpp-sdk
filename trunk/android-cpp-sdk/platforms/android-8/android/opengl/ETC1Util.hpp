/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.opengl.ETC1Util
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_OPENGL_ETC1UTIL_HPP_DECL
#define J2CPP_ANDROID_OPENGL_ETC1UTIL_HPP_DECL


namespace j2cpp { namespace android { namespace opengl { namespace ETC1Util_ { class ETC1Texture; } } } }
namespace j2cpp { namespace java { namespace nio { class ByteBuffer; } } }
namespace j2cpp { namespace java { namespace nio { class Buffer; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace io { class InputStream; } } }
namespace j2cpp { namespace java { namespace io { class OutputStream; } } }


#include <android/opengl/ETC1Util.hpp>
#include <java/io/InputStream.hpp>
#include <java/io/OutputStream.hpp>
#include <java/lang/Object.hpp>
#include <java/nio/Buffer.hpp>
#include <java/nio/ByteBuffer.hpp>


namespace j2cpp {

namespace android { namespace opengl {

	class ETC1Util;
	namespace ETC1Util_ {

		class ETC1Texture;
		class ETC1Texture
			: public object<ETC1Texture>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)
			J2CPP_DECLARE_METHOD(2)
			J2CPP_DECLARE_METHOD(3)

			explicit ETC1Texture(jobject jobj)
			: object<ETC1Texture>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			ETC1Texture(jint, jint, local_ref< java::nio::ByteBuffer > const&);
			jint getWidth();
			jint getHeight();
			local_ref< java::nio::ByteBuffer > getData();
		}; //class ETC1Texture

	} //namespace ETC1Util_

	class ETC1Util
		: public object<ETC1Util>
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

		typedef ETC1Util_::ETC1Texture ETC1Texture;

		explicit ETC1Util(jobject jobj)
		: object<ETC1Util>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		ETC1Util();
		static void loadTexture(jint, jint, jint, jint, jint, local_ref< java::io::InputStream >  const&);
		static void loadTexture(jint, jint, jint, jint, jint, local_ref< android::opengl::ETC1Util_::ETC1Texture >  const&);
		static jboolean isETC1Supported();
		static local_ref< android::opengl::ETC1Util_::ETC1Texture > createTexture(local_ref< java::io::InputStream >  const&);
		static local_ref< android::opengl::ETC1Util_::ETC1Texture > compressTexture(local_ref< java::nio::Buffer >  const&, jint, jint, jint, jint);
		static void writeTexture(local_ref< android::opengl::ETC1Util_::ETC1Texture >  const&, local_ref< java::io::OutputStream >  const&);
	}; //class ETC1Util

} //namespace opengl
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_OPENGL_ETC1UTIL_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_OPENGL_ETC1UTIL_HPP_IMPL
#define J2CPP_ANDROID_OPENGL_ETC1UTIL_HPP_IMPL

namespace j2cpp {




android::opengl::ETC1Util_::ETC1Texture::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::opengl::ETC1Util_::ETC1Texture::ETC1Texture(jint a0, jint a1, local_ref< java::nio::ByteBuffer > const &a2)
: object<android::opengl::ETC1Util_::ETC1Texture>(
	call_new_object<
		android::opengl::ETC1Util_::ETC1Texture::J2CPP_CLASS_NAME,
		android::opengl::ETC1Util_::ETC1Texture::J2CPP_METHOD_NAME(0),
		android::opengl::ETC1Util_::ETC1Texture::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1, a2)
)
{
}


jint android::opengl::ETC1Util_::ETC1Texture::getWidth()
{
	return call_method<
		android::opengl::ETC1Util_::ETC1Texture::J2CPP_CLASS_NAME,
		android::opengl::ETC1Util_::ETC1Texture::J2CPP_METHOD_NAME(1),
		android::opengl::ETC1Util_::ETC1Texture::J2CPP_METHOD_SIGNATURE(1), 
		jint
	>(get_jobject());
}

jint android::opengl::ETC1Util_::ETC1Texture::getHeight()
{
	return call_method<
		android::opengl::ETC1Util_::ETC1Texture::J2CPP_CLASS_NAME,
		android::opengl::ETC1Util_::ETC1Texture::J2CPP_METHOD_NAME(2),
		android::opengl::ETC1Util_::ETC1Texture::J2CPP_METHOD_SIGNATURE(2), 
		jint
	>(get_jobject());
}

local_ref< java::nio::ByteBuffer > android::opengl::ETC1Util_::ETC1Texture::getData()
{
	return call_method<
		android::opengl::ETC1Util_::ETC1Texture::J2CPP_CLASS_NAME,
		android::opengl::ETC1Util_::ETC1Texture::J2CPP_METHOD_NAME(3),
		android::opengl::ETC1Util_::ETC1Texture::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::nio::ByteBuffer >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(android::opengl::ETC1Util_::ETC1Texture,"android/opengl/ETC1Util$ETC1Texture")
J2CPP_DEFINE_METHOD(android::opengl::ETC1Util_::ETC1Texture,0,"<init>","(IILjava/nio/ByteBuffer;)V")
J2CPP_DEFINE_METHOD(android::opengl::ETC1Util_::ETC1Texture,1,"getWidth","()I")
J2CPP_DEFINE_METHOD(android::opengl::ETC1Util_::ETC1Texture,2,"getHeight","()I")
J2CPP_DEFINE_METHOD(android::opengl::ETC1Util_::ETC1Texture,3,"getData","()Ljava/nio/ByteBuffer;")



android::opengl::ETC1Util::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::opengl::ETC1Util::ETC1Util()
: object<android::opengl::ETC1Util>(
	call_new_object<
		android::opengl::ETC1Util::J2CPP_CLASS_NAME,
		android::opengl::ETC1Util::J2CPP_METHOD_NAME(0),
		android::opengl::ETC1Util::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}


void android::opengl::ETC1Util::loadTexture(jint a0, jint a1, jint a2, jint a3, jint a4, local_ref< java::io::InputStream > const &a5)
{
	return call_static_method<
		android::opengl::ETC1Util::J2CPP_CLASS_NAME,
		android::opengl::ETC1Util::J2CPP_METHOD_NAME(1),
		android::opengl::ETC1Util::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(a0, a1, a2, a3, a4, a5);
}

void android::opengl::ETC1Util::loadTexture(jint a0, jint a1, jint a2, jint a3, jint a4, local_ref< android::opengl::ETC1Util_::ETC1Texture > const &a5)
{
	return call_static_method<
		android::opengl::ETC1Util::J2CPP_CLASS_NAME,
		android::opengl::ETC1Util::J2CPP_METHOD_NAME(2),
		android::opengl::ETC1Util::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(a0, a1, a2, a3, a4, a5);
}

jboolean android::opengl::ETC1Util::isETC1Supported()
{
	return call_static_method<
		android::opengl::ETC1Util::J2CPP_CLASS_NAME,
		android::opengl::ETC1Util::J2CPP_METHOD_NAME(3),
		android::opengl::ETC1Util::J2CPP_METHOD_SIGNATURE(3), 
		jboolean
	>();
}

local_ref< android::opengl::ETC1Util_::ETC1Texture > android::opengl::ETC1Util::createTexture(local_ref< java::io::InputStream > const &a0)
{
	return call_static_method<
		android::opengl::ETC1Util::J2CPP_CLASS_NAME,
		android::opengl::ETC1Util::J2CPP_METHOD_NAME(4),
		android::opengl::ETC1Util::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< android::opengl::ETC1Util_::ETC1Texture >
	>(a0);
}

local_ref< android::opengl::ETC1Util_::ETC1Texture > android::opengl::ETC1Util::compressTexture(local_ref< java::nio::Buffer > const &a0, jint a1, jint a2, jint a3, jint a4)
{
	return call_static_method<
		android::opengl::ETC1Util::J2CPP_CLASS_NAME,
		android::opengl::ETC1Util::J2CPP_METHOD_NAME(5),
		android::opengl::ETC1Util::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< android::opengl::ETC1Util_::ETC1Texture >
	>(a0, a1, a2, a3, a4);
}

void android::opengl::ETC1Util::writeTexture(local_ref< android::opengl::ETC1Util_::ETC1Texture > const &a0, local_ref< java::io::OutputStream > const &a1)
{
	return call_static_method<
		android::opengl::ETC1Util::J2CPP_CLASS_NAME,
		android::opengl::ETC1Util::J2CPP_METHOD_NAME(6),
		android::opengl::ETC1Util::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(a0, a1);
}


J2CPP_DEFINE_CLASS(android::opengl::ETC1Util,"android/opengl/ETC1Util")
J2CPP_DEFINE_METHOD(android::opengl::ETC1Util,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::opengl::ETC1Util,1,"loadTexture","(IIIIILjava/io/InputStream;)V")
J2CPP_DEFINE_METHOD(android::opengl::ETC1Util,2,"loadTexture","(IIIIILandroid/opengl/ETC1Util$ETC1Texture;)V")
J2CPP_DEFINE_METHOD(android::opengl::ETC1Util,3,"isETC1Supported","()Z")
J2CPP_DEFINE_METHOD(android::opengl::ETC1Util,4,"createTexture","(Ljava/io/InputStream;)Landroid/opengl/ETC1Util$ETC1Texture;")
J2CPP_DEFINE_METHOD(android::opengl::ETC1Util,5,"compressTexture","(Ljava/nio/Buffer;IIII)Landroid/opengl/ETC1Util$ETC1Texture;")
J2CPP_DEFINE_METHOD(android::opengl::ETC1Util,6,"writeTexture","(Landroid/opengl/ETC1Util$ETC1Texture;Ljava/io/OutputStream;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_OPENGL_ETC1UTIL_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
