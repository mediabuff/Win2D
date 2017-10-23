// C++/WinRT v1.0.170906.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Security.ExchangeActiveSyncProvisioning.0.h"

WINRT_EXPORT namespace winrt::Windows::Security::ExchangeActiveSyncProvisioning {

struct WINRT_EBO IEasClientDeviceInformation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEasClientDeviceInformation>
{
    IEasClientDeviceInformation(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEasClientDeviceInformation2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEasClientDeviceInformation2>,
    impl::require<IEasClientDeviceInformation2, Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation>
{
    IEasClientDeviceInformation2(std::nullptr_t = nullptr) noexcept {}
};

}
