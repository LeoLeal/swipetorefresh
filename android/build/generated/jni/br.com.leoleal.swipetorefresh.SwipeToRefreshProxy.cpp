/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2011-2013 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */

/** This code is generated, do not edit by hand. **/

#include "br.com.leoleal.swipetorefresh.SwipeToRefreshProxy.h"

#include "AndroidUtil.h"
#include "EventEmitter.h"
#include "JNIUtil.h"
#include "JSException.h"
#include "Proxy.h"
#include "ProxyFactory.h"
#include "TypeConverter.h"
#include "V8Util.h"


#include "org.appcelerator.titanium.proxy.TiViewProxy.h"

#define TAG "SwipeToRefreshProxy"

using namespace v8;

		namespace br {
		namespace com {
		namespace leoleal {
		namespace swipetorefresh {
			namespace swipetorefresh {


Persistent<FunctionTemplate> SwipeToRefreshProxy::proxyTemplate = Persistent<FunctionTemplate>();
jclass SwipeToRefreshProxy::javaClass = NULL;

SwipeToRefreshProxy::SwipeToRefreshProxy(jobject javaObject) : titanium::Proxy(javaObject)
{
}

void SwipeToRefreshProxy::bindProxy(Handle<Object> exports)
{
	if (proxyTemplate.IsEmpty()) {
		getProxyTemplate();
	}

	// use symbol over string for efficiency
	Handle<String> nameSymbol = String::NewSymbol("SwipeToRefresh");

	Local<Function> proxyConstructor = proxyTemplate->GetFunction();
	exports->Set(nameSymbol, proxyConstructor);
}

void SwipeToRefreshProxy::dispose()
{
	LOGD(TAG, "dispose()");
	if (!proxyTemplate.IsEmpty()) {
		proxyTemplate.Dispose();
		proxyTemplate = Persistent<FunctionTemplate>();
	}

	titanium::TiViewProxy::dispose();
}

Handle<FunctionTemplate> SwipeToRefreshProxy::getProxyTemplate()
{
	if (!proxyTemplate.IsEmpty()) {
		return proxyTemplate;
	}

	LOGD(TAG, "GetProxyTemplate");

	javaClass = titanium::JNIUtil::findClass("br/com/leoleal/swipetorefresh/SwipeToRefreshProxy");
	HandleScope scope;

	// use symbol over string for efficiency
	Handle<String> nameSymbol = String::NewSymbol("SwipeToRefresh");

	Handle<FunctionTemplate> t = titanium::Proxy::inheritProxyTemplate(
		titanium::TiViewProxy::getProxyTemplate()
, javaClass, nameSymbol);

	proxyTemplate = Persistent<FunctionTemplate>::New(t);
	proxyTemplate->Set(titanium::Proxy::inheritSymbol,
		FunctionTemplate::New(titanium::Proxy::inherit<SwipeToRefreshProxy>)->GetFunction());

	titanium::ProxyFactory::registerProxyPair(javaClass, *proxyTemplate);

	// Method bindings --------------------------------------------------------
	DEFINE_PROTOTYPE_METHOD(proxyTemplate, "add", SwipeToRefreshProxy::add);
	DEFINE_PROTOTYPE_METHOD(proxyTemplate, "isRefreshing", SwipeToRefreshProxy::isRefreshing);
	DEFINE_PROTOTYPE_METHOD(proxyTemplate, "setRefreshing", SwipeToRefreshProxy::setRefreshing);

	Local<ObjectTemplate> prototypeTemplate = proxyTemplate->PrototypeTemplate();
	Local<ObjectTemplate> instanceTemplate = proxyTemplate->InstanceTemplate();

	// Delegate indexed property get and set to the Java proxy.
	instanceTemplate->SetIndexedPropertyHandler(titanium::Proxy::getIndexedProperty,
		titanium::Proxy::setIndexedProperty);

	// Constants --------------------------------------------------------------

	// Dynamic properties -----------------------------------------------------
	instanceTemplate->SetAccessor(String::NewSymbol("refreshing"),
			SwipeToRefreshProxy::getter_refreshing
			, titanium::Proxy::onPropertyChanged
		, Handle<Value>(), DEFAULT);

	// Accessors --------------------------------------------------------------

	return proxyTemplate;
}

// Methods --------------------------------------------------------------------
Handle<Value> SwipeToRefreshProxy::add(const Arguments& args)
{
	LOGD(TAG, "add()");
	HandleScope scope;

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		return titanium::JSException::GetJNIEnvironmentError();
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(SwipeToRefreshProxy::javaClass, "add", "(Lorg/appcelerator/titanium/proxy/TiViewProxy;)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'add' with signature '(Lorg/appcelerator/titanium/proxy/TiViewProxy;)V'";
			LOGE(TAG, error);
				return titanium::JSException::Error(error);
		}
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(args.Holder());

	if (args.Length() < 1) {
		char errorStringBuffer[100];
		sprintf(errorStringBuffer, "add: Invalid number of arguments. Expected 1 but got %d", args.Length());
		return ThrowException(Exception::Error(String::New(errorStringBuffer)));
	}

	jvalue jArguments[1];




	if (!args[0]->IsObject() && !args[0]->IsNull()) {
		const char *error = "Invalid value, expected type Object.";
		LOGE(TAG, error);
		return titanium::JSException::Error(error);
	}
	bool isNew_0;
	
	if (!args[0]->IsNull()) {
		Local<Object> arg_0 = args[0]->ToObject();
		jArguments[0].l =
			titanium::TypeConverter::jsValueToJavaObject(env, arg_0, &isNew_0);
	} else {
		jArguments[0].l = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	if (!JavaObject::useGlobalRefs) {
		env->DeleteLocalRef(javaProxy);
	}



			if (isNew_0) {
				env->DeleteLocalRef(jArguments[0].l);
			}


	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException();
		env->ExceptionClear();
	}




	return v8::Undefined();

}
Handle<Value> SwipeToRefreshProxy::isRefreshing(const Arguments& args)
{
	LOGD(TAG, "isRefreshing()");
	HandleScope scope;

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		return titanium::JSException::GetJNIEnvironmentError();
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(SwipeToRefreshProxy::javaClass, "isRefreshing", "()Z");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'isRefreshing' with signature '()Z'";
			LOGE(TAG, error);
				return titanium::JSException::Error(error);
		}
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(args.Holder());

	jvalue* jArguments = 0;

	jobject javaProxy = proxy->getJavaObject();
	jboolean jResult = (jboolean)env->CallBooleanMethodA(javaProxy, methodID, jArguments);



	if (!JavaObject::useGlobalRefs) {
		env->DeleteLocalRef(javaProxy);
	}



	if (env->ExceptionCheck()) {
		Handle<Value> jsException = titanium::JSException::fromJavaException();
		env->ExceptionClear();
		return jsException;
	}


	Handle<Boolean> v8Result = titanium::TypeConverter::javaBooleanToJsBoolean(env, jResult);



	return v8Result;

}
Handle<Value> SwipeToRefreshProxy::setRefreshing(const Arguments& args)
{
	LOGD(TAG, "setRefreshing()");
	HandleScope scope;

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		return titanium::JSException::GetJNIEnvironmentError();
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(SwipeToRefreshProxy::javaClass, "setRefreshing", "(Z)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'setRefreshing' with signature '(Z)V'";
			LOGE(TAG, error);
				return titanium::JSException::Error(error);
		}
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(args.Holder());

	if (args.Length() < 1) {
		char errorStringBuffer[100];
		sprintf(errorStringBuffer, "setRefreshing: Invalid number of arguments. Expected 1 but got %d", args.Length());
		return ThrowException(Exception::Error(String::New(errorStringBuffer)));
	}

	jvalue jArguments[1];




	if (!args[0]->IsBoolean() && !args[0]->IsNull()) {
		const char *error = "Invalid value, expected type Boolean.";
		LOGE(TAG, error);
		return titanium::JSException::Error(error);
	}
	
	
	if (!args[0]->IsNull()) {
		Local<Boolean> arg_0 = args[0]->ToBoolean();
		jArguments[0].z =
			titanium::TypeConverter::jsBooleanToJavaBoolean(env, arg_0);
	} else {
		jArguments[0].z = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	if (!JavaObject::useGlobalRefs) {
		env->DeleteLocalRef(javaProxy);
	}



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException();
		env->ExceptionClear();
	}




	return v8::Undefined();

}

// Dynamic property accessors -------------------------------------------------

Handle<Value> SwipeToRefreshProxy::getter_refreshing(Local<String> property, const AccessorInfo& info)
{
	LOGD(TAG, "get refreshing");
	HandleScope scope;

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		return titanium::JSException::GetJNIEnvironmentError();
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(SwipeToRefreshProxy::javaClass, "isRefreshing", "()Z");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'isRefreshing' with signature '()Z'";
			LOGE(TAG, error);
				return titanium::JSException::Error(error);
		}
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(info.Holder());

	if (!proxy) {
		return Undefined();
	}

	jvalue* jArguments = 0;

	jobject javaProxy = proxy->getJavaObject();
	jboolean jResult = (jboolean)env->CallBooleanMethodA(javaProxy, methodID, jArguments);



	if (!JavaObject::useGlobalRefs) {
		env->DeleteLocalRef(javaProxy);
	}



	if (env->ExceptionCheck()) {
		Handle<Value> jsException = titanium::JSException::fromJavaException();
		env->ExceptionClear();
		return jsException;
	}


	Handle<Boolean> v8Result = titanium::TypeConverter::javaBooleanToJsBoolean(env, jResult);



	return v8Result;

}




			} // namespace swipetorefresh
		} // swipetorefresh
		} // leoleal
		} // com
		} // br
