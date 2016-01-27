// **********************************************************************
//
// Copyright (c) 2003-2013 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************
//
// Ice version 3.5.1
//
// <auto-generated>
//
// Generated from file `VelodyneData.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

#ifndef ____VelodyneData_h__
#define ____VelodyneData_h__

#include <Ice/ProxyF.h>
#include <Ice/ObjectF.h>
#include <Ice/Exception.h>
#include <Ice/LocalObject.h>
#include <Ice/StreamHelpers.h>
#include <Ice/Proxy.h>
#include <Ice/Object.h>
#include <Ice/Outgoing.h>
#include <Ice/OutgoingAsync.h>
#include <Ice/Incoming.h>
#include <Ice/Direct.h>
#include <IceUtil/ScopedArray.h>
#include <IceUtil/Optional.h>
#include <Ice/StreamF.h>
#include <Ice/UndefSysMacros.h>

#ifndef ICE_IGNORE_VERSION
#   if ICE_INT_VERSION / 100 != 305
#       error Ice version mismatch!
#   endif
#   if ICE_INT_VERSION % 100 > 50
#       error Beta header file detected
#   endif
#   if ICE_INT_VERSION % 100 < 1
#       error Ice patch level mismatch!
#   endif
#endif

namespace IceProxy
{

namespace RoboCompVelodyneData
{

class VelodyneData;
void __read(::IceInternal::BasicStream*, ::IceInternal::ProxyHandle< ::IceProxy::RoboCompVelodyneData::VelodyneData>&);
::IceProxy::Ice::Object* upCast(::IceProxy::RoboCompVelodyneData::VelodyneData*);

}

}

namespace RoboCompVelodyneData
{

class VelodyneData;
bool operator==(const VelodyneData&, const VelodyneData&);
bool operator<(const VelodyneData&, const VelodyneData&);
::Ice::Object* upCast(::RoboCompVelodyneData::VelodyneData*);
typedef ::IceInternal::Handle< ::RoboCompVelodyneData::VelodyneData> VelodyneDataPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::RoboCompVelodyneData::VelodyneData> VelodyneDataPrx;
void __patch(VelodyneDataPtr&, const ::Ice::ObjectPtr&);

}

namespace RoboCompVelodyneData
{

struct personPose
{
    ::Ice::Int x;
    ::Ice::Int y;
    ::Ice::Int th;

    bool operator==(const personPose& __rhs) const
    {
        if(this == &__rhs)
        {
            return true;
        }
        if(x != __rhs.x)
        {
            return false;
        }
        if(y != __rhs.y)
        {
            return false;
        }
        if(th != __rhs.th)
        {
            return false;
        }
        return true;
    }

    bool operator<(const personPose& __rhs) const
    {
        if(this == &__rhs)
        {
            return false;
        }
        if(x < __rhs.x)
        {
            return true;
        }
        else if(__rhs.x < x)
        {
            return false;
        }
        if(y < __rhs.y)
        {
            return true;
        }
        else if(__rhs.y < y)
        {
            return false;
        }
        if(th < __rhs.th)
        {
            return true;
        }
        else if(__rhs.th < th)
        {
            return false;
        }
        return false;
    }

    bool operator!=(const personPose& __rhs) const
    {
        return !operator==(__rhs);
    }
    bool operator<=(const personPose& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const personPose& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const personPose& __rhs) const
    {
        return !operator<(__rhs);
    }
};

}

namespace Ice
{
template<>
struct StreamableTraits< ::RoboCompVelodyneData::personPose>
{
    static const StreamHelperCategory helper = StreamHelperCategoryStruct;
    static const int minWireSize = 12;
    static const bool fixedLength = true;
};

template<class S>
struct StreamWriter< ::RoboCompVelodyneData::personPose, S>
{
    static void write(S* __os, const ::RoboCompVelodyneData::personPose& v)
    {
        __os->write(v.x);
        __os->write(v.y);
        __os->write(v.th);
    }
};

template<class S>
struct StreamReader< ::RoboCompVelodyneData::personPose, S>
{
    static void read(S* __is, ::RoboCompVelodyneData::personPose& v)
    {
        __is->read(v.x);
        __is->read(v.y);
        __is->read(v.th);
    }
};

}

