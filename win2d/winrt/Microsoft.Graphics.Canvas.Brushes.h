// C++/WinRT v1.0.170906.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH

static_assert(winrt::impl::make_constexpr_string(CPPWINRT_VERSION) == "1.0.170906.1", "Mismatched component and base headers.");
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Microsoft.Graphics.Canvas.2.h"
#include "winrt/impl/Windows.UI.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Microsoft.Graphics.Canvas.Brushes.2.h"
#include "winrt/Microsoft.Graphics.Canvas.h"

namespace winrt::impl {

template <typename D> float consume_Microsoft_Graphics_Canvas_Brushes_ICanvasBrush<D>::Opacity() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Brushes::ICanvasBrush)->get_Opacity(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Brushes_ICanvasBrush<D>::Opacity(float value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Brushes::ICanvasBrush)->put_Opacity(value));
}

template <typename D> Windows::Foundation::Numerics::float3x2 consume_Microsoft_Graphics_Canvas_Brushes_ICanvasBrush<D>::Transform() const
{
    Windows::Foundation::Numerics::float3x2 value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Brushes::ICanvasBrush)->get_Transform(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Brushes_ICanvasBrush<D>::Transform(Windows::Foundation::Numerics::float3x2 const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Brushes::ICanvasBrush)->put_Transform(get_abi(value)));
}

template <typename D> Microsoft::Graphics::Canvas::CanvasDevice consume_Microsoft_Graphics_Canvas_Brushes_ICanvasBrush<D>::Device() const
{
    Microsoft::Graphics::Canvas::CanvasDevice value{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Brushes::ICanvasBrush)->get_Device(put_abi(value)));
    return value;
}

template <typename D> Microsoft::Graphics::Canvas::ICanvasImage consume_Microsoft_Graphics_Canvas_Brushes_ICanvasImageBrush<D>::Image() const
{
    Microsoft::Graphics::Canvas::ICanvasImage value{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Brushes::ICanvasImageBrush)->get_Image(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Brushes_ICanvasImageBrush<D>::Image(Microsoft::Graphics::Canvas::ICanvasImage const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Brushes::ICanvasImageBrush)->put_Image(get_abi(value)));
}

template <typename D> Microsoft::Graphics::Canvas::CanvasEdgeBehavior consume_Microsoft_Graphics_Canvas_Brushes_ICanvasImageBrush<D>::ExtendX() const
{
    Microsoft::Graphics::Canvas::CanvasEdgeBehavior value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Brushes::ICanvasImageBrush)->get_ExtendX(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Brushes_ICanvasImageBrush<D>::ExtendX(Microsoft::Graphics::Canvas::CanvasEdgeBehavior const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Brushes::ICanvasImageBrush)->put_ExtendX(get_abi(value)));
}

template <typename D> Microsoft::Graphics::Canvas::CanvasEdgeBehavior consume_Microsoft_Graphics_Canvas_Brushes_ICanvasImageBrush<D>::ExtendY() const
{
    Microsoft::Graphics::Canvas::CanvasEdgeBehavior value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Brushes::ICanvasImageBrush)->get_ExtendY(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Brushes_ICanvasImageBrush<D>::ExtendY(Microsoft::Graphics::Canvas::CanvasEdgeBehavior const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Brushes::ICanvasImageBrush)->put_ExtendY(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::Rect> consume_Microsoft_Graphics_Canvas_Brushes_ICanvasImageBrush<D>::SourceRectangle() const
{
    Windows::Foundation::IReference<Windows::Foundation::Rect> value{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Brushes::ICanvasImageBrush)->get_SourceRectangle(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Brushes_ICanvasImageBrush<D>::SourceRectangle(optional<Windows::Foundation::Rect> const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Brushes::ICanvasImageBrush)->put_SourceRectangle(get_abi(value)));
}

template <typename D> Microsoft::Graphics::Canvas::CanvasImageInterpolation consume_Microsoft_Graphics_Canvas_Brushes_ICanvasImageBrush<D>::Interpolation() const
{
    Microsoft::Graphics::Canvas::CanvasImageInterpolation value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Brushes::ICanvasImageBrush)->get_Interpolation(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Brushes_ICanvasImageBrush<D>::Interpolation(Microsoft::Graphics::Canvas::CanvasImageInterpolation const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Brushes::ICanvasImageBrush)->put_Interpolation(get_abi(value)));
}

template <typename D> Microsoft::Graphics::Canvas::Brushes::CanvasImageBrush consume_Microsoft_Graphics_Canvas_Brushes_ICanvasImageBrushFactory<D>::Create(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator) const
{
    Microsoft::Graphics::Canvas::Brushes::CanvasImageBrush canvasImageBrush{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Brushes::ICanvasImageBrushFactory)->Create(get_abi(resourceCreator), put_abi(canvasImageBrush)));
    return canvasImageBrush;
}

template <typename D> Microsoft::Graphics::Canvas::Brushes::CanvasImageBrush consume_Microsoft_Graphics_Canvas_Brushes_ICanvasImageBrushFactory<D>::CreateWithImage(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Microsoft::Graphics::Canvas::ICanvasImage const& image) const
{
    Microsoft::Graphics::Canvas::Brushes::CanvasImageBrush canvasImageBrush{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Brushes::ICanvasImageBrushFactory)->CreateWithImage(get_abi(resourceCreator), get_abi(image), put_abi(canvasImageBrush)));
    return canvasImageBrush;
}

template <typename D> Windows::Foundation::Numerics::float2 consume_Microsoft_Graphics_Canvas_Brushes_ICanvasLinearGradientBrush<D>::StartPoint() const
{
    Windows::Foundation::Numerics::float2 value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Brushes::ICanvasLinearGradientBrush)->get_StartPoint(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Brushes_ICanvasLinearGradientBrush<D>::StartPoint(Windows::Foundation::Numerics::float2 const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Brushes::ICanvasLinearGradientBrush)->put_StartPoint(get_abi(value)));
}

template <typename D> Windows::Foundation::Numerics::float2 consume_Microsoft_Graphics_Canvas_Brushes_ICanvasLinearGradientBrush<D>::EndPoint() const
{
    Windows::Foundation::Numerics::float2 value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Brushes::ICanvasLinearGradientBrush)->get_EndPoint(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Brushes_ICanvasLinearGradientBrush<D>::EndPoint(Windows::Foundation::Numerics::float2 const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Brushes::ICanvasLinearGradientBrush)->put_EndPoint(get_abi(value)));
}

template <typename D> com_array<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStop> consume_Microsoft_Graphics_Canvas_Brushes_ICanvasLinearGradientBrush<D>::Stops() const
{
    com_array<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStop> valueElements;
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Brushes::ICanvasLinearGradientBrush)->get_Stops(impl::put_size_abi(valueElements), put_abi(valueElements)));
    return valueElements;
}

template <typename D> com_array<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStopHdr> consume_Microsoft_Graphics_Canvas_Brushes_ICanvasLinearGradientBrush<D>::StopsHdr() const
{
    com_array<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStopHdr> valueElements;
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Brushes::ICanvasLinearGradientBrush)->get_StopsHdr(impl::put_size_abi(valueElements), put_abi(valueElements)));
    return valueElements;
}

template <typename D> Microsoft::Graphics::Canvas::CanvasEdgeBehavior consume_Microsoft_Graphics_Canvas_Brushes_ICanvasLinearGradientBrush<D>::EdgeBehavior() const
{
    Microsoft::Graphics::Canvas::CanvasEdgeBehavior value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Brushes::ICanvasLinearGradientBrush)->get_EdgeBehavior(put_abi(value)));
    return value;
}

template <typename D> Microsoft::Graphics::Canvas::CanvasColorSpace consume_Microsoft_Graphics_Canvas_Brushes_ICanvasLinearGradientBrush<D>::PreInterpolationSpace() const
{
    Microsoft::Graphics::Canvas::CanvasColorSpace value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Brushes::ICanvasLinearGradientBrush)->get_PreInterpolationSpace(put_abi(value)));
    return value;
}

template <typename D> Microsoft::Graphics::Canvas::CanvasColorSpace consume_Microsoft_Graphics_Canvas_Brushes_ICanvasLinearGradientBrush<D>::PostInterpolationSpace() const
{
    Microsoft::Graphics::Canvas::CanvasColorSpace value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Brushes::ICanvasLinearGradientBrush)->get_PostInterpolationSpace(put_abi(value)));
    return value;
}

