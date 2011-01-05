/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: javax.xml.validation.SchemaFactory
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_XML_VALIDATION_SCHEMAFACTORY_HPP_DECL
#define J2CPP_JAVAX_XML_VALIDATION_SCHEMAFACTORY_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class ClassLoader; } } }
namespace j2cpp { namespace javax { namespace xml { namespace transform { class Source; } } } }
namespace j2cpp { namespace javax { namespace xml { namespace validation { class Schema; } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace net { class URL; } } }
namespace j2cpp { namespace java { namespace io { class File; } } }
namespace j2cpp { namespace org { namespace xml { namespace sax { class ErrorHandler; } } } }
namespace j2cpp { namespace org { namespace w3c { namespace dom { namespace ls { class LSResourceResolver; } } } } }


#include <java/io/File.hpp>
#include <java/lang/ClassLoader.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/net/URL.hpp>
#include <javax/xml/transform/Source.hpp>
#include <javax/xml/validation/Schema.hpp>
#include <org/w3c/dom/ls/LSResourceResolver.hpp>
#include <org/xml/sax/ErrorHandler.hpp>


namespace j2cpp {

namespace javax { namespace xml { namespace validation {

	class SchemaFactory;
	class SchemaFactory
		: public object<SchemaFactory>
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

		explicit SchemaFactory(jobject jobj)
		: object<SchemaFactory>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		static local_ref< javax::xml::validation::SchemaFactory > newInstance(local_ref< java::lang::String >  const&);
		static local_ref< javax::xml::validation::SchemaFactory > newInstance(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&, local_ref< java::lang::ClassLoader >  const&);
		jboolean isSchemaLanguageSupported(local_ref< java::lang::String >  const&);
		jboolean getFeature(local_ref< java::lang::String >  const&);
		void setFeature(local_ref< java::lang::String >  const&, jboolean);
		void setProperty(local_ref< java::lang::String >  const&, local_ref< java::lang::Object >  const&);
		local_ref< java::lang::Object > getProperty(local_ref< java::lang::String >  const&);
		void setErrorHandler(local_ref< org::xml::sax::ErrorHandler >  const&);
		local_ref< org::xml::sax::ErrorHandler > getErrorHandler();
		void setResourceResolver(local_ref< org::w3c::dom::ls::LSResourceResolver >  const&);
		local_ref< org::w3c::dom::ls::LSResourceResolver > getResourceResolver();
		local_ref< javax::xml::validation::Schema > newSchema(local_ref< javax::xml::transform::Source >  const&);
		local_ref< javax::xml::validation::Schema > newSchema(local_ref< java::io::File >  const&);
		local_ref< javax::xml::validation::Schema > newSchema(local_ref< java::net::URL >  const&);
		local_ref< javax::xml::validation::Schema > newSchema(local_ref< array< local_ref< javax::xml::transform::Source >, 1> >  const&);
		local_ref< javax::xml::validation::Schema > newSchema();
	}; //class SchemaFactory

} //namespace validation
} //namespace xml
} //namespace javax

} //namespace j2cpp

#endif //J2CPP_JAVAX_XML_VALIDATION_SCHEMAFACTORY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_XML_VALIDATION_SCHEMAFACTORY_HPP_IMPL
#define J2CPP_JAVAX_XML_VALIDATION_SCHEMAFACTORY_HPP_IMPL

namespace j2cpp {



javax::xml::validation::SchemaFactory::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


local_ref< javax::xml::validation::SchemaFactory > javax::xml::validation::SchemaFactory::newInstance(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		javax::xml::validation::SchemaFactory::J2CPP_CLASS_NAME,
		javax::xml::validation::SchemaFactory::J2CPP_METHOD_NAME(1),
		javax::xml::validation::SchemaFactory::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< javax::xml::validation::SchemaFactory >
	>(a0);
}

local_ref< javax::xml::validation::SchemaFactory > javax::xml::validation::SchemaFactory::newInstance(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::ClassLoader > const &a2)
{
	return call_static_method<
		javax::xml::validation::SchemaFactory::J2CPP_CLASS_NAME,
		javax::xml::validation::SchemaFactory::J2CPP_METHOD_NAME(2),
		javax::xml::validation::SchemaFactory::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< javax::xml::validation::SchemaFactory >
	>(a0, a1, a2);
}

jboolean javax::xml::validation::SchemaFactory::isSchemaLanguageSupported(local_ref< java::lang::String > const &a0)
{
	return call_method<
		javax::xml::validation::SchemaFactory::J2CPP_CLASS_NAME,
		javax::xml::validation::SchemaFactory::J2CPP_METHOD_NAME(3),
		javax::xml::validation::SchemaFactory::J2CPP_METHOD_SIGNATURE(3), 
		jboolean
	>(get_jobject(), a0);
}

jboolean javax::xml::validation::SchemaFactory::getFeature(local_ref< java::lang::String > const &a0)
{
	return call_method<
		javax::xml::validation::SchemaFactory::J2CPP_CLASS_NAME,
		javax::xml::validation::SchemaFactory::J2CPP_METHOD_NAME(4),
		javax::xml::validation::SchemaFactory::J2CPP_METHOD_SIGNATURE(4), 
		jboolean
	>(get_jobject(), a0);
}

void javax::xml::validation::SchemaFactory::setFeature(local_ref< java::lang::String > const &a0, jboolean a1)
{
	return call_method<
		javax::xml::validation::SchemaFactory::J2CPP_CLASS_NAME,
		javax::xml::validation::SchemaFactory::J2CPP_METHOD_NAME(5),
		javax::xml::validation::SchemaFactory::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject(), a0, a1);
}

