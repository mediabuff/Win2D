// C++/WinRT v1.0.170906.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Devices.Printers.Extensions.1.h"

WINRT_EXPORT namespace winrt::Windows::Devices::Printers::Extensions {

}

namespace winrt::impl {

}

WINRT_EXPORT namespace winrt::Windows::Devices::Printers::Extensions {

struct WINRT_EBO Print3DWorkflow :
    Windows::Devices::Printers::Extensions::IPrint3DWorkflow,
    impl::require<Print3DWorkflow, Windows::Devices::Printers::Extensions::IPrint3DWorkflow2>
{
    Print3DWorkflow(std::nullptr_t) noexcept {}
};

struct WINRT_EBO Print3DWorkflowPrintRequestedEventArgs :
    Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrintRequestedEventArgs
{
    Print3DWorkflowPrintRequestedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO Print3DWorkflowPrinterChangedEventArgs :
    Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrinterChangedEventArgs
{
    Print3DWorkflowPrinterChangedEventArgs(std::nullptr_t) noexcept {}
};

}
