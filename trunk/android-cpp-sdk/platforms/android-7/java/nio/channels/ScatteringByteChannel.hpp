/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.nio.channels.ScatteringByteChannel
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NIO_CHANNELS_SCATTERINGBYTECHANNEL_HPP_DECL
#define J2CPP_JAVA_NIO_CHANNELS_SCATTERINGBYTECHANNEL_HPP_DECL


namespace j2cpp { namespace java { namespace io { class Closeable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace nio { namespace channels { class ReadableByteChannel; } } } }
namespace j2cpp { namespace java { namespace nio { namespace channels { class Channel; } } } }
namespace j2cpp { namespace java { namespace nio { class ByteBuffer; } } }


#include <java/io/Closeable.hpp>
#include <java/lang/Object.hpp>
#include <java/nio/ByteBuffer.hpp>
#include <java/nio/channels/Channel.hpp>
#include <java/nio/channels/ReadableByteChannel.hpp>


namespace j2cpp {

namespace java { namespace nio { namespace channels {

	class ScatteringByteChannel;
	class ScatteringByteChannel
		: public object<ScatteringByteChannel>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit ScatteringByteChannel(jobject jobj)
		: object<ScatteringByteChannel>(jobj)
		{
		}

		operator local_ref<java::io::Closeable>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::nio::channels::ReadableByteChannel>() const;
		operator local_ref<java::nio::channels::Channel>() const;


		jlong read(local_ref< array< local_ref< java::nio::ByteBuffer >, 1> >  const&);
		jlong read(local_ref< array< local_ref< java::nio::ByteBuffer >, 1> >  const&, jint, jint);
	}; //class ScatteringByteChannel

} //namespace channels
} //namespace nio
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_NIO_CHANNELS_SCATTERINGBYTECHANNEL_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NIO_CHANNELS_SCATTERINGBYTECHANNEL_HPP_IMPL
#define J2CPP_JAVA_NIO_CHANNELS_SCATTERINGBYTECHANNEL_HPP_IMPL

namespace j2cpp {



java::nio::channels::ScatteringByteChannel::operator local_ref<java::io::Closeable>() const
{
	return local_ref<java::io::Closeable>(get_jobject());
}

java::nio::channels::ScatteringByteChannel::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::nio::channels::ScatteringByteChannel::operator local_ref<java::nio::channels::ReadableByteChannel>() const
{
	return local_ref<java::nio::channels::ReadableByteChannel>(get_jobject());
}

java::nio::channels::ScatteringByteChannel::operator local_ref<java::nio::channels::Channel>() const
{
	return local_ref<java::nio::channels::Channel>(get_jobject());
}

jlong java::nio::channels::ScatteringByteChannel::read(local_ref< array< local_ref< java::nio::ByteBuffer >, 1> > const &a0)
{
	return call_method<
		java::nio::channels::ScatteringByteChannel::J2CPP_CLASS_NAME,
		java::nio::channels::ScatteringByteChannel::J2CPP_METHOD_NAME(0),
		java::nio::channels::ScatteringByteChannel::J2CPP_METHOD_SIGNATURE(0), 
		jlong
	>(get_jobject(), a0);
}

jlong java::nio::channels::ScatteringByteChannel::read(local_ref< array< local_ref< java::nio::ByteBuffer >, 1> > const &a0, jint a1, jint a2)
{
	return call_method<
		java::nio::channels::ScatteringByteChannel::J2CPP_CLASS_NAME,
		java::nio::channels::ScatteringByteChannel::J2CPP_METHOD_NAME(1),
		java::nio::channels::ScatteringByteChannel::J2CPP_METHOD_SIGNATURE(1), 
		jlong
	>(get_jobject(), a0, a1, a2);
}


J2CPP_DEFINE_CLASS(java::nio::channels::ScatteringByteChannel,"java/nio/channels/ScatteringByteChannel")
J2CPP_DEFINE_METHOD(java::nio::channels::ScatteringByteChannel,0,"read","([java.nio.ByteBuffer)J")
J2CPP_DEFINE_METHOD(java::nio::channels::ScatteringByteChannel,1,"read","([java.nio.ByteBufferII)J")

} //namespace j2cpp

#endif //J2CPP_JAVA_NIO_CHANNELS_SCATTERINGBYTECHANNEL_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
