﻿// C++/WinRT v1.0.170906.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.System.0.h"
#include "winrt/impl/Windows.ApplicationModel.Calls.0.h"

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Calls {

struct WINRT_EBO ICallAnswerEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICallAnswerEventArgs>
{
    ICallAnswerEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICallRejectEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICallRejectEventArgs>
{
    ICallRejectEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICallStateChangeEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICallStateChangeEventArgs>
{
    ICallStateChangeEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMuteChangeEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMuteChangeEventArgs>
{
    IMuteChangeEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPhoneCallHistoryEntry :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneCallHistoryEntry>
{
    IPhoneCallHistoryEntry(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPhoneCallHistoryEntryAddress :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneCallHistoryEntryAddress>
{
    IPhoneCallHistoryEntryAddress(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPhoneCallHistoryEntryAddressFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneCallHistoryEntryAddressFactory>
{
    IPhoneCallHistoryEntryAddressFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPhoneCallHistoryEntryQueryOptions :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneCallHistoryEntryQueryOptions>
{
    IPhoneCallHistoryEntryQueryOptions(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPhoneCallHistoryEntryReader :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneCallHistoryEntryReader>
{
    IPhoneCallHistoryEntryReader(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPhoneCallHistoryManagerForUser :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneCallHistoryManagerForUser>
{
    IPhoneCallHistoryManagerForUser(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPhoneCallHistoryManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneCallHistoryManagerStatics>
{
    IPhoneCallHistoryManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPhoneCallHistoryManagerStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneCallHistoryManagerStatics2>
{
    IPhoneCallHistoryManagerStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPhoneCallHistoryStore :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneCallHistoryStore>
{
    IPhoneCallHistoryStore(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVoipCallCoordinator :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVoipCallCoordinator>
{
    IVoipCallCoordinator(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVoipCallCoordinator2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVoipCallCoordinator2>,
    impl::require<IVoipCallCoordinator2, Windows::ApplicationModel::Calls::IVoipCallCoordinator>
{
    IVoipCallCoordinator2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVoipCallCoordinatorStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVoipCallCoordinatorStatics>
{
    IVoipCallCoordinatorStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVoipPhoneCall :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVoipPhoneCall>
{
    IVoipPhoneCall(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVoipPhoneCall2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVoipPhoneCall2>,
    impl::require<IVoipPhoneCall2, Windows::ApplicationModel::Calls::IVoipPhoneCall>
{
    IVoipPhoneCall2(std::nullptr_t = nullptr) noexcept {}
};

}