namespace RoboCompVelodyneData
{

class Callback_VelodyneData_personPosition_Base : virtual public ::IceInternal::CallbackBase { };
typedef ::IceUtil::Handle< Callback_VelodyneData_personPosition_Base> Callback_VelodyneData_personPositionPtr;

}

namespace IceProxy
{

namespace RoboCompVelodyneData
{

class VelodyneData : virtual public ::IceProxy::Ice::Object
{
public:

    void personPosition(const ::RoboCompVelodyneData::personPose& p)
    {
        personPosition(p, 0);
    }
    void personPosition(const ::RoboCompVelodyneData::personPose& p, const ::Ice::Context& __ctx)
    {
        personPosition(p, &__ctx);
    }
#ifdef ICE_CPP11
    ::Ice::AsyncResultPtr
    begin_personPosition(const ::RoboCompVelodyneData::personPose& p, const ::IceInternal::Function<void ()>& __response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& __exception = ::IceInternal::Function<void (const ::Ice::Exception&)>(), const ::IceInternal::Function<void (bool)>& __sent = ::IceInternal::Function<void (bool)>())
    {
        return begin_personPosition(p, 0, new ::IceInternal::Cpp11FnOnewayCallbackNC(__response, __exception, __sent));
    }
    ::Ice::AsyncResultPtr
    begin_personPosition(const ::RoboCompVelodyneData::personPose& p, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __completed, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __sent = ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>())
    {
        return begin_personPosition(p, 0, ::Ice::newCallback(__completed, __sent), 0);
    }
    ::Ice::AsyncResultPtr
    begin_personPosition(const ::RoboCompVelodyneData::personPose& p, const ::Ice::Context& __ctx, const ::IceInternal::Function<void ()>& __response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& __exception = ::IceInternal::Function<void (const ::Ice::Exception&)>(), const ::IceInternal::Function<void (bool)>& __sent = ::IceInternal::Function<void (bool)>())
    {
        return begin_personPosition(p, &__ctx, new ::IceInternal::Cpp11FnOnewayCallbackNC(__response, __exception, __sent), 0);
    }
    ::Ice::AsyncResultPtr
    begin_personPosition(const ::RoboCompVelodyneData::personPose& p, const ::Ice::Context& __ctx, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __completed, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __sent = ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>())
    {
        return begin_personPosition(p, &__ctx, ::Ice::newCallback(__completed, __sent));
    }
#endif

    ::Ice::AsyncResultPtr begin_personPosition(const ::RoboCompVelodyneData::personPose& p)
    {
        return begin_personPosition(p, 0, ::IceInternal::__dummyCallback, 0);
    }

    ::Ice::AsyncResultPtr begin_personPosition(const ::RoboCompVelodyneData::personPose& p, const ::Ice::Context& __ctx)
    {
        return begin_personPosition(p, &__ctx, ::IceInternal::__dummyCallback, 0);
    }