template <typename D> Microsoft::Graphics::Canvas::CanvasBufferPrecision consume_Microsoft_Graphics_Canvas_Brushes_ICanvasLinearGradientBrush<D>::BufferPrecision() const
{
    Microsoft::Graphics::Canvas::CanvasBufferPrecision value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Brushes::ICanvasLinearGradientBrush)->get_BufferPrecision(put_abi(value)));
    return value;
}

template <typename D> Microsoft::Graphics::Canvas::CanvasAlphaMode consume_Microsoft_Graphics_Canvas_Brushes_ICanvasLinearGradientBrush<D>::AlphaMode() const
{
    Microsoft::Graphics::Canvas::CanvasAlphaMode value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Brushes::ICanvasLinearGradientBrush)->get_AlphaMode(put_abi(value)));
    return value;
}

template <typename D> Microsoft::Graphics::Canvas::Brushes::CanvasLinearGradientBrush consume_Microsoft_Graphics_Canvas_Brushes_ICanvasLinearGradientBrushFactory<D>::CreateSimple(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::UI::Color const& startColor, Windows::UI::Color const& endColor) const
{
    Microsoft::Graphics::Canvas::Brushes::CanvasLinearGradientBrush canvasLinearGradientBrush{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Brushes::ICanvasLinearGradientBrushFactory)->CreateSimple(get_abi(resourceCreator), get_abi(startColor), get_abi(endColor), put_abi(canvasLinearGradientBrush)));
    return canvasLinearGradientBrush;
}

template <typename D> Microsoft::Graphics::Canvas::Brushes::CanvasLinearGradientBrush consume_Microsoft_Graphics_Canvas_Brushes_ICanvasLinearGradientBrushFactory<D>::CreateWithStops(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStop const> gradientStops) const
{
    Microsoft::Graphics::Canvas::Brushes::CanvasLinearGradientBrush canvasLinearGradientBrush{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Brushes::ICanvasLinearGradientBrushFactory)->CreateWithStops(get_abi(resourceCreator), gradientStops.size(), get_abi(gradientStops), put_abi(canvasLinearGradientBrush)));
    return canvasLinearGradientBrush;
}

template <typename D> Microsoft::Graphics::Canvas::Brushes::CanvasLinearGradientBrush consume_Microsoft_Graphics_Canvas_Brushes_ICanvasLinearGradientBrushFactory<D>::CreateWithEdgeBehaviorAndAlphaMode(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStop const> gradientStops, Microsoft::Graphics::Canvas::CanvasEdgeBehavior const& edgeBehavior, Microsoft::Graphics::Canvas::CanvasAlphaMode const& alphaMode) const
{
    Microsoft::Graphics::Canvas::Brushes::CanvasLinearGradientBrush canvasLinearGradientBrush{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Brushes::ICanvasLinearGradientBrushFactory)->CreateWithEdgeBehaviorAndAlphaMode(get_abi(resourceCreator), gradientStops.size(), get_abi(gradientStops), get_abi(edgeBehavior), get_abi(alphaMode), put_abi(canvasLinearGradientBrush)));
    return canvasLinearGradientBrush;
}

template <typename D> Microsoft::Graphics::Canvas::Brushes::CanvasLinearGradientBrush consume_Microsoft_Graphics_Canvas_Brushes_ICanvasLinearGradientBrushFactory<D>::CreateWithEdgeBehaviorAndInterpolationOptions(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStop const> gradientStops, Microsoft::Graphics::Canvas::CanvasEdgeBehavior const& edgeBehavior, Microsoft::Graphics::Canvas::CanvasAlphaMode const& alphaMode, Microsoft::Graphics::Canvas::CanvasColorSpace const& preInterpolationSpace, Microsoft::Graphics::Canvas::CanvasColorSpace const& postInterpolationSpace, Microsoft::Graphics::Canvas::CanvasBufferPrecision const& bufferPrecision) const
{
    Microsoft::Graphics::Canvas::Brushes::CanvasLinearGradientBrush canvasLinearGradientBrush{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Brushes::ICanvasLinearGradientBrushFactory)->CreateWithEdgeBehaviorAndInterpolationOptions(get_abi(resourceCreator), gradientStops.size(), get_abi(gradientStops), get_abi(edgeBehavior), get_abi(alphaMode), get_abi(preInterpolationSpace), get_abi(postInterpolationSpace), get_abi(bufferPrecision), put_abi(canvasLinearGradientBrush)));
    return canvasLinearGradientBrush;
}

template <typename D> Microsoft::Graphics::Canvas::Brushes::CanvasLinearGradientBrush consume_Microsoft_Graphics_Canvas_Brushes_ICanvasLinearGradientBrushStatics<D>::CreateHdr(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Foundation::Numerics::float4 const& startColorHdr, Windows::Foundation::Numerics::float4 const& endColorHdr) const
{
    Microsoft::Graphics::Canvas::Brushes::CanvasLinearGradientBrush canvasLinearGradientBrush{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Brushes::ICanvasLinearGradientBrushStatics)->CreateHdrSimple(get_abi(resourceCreator), get_abi(startColorHdr), get_abi(endColorHdr), put_abi(canvasLinearGradientBrush)));
    return canvasLinearGradientBrush;
}

template <typename D> Microsoft::Graphics::Canvas::Brushes::CanvasLinearGradientBrush consume_Microsoft_Graphics_Canvas_Brushes_ICanvasLinearGradientBrushStatics<D>::CreateHdr(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStopHdr const> gradientStopsHdr) const
{
    Microsoft::Graphics::Canvas::Brushes::CanvasLinearGradientBrush canvasLinearGradientBrush{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Brushes::ICanvasLinearGradientBrushStatics)->CreateHdrWithStops(get_abi(resourceCreator), gradientStopsHdr.size(), get_abi(gradientStopsHdr), put_abi(canvasLinearGradientBrush)));
    return canvasLinearGradientBrush;
}

template <typename D> Microsoft::Graphics::Canvas::Brushes::CanvasLinearGradientBrush consume_Microsoft_Graphics_Canvas_Brushes_ICanvasLinearGradientBrushStatics<D>::CreateHdr(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStopHdr const> gradientStopsHdr, Microsoft::Graphics::Canvas::CanvasEdgeBehavior const& edgeBehavior, Microsoft::Graphics::Canvas::CanvasAlphaMode const& alphaMode) const
{
    Microsoft::Graphics::Canvas::Brushes::CanvasLinearGradientBrush canvasLinearGradientBrush{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Brushes::ICanvasLinearGradientBrushStatics)->CreateHdrWithEdgeBehaviorAndAlphaMode(get_abi(resourceCreator), gradientStopsHdr.size(), get_abi(gradientStopsHdr), get_abi(edgeBehavior), get_abi(alphaMode), put_abi(canvasLinearGradientBrush)));
    return canvasLinearGradientBrush;
}

template <typename D> Microsoft::Graphics::Canvas::Brushes::CanvasLinearGradientBrush consume_Microsoft_Graphics_Canvas_Brushes_ICanvasLinearGradientBrushStatics<D>::CreateHdr(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStopHdr const> gradientStopsHdr, Microsoft::Graphics::Canvas::CanvasEdgeBehavior const& edgeBehavior, Microsoft::Graphics::Canvas::CanvasAlphaMode const& alphaMode, Microsoft::Graphics::Canvas::CanvasColorSpace const& preInterpolationSpace, Microsoft::Graphics::Canvas::CanvasColorSpace const& postInterpolationSpace, Microsoft::Graphics::Canvas::CanvasBufferPrecision const& bufferPrecision) const
{
    Microsoft::Graphics::Canvas::Brushes::CanvasLinearGradientBrush canvasLinearGradientBrush{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Brushes::ICanvasLinearGradientBrushStatics)->CreateHdrWithEdgeBehaviorAndInterpolationOptions(get_abi(resourceCreator), gradientStopsHdr.size(), get_abi(gradientStopsHdr), get_abi(edgeBehavior), get_abi(alphaMode), get_abi(preInterpolationSpace), get_abi(postInterpolationSpace), get_abi(bufferPrecision), put_abi(canvasLinearGradientBrush)));
    return canvasLinearGradientBrush;
}

template <typename D> Microsoft::Graphics::Canvas::Brushes::CanvasLinearGradientBrush consume_Microsoft_Graphics_Canvas_Brushes_ICanvasLinearGradientBrushStatics<D>::CreateRainbow(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, float eldritchness) const
{
    Microsoft::Graphics::Canvas::Brushes::CanvasLinearGradientBrush canvasLinearGradientBrush{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Brushes::ICanvasLinearGradientBrushStatics)->CreateRainbow(get_abi(resourceCreator), eldritchness, put_abi(canvasLinearGradientBrush)));
    return canvasLinearGradientBrush;
}

