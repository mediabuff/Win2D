// C++/WinRT v1.0.170906.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Microsoft.Graphics.Canvas.UI.0.h"

WINRT_EXPORT namespace winrt::Microsoft::Graphics::Canvas::UI {

struct WINRT_EBO ICanvasCreateResourcesEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICanvasCreateResourcesEventArgs>
{
    ICanvasCreateResourcesEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICanvasCreateResourcesEventArgsFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICanvasCreateResourcesEventArgsFactory>
{
    ICanvasCreateResourcesEventArgsFactory(std::nullptr_t = nullptr) noexcept {}
};

}
