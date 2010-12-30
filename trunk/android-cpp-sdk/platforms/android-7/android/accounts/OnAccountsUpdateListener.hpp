/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.accounts.OnAccountsUpdateListener
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_ACCOUNTS_ONACCOUNTSUPDATELISTENER_HPP_DECL
#define J2CPP_ANDROID_ACCOUNTS_ONACCOUNTSUPDATELISTENER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace accounts { class Account; } } }


#include <android/accounts/Account.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace accounts {

	class OnAccountsUpdateListener;
	class OnAccountsUpdateListener
		: public object<OnAccountsUpdateListener>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		explicit OnAccountsUpdateListener(jobject jobj)
		: object<OnAccountsUpdateListener>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		void onAccountsUpdated(local_ref< array< local_ref< android::accounts::Account >, 1> >  const&);
	}; //class OnAccountsUpdateListener

} //namespace accounts
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_ACCOUNTS_ONACCOUNTSUPDATELISTENER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_ACCOUNTS_ONACCOUNTSUPDATELISTENER_HPP_IMPL
#define J2CPP_ANDROID_ACCOUNTS_ONACCOUNTSUPDATELISTENER_HPP_IMPL

namespace j2cpp {



android::accounts::OnAccountsUpdateListener::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void android::accounts::OnAccountsUpdateListener::onAccountsUpdated(local_ref< array< local_ref< android::accounts::Account >, 1> > const &a0)
{
	return call_method<
		android::accounts::OnAccountsUpdateListener::J2CPP_CLASS_NAME,
		android::accounts::OnAccountsUpdateListener::J2CPP_METHOD_NAME(0),
		android::accounts::OnAccountsUpdateListener::J2CPP_METHOD_SIGNATURE(0), 
		void >
	(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(android::accounts::OnAccountsUpdateListener,"android/accounts/OnAccountsUpdateListener")
J2CPP_DEFINE_METHOD(android::accounts::OnAccountsUpdateListener,0,"onAccountsUpdated","([android.accounts.Account)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_ACCOUNTS_ONACCOUNTSUPDATELISTENER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