template <typename D> Windows::Foundation::Numerics::float2 consume_Microsoft_Graphics_Canvas_Brushes_ICanvasRadialGradientBrush<D>::Center() const
{
    Windows::Foundation::Numerics::float2 value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Brushes::ICanvasRadialGradientBrush)->get_Center(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Brushes_ICanvasRadialGradientBrush<D>::Center(Windows::Foundation::Numerics::float2 const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Brushes::ICanvasRadialGradientBrush)->put_Center(get_abi(value)));
}

template <typename D> Windows::Foundation::Numerics::float2 consume_Microsoft_Graphics_Canvas_Brushes_ICanvasRadialGradientBrush<D>::OriginOffset() const
{
    Windows::Foundation::Numerics::float2 value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Brushes::ICanvasRadialGradientBrush)->get_OriginOffset(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Brushes_ICanvasRadialGradientBrush<D>::OriginOffset(Windows::Foundation::Numerics::float2 const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Brushes::ICanvasRadialGradientBrush)->put_OriginOffset(get_abi(value)));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Brushes_ICanvasRadialGradientBrush<D>::RadiusX() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Brushes::ICanvasRadialGradientBrush)->get_RadiusX(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Brushes_ICanvasRadialGradientBrush<D>::RadiusX(float value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Brushes::ICanvasRadialGradientBrush)->put_RadiusX(value));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Brushes_ICanvasRadialGradientBrush<D>::RadiusY() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Brushes::ICanvasRadialGradientBrush)->get_RadiusY(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Brushes_ICanvasRadialGradientBrush<D>::RadiusY(float value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Brushes::ICanvasRadialGradientBrush)->put_RadiusY(value));
}

template <typename D> com_array<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStop> consume_Microsoft_Graphics_Canvas_Brushes_ICanvasRadialGradientBrush<D>::Stops() const
{
    com_array<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStop> valueElements;
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Brushes::ICanvasRadialGradientBrush)->get_Stops(impl::put_size_abi(valueElements), put_abi(valueElements)));
    return valueElements;
}

template <typename D> com_array<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStopHdr> consume_Microsoft_Graphics_Canvas_Brushes_ICanvasRadialGradientBrush<D>::StopsHdr() const
{
    com_array<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStopHdr> valueElements;
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Brushes::ICanvasRadialGradientBrush)->get_StopsHdr(impl::put_size_abi(valueElements), put_abi(valueElements)));
    return valueElements;
}

template <typename D> Microsoft::Graphics::Canvas::CanvasEdgeBehavior consume_Microsoft_Graphics_Canvas_Brushes_ICanvasRadialGradientBrush<D>::EdgeBehavior() const
{
    Microsoft::Graphics::Canvas::CanvasEdgeBehavior value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Brushes::ICanvasRadialGradientBrush)->get_EdgeBehavior(put_abi(value)));
    return value;
}

template <typename D> Microsoft::Graphics::Canvas::CanvasColorSpace consume_Microsoft_Graphics_Canvas_Brushes_ICanvasRadialGradientBrush<D>::PreInterpolationSpace() const
{
    Microsoft::Graphics::Canvas::CanvasColorSpace value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Brushes::ICanvasRadialGradientBrush)->get_PreInterpolationSpace(put_abi(value)));
    return value;
}

template <typename D> Microsoft::Graphics::Canvas::CanvasColorSpace consume_Microsoft_Graphics_Canvas_Brushes_ICanvasRadialGradientBrush<D>::PostInterpolationSpace() const
{
    Microsoft::Graphics::Canvas::CanvasColorSpace value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Brushes::ICanvasRadialGradientBrush)->get_PostInterpolationSpace(put_abi(value)));
    return value;
}

template <typename D> Microsoft::Graphics::Canvas::CanvasBufferPrecision consume_Microsoft_Graphics_Canvas_Brushes_ICanvasRadialGradientBrush<D>::BufferPrecision() const
{
    Microsoft::Graphics::Canvas::CanvasBufferPrecision value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Brushes::ICanvasRadialGradientBrush)->get_BufferPrecision(put_abi(value)));
    return value;
}

template <typename D> Microsoft::Graphics::Canvas::CanvasAlphaMode consume_Microsoft_Graphics_Canvas_Brushes_ICanvasRadialGradientBrush<D>::AlphaMode() const
{
    Microsoft::Graphics::Canvas::CanvasAlphaMode value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Brushes::ICanvasRadialGradientBrush)->get_AlphaMode(put_abi(value)));
    return value;
}

template <typename D> Microsoft::Graphics::Canvas::Brushes::CanvasRadialGradientBrush consume_Microsoft_Graphics_Canvas_Brushes_ICanvasRadialGradientBrushFactory<D>::CreateSimple(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::UI::Color const& startColor, Windows::UI::Color const& endColor) const
{
    Microsoft::Graphics::Canvas::Brushes::CanvasRadialGradientBrush canvasRadialGradientBrush{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Brushes::ICanvasRadialGradientBrushFactory)->CreateSimple(get_abi(resourceCreator), get_abi(startColor), get_abi(endColor), put_abi(canvasRadialGradientBrush)));
    return canvasRadialGradientBrush;
}

template <typename D> Microsoft::Graphics::Canvas::Brushes::CanvasRadialGradientBrush consume_Microsoft_Graphics_Canvas_Brushes_ICanvasRadialGradientBrushFactory<D>::CreateWithStops(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStop const> gradientStops) const
{
    Microsoft::Graphics::Canvas::Brushes::CanvasRadialGradientBrush canvasRadialGradientBrush{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Brushes::ICanvasRadialGradientBrushFactory)->CreateWithStops(get_abi(resourceCreator), gradientStops.size(), get_abi(gradientStops), put_abi(canvasRadialGradientBrush)));
    return canvasRadialGradientBrush;
}

template <typename D> Microsoft::Graphics::Canvas::Brushes::CanvasRadialGradientBrush consume_Microsoft_Graphics_Canvas_Brushes_ICanvasRadialGradientBrushFactory<D>::CreateWithEdgeBehaviorAndAlphaMode(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStop const> gradientStops, Microsoft::Graphics::Canvas::CanvasEdgeBehavior const& edgeBehavior, Microsoft::Graphics::Canvas::CanvasAlphaMode const& alphaMode) const
{
    Microsoft::Graphics::Canvas::Brushes::CanvasRadialGradientBrush canvasRadialGradientBrush{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Brushes::ICanvasRadialGradientBrushFactory)->CreateWithEdgeBehaviorAndAlphaMode(get_abi(resourceCreator), gradientStops.size(), get_abi(gradientStops), get_abi(edgeBehavior), get_abi(alphaMode), put_abi(canvasRadialGradientBrush)));
    return canvasRadialGradientBrush;
}

template <typename D> Microsoft::Graphics::Canvas::Brushes::CanvasRadialGradientBrush consume_Microsoft_Graphics_Canvas_Brushes_ICanvasRadialGradientBrushFactory<D>::CreateWithEdgeBehaviorAndInterpolationOptions(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStop const> gradientStops, Microsoft::Graphics::Canvas::CanvasEdgeBehavior const& edgeBehavior, Microsoft::Graphics::Canvas::CanvasAlphaMode const& alphaMode, Microsoft::Graphics::Canvas::CanvasColorSpace const& preInterpolationSpace, Microsoft::Graphics::Canvas::CanvasColorSpace const& postInterpolationSpace, Microsoft::Graphics::Canvas::CanvasBufferPrecision const& bufferPrecision) const
{
    Microsoft::Graphics::Canvas::Brushes::CanvasRadialGradientBrush canvasRadialGradientBrush{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Brushes::ICanvasRadialGradientBrushFactory)->CreateWithEdgeBehaviorAndInterpolationOptions(get_abi(resourceCreator), gradientStops.size(), get_abi(gradientStops), get_abi(edgeBehavior), get_abi(alphaMode), get_abi(preInterpolationSpace), get_abi(postInterpolationSpace), get_abi(bufferPrecision), put_abi(canvasRadialGradientBrush)));
    return canvasRadialGradientBrush;
}

template <typename D> Microsoft::Graphics::Canvas::Brushes::CanvasRadialGradientBrush consume_Microsoft_Graphics_Canvas_Brushes_ICanvasRadialGradientBrushStatics<D>::CreateHdr(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Foundation::Numerics::float4 const& startColorHdr, Windows::Foundation::Numerics::float4 const& endColorHdr) const
{
    Microsoft::Graphics::Canvas::Brushes::CanvasRadialGradientBrush canvasRadialGradientBrush{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Brushes::ICanvasRadialGradientBrushStatics)->CreateHdrSimple(get_abi(resourceCreator), get_abi(startColorHdr), get_abi(endColorHdr), put_abi(canvasRadialGradientBrush)));
    return canvasRadialGradientBrush;
}