void javax::xml::validation::SchemaFactory::setProperty(local_ref< java::lang::String > const &a0, local_ref< java::lang::Object > const &a1)
{
	return call_method<
		javax::xml::validation::SchemaFactory::J2CPP_CLASS_NAME,
		javax::xml::validation::SchemaFactory::J2CPP_METHOD_NAME(6),
		javax::xml::validation::SchemaFactory::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(get_jobject(), a0, a1);
}

local_ref< java::lang::Object > javax::xml::validation::SchemaFactory::getProperty(local_ref< java::lang::String > const &a0)
{
	return call_method<
		javax::xml::validation::SchemaFactory::J2CPP_CLASS_NAME,
		javax::xml::validation::SchemaFactory::J2CPP_METHOD_NAME(7),
		javax::xml::validation::SchemaFactory::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< java::lang::Object >
	>(get_jobject(), a0);
}

void javax::xml::validation::SchemaFactory::setErrorHandler(local_ref< org::xml::sax::ErrorHandler > const &a0)
{
	return call_method<
		javax::xml::validation::SchemaFactory::J2CPP_CLASS_NAME,
		javax::xml::validation::SchemaFactory::J2CPP_METHOD_NAME(8),
		javax::xml::validation::SchemaFactory::J2CPP_METHOD_SIGNATURE(8), 
		void
	>(get_jobject(), a0);
}

local_ref< org::xml::sax::ErrorHandler > javax::xml::validation::SchemaFactory::getErrorHandler()
{
	return call_method<
		javax::xml::validation::SchemaFactory::J2CPP_CLASS_NAME,
		javax::xml::validation::SchemaFactory::J2CPP_METHOD_NAME(9),
		javax::xml::validation::SchemaFactory::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< org::xml::sax::ErrorHandler >
	>(get_jobject());
}

void javax::xml::validation::SchemaFactory::setResourceResolver(local_ref< org::w3c::dom::ls::LSResourceResolver > const &a0)
{
	return call_method<
		javax::xml::validation::SchemaFactory::J2CPP_CLASS_NAME,
		javax::xml::validation::SchemaFactory::J2CPP_METHOD_NAME(10),
		javax::xml::validation::SchemaFactory::J2CPP_METHOD_SIGNATURE(10), 
		void
	>(get_jobject(), a0);
}

local_ref< org::w3c::dom::ls::LSResourceResolver > javax::xml::validation::SchemaFactory::getResourceResolver()
{
	return call_method<
		javax::xml::validation::SchemaFactory::J2CPP_CLASS_NAME,
		javax::xml::validation::SchemaFactory::J2CPP_METHOD_NAME(11),
		javax::xml::validation::SchemaFactory::J2CPP_METHOD_SIGNATURE(11), 
		local_ref< org::w3c::dom::ls::LSResourceResolver >
	>(get_jobject());
}

local_ref< javax::xml::validation::Schema > javax::xml::validation::SchemaFactory::newSchema(local_ref< javax::xml::transform::Source > const &a0)
{
	return call_method<
		javax::xml::validation::SchemaFactory::J2CPP_CLASS_NAME,
		javax::xml::validation::SchemaFactory::J2CPP_METHOD_NAME(12),
		javax::xml::validation::SchemaFactory::J2CPP_METHOD_SIGNATURE(12), 
		local_ref< javax::xml::validation::Schema >
	>(get_jobject(), a0);
}

local_ref< javax::xml::validation::Schema > javax::xml::validation::SchemaFactory::newSchema(local_ref< java::io::File > const &a0)
{
	return call_method<
		javax::xml::validation::SchemaFactory::J2CPP_CLASS_NAME,
		javax::xml::validation::SchemaFactory::J2CPP_METHOD_NAME(13),
		javax::xml::validation::SchemaFactory::J2CPP_METHOD_SIGNATURE(13), 
		local_ref< javax::xml::validation::Schema >
	>(get_jobject(), a0);
}

