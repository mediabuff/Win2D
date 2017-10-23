// C++/WinRT v1.0.170906.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Microsoft.Graphics.Canvas.UI.1.h"

WINRT_EXPORT namespace winrt::Microsoft::Graphics::Canvas::UI {

struct CanvasTimingInformation
{
    int64_t UpdateCount;
    Windows::Foundation::TimeSpan TotalTime;
    Windows::Foundation::TimeSpan ElapsedTime;
    bool IsRunningSlowly;
};

}

namespace winrt::impl {

template <> struct is_struct<Microsoft::Graphics::Canvas::UI::CanvasTimingInformation>
{
    static constexpr bool value{ true };
};

}

WINRT_EXPORT namespace winrt::Microsoft::Graphics::Canvas::UI {

struct WINRT_EBO CanvasCreateResourcesEventArgs :
    Microsoft::Graphics::Canvas::UI::ICanvasCreateResourcesEventArgs
{
    CanvasCreateResourcesEventArgs(std::nullptr_t) noexcept {}
    CanvasCreateResourcesEventArgs(Microsoft::Graphics::Canvas::UI::CanvasCreateResourcesReason const& createResourcesReason);
};

}
