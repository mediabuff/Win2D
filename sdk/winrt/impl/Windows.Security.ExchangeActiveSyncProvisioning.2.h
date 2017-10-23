// C++/WinRT v1.0.170906.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Security.ExchangeActiveSyncProvisioning.1.h"

WINRT_EXPORT namespace winrt::Windows::Security::ExchangeActiveSyncProvisioning {

}

namespace winrt::impl {

}

WINRT_EXPORT namespace winrt::Windows::Security::ExchangeActiveSyncProvisioning {

struct WINRT_EBO EasClientDeviceInformation :
    Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation,
    impl::require<EasClientDeviceInformation, Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation2>
{
    EasClientDeviceInformation(std::nullptr_t) noexcept {}
    EasClientDeviceInformation();
};

}
