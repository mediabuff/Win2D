﻿// C++/WinRT v1.0.170906.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Data.Html.1.h"

WINRT_EXPORT namespace winrt::Windows::Data::Html {

}

namespace winrt::impl {

}

WINRT_EXPORT namespace winrt::Windows::Data::Html {

struct HtmlUtilities
{
    HtmlUtilities() = delete;
    static hstring ConvertToText(param::hstring const& html);
};

}
