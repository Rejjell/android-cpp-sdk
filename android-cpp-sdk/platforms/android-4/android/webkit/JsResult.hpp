/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.webkit.JsResult
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WEBKIT_JSRESULT_HPP_DECL
#define J2CPP_ANDROID_WEBKIT_JSRESULT_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace webkit {

	class JsResult;
	class JsResult
		: public object<JsResult>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)

		explicit JsResult(jobject jobj)
		: object<JsResult>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		void cancel();
		void confirm();

	}; //class JsResult

} //namespace webkit
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_WEBKIT_JSRESULT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WEBKIT_JSRESULT_HPP_IMPL
#define J2CPP_ANDROID_WEBKIT_JSRESULT_HPP_IMPL

namespace j2cpp {



android::webkit::JsResult::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


void android::webkit::JsResult::cancel()
{
	return call_method<
		android::webkit::JsResult::J2CPP_CLASS_NAME,
		android::webkit::JsResult::J2CPP_METHOD_NAME(1),
		android::webkit::JsResult::J2CPP_METHOD_SIGNATURE(1), 
		void >
	(get_jobject());
}

void android::webkit::JsResult::confirm()
{
	return call_method<
		android::webkit::JsResult::J2CPP_CLASS_NAME,
		android::webkit::JsResult::J2CPP_METHOD_NAME(2),
		android::webkit::JsResult::J2CPP_METHOD_SIGNATURE(2), 
		void >
	(get_jobject());
}




J2CPP_DEFINE_CLASS(android::webkit::JsResult,"android/webkit/JsResult")
J2CPP_DEFINE_METHOD(android::webkit::JsResult,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::webkit::JsResult,1,"cancel","()V")
J2CPP_DEFINE_METHOD(android::webkit::JsResult,2,"confirm","()V")
J2CPP_DEFINE_METHOD(android::webkit::JsResult,3,"wakeUp","()V")
J2CPP_DEFINE_FIELD(android::webkit::JsResult,0,"mResult","Z")
J2CPP_DEFINE_FIELD(android::webkit::JsResult,1,"mProxy","Landroid/webkit/CallbackProxy;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_WEBKIT_JSRESULT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
