// C++/WinRT v1.0.170906.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Microsoft.Graphics.Canvas.1.h"
#include "winrt/impl/Windows.UI.1.h"
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Microsoft.Graphics.Canvas.Brushes.1.h"
#include "winrt/impl/Windows.UI.2.h"

WINRT_EXPORT namespace winrt::Microsoft::Graphics::Canvas::Brushes {

struct CanvasGradientStop
{
    float Position;
    Windows::UI::Color Color;
};

struct CanvasGradientStopHdr
{
    float Position;
    Windows::Foundation::Numerics::float4 Color;
};

}

namespace winrt::impl {

template <> struct is_struct<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStop>
{
    static constexpr bool value{ true };
};

template <> struct is_struct<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStopHdr>
{
    static constexpr bool value{ true };
};

}

WINRT_EXPORT namespace winrt::Microsoft::Graphics::Canvas::Brushes {

struct WINRT_EBO CanvasImageBrush :
    Microsoft::Graphics::Canvas::Brushes::ICanvasImageBrush
{
    CanvasImageBrush(std::nullptr_t) noexcept {}
    CanvasImageBrush(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator);
    CanvasImageBrush(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Microsoft::Graphics::Canvas::ICanvasImage const& image);
};

struct WINRT_EBO CanvasLinearGradientBrush :
    Microsoft::Graphics::Canvas::Brushes::ICanvasLinearGradientBrush
{
    CanvasLinearGradientBrush(std::nullptr_t) noexcept {}
    CanvasLinearGradientBrush(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::UI::Color const& startColor, Windows::UI::Color const& endColor);
    CanvasLinearGradientBrush(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStop const> gradientStops);
    CanvasLinearGradientBrush(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStop const> gradientStops, Microsoft::Graphics::Canvas::CanvasEdgeBehavior const& edgeBehavior, Microsoft::Graphics::Canvas::CanvasAlphaMode const& alphaMode);
    CanvasLinearGradientBrush(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStop const> gradientStops, Microsoft::Graphics::Canvas::CanvasEdgeBehavior const& edgeBehavior, Microsoft::Graphics::Canvas::CanvasAlphaMode const& alphaMode, Microsoft::Graphics::Canvas::CanvasColorSpace const& preInterpolationSpace, Microsoft::Graphics::Canvas::CanvasColorSpace const& postInterpolationSpace, Microsoft::Graphics::Canvas::CanvasBufferPrecision const& bufferPrecision);
    static Microsoft::Graphics::Canvas::Brushes::CanvasLinearGradientBrush CreateHdr(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Foundation::Numerics::float4 const& startColorHdr, Windows::Foundation::Numerics::float4 const& endColorHdr);
    static Microsoft::Graphics::Canvas::Brushes::CanvasLinearGradientBrush CreateHdr(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStopHdr const> gradientStopsHdr);
    static Microsoft::Graphics::Canvas::Brushes::CanvasLinearGradientBrush CreateHdr(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStopHdr const> gradientStopsHdr, Microsoft::Graphics::Canvas::CanvasEdgeBehavior const& edgeBehavior, Microsoft::Graphics::Canvas::CanvasAlphaMode const& alphaMode);
    static Microsoft::Graphics::Canvas::Brushes::CanvasLinearGradientBrush CreateHdr(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStopHdr const> gradientStopsHdr, Microsoft::Graphics::Canvas::CanvasEdgeBehavior const& edgeBehavior, Microsoft::Graphics::Canvas::CanvasAlphaMode const& alphaMode, Microsoft::Graphics::Canvas::CanvasColorSpace const& preInterpolationSpace, Microsoft::Graphics::Canvas::CanvasColorSpace const& postInterpolationSpace, Microsoft::Graphics::Canvas::CanvasBufferPrecision const& bufferPrecision);
    static Microsoft::Graphics::Canvas::Brushes::CanvasLinearGradientBrush CreateRainbow(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, float eldritchness);
};

struct WINRT_EBO CanvasRadialGradientBrush :
    Microsoft::Graphics::Canvas::Brushes::ICanvasRadialGradientBrush
{
    CanvasRadialGradientBrush(std::nullptr_t) noexcept {}
    CanvasRadialGradientBrush(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::UI::Color const& startColor, Windows::UI::Color const& endColor);
    CanvasRadialGradientBrush(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStop const> gradientStops);
    CanvasRadialGradientBrush(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStop const> gradientStops, Microsoft::Graphics::Canvas::CanvasEdgeBehavior const& edgeBehavior, Microsoft::Graphics::Canvas::CanvasAlphaMode const& alphaMode);
    CanvasRadialGradientBrush(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStop const> gradientStops, Microsoft::Graphics::Canvas::CanvasEdgeBehavior const& edgeBehavior, Microsoft::Graphics::Canvas::CanvasAlphaMode const& alphaMode, Microsoft::Graphics::Canvas::CanvasColorSpace const& preInterpolationSpace, Microsoft::Graphics::Canvas::CanvasColorSpace const& postInterpolationSpace, Microsoft::Graphics::Canvas::CanvasBufferPrecision const& bufferPrecision);
    static Microsoft::Graphics::Canvas::Brushes::CanvasRadialGradientBrush CreateHdr(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Foundation::Numerics::float4 const& startColorHdr, Windows::Foundation::Numerics::float4 const& endColorHdr);
    static Microsoft::Graphics::Canvas::Brushes::CanvasRadialGradientBrush CreateHdr(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStopHdr const> gradientStops);
    static Microsoft::Graphics::Canvas::Brushes::CanvasRadialGradientBrush CreateHdr(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStopHdr const> gradientStops, Microsoft::Graphics::Canvas::CanvasEdgeBehavior const& edgeBehavior, Microsoft::Graphics::Canvas::CanvasAlphaMode const& alphaMode);
    static Microsoft::Graphics::Canvas::Brushes::CanvasRadialGradientBrush CreateHdr(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStopHdr const> gradientStops, Microsoft::Graphics::Canvas::CanvasEdgeBehavior const& edgeBehavior, Microsoft::Graphics::Canvas::CanvasAlphaMode const& alphaMode, Microsoft::Graphics::Canvas::CanvasColorSpace const& preInterpolationSpace, Microsoft::Graphics::Canvas::CanvasColorSpace const& postInterpolationSpace, Microsoft::Graphics::Canvas::CanvasBufferPrecision const& bufferPrecision);
    static Microsoft::Graphics::Canvas::Brushes::CanvasRadialGradientBrush CreateRainbow(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, float eldritchness);
};

struct WINRT_EBO CanvasSolidColorBrush :
    Microsoft::Graphics::Canvas::Brushes::ICanvasSolidColorBrush
{
    CanvasSolidColorBrush(std::nullptr_t) noexcept {}
    CanvasSolidColorBrush(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::UI::Color const& color);
    static Microsoft::Graphics::Canvas::Brushes::CanvasSolidColorBrush CreateHdr(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Foundation::Numerics::float4 const& colorHdr);
};

}
