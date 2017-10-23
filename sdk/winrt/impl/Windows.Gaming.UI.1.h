// C++/WinRT v1.0.170906.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Gaming.UI.0.h"

WINRT_EXPORT namespace winrt::Windows::Gaming::UI {

struct WINRT_EBO IGameBarStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGameBarStatics>
{
    IGameBarStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGameChatOverlay :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGameChatOverlay>
{
    IGameChatOverlay(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGameChatOverlayStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGameChatOverlayStatics>
{
    IGameChatOverlayStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGameMonitor :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGameMonitor>
{
    IGameMonitor(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGameMonitorStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGameMonitorStatics>
{
    IGameMonitorStatics(std::nullptr_t = nullptr) noexcept {}
};

}