template <typename D> Microsoft::Graphics::Canvas::Brushes::CanvasRadialGradientBrush consume_Microsoft_Graphics_Canvas_Brushes_ICanvasRadialGradientBrushStatics<D>::CreateHdr(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStopHdr const> gradientStops) const
{
    Microsoft::Graphics::Canvas::Brushes::CanvasRadialGradientBrush canvasRadialGradientBrush{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Brushes::ICanvasRadialGradientBrushStatics)->CreateHdrWithStops(get_abi(resourceCreator), gradientStops.size(), get_abi(gradientStops), put_abi(canvasRadialGradientBrush)));
    return canvasRadialGradientBrush;
}

template <typename D> Microsoft::Graphics::Canvas::Brushes::CanvasRadialGradientBrush consume_Microsoft_Graphics_Canvas_Brushes_ICanvasRadialGradientBrushStatics<D>::CreateHdr(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStopHdr const> gradientStops, Microsoft::Graphics::Canvas::CanvasEdgeBehavior const& edgeBehavior, Microsoft::Graphics::Canvas::CanvasAlphaMode const& alphaMode) const
{
    Microsoft::Graphics::Canvas::Brushes::CanvasRadialGradientBrush canvasRadialGradientBrush{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Brushes::ICanvasRadialGradientBrushStatics)->CreateHdrWithEdgeBehaviorAndAlphaMode(get_abi(resourceCreator), gradientStops.size(), get_abi(gradientStops), get_abi(edgeBehavior), get_abi(alphaMode), put_abi(canvasRadialGradientBrush)));
    return canvasRadialGradientBrush;
}

template <typename D> Microsoft::Graphics::Canvas::Brushes::CanvasRadialGradientBrush consume_Microsoft_Graphics_Canvas_Brushes_ICanvasRadialGradientBrushStatics<D>::CreateHdr(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStopHdr const> gradientStops, Microsoft::Graphics::Canvas::CanvasEdgeBehavior const& edgeBehavior, Microsoft::Graphics::Canvas::CanvasAlphaMode const& alphaMode, Microsoft::Graphics::Canvas::CanvasColorSpace const& preInterpolationSpace, Microsoft::Graphics::Canvas::CanvasColorSpace const& postInterpolationSpace, Microsoft::Graphics::Canvas::CanvasBufferPrecision const& bufferPrecision) const
{
    Microsoft::Graphics::Canvas::Brushes::CanvasRadialGradientBrush canvasRadialGradientBrush{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Brushes::ICanvasRadialGradientBrushStatics)->CreateHdrWithEdgeBehaviorAndInterpolationOptions(get_abi(resourceCreator), gradientStops.size(), get_abi(gradientStops), get_abi(edgeBehavior), get_abi(alphaMode), get_abi(preInterpolationSpace), get_abi(postInterpolationSpace), get_abi(bufferPrecision), put_abi(canvasRadialGradientBrush)));
    return canvasRadialGradientBrush;
}

template <typename D> Microsoft::Graphics::Canvas::Brushes::CanvasRadialGradientBrush consume_Microsoft_Graphics_Canvas_Brushes_ICanvasRadialGradientBrushStatics<D>::CreateRainbow(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, float eldritchness) const
{
    Microsoft::Graphics::Canvas::Brushes::CanvasRadialGradientBrush canvasRadialGradientBrush{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Brushes::ICanvasRadialGradientBrushStatics)->CreateRainbow(get_abi(resourceCreator), eldritchness, put_abi(canvasRadialGradientBrush)));
    return canvasRadialGradientBrush;
}

template <typename D> Windows::UI::Color consume_Microsoft_Graphics_Canvas_Brushes_ICanvasSolidColorBrush<D>::Color() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Brushes::ICanvasSolidColorBrush)->get_Color(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Brushes_ICanvasSolidColorBrush<D>::Color(Windows::UI::Color const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Brushes::ICanvasSolidColorBrush)->put_Color(get_abi(value)));
}

template <typename D> Windows::Foundation::Numerics::float4 consume_Microsoft_Graphics_Canvas_Brushes_ICanvasSolidColorBrush<D>::ColorHdr() const
{
    Windows::Foundation::Numerics::float4 value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Brushes::ICanvasSolidColorBrush)->get_ColorHdr(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Brushes_ICanvasSolidColorBrush<D>::ColorHdr(Windows::Foundation::Numerics::float4 const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Brushes::ICanvasSolidColorBrush)->put_ColorHdr(get_abi(value)));
}

template <typename D> Microsoft::Graphics::Canvas::Brushes::CanvasSolidColorBrush consume_Microsoft_Graphics_Canvas_Brushes_ICanvasSolidColorBrushFactory<D>::Create(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::UI::Color const& color) const
{
    Microsoft::Graphics::Canvas::Brushes::CanvasSolidColorBrush canvasSolidColorBrush{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Brushes::ICanvasSolidColorBrushFactory)->Create(get_abi(resourceCreator), get_abi(color), put_abi(canvasSolidColorBrush)));
    return canvasSolidColorBrush;
}

