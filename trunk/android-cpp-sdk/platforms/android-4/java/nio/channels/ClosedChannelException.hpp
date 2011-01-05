/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.nio.channels.ClosedChannelException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NIO_CHANNELS_CLOSEDCHANNELEXCEPTION_HPP_DECL
#define J2CPP_JAVA_NIO_CHANNELS_CLOSEDCHANNELEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace io { class IOException; } } }
namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace java { namespace lang { class Throwable; } } }
namespace j2cpp { namespace java { namespace lang { class Exception; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/io/IOException.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/Throwable.hpp>


namespace j2cpp {

namespace java { namespace nio { namespace channels {

	class ClosedChannelException;
	class ClosedChannelException
		: public object<ClosedChannelException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		explicit ClosedChannelException(jobject jobj)
		: object<ClosedChannelException>(jobj)
		{
		}

		operator local_ref<java::io::IOException>() const;
		operator local_ref<java::io::Serializable>() const;
		operator local_ref<java::lang::Throwable>() const;
		operator local_ref<java::lang::Exception>() const;
		operator local_ref<java::lang::Object>() const;


		ClosedChannelException();
	}; //class ClosedChannelException

} //namespace channels
} //namespace nio
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_NIO_CHANNELS_CLOSEDCHANNELEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NIO_CHANNELS_CLOSEDCHANNELEXCEPTION_HPP_IMPL
#define J2CPP_JAVA_NIO_CHANNELS_CLOSEDCHANNELEXCEPTION_HPP_IMPL

namespace j2cpp {



java::nio::channels::ClosedChannelException::operator local_ref<java::io::IOException>() const
{
	return local_ref<java::io::IOException>(get_jobject());
}

java::nio::channels::ClosedChannelException::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}

java::nio::channels::ClosedChannelException::operator local_ref<java::lang::Throwable>() const
{
	return local_ref<java::lang::Throwable>(get_jobject());
}

java::nio::channels::ClosedChannelException::operator local_ref<java::lang::Exception>() const
{
	return local_ref<java::lang::Exception>(get_jobject());
}

java::nio::channels::ClosedChannelException::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


java::nio::channels::ClosedChannelException::ClosedChannelException()
: object<java::nio::channels::ClosedChannelException>(
	call_new_object<
		java::nio::channels::ClosedChannelException::J2CPP_CLASS_NAME,
		java::nio::channels::ClosedChannelException::J2CPP_METHOD_NAME(0),
		java::nio::channels::ClosedChannelException::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}



J2CPP_DEFINE_CLASS(java::nio::channels::ClosedChannelException,"java/nio/channels/ClosedChannelException")
J2CPP_DEFINE_METHOD(java::nio::channels::ClosedChannelException,0,"<init>","()V")

} //namespace j2cpp

#endif //J2CPP_JAVA_NIO_CHANNELS_CLOSEDCHANNELEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
