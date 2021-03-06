﻿// C++/WinRT v1.0.170906.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Services.Cortana.1.h"

WINRT_EXPORT namespace winrt::Windows::Services::Cortana {

}

namespace winrt::impl {

}

WINRT_EXPORT namespace winrt::Windows::Services::Cortana {

struct WINRT_EBO CortanaPermissionsManager :
    Windows::Services::Cortana::ICortanaPermissionsManager
{
    CortanaPermissionsManager(std::nullptr_t) noexcept {}
    static Windows::Services::Cortana::CortanaPermissionsManager GetDefault();
};

}