template <typename D> Microsoft::Graphics::Canvas::Brushes::CanvasSolidColorBrush consume_Microsoft_Graphics_Canvas_Brushes_ICanvasSolidColorBrushStatics<D>::CreateHdr(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Foundation::Numerics::float4 const& colorHdr) const
{
    Microsoft::Graphics::Canvas::Brushes::CanvasSolidColorBrush canvasSolidColorBrush{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Brushes::ICanvasSolidColorBrushStatics)->CreateHdr(get_abi(resourceCreator), get_abi(colorHdr), put_abi(canvasSolidColorBrush)));
    return canvasSolidColorBrush;
}

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush> : produce_base<D, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush>
{
    HRESULT __stdcall get_Opacity(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Opacity());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Opacity(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Opacity(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Transform(Windows::Foundation::Numerics::float3x2* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Transform());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Transform(Windows::Foundation::Numerics::float3x2 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Transform(*reinterpret_cast<Windows::Foundation::Numerics::float3x2 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Device(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Device());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Brushes::ICanvasImageBrush> : produce_base<D, Microsoft::Graphics::Canvas::Brushes::ICanvasImageBrush>
{
    HRESULT __stdcall get_Image(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Image());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Image(::IUnknown* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Image(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasImage const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExtendX(Microsoft::Graphics::Canvas::CanvasEdgeBehavior* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ExtendX());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ExtendX(Microsoft::Graphics::Canvas::CanvasEdgeBehavior value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ExtendX(*reinterpret_cast<Microsoft::Graphics::Canvas::CanvasEdgeBehavior const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExtendY(Microsoft::Graphics::Canvas::CanvasEdgeBehavior* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ExtendY());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ExtendY(Microsoft::Graphics::Canvas::CanvasEdgeBehavior value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ExtendY(*reinterpret_cast<Microsoft::Graphics::Canvas::CanvasEdgeBehavior const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SourceRectangle(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SourceRectangle());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SourceRectangle(::IUnknown* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SourceRectangle(*reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::Rect> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Interpolation(Microsoft::Graphics::Canvas::CanvasImageInterpolation* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Interpolation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Interpolation(Microsoft::Graphics::Canvas::CanvasImageInterpolation value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Interpolation(*reinterpret_cast<Microsoft::Graphics::Canvas::CanvasImageInterpolation const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Brushes::ICanvasImageBrushFactory> : produce_base<D, Microsoft::Graphics::Canvas::Brushes::ICanvasImageBrushFactory>
{
    HRESULT __stdcall Create(::IUnknown* resourceCreator, ::IUnknown** canvasImageBrush) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *canvasImageBrush = detach_abi(this->shim().Create(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator)));
            return S_OK;
        }
        catch (...)
        {
            *canvasImageBrush = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateWithImage(::IUnknown* resourceCreator, ::IUnknown* image, ::IUnknown** canvasImageBrush) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *canvasImageBrush = detach_abi(this->shim().CreateWithImage(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator), *reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasImage const*>(&image)));
            return S_OK;
        }
        catch (...)
        {
            *canvasImageBrush = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Brushes::ICanvasLinearGradientBrush> : produce_base<D, Microsoft::Graphics::Canvas::Brushes::ICanvasLinearGradientBrush>
{
    HRESULT __stdcall get_StartPoint(Windows::Foundation::Numerics::float2* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StartPoint());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_StartPoint(Windows::Foundation::Numerics::float2 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartPoint(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EndPoint(Windows::Foundation::Numerics::float2* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EndPoint());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_EndPoint(Windows::Foundation::Numerics::float2 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EndPoint(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Stops(uint32_t* __valueElementsSize, struct_of<8>** valueElements) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            std::tie(*__valueElementsSize, *valueElements) = detach_abi(this->shim().Stops());
            return S_OK;
        }
        catch (...)
        {
            *__valueElementsSize = 0;
            *valueElements = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StopsHdr(uint32_t* __valueElementsSize, struct_of<20>** valueElements) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            std::tie(*__valueElementsSize, *valueElements) = detach_abi(this->shim().StopsHdr());
            return S_OK;
        }
        catch (...)
        {
            *__valueElementsSize = 0;
            *valueElements = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EdgeBehavior(Microsoft::Graphics::Canvas::CanvasEdgeBehavior* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EdgeBehavior());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PreInterpolationSpace(Microsoft::Graphics::Canvas::CanvasColorSpace* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PreInterpolationSpace());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PostInterpolationSpace(Microsoft::Graphics::Canvas::CanvasColorSpace* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PostInterpolationSpace());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BufferPrecision(Microsoft::Graphics::Canvas::CanvasBufferPrecision* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BufferPrecision());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AlphaMode(Microsoft::Graphics::Canvas::CanvasAlphaMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AlphaMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Brushes::ICanvasLinearGradientBrushFactory> : produce_base<D, Microsoft::Graphics::Canvas::Brushes::ICanvasLinearGradientBrushFactory>
{
    HRESULT __stdcall CreateSimple(::IUnknown* resourceCreator, struct_of<4> startColor, struct_of<4> endColor, ::IUnknown** canvasLinearGradientBrush) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *canvasLinearGradientBrush = detach_abi(this->shim().CreateSimple(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator), *reinterpret_cast<Windows::UI::Color const*>(&startColor), *reinterpret_cast<Windows::UI::Color const*>(&endColor)));
            return S_OK;
        }
        catch (...)
        {
            *canvasLinearGradientBrush = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateWithStops(::IUnknown* resourceCreator, uint32_t __gradientStopsSize, struct_of<8>* gradientStops, ::IUnknown** canvasLinearGradientBrush) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *canvasLinearGradientBrush = detach_abi(this->shim().CreateWithStops(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator), array_view<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStop const>(reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStop const *>(gradientStops), reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStop const *>(gradientStops) + __gradientStopsSize)));
            return S_OK;
        }
        catch (...)
        {
            *canvasLinearGradientBrush = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateWithEdgeBehaviorAndAlphaMode(::IUnknown* resourceCreator, uint32_t __gradientStopsSize, struct_of<8>* gradientStops, Microsoft::Graphics::Canvas::CanvasEdgeBehavior edgeBehavior, Microsoft::Graphics::Canvas::CanvasAlphaMode alphaMode, ::IUnknown** canvasLinearGradientBrush) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *canvasLinearGradientBrush = detach_abi(this->shim().CreateWithEdgeBehaviorAndAlphaMode(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator), array_view<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStop const>(reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStop const *>(gradientStops), reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStop const *>(gradientStops) + __gradientStopsSize), *reinterpret_cast<Microsoft::Graphics::Canvas::CanvasEdgeBehavior const*>(&edgeBehavior), *reinterpret_cast<Microsoft::Graphics::Canvas::CanvasAlphaMode const*>(&alphaMode)));
            return S_OK;
        }
        catch (...)
        {
            *canvasLinearGradientBrush = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateWithEdgeBehaviorAndInterpolationOptions(::IUnknown* resourceCreator, uint32_t __gradientStopsSize, struct_of<8>* gradientStops, Microsoft::Graphics::Canvas::CanvasEdgeBehavior edgeBehavior, Microsoft::Graphics::Canvas::CanvasAlphaMode alphaMode, Microsoft::Graphics::Canvas::CanvasColorSpace preInterpolationSpace, Microsoft::Graphics::Canvas::CanvasColorSpace postInterpolationSpace, Microsoft::Graphics::Canvas::CanvasBufferPrecision bufferPrecision, ::IUnknown** canvasLinearGradientBrush) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *canvasLinearGradientBrush = detach_abi(this->shim().CreateWithEdgeBehaviorAndInterpolationOptions(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator), array_view<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStop const>(reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStop const *>(gradientStops), reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStop const *>(gradientStops) + __gradientStopsSize), *reinterpret_cast<Microsoft::Graphics::Canvas::CanvasEdgeBehavior const*>(&edgeBehavior), *reinterpret_cast<Microsoft::Graphics::Canvas::CanvasAlphaMode const*>(&alphaMode), *reinterpret_cast<Microsoft::Graphics::Canvas::CanvasColorSpace const*>(&preInterpolationSpace), *reinterpret_cast<Microsoft::Graphics::Canvas::CanvasColorSpace const*>(&postInterpolationSpace), *reinterpret_cast<Microsoft::Graphics::Canvas::CanvasBufferPrecision const*>(&bufferPrecision)));
            return S_OK;
        }
        catch (...)
        {
            *canvasLinearGradientBrush = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Brushes::ICanvasLinearGradientBrushStatics> : produce_base<D, Microsoft::Graphics::Canvas::Brushes::ICanvasLinearGradientBrushStatics>
{
    HRESULT __stdcall CreateHdrSimple(::IUnknown* resourceCreator, Windows::Foundation::Numerics::float4 startColorHdr, Windows::Foundation::Numerics::float4 endColorHdr, ::IUnknown** canvasLinearGradientBrush) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *canvasLinearGradientBrush = detach_abi(this->shim().CreateHdr(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator), *reinterpret_cast<Windows::Foundation::Numerics::float4 const*>(&startColorHdr), *reinterpret_cast<Windows::Foundation::Numerics::float4 const*>(&endColorHdr)));
            return S_OK;
        }
        catch (...)
        {
            *canvasLinearGradientBrush = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateHdrWithStops(::IUnknown* resourceCreator, uint32_t __gradientStopsHdrSize, struct_of<20>* gradientStopsHdr, ::IUnknown** canvasLinearGradientBrush) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *canvasLinearGradientBrush = detach_abi(this->shim().CreateHdr(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator), array_view<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStopHdr const>(reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStopHdr const *>(gradientStopsHdr), reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStopHdr const *>(gradientStopsHdr) + __gradientStopsHdrSize)));
            return S_OK;
        }
        catch (...)
        {
            *canvasLinearGradientBrush = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateHdrWithEdgeBehaviorAndAlphaMode(::IUnknown* resourceCreator, uint32_t __gradientStopsHdrSize, struct_of<20>* gradientStopsHdr, Microsoft::Graphics::Canvas::CanvasEdgeBehavior edgeBehavior, Microsoft::Graphics::Canvas::CanvasAlphaMode alphaMode, ::IUnknown** canvasLinearGradientBrush) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *canvasLinearGradientBrush = detach_abi(this->shim().CreateHdr(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator), array_view<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStopHdr const>(reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStopHdr const *>(gradientStopsHdr), reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStopHdr const *>(gradientStopsHdr) + __gradientStopsHdrSize), *reinterpret_cast<Microsoft::Graphics::Canvas::CanvasEdgeBehavior const*>(&edgeBehavior), *reinterpret_cast<Microsoft::Graphics::Canvas::CanvasAlphaMode const*>(&alphaMode)));
            return S_OK;
        }
        catch (...)
        {
            *canvasLinearGradientBrush = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateHdrWithEdgeBehaviorAndInterpolationOptions(::IUnknown* resourceCreator, uint32_t __gradientStopsHdrSize, struct_of<20>* gradientStopsHdr, Microsoft::Graphics::Canvas::CanvasEdgeBehavior edgeBehavior, Microsoft::Graphics::Canvas::CanvasAlphaMode alphaMode, Microsoft::Graphics::Canvas::CanvasColorSpace preInterpolationSpace, Microsoft::Graphics::Canvas::CanvasColorSpace postInterpolationSpace, Microsoft::Graphics::Canvas::CanvasBufferPrecision bufferPrecision, ::IUnknown** canvasLinearGradientBrush) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *canvasLinearGradientBrush = detach_abi(this->shim().CreateHdr(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator), array_view<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStopHdr const>(reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStopHdr const *>(gradientStopsHdr), reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStopHdr const *>(gradientStopsHdr) + __gradientStopsHdrSize), *reinterpret_cast<Microsoft::Graphics::Canvas::CanvasEdgeBehavior const*>(&edgeBehavior), *reinterpret_cast<Microsoft::Graphics::Canvas::CanvasAlphaMode const*>(&alphaMode), *reinterpret_cast<Microsoft::Graphics::Canvas::CanvasColorSpace const*>(&preInterpolationSpace), *reinterpret_cast<Microsoft::Graphics::Canvas::CanvasColorSpace const*>(&postInterpolationSpace), *reinterpret_cast<Microsoft::Graphics::Canvas::CanvasBufferPrecision const*>(&bufferPrecision)));
            return S_OK;
        }
        catch (...)
        {
            *canvasLinearGradientBrush = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateRainbow(::IUnknown* resourceCreator, float eldritchness, ::IUnknown** canvasLinearGradientBrush) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *canvasLinearGradientBrush = detach_abi(this->shim().CreateRainbow(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator), eldritchness));
            return S_OK;
        }
        catch (...)
        {
            *canvasLinearGradientBrush = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Brushes::ICanvasRadialGradientBrush> : produce_base<D, Microsoft::Graphics::Canvas::Brushes::ICanvasRadialGradientBrush>
{
    HRESULT __stdcall get_Center(Windows::Foundation::Numerics::float2* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Center());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Center(Windows::Foundation::Numerics::float2 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Center(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OriginOffset(Windows::Foundation::Numerics::float2* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OriginOffset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_OriginOffset(Windows::Foundation::Numerics::float2 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OriginOffset(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RadiusX(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RadiusX());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RadiusX(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RadiusX(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RadiusY(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RadiusY());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RadiusY(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RadiusY(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Stops(uint32_t* __valueElementsSize, struct_of<8>** valueElements) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            std::tie(*__valueElementsSize, *valueElements) = detach_abi(this->shim().Stops());
            return S_OK;
        }
        catch (...)
        {
            *__valueElementsSize = 0;
            *valueElements = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StopsHdr(uint32_t* __valueElementsSize, struct_of<20>** valueElements) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            std::tie(*__valueElementsSize, *valueElements) = detach_abi(this->shim().StopsHdr());
            return S_OK;
        }
        catch (...)
        {
            *__valueElementsSize = 0;
            *valueElements = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EdgeBehavior(Microsoft::Graphics::Canvas::CanvasEdgeBehavior* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EdgeBehavior());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PreInterpolationSpace(Microsoft::Graphics::Canvas::CanvasColorSpace* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PreInterpolationSpace());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PostInterpolationSpace(Microsoft::Graphics::Canvas::CanvasColorSpace* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PostInterpolationSpace());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BufferPrecision(Microsoft::Graphics::Canvas::CanvasBufferPrecision* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BufferPrecision());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AlphaMode(Microsoft::Graphics::Canvas::CanvasAlphaMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AlphaMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Brushes::ICanvasRadialGradientBrushFactory> : produce_base<D, Microsoft::Graphics::Canvas::Brushes::ICanvasRadialGradientBrushFactory>
{
    HRESULT __stdcall CreateSimple(::IUnknown* resourceCreator, struct_of<4> startColor, struct_of<4> endColor, ::IUnknown** canvasRadialGradientBrush) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *canvasRadialGradientBrush = detach_abi(this->shim().CreateSimple(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator), *reinterpret_cast<Windows::UI::Color const*>(&startColor), *reinterpret_cast<Windows::UI::Color const*>(&endColor)));
            return S_OK;
        }
        catch (...)
        {
            *canvasRadialGradientBrush = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateWithStops(::IUnknown* resourceCreator, uint32_t __gradientStopsSize, struct_of<8>* gradientStops, ::IUnknown** canvasRadialGradientBrush) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *canvasRadialGradientBrush = detach_abi(this->shim().CreateWithStops(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator), array_view<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStop const>(reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStop const *>(gradientStops), reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStop const *>(gradientStops) + __gradientStopsSize)));
            return S_OK;
        }
        catch (...)
        {
            *canvasRadialGradientBrush = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateWithEdgeBehaviorAndAlphaMode(::IUnknown* resourceCreator, uint32_t __gradientStopsSize, struct_of<8>* gradientStops, Microsoft::Graphics::Canvas::CanvasEdgeBehavior edgeBehavior, Microsoft::Graphics::Canvas::CanvasAlphaMode alphaMode, ::IUnknown** canvasRadialGradientBrush) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *canvasRadialGradientBrush = detach_abi(this->shim().CreateWithEdgeBehaviorAndAlphaMode(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator), array_view<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStop const>(reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStop const *>(gradientStops), reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStop const *>(gradientStops) + __gradientStopsSize), *reinterpret_cast<Microsoft::Graphics::Canvas::CanvasEdgeBehavior const*>(&edgeBehavior), *reinterpret_cast<Microsoft::Graphics::Canvas::CanvasAlphaMode const*>(&alphaMode)));
            return S_OK;
        }
        catch (...)
        {
            *canvasRadialGradientBrush = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateWithEdgeBehaviorAndInterpolationOptions(::IUnknown* resourceCreator, uint32_t __gradientStopsSize, struct_of<8>* gradientStops, Microsoft::Graphics::Canvas::CanvasEdgeBehavior edgeBehavior, Microsoft::Graphics::Canvas::CanvasAlphaMode alphaMode, Microsoft::Graphics::Canvas::CanvasColorSpace preInterpolationSpace, Microsoft::Graphics::Canvas::CanvasColorSpace postInterpolationSpace, Microsoft::Graphics::Canvas::CanvasBufferPrecision bufferPrecision, ::IUnknown** canvasRadialGradientBrush) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *canvasRadialGradientBrush = detach_abi(this->shim().CreateWithEdgeBehaviorAndInterpolationOptions(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator), array_view<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStop const>(reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStop const *>(gradientStops), reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStop const *>(gradientStops) + __gradientStopsSize), *reinterpret_cast<Microsoft::Graphics::Canvas::CanvasEdgeBehavior const*>(&edgeBehavior), *reinterpret_cast<Microsoft::Graphics::Canvas::CanvasAlphaMode const*>(&alphaMode), *reinterpret_cast<Microsoft::Graphics::Canvas::CanvasColorSpace const*>(&preInterpolationSpace), *reinterpret_cast<Microsoft::Graphics::Canvas::CanvasColorSpace const*>(&postInterpolationSpace), *reinterpret_cast<Microsoft::Graphics::Canvas::CanvasBufferPrecision const*>(&bufferPrecision)));
            return S_OK;
        }
        catch (...)
        {
            *canvasRadialGradientBrush = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Brushes::ICanvasRadialGradientBrushStatics> : produce_base<D, Microsoft::Graphics::Canvas::Brushes::ICanvasRadialGradientBrushStatics>
{
    HRESULT __stdcall CreateHdrSimple(::IUnknown* resourceCreator, Windows::Foundation::Numerics::float4 startColorHdr, Windows::Foundation::Numerics::float4 endColorHdr, ::IUnknown** canvasRadialGradientBrush) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *canvasRadialGradientBrush = detach_abi(this->shim().CreateHdr(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator), *reinterpret_cast<Windows::Foundation::Numerics::float4 const*>(&startColorHdr), *reinterpret_cast<Windows::Foundation::Numerics::float4 const*>(&endColorHdr)));
            return S_OK;
        }
        catch (...)
        {
            *canvasRadialGradientBrush = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateHdrWithStops(::IUnknown* resourceCreator, uint32_t __gradientStopsSize, struct_of<20>* gradientStops, ::IUnknown** canvasRadialGradientBrush) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *canvasRadialGradientBrush = detach_abi(this->shim().CreateHdr(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator), array_view<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStopHdr const>(reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStopHdr const *>(gradientStops), reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStopHdr const *>(gradientStops) + __gradientStopsSize)));
            return S_OK;
        }
        catch (...)
        {
            *canvasRadialGradientBrush = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateHdrWithEdgeBehaviorAndAlphaMode(::IUnknown* resourceCreator, uint32_t __gradientStopsSize, struct_of<20>* gradientStops, Microsoft::Graphics::Canvas::CanvasEdgeBehavior edgeBehavior, Microsoft::Graphics::Canvas::CanvasAlphaMode alphaMode, ::IUnknown** canvasRadialGradientBrush) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *canvasRadialGradientBrush = detach_abi(this->shim().CreateHdr(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator), array_view<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStopHdr const>(reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStopHdr const *>(gradientStops), reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStopHdr const *>(gradientStops) + __gradientStopsSize), *reinterpret_cast<Microsoft::Graphics::Canvas::CanvasEdgeBehavior const*>(&edgeBehavior), *reinterpret_cast<Microsoft::Graphics::Canvas::CanvasAlphaMode const*>(&alphaMode)));
            return S_OK;
        }
        catch (...)
        {
            *canvasRadialGradientBrush = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateHdrWithEdgeBehaviorAndInterpolationOptions(::IUnknown* resourceCreator, uint32_t __gradientStopsSize, struct_of<20>* gradientStops, Microsoft::Graphics::Canvas::CanvasEdgeBehavior edgeBehavior, Microsoft::Graphics::Canvas::CanvasAlphaMode alphaMode, Microsoft::Graphics::Canvas::CanvasColorSpace preInterpolationSpace, Microsoft::Graphics::Canvas::CanvasColorSpace postInterpolationSpace, Microsoft::Graphics::Canvas::CanvasBufferPrecision bufferPrecision, ::IUnknown** canvasRadialGradientBrush) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *canvasRadialGradientBrush = detach_abi(this->shim().CreateHdr(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator), array_view<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStopHdr const>(reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStopHdr const *>(gradientStops), reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStopHdr const *>(gradientStops) + __gradientStopsSize), *reinterpret_cast<Microsoft::Graphics::Canvas::CanvasEdgeBehavior const*>(&edgeBehavior), *reinterpret_cast<Microsoft::Graphics::Canvas::CanvasAlphaMode const*>(&alphaMode), *reinterpret_cast<Microsoft::Graphics::Canvas::CanvasColorSpace const*>(&preInterpolationSpace), *reinterpret_cast<Microsoft::Graphics::Canvas::CanvasColorSpace const*>(&postInterpolationSpace), *reinterpret_cast<Microsoft::Graphics::Canvas::CanvasBufferPrecision const*>(&bufferPrecision)));
            return S_OK;
        }
        catch (...)
        {
            *canvasRadialGradientBrush = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateRainbow(::IUnknown* resourceCreator, float eldritchness, ::IUnknown** canvasRadialGradientBrush) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *canvasRadialGradientBrush = detach_abi(this->shim().CreateRainbow(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator), eldritchness));
            return S_OK;
        }
        catch (...)
        {
            *canvasRadialGradientBrush = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Brushes::ICanvasSolidColorBrush> : produce_base<D, Microsoft::Graphics::Canvas::Brushes::ICanvasSolidColorBrush>
{
    HRESULT __stdcall get_Color(struct_of<4>* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Color());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Color(struct_of<4> value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Color(*reinterpret_cast<Windows::UI::Color const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ColorHdr(Windows::Foundation::Numerics::float4* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ColorHdr());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ColorHdr(Windows::Foundation::Numerics::float4 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ColorHdr(*reinterpret_cast<Windows::Foundation::Numerics::float4 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Brushes::ICanvasSolidColorBrushFactory> : produce_base<D, Microsoft::Graphics::Canvas::Brushes::ICanvasSolidColorBrushFactory>
{
    HRESULT __stdcall Create(::IUnknown* resourceCreator, struct_of<4> color, ::IUnknown** canvasSolidColorBrush) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *canvasSolidColorBrush = detach_abi(this->shim().Create(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator), *reinterpret_cast<Windows::UI::Color const*>(&color)));
            return S_OK;
        }
        catch (...)
        {
            *canvasSolidColorBrush = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Brushes::ICanvasSolidColorBrushStatics> : produce_base<D, Microsoft::Graphics::Canvas::Brushes::ICanvasSolidColorBrushStatics>
{
    HRESULT __stdcall CreateHdr(::IUnknown* resourceCreator, Windows::Foundation::Numerics::float4 colorHdr, ::IUnknown** canvasSolidColorBrush) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *canvasSolidColorBrush = detach_abi(this->shim().CreateHdr(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator), *reinterpret_cast<Windows::Foundation::Numerics::float4 const*>(&colorHdr)));
            return S_OK;
        }
        catch (...)
        {
            *canvasSolidColorBrush = nullptr;
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Microsoft::Graphics::Canvas::Brushes {

inline CanvasImageBrush::CanvasImageBrush(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator) :
    CanvasImageBrush(get_activation_factory<CanvasImageBrush, Microsoft::Graphics::Canvas::Brushes::ICanvasImageBrushFactory>().Create(resourceCreator))
{}

inline CanvasImageBrush::CanvasImageBrush(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Microsoft::Graphics::Canvas::ICanvasImage const& image) :
    CanvasImageBrush(get_activation_factory<CanvasImageBrush, Microsoft::Graphics::Canvas::Brushes::ICanvasImageBrushFactory>().CreateWithImage(resourceCreator, image))
{}

inline CanvasLinearGradientBrush::CanvasLinearGradientBrush(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::UI::Color const& startColor, Windows::UI::Color const& endColor) :
    CanvasLinearGradientBrush(get_activation_factory<CanvasLinearGradientBrush, Microsoft::Graphics::Canvas::Brushes::ICanvasLinearGradientBrushFactory>().CreateSimple(resourceCreator, startColor, endColor))
{}

inline CanvasLinearGradientBrush::CanvasLinearGradientBrush(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStop const> gradientStops) :
    CanvasLinearGradientBrush(get_activation_factory<CanvasLinearGradientBrush, Microsoft::Graphics::Canvas::Brushes::ICanvasLinearGradientBrushFactory>().CreateWithStops(resourceCreator, gradientStops))
{}

inline CanvasLinearGradientBrush::CanvasLinearGradientBrush(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStop const> gradientStops, Microsoft::Graphics::Canvas::CanvasEdgeBehavior const& edgeBehavior, Microsoft::Graphics::Canvas::CanvasAlphaMode const& alphaMode) :
    CanvasLinearGradientBrush(get_activation_factory<CanvasLinearGradientBrush, Microsoft::Graphics::Canvas::Brushes::ICanvasLinearGradientBrushFactory>().CreateWithEdgeBehaviorAndAlphaMode(resourceCreator, gradientStops, edgeBehavior, alphaMode))
{}

inline CanvasLinearGradientBrush::CanvasLinearGradientBrush(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStop const> gradientStops, Microsoft::Graphics::Canvas::CanvasEdgeBehavior const& edgeBehavior, Microsoft::Graphics::Canvas::CanvasAlphaMode const& alphaMode, Microsoft::Graphics::Canvas::CanvasColorSpace const& preInterpolationSpace, Microsoft::Graphics::Canvas::CanvasColorSpace const& postInterpolationSpace, Microsoft::Graphics::Canvas::CanvasBufferPrecision const& bufferPrecision) :
    CanvasLinearGradientBrush(get_activation_factory<CanvasLinearGradientBrush, Microsoft::Graphics::Canvas::Brushes::ICanvasLinearGradientBrushFactory>().CreateWithEdgeBehaviorAndInterpolationOptions(resourceCreator, gradientStops, edgeBehavior, alphaMode, preInterpolationSpace, postInterpolationSpace, bufferPrecision))
{}

inline Microsoft::Graphics::Canvas::Brushes::CanvasLinearGradientBrush CanvasLinearGradientBrush::CreateHdr(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Foundation::Numerics::float4 const& startColorHdr, Windows::Foundation::Numerics::float4 const& endColorHdr)
{
    return get_activation_factory<CanvasLinearGradientBrush, Microsoft::Graphics::Canvas::Brushes::ICanvasLinearGradientBrushStatics>().CreateHdr(resourceCreator, startColorHdr, endColorHdr);
}

inline Microsoft::Graphics::Canvas::Brushes::CanvasLinearGradientBrush CanvasLinearGradientBrush::CreateHdr(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStopHdr const> gradientStopsHdr)
{
    return get_activation_factory<CanvasLinearGradientBrush, Microsoft::Graphics::Canvas::Brushes::ICanvasLinearGradientBrushStatics>().CreateHdr(resourceCreator, gradientStopsHdr);
}

inline Microsoft::Graphics::Canvas::Brushes::CanvasLinearGradientBrush CanvasLinearGradientBrush::CreateHdr(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStopHdr const> gradientStopsHdr, Microsoft::Graphics::Canvas::CanvasEdgeBehavior const& edgeBehavior, Microsoft::Graphics::Canvas::CanvasAlphaMode const& alphaMode)
{
    return get_activation_factory<CanvasLinearGradientBrush, Microsoft::Graphics::Canvas::Brushes::ICanvasLinearGradientBrushStatics>().CreateHdr(resourceCreator, gradientStopsHdr, edgeBehavior, alphaMode);
}

inline Microsoft::Graphics::Canvas::Brushes::CanvasLinearGradientBrush CanvasLinearGradientBrush::CreateHdr(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStopHdr const> gradientStopsHdr, Microsoft::Graphics::Canvas::CanvasEdgeBehavior const& edgeBehavior, Microsoft::Graphics::Canvas::CanvasAlphaMode const& alphaMode, Microsoft::Graphics::Canvas::CanvasColorSpace const& preInterpolationSpace, Microsoft::Graphics::Canvas::CanvasColorSpace const& postInterpolationSpace, Microsoft::Graphics::Canvas::CanvasBufferPrecision const& bufferPrecision)
{
    return get_activation_factory<CanvasLinearGradientBrush, Microsoft::Graphics::Canvas::Brushes::ICanvasLinearGradientBrushStatics>().CreateHdr(resourceCreator, gradientStopsHdr, edgeBehavior, alphaMode, preInterpolationSpace, postInterpolationSpace, bufferPrecision);
}

inline Microsoft::Graphics::Canvas::Brushes::CanvasLinearGradientBrush CanvasLinearGradientBrush::CreateRainbow(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, float eldritchness)
{
    return get_activation_factory<CanvasLinearGradientBrush, Microsoft::Graphics::Canvas::Brushes::ICanvasLinearGradientBrushStatics>().CreateRainbow(resourceCreator, eldritchness);
}

inline CanvasRadialGradientBrush::CanvasRadialGradientBrush(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::UI::Color const& startColor, Windows::UI::Color const& endColor) :
    CanvasRadialGradientBrush(get_activation_factory<CanvasRadialGradientBrush, Microsoft::Graphics::Canvas::Brushes::ICanvasRadialGradientBrushFactory>().CreateSimple(resourceCreator, startColor, endColor))
{}

inline CanvasRadialGradientBrush::CanvasRadialGradientBrush(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStop const> gradientStops) :
    CanvasRadialGradientBrush(get_activation_factory<CanvasRadialGradientBrush, Microsoft::Graphics::Canvas::Brushes::ICanvasRadialGradientBrushFactory>().CreateWithStops(resourceCreator, gradientStops))
{}

inline CanvasRadialGradientBrush::CanvasRadialGradientBrush(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStop const> gradientStops, Microsoft::Graphics::Canvas::CanvasEdgeBehavior const& edgeBehavior, Microsoft::Graphics::Canvas::CanvasAlphaMode const& alphaMode) :
    CanvasRadialGradientBrush(get_activation_factory<CanvasRadialGradientBrush, Microsoft::Graphics::Canvas::Brushes::ICanvasRadialGradientBrushFactory>().CreateWithEdgeBehaviorAndAlphaMode(resourceCreator, gradientStops, edgeBehavior, alphaMode))
{}

inline CanvasRadialGradientBrush::CanvasRadialGradientBrush(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStop const> gradientStops, Microsoft::Graphics::Canvas::CanvasEdgeBehavior const& edgeBehavior, Microsoft::Graphics::Canvas::CanvasAlphaMode const& alphaMode, Microsoft::Graphics::Canvas::CanvasColorSpace const& preInterpolationSpace, Microsoft::Graphics::Canvas::CanvasColorSpace const& postInterpolationSpace, Microsoft::Graphics::Canvas::CanvasBufferPrecision const& bufferPrecision) :
    CanvasRadialGradientBrush(get_activation_factory<CanvasRadialGradientBrush, Microsoft::Graphics::Canvas::Brushes::ICanvasRadialGradientBrushFactory>().CreateWithEdgeBehaviorAndInterpolationOptions(resourceCreator, gradientStops, edgeBehavior, alphaMode, preInterpolationSpace, postInterpolationSpace, bufferPrecision))
{}

inline Microsoft::Graphics::Canvas::Brushes::CanvasRadialGradientBrush CanvasRadialGradientBrush::CreateHdr(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Foundation::Numerics::float4 const& startColorHdr, Windows::Foundation::Numerics::float4 const& endColorHdr)
{
    return get_activation_factory<CanvasRadialGradientBrush, Microsoft::Graphics::Canvas::Brushes::ICanvasRadialGradientBrushStatics>().CreateHdr(resourceCreator, startColorHdr, endColorHdr);
}

inline Microsoft::Graphics::Canvas::Brushes::CanvasRadialGradientBrush CanvasRadialGradientBrush::CreateHdr(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStopHdr const> gradientStops)
{
    return get_activation_factory<CanvasRadialGradientBrush, Microsoft::Graphics::Canvas::Brushes::ICanvasRadialGradientBrushStatics>().CreateHdr(resourceCreator, gradientStops);
}

inline Microsoft::Graphics::Canvas::Brushes::CanvasRadialGradientBrush CanvasRadialGradientBrush::CreateHdr(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStopHdr const> gradientStops, Microsoft::Graphics::Canvas::CanvasEdgeBehavior const& edgeBehavior, Microsoft::Graphics::Canvas::CanvasAlphaMode const& alphaMode)
{
    return get_activation_factory<CanvasRadialGradientBrush, Microsoft::Graphics::Canvas::Brushes::ICanvasRadialGradientBrushStatics>().CreateHdr(resourceCreator, gradientStops, edgeBehavior, alphaMode);
}

inline Microsoft::Graphics::Canvas::Brushes::CanvasRadialGradientBrush CanvasRadialGradientBrush::CreateHdr(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStopHdr const> gradientStops, Microsoft::Graphics::Canvas::CanvasEdgeBehavior const& edgeBehavior, Microsoft::Graphics::Canvas::CanvasAlphaMode const& alphaMode, Microsoft::Graphics::Canvas::CanvasColorSpace const& preInterpolationSpace, Microsoft::Graphics::Canvas::CanvasColorSpace const& postInterpolationSpace, Microsoft::Graphics::Canvas::CanvasBufferPrecision const& bufferPrecision)
{
    return get_activation_factory<CanvasRadialGradientBrush, Microsoft::Graphics::Canvas::Brushes::ICanvasRadialGradientBrushStatics>().CreateHdr(resourceCreator, gradientStops, edgeBehavior, alphaMode, preInterpolationSpace, postInterpolationSpace, bufferPrecision);
}

inline Microsoft::Graphics::Canvas::Brushes::CanvasRadialGradientBrush CanvasRadialGradientBrush::CreateRainbow(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, float eldritchness)
{
    return get_activation_factory<CanvasRadialGradientBrush, Microsoft::Graphics::Canvas::Brushes::ICanvasRadialGradientBrushStatics>().CreateRainbow(resourceCreator, eldritchness);
}

inline CanvasSolidColorBrush::CanvasSolidColorBrush(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::UI::Color const& color) :
    CanvasSolidColorBrush(get_activation_factory<CanvasSolidColorBrush, Microsoft::Graphics::Canvas::Brushes::ICanvasSolidColorBrushFactory>().Create(resourceCreator, color))
{}

inline Microsoft::Graphics::Canvas::Brushes::CanvasSolidColorBrush CanvasSolidColorBrush::CreateHdr(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Foundation::Numerics::float4 const& colorHdr)
{
    return get_activation_factory<CanvasSolidColorBrush, Microsoft::Graphics::Canvas::Brushes::ICanvasSolidColorBrushStatics>().CreateHdr(resourceCreator, colorHdr);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Brushes::ICanvasBrush> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Brushes::ICanvasBrush> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Brushes::ICanvasImageBrush> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Brushes::ICanvasImageBrush> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Brushes::ICanvasImageBrushFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Brushes::ICanvasImageBrushFactory> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Brushes::ICanvasLinearGradientBrush> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Brushes::ICanvasLinearGradientBrush> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Brushes::ICanvasLinearGradientBrushFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Brushes::ICanvasLinearGradientBrushFactory> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Brushes::ICanvasLinearGradientBrushStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Brushes::ICanvasLinearGradientBrushStatics> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Brushes::ICanvasRadialGradientBrush> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Brushes::ICanvasRadialGradientBrush> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Brushes::ICanvasRadialGradientBrushFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Brushes::ICanvasRadialGradientBrushFactory> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Brushes::ICanvasRadialGradientBrushStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Brushes::ICanvasRadialGradientBrushStatics> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Brushes::ICanvasSolidColorBrush> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Brushes::ICanvasSolidColorBrush> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Brushes::ICanvasSolidColorBrushFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Brushes::ICanvasSolidColorBrushFactory> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Brushes::ICanvasSolidColorBrushStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Brushes::ICanvasSolidColorBrushStatics> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Brushes::CanvasImageBrush> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Brushes::CanvasImageBrush> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Brushes::CanvasLinearGradientBrush> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Brushes::CanvasLinearGradientBrush> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Brushes::CanvasRadialGradientBrush> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Brushes::CanvasRadialGradientBrush> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Brushes::CanvasSolidColorBrush> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Brushes::CanvasSolidColorBrush> {};

}

WINRT_WARNING_POP
