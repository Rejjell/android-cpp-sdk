/*================================================================================
  code generated by: java2cpp
  class: java.lang.annotation.Retention
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_ANNOTATION_RETENTION_HPP_DECL
#define J2CPP_JAVA_LANG_ANNOTATION_RETENTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { namespace annotation { class RetentionPolicy; } } } }


#include <java/lang/annotation/RetentionPolicy.hpp>


namespace j2cpp {

namespace java { namespace lang { namespace annotation {

	class Retention;
	class Retention
		: public cpp_object<Retention>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		Retention(jobject jobj)
		: cpp_object<Retention>(jobj)
		{
		}

		local_ref< java::lang::annotation::RetentionPolicy > value();
	}; //class Retention

} //namespace annotation
} //namespace lang
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_ANNOTATION_RETENTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_ANNOTATION_RETENTION_HPP_IMPL
#define J2CPP_JAVA_LANG_ANNOTATION_RETENTION_HPP_IMPL

namespace j2cpp {


local_ref< java::lang::annotation::RetentionPolicy > java::lang::annotation::Retention::value()
{
	return local_ref< java::lang::annotation::RetentionPolicy >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(java::lang::annotation::Retention,"java/lang/annotation/Retention")
J2CPP_DEFINE_METHOD(java::lang::annotation::Retention,0,"value","()Ljava/lang/annotation/RetentionPolicy;")

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_ANNOTATION_RETENTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION