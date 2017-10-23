﻿// C++/WinRT v1.0.170906.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Devices.Printers.Extensions.0.h"

WINRT_EXPORT namespace winrt::Windows::Devices::Printers::Extensions {

struct WINRT_EBO IPrint3DWorkflow :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrint3DWorkflow>
{
    IPrint3DWorkflow(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPrint3DWorkflow2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrint3DWorkflow2>
{
    IPrint3DWorkflow2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPrint3DWorkflowPrintRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrint3DWorkflowPrintRequestedEventArgs>
{
    IPrint3DWorkflowPrintRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPrint3DWorkflowPrinterChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrint3DWorkflowPrinterChangedEventArgs>
{
    IPrint3DWorkflowPrinterChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

}