    ::Ice::AsyncResultPtr begin_personPosition(const ::RoboCompVelodyneData::personPose& p, const ::Ice::CallbackPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_personPosition(p, 0, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_personPosition(const ::RoboCompVelodyneData::personPose& p, const ::Ice::Context& __ctx, const ::Ice::CallbackPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_personPosition(p, &__ctx, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_personPosition(const ::RoboCompVelodyneData::personPose& p, const ::RoboCompVelodyneData::Callback_VelodyneData_personPositionPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_personPosition(p, 0, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_personPosition(const ::RoboCompVelodyneData::personPose& p, const ::Ice::Context& __ctx, const ::RoboCompVelodyneData::Callback_VelodyneData_personPositionPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_personPosition(p, &__ctx, __del, __cookie);
    }

    void end_personPosition(const ::Ice::AsyncResultPtr&);
    
private:

    void personPosition(const ::RoboCompVelodyneData::personPose&, const ::Ice::Context*);
    ::Ice::AsyncResultPtr begin_personPosition(const ::RoboCompVelodyneData::personPose&, const ::Ice::Context*, const ::IceInternal::CallbackBasePtr&, const ::Ice::LocalObjectPtr& __cookie = 0);
    
public:
    
    ::IceInternal::ProxyHandle<VelodyneData> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<VelodyneData*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<VelodyneData> ice_adapterId(const ::std::string& __id) const
    {
        return dynamic_cast<VelodyneData*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
    
    ::IceInternal::ProxyHandle<VelodyneData> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
        return dynamic_cast<VelodyneData*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    }
    
    ::IceInternal::ProxyHandle<VelodyneData> ice_locatorCacheTimeout(int __timeout) const
    {
        return dynamic_cast<VelodyneData*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    }
    
    ::IceInternal::ProxyHandle<VelodyneData> ice_connectionCached(bool __cached) const
    {
        return dynamic_cast<VelodyneData*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    }
    
    ::IceInternal::ProxyHandle<VelodyneData> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
        return dynamic_cast<VelodyneData*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    }
    
    ::IceInternal::ProxyHandle<VelodyneData> ice_secure(bool __secure) const
    {
        return dynamic_cast<VelodyneData*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
    ::IceInternal::ProxyHandle<VelodyneData> ice_preferSecure(bool __preferSecure) const
    {
        return dynamic_cast<VelodyneData*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    }
    
    ::IceInternal::ProxyHandle<VelodyneData> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<VelodyneData*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
    
    ::IceInternal::ProxyHandle<VelodyneData> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<VelodyneData*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<VelodyneData> ice_collocationOptimized(bool __co) const
    {
        return dynamic_cast<VelodyneData*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    }
    
    ::IceInternal::ProxyHandle<VelodyneData> ice_twoway() const
    {
        return dynamic_cast<VelodyneData*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<VelodyneData> ice_oneway() const
    {
        return dynamic_cast<VelodyneData*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<VelodyneData> ice_batchOneway() const
    {
        return dynamic_cast<VelodyneData*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<VelodyneData> ice_datagram() const
    {
        return dynamic_cast<VelodyneData*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<VelodyneData> ice_batchDatagram() const
    {
        return dynamic_cast<VelodyneData*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<VelodyneData> ice_compress(bool __compress) const
    {
        return dynamic_cast<VelodyneData*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    }
    
    ::IceInternal::ProxyHandle<VelodyneData> ice_timeout(int __timeout) const
    {
        return dynamic_cast<VelodyneData*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    ::IceInternal::ProxyHandle<VelodyneData> ice_connectionId(const ::std::string& __id) const
    {
        return dynamic_cast<VelodyneData*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    }
    
    ::IceInternal::ProxyHandle<VelodyneData> ice_encodingVersion(const ::Ice::EncodingVersion& __v) const
    {
        return dynamic_cast<VelodyneData*>(::IceProxy::Ice::Object::ice_encodingVersion(__v).get());
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

}

}

namespace IceDelegate
{

namespace RoboCompVelodyneData
{

class VelodyneData : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual void personPosition(const ::RoboCompVelodyneData::personPose&, const ::Ice::Context*, ::IceInternal::InvocationObserver&) = 0;
};

}

}

namespace IceDelegateM
{

namespace RoboCompVelodyneData
{

class VelodyneData : virtual public ::IceDelegate::RoboCompVelodyneData::VelodyneData,
                     virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual void personPosition(const ::RoboCompVelodyneData::personPose&, const ::Ice::Context*, ::IceInternal::InvocationObserver&);
};

}

}

namespace IceDelegateD
{

namespace RoboCompVelodyneData
{

class VelodyneData : virtual public ::IceDelegate::RoboCompVelodyneData::VelodyneData,
                     virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual void personPosition(const ::RoboCompVelodyneData::personPose&, const ::Ice::Context*, ::IceInternal::InvocationObserver&);
};

}

}

namespace RoboCompVelodyneData
{

class VelodyneData : virtual public ::Ice::Object
{
public:

    typedef VelodyneDataPrx ProxyType;
    typedef VelodyneDataPtr PointerType;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void personPosition(const ::RoboCompVelodyneData::personPose&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___personPosition(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

protected:
    virtual void __writeImpl(::IceInternal::BasicStream*) const;
    virtual void __readImpl(::IceInternal::BasicStream*);
    #ifdef __SUNPRO_CC
    using ::Ice::Object::__writeImpl;
    using ::Ice::Object::__readImpl;
    #endif
};

inline bool operator==(const VelodyneData& l, const VelodyneData& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

inline bool operator<(const VelodyneData& l, const VelodyneData& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

}

namespace RoboCompVelodyneData
{

template<class T>
class CallbackNC_VelodyneData_personPosition : public Callback_VelodyneData_personPosition_Base, public ::IceInternal::OnewayCallbackNC<T>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception&);
    typedef void (T::*Sent)(bool);
    typedef void (T::*Response)();

    CallbackNC_VelodyneData_personPosition(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::OnewayCallbackNC<T>(obj, cb, excb, sentcb)
    {
    }
};

template<class T> Callback_VelodyneData_personPositionPtr
newCallback_VelodyneData_personPosition(const IceUtil::Handle<T>& instance, void (T::*cb)(), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_VelodyneData_personPosition<T>(instance, cb, excb, sentcb);
}

template<class T> Callback_VelodyneData_personPositionPtr
newCallback_VelodyneData_personPosition(const IceUtil::Handle<T>& instance, void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_VelodyneData_personPosition<T>(instance, 0, excb, sentcb);
}

template<class T> Callback_VelodyneData_personPositionPtr
newCallback_VelodyneData_personPosition(T* instance, void (T::*cb)(), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_VelodyneData_personPosition<T>(instance, cb, excb, sentcb);
}

template<class T> Callback_VelodyneData_personPositionPtr
newCallback_VelodyneData_personPosition(T* instance, void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_VelodyneData_personPosition<T>(instance, 0, excb, sentcb);
}

template<class T, typename CT>
class Callback_VelodyneData_personPosition : public Callback_VelodyneData_personPosition_Base, public ::IceInternal::OnewayCallback<T, CT>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception& , const CT&);
    typedef void (T::*Sent)(bool , const CT&);
    typedef void (T::*Response)(const CT&);

    Callback_VelodyneData_personPosition(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::OnewayCallback<T, CT>(obj, cb, excb, sentcb)
    {
    }
};

template<class T, typename CT> Callback_VelodyneData_personPositionPtr
newCallback_VelodyneData_personPosition(const IceUtil::Handle<T>& instance, void (T::*cb)(const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_VelodyneData_personPosition<T, CT>(instance, cb, excb, sentcb);
}

template<class T, typename CT> Callback_VelodyneData_personPositionPtr
newCallback_VelodyneData_personPosition(const IceUtil::Handle<T>& instance, void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_VelodyneData_personPosition<T, CT>(instance, 0, excb, sentcb);
}

template<class T, typename CT> Callback_VelodyneData_personPositionPtr
newCallback_VelodyneData_personPosition(T* instance, void (T::*cb)(const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_VelodyneData_personPosition<T, CT>(instance, cb, excb, sentcb);
}

template<class T, typename CT> Callback_VelodyneData_personPositionPtr
newCallback_VelodyneData_personPosition(T* instance, void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_VelodyneData_personPosition<T, CT>(instance, 0, excb, sentcb);
}

}

#endif