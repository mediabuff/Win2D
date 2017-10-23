// C++/WinRT v1.0.170906.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Microsoft.Graphics.Canvas.0.h"
#include "winrt/impl/Windows.UI.Composition.0.h"
#include "winrt/impl/Microsoft.Graphics.Canvas.UI.Composition.0.h"

WINRT_EXPORT namespace winrt::Microsoft::Graphics::Canvas::UI::Composition {

struct WINRT_EBO ICanvasCompositionStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICanvasCompositionStatics>
{
    ICanvasCompositionStatics(std::nullptr_t = nullptr) noexcept {}
};

}