local_ref< javax::xml::validation::Schema > javax::xml::validation::SchemaFactory::newSchema(local_ref< java::net::URL > const &a0)
{
	return call_method<
		javax::xml::validation::SchemaFactory::J2CPP_CLASS_NAME,
		javax::xml::validation::SchemaFactory::J2CPP_METHOD_NAME(14),
		javax::xml::validation::SchemaFactory::J2CPP_METHOD_SIGNATURE(14), 
		local_ref< javax::xml::validation::Schema >
	>(get_jobject(), a0);
}

local_ref< javax::xml::validation::Schema > javax::xml::validation::SchemaFactory::newSchema(local_ref< array< local_ref< javax::xml::transform::Source >, 1> > const &a0)
{
	return call_method<
		javax::xml::validation::SchemaFactory::J2CPP_CLASS_NAME,
		javax::xml::validation::SchemaFactory::J2CPP_METHOD_NAME(15),
		javax::xml::validation::SchemaFactory::J2CPP_METHOD_SIGNATURE(15), 
		local_ref< javax::xml::validation::Schema >
	>(get_jobject(), a0);
}

local_ref< javax::xml::validation::Schema > javax::xml::validation::SchemaFactory::newSchema()
{
	return call_method<
		javax::xml::validation::SchemaFactory::J2CPP_CLASS_NAME,
		javax::xml::validation::SchemaFactory::J2CPP_METHOD_NAME(16),
		javax::xml::validation::SchemaFactory::J2CPP_METHOD_SIGNATURE(16), 
		local_ref< javax::xml::validation::Schema >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(javax::xml::validation::SchemaFactory,"javax/xml/validation/SchemaFactory")
J2CPP_DEFINE_METHOD(javax::xml::validation::SchemaFactory,0,"<init>","()V")
J2CPP_DEFINE_METHOD(javax::xml::validation::SchemaFactory,1,"newInstance","(Ljava/lang/String;)Ljavax/xml/validation/SchemaFactory;")
J2CPP_DEFINE_METHOD(javax::xml::validation::SchemaFactory,2,"newInstance","(Ljava/lang/String;Ljava/lang/String;Ljava/lang/ClassLoader;)Ljavax/xml/validation/SchemaFactory;")
J2CPP_DEFINE_METHOD(javax::xml::validation::SchemaFactory,3,"isSchemaLanguageSupported","(Ljava/lang/String;)Z")
J2CPP_DEFINE_METHOD(javax::xml::validation::SchemaFactory,4,"getFeature","(Ljava/lang/String;)Z")
J2CPP_DEFINE_METHOD(javax::xml::validation::SchemaFactory,5,"setFeature","(Ljava/lang/String;Z)V")
J2CPP_DEFINE_METHOD(javax::xml::validation::SchemaFactory,6,"setProperty","(Ljava/lang/String;Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(javax::xml::validation::SchemaFactory,7,"getProperty","(Ljava/lang/String;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(javax::xml::validation::SchemaFactory,8,"setErrorHandler","(Lorg/xml/sax/ErrorHandler;)V")
J2CPP_DEFINE_METHOD(javax::xml::validation::SchemaFactory,9,"getErrorHandler","()Lorg/xml/sax/ErrorHandler;")
J2CPP_DEFINE_METHOD(javax::xml::validation::SchemaFactory,10,"setResourceResolver","(Lorg/w3c/dom/ls/LSResourceResolver;)V")
J2CPP_DEFINE_METHOD(javax::xml::validation::SchemaFactory,11,"getResourceResolver","()Lorg/w3c/dom/ls/LSResourceResolver;")
J2CPP_DEFINE_METHOD(javax::xml::validation::SchemaFactory,12,"newSchema","(Ljavax/xml/transform/Source;)Ljavax/xml/validation/Schema;")
J2CPP_DEFINE_METHOD(javax::xml::validation::SchemaFactory,13,"newSchema","(Ljava/io/File;)Ljavax/xml/validation/Schema;")
J2CPP_DEFINE_METHOD(javax::xml::validation::SchemaFactory,14,"newSchema","(Ljava/net/URL;)Ljavax/xml/validation/Schema;")
J2CPP_DEFINE_METHOD(javax::xml::validation::SchemaFactory,15,"newSchema","([javax.xml.transform.Source)Ljavax/xml/validation/Schema;")
J2CPP_DEFINE_METHOD(javax::xml::validation::SchemaFactory,16,"newSchema","()Ljavax/xml/validation/Schema;")

} //namespace j2cpp

#endif //J2CPP_JAVAX_XML_VALIDATION_SCHEMAFACTORY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
