/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.gesture.GestureStore
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GESTURE_GESTURESTORE_HPP_DECL
#define J2CPP_ANDROID_GESTURE_GESTURESTORE_HPP_DECL


namespace j2cpp { namespace java { namespace io { class InputStream; } } }
namespace j2cpp { namespace java { namespace io { class OutputStream; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace util { class Set; } } }
namespace j2cpp { namespace java { namespace util { class ArrayList; } } }
namespace j2cpp { namespace android { namespace gesture { class Gesture; } } }


#include <android/gesture/Gesture.hpp>
#include <java/io/InputStream.hpp>
#include <java/io/OutputStream.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/Set.hpp>


namespace j2cpp {

namespace android { namespace gesture {

	class GestureStore;
	class GestureStore
		: public object<GestureStore>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)

		explicit GestureStore(jobject jobj)
		: object<GestureStore>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		GestureStore();
		void setOrientationStyle(jint);
		jint getOrientationStyle();
		void setSequenceType(jint);
		jint getSequenceType();
		local_ref< java::util::Set > getGestureEntries();
		local_ref< java::util::ArrayList > recognize(local_ref< android::gesture::Gesture >  const&);
		void addGesture(local_ref< java::lang::String >  const&, local_ref< android::gesture::Gesture >  const&);
		void removeGesture(local_ref< java::lang::String >  const&, local_ref< android::gesture::Gesture >  const&);
		void removeEntry(local_ref< java::lang::String >  const&);
		local_ref< java::util::ArrayList > getGestures(local_ref< java::lang::String >  const&);
		jboolean hasChanged();
		void save(local_ref< java::io::OutputStream >  const&);
		void save(local_ref< java::io::OutputStream >  const&, jboolean);
		void load(local_ref< java::io::InputStream >  const&);
		void load(local_ref< java::io::InputStream >  const&, jboolean);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > SEQUENCE_INVARIANT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > SEQUENCE_SENSITIVE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jint > ORIENTATION_INVARIANT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), jint > ORIENTATION_SENSITIVE;
	}; //class GestureStore

} //namespace gesture
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_GESTURE_GESTURESTORE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GESTURE_GESTURESTORE_HPP_IMPL
#define J2CPP_ANDROID_GESTURE_GESTURESTORE_HPP_IMPL

namespace j2cpp {



android::gesture::GestureStore::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::gesture::GestureStore::GestureStore()
: object<android::gesture::GestureStore>(
	call_new_object<
		android::gesture::GestureStore::J2CPP_CLASS_NAME,
		android::gesture::GestureStore::J2CPP_METHOD_NAME(0),
		android::gesture::GestureStore::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}


void android::gesture::GestureStore::setOrientationStyle(jint a0)
{
	return call_method<
		android::gesture::GestureStore::J2CPP_CLASS_NAME,
		android::gesture::GestureStore::J2CPP_METHOD_NAME(1),
		android::gesture::GestureStore::J2CPP_METHOD_SIGNATURE(1), 
		void >
	(get_jobject(), a0);
}

jint android::gesture::GestureStore::getOrientationStyle()
{
	return call_method<
		android::gesture::GestureStore::J2CPP_CLASS_NAME,
		android::gesture::GestureStore::J2CPP_METHOD_NAME(2),
		android::gesture::GestureStore::J2CPP_METHOD_SIGNATURE(2), 
		jint >
	(get_jobject());
}

void android::gesture::GestureStore::setSequenceType(jint a0)
{
	return call_method<
		android::gesture::GestureStore::J2CPP_CLASS_NAME,
		android::gesture::GestureStore::J2CPP_METHOD_NAME(3),
		android::gesture::GestureStore::J2CPP_METHOD_SIGNATURE(3), 
		void >
	(get_jobject(), a0);
}

jint android::gesture::GestureStore::getSequenceType()
{
	return call_method<
		android::gesture::GestureStore::J2CPP_CLASS_NAME,
		android::gesture::GestureStore::J2CPP_METHOD_NAME(4),
		android::gesture::GestureStore::J2CPP_METHOD_SIGNATURE(4), 
		jint >
	(get_jobject());
}

local_ref< java::util::Set > android::gesture::GestureStore::getGestureEntries()
{
	return call_method<
		android::gesture::GestureStore::J2CPP_CLASS_NAME,
		android::gesture::GestureStore::J2CPP_METHOD_NAME(5),
		android::gesture::GestureStore::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::util::Set > >
	(get_jobject());
}

local_ref< java::util::ArrayList > android::gesture::GestureStore::recognize(local_ref< android::gesture::Gesture > const &a0)
{
	return call_method<
		android::gesture::GestureStore::J2CPP_CLASS_NAME,
		android::gesture::GestureStore::J2CPP_METHOD_NAME(6),
		android::gesture::GestureStore::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::util::ArrayList > >
	(get_jobject(), a0);
}

void android::gesture::GestureStore::addGesture(local_ref< java::lang::String > const &a0, local_ref< android::gesture::Gesture > const &a1)
{
	return call_method<
		android::gesture::GestureStore::J2CPP_CLASS_NAME,
		android::gesture::GestureStore::J2CPP_METHOD_NAME(7),
		android::gesture::GestureStore::J2CPP_METHOD_SIGNATURE(7), 
		void >
	(get_jobject(), a0, a1);
}

void android::gesture::GestureStore::removeGesture(local_ref< java::lang::String > const &a0, local_ref< android::gesture::Gesture > const &a1)
{
	return call_method<
		android::gesture::GestureStore::J2CPP_CLASS_NAME,
		android::gesture::GestureStore::J2CPP_METHOD_NAME(8),
		android::gesture::GestureStore::J2CPP_METHOD_SIGNATURE(8), 
		void >
	(get_jobject(), a0, a1);
}

void android::gesture::GestureStore::removeEntry(local_ref< java::lang::String > const &a0)
{
	return call_method<
		android::gesture::GestureStore::J2CPP_CLASS_NAME,
		android::gesture::GestureStore::J2CPP_METHOD_NAME(9),
		android::gesture::GestureStore::J2CPP_METHOD_SIGNATURE(9), 
		void >
	(get_jobject(), a0);
}

local_ref< java::util::ArrayList > android::gesture::GestureStore::getGestures(local_ref< java::lang::String > const &a0)
{
	return call_method<
		android::gesture::GestureStore::J2CPP_CLASS_NAME,
		android::gesture::GestureStore::J2CPP_METHOD_NAME(10),
		android::gesture::GestureStore::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< java::util::ArrayList > >
	(get_jobject(), a0);
}

jboolean android::gesture::GestureStore::hasChanged()
{
	return call_method<
		android::gesture::GestureStore::J2CPP_CLASS_NAME,
		android::gesture::GestureStore::J2CPP_METHOD_NAME(11),
		android::gesture::GestureStore::J2CPP_METHOD_SIGNATURE(11), 
		jboolean >
	(get_jobject());
}

void android::gesture::GestureStore::save(local_ref< java::io::OutputStream > const &a0)
{
	return call_method<
		android::gesture::GestureStore::J2CPP_CLASS_NAME,
		android::gesture::GestureStore::J2CPP_METHOD_NAME(12),
		android::gesture::GestureStore::J2CPP_METHOD_SIGNATURE(12), 
		void >
	(get_jobject(), a0);
}

void android::gesture::GestureStore::save(local_ref< java::io::OutputStream > const &a0, jboolean a1)
{
	return call_method<
		android::gesture::GestureStore::J2CPP_CLASS_NAME,
		android::gesture::GestureStore::J2CPP_METHOD_NAME(13),
		android::gesture::GestureStore::J2CPP_METHOD_SIGNATURE(13), 
		void >
	(get_jobject(), a0, a1);
}

void android::gesture::GestureStore::load(local_ref< java::io::InputStream > const &a0)
{
	return call_method<
		android::gesture::GestureStore::J2CPP_CLASS_NAME,
		android::gesture::GestureStore::J2CPP_METHOD_NAME(14),
		android::gesture::GestureStore::J2CPP_METHOD_SIGNATURE(14), 
		void >
	(get_jobject(), a0);
}

void android::gesture::GestureStore::load(local_ref< java::io::InputStream > const &a0, jboolean a1)
{
	return call_method<
		android::gesture::GestureStore::J2CPP_CLASS_NAME,
		android::gesture::GestureStore::J2CPP_METHOD_NAME(15),
		android::gesture::GestureStore::J2CPP_METHOD_SIGNATURE(15), 
		void >
	(get_jobject(), a0, a1);
}


static_field<
	android::gesture::GestureStore::J2CPP_CLASS_NAME,
	android::gesture::GestureStore::J2CPP_FIELD_NAME(0),
	android::gesture::GestureStore::J2CPP_FIELD_SIGNATURE(0),
	jint
> android::gesture::GestureStore::SEQUENCE_INVARIANT;

static_field<
	android::gesture::GestureStore::J2CPP_CLASS_NAME,
	android::gesture::GestureStore::J2CPP_FIELD_NAME(1),
	android::gesture::GestureStore::J2CPP_FIELD_SIGNATURE(1),
	jint
> android::gesture::GestureStore::SEQUENCE_SENSITIVE;

static_field<
	android::gesture::GestureStore::J2CPP_CLASS_NAME,
	android::gesture::GestureStore::J2CPP_FIELD_NAME(2),
	android::gesture::GestureStore::J2CPP_FIELD_SIGNATURE(2),
	jint
> android::gesture::GestureStore::ORIENTATION_INVARIANT;

static_field<
	android::gesture::GestureStore::J2CPP_CLASS_NAME,
	android::gesture::GestureStore::J2CPP_FIELD_NAME(3),
	android::gesture::GestureStore::J2CPP_FIELD_SIGNATURE(3),
	jint
> android::gesture::GestureStore::ORIENTATION_SENSITIVE;


J2CPP_DEFINE_CLASS(android::gesture::GestureStore,"android/gesture/GestureStore")
J2CPP_DEFINE_METHOD(android::gesture::GestureStore,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::gesture::GestureStore,1,"setOrientationStyle","(I)V")
J2CPP_DEFINE_METHOD(android::gesture::GestureStore,2,"getOrientationStyle","()I")
J2CPP_DEFINE_METHOD(android::gesture::GestureStore,3,"setSequenceType","(I)V")
J2CPP_DEFINE_METHOD(android::gesture::GestureStore,4,"getSequenceType","()I")
J2CPP_DEFINE_METHOD(android::gesture::GestureStore,5,"getGestureEntries","()Ljava/util/Set;")
J2CPP_DEFINE_METHOD(android::gesture::GestureStore,6,"recognize","(Landroid/gesture/Gesture;)Ljava/util/ArrayList;")
J2CPP_DEFINE_METHOD(android::gesture::GestureStore,7,"addGesture","(Ljava/lang/String;Landroid/gesture/Gesture;)V")
J2CPP_DEFINE_METHOD(android::gesture::GestureStore,8,"removeGesture","(Ljava/lang/String;Landroid/gesture/Gesture;)V")
J2CPP_DEFINE_METHOD(android::gesture::GestureStore,9,"removeEntry","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::gesture::GestureStore,10,"getGestures","(Ljava/lang/String;)Ljava/util/ArrayList;")
J2CPP_DEFINE_METHOD(android::gesture::GestureStore,11,"hasChanged","()Z")
J2CPP_DEFINE_METHOD(android::gesture::GestureStore,12,"save","(Ljava/io/OutputStream;)V")
J2CPP_DEFINE_METHOD(android::gesture::GestureStore,13,"save","(Ljava/io/OutputStream;Z)V")
J2CPP_DEFINE_METHOD(android::gesture::GestureStore,14,"load","(Ljava/io/InputStream;)V")
J2CPP_DEFINE_METHOD(android::gesture::GestureStore,15,"load","(Ljava/io/InputStream;Z)V")
J2CPP_DEFINE_FIELD(android::gesture::GestureStore,0,"SEQUENCE_INVARIANT","I")
J2CPP_DEFINE_FIELD(android::gesture::GestureStore,1,"SEQUENCE_SENSITIVE","I")
J2CPP_DEFINE_FIELD(android::gesture::GestureStore,2,"ORIENTATION_INVARIANT","I")
J2CPP_DEFINE_FIELD(android::gesture::GestureStore,3,"ORIENTATION_SENSITIVE","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_GESTURE_GESTURESTORE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
