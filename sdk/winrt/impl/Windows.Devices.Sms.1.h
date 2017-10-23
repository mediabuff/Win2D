// C++/WinRT v1.0.170906.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.Devices.Sms.0.h"

WINRT_EXPORT namespace winrt::Windows::Devices::Sms {

struct WINRT_EBO ISmsAppMessage :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmsAppMessage>,
    impl::require<ISmsAppMessage, Windows::Devices::Sms::ISmsMessageBase>
{
    ISmsAppMessage(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISmsBroadcastMessage :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmsBroadcastMessage>,
    impl::require<ISmsBroadcastMessage, Windows::Devices::Sms::ISmsMessageBase>
{
    ISmsBroadcastMessage(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISmsDevice2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmsDevice2>
{
    ISmsDevice2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISmsDevice2Statics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmsDevice2Statics>
{
    ISmsDevice2Statics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISmsFilterRule :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmsFilterRule>
{
    ISmsFilterRule(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISmsFilterRuleFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmsFilterRuleFactory>
{
    ISmsFilterRuleFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISmsFilterRules :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmsFilterRules>
{
    ISmsFilterRules(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISmsFilterRulesFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmsFilterRulesFactory>
{
    ISmsFilterRulesFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISmsMessageBase :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmsMessageBase>
{
    ISmsMessageBase(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISmsMessageReceivedTriggerDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmsMessageReceivedTriggerDetails>
{
    ISmsMessageReceivedTriggerDetails(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISmsMessageRegistration :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmsMessageRegistration>
{
    ISmsMessageRegistration(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISmsMessageRegistrationStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmsMessageRegistrationStatics>
{
    ISmsMessageRegistrationStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISmsSendMessageResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmsSendMessageResult>
{
    ISmsSendMessageResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISmsStatusMessage :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmsStatusMessage>,
    impl::require<ISmsStatusMessage, Windows::Devices::Sms::ISmsMessageBase>
{
    ISmsStatusMessage(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISmsTextMessage2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmsTextMessage2>,
    impl::require<ISmsTextMessage2, Windows::Devices::Sms::ISmsMessageBase>
{
    ISmsTextMessage2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISmsVoicemailMessage :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmsVoicemailMessage>,
    impl::require<ISmsVoicemailMessage, Windows::Devices::Sms::ISmsMessageBase>
{
    ISmsVoicemailMessage(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISmsWapMessage :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmsWapMessage>,
    impl::require<ISmsWapMessage, Windows::Devices::Sms::ISmsMessageBase>
{
    ISmsWapMessage(std::nullptr_t = nullptr) noexcept {}
};

}
