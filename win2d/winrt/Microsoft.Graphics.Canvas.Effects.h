// C++/WinRT v1.0.170906.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH

static_assert(winrt::impl::make_constexpr_string(CPPWINRT_VERSION) == "1.0.170906.1", "Mismatched component and base headers.");
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Microsoft.Graphics.Canvas.2.h"
#include "winrt/impl/Windows.Graphics.DirectX.2.h"
#include "winrt/impl/Windows.Graphics.Effects.2.h"
#include "winrt/impl/Windows.UI.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Microsoft.Graphics.Canvas.Effects.2.h"
#include "winrt/Microsoft.Graphics.Canvas.h"

namespace winrt::impl {

template <typename D> Windows::Graphics::Effects::IGraphicsEffectSource consume_Microsoft_Graphics_Canvas_Effects_IAlphaMaskEffect<D>::Source() const
{
    Windows::Graphics::Effects::IGraphicsEffectSource source{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IAlphaMaskEffect)->get_Source(put_abi(source)));
    return source;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IAlphaMaskEffect<D>::Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IAlphaMaskEffect)->put_Source(get_abi(source)));
}

template <typename D> Windows::Graphics::Effects::IGraphicsEffectSource consume_Microsoft_Graphics_Canvas_Effects_IAlphaMaskEffect<D>::AlphaMask() const
{
    Windows::Graphics::Effects::IGraphicsEffectSource source{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IAlphaMaskEffect)->get_AlphaMask(put_abi(source)));
    return source;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IAlphaMaskEffect<D>::AlphaMask(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IAlphaMaskEffect)->put_AlphaMask(get_abi(source)));
}

template <typename D> bool consume_Microsoft_Graphics_Canvas_Effects_IAlphaMaskEffectStatics<D>::IsSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IAlphaMaskEffectStatics)->get_IsSupported(&value));
    return value;
}

template <typename D> bool consume_Microsoft_Graphics_Canvas_Effects_IArithmeticCompositeEffect<D>::ClampOutput() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IArithmeticCompositeEffect)->get_ClampOutput(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IArithmeticCompositeEffect<D>::ClampOutput(bool value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IArithmeticCompositeEffect)->put_ClampOutput(value));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Effects_IArithmeticCompositeEffect<D>::MultiplyAmount() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IArithmeticCompositeEffect)->get_MultiplyAmount(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IArithmeticCompositeEffect<D>::MultiplyAmount(float value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IArithmeticCompositeEffect)->put_MultiplyAmount(value));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Effects_IArithmeticCompositeEffect<D>::Source1Amount() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IArithmeticCompositeEffect)->get_Source1Amount(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IArithmeticCompositeEffect<D>::Source1Amount(float value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IArithmeticCompositeEffect)->put_Source1Amount(value));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Effects_IArithmeticCompositeEffect<D>::Source2Amount() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IArithmeticCompositeEffect)->get_Source2Amount(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IArithmeticCompositeEffect<D>::Source2Amount(float value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IArithmeticCompositeEffect)->put_Source2Amount(value));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Effects_IArithmeticCompositeEffect<D>::Offset() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IArithmeticCompositeEffect)->get_Offset(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IArithmeticCompositeEffect<D>::Offset(float value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IArithmeticCompositeEffect)->put_Offset(value));
}

template <typename D> Windows::Graphics::Effects::IGraphicsEffectSource consume_Microsoft_Graphics_Canvas_Effects_IArithmeticCompositeEffect<D>::Source1() const
{
    Windows::Graphics::Effects::IGraphicsEffectSource source{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IArithmeticCompositeEffect)->get_Source1(put_abi(source)));
    return source;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IArithmeticCompositeEffect<D>::Source1(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IArithmeticCompositeEffect)->put_Source1(get_abi(source)));
}

template <typename D> Windows::Graphics::Effects::IGraphicsEffectSource consume_Microsoft_Graphics_Canvas_Effects_IArithmeticCompositeEffect<D>::Source2() const
{
    Windows::Graphics::Effects::IGraphicsEffectSource source{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IArithmeticCompositeEffect)->get_Source2(put_abi(source)));
    return source;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IArithmeticCompositeEffect<D>::Source2(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IArithmeticCompositeEffect)->put_Source2(get_abi(source)));
}

template <typename D> Windows::Foundation::Rect consume_Microsoft_Graphics_Canvas_Effects_IAtlasEffect<D>::SourceRectangle() const
{
    Windows::Foundation::Rect value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IAtlasEffect)->get_SourceRectangle(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IAtlasEffect<D>::SourceRectangle(Windows::Foundation::Rect const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IAtlasEffect)->put_SourceRectangle(get_abi(value)));
}

template <typename D> Windows::Foundation::Rect consume_Microsoft_Graphics_Canvas_Effects_IAtlasEffect<D>::PaddingRectangle() const
{
    Windows::Foundation::Rect value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IAtlasEffect)->get_PaddingRectangle(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IAtlasEffect<D>::PaddingRectangle(Windows::Foundation::Rect const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IAtlasEffect)->put_PaddingRectangle(get_abi(value)));
}

template <typename D> Windows::Graphics::Effects::IGraphicsEffectSource consume_Microsoft_Graphics_Canvas_Effects_IAtlasEffect<D>::Source() const
{
    Windows::Graphics::Effects::IGraphicsEffectSource source{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IAtlasEffect)->get_Source(put_abi(source)));
    return source;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IAtlasEffect<D>::Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IAtlasEffect)->put_Source(get_abi(source)));
}

template <typename D> Microsoft::Graphics::Canvas::Effects::BlendEffectMode consume_Microsoft_Graphics_Canvas_Effects_IBlendEffect<D>::Mode() const
{
    Microsoft::Graphics::Canvas::Effects::BlendEffectMode value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IBlendEffect)->get_Mode(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IBlendEffect<D>::Mode(Microsoft::Graphics::Canvas::Effects::BlendEffectMode const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IBlendEffect)->put_Mode(get_abi(value)));
}

template <typename D> Windows::Graphics::Effects::IGraphicsEffectSource consume_Microsoft_Graphics_Canvas_Effects_IBlendEffect<D>::Background() const
{
    Windows::Graphics::Effects::IGraphicsEffectSource source{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IBlendEffect)->get_Background(put_abi(source)));
    return source;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IBlendEffect<D>::Background(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IBlendEffect)->put_Background(get_abi(source)));
}

template <typename D> Windows::Graphics::Effects::IGraphicsEffectSource consume_Microsoft_Graphics_Canvas_Effects_IBlendEffect<D>::Foreground() const
{
    Windows::Graphics::Effects::IGraphicsEffectSource source{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IBlendEffect)->get_Foreground(put_abi(source)));
    return source;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IBlendEffect<D>::Foreground(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IBlendEffect)->put_Foreground(get_abi(source)));
}

template <typename D> Microsoft::Graphics::Canvas::CanvasEdgeBehavior consume_Microsoft_Graphics_Canvas_Effects_IBorderEffect<D>::ExtendX() const
{
    Microsoft::Graphics::Canvas::CanvasEdgeBehavior value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IBorderEffect)->get_ExtendX(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IBorderEffect<D>::ExtendX(Microsoft::Graphics::Canvas::CanvasEdgeBehavior const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IBorderEffect)->put_ExtendX(get_abi(value)));
}

template <typename D> Microsoft::Graphics::Canvas::CanvasEdgeBehavior consume_Microsoft_Graphics_Canvas_Effects_IBorderEffect<D>::ExtendY() const
{
    Microsoft::Graphics::Canvas::CanvasEdgeBehavior value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IBorderEffect)->get_ExtendY(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IBorderEffect<D>::ExtendY(Microsoft::Graphics::Canvas::CanvasEdgeBehavior const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IBorderEffect)->put_ExtendY(get_abi(value)));
}

template <typename D> Windows::Graphics::Effects::IGraphicsEffectSource consume_Microsoft_Graphics_Canvas_Effects_IBorderEffect<D>::Source() const
{
    Windows::Graphics::Effects::IGraphicsEffectSource source{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IBorderEffect)->get_Source(put_abi(source)));
    return source;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IBorderEffect<D>::Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IBorderEffect)->put_Source(get_abi(source)));
}

template <typename D> Windows::Foundation::Numerics::float2 consume_Microsoft_Graphics_Canvas_Effects_IBrightnessEffect<D>::WhitePoint() const
{
    Windows::Foundation::Numerics::float2 value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IBrightnessEffect)->get_WhitePoint(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IBrightnessEffect<D>::WhitePoint(Windows::Foundation::Numerics::float2 const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IBrightnessEffect)->put_WhitePoint(get_abi(value)));
}

template <typename D> Windows::Foundation::Numerics::float2 consume_Microsoft_Graphics_Canvas_Effects_IBrightnessEffect<D>::BlackPoint() const
{
    Windows::Foundation::Numerics::float2 value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IBrightnessEffect)->get_BlackPoint(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IBrightnessEffect<D>::BlackPoint(Windows::Foundation::Numerics::float2 const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IBrightnessEffect)->put_BlackPoint(get_abi(value)));
}

template <typename D> Windows::Graphics::Effects::IGraphicsEffectSource consume_Microsoft_Graphics_Canvas_Effects_IBrightnessEffect<D>::Source() const
{
    Windows::Graphics::Effects::IGraphicsEffectSource source{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IBrightnessEffect)->get_Source(put_abi(source)));
    return source;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IBrightnessEffect<D>::Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IBrightnessEffect)->put_Source(get_abi(source)));
}

template <typename D> bool consume_Microsoft_Graphics_Canvas_Effects_ICanvasEffect<D>::CacheOutput() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ICanvasEffect)->get_CacheOutput(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ICanvasEffect<D>::CacheOutput(bool value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ICanvasEffect)->put_CacheOutput(value));
}

template <typename D> Windows::Foundation::IReference<Microsoft::Graphics::Canvas::CanvasBufferPrecision> consume_Microsoft_Graphics_Canvas_Effects_ICanvasEffect<D>::BufferPrecision() const
{
    Windows::Foundation::IReference<Microsoft::Graphics::Canvas::CanvasBufferPrecision> value{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ICanvasEffect)->get_BufferPrecision(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ICanvasEffect<D>::BufferPrecision(optional<Microsoft::Graphics::Canvas::CanvasBufferPrecision> const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ICanvasEffect)->put_BufferPrecision(get_abi(value)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ICanvasEffect<D>::InvalidateSourceRectangle(Microsoft::Graphics::Canvas::ICanvasResourceCreatorWithDpi const& resourceCreator, uint32_t sourceIndex, Windows::Foundation::Rect const& invalidRectangle) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ICanvasEffect)->InvalidateSourceRectangle(get_abi(resourceCreator), sourceIndex, get_abi(invalidRectangle)));
}

template <typename D> com_array<Windows::Foundation::Rect> consume_Microsoft_Graphics_Canvas_Effects_ICanvasEffect<D>::GetInvalidRectangles(Microsoft::Graphics::Canvas::ICanvasResourceCreatorWithDpi const& resourceCreator) const
{
    com_array<Windows::Foundation::Rect> valueElements;
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ICanvasEffect)->GetInvalidRectangles(get_abi(resourceCreator), impl::put_size_abi(valueElements), put_abi(valueElements)));
    return valueElements;
}

template <typename D> Windows::Foundation::Rect consume_Microsoft_Graphics_Canvas_Effects_ICanvasEffect<D>::GetRequiredSourceRectangle(Microsoft::Graphics::Canvas::ICanvasResourceCreatorWithDpi const& resourceCreator, Windows::Foundation::Rect const& outputRectangle, Microsoft::Graphics::Canvas::Effects::ICanvasEffect const& sourceEffect, uint32_t sourceIndex, Windows::Foundation::Rect const& sourceBounds) const
{
    Windows::Foundation::Rect value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ICanvasEffect)->GetRequiredSourceRectangle(get_abi(resourceCreator), get_abi(outputRectangle), get_abi(sourceEffect), sourceIndex, get_abi(sourceBounds), put_abi(value)));
    return value;
}

template <typename D> com_array<Windows::Foundation::Rect> consume_Microsoft_Graphics_Canvas_Effects_ICanvasEffect<D>::GetRequiredSourceRectangles(Microsoft::Graphics::Canvas::ICanvasResourceCreatorWithDpi const& resourceCreator, Windows::Foundation::Rect const& outputRectangle, array_view<Microsoft::Graphics::Canvas::Effects::ICanvasEffect const> sourceEffects, array_view<uint32_t const> sourceIndices, array_view<Windows::Foundation::Rect const> sourceBounds) const
{
    com_array<Windows::Foundation::Rect> valueElements;
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ICanvasEffect)->GetRequiredSourceRectangles(get_abi(resourceCreator), get_abi(outputRectangle), sourceEffects.size(), get_abi(sourceEffects), sourceIndices.size(), get_abi(sourceIndices), sourceBounds.size(), get_abi(sourceBounds), impl::put_size_abi(valueElements), put_abi(valueElements)));
    return valueElements;
}

template <typename D> Windows::UI::Color consume_Microsoft_Graphics_Canvas_Effects_IChromaKeyEffect<D>::Color() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IChromaKeyEffect)->get_Color(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IChromaKeyEffect<D>::Color(Windows::UI::Color const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IChromaKeyEffect)->put_Color(get_abi(value)));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Effects_IChromaKeyEffect<D>::Tolerance() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IChromaKeyEffect)->get_Tolerance(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IChromaKeyEffect<D>::Tolerance(float value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IChromaKeyEffect)->put_Tolerance(value));
}

template <typename D> bool consume_Microsoft_Graphics_Canvas_Effects_IChromaKeyEffect<D>::InvertAlpha() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IChromaKeyEffect)->get_InvertAlpha(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IChromaKeyEffect<D>::InvertAlpha(bool value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IChromaKeyEffect)->put_InvertAlpha(value));
}

template <typename D> bool consume_Microsoft_Graphics_Canvas_Effects_IChromaKeyEffect<D>::Feather() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IChromaKeyEffect)->get_Feather(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IChromaKeyEffect<D>::Feather(bool value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IChromaKeyEffect)->put_Feather(value));
}

template <typename D> Windows::Foundation::Numerics::float4 consume_Microsoft_Graphics_Canvas_Effects_IChromaKeyEffect<D>::ColorHdr() const
{
    Windows::Foundation::Numerics::float4 value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IChromaKeyEffect)->get_ColorHdr(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IChromaKeyEffect<D>::ColorHdr(Windows::Foundation::Numerics::float4 const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IChromaKeyEffect)->put_ColorHdr(get_abi(value)));
}

template <typename D> Windows::Graphics::Effects::IGraphicsEffectSource consume_Microsoft_Graphics_Canvas_Effects_IChromaKeyEffect<D>::Source() const
{
    Windows::Graphics::Effects::IGraphicsEffectSource source{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IChromaKeyEffect)->get_Source(put_abi(source)));
    return source;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IChromaKeyEffect<D>::Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IChromaKeyEffect)->put_Source(get_abi(source)));
}

template <typename D> Microsoft::Graphics::Canvas::Effects::ColorManagementProfile consume_Microsoft_Graphics_Canvas_Effects_IColorManagementEffect<D>::SourceColorProfile() const
{
    Microsoft::Graphics::Canvas::Effects::ColorManagementProfile value{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IColorManagementEffect)->get_SourceColorProfile(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IColorManagementEffect<D>::SourceColorProfile(Microsoft::Graphics::Canvas::Effects::ColorManagementProfile const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IColorManagementEffect)->put_SourceColorProfile(get_abi(value)));
}

template <typename D> Microsoft::Graphics::Canvas::Effects::ColorManagementRenderingIntent consume_Microsoft_Graphics_Canvas_Effects_IColorManagementEffect<D>::SourceRenderingIntent() const
{
    Microsoft::Graphics::Canvas::Effects::ColorManagementRenderingIntent value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IColorManagementEffect)->get_SourceRenderingIntent(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IColorManagementEffect<D>::SourceRenderingIntent(Microsoft::Graphics::Canvas::Effects::ColorManagementRenderingIntent const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IColorManagementEffect)->put_SourceRenderingIntent(get_abi(value)));
}

template <typename D> Microsoft::Graphics::Canvas::Effects::ColorManagementProfile consume_Microsoft_Graphics_Canvas_Effects_IColorManagementEffect<D>::OutputColorProfile() const
{
    Microsoft::Graphics::Canvas::Effects::ColorManagementProfile value{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IColorManagementEffect)->get_OutputColorProfile(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IColorManagementEffect<D>::OutputColorProfile(Microsoft::Graphics::Canvas::Effects::ColorManagementProfile const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IColorManagementEffect)->put_OutputColorProfile(get_abi(value)));
}

template <typename D> Microsoft::Graphics::Canvas::Effects::ColorManagementRenderingIntent consume_Microsoft_Graphics_Canvas_Effects_IColorManagementEffect<D>::OutputRenderingIntent() const
{
    Microsoft::Graphics::Canvas::Effects::ColorManagementRenderingIntent value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IColorManagementEffect)->get_OutputRenderingIntent(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IColorManagementEffect<D>::OutputRenderingIntent(Microsoft::Graphics::Canvas::Effects::ColorManagementRenderingIntent const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IColorManagementEffect)->put_OutputRenderingIntent(get_abi(value)));
}

template <typename D> Microsoft::Graphics::Canvas::CanvasAlphaMode consume_Microsoft_Graphics_Canvas_Effects_IColorManagementEffect<D>::AlphaMode() const
{
    Microsoft::Graphics::Canvas::CanvasAlphaMode value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IColorManagementEffect)->get_AlphaMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IColorManagementEffect<D>::AlphaMode(Microsoft::Graphics::Canvas::CanvasAlphaMode const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IColorManagementEffect)->put_AlphaMode(get_abi(value)));
}

template <typename D> Microsoft::Graphics::Canvas::Effects::ColorManagementEffectQuality consume_Microsoft_Graphics_Canvas_Effects_IColorManagementEffect<D>::Quality() const
{
    Microsoft::Graphics::Canvas::Effects::ColorManagementEffectQuality value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IColorManagementEffect)->get_Quality(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IColorManagementEffect<D>::Quality(Microsoft::Graphics::Canvas::Effects::ColorManagementEffectQuality const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IColorManagementEffect)->put_Quality(get_abi(value)));
}

template <typename D> Windows::Graphics::Effects::IGraphicsEffectSource consume_Microsoft_Graphics_Canvas_Effects_IColorManagementEffect<D>::Source() const
{
    Windows::Graphics::Effects::IGraphicsEffectSource source{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IColorManagementEffect)->get_Source(put_abi(source)));
    return source;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IColorManagementEffect<D>::Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IColorManagementEffect)->put_Source(get_abi(source)));
}

template <typename D> bool consume_Microsoft_Graphics_Canvas_Effects_IColorManagementEffectStatics<D>::IsBestQualitySupported(Microsoft::Graphics::Canvas::CanvasDevice const& device) const
{
    bool result{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IColorManagementEffectStatics)->IsBestQualitySupported(get_abi(device), &result));
    return result;
}

template <typename D> Microsoft::Graphics::Canvas::CanvasColorSpace consume_Microsoft_Graphics_Canvas_Effects_IColorManagementProfile<D>::ColorSpace() const
{
    Microsoft::Graphics::Canvas::CanvasColorSpace value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IColorManagementProfile)->get_ColorSpace(put_abi(value)));
    return value;
}

template <typename D> com_array<uint8_t> consume_Microsoft_Graphics_Canvas_Effects_IColorManagementProfile<D>::IccProfile() const
{
    com_array<uint8_t> valueElements;
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IColorManagementProfile)->get_IccProfile(impl::put_size_abi(valueElements), put_abi(valueElements)));
    return valueElements;
}

template <typename D> Microsoft::Graphics::Canvas::Effects::ColorManagementProfileType consume_Microsoft_Graphics_Canvas_Effects_IColorManagementProfile<D>::Type() const
{
    Microsoft::Graphics::Canvas::Effects::ColorManagementProfileType value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IColorManagementProfile)->get_Type(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Microsoft::Graphics::Canvas::Effects::ColorManagementSimpleProfile> consume_Microsoft_Graphics_Canvas_Effects_IColorManagementProfile<D>::SimpleProfile() const
{
    Windows::Foundation::IReference<Microsoft::Graphics::Canvas::Effects::ColorManagementSimpleProfile> value{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IColorManagementProfile)->get_SimpleProfile(put_abi(value)));
    return value;
}

template <typename D> Microsoft::Graphics::Canvas::Effects::ExtendedColorSpace consume_Microsoft_Graphics_Canvas_Effects_IColorManagementProfile<D>::ExtendedColorSpace() const
{
    Microsoft::Graphics::Canvas::Effects::ExtendedColorSpace value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IColorManagementProfile)->get_ExtendedColorSpace(put_abi(value)));
    return value;
}

template <typename D> Microsoft::Graphics::Canvas::Effects::ColorManagementProfile consume_Microsoft_Graphics_Canvas_Effects_IColorManagementProfileFactory<D>::Create(Microsoft::Graphics::Canvas::CanvasColorSpace const& colorSpace) const
{
    Microsoft::Graphics::Canvas::Effects::ColorManagementProfile result{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IColorManagementProfileFactory)->Create(get_abi(colorSpace), put_abi(result)));
    return result;
}

template <typename D> Microsoft::Graphics::Canvas::Effects::ColorManagementProfile consume_Microsoft_Graphics_Canvas_Effects_IColorManagementProfileStatics<D>::CreateCustom(array_view<uint8_t const> iccProfile) const
{
    Microsoft::Graphics::Canvas::Effects::ColorManagementProfile result{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IColorManagementProfileStatics)->CreateCustom(iccProfile.size(), get_abi(iccProfile), put_abi(result)));
    return result;
}

template <typename D> Microsoft::Graphics::Canvas::Effects::ColorManagementProfile consume_Microsoft_Graphics_Canvas_Effects_IColorManagementProfileStatics<D>::CreateSimple(Microsoft::Graphics::Canvas::Effects::ColorManagementSimpleProfile const& simpleProfile) const
{
    Microsoft::Graphics::Canvas::Effects::ColorManagementProfile result{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IColorManagementProfileStatics)->CreateSimple(get_abi(simpleProfile), put_abi(result)));
    return result;
}

template <typename D> Microsoft::Graphics::Canvas::Effects::ColorManagementProfile consume_Microsoft_Graphics_Canvas_Effects_IColorManagementProfileStatics<D>::CreateExtended(Microsoft::Graphics::Canvas::Effects::ExtendedColorSpace const& colorSpace) const
{
    Microsoft::Graphics::Canvas::Effects::ColorManagementProfile result{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IColorManagementProfileStatics)->CreateExtended(get_abi(colorSpace), put_abi(result)));
    return result;
}

template <typename D> bool consume_Microsoft_Graphics_Canvas_Effects_IColorManagementProfileStatics<D>::IsSupported(Microsoft::Graphics::Canvas::Effects::ColorManagementProfileType const& type, Microsoft::Graphics::Canvas::CanvasDevice const& device) const
{
    bool result{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IColorManagementProfileStatics)->IsSupported(get_abi(type), get_abi(device), &result));
    return result;
}

template <typename D> Microsoft::Graphics::Canvas::Effects::Matrix5x4 consume_Microsoft_Graphics_Canvas_Effects_IColorMatrixEffect<D>::ColorMatrix() const
{
    Microsoft::Graphics::Canvas::Effects::Matrix5x4 value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IColorMatrixEffect)->get_ColorMatrix(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IColorMatrixEffect<D>::ColorMatrix(Microsoft::Graphics::Canvas::Effects::Matrix5x4 const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IColorMatrixEffect)->put_ColorMatrix(get_abi(value)));
}

template <typename D> Microsoft::Graphics::Canvas::CanvasAlphaMode consume_Microsoft_Graphics_Canvas_Effects_IColorMatrixEffect<D>::AlphaMode() const
{
    Microsoft::Graphics::Canvas::CanvasAlphaMode value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IColorMatrixEffect)->get_AlphaMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IColorMatrixEffect<D>::AlphaMode(Microsoft::Graphics::Canvas::CanvasAlphaMode const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IColorMatrixEffect)->put_AlphaMode(get_abi(value)));
}

template <typename D> bool consume_Microsoft_Graphics_Canvas_Effects_IColorMatrixEffect<D>::ClampOutput() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IColorMatrixEffect)->get_ClampOutput(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IColorMatrixEffect<D>::ClampOutput(bool value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IColorMatrixEffect)->put_ClampOutput(value));
}

template <typename D> Windows::Graphics::Effects::IGraphicsEffectSource consume_Microsoft_Graphics_Canvas_Effects_IColorMatrixEffect<D>::Source() const
{
    Windows::Graphics::Effects::IGraphicsEffectSource source{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IColorMatrixEffect)->get_Source(put_abi(source)));
    return source;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IColorMatrixEffect<D>::Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IColorMatrixEffect)->put_Source(get_abi(source)));
}

template <typename D> Windows::UI::Color consume_Microsoft_Graphics_Canvas_Effects_IColorSourceEffect<D>::Color() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IColorSourceEffect)->get_Color(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IColorSourceEffect<D>::Color(Windows::UI::Color const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IColorSourceEffect)->put_Color(get_abi(value)));
}

template <typename D> Windows::Foundation::Numerics::float4 consume_Microsoft_Graphics_Canvas_Effects_IColorSourceEffect<D>::ColorHdr() const
{
    Windows::Foundation::Numerics::float4 value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IColorSourceEffect)->get_ColorHdr(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IColorSourceEffect<D>::ColorHdr(Windows::Foundation::Numerics::float4 const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IColorSourceEffect)->put_ColorHdr(get_abi(value)));
}

template <typename D> Microsoft::Graphics::Canvas::CanvasComposite consume_Microsoft_Graphics_Canvas_Effects_ICompositeEffect<D>::Mode() const
{
    Microsoft::Graphics::Canvas::CanvasComposite value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ICompositeEffect)->get_Mode(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ICompositeEffect<D>::Mode(Microsoft::Graphics::Canvas::CanvasComposite const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ICompositeEffect)->put_Mode(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Graphics::Effects::IGraphicsEffectSource> consume_Microsoft_Graphics_Canvas_Effects_ICompositeEffect<D>::Sources() const
{
    Windows::Foundation::Collections::IVector<Windows::Graphics::Effects::IGraphicsEffectSource> value{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ICompositeEffect)->get_Sources(put_abi(value)));
    return value;
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Effects_IContrastEffect<D>::Contrast() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IContrastEffect)->get_Contrast(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IContrastEffect<D>::Contrast(float value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IContrastEffect)->put_Contrast(value));
}

template <typename D> bool consume_Microsoft_Graphics_Canvas_Effects_IContrastEffect<D>::ClampSource() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IContrastEffect)->get_ClampSource(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IContrastEffect<D>::ClampSource(bool value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IContrastEffect)->put_ClampSource(value));
}

template <typename D> Windows::Graphics::Effects::IGraphicsEffectSource consume_Microsoft_Graphics_Canvas_Effects_IContrastEffect<D>::Source() const
{
    Windows::Graphics::Effects::IGraphicsEffectSource source{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IContrastEffect)->get_Source(put_abi(source)));
    return source;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IContrastEffect<D>::Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IContrastEffect)->put_Source(get_abi(source)));
}

template <typename D> Windows::Foundation::Numerics::float2 consume_Microsoft_Graphics_Canvas_Effects_IConvolveMatrixEffect<D>::KernelScale() const
{
    Windows::Foundation::Numerics::float2 value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IConvolveMatrixEffect)->get_KernelScale(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IConvolveMatrixEffect<D>::KernelScale(Windows::Foundation::Numerics::float2 const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IConvolveMatrixEffect)->put_KernelScale(get_abi(value)));
}

template <typename D> Microsoft::Graphics::Canvas::CanvasImageInterpolation consume_Microsoft_Graphics_Canvas_Effects_IConvolveMatrixEffect<D>::InterpolationMode() const
{
    Microsoft::Graphics::Canvas::CanvasImageInterpolation value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IConvolveMatrixEffect)->get_InterpolationMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IConvolveMatrixEffect<D>::InterpolationMode(Microsoft::Graphics::Canvas::CanvasImageInterpolation const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IConvolveMatrixEffect)->put_InterpolationMode(get_abi(value)));
}

template <typename D> int32_t consume_Microsoft_Graphics_Canvas_Effects_IConvolveMatrixEffect<D>::KernelWidth() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IConvolveMatrixEffect)->get_KernelWidth(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IConvolveMatrixEffect<D>::KernelWidth(int32_t value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IConvolveMatrixEffect)->put_KernelWidth(value));
}

template <typename D> int32_t consume_Microsoft_Graphics_Canvas_Effects_IConvolveMatrixEffect<D>::KernelHeight() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IConvolveMatrixEffect)->get_KernelHeight(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IConvolveMatrixEffect<D>::KernelHeight(int32_t value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IConvolveMatrixEffect)->put_KernelHeight(value));
}

template <typename D> com_array<float> consume_Microsoft_Graphics_Canvas_Effects_IConvolveMatrixEffect<D>::KernelMatrix() const
{
    com_array<float> valueElements;
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IConvolveMatrixEffect)->get_KernelMatrix(impl::put_size_abi(valueElements), put_abi(valueElements)));
    return valueElements;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IConvolveMatrixEffect<D>::KernelMatrix(array_view<float const> valueElements) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IConvolveMatrixEffect)->put_KernelMatrix(valueElements.size(), get_abi(valueElements)));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Effects_IConvolveMatrixEffect<D>::Divisor() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IConvolveMatrixEffect)->get_Divisor(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IConvolveMatrixEffect<D>::Divisor(float value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IConvolveMatrixEffect)->put_Divisor(value));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Effects_IConvolveMatrixEffect<D>::Offset() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IConvolveMatrixEffect)->get_Offset(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IConvolveMatrixEffect<D>::Offset(float value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IConvolveMatrixEffect)->put_Offset(value));
}

template <typename D> Windows::Foundation::Numerics::float2 consume_Microsoft_Graphics_Canvas_Effects_IConvolveMatrixEffect<D>::KernelOffset() const
{
    Windows::Foundation::Numerics::float2 value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IConvolveMatrixEffect)->get_KernelOffset(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IConvolveMatrixEffect<D>::KernelOffset(Windows::Foundation::Numerics::float2 const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IConvolveMatrixEffect)->put_KernelOffset(get_abi(value)));
}

template <typename D> bool consume_Microsoft_Graphics_Canvas_Effects_IConvolveMatrixEffect<D>::PreserveAlpha() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IConvolveMatrixEffect)->get_PreserveAlpha(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IConvolveMatrixEffect<D>::PreserveAlpha(bool value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IConvolveMatrixEffect)->put_PreserveAlpha(value));
}

template <typename D> Microsoft::Graphics::Canvas::Effects::EffectBorderMode consume_Microsoft_Graphics_Canvas_Effects_IConvolveMatrixEffect<D>::BorderMode() const
{
    Microsoft::Graphics::Canvas::Effects::EffectBorderMode value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IConvolveMatrixEffect)->get_BorderMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IConvolveMatrixEffect<D>::BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IConvolveMatrixEffect)->put_BorderMode(get_abi(value)));
}

template <typename D> bool consume_Microsoft_Graphics_Canvas_Effects_IConvolveMatrixEffect<D>::ClampOutput() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IConvolveMatrixEffect)->get_ClampOutput(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IConvolveMatrixEffect<D>::ClampOutput(bool value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IConvolveMatrixEffect)->put_ClampOutput(value));
}

template <typename D> Windows::Graphics::Effects::IGraphicsEffectSource consume_Microsoft_Graphics_Canvas_Effects_IConvolveMatrixEffect<D>::Source() const
{
    Windows::Graphics::Effects::IGraphicsEffectSource source{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IConvolveMatrixEffect)->get_Source(put_abi(source)));
    return source;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IConvolveMatrixEffect<D>::Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IConvolveMatrixEffect)->put_Source(get_abi(source)));
}

template <typename D> Windows::Foundation::Rect consume_Microsoft_Graphics_Canvas_Effects_ICropEffect<D>::SourceRectangle() const
{
    Windows::Foundation::Rect value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ICropEffect)->get_SourceRectangle(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ICropEffect<D>::SourceRectangle(Windows::Foundation::Rect const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ICropEffect)->put_SourceRectangle(get_abi(value)));
}

template <typename D> Microsoft::Graphics::Canvas::Effects::EffectBorderMode consume_Microsoft_Graphics_Canvas_Effects_ICropEffect<D>::BorderMode() const
{
    Microsoft::Graphics::Canvas::Effects::EffectBorderMode value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ICropEffect)->get_BorderMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ICropEffect<D>::BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ICropEffect)->put_BorderMode(get_abi(value)));
}

template <typename D> Windows::Graphics::Effects::IGraphicsEffectSource consume_Microsoft_Graphics_Canvas_Effects_ICropEffect<D>::Source() const
{
    Windows::Graphics::Effects::IGraphicsEffectSource source{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ICropEffect)->get_Source(put_abi(source)));
    return source;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ICropEffect<D>::Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ICropEffect)->put_Source(get_abi(source)));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Effects_ICrossFadeEffect<D>::CrossFade() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ICrossFadeEffect)->get_CrossFade(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ICrossFadeEffect<D>::CrossFade(float value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ICrossFadeEffect)->put_CrossFade(value));
}

template <typename D> Windows::Graphics::Effects::IGraphicsEffectSource consume_Microsoft_Graphics_Canvas_Effects_ICrossFadeEffect<D>::Source2() const
{
    Windows::Graphics::Effects::IGraphicsEffectSource source{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ICrossFadeEffect)->get_Source2(put_abi(source)));
    return source;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ICrossFadeEffect<D>::Source2(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ICrossFadeEffect)->put_Source2(get_abi(source)));
}

template <typename D> Windows::Graphics::Effects::IGraphicsEffectSource consume_Microsoft_Graphics_Canvas_Effects_ICrossFadeEffect<D>::Source1() const
{
    Windows::Graphics::Effects::IGraphicsEffectSource source{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ICrossFadeEffect)->get_Source1(put_abi(source)));
    return source;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ICrossFadeEffect<D>::Source1(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ICrossFadeEffect)->put_Source1(get_abi(source)));
}

template <typename D> bool consume_Microsoft_Graphics_Canvas_Effects_ICrossFadeEffectStatics<D>::IsSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ICrossFadeEffectStatics)->get_IsSupported(&value));
    return value;
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Effects_IDirectionalBlurEffect<D>::BlurAmount() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IDirectionalBlurEffect)->get_BlurAmount(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IDirectionalBlurEffect<D>::BlurAmount(float value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IDirectionalBlurEffect)->put_BlurAmount(value));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Effects_IDirectionalBlurEffect<D>::Angle() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IDirectionalBlurEffect)->get_Angle(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IDirectionalBlurEffect<D>::Angle(float value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IDirectionalBlurEffect)->put_Angle(value));
}

template <typename D> Microsoft::Graphics::Canvas::Effects::EffectOptimization consume_Microsoft_Graphics_Canvas_Effects_IDirectionalBlurEffect<D>::Optimization() const
{
    Microsoft::Graphics::Canvas::Effects::EffectOptimization value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IDirectionalBlurEffect)->get_Optimization(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IDirectionalBlurEffect<D>::Optimization(Microsoft::Graphics::Canvas::Effects::EffectOptimization const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IDirectionalBlurEffect)->put_Optimization(get_abi(value)));
}

template <typename D> Microsoft::Graphics::Canvas::Effects::EffectBorderMode consume_Microsoft_Graphics_Canvas_Effects_IDirectionalBlurEffect<D>::BorderMode() const
{
    Microsoft::Graphics::Canvas::Effects::EffectBorderMode value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IDirectionalBlurEffect)->get_BorderMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IDirectionalBlurEffect<D>::BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IDirectionalBlurEffect)->put_BorderMode(get_abi(value)));
}

template <typename D> Windows::Graphics::Effects::IGraphicsEffectSource consume_Microsoft_Graphics_Canvas_Effects_IDirectionalBlurEffect<D>::Source() const
{
    Windows::Graphics::Effects::IGraphicsEffectSource source{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IDirectionalBlurEffect)->get_Source(put_abi(source)));
    return source;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IDirectionalBlurEffect<D>::Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IDirectionalBlurEffect)->put_Source(get_abi(source)));
}

template <typename D> com_array<float> consume_Microsoft_Graphics_Canvas_Effects_IDiscreteTransferEffect<D>::RedTable() const
{
    com_array<float> valueElements;
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IDiscreteTransferEffect)->get_RedTable(impl::put_size_abi(valueElements), put_abi(valueElements)));
    return valueElements;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IDiscreteTransferEffect<D>::RedTable(array_view<float const> valueElements) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IDiscreteTransferEffect)->put_RedTable(valueElements.size(), get_abi(valueElements)));
}

template <typename D> bool consume_Microsoft_Graphics_Canvas_Effects_IDiscreteTransferEffect<D>::RedDisable() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IDiscreteTransferEffect)->get_RedDisable(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IDiscreteTransferEffect<D>::RedDisable(bool value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IDiscreteTransferEffect)->put_RedDisable(value));
}

template <typename D> com_array<float> consume_Microsoft_Graphics_Canvas_Effects_IDiscreteTransferEffect<D>::GreenTable() const
{
    com_array<float> valueElements;
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IDiscreteTransferEffect)->get_GreenTable(impl::put_size_abi(valueElements), put_abi(valueElements)));
    return valueElements;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IDiscreteTransferEffect<D>::GreenTable(array_view<float const> valueElements) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IDiscreteTransferEffect)->put_GreenTable(valueElements.size(), get_abi(valueElements)));
}

template <typename D> bool consume_Microsoft_Graphics_Canvas_Effects_IDiscreteTransferEffect<D>::GreenDisable() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IDiscreteTransferEffect)->get_GreenDisable(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IDiscreteTransferEffect<D>::GreenDisable(bool value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IDiscreteTransferEffect)->put_GreenDisable(value));
}

template <typename D> com_array<float> consume_Microsoft_Graphics_Canvas_Effects_IDiscreteTransferEffect<D>::BlueTable() const
{
    com_array<float> valueElements;
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IDiscreteTransferEffect)->get_BlueTable(impl::put_size_abi(valueElements), put_abi(valueElements)));
    return valueElements;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IDiscreteTransferEffect<D>::BlueTable(array_view<float const> valueElements) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IDiscreteTransferEffect)->put_BlueTable(valueElements.size(), get_abi(valueElements)));
}

template <typename D> bool consume_Microsoft_Graphics_Canvas_Effects_IDiscreteTransferEffect<D>::BlueDisable() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IDiscreteTransferEffect)->get_BlueDisable(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IDiscreteTransferEffect<D>::BlueDisable(bool value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IDiscreteTransferEffect)->put_BlueDisable(value));
}

template <typename D> com_array<float> consume_Microsoft_Graphics_Canvas_Effects_IDiscreteTransferEffect<D>::AlphaTable() const
{
    com_array<float> valueElements;
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IDiscreteTransferEffect)->get_AlphaTable(impl::put_size_abi(valueElements), put_abi(valueElements)));
    return valueElements;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IDiscreteTransferEffect<D>::AlphaTable(array_view<float const> valueElements) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IDiscreteTransferEffect)->put_AlphaTable(valueElements.size(), get_abi(valueElements)));
}

template <typename D> bool consume_Microsoft_Graphics_Canvas_Effects_IDiscreteTransferEffect<D>::AlphaDisable() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IDiscreteTransferEffect)->get_AlphaDisable(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IDiscreteTransferEffect<D>::AlphaDisable(bool value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IDiscreteTransferEffect)->put_AlphaDisable(value));
}

template <typename D> bool consume_Microsoft_Graphics_Canvas_Effects_IDiscreteTransferEffect<D>::ClampOutput() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IDiscreteTransferEffect)->get_ClampOutput(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IDiscreteTransferEffect<D>::ClampOutput(bool value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IDiscreteTransferEffect)->put_ClampOutput(value));
}

template <typename D> Windows::Graphics::Effects::IGraphicsEffectSource consume_Microsoft_Graphics_Canvas_Effects_IDiscreteTransferEffect<D>::Source() const
{
    Windows::Graphics::Effects::IGraphicsEffectSource source{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IDiscreteTransferEffect)->get_Source(put_abi(source)));
    return source;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IDiscreteTransferEffect<D>::Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IDiscreteTransferEffect)->put_Source(get_abi(source)));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Effects_IDisplacementMapEffect<D>::Amount() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IDisplacementMapEffect)->get_Amount(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IDisplacementMapEffect<D>::Amount(float value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IDisplacementMapEffect)->put_Amount(value));
}

template <typename D> Microsoft::Graphics::Canvas::Effects::EffectChannelSelect consume_Microsoft_Graphics_Canvas_Effects_IDisplacementMapEffect<D>::XChannelSelect() const
{
    Microsoft::Graphics::Canvas::Effects::EffectChannelSelect value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IDisplacementMapEffect)->get_XChannelSelect(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IDisplacementMapEffect<D>::XChannelSelect(Microsoft::Graphics::Canvas::Effects::EffectChannelSelect const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IDisplacementMapEffect)->put_XChannelSelect(get_abi(value)));
}

template <typename D> Microsoft::Graphics::Canvas::Effects::EffectChannelSelect consume_Microsoft_Graphics_Canvas_Effects_IDisplacementMapEffect<D>::YChannelSelect() const
{
    Microsoft::Graphics::Canvas::Effects::EffectChannelSelect value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IDisplacementMapEffect)->get_YChannelSelect(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IDisplacementMapEffect<D>::YChannelSelect(Microsoft::Graphics::Canvas::Effects::EffectChannelSelect const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IDisplacementMapEffect)->put_YChannelSelect(get_abi(value)));
}

template <typename D> Windows::Graphics::Effects::IGraphicsEffectSource consume_Microsoft_Graphics_Canvas_Effects_IDisplacementMapEffect<D>::Source() const
{
    Windows::Graphics::Effects::IGraphicsEffectSource source{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IDisplacementMapEffect)->get_Source(put_abi(source)));
    return source;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IDisplacementMapEffect<D>::Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IDisplacementMapEffect)->put_Source(get_abi(source)));
}

template <typename D> Windows::Graphics::Effects::IGraphicsEffectSource consume_Microsoft_Graphics_Canvas_Effects_IDisplacementMapEffect<D>::Displacement() const
{
    Windows::Graphics::Effects::IGraphicsEffectSource source{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IDisplacementMapEffect)->get_Displacement(put_abi(source)));
    return source;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IDisplacementMapEffect<D>::Displacement(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IDisplacementMapEffect)->put_Displacement(get_abi(source)));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Effects_IDistantDiffuseEffect<D>::Azimuth() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IDistantDiffuseEffect)->get_Azimuth(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IDistantDiffuseEffect<D>::Azimuth(float value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IDistantDiffuseEffect)->put_Azimuth(value));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Effects_IDistantDiffuseEffect<D>::Elevation() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IDistantDiffuseEffect)->get_Elevation(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IDistantDiffuseEffect<D>::Elevation(float value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IDistantDiffuseEffect)->put_Elevation(value));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Effects_IDistantDiffuseEffect<D>::DiffuseAmount() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IDistantDiffuseEffect)->get_DiffuseAmount(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IDistantDiffuseEffect<D>::DiffuseAmount(float value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IDistantDiffuseEffect)->put_DiffuseAmount(value));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Effects_IDistantDiffuseEffect<D>::HeightMapScale() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IDistantDiffuseEffect)->get_HeightMapScale(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IDistantDiffuseEffect<D>::HeightMapScale(float value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IDistantDiffuseEffect)->put_HeightMapScale(value));
}

template <typename D> Windows::UI::Color consume_Microsoft_Graphics_Canvas_Effects_IDistantDiffuseEffect<D>::LightColor() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IDistantDiffuseEffect)->get_LightColor(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IDistantDiffuseEffect<D>::LightColor(Windows::UI::Color const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IDistantDiffuseEffect)->put_LightColor(get_abi(value)));
}

template <typename D> Windows::Foundation::Numerics::float2 consume_Microsoft_Graphics_Canvas_Effects_IDistantDiffuseEffect<D>::HeightMapKernelSize() const
{
    Windows::Foundation::Numerics::float2 value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IDistantDiffuseEffect)->get_HeightMapKernelSize(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IDistantDiffuseEffect<D>::HeightMapKernelSize(Windows::Foundation::Numerics::float2 const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IDistantDiffuseEffect)->put_HeightMapKernelSize(get_abi(value)));
}

template <typename D> Microsoft::Graphics::Canvas::CanvasImageInterpolation consume_Microsoft_Graphics_Canvas_Effects_IDistantDiffuseEffect<D>::HeightMapInterpolationMode() const
{
    Microsoft::Graphics::Canvas::CanvasImageInterpolation value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IDistantDiffuseEffect)->get_HeightMapInterpolationMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IDistantDiffuseEffect<D>::HeightMapInterpolationMode(Microsoft::Graphics::Canvas::CanvasImageInterpolation const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IDistantDiffuseEffect)->put_HeightMapInterpolationMode(get_abi(value)));
}

template <typename D> Windows::Foundation::Numerics::float4 consume_Microsoft_Graphics_Canvas_Effects_IDistantDiffuseEffect<D>::LightColorHdr() const
{
    Windows::Foundation::Numerics::float4 value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IDistantDiffuseEffect)->get_LightColorHdr(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IDistantDiffuseEffect<D>::LightColorHdr(Windows::Foundation::Numerics::float4 const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IDistantDiffuseEffect)->put_LightColorHdr(get_abi(value)));
}

template <typename D> Windows::Graphics::Effects::IGraphicsEffectSource consume_Microsoft_Graphics_Canvas_Effects_IDistantDiffuseEffect<D>::Source() const
{
    Windows::Graphics::Effects::IGraphicsEffectSource source{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IDistantDiffuseEffect)->get_Source(put_abi(source)));
    return source;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IDistantDiffuseEffect<D>::Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IDistantDiffuseEffect)->put_Source(get_abi(source)));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Effects_IDistantSpecularEffect<D>::Azimuth() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IDistantSpecularEffect)->get_Azimuth(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IDistantSpecularEffect<D>::Azimuth(float value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IDistantSpecularEffect)->put_Azimuth(value));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Effects_IDistantSpecularEffect<D>::Elevation() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IDistantSpecularEffect)->get_Elevation(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IDistantSpecularEffect<D>::Elevation(float value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IDistantSpecularEffect)->put_Elevation(value));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Effects_IDistantSpecularEffect<D>::SpecularExponent() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IDistantSpecularEffect)->get_SpecularExponent(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IDistantSpecularEffect<D>::SpecularExponent(float value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IDistantSpecularEffect)->put_SpecularExponent(value));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Effects_IDistantSpecularEffect<D>::SpecularAmount() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IDistantSpecularEffect)->get_SpecularAmount(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IDistantSpecularEffect<D>::SpecularAmount(float value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IDistantSpecularEffect)->put_SpecularAmount(value));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Effects_IDistantSpecularEffect<D>::HeightMapScale() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IDistantSpecularEffect)->get_HeightMapScale(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IDistantSpecularEffect<D>::HeightMapScale(float value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IDistantSpecularEffect)->put_HeightMapScale(value));
}

template <typename D> Windows::UI::Color consume_Microsoft_Graphics_Canvas_Effects_IDistantSpecularEffect<D>::LightColor() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IDistantSpecularEffect)->get_LightColor(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IDistantSpecularEffect<D>::LightColor(Windows::UI::Color const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IDistantSpecularEffect)->put_LightColor(get_abi(value)));
}

template <typename D> Windows::Foundation::Numerics::float2 consume_Microsoft_Graphics_Canvas_Effects_IDistantSpecularEffect<D>::HeightMapKernelSize() const
{
    Windows::Foundation::Numerics::float2 value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IDistantSpecularEffect)->get_HeightMapKernelSize(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IDistantSpecularEffect<D>::HeightMapKernelSize(Windows::Foundation::Numerics::float2 const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IDistantSpecularEffect)->put_HeightMapKernelSize(get_abi(value)));
}

template <typename D> Microsoft::Graphics::Canvas::CanvasImageInterpolation consume_Microsoft_Graphics_Canvas_Effects_IDistantSpecularEffect<D>::HeightMapInterpolationMode() const
{
    Microsoft::Graphics::Canvas::CanvasImageInterpolation value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IDistantSpecularEffect)->get_HeightMapInterpolationMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IDistantSpecularEffect<D>::HeightMapInterpolationMode(Microsoft::Graphics::Canvas::CanvasImageInterpolation const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IDistantSpecularEffect)->put_HeightMapInterpolationMode(get_abi(value)));
}

template <typename D> Windows::Foundation::Numerics::float4 consume_Microsoft_Graphics_Canvas_Effects_IDistantSpecularEffect<D>::LightColorHdr() const
{
    Windows::Foundation::Numerics::float4 value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IDistantSpecularEffect)->get_LightColorHdr(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IDistantSpecularEffect<D>::LightColorHdr(Windows::Foundation::Numerics::float4 const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IDistantSpecularEffect)->put_LightColorHdr(get_abi(value)));
}

template <typename D> Windows::Graphics::Effects::IGraphicsEffectSource consume_Microsoft_Graphics_Canvas_Effects_IDistantSpecularEffect<D>::Source() const
{
    Windows::Graphics::Effects::IGraphicsEffectSource source{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IDistantSpecularEffect)->get_Source(put_abi(source)));
    return source;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IDistantSpecularEffect<D>::Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IDistantSpecularEffect)->put_Source(get_abi(source)));
}

template <typename D> Microsoft::Graphics::Canvas::CanvasImageInterpolation consume_Microsoft_Graphics_Canvas_Effects_IDpiCompensationEffect<D>::InterpolationMode() const
{
    Microsoft::Graphics::Canvas::CanvasImageInterpolation value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IDpiCompensationEffect)->get_InterpolationMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IDpiCompensationEffect<D>::InterpolationMode(Microsoft::Graphics::Canvas::CanvasImageInterpolation const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IDpiCompensationEffect)->put_InterpolationMode(get_abi(value)));
}

template <typename D> Microsoft::Graphics::Canvas::Effects::EffectBorderMode consume_Microsoft_Graphics_Canvas_Effects_IDpiCompensationEffect<D>::BorderMode() const
{
    Microsoft::Graphics::Canvas::Effects::EffectBorderMode value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IDpiCompensationEffect)->get_BorderMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IDpiCompensationEffect<D>::BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IDpiCompensationEffect)->put_BorderMode(get_abi(value)));
}

template <typename D> Windows::Foundation::Numerics::float2 consume_Microsoft_Graphics_Canvas_Effects_IDpiCompensationEffect<D>::SourceDpi() const
{
    Windows::Foundation::Numerics::float2 value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IDpiCompensationEffect)->get_SourceDpi(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IDpiCompensationEffect<D>::SourceDpi(Windows::Foundation::Numerics::float2 const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IDpiCompensationEffect)->put_SourceDpi(get_abi(value)));
}

template <typename D> Windows::Graphics::Effects::IGraphicsEffectSource consume_Microsoft_Graphics_Canvas_Effects_IDpiCompensationEffect<D>::Source() const
{
    Windows::Graphics::Effects::IGraphicsEffectSource source{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IDpiCompensationEffect)->get_Source(put_abi(source)));
    return source;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IDpiCompensationEffect<D>::Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IDpiCompensationEffect)->put_Source(get_abi(source)));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Effects_IEdgeDetectionEffect<D>::Amount() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IEdgeDetectionEffect)->get_Amount(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IEdgeDetectionEffect<D>::Amount(float value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IEdgeDetectionEffect)->put_Amount(value));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Effects_IEdgeDetectionEffect<D>::BlurAmount() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IEdgeDetectionEffect)->get_BlurAmount(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IEdgeDetectionEffect<D>::BlurAmount(float value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IEdgeDetectionEffect)->put_BlurAmount(value));
}

template <typename D> Microsoft::Graphics::Canvas::Effects::EdgeDetectionEffectMode consume_Microsoft_Graphics_Canvas_Effects_IEdgeDetectionEffect<D>::Mode() const
{
    Microsoft::Graphics::Canvas::Effects::EdgeDetectionEffectMode value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IEdgeDetectionEffect)->get_Mode(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IEdgeDetectionEffect<D>::Mode(Microsoft::Graphics::Canvas::Effects::EdgeDetectionEffectMode const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IEdgeDetectionEffect)->put_Mode(get_abi(value)));
}

template <typename D> bool consume_Microsoft_Graphics_Canvas_Effects_IEdgeDetectionEffect<D>::OverlayEdges() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IEdgeDetectionEffect)->get_OverlayEdges(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IEdgeDetectionEffect<D>::OverlayEdges(bool value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IEdgeDetectionEffect)->put_OverlayEdges(value));
}

template <typename D> Microsoft::Graphics::Canvas::CanvasAlphaMode consume_Microsoft_Graphics_Canvas_Effects_IEdgeDetectionEffect<D>::AlphaMode() const
{
    Microsoft::Graphics::Canvas::CanvasAlphaMode value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IEdgeDetectionEffect)->get_AlphaMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IEdgeDetectionEffect<D>::AlphaMode(Microsoft::Graphics::Canvas::CanvasAlphaMode const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IEdgeDetectionEffect)->put_AlphaMode(get_abi(value)));
}

template <typename D> Windows::Graphics::Effects::IGraphicsEffectSource consume_Microsoft_Graphics_Canvas_Effects_IEdgeDetectionEffect<D>::Source() const
{
    Windows::Graphics::Effects::IGraphicsEffectSource source{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IEdgeDetectionEffect)->get_Source(put_abi(source)));
    return source;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IEdgeDetectionEffect<D>::Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IEdgeDetectionEffect)->put_Source(get_abi(source)));
}

template <typename D> Microsoft::Graphics::Canvas::CanvasDevice consume_Microsoft_Graphics_Canvas_Effects_IEffectTransferTable3D<D>::Device() const
{
    Microsoft::Graphics::Canvas::CanvasDevice value{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IEffectTransferTable3D)->get_Device(put_abi(value)));
    return value;
}

template <typename D> Microsoft::Graphics::Canvas::Effects::EffectTransferTable3D consume_Microsoft_Graphics_Canvas_Effects_IEffectTransferTable3DStatics<D>::CreateFromColors(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<Windows::UI::Color const> colors, int32_t sizeB, int32_t sizeG, int32_t sizeR) const
{
    Microsoft::Graphics::Canvas::Effects::EffectTransferTable3D result{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IEffectTransferTable3DStatics)->CreateFromColors(get_abi(resourceCreator), colors.size(), get_abi(colors), sizeB, sizeG, sizeR, put_abi(result)));
    return result;
}

template <typename D> Microsoft::Graphics::Canvas::Effects::EffectTransferTable3D consume_Microsoft_Graphics_Canvas_Effects_IEffectTransferTable3DStatics<D>::CreateFromBytes(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<uint8_t const> bytes, int32_t sizeB, int32_t sizeG, int32_t sizeR, Windows::Graphics::DirectX::DirectXPixelFormat const& format) const
{
    Microsoft::Graphics::Canvas::Effects::EffectTransferTable3D result{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IEffectTransferTable3DStatics)->CreateFromBytes(get_abi(resourceCreator), bytes.size(), get_abi(bytes), sizeB, sizeG, sizeR, get_abi(format), put_abi(result)));
    return result;
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Effects_IEmbossEffect<D>::Amount() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IEmbossEffect)->get_Amount(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IEmbossEffect<D>::Amount(float value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IEmbossEffect)->put_Amount(value));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Effects_IEmbossEffect<D>::Angle() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IEmbossEffect)->get_Angle(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IEmbossEffect<D>::Angle(float value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IEmbossEffect)->put_Angle(value));
}

template <typename D> Windows::Graphics::Effects::IGraphicsEffectSource consume_Microsoft_Graphics_Canvas_Effects_IEmbossEffect<D>::Source() const
{
    Windows::Graphics::Effects::IGraphicsEffectSource source{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IEmbossEffect)->get_Source(put_abi(source)));
    return source;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IEmbossEffect<D>::Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IEmbossEffect)->put_Source(get_abi(source)));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Effects_IExposureEffect<D>::Exposure() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IExposureEffect)->get_Exposure(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IExposureEffect<D>::Exposure(float value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IExposureEffect)->put_Exposure(value));
}

template <typename D> Windows::Graphics::Effects::IGraphicsEffectSource consume_Microsoft_Graphics_Canvas_Effects_IExposureEffect<D>::Source() const
{
    Windows::Graphics::Effects::IGraphicsEffectSource source{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IExposureEffect)->get_Source(put_abi(source)));
    return source;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IExposureEffect<D>::Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IExposureEffect)->put_Source(get_abi(source)));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Effects_IGammaTransferEffect<D>::RedAmplitude() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IGammaTransferEffect)->get_RedAmplitude(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IGammaTransferEffect<D>::RedAmplitude(float value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IGammaTransferEffect)->put_RedAmplitude(value));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Effects_IGammaTransferEffect<D>::RedExponent() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IGammaTransferEffect)->get_RedExponent(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IGammaTransferEffect<D>::RedExponent(float value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IGammaTransferEffect)->put_RedExponent(value));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Effects_IGammaTransferEffect<D>::RedOffset() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IGammaTransferEffect)->get_RedOffset(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IGammaTransferEffect<D>::RedOffset(float value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IGammaTransferEffect)->put_RedOffset(value));
}

template <typename D> bool consume_Microsoft_Graphics_Canvas_Effects_IGammaTransferEffect<D>::RedDisable() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IGammaTransferEffect)->get_RedDisable(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IGammaTransferEffect<D>::RedDisable(bool value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IGammaTransferEffect)->put_RedDisable(value));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Effects_IGammaTransferEffect<D>::GreenAmplitude() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IGammaTransferEffect)->get_GreenAmplitude(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IGammaTransferEffect<D>::GreenAmplitude(float value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IGammaTransferEffect)->put_GreenAmplitude(value));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Effects_IGammaTransferEffect<D>::GreenExponent() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IGammaTransferEffect)->get_GreenExponent(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IGammaTransferEffect<D>::GreenExponent(float value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IGammaTransferEffect)->put_GreenExponent(value));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Effects_IGammaTransferEffect<D>::GreenOffset() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IGammaTransferEffect)->get_GreenOffset(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IGammaTransferEffect<D>::GreenOffset(float value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IGammaTransferEffect)->put_GreenOffset(value));
}

template <typename D> bool consume_Microsoft_Graphics_Canvas_Effects_IGammaTransferEffect<D>::GreenDisable() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IGammaTransferEffect)->get_GreenDisable(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IGammaTransferEffect<D>::GreenDisable(bool value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IGammaTransferEffect)->put_GreenDisable(value));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Effects_IGammaTransferEffect<D>::BlueAmplitude() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IGammaTransferEffect)->get_BlueAmplitude(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IGammaTransferEffect<D>::BlueAmplitude(float value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IGammaTransferEffect)->put_BlueAmplitude(value));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Effects_IGammaTransferEffect<D>::BlueExponent() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IGammaTransferEffect)->get_BlueExponent(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IGammaTransferEffect<D>::BlueExponent(float value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IGammaTransferEffect)->put_BlueExponent(value));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Effects_IGammaTransferEffect<D>::BlueOffset() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IGammaTransferEffect)->get_BlueOffset(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IGammaTransferEffect<D>::BlueOffset(float value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IGammaTransferEffect)->put_BlueOffset(value));
}

template <typename D> bool consume_Microsoft_Graphics_Canvas_Effects_IGammaTransferEffect<D>::BlueDisable() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IGammaTransferEffect)->get_BlueDisable(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IGammaTransferEffect<D>::BlueDisable(bool value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IGammaTransferEffect)->put_BlueDisable(value));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Effects_IGammaTransferEffect<D>::AlphaAmplitude() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IGammaTransferEffect)->get_AlphaAmplitude(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IGammaTransferEffect<D>::AlphaAmplitude(float value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IGammaTransferEffect)->put_AlphaAmplitude(value));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Effects_IGammaTransferEffect<D>::AlphaExponent() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IGammaTransferEffect)->get_AlphaExponent(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IGammaTransferEffect<D>::AlphaExponent(float value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IGammaTransferEffect)->put_AlphaExponent(value));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Effects_IGammaTransferEffect<D>::AlphaOffset() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IGammaTransferEffect)->get_AlphaOffset(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IGammaTransferEffect<D>::AlphaOffset(float value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IGammaTransferEffect)->put_AlphaOffset(value));
}

template <typename D> bool consume_Microsoft_Graphics_Canvas_Effects_IGammaTransferEffect<D>::AlphaDisable() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IGammaTransferEffect)->get_AlphaDisable(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IGammaTransferEffect<D>::AlphaDisable(bool value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IGammaTransferEffect)->put_AlphaDisable(value));
}

template <typename D> bool consume_Microsoft_Graphics_Canvas_Effects_IGammaTransferEffect<D>::ClampOutput() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IGammaTransferEffect)->get_ClampOutput(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IGammaTransferEffect<D>::ClampOutput(bool value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IGammaTransferEffect)->put_ClampOutput(value));
}

template <typename D> Windows::Graphics::Effects::IGraphicsEffectSource consume_Microsoft_Graphics_Canvas_Effects_IGammaTransferEffect<D>::Source() const
{
    Windows::Graphics::Effects::IGraphicsEffectSource source{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IGammaTransferEffect)->get_Source(put_abi(source)));
    return source;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IGammaTransferEffect<D>::Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IGammaTransferEffect)->put_Source(get_abi(source)));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Effects_IGaussianBlurEffect<D>::BlurAmount() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IGaussianBlurEffect)->get_BlurAmount(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IGaussianBlurEffect<D>::BlurAmount(float value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IGaussianBlurEffect)->put_BlurAmount(value));
}

template <typename D> Microsoft::Graphics::Canvas::Effects::EffectOptimization consume_Microsoft_Graphics_Canvas_Effects_IGaussianBlurEffect<D>::Optimization() const
{
    Microsoft::Graphics::Canvas::Effects::EffectOptimization value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IGaussianBlurEffect)->get_Optimization(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IGaussianBlurEffect<D>::Optimization(Microsoft::Graphics::Canvas::Effects::EffectOptimization const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IGaussianBlurEffect)->put_Optimization(get_abi(value)));
}

template <typename D> Microsoft::Graphics::Canvas::Effects::EffectBorderMode consume_Microsoft_Graphics_Canvas_Effects_IGaussianBlurEffect<D>::BorderMode() const
{
    Microsoft::Graphics::Canvas::Effects::EffectBorderMode value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IGaussianBlurEffect)->get_BorderMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IGaussianBlurEffect<D>::BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IGaussianBlurEffect)->put_BorderMode(get_abi(value)));
}

template <typename D> Windows::Graphics::Effects::IGraphicsEffectSource consume_Microsoft_Graphics_Canvas_Effects_IGaussianBlurEffect<D>::Source() const
{
    Windows::Graphics::Effects::IGraphicsEffectSource source{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IGaussianBlurEffect)->get_Source(put_abi(source)));
    return source;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IGaussianBlurEffect<D>::Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IGaussianBlurEffect)->put_Source(get_abi(source)));
}

template <typename D> Windows::Graphics::Effects::IGraphicsEffectSource consume_Microsoft_Graphics_Canvas_Effects_IGrayscaleEffect<D>::Source() const
{
    Windows::Graphics::Effects::IGraphicsEffectSource source{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IGrayscaleEffect)->get_Source(put_abi(source)));
    return source;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IGrayscaleEffect<D>::Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IGrayscaleEffect)->put_Source(get_abi(source)));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Effects_IHighlightsAndShadowsEffect<D>::Highlights() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IHighlightsAndShadowsEffect)->get_Highlights(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IHighlightsAndShadowsEffect<D>::Highlights(float value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IHighlightsAndShadowsEffect)->put_Highlights(value));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Effects_IHighlightsAndShadowsEffect<D>::Shadows() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IHighlightsAndShadowsEffect)->get_Shadows(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IHighlightsAndShadowsEffect<D>::Shadows(float value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IHighlightsAndShadowsEffect)->put_Shadows(value));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Effects_IHighlightsAndShadowsEffect<D>::Clarity() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IHighlightsAndShadowsEffect)->get_Clarity(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IHighlightsAndShadowsEffect<D>::Clarity(float value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IHighlightsAndShadowsEffect)->put_Clarity(value));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Effects_IHighlightsAndShadowsEffect<D>::MaskBlurAmount() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IHighlightsAndShadowsEffect)->get_MaskBlurAmount(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IHighlightsAndShadowsEffect<D>::MaskBlurAmount(float value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IHighlightsAndShadowsEffect)->put_MaskBlurAmount(value));
}

template <typename D> bool consume_Microsoft_Graphics_Canvas_Effects_IHighlightsAndShadowsEffect<D>::SourceIsLinearGamma() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IHighlightsAndShadowsEffect)->get_SourceIsLinearGamma(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IHighlightsAndShadowsEffect<D>::SourceIsLinearGamma(bool value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IHighlightsAndShadowsEffect)->put_SourceIsLinearGamma(value));
}

template <typename D> Windows::Graphics::Effects::IGraphicsEffectSource consume_Microsoft_Graphics_Canvas_Effects_IHighlightsAndShadowsEffect<D>::Source() const
{
    Windows::Graphics::Effects::IGraphicsEffectSource source{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IHighlightsAndShadowsEffect)->get_Source(put_abi(source)));
    return source;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IHighlightsAndShadowsEffect<D>::Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IHighlightsAndShadowsEffect)->put_Source(get_abi(source)));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Effects_IHueRotationEffect<D>::Angle() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IHueRotationEffect)->get_Angle(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IHueRotationEffect<D>::Angle(float value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IHueRotationEffect)->put_Angle(value));
}

template <typename D> Windows::Graphics::Effects::IGraphicsEffectSource consume_Microsoft_Graphics_Canvas_Effects_IHueRotationEffect<D>::Source() const
{
    Windows::Graphics::Effects::IGraphicsEffectSource source{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IHueRotationEffect)->get_Source(put_abi(source)));
    return source;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IHueRotationEffect<D>::Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IHueRotationEffect)->put_Source(get_abi(source)));
}

template <typename D> Microsoft::Graphics::Canvas::Effects::EffectHueColorSpace consume_Microsoft_Graphics_Canvas_Effects_IHueToRgbEffect<D>::SourceColorSpace() const
{
    Microsoft::Graphics::Canvas::Effects::EffectHueColorSpace value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IHueToRgbEffect)->get_SourceColorSpace(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IHueToRgbEffect<D>::SourceColorSpace(Microsoft::Graphics::Canvas::Effects::EffectHueColorSpace const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IHueToRgbEffect)->put_SourceColorSpace(get_abi(value)));
}

template <typename D> Windows::Graphics::Effects::IGraphicsEffectSource consume_Microsoft_Graphics_Canvas_Effects_IHueToRgbEffect<D>::Source() const
{
    Windows::Graphics::Effects::IGraphicsEffectSource source{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IHueToRgbEffect)->get_Source(put_abi(source)));
    return source;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IHueToRgbEffect<D>::Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IHueToRgbEffect)->put_Source(get_abi(source)));
}

template <typename D> Windows::Graphics::Effects::IGraphicsEffectSource consume_Microsoft_Graphics_Canvas_Effects_IInvertEffect<D>::Source() const
{
    Windows::Graphics::Effects::IGraphicsEffectSource source{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IInvertEffect)->get_Source(put_abi(source)));
    return source;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IInvertEffect<D>::Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IInvertEffect)->put_Source(get_abi(source)));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Effects_ILinearTransferEffect<D>::RedOffset() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ILinearTransferEffect)->get_RedOffset(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ILinearTransferEffect<D>::RedOffset(float value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ILinearTransferEffect)->put_RedOffset(value));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Effects_ILinearTransferEffect<D>::RedSlope() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ILinearTransferEffect)->get_RedSlope(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ILinearTransferEffect<D>::RedSlope(float value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ILinearTransferEffect)->put_RedSlope(value));
}

template <typename D> bool consume_Microsoft_Graphics_Canvas_Effects_ILinearTransferEffect<D>::RedDisable() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ILinearTransferEffect)->get_RedDisable(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ILinearTransferEffect<D>::RedDisable(bool value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ILinearTransferEffect)->put_RedDisable(value));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Effects_ILinearTransferEffect<D>::GreenOffset() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ILinearTransferEffect)->get_GreenOffset(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ILinearTransferEffect<D>::GreenOffset(float value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ILinearTransferEffect)->put_GreenOffset(value));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Effects_ILinearTransferEffect<D>::GreenSlope() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ILinearTransferEffect)->get_GreenSlope(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ILinearTransferEffect<D>::GreenSlope(float value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ILinearTransferEffect)->put_GreenSlope(value));
}

template <typename D> bool consume_Microsoft_Graphics_Canvas_Effects_ILinearTransferEffect<D>::GreenDisable() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ILinearTransferEffect)->get_GreenDisable(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ILinearTransferEffect<D>::GreenDisable(bool value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ILinearTransferEffect)->put_GreenDisable(value));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Effects_ILinearTransferEffect<D>::BlueOffset() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ILinearTransferEffect)->get_BlueOffset(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ILinearTransferEffect<D>::BlueOffset(float value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ILinearTransferEffect)->put_BlueOffset(value));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Effects_ILinearTransferEffect<D>::BlueSlope() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ILinearTransferEffect)->get_BlueSlope(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ILinearTransferEffect<D>::BlueSlope(float value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ILinearTransferEffect)->put_BlueSlope(value));
}

template <typename D> bool consume_Microsoft_Graphics_Canvas_Effects_ILinearTransferEffect<D>::BlueDisable() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ILinearTransferEffect)->get_BlueDisable(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ILinearTransferEffect<D>::BlueDisable(bool value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ILinearTransferEffect)->put_BlueDisable(value));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Effects_ILinearTransferEffect<D>::AlphaOffset() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ILinearTransferEffect)->get_AlphaOffset(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ILinearTransferEffect<D>::AlphaOffset(float value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ILinearTransferEffect)->put_AlphaOffset(value));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Effects_ILinearTransferEffect<D>::AlphaSlope() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ILinearTransferEffect)->get_AlphaSlope(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ILinearTransferEffect<D>::AlphaSlope(float value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ILinearTransferEffect)->put_AlphaSlope(value));
}

template <typename D> bool consume_Microsoft_Graphics_Canvas_Effects_ILinearTransferEffect<D>::AlphaDisable() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ILinearTransferEffect)->get_AlphaDisable(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ILinearTransferEffect<D>::AlphaDisable(bool value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ILinearTransferEffect)->put_AlphaDisable(value));
}

template <typename D> bool consume_Microsoft_Graphics_Canvas_Effects_ILinearTransferEffect<D>::ClampOutput() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ILinearTransferEffect)->get_ClampOutput(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ILinearTransferEffect<D>::ClampOutput(bool value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ILinearTransferEffect)->put_ClampOutput(value));
}

template <typename D> Windows::Graphics::Effects::IGraphicsEffectSource consume_Microsoft_Graphics_Canvas_Effects_ILinearTransferEffect<D>::Source() const
{
    Windows::Graphics::Effects::IGraphicsEffectSource source{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ILinearTransferEffect)->get_Source(put_abi(source)));
    return source;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ILinearTransferEffect<D>::Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ILinearTransferEffect)->put_Source(get_abi(source)));
}

template <typename D> Windows::Graphics::Effects::IGraphicsEffectSource consume_Microsoft_Graphics_Canvas_Effects_ILuminanceToAlphaEffect<D>::Source() const
{
    Windows::Graphics::Effects::IGraphicsEffectSource source{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ILuminanceToAlphaEffect)->get_Source(put_abi(source)));
    return source;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ILuminanceToAlphaEffect<D>::Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ILuminanceToAlphaEffect)->put_Source(get_abi(source)));
}

template <typename D> Microsoft::Graphics::Canvas::Effects::MorphologyEffectMode consume_Microsoft_Graphics_Canvas_Effects_IMorphologyEffect<D>::Mode() const
{
    Microsoft::Graphics::Canvas::Effects::MorphologyEffectMode value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IMorphologyEffect)->get_Mode(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IMorphologyEffect<D>::Mode(Microsoft::Graphics::Canvas::Effects::MorphologyEffectMode const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IMorphologyEffect)->put_Mode(get_abi(value)));
}

template <typename D> int32_t consume_Microsoft_Graphics_Canvas_Effects_IMorphologyEffect<D>::Width() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IMorphologyEffect)->get_Width(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IMorphologyEffect<D>::Width(int32_t value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IMorphologyEffect)->put_Width(value));
}

template <typename D> int32_t consume_Microsoft_Graphics_Canvas_Effects_IMorphologyEffect<D>::Height() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IMorphologyEffect)->get_Height(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IMorphologyEffect<D>::Height(int32_t value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IMorphologyEffect)->put_Height(value));
}

template <typename D> Windows::Graphics::Effects::IGraphicsEffectSource consume_Microsoft_Graphics_Canvas_Effects_IMorphologyEffect<D>::Source() const
{
    Windows::Graphics::Effects::IGraphicsEffectSource source{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IMorphologyEffect)->get_Source(put_abi(source)));
    return source;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IMorphologyEffect<D>::Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IMorphologyEffect)->put_Source(get_abi(source)));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Effects_IOpacityEffect<D>::Opacity() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IOpacityEffect)->get_Opacity(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IOpacityEffect<D>::Opacity(float value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IOpacityEffect)->put_Opacity(value));
}

template <typename D> Windows::Graphics::Effects::IGraphicsEffectSource consume_Microsoft_Graphics_Canvas_Effects_IOpacityEffect<D>::Source() const
{
    Windows::Graphics::Effects::IGraphicsEffectSource source{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IOpacityEffect)->get_Source(put_abi(source)));
    return source;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IOpacityEffect<D>::Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IOpacityEffect)->put_Source(get_abi(source)));
}

template <typename D> bool consume_Microsoft_Graphics_Canvas_Effects_IOpacityEffectStatics<D>::IsSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IOpacityEffectStatics)->get_IsSupported(&value));
    return value;
}

template <typename D> Windows::Foundation::Rect consume_Microsoft_Graphics_Canvas_Effects_IOpacityMetadataEffect<D>::OpaqueRectangle() const
{
    Windows::Foundation::Rect value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IOpacityMetadataEffect)->get_OpaqueRectangle(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IOpacityMetadataEffect<D>::OpaqueRectangle(Windows::Foundation::Rect const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IOpacityMetadataEffect)->put_OpaqueRectangle(get_abi(value)));
}

template <typename D> Windows::Graphics::Effects::IGraphicsEffectSource consume_Microsoft_Graphics_Canvas_Effects_IOpacityMetadataEffect<D>::Source() const
{
    Windows::Graphics::Effects::IGraphicsEffectSource source{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IOpacityMetadataEffect)->get_Source(put_abi(source)));
    return source;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IOpacityMetadataEffect<D>::Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IOpacityMetadataEffect)->put_Source(get_abi(source)));
}

template <typename D> Windows::Foundation::Collections::IMap<hstring, Windows::Foundation::IInspectable> consume_Microsoft_Graphics_Canvas_Effects_IPixelShaderEffect<D>::Properties() const
{
    Windows::Foundation::Collections::IMap<hstring, Windows::Foundation::IInspectable> value{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPixelShaderEffect)->get_Properties(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Effects::IGraphicsEffectSource consume_Microsoft_Graphics_Canvas_Effects_IPixelShaderEffect<D>::Source1() const
{
    Windows::Graphics::Effects::IGraphicsEffectSource source{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPixelShaderEffect)->get_Source1(put_abi(source)));
    return source;
}

template <typename D> Windows::Graphics::Effects::IGraphicsEffectSource consume_Microsoft_Graphics_Canvas_Effects_IPixelShaderEffect<D>::Source2() const
{
    Windows::Graphics::Effects::IGraphicsEffectSource source{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPixelShaderEffect)->get_Source2(put_abi(source)));
    return source;
}

template <typename D> Windows::Graphics::Effects::IGraphicsEffectSource consume_Microsoft_Graphics_Canvas_Effects_IPixelShaderEffect<D>::Source3() const
{
    Windows::Graphics::Effects::IGraphicsEffectSource source{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPixelShaderEffect)->get_Source3(put_abi(source)));
    return source;
}

template <typename D> Windows::Graphics::Effects::IGraphicsEffectSource consume_Microsoft_Graphics_Canvas_Effects_IPixelShaderEffect<D>::Source4() const
{
    Windows::Graphics::Effects::IGraphicsEffectSource source{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPixelShaderEffect)->get_Source4(put_abi(source)));
    return source;
}

template <typename D> Windows::Graphics::Effects::IGraphicsEffectSource consume_Microsoft_Graphics_Canvas_Effects_IPixelShaderEffect<D>::Source5() const
{
    Windows::Graphics::Effects::IGraphicsEffectSource source{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPixelShaderEffect)->get_Source5(put_abi(source)));
    return source;
}

template <typename D> Windows::Graphics::Effects::IGraphicsEffectSource consume_Microsoft_Graphics_Canvas_Effects_IPixelShaderEffect<D>::Source6() const
{
    Windows::Graphics::Effects::IGraphicsEffectSource source{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPixelShaderEffect)->get_Source6(put_abi(source)));
    return source;
}

template <typename D> Windows::Graphics::Effects::IGraphicsEffectSource consume_Microsoft_Graphics_Canvas_Effects_IPixelShaderEffect<D>::Source7() const
{
    Windows::Graphics::Effects::IGraphicsEffectSource source{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPixelShaderEffect)->get_Source7(put_abi(source)));
    return source;
}

template <typename D> Windows::Graphics::Effects::IGraphicsEffectSource consume_Microsoft_Graphics_Canvas_Effects_IPixelShaderEffect<D>::Source8() const
{
    Windows::Graphics::Effects::IGraphicsEffectSource source{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPixelShaderEffect)->get_Source8(put_abi(source)));
    return source;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IPixelShaderEffect<D>::Source1(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPixelShaderEffect)->put_Source1(get_abi(source)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IPixelShaderEffect<D>::Source2(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPixelShaderEffect)->put_Source2(get_abi(source)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IPixelShaderEffect<D>::Source3(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPixelShaderEffect)->put_Source3(get_abi(source)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IPixelShaderEffect<D>::Source4(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPixelShaderEffect)->put_Source4(get_abi(source)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IPixelShaderEffect<D>::Source5(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPixelShaderEffect)->put_Source5(get_abi(source)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IPixelShaderEffect<D>::Source6(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPixelShaderEffect)->put_Source6(get_abi(source)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IPixelShaderEffect<D>::Source7(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPixelShaderEffect)->put_Source7(get_abi(source)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IPixelShaderEffect<D>::Source8(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPixelShaderEffect)->put_Source8(get_abi(source)));
}

template <typename D> Microsoft::Graphics::Canvas::Effects::SamplerCoordinateMapping consume_Microsoft_Graphics_Canvas_Effects_IPixelShaderEffect<D>::Source1Mapping() const
{
    Microsoft::Graphics::Canvas::Effects::SamplerCoordinateMapping value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPixelShaderEffect)->get_Source1Mapping(put_abi(value)));
    return value;
}

template <typename D> Microsoft::Graphics::Canvas::Effects::SamplerCoordinateMapping consume_Microsoft_Graphics_Canvas_Effects_IPixelShaderEffect<D>::Source2Mapping() const
{
    Microsoft::Graphics::Canvas::Effects::SamplerCoordinateMapping value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPixelShaderEffect)->get_Source2Mapping(put_abi(value)));
    return value;
}

template <typename D> Microsoft::Graphics::Canvas::Effects::SamplerCoordinateMapping consume_Microsoft_Graphics_Canvas_Effects_IPixelShaderEffect<D>::Source3Mapping() const
{
    Microsoft::Graphics::Canvas::Effects::SamplerCoordinateMapping value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPixelShaderEffect)->get_Source3Mapping(put_abi(value)));
    return value;
}

template <typename D> Microsoft::Graphics::Canvas::Effects::SamplerCoordinateMapping consume_Microsoft_Graphics_Canvas_Effects_IPixelShaderEffect<D>::Source4Mapping() const
{
    Microsoft::Graphics::Canvas::Effects::SamplerCoordinateMapping value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPixelShaderEffect)->get_Source4Mapping(put_abi(value)));
    return value;
}

template <typename D> Microsoft::Graphics::Canvas::Effects::SamplerCoordinateMapping consume_Microsoft_Graphics_Canvas_Effects_IPixelShaderEffect<D>::Source5Mapping() const
{
    Microsoft::Graphics::Canvas::Effects::SamplerCoordinateMapping value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPixelShaderEffect)->get_Source5Mapping(put_abi(value)));
    return value;
}

template <typename D> Microsoft::Graphics::Canvas::Effects::SamplerCoordinateMapping consume_Microsoft_Graphics_Canvas_Effects_IPixelShaderEffect<D>::Source6Mapping() const
{
    Microsoft::Graphics::Canvas::Effects::SamplerCoordinateMapping value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPixelShaderEffect)->get_Source6Mapping(put_abi(value)));
    return value;
}

template <typename D> Microsoft::Graphics::Canvas::Effects::SamplerCoordinateMapping consume_Microsoft_Graphics_Canvas_Effects_IPixelShaderEffect<D>::Source7Mapping() const
{
    Microsoft::Graphics::Canvas::Effects::SamplerCoordinateMapping value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPixelShaderEffect)->get_Source7Mapping(put_abi(value)));
    return value;
}

template <typename D> Microsoft::Graphics::Canvas::Effects::SamplerCoordinateMapping consume_Microsoft_Graphics_Canvas_Effects_IPixelShaderEffect<D>::Source8Mapping() const
{
    Microsoft::Graphics::Canvas::Effects::SamplerCoordinateMapping value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPixelShaderEffect)->get_Source8Mapping(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IPixelShaderEffect<D>::Source1Mapping(Microsoft::Graphics::Canvas::Effects::SamplerCoordinateMapping const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPixelShaderEffect)->put_Source1Mapping(get_abi(value)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IPixelShaderEffect<D>::Source2Mapping(Microsoft::Graphics::Canvas::Effects::SamplerCoordinateMapping const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPixelShaderEffect)->put_Source2Mapping(get_abi(value)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IPixelShaderEffect<D>::Source3Mapping(Microsoft::Graphics::Canvas::Effects::SamplerCoordinateMapping const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPixelShaderEffect)->put_Source3Mapping(get_abi(value)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IPixelShaderEffect<D>::Source4Mapping(Microsoft::Graphics::Canvas::Effects::SamplerCoordinateMapping const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPixelShaderEffect)->put_Source4Mapping(get_abi(value)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IPixelShaderEffect<D>::Source5Mapping(Microsoft::Graphics::Canvas::Effects::SamplerCoordinateMapping const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPixelShaderEffect)->put_Source5Mapping(get_abi(value)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IPixelShaderEffect<D>::Source6Mapping(Microsoft::Graphics::Canvas::Effects::SamplerCoordinateMapping const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPixelShaderEffect)->put_Source6Mapping(get_abi(value)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IPixelShaderEffect<D>::Source7Mapping(Microsoft::Graphics::Canvas::Effects::SamplerCoordinateMapping const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPixelShaderEffect)->put_Source7Mapping(get_abi(value)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IPixelShaderEffect<D>::Source8Mapping(Microsoft::Graphics::Canvas::Effects::SamplerCoordinateMapping const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPixelShaderEffect)->put_Source8Mapping(get_abi(value)));
}

template <typename D> Microsoft::Graphics::Canvas::Effects::EffectBorderMode consume_Microsoft_Graphics_Canvas_Effects_IPixelShaderEffect<D>::Source1BorderMode() const
{
    Microsoft::Graphics::Canvas::Effects::EffectBorderMode value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPixelShaderEffect)->get_Source1BorderMode(put_abi(value)));
    return value;
}

template <typename D> Microsoft::Graphics::Canvas::Effects::EffectBorderMode consume_Microsoft_Graphics_Canvas_Effects_IPixelShaderEffect<D>::Source2BorderMode() const
{
    Microsoft::Graphics::Canvas::Effects::EffectBorderMode value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPixelShaderEffect)->get_Source2BorderMode(put_abi(value)));
    return value;
}

template <typename D> Microsoft::Graphics::Canvas::Effects::EffectBorderMode consume_Microsoft_Graphics_Canvas_Effects_IPixelShaderEffect<D>::Source3BorderMode() const
{
    Microsoft::Graphics::Canvas::Effects::EffectBorderMode value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPixelShaderEffect)->get_Source3BorderMode(put_abi(value)));
    return value;
}

template <typename D> Microsoft::Graphics::Canvas::Effects::EffectBorderMode consume_Microsoft_Graphics_Canvas_Effects_IPixelShaderEffect<D>::Source4BorderMode() const
{
    Microsoft::Graphics::Canvas::Effects::EffectBorderMode value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPixelShaderEffect)->get_Source4BorderMode(put_abi(value)));
    return value;
}

template <typename D> Microsoft::Graphics::Canvas::Effects::EffectBorderMode consume_Microsoft_Graphics_Canvas_Effects_IPixelShaderEffect<D>::Source5BorderMode() const
{
    Microsoft::Graphics::Canvas::Effects::EffectBorderMode value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPixelShaderEffect)->get_Source5BorderMode(put_abi(value)));
    return value;
}

template <typename D> Microsoft::Graphics::Canvas::Effects::EffectBorderMode consume_Microsoft_Graphics_Canvas_Effects_IPixelShaderEffect<D>::Source6BorderMode() const
{
    Microsoft::Graphics::Canvas::Effects::EffectBorderMode value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPixelShaderEffect)->get_Source6BorderMode(put_abi(value)));
    return value;
}

template <typename D> Microsoft::Graphics::Canvas::Effects::EffectBorderMode consume_Microsoft_Graphics_Canvas_Effects_IPixelShaderEffect<D>::Source7BorderMode() const
{
    Microsoft::Graphics::Canvas::Effects::EffectBorderMode value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPixelShaderEffect)->get_Source7BorderMode(put_abi(value)));
    return value;
}

template <typename D> Microsoft::Graphics::Canvas::Effects::EffectBorderMode consume_Microsoft_Graphics_Canvas_Effects_IPixelShaderEffect<D>::Source8BorderMode() const
{
    Microsoft::Graphics::Canvas::Effects::EffectBorderMode value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPixelShaderEffect)->get_Source8BorderMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IPixelShaderEffect<D>::Source1BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPixelShaderEffect)->put_Source1BorderMode(get_abi(value)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IPixelShaderEffect<D>::Source2BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPixelShaderEffect)->put_Source2BorderMode(get_abi(value)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IPixelShaderEffect<D>::Source3BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPixelShaderEffect)->put_Source3BorderMode(get_abi(value)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IPixelShaderEffect<D>::Source4BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPixelShaderEffect)->put_Source4BorderMode(get_abi(value)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IPixelShaderEffect<D>::Source5BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPixelShaderEffect)->put_Source5BorderMode(get_abi(value)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IPixelShaderEffect<D>::Source6BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPixelShaderEffect)->put_Source6BorderMode(get_abi(value)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IPixelShaderEffect<D>::Source7BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPixelShaderEffect)->put_Source7BorderMode(get_abi(value)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IPixelShaderEffect<D>::Source8BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPixelShaderEffect)->put_Source8BorderMode(get_abi(value)));
}

template <typename D> int32_t consume_Microsoft_Graphics_Canvas_Effects_IPixelShaderEffect<D>::MaxSamplerOffset() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPixelShaderEffect)->get_MaxSamplerOffset(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IPixelShaderEffect<D>::MaxSamplerOffset(int32_t value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPixelShaderEffect)->put_MaxSamplerOffset(value));
}

template <typename D> Microsoft::Graphics::Canvas::CanvasImageInterpolation consume_Microsoft_Graphics_Canvas_Effects_IPixelShaderEffect<D>::Source1Interpolation() const
{
    Microsoft::Graphics::Canvas::CanvasImageInterpolation value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPixelShaderEffect)->get_Source1Interpolation(put_abi(value)));
    return value;
}

template <typename D> Microsoft::Graphics::Canvas::CanvasImageInterpolation consume_Microsoft_Graphics_Canvas_Effects_IPixelShaderEffect<D>::Source2Interpolation() const
{
    Microsoft::Graphics::Canvas::CanvasImageInterpolation value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPixelShaderEffect)->get_Source2Interpolation(put_abi(value)));
    return value;
}

template <typename D> Microsoft::Graphics::Canvas::CanvasImageInterpolation consume_Microsoft_Graphics_Canvas_Effects_IPixelShaderEffect<D>::Source3Interpolation() const
{
    Microsoft::Graphics::Canvas::CanvasImageInterpolation value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPixelShaderEffect)->get_Source3Interpolation(put_abi(value)));
    return value;
}

template <typename D> Microsoft::Graphics::Canvas::CanvasImageInterpolation consume_Microsoft_Graphics_Canvas_Effects_IPixelShaderEffect<D>::Source4Interpolation() const
{
    Microsoft::Graphics::Canvas::CanvasImageInterpolation value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPixelShaderEffect)->get_Source4Interpolation(put_abi(value)));
    return value;
}

template <typename D> Microsoft::Graphics::Canvas::CanvasImageInterpolation consume_Microsoft_Graphics_Canvas_Effects_IPixelShaderEffect<D>::Source5Interpolation() const
{
    Microsoft::Graphics::Canvas::CanvasImageInterpolation value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPixelShaderEffect)->get_Source5Interpolation(put_abi(value)));
    return value;
}

template <typename D> Microsoft::Graphics::Canvas::CanvasImageInterpolation consume_Microsoft_Graphics_Canvas_Effects_IPixelShaderEffect<D>::Source6Interpolation() const
{
    Microsoft::Graphics::Canvas::CanvasImageInterpolation value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPixelShaderEffect)->get_Source6Interpolation(put_abi(value)));
    return value;
}

template <typename D> Microsoft::Graphics::Canvas::CanvasImageInterpolation consume_Microsoft_Graphics_Canvas_Effects_IPixelShaderEffect<D>::Source7Interpolation() const
{
    Microsoft::Graphics::Canvas::CanvasImageInterpolation value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPixelShaderEffect)->get_Source7Interpolation(put_abi(value)));
    return value;
}

template <typename D> Microsoft::Graphics::Canvas::CanvasImageInterpolation consume_Microsoft_Graphics_Canvas_Effects_IPixelShaderEffect<D>::Source8Interpolation() const
{
    Microsoft::Graphics::Canvas::CanvasImageInterpolation value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPixelShaderEffect)->get_Source8Interpolation(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IPixelShaderEffect<D>::Source1Interpolation(Microsoft::Graphics::Canvas::CanvasImageInterpolation const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPixelShaderEffect)->put_Source1Interpolation(get_abi(value)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IPixelShaderEffect<D>::Source2Interpolation(Microsoft::Graphics::Canvas::CanvasImageInterpolation const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPixelShaderEffect)->put_Source2Interpolation(get_abi(value)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IPixelShaderEffect<D>::Source3Interpolation(Microsoft::Graphics::Canvas::CanvasImageInterpolation const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPixelShaderEffect)->put_Source3Interpolation(get_abi(value)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IPixelShaderEffect<D>::Source4Interpolation(Microsoft::Graphics::Canvas::CanvasImageInterpolation const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPixelShaderEffect)->put_Source4Interpolation(get_abi(value)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IPixelShaderEffect<D>::Source5Interpolation(Microsoft::Graphics::Canvas::CanvasImageInterpolation const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPixelShaderEffect)->put_Source5Interpolation(get_abi(value)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IPixelShaderEffect<D>::Source6Interpolation(Microsoft::Graphics::Canvas::CanvasImageInterpolation const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPixelShaderEffect)->put_Source6Interpolation(get_abi(value)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IPixelShaderEffect<D>::Source7Interpolation(Microsoft::Graphics::Canvas::CanvasImageInterpolation const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPixelShaderEffect)->put_Source7Interpolation(get_abi(value)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IPixelShaderEffect<D>::Source8Interpolation(Microsoft::Graphics::Canvas::CanvasImageInterpolation const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPixelShaderEffect)->put_Source8Interpolation(get_abi(value)));
}

template <typename D> bool consume_Microsoft_Graphics_Canvas_Effects_IPixelShaderEffect<D>::IsSupported(Microsoft::Graphics::Canvas::CanvasDevice const& device) const
{
    bool result{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPixelShaderEffect)->IsSupported(get_abi(device), &result));
    return result;
}

template <typename D> Microsoft::Graphics::Canvas::Effects::PixelShaderEffect consume_Microsoft_Graphics_Canvas_Effects_IPixelShaderEffectFactory<D>::Create(array_view<uint8_t const> shaderCode) const
{
    Microsoft::Graphics::Canvas::Effects::PixelShaderEffect effect{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPixelShaderEffectFactory)->Create(shaderCode.size(), get_abi(shaderCode), put_abi(effect)));
    return effect;
}

template <typename D> Windows::Foundation::Numerics::float3 consume_Microsoft_Graphics_Canvas_Effects_IPointDiffuseEffect<D>::LightPosition() const
{
    Windows::Foundation::Numerics::float3 value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPointDiffuseEffect)->get_LightPosition(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IPointDiffuseEffect<D>::LightPosition(Windows::Foundation::Numerics::float3 const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPointDiffuseEffect)->put_LightPosition(get_abi(value)));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Effects_IPointDiffuseEffect<D>::DiffuseAmount() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPointDiffuseEffect)->get_DiffuseAmount(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IPointDiffuseEffect<D>::DiffuseAmount(float value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPointDiffuseEffect)->put_DiffuseAmount(value));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Effects_IPointDiffuseEffect<D>::HeightMapScale() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPointDiffuseEffect)->get_HeightMapScale(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IPointDiffuseEffect<D>::HeightMapScale(float value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPointDiffuseEffect)->put_HeightMapScale(value));
}

template <typename D> Windows::UI::Color consume_Microsoft_Graphics_Canvas_Effects_IPointDiffuseEffect<D>::LightColor() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPointDiffuseEffect)->get_LightColor(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IPointDiffuseEffect<D>::LightColor(Windows::UI::Color const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPointDiffuseEffect)->put_LightColor(get_abi(value)));
}

template <typename D> Windows::Foundation::Numerics::float2 consume_Microsoft_Graphics_Canvas_Effects_IPointDiffuseEffect<D>::HeightMapKernelSize() const
{
    Windows::Foundation::Numerics::float2 value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPointDiffuseEffect)->get_HeightMapKernelSize(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IPointDiffuseEffect<D>::HeightMapKernelSize(Windows::Foundation::Numerics::float2 const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPointDiffuseEffect)->put_HeightMapKernelSize(get_abi(value)));
}

template <typename D> Microsoft::Graphics::Canvas::CanvasImageInterpolation consume_Microsoft_Graphics_Canvas_Effects_IPointDiffuseEffect<D>::HeightMapInterpolationMode() const
{
    Microsoft::Graphics::Canvas::CanvasImageInterpolation value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPointDiffuseEffect)->get_HeightMapInterpolationMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IPointDiffuseEffect<D>::HeightMapInterpolationMode(Microsoft::Graphics::Canvas::CanvasImageInterpolation const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPointDiffuseEffect)->put_HeightMapInterpolationMode(get_abi(value)));
}

template <typename D> Windows::Foundation::Numerics::float4 consume_Microsoft_Graphics_Canvas_Effects_IPointDiffuseEffect<D>::LightColorHdr() const
{
    Windows::Foundation::Numerics::float4 value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPointDiffuseEffect)->get_LightColorHdr(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IPointDiffuseEffect<D>::LightColorHdr(Windows::Foundation::Numerics::float4 const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPointDiffuseEffect)->put_LightColorHdr(get_abi(value)));
}

template <typename D> Windows::Graphics::Effects::IGraphicsEffectSource consume_Microsoft_Graphics_Canvas_Effects_IPointDiffuseEffect<D>::Source() const
{
    Windows::Graphics::Effects::IGraphicsEffectSource source{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPointDiffuseEffect)->get_Source(put_abi(source)));
    return source;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IPointDiffuseEffect<D>::Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPointDiffuseEffect)->put_Source(get_abi(source)));
}

template <typename D> Windows::Foundation::Numerics::float3 consume_Microsoft_Graphics_Canvas_Effects_IPointSpecularEffect<D>::LightPosition() const
{
    Windows::Foundation::Numerics::float3 value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPointSpecularEffect)->get_LightPosition(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IPointSpecularEffect<D>::LightPosition(Windows::Foundation::Numerics::float3 const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPointSpecularEffect)->put_LightPosition(get_abi(value)));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Effects_IPointSpecularEffect<D>::SpecularExponent() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPointSpecularEffect)->get_SpecularExponent(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IPointSpecularEffect<D>::SpecularExponent(float value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPointSpecularEffect)->put_SpecularExponent(value));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Effects_IPointSpecularEffect<D>::SpecularAmount() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPointSpecularEffect)->get_SpecularAmount(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IPointSpecularEffect<D>::SpecularAmount(float value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPointSpecularEffect)->put_SpecularAmount(value));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Effects_IPointSpecularEffect<D>::HeightMapScale() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPointSpecularEffect)->get_HeightMapScale(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IPointSpecularEffect<D>::HeightMapScale(float value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPointSpecularEffect)->put_HeightMapScale(value));
}

template <typename D> Windows::UI::Color consume_Microsoft_Graphics_Canvas_Effects_IPointSpecularEffect<D>::LightColor() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPointSpecularEffect)->get_LightColor(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IPointSpecularEffect<D>::LightColor(Windows::UI::Color const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPointSpecularEffect)->put_LightColor(get_abi(value)));
}

template <typename D> Windows::Foundation::Numerics::float2 consume_Microsoft_Graphics_Canvas_Effects_IPointSpecularEffect<D>::HeightMapKernelSize() const
{
    Windows::Foundation::Numerics::float2 value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPointSpecularEffect)->get_HeightMapKernelSize(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IPointSpecularEffect<D>::HeightMapKernelSize(Windows::Foundation::Numerics::float2 const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPointSpecularEffect)->put_HeightMapKernelSize(get_abi(value)));
}

template <typename D> Microsoft::Graphics::Canvas::CanvasImageInterpolation consume_Microsoft_Graphics_Canvas_Effects_IPointSpecularEffect<D>::HeightMapInterpolationMode() const
{
    Microsoft::Graphics::Canvas::CanvasImageInterpolation value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPointSpecularEffect)->get_HeightMapInterpolationMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IPointSpecularEffect<D>::HeightMapInterpolationMode(Microsoft::Graphics::Canvas::CanvasImageInterpolation const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPointSpecularEffect)->put_HeightMapInterpolationMode(get_abi(value)));
}

template <typename D> Windows::Foundation::Numerics::float4 consume_Microsoft_Graphics_Canvas_Effects_IPointSpecularEffect<D>::LightColorHdr() const
{
    Windows::Foundation::Numerics::float4 value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPointSpecularEffect)->get_LightColorHdr(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IPointSpecularEffect<D>::LightColorHdr(Windows::Foundation::Numerics::float4 const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPointSpecularEffect)->put_LightColorHdr(get_abi(value)));
}

template <typename D> Windows::Graphics::Effects::IGraphicsEffectSource consume_Microsoft_Graphics_Canvas_Effects_IPointSpecularEffect<D>::Source() const
{
    Windows::Graphics::Effects::IGraphicsEffectSource source{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPointSpecularEffect)->get_Source(put_abi(source)));
    return source;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IPointSpecularEffect<D>::Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPointSpecularEffect)->put_Source(get_abi(source)));
}

template <typename D> int32_t consume_Microsoft_Graphics_Canvas_Effects_IPosterizeEffect<D>::RedValueCount() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPosterizeEffect)->get_RedValueCount(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IPosterizeEffect<D>::RedValueCount(int32_t value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPosterizeEffect)->put_RedValueCount(value));
}

template <typename D> int32_t consume_Microsoft_Graphics_Canvas_Effects_IPosterizeEffect<D>::GreenValueCount() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPosterizeEffect)->get_GreenValueCount(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IPosterizeEffect<D>::GreenValueCount(int32_t value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPosterizeEffect)->put_GreenValueCount(value));
}

template <typename D> int32_t consume_Microsoft_Graphics_Canvas_Effects_IPosterizeEffect<D>::BlueValueCount() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPosterizeEffect)->get_BlueValueCount(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IPosterizeEffect<D>::BlueValueCount(int32_t value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPosterizeEffect)->put_BlueValueCount(value));
}

template <typename D> Windows::Graphics::Effects::IGraphicsEffectSource consume_Microsoft_Graphics_Canvas_Effects_IPosterizeEffect<D>::Source() const
{
    Windows::Graphics::Effects::IGraphicsEffectSource source{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPosterizeEffect)->get_Source(put_abi(source)));
    return source;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IPosterizeEffect<D>::Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPosterizeEffect)->put_Source(get_abi(source)));
}

template <typename D> Windows::Graphics::Effects::IGraphicsEffectSource consume_Microsoft_Graphics_Canvas_Effects_IPremultiplyEffect<D>::Source() const
{
    Windows::Graphics::Effects::IGraphicsEffectSource source{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPremultiplyEffect)->get_Source(put_abi(source)));
    return source;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IPremultiplyEffect<D>::Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IPremultiplyEffect)->put_Source(get_abi(source)));
}

template <typename D> Microsoft::Graphics::Canvas::Effects::EffectHueColorSpace consume_Microsoft_Graphics_Canvas_Effects_IRgbToHueEffect<D>::OutputColorSpace() const
{
    Microsoft::Graphics::Canvas::Effects::EffectHueColorSpace value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IRgbToHueEffect)->get_OutputColorSpace(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IRgbToHueEffect<D>::OutputColorSpace(Microsoft::Graphics::Canvas::Effects::EffectHueColorSpace const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IRgbToHueEffect)->put_OutputColorSpace(get_abi(value)));
}

template <typename D> Windows::Graphics::Effects::IGraphicsEffectSource consume_Microsoft_Graphics_Canvas_Effects_IRgbToHueEffect<D>::Source() const
{
    Windows::Graphics::Effects::IGraphicsEffectSource source{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IRgbToHueEffect)->get_Source(put_abi(source)));
    return source;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IRgbToHueEffect<D>::Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IRgbToHueEffect)->put_Source(get_abi(source)));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Effects_ISaturationEffect<D>::Saturation() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ISaturationEffect)->get_Saturation(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ISaturationEffect<D>::Saturation(float value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ISaturationEffect)->put_Saturation(value));
}

template <typename D> Windows::Graphics::Effects::IGraphicsEffectSource consume_Microsoft_Graphics_Canvas_Effects_ISaturationEffect<D>::Source() const
{
    Windows::Graphics::Effects::IGraphicsEffectSource source{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ISaturationEffect)->get_Source(put_abi(source)));
    return source;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ISaturationEffect<D>::Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ISaturationEffect)->put_Source(get_abi(source)));
}

template <typename D> Windows::Foundation::Numerics::float2 consume_Microsoft_Graphics_Canvas_Effects_IScaleEffect<D>::Scale() const
{
    Windows::Foundation::Numerics::float2 value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IScaleEffect)->get_Scale(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IScaleEffect<D>::Scale(Windows::Foundation::Numerics::float2 const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IScaleEffect)->put_Scale(get_abi(value)));
}

template <typename D> Windows::Foundation::Numerics::float2 consume_Microsoft_Graphics_Canvas_Effects_IScaleEffect<D>::CenterPoint() const
{
    Windows::Foundation::Numerics::float2 value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IScaleEffect)->get_CenterPoint(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IScaleEffect<D>::CenterPoint(Windows::Foundation::Numerics::float2 const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IScaleEffect)->put_CenterPoint(get_abi(value)));
}

template <typename D> Microsoft::Graphics::Canvas::CanvasImageInterpolation consume_Microsoft_Graphics_Canvas_Effects_IScaleEffect<D>::InterpolationMode() const
{
    Microsoft::Graphics::Canvas::CanvasImageInterpolation value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IScaleEffect)->get_InterpolationMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IScaleEffect<D>::InterpolationMode(Microsoft::Graphics::Canvas::CanvasImageInterpolation const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IScaleEffect)->put_InterpolationMode(get_abi(value)));
}

template <typename D> Microsoft::Graphics::Canvas::Effects::EffectBorderMode consume_Microsoft_Graphics_Canvas_Effects_IScaleEffect<D>::BorderMode() const
{
    Microsoft::Graphics::Canvas::Effects::EffectBorderMode value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IScaleEffect)->get_BorderMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IScaleEffect<D>::BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IScaleEffect)->put_BorderMode(get_abi(value)));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Effects_IScaleEffect<D>::Sharpness() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IScaleEffect)->get_Sharpness(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IScaleEffect<D>::Sharpness(float value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IScaleEffect)->put_Sharpness(value));
}

template <typename D> Windows::Graphics::Effects::IGraphicsEffectSource consume_Microsoft_Graphics_Canvas_Effects_IScaleEffect<D>::Source() const
{
    Windows::Graphics::Effects::IGraphicsEffectSource source{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IScaleEffect)->get_Source(put_abi(source)));
    return source;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IScaleEffect<D>::Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IScaleEffect)->put_Source(get_abi(source)));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Effects_ISepiaEffect<D>::Intensity() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ISepiaEffect)->get_Intensity(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ISepiaEffect<D>::Intensity(float value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ISepiaEffect)->put_Intensity(value));
}

template <typename D> Microsoft::Graphics::Canvas::CanvasAlphaMode consume_Microsoft_Graphics_Canvas_Effects_ISepiaEffect<D>::AlphaMode() const
{
    Microsoft::Graphics::Canvas::CanvasAlphaMode value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ISepiaEffect)->get_AlphaMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ISepiaEffect<D>::AlphaMode(Microsoft::Graphics::Canvas::CanvasAlphaMode const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ISepiaEffect)->put_AlphaMode(get_abi(value)));
}

template <typename D> Windows::Graphics::Effects::IGraphicsEffectSource consume_Microsoft_Graphics_Canvas_Effects_ISepiaEffect<D>::Source() const
{
    Windows::Graphics::Effects::IGraphicsEffectSource source{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ISepiaEffect)->get_Source(put_abi(source)));
    return source;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ISepiaEffect<D>::Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ISepiaEffect)->put_Source(get_abi(source)));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Effects_IShadowEffect<D>::BlurAmount() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IShadowEffect)->get_BlurAmount(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IShadowEffect<D>::BlurAmount(float value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IShadowEffect)->put_BlurAmount(value));
}

template <typename D> Windows::UI::Color consume_Microsoft_Graphics_Canvas_Effects_IShadowEffect<D>::ShadowColor() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IShadowEffect)->get_ShadowColor(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IShadowEffect<D>::ShadowColor(Windows::UI::Color const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IShadowEffect)->put_ShadowColor(get_abi(value)));
}

template <typename D> Microsoft::Graphics::Canvas::Effects::EffectOptimization consume_Microsoft_Graphics_Canvas_Effects_IShadowEffect<D>::Optimization() const
{
    Microsoft::Graphics::Canvas::Effects::EffectOptimization value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IShadowEffect)->get_Optimization(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IShadowEffect<D>::Optimization(Microsoft::Graphics::Canvas::Effects::EffectOptimization const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IShadowEffect)->put_Optimization(get_abi(value)));
}

template <typename D> Windows::Foundation::Numerics::float4 consume_Microsoft_Graphics_Canvas_Effects_IShadowEffect<D>::ShadowColorHdr() const
{
    Windows::Foundation::Numerics::float4 value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IShadowEffect)->get_ShadowColorHdr(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IShadowEffect<D>::ShadowColorHdr(Windows::Foundation::Numerics::float4 const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IShadowEffect)->put_ShadowColorHdr(get_abi(value)));
}

template <typename D> Windows::Graphics::Effects::IGraphicsEffectSource consume_Microsoft_Graphics_Canvas_Effects_IShadowEffect<D>::Source() const
{
    Windows::Graphics::Effects::IGraphicsEffectSource source{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IShadowEffect)->get_Source(put_abi(source)));
    return source;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IShadowEffect<D>::Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IShadowEffect)->put_Source(get_abi(source)));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Effects_ISharpenEffect<D>::Amount() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ISharpenEffect)->get_Amount(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ISharpenEffect<D>::Amount(float value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ISharpenEffect)->put_Amount(value));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Effects_ISharpenEffect<D>::Threshold() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ISharpenEffect)->get_Threshold(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ISharpenEffect<D>::Threshold(float value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ISharpenEffect)->put_Threshold(value));
}

template <typename D> Windows::Graphics::Effects::IGraphicsEffectSource consume_Microsoft_Graphics_Canvas_Effects_ISharpenEffect<D>::Source() const
{
    Windows::Graphics::Effects::IGraphicsEffectSource source{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ISharpenEffect)->get_Source(put_abi(source)));
    return source;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ISharpenEffect<D>::Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ISharpenEffect)->put_Source(get_abi(source)));
}

template <typename D> Windows::Foundation::Numerics::float3 consume_Microsoft_Graphics_Canvas_Effects_ISpotDiffuseEffect<D>::LightPosition() const
{
    Windows::Foundation::Numerics::float3 value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ISpotDiffuseEffect)->get_LightPosition(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ISpotDiffuseEffect<D>::LightPosition(Windows::Foundation::Numerics::float3 const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ISpotDiffuseEffect)->put_LightPosition(get_abi(value)));
}

template <typename D> Windows::Foundation::Numerics::float3 consume_Microsoft_Graphics_Canvas_Effects_ISpotDiffuseEffect<D>::LightTarget() const
{
    Windows::Foundation::Numerics::float3 value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ISpotDiffuseEffect)->get_LightTarget(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ISpotDiffuseEffect<D>::LightTarget(Windows::Foundation::Numerics::float3 const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ISpotDiffuseEffect)->put_LightTarget(get_abi(value)));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Effects_ISpotDiffuseEffect<D>::Focus() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ISpotDiffuseEffect)->get_Focus(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ISpotDiffuseEffect<D>::Focus(float value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ISpotDiffuseEffect)->put_Focus(value));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Effects_ISpotDiffuseEffect<D>::LimitingConeAngle() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ISpotDiffuseEffect)->get_LimitingConeAngle(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ISpotDiffuseEffect<D>::LimitingConeAngle(float value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ISpotDiffuseEffect)->put_LimitingConeAngle(value));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Effects_ISpotDiffuseEffect<D>::DiffuseAmount() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ISpotDiffuseEffect)->get_DiffuseAmount(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ISpotDiffuseEffect<D>::DiffuseAmount(float value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ISpotDiffuseEffect)->put_DiffuseAmount(value));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Effects_ISpotDiffuseEffect<D>::HeightMapScale() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ISpotDiffuseEffect)->get_HeightMapScale(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ISpotDiffuseEffect<D>::HeightMapScale(float value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ISpotDiffuseEffect)->put_HeightMapScale(value));
}

template <typename D> Windows::UI::Color consume_Microsoft_Graphics_Canvas_Effects_ISpotDiffuseEffect<D>::LightColor() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ISpotDiffuseEffect)->get_LightColor(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ISpotDiffuseEffect<D>::LightColor(Windows::UI::Color const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ISpotDiffuseEffect)->put_LightColor(get_abi(value)));
}

template <typename D> Windows::Foundation::Numerics::float2 consume_Microsoft_Graphics_Canvas_Effects_ISpotDiffuseEffect<D>::HeightMapKernelSize() const
{
    Windows::Foundation::Numerics::float2 value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ISpotDiffuseEffect)->get_HeightMapKernelSize(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ISpotDiffuseEffect<D>::HeightMapKernelSize(Windows::Foundation::Numerics::float2 const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ISpotDiffuseEffect)->put_HeightMapKernelSize(get_abi(value)));
}

template <typename D> Microsoft::Graphics::Canvas::CanvasImageInterpolation consume_Microsoft_Graphics_Canvas_Effects_ISpotDiffuseEffect<D>::HeightMapInterpolationMode() const
{
    Microsoft::Graphics::Canvas::CanvasImageInterpolation value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ISpotDiffuseEffect)->get_HeightMapInterpolationMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ISpotDiffuseEffect<D>::HeightMapInterpolationMode(Microsoft::Graphics::Canvas::CanvasImageInterpolation const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ISpotDiffuseEffect)->put_HeightMapInterpolationMode(get_abi(value)));
}

template <typename D> Windows::Foundation::Numerics::float4 consume_Microsoft_Graphics_Canvas_Effects_ISpotDiffuseEffect<D>::LightColorHdr() const
{
    Windows::Foundation::Numerics::float4 value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ISpotDiffuseEffect)->get_LightColorHdr(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ISpotDiffuseEffect<D>::LightColorHdr(Windows::Foundation::Numerics::float4 const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ISpotDiffuseEffect)->put_LightColorHdr(get_abi(value)));
}

template <typename D> Windows::Graphics::Effects::IGraphicsEffectSource consume_Microsoft_Graphics_Canvas_Effects_ISpotDiffuseEffect<D>::Source() const
{
    Windows::Graphics::Effects::IGraphicsEffectSource source{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ISpotDiffuseEffect)->get_Source(put_abi(source)));
    return source;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ISpotDiffuseEffect<D>::Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ISpotDiffuseEffect)->put_Source(get_abi(source)));
}

template <typename D> Windows::Foundation::Numerics::float3 consume_Microsoft_Graphics_Canvas_Effects_ISpotSpecularEffect<D>::LightPosition() const
{
    Windows::Foundation::Numerics::float3 value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ISpotSpecularEffect)->get_LightPosition(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ISpotSpecularEffect<D>::LightPosition(Windows::Foundation::Numerics::float3 const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ISpotSpecularEffect)->put_LightPosition(get_abi(value)));
}

template <typename D> Windows::Foundation::Numerics::float3 consume_Microsoft_Graphics_Canvas_Effects_ISpotSpecularEffect<D>::LightTarget() const
{
    Windows::Foundation::Numerics::float3 value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ISpotSpecularEffect)->get_LightTarget(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ISpotSpecularEffect<D>::LightTarget(Windows::Foundation::Numerics::float3 const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ISpotSpecularEffect)->put_LightTarget(get_abi(value)));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Effects_ISpotSpecularEffect<D>::Focus() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ISpotSpecularEffect)->get_Focus(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ISpotSpecularEffect<D>::Focus(float value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ISpotSpecularEffect)->put_Focus(value));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Effects_ISpotSpecularEffect<D>::LimitingConeAngle() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ISpotSpecularEffect)->get_LimitingConeAngle(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ISpotSpecularEffect<D>::LimitingConeAngle(float value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ISpotSpecularEffect)->put_LimitingConeAngle(value));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Effects_ISpotSpecularEffect<D>::SpecularExponent() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ISpotSpecularEffect)->get_SpecularExponent(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ISpotSpecularEffect<D>::SpecularExponent(float value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ISpotSpecularEffect)->put_SpecularExponent(value));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Effects_ISpotSpecularEffect<D>::SpecularAmount() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ISpotSpecularEffect)->get_SpecularAmount(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ISpotSpecularEffect<D>::SpecularAmount(float value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ISpotSpecularEffect)->put_SpecularAmount(value));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Effects_ISpotSpecularEffect<D>::HeightMapScale() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ISpotSpecularEffect)->get_HeightMapScale(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ISpotSpecularEffect<D>::HeightMapScale(float value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ISpotSpecularEffect)->put_HeightMapScale(value));
}

template <typename D> Windows::UI::Color consume_Microsoft_Graphics_Canvas_Effects_ISpotSpecularEffect<D>::LightColor() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ISpotSpecularEffect)->get_LightColor(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ISpotSpecularEffect<D>::LightColor(Windows::UI::Color const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ISpotSpecularEffect)->put_LightColor(get_abi(value)));
}

template <typename D> Windows::Foundation::Numerics::float2 consume_Microsoft_Graphics_Canvas_Effects_ISpotSpecularEffect<D>::HeightMapKernelSize() const
{
    Windows::Foundation::Numerics::float2 value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ISpotSpecularEffect)->get_HeightMapKernelSize(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ISpotSpecularEffect<D>::HeightMapKernelSize(Windows::Foundation::Numerics::float2 const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ISpotSpecularEffect)->put_HeightMapKernelSize(get_abi(value)));
}

template <typename D> Microsoft::Graphics::Canvas::CanvasImageInterpolation consume_Microsoft_Graphics_Canvas_Effects_ISpotSpecularEffect<D>::HeightMapInterpolationMode() const
{
    Microsoft::Graphics::Canvas::CanvasImageInterpolation value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ISpotSpecularEffect)->get_HeightMapInterpolationMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ISpotSpecularEffect<D>::HeightMapInterpolationMode(Microsoft::Graphics::Canvas::CanvasImageInterpolation const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ISpotSpecularEffect)->put_HeightMapInterpolationMode(get_abi(value)));
}

template <typename D> Windows::Foundation::Numerics::float4 consume_Microsoft_Graphics_Canvas_Effects_ISpotSpecularEffect<D>::LightColorHdr() const
{
    Windows::Foundation::Numerics::float4 value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ISpotSpecularEffect)->get_LightColorHdr(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ISpotSpecularEffect<D>::LightColorHdr(Windows::Foundation::Numerics::float4 const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ISpotSpecularEffect)->put_LightColorHdr(get_abi(value)));
}

template <typename D> Windows::Graphics::Effects::IGraphicsEffectSource consume_Microsoft_Graphics_Canvas_Effects_ISpotSpecularEffect<D>::Source() const
{
    Windows::Graphics::Effects::IGraphicsEffectSource source{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ISpotSpecularEffect)->get_Source(put_abi(source)));
    return source;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ISpotSpecularEffect<D>::Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ISpotSpecularEffect)->put_Source(get_abi(source)));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Effects_IStraightenEffect<D>::Angle() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IStraightenEffect)->get_Angle(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IStraightenEffect<D>::Angle(float value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IStraightenEffect)->put_Angle(value));
}

template <typename D> bool consume_Microsoft_Graphics_Canvas_Effects_IStraightenEffect<D>::MaintainSize() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IStraightenEffect)->get_MaintainSize(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IStraightenEffect<D>::MaintainSize(bool value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IStraightenEffect)->put_MaintainSize(value));
}

template <typename D> Microsoft::Graphics::Canvas::CanvasImageInterpolation consume_Microsoft_Graphics_Canvas_Effects_IStraightenEffect<D>::InterpolationMode() const
{
    Microsoft::Graphics::Canvas::CanvasImageInterpolation value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IStraightenEffect)->get_InterpolationMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IStraightenEffect<D>::InterpolationMode(Microsoft::Graphics::Canvas::CanvasImageInterpolation const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IStraightenEffect)->put_InterpolationMode(get_abi(value)));
}

template <typename D> Windows::Graphics::Effects::IGraphicsEffectSource consume_Microsoft_Graphics_Canvas_Effects_IStraightenEffect<D>::Source() const
{
    Windows::Graphics::Effects::IGraphicsEffectSource source{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IStraightenEffect)->get_Source(put_abi(source)));
    return source;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IStraightenEffect<D>::Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IStraightenEffect)->put_Source(get_abi(source)));
}

template <typename D> Microsoft::Graphics::Canvas::Effects::EffectTransferTable3D consume_Microsoft_Graphics_Canvas_Effects_ITableTransfer3DEffect<D>::Table() const
{
    Microsoft::Graphics::Canvas::Effects::EffectTransferTable3D value{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ITableTransfer3DEffect)->get_Table(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ITableTransfer3DEffect<D>::Table(Microsoft::Graphics::Canvas::Effects::EffectTransferTable3D const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ITableTransfer3DEffect)->put_Table(get_abi(value)));
}

template <typename D> Microsoft::Graphics::Canvas::CanvasAlphaMode consume_Microsoft_Graphics_Canvas_Effects_ITableTransfer3DEffect<D>::AlphaMode() const
{
    Microsoft::Graphics::Canvas::CanvasAlphaMode value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ITableTransfer3DEffect)->get_AlphaMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ITableTransfer3DEffect<D>::AlphaMode(Microsoft::Graphics::Canvas::CanvasAlphaMode const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ITableTransfer3DEffect)->put_AlphaMode(get_abi(value)));
}

template <typename D> Windows::Graphics::Effects::IGraphicsEffectSource consume_Microsoft_Graphics_Canvas_Effects_ITableTransfer3DEffect<D>::Source() const
{
    Windows::Graphics::Effects::IGraphicsEffectSource source{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ITableTransfer3DEffect)->get_Source(put_abi(source)));
    return source;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ITableTransfer3DEffect<D>::Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ITableTransfer3DEffect)->put_Source(get_abi(source)));
}

template <typename D> com_array<float> consume_Microsoft_Graphics_Canvas_Effects_ITableTransferEffect<D>::RedTable() const
{
    com_array<float> valueElements;
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ITableTransferEffect)->get_RedTable(impl::put_size_abi(valueElements), put_abi(valueElements)));
    return valueElements;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ITableTransferEffect<D>::RedTable(array_view<float const> valueElements) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ITableTransferEffect)->put_RedTable(valueElements.size(), get_abi(valueElements)));
}

template <typename D> bool consume_Microsoft_Graphics_Canvas_Effects_ITableTransferEffect<D>::RedDisable() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ITableTransferEffect)->get_RedDisable(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ITableTransferEffect<D>::RedDisable(bool value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ITableTransferEffect)->put_RedDisable(value));
}

template <typename D> com_array<float> consume_Microsoft_Graphics_Canvas_Effects_ITableTransferEffect<D>::GreenTable() const
{
    com_array<float> valueElements;
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ITableTransferEffect)->get_GreenTable(impl::put_size_abi(valueElements), put_abi(valueElements)));
    return valueElements;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ITableTransferEffect<D>::GreenTable(array_view<float const> valueElements) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ITableTransferEffect)->put_GreenTable(valueElements.size(), get_abi(valueElements)));
}

template <typename D> bool consume_Microsoft_Graphics_Canvas_Effects_ITableTransferEffect<D>::GreenDisable() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ITableTransferEffect)->get_GreenDisable(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ITableTransferEffect<D>::GreenDisable(bool value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ITableTransferEffect)->put_GreenDisable(value));
}

template <typename D> com_array<float> consume_Microsoft_Graphics_Canvas_Effects_ITableTransferEffect<D>::BlueTable() const
{
    com_array<float> valueElements;
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ITableTransferEffect)->get_BlueTable(impl::put_size_abi(valueElements), put_abi(valueElements)));
    return valueElements;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ITableTransferEffect<D>::BlueTable(array_view<float const> valueElements) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ITableTransferEffect)->put_BlueTable(valueElements.size(), get_abi(valueElements)));
}

template <typename D> bool consume_Microsoft_Graphics_Canvas_Effects_ITableTransferEffect<D>::BlueDisable() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ITableTransferEffect)->get_BlueDisable(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ITableTransferEffect<D>::BlueDisable(bool value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ITableTransferEffect)->put_BlueDisable(value));
}

template <typename D> com_array<float> consume_Microsoft_Graphics_Canvas_Effects_ITableTransferEffect<D>::AlphaTable() const
{
    com_array<float> valueElements;
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ITableTransferEffect)->get_AlphaTable(impl::put_size_abi(valueElements), put_abi(valueElements)));
    return valueElements;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ITableTransferEffect<D>::AlphaTable(array_view<float const> valueElements) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ITableTransferEffect)->put_AlphaTable(valueElements.size(), get_abi(valueElements)));
}

template <typename D> bool consume_Microsoft_Graphics_Canvas_Effects_ITableTransferEffect<D>::AlphaDisable() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ITableTransferEffect)->get_AlphaDisable(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ITableTransferEffect<D>::AlphaDisable(bool value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ITableTransferEffect)->put_AlphaDisable(value));
}

template <typename D> bool consume_Microsoft_Graphics_Canvas_Effects_ITableTransferEffect<D>::ClampOutput() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ITableTransferEffect)->get_ClampOutput(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ITableTransferEffect<D>::ClampOutput(bool value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ITableTransferEffect)->put_ClampOutput(value));
}

template <typename D> Windows::Graphics::Effects::IGraphicsEffectSource consume_Microsoft_Graphics_Canvas_Effects_ITableTransferEffect<D>::Source() const
{
    Windows::Graphics::Effects::IGraphicsEffectSource source{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ITableTransferEffect)->get_Source(put_abi(source)));
    return source;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ITableTransferEffect<D>::Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ITableTransferEffect)->put_Source(get_abi(source)));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Effects_ITemperatureAndTintEffect<D>::Temperature() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ITemperatureAndTintEffect)->get_Temperature(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ITemperatureAndTintEffect<D>::Temperature(float value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ITemperatureAndTintEffect)->put_Temperature(value));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Effects_ITemperatureAndTintEffect<D>::Tint() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ITemperatureAndTintEffect)->get_Tint(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ITemperatureAndTintEffect<D>::Tint(float value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ITemperatureAndTintEffect)->put_Tint(value));
}

template <typename D> Windows::Graphics::Effects::IGraphicsEffectSource consume_Microsoft_Graphics_Canvas_Effects_ITemperatureAndTintEffect<D>::Source() const
{
    Windows::Graphics::Effects::IGraphicsEffectSource source{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ITemperatureAndTintEffect)->get_Source(put_abi(source)));
    return source;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ITemperatureAndTintEffect<D>::Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ITemperatureAndTintEffect)->put_Source(get_abi(source)));
}

template <typename D> Windows::Foundation::Rect consume_Microsoft_Graphics_Canvas_Effects_ITileEffect<D>::SourceRectangle() const
{
    Windows::Foundation::Rect value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ITileEffect)->get_SourceRectangle(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ITileEffect<D>::SourceRectangle(Windows::Foundation::Rect const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ITileEffect)->put_SourceRectangle(get_abi(value)));
}

template <typename D> Windows::Graphics::Effects::IGraphicsEffectSource consume_Microsoft_Graphics_Canvas_Effects_ITileEffect<D>::Source() const
{
    Windows::Graphics::Effects::IGraphicsEffectSource source{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ITileEffect)->get_Source(put_abi(source)));
    return source;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ITileEffect<D>::Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ITileEffect)->put_Source(get_abi(source)));
}

template <typename D> Windows::UI::Color consume_Microsoft_Graphics_Canvas_Effects_ITintEffect<D>::Color() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ITintEffect)->get_Color(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ITintEffect<D>::Color(Windows::UI::Color const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ITintEffect)->put_Color(get_abi(value)));
}

template <typename D> bool consume_Microsoft_Graphics_Canvas_Effects_ITintEffect<D>::ClampOutput() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ITintEffect)->get_ClampOutput(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ITintEffect<D>::ClampOutput(bool value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ITintEffect)->put_ClampOutput(value));
}

template <typename D> Windows::Foundation::Numerics::float4 consume_Microsoft_Graphics_Canvas_Effects_ITintEffect<D>::ColorHdr() const
{
    Windows::Foundation::Numerics::float4 value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ITintEffect)->get_ColorHdr(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ITintEffect<D>::ColorHdr(Windows::Foundation::Numerics::float4 const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ITintEffect)->put_ColorHdr(get_abi(value)));
}

template <typename D> Windows::Graphics::Effects::IGraphicsEffectSource consume_Microsoft_Graphics_Canvas_Effects_ITintEffect<D>::Source() const
{
    Windows::Graphics::Effects::IGraphicsEffectSource source{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ITintEffect)->get_Source(put_abi(source)));
    return source;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ITintEffect<D>::Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ITintEffect)->put_Source(get_abi(source)));
}

template <typename D> bool consume_Microsoft_Graphics_Canvas_Effects_ITintEffectStatics<D>::IsSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ITintEffectStatics)->get_IsSupported(&value));
    return value;
}

template <typename D> Microsoft::Graphics::Canvas::CanvasImageInterpolation consume_Microsoft_Graphics_Canvas_Effects_ITransform2DEffect<D>::InterpolationMode() const
{
    Microsoft::Graphics::Canvas::CanvasImageInterpolation value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ITransform2DEffect)->get_InterpolationMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ITransform2DEffect<D>::InterpolationMode(Microsoft::Graphics::Canvas::CanvasImageInterpolation const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ITransform2DEffect)->put_InterpolationMode(get_abi(value)));
}

template <typename D> Microsoft::Graphics::Canvas::Effects::EffectBorderMode consume_Microsoft_Graphics_Canvas_Effects_ITransform2DEffect<D>::BorderMode() const
{
    Microsoft::Graphics::Canvas::Effects::EffectBorderMode value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ITransform2DEffect)->get_BorderMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ITransform2DEffect<D>::BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ITransform2DEffect)->put_BorderMode(get_abi(value)));
}

template <typename D> Windows::Foundation::Numerics::float3x2 consume_Microsoft_Graphics_Canvas_Effects_ITransform2DEffect<D>::TransformMatrix() const
{
    Windows::Foundation::Numerics::float3x2 value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ITransform2DEffect)->get_TransformMatrix(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ITransform2DEffect<D>::TransformMatrix(Windows::Foundation::Numerics::float3x2 const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ITransform2DEffect)->put_TransformMatrix(get_abi(value)));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Effects_ITransform2DEffect<D>::Sharpness() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ITransform2DEffect)->get_Sharpness(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ITransform2DEffect<D>::Sharpness(float value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ITransform2DEffect)->put_Sharpness(value));
}

template <typename D> Windows::Graphics::Effects::IGraphicsEffectSource consume_Microsoft_Graphics_Canvas_Effects_ITransform2DEffect<D>::Source() const
{
    Windows::Graphics::Effects::IGraphicsEffectSource source{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ITransform2DEffect)->get_Source(put_abi(source)));
    return source;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ITransform2DEffect<D>::Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ITransform2DEffect)->put_Source(get_abi(source)));
}

template <typename D> Microsoft::Graphics::Canvas::CanvasImageInterpolation consume_Microsoft_Graphics_Canvas_Effects_ITransform3DEffect<D>::InterpolationMode() const
{
    Microsoft::Graphics::Canvas::CanvasImageInterpolation value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ITransform3DEffect)->get_InterpolationMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ITransform3DEffect<D>::InterpolationMode(Microsoft::Graphics::Canvas::CanvasImageInterpolation const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ITransform3DEffect)->put_InterpolationMode(get_abi(value)));
}

template <typename D> Microsoft::Graphics::Canvas::Effects::EffectBorderMode consume_Microsoft_Graphics_Canvas_Effects_ITransform3DEffect<D>::BorderMode() const
{
    Microsoft::Graphics::Canvas::Effects::EffectBorderMode value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ITransform3DEffect)->get_BorderMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ITransform3DEffect<D>::BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ITransform3DEffect)->put_BorderMode(get_abi(value)));
}

template <typename D> Windows::Foundation::Numerics::float4x4 consume_Microsoft_Graphics_Canvas_Effects_ITransform3DEffect<D>::TransformMatrix() const
{
    Windows::Foundation::Numerics::float4x4 value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ITransform3DEffect)->get_TransformMatrix(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ITransform3DEffect<D>::TransformMatrix(Windows::Foundation::Numerics::float4x4 const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ITransform3DEffect)->put_TransformMatrix(get_abi(value)));
}

template <typename D> Windows::Graphics::Effects::IGraphicsEffectSource consume_Microsoft_Graphics_Canvas_Effects_ITransform3DEffect<D>::Source() const
{
    Windows::Graphics::Effects::IGraphicsEffectSource source{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ITransform3DEffect)->get_Source(put_abi(source)));
    return source;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ITransform3DEffect<D>::Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ITransform3DEffect)->put_Source(get_abi(source)));
}

template <typename D> Windows::Foundation::Numerics::float2 consume_Microsoft_Graphics_Canvas_Effects_ITurbulenceEffect<D>::Offset() const
{
    Windows::Foundation::Numerics::float2 value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ITurbulenceEffect)->get_Offset(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ITurbulenceEffect<D>::Offset(Windows::Foundation::Numerics::float2 const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ITurbulenceEffect)->put_Offset(get_abi(value)));
}

template <typename D> Windows::Foundation::Numerics::float2 consume_Microsoft_Graphics_Canvas_Effects_ITurbulenceEffect<D>::Size() const
{
    Windows::Foundation::Numerics::float2 value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ITurbulenceEffect)->get_Size(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ITurbulenceEffect<D>::Size(Windows::Foundation::Numerics::float2 const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ITurbulenceEffect)->put_Size(get_abi(value)));
}

template <typename D> Windows::Foundation::Numerics::float2 consume_Microsoft_Graphics_Canvas_Effects_ITurbulenceEffect<D>::Frequency() const
{
    Windows::Foundation::Numerics::float2 value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ITurbulenceEffect)->get_Frequency(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ITurbulenceEffect<D>::Frequency(Windows::Foundation::Numerics::float2 const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ITurbulenceEffect)->put_Frequency(get_abi(value)));
}

template <typename D> int32_t consume_Microsoft_Graphics_Canvas_Effects_ITurbulenceEffect<D>::Octaves() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ITurbulenceEffect)->get_Octaves(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ITurbulenceEffect<D>::Octaves(int32_t value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ITurbulenceEffect)->put_Octaves(value));
}

template <typename D> int32_t consume_Microsoft_Graphics_Canvas_Effects_ITurbulenceEffect<D>::Seed() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ITurbulenceEffect)->get_Seed(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ITurbulenceEffect<D>::Seed(int32_t value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ITurbulenceEffect)->put_Seed(value));
}

template <typename D> Microsoft::Graphics::Canvas::Effects::TurbulenceEffectNoise consume_Microsoft_Graphics_Canvas_Effects_ITurbulenceEffect<D>::Noise() const
{
    Microsoft::Graphics::Canvas::Effects::TurbulenceEffectNoise value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ITurbulenceEffect)->get_Noise(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ITurbulenceEffect<D>::Noise(Microsoft::Graphics::Canvas::Effects::TurbulenceEffectNoise const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ITurbulenceEffect)->put_Noise(get_abi(value)));
}

template <typename D> bool consume_Microsoft_Graphics_Canvas_Effects_ITurbulenceEffect<D>::Tileable() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ITurbulenceEffect)->get_Tileable(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_ITurbulenceEffect<D>::Tileable(bool value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::ITurbulenceEffect)->put_Tileable(value));
}

template <typename D> Windows::Graphics::Effects::IGraphicsEffectSource consume_Microsoft_Graphics_Canvas_Effects_IUnPremultiplyEffect<D>::Source() const
{
    Windows::Graphics::Effects::IGraphicsEffectSource source{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IUnPremultiplyEffect)->get_Source(put_abi(source)));
    return source;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IUnPremultiplyEffect<D>::Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IUnPremultiplyEffect)->put_Source(get_abi(source)));
}

template <typename D> Windows::UI::Color consume_Microsoft_Graphics_Canvas_Effects_IVignetteEffect<D>::Color() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IVignetteEffect)->get_Color(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IVignetteEffect<D>::Color(Windows::UI::Color const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IVignetteEffect)->put_Color(get_abi(value)));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Effects_IVignetteEffect<D>::Amount() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IVignetteEffect)->get_Amount(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IVignetteEffect<D>::Amount(float value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IVignetteEffect)->put_Amount(value));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Effects_IVignetteEffect<D>::Curve() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IVignetteEffect)->get_Curve(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IVignetteEffect<D>::Curve(float value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IVignetteEffect)->put_Curve(value));
}

template <typename D> Windows::Foundation::Numerics::float4 consume_Microsoft_Graphics_Canvas_Effects_IVignetteEffect<D>::ColorHdr() const
{
    Windows::Foundation::Numerics::float4 value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IVignetteEffect)->get_ColorHdr(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IVignetteEffect<D>::ColorHdr(Windows::Foundation::Numerics::float4 const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IVignetteEffect)->put_ColorHdr(get_abi(value)));
}

template <typename D> Windows::Graphics::Effects::IGraphicsEffectSource consume_Microsoft_Graphics_Canvas_Effects_IVignetteEffect<D>::Source() const
{
    Windows::Graphics::Effects::IGraphicsEffectSource source{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IVignetteEffect)->get_Source(put_abi(source)));
    return source;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Effects_IVignetteEffect<D>::Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Effects::IVignetteEffect)->put_Source(get_abi(source)));
}

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Effects::IAlphaMaskEffect> : produce_base<D, Microsoft::Graphics::Canvas::Effects::IAlphaMaskEffect>
{
    HRESULT __stdcall get_Source(::IUnknown** source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *source = detach_abi(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            *source = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source(::IUnknown* source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source(*reinterpret_cast<Windows::Graphics::Effects::IGraphicsEffectSource const*>(&source));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AlphaMask(::IUnknown** source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *source = detach_abi(this->shim().AlphaMask());
            return S_OK;
        }
        catch (...)
        {
            *source = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AlphaMask(::IUnknown* source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AlphaMask(*reinterpret_cast<Windows::Graphics::Effects::IGraphicsEffectSource const*>(&source));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Effects::IAlphaMaskEffectStatics> : produce_base<D, Microsoft::Graphics::Canvas::Effects::IAlphaMaskEffectStatics>
{
    HRESULT __stdcall get_IsSupported(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Effects::IArithmeticCompositeEffect> : produce_base<D, Microsoft::Graphics::Canvas::Effects::IArithmeticCompositeEffect>
{
    HRESULT __stdcall get_ClampOutput(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ClampOutput());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ClampOutput(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ClampOutput(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MultiplyAmount(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MultiplyAmount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MultiplyAmount(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MultiplyAmount(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source1Amount(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Source1Amount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source1Amount(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source1Amount(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source2Amount(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Source2Amount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source2Amount(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source2Amount(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Offset(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Offset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Offset(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Offset(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source1(::IUnknown** source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *source = detach_abi(this->shim().Source1());
            return S_OK;
        }
        catch (...)
        {
            *source = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source1(::IUnknown* source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source1(*reinterpret_cast<Windows::Graphics::Effects::IGraphicsEffectSource const*>(&source));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source2(::IUnknown** source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *source = detach_abi(this->shim().Source2());
            return S_OK;
        }
        catch (...)
        {
            *source = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source2(::IUnknown* source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source2(*reinterpret_cast<Windows::Graphics::Effects::IGraphicsEffectSource const*>(&source));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Effects::IAtlasEffect> : produce_base<D, Microsoft::Graphics::Canvas::Effects::IAtlasEffect>
{
    HRESULT __stdcall get_SourceRectangle(Windows::Foundation::Rect* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SourceRectangle());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SourceRectangle(Windows::Foundation::Rect value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SourceRectangle(*reinterpret_cast<Windows::Foundation::Rect const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PaddingRectangle(Windows::Foundation::Rect* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PaddingRectangle());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PaddingRectangle(Windows::Foundation::Rect value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PaddingRectangle(*reinterpret_cast<Windows::Foundation::Rect const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source(::IUnknown** source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *source = detach_abi(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            *source = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source(::IUnknown* source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source(*reinterpret_cast<Windows::Graphics::Effects::IGraphicsEffectSource const*>(&source));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Effects::IBlendEffect> : produce_base<D, Microsoft::Graphics::Canvas::Effects::IBlendEffect>
{
    HRESULT __stdcall get_Mode(Microsoft::Graphics::Canvas::Effects::BlendEffectMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Mode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Mode(Microsoft::Graphics::Canvas::Effects::BlendEffectMode value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Mode(*reinterpret_cast<Microsoft::Graphics::Canvas::Effects::BlendEffectMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Background(::IUnknown** source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *source = detach_abi(this->shim().Background());
            return S_OK;
        }
        catch (...)
        {
            *source = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Background(::IUnknown* source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Background(*reinterpret_cast<Windows::Graphics::Effects::IGraphicsEffectSource const*>(&source));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Foreground(::IUnknown** source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *source = detach_abi(this->shim().Foreground());
            return S_OK;
        }
        catch (...)
        {
            *source = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Foreground(::IUnknown* source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Foreground(*reinterpret_cast<Windows::Graphics::Effects::IGraphicsEffectSource const*>(&source));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Effects::IBorderEffect> : produce_base<D, Microsoft::Graphics::Canvas::Effects::IBorderEffect>
{
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

    HRESULT __stdcall get_Source(::IUnknown** source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *source = detach_abi(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            *source = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source(::IUnknown* source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source(*reinterpret_cast<Windows::Graphics::Effects::IGraphicsEffectSource const*>(&source));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Effects::IBrightnessEffect> : produce_base<D, Microsoft::Graphics::Canvas::Effects::IBrightnessEffect>
{
    HRESULT __stdcall get_WhitePoint(Windows::Foundation::Numerics::float2* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().WhitePoint());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_WhitePoint(Windows::Foundation::Numerics::float2 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WhitePoint(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BlackPoint(Windows::Foundation::Numerics::float2* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BlackPoint());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BlackPoint(Windows::Foundation::Numerics::float2 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BlackPoint(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source(::IUnknown** source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *source = detach_abi(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            *source = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source(::IUnknown* source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source(*reinterpret_cast<Windows::Graphics::Effects::IGraphicsEffectSource const*>(&source));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Effects::ICanvasEffect> : produce_base<D, Microsoft::Graphics::Canvas::Effects::ICanvasEffect>
{
    HRESULT __stdcall get_CacheOutput(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CacheOutput());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CacheOutput(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CacheOutput(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BufferPrecision(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BufferPrecision());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BufferPrecision(::IUnknown* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BufferPrecision(*reinterpret_cast<Windows::Foundation::IReference<Microsoft::Graphics::Canvas::CanvasBufferPrecision> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall InvalidateSourceRectangle(::IUnknown* resourceCreator, uint32_t sourceIndex, Windows::Foundation::Rect invalidRectangle) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InvalidateSourceRectangle(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreatorWithDpi const*>(&resourceCreator), sourceIndex, *reinterpret_cast<Windows::Foundation::Rect const*>(&invalidRectangle));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetInvalidRectangles(::IUnknown* resourceCreator, uint32_t* __valueElementsSize, Windows::Foundation::Rect** valueElements) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            std::tie(*__valueElementsSize, *valueElements) = detach_abi(this->shim().GetInvalidRectangles(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreatorWithDpi const*>(&resourceCreator)));
            return S_OK;
        }
        catch (...)
        {
            *__valueElementsSize = 0;
            *valueElements = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetRequiredSourceRectangle(::IUnknown* resourceCreator, Windows::Foundation::Rect outputRectangle, ::IUnknown* sourceEffect, uint32_t sourceIndex, Windows::Foundation::Rect sourceBounds, Windows::Foundation::Rect* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetRequiredSourceRectangle(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreatorWithDpi const*>(&resourceCreator), *reinterpret_cast<Windows::Foundation::Rect const*>(&outputRectangle), *reinterpret_cast<Microsoft::Graphics::Canvas::Effects::ICanvasEffect const*>(&sourceEffect), sourceIndex, *reinterpret_cast<Windows::Foundation::Rect const*>(&sourceBounds)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetRequiredSourceRectangles(::IUnknown* resourceCreator, Windows::Foundation::Rect outputRectangle, uint32_t __sourceEffectsSize, ::IUnknown** sourceEffects, uint32_t __sourceIndicesSize, uint32_t* sourceIndices, uint32_t __sourceBoundsSize, Windows::Foundation::Rect* sourceBounds, uint32_t* __valueElementsSize, Windows::Foundation::Rect** valueElements) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            std::tie(*__valueElementsSize, *valueElements) = detach_abi(this->shim().GetRequiredSourceRectangles(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreatorWithDpi const*>(&resourceCreator), *reinterpret_cast<Windows::Foundation::Rect const*>(&outputRectangle), array_view<Microsoft::Graphics::Canvas::Effects::ICanvasEffect const>(reinterpret_cast<Microsoft::Graphics::Canvas::Effects::ICanvasEffect const *>(sourceEffects), reinterpret_cast<Microsoft::Graphics::Canvas::Effects::ICanvasEffect const *>(sourceEffects) + __sourceEffectsSize), array_view<uint32_t const>(reinterpret_cast<uint32_t const *>(sourceIndices), reinterpret_cast<uint32_t const *>(sourceIndices) + __sourceIndicesSize), array_view<Windows::Foundation::Rect const>(reinterpret_cast<Windows::Foundation::Rect const *>(sourceBounds), reinterpret_cast<Windows::Foundation::Rect const *>(sourceBounds) + __sourceBoundsSize)));
            return S_OK;
        }
        catch (...)
        {
            *__valueElementsSize = 0;
            *valueElements = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Effects::IChromaKeyEffect> : produce_base<D, Microsoft::Graphics::Canvas::Effects::IChromaKeyEffect>
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

    HRESULT __stdcall get_Tolerance(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Tolerance());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Tolerance(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Tolerance(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InvertAlpha(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InvertAlpha());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_InvertAlpha(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InvertAlpha(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Feather(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Feather());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Feather(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Feather(value);
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

    HRESULT __stdcall get_Source(::IUnknown** source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *source = detach_abi(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            *source = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source(::IUnknown* source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source(*reinterpret_cast<Windows::Graphics::Effects::IGraphicsEffectSource const*>(&source));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Effects::IColorManagementEffect> : produce_base<D, Microsoft::Graphics::Canvas::Effects::IColorManagementEffect>
{
    HRESULT __stdcall get_SourceColorProfile(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SourceColorProfile());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SourceColorProfile(::IUnknown* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SourceColorProfile(*reinterpret_cast<Microsoft::Graphics::Canvas::Effects::ColorManagementProfile const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SourceRenderingIntent(Microsoft::Graphics::Canvas::Effects::ColorManagementRenderingIntent* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SourceRenderingIntent());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SourceRenderingIntent(Microsoft::Graphics::Canvas::Effects::ColorManagementRenderingIntent value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SourceRenderingIntent(*reinterpret_cast<Microsoft::Graphics::Canvas::Effects::ColorManagementRenderingIntent const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OutputColorProfile(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OutputColorProfile());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_OutputColorProfile(::IUnknown* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OutputColorProfile(*reinterpret_cast<Microsoft::Graphics::Canvas::Effects::ColorManagementProfile const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OutputRenderingIntent(Microsoft::Graphics::Canvas::Effects::ColorManagementRenderingIntent* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OutputRenderingIntent());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_OutputRenderingIntent(Microsoft::Graphics::Canvas::Effects::ColorManagementRenderingIntent value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OutputRenderingIntent(*reinterpret_cast<Microsoft::Graphics::Canvas::Effects::ColorManagementRenderingIntent const*>(&value));
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

    HRESULT __stdcall put_AlphaMode(Microsoft::Graphics::Canvas::CanvasAlphaMode value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AlphaMode(*reinterpret_cast<Microsoft::Graphics::Canvas::CanvasAlphaMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Quality(Microsoft::Graphics::Canvas::Effects::ColorManagementEffectQuality* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Quality());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Quality(Microsoft::Graphics::Canvas::Effects::ColorManagementEffectQuality value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Quality(*reinterpret_cast<Microsoft::Graphics::Canvas::Effects::ColorManagementEffectQuality const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source(::IUnknown** source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *source = detach_abi(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            *source = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source(::IUnknown* source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source(*reinterpret_cast<Windows::Graphics::Effects::IGraphicsEffectSource const*>(&source));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Effects::IColorManagementEffectStatics> : produce_base<D, Microsoft::Graphics::Canvas::Effects::IColorManagementEffectStatics>
{
    HRESULT __stdcall IsBestQualitySupported(::IUnknown* device, bool* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().IsBestQualitySupported(*reinterpret_cast<Microsoft::Graphics::Canvas::CanvasDevice const*>(&device)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Effects::IColorManagementProfile> : produce_base<D, Microsoft::Graphics::Canvas::Effects::IColorManagementProfile>
{
    HRESULT __stdcall get_ColorSpace(Microsoft::Graphics::Canvas::CanvasColorSpace* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ColorSpace());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IccProfile(uint32_t* __valueElementsSize, uint8_t** valueElements) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            std::tie(*__valueElementsSize, *valueElements) = detach_abi(this->shim().IccProfile());
            return S_OK;
        }
        catch (...)
        {
            *__valueElementsSize = 0;
            *valueElements = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Type(Microsoft::Graphics::Canvas::Effects::ColorManagementProfileType* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Type());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SimpleProfile(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SimpleProfile());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExtendedColorSpace(Microsoft::Graphics::Canvas::Effects::ExtendedColorSpace* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ExtendedColorSpace());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Effects::IColorManagementProfileFactory> : produce_base<D, Microsoft::Graphics::Canvas::Effects::IColorManagementProfileFactory>
{
    HRESULT __stdcall Create(Microsoft::Graphics::Canvas::CanvasColorSpace colorSpace, ::IUnknown** result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Create(*reinterpret_cast<Microsoft::Graphics::Canvas::CanvasColorSpace const*>(&colorSpace)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Effects::IColorManagementProfileStatics> : produce_base<D, Microsoft::Graphics::Canvas::Effects::IColorManagementProfileStatics>
{
    HRESULT __stdcall CreateCustom(uint32_t __iccProfileSize, uint8_t* iccProfile, ::IUnknown** result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateCustom(array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(iccProfile), reinterpret_cast<uint8_t const *>(iccProfile) + __iccProfileSize)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateSimple(struct_of<36> simpleProfile, ::IUnknown** result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateSimple(*reinterpret_cast<Microsoft::Graphics::Canvas::Effects::ColorManagementSimpleProfile const*>(&simpleProfile)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateExtended(Microsoft::Graphics::Canvas::Effects::ExtendedColorSpace colorSpace, ::IUnknown** result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateExtended(*reinterpret_cast<Microsoft::Graphics::Canvas::Effects::ExtendedColorSpace const*>(&colorSpace)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IsSupported(Microsoft::Graphics::Canvas::Effects::ColorManagementProfileType type, ::IUnknown* device, bool* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().IsSupported(*reinterpret_cast<Microsoft::Graphics::Canvas::Effects::ColorManagementProfileType const*>(&type), *reinterpret_cast<Microsoft::Graphics::Canvas::CanvasDevice const*>(&device)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Effects::IColorMatrixEffect> : produce_base<D, Microsoft::Graphics::Canvas::Effects::IColorMatrixEffect>
{
    HRESULT __stdcall get_ColorMatrix(struct_of<80>* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ColorMatrix());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ColorMatrix(struct_of<80> value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ColorMatrix(*reinterpret_cast<Microsoft::Graphics::Canvas::Effects::Matrix5x4 const*>(&value));
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

    HRESULT __stdcall put_AlphaMode(Microsoft::Graphics::Canvas::CanvasAlphaMode value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AlphaMode(*reinterpret_cast<Microsoft::Graphics::Canvas::CanvasAlphaMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ClampOutput(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ClampOutput());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ClampOutput(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ClampOutput(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source(::IUnknown** source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *source = detach_abi(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            *source = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source(::IUnknown* source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source(*reinterpret_cast<Windows::Graphics::Effects::IGraphicsEffectSource const*>(&source));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Effects::IColorSourceEffect> : produce_base<D, Microsoft::Graphics::Canvas::Effects::IColorSourceEffect>
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
struct produce<D, Microsoft::Graphics::Canvas::Effects::ICompositeEffect> : produce_base<D, Microsoft::Graphics::Canvas::Effects::ICompositeEffect>
{
    HRESULT __stdcall get_Mode(Microsoft::Graphics::Canvas::CanvasComposite* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Mode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Mode(Microsoft::Graphics::Canvas::CanvasComposite value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Mode(*reinterpret_cast<Microsoft::Graphics::Canvas::CanvasComposite const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Sources(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Sources());
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
struct produce<D, Microsoft::Graphics::Canvas::Effects::IContrastEffect> : produce_base<D, Microsoft::Graphics::Canvas::Effects::IContrastEffect>
{
    HRESULT __stdcall get_Contrast(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Contrast());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Contrast(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Contrast(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ClampSource(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ClampSource());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ClampSource(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ClampSource(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source(::IUnknown** source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *source = detach_abi(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            *source = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source(::IUnknown* source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source(*reinterpret_cast<Windows::Graphics::Effects::IGraphicsEffectSource const*>(&source));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Effects::IConvolveMatrixEffect> : produce_base<D, Microsoft::Graphics::Canvas::Effects::IConvolveMatrixEffect>
{
    HRESULT __stdcall get_KernelScale(Windows::Foundation::Numerics::float2* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().KernelScale());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_KernelScale(Windows::Foundation::Numerics::float2 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().KernelScale(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InterpolationMode(Microsoft::Graphics::Canvas::CanvasImageInterpolation* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InterpolationMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_InterpolationMode(Microsoft::Graphics::Canvas::CanvasImageInterpolation value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InterpolationMode(*reinterpret_cast<Microsoft::Graphics::Canvas::CanvasImageInterpolation const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KernelWidth(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().KernelWidth());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_KernelWidth(int32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().KernelWidth(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KernelHeight(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().KernelHeight());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_KernelHeight(int32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().KernelHeight(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KernelMatrix(uint32_t* __valueElementsSize, float** valueElements) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            std::tie(*__valueElementsSize, *valueElements) = detach_abi(this->shim().KernelMatrix());
            return S_OK;
        }
        catch (...)
        {
            *__valueElementsSize = 0;
            *valueElements = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_KernelMatrix(uint32_t __valueElementsSize, float* valueElements) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().KernelMatrix(array_view<float const>(reinterpret_cast<float const *>(valueElements), reinterpret_cast<float const *>(valueElements) + __valueElementsSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Divisor(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Divisor());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Divisor(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Divisor(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Offset(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Offset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Offset(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Offset(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KernelOffset(Windows::Foundation::Numerics::float2* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().KernelOffset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_KernelOffset(Windows::Foundation::Numerics::float2 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().KernelOffset(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PreserveAlpha(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PreserveAlpha());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PreserveAlpha(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PreserveAlpha(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BorderMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BorderMode(*reinterpret_cast<Microsoft::Graphics::Canvas::Effects::EffectBorderMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ClampOutput(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ClampOutput());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ClampOutput(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ClampOutput(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source(::IUnknown** source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *source = detach_abi(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            *source = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source(::IUnknown* source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source(*reinterpret_cast<Windows::Graphics::Effects::IGraphicsEffectSource const*>(&source));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Effects::ICropEffect> : produce_base<D, Microsoft::Graphics::Canvas::Effects::ICropEffect>
{
    HRESULT __stdcall get_SourceRectangle(Windows::Foundation::Rect* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SourceRectangle());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SourceRectangle(Windows::Foundation::Rect value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SourceRectangle(*reinterpret_cast<Windows::Foundation::Rect const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BorderMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BorderMode(*reinterpret_cast<Microsoft::Graphics::Canvas::Effects::EffectBorderMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source(::IUnknown** source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *source = detach_abi(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            *source = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source(::IUnknown* source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source(*reinterpret_cast<Windows::Graphics::Effects::IGraphicsEffectSource const*>(&source));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Effects::ICrossFadeEffect> : produce_base<D, Microsoft::Graphics::Canvas::Effects::ICrossFadeEffect>
{
    HRESULT __stdcall get_CrossFade(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CrossFade());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CrossFade(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CrossFade(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source2(::IUnknown** source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *source = detach_abi(this->shim().Source2());
            return S_OK;
        }
        catch (...)
        {
            *source = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source2(::IUnknown* source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source2(*reinterpret_cast<Windows::Graphics::Effects::IGraphicsEffectSource const*>(&source));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source1(::IUnknown** source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *source = detach_abi(this->shim().Source1());
            return S_OK;
        }
        catch (...)
        {
            *source = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source1(::IUnknown* source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source1(*reinterpret_cast<Windows::Graphics::Effects::IGraphicsEffectSource const*>(&source));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Effects::ICrossFadeEffectStatics> : produce_base<D, Microsoft::Graphics::Canvas::Effects::ICrossFadeEffectStatics>
{
    HRESULT __stdcall get_IsSupported(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Effects::IDirectionalBlurEffect> : produce_base<D, Microsoft::Graphics::Canvas::Effects::IDirectionalBlurEffect>
{
    HRESULT __stdcall get_BlurAmount(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BlurAmount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BlurAmount(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BlurAmount(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Angle(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Angle());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Angle(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Angle(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Optimization(Microsoft::Graphics::Canvas::Effects::EffectOptimization* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Optimization());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Optimization(Microsoft::Graphics::Canvas::Effects::EffectOptimization value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Optimization(*reinterpret_cast<Microsoft::Graphics::Canvas::Effects::EffectOptimization const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BorderMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BorderMode(*reinterpret_cast<Microsoft::Graphics::Canvas::Effects::EffectBorderMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source(::IUnknown** source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *source = detach_abi(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            *source = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source(::IUnknown* source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source(*reinterpret_cast<Windows::Graphics::Effects::IGraphicsEffectSource const*>(&source));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Effects::IDiscreteTransferEffect> : produce_base<D, Microsoft::Graphics::Canvas::Effects::IDiscreteTransferEffect>
{
    HRESULT __stdcall get_RedTable(uint32_t* __valueElementsSize, float** valueElements) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            std::tie(*__valueElementsSize, *valueElements) = detach_abi(this->shim().RedTable());
            return S_OK;
        }
        catch (...)
        {
            *__valueElementsSize = 0;
            *valueElements = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RedTable(uint32_t __valueElementsSize, float* valueElements) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RedTable(array_view<float const>(reinterpret_cast<float const *>(valueElements), reinterpret_cast<float const *>(valueElements) + __valueElementsSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RedDisable(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RedDisable());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RedDisable(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RedDisable(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_GreenTable(uint32_t* __valueElementsSize, float** valueElements) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            std::tie(*__valueElementsSize, *valueElements) = detach_abi(this->shim().GreenTable());
            return S_OK;
        }
        catch (...)
        {
            *__valueElementsSize = 0;
            *valueElements = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_GreenTable(uint32_t __valueElementsSize, float* valueElements) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GreenTable(array_view<float const>(reinterpret_cast<float const *>(valueElements), reinterpret_cast<float const *>(valueElements) + __valueElementsSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_GreenDisable(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GreenDisable());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_GreenDisable(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GreenDisable(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BlueTable(uint32_t* __valueElementsSize, float** valueElements) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            std::tie(*__valueElementsSize, *valueElements) = detach_abi(this->shim().BlueTable());
            return S_OK;
        }
        catch (...)
        {
            *__valueElementsSize = 0;
            *valueElements = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BlueTable(uint32_t __valueElementsSize, float* valueElements) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BlueTable(array_view<float const>(reinterpret_cast<float const *>(valueElements), reinterpret_cast<float const *>(valueElements) + __valueElementsSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BlueDisable(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BlueDisable());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BlueDisable(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BlueDisable(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AlphaTable(uint32_t* __valueElementsSize, float** valueElements) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            std::tie(*__valueElementsSize, *valueElements) = detach_abi(this->shim().AlphaTable());
            return S_OK;
        }
        catch (...)
        {
            *__valueElementsSize = 0;
            *valueElements = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AlphaTable(uint32_t __valueElementsSize, float* valueElements) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AlphaTable(array_view<float const>(reinterpret_cast<float const *>(valueElements), reinterpret_cast<float const *>(valueElements) + __valueElementsSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AlphaDisable(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AlphaDisable());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AlphaDisable(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AlphaDisable(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ClampOutput(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ClampOutput());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ClampOutput(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ClampOutput(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source(::IUnknown** source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *source = detach_abi(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            *source = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source(::IUnknown* source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source(*reinterpret_cast<Windows::Graphics::Effects::IGraphicsEffectSource const*>(&source));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Effects::IDisplacementMapEffect> : produce_base<D, Microsoft::Graphics::Canvas::Effects::IDisplacementMapEffect>
{
    HRESULT __stdcall get_Amount(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Amount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Amount(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Amount(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_XChannelSelect(Microsoft::Graphics::Canvas::Effects::EffectChannelSelect* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().XChannelSelect());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_XChannelSelect(Microsoft::Graphics::Canvas::Effects::EffectChannelSelect value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().XChannelSelect(*reinterpret_cast<Microsoft::Graphics::Canvas::Effects::EffectChannelSelect const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_YChannelSelect(Microsoft::Graphics::Canvas::Effects::EffectChannelSelect* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().YChannelSelect());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_YChannelSelect(Microsoft::Graphics::Canvas::Effects::EffectChannelSelect value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().YChannelSelect(*reinterpret_cast<Microsoft::Graphics::Canvas::Effects::EffectChannelSelect const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source(::IUnknown** source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *source = detach_abi(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            *source = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source(::IUnknown* source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source(*reinterpret_cast<Windows::Graphics::Effects::IGraphicsEffectSource const*>(&source));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Displacement(::IUnknown** source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *source = detach_abi(this->shim().Displacement());
            return S_OK;
        }
        catch (...)
        {
            *source = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Displacement(::IUnknown* source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Displacement(*reinterpret_cast<Windows::Graphics::Effects::IGraphicsEffectSource const*>(&source));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Effects::IDistantDiffuseEffect> : produce_base<D, Microsoft::Graphics::Canvas::Effects::IDistantDiffuseEffect>
{
    HRESULT __stdcall get_Azimuth(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Azimuth());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Azimuth(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Azimuth(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Elevation(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Elevation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Elevation(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Elevation(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DiffuseAmount(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DiffuseAmount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DiffuseAmount(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DiffuseAmount(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HeightMapScale(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HeightMapScale());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_HeightMapScale(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HeightMapScale(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LightColor(struct_of<4>* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LightColor());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LightColor(struct_of<4> value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LightColor(*reinterpret_cast<Windows::UI::Color const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HeightMapKernelSize(Windows::Foundation::Numerics::float2* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HeightMapKernelSize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_HeightMapKernelSize(Windows::Foundation::Numerics::float2 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HeightMapKernelSize(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HeightMapInterpolationMode(Microsoft::Graphics::Canvas::CanvasImageInterpolation* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HeightMapInterpolationMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_HeightMapInterpolationMode(Microsoft::Graphics::Canvas::CanvasImageInterpolation value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HeightMapInterpolationMode(*reinterpret_cast<Microsoft::Graphics::Canvas::CanvasImageInterpolation const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LightColorHdr(Windows::Foundation::Numerics::float4* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LightColorHdr());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LightColorHdr(Windows::Foundation::Numerics::float4 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LightColorHdr(*reinterpret_cast<Windows::Foundation::Numerics::float4 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source(::IUnknown** source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *source = detach_abi(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            *source = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source(::IUnknown* source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source(*reinterpret_cast<Windows::Graphics::Effects::IGraphicsEffectSource const*>(&source));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Effects::IDistantSpecularEffect> : produce_base<D, Microsoft::Graphics::Canvas::Effects::IDistantSpecularEffect>
{
    HRESULT __stdcall get_Azimuth(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Azimuth());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Azimuth(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Azimuth(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Elevation(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Elevation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Elevation(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Elevation(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SpecularExponent(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SpecularExponent());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SpecularExponent(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SpecularExponent(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SpecularAmount(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SpecularAmount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SpecularAmount(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SpecularAmount(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HeightMapScale(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HeightMapScale());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_HeightMapScale(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HeightMapScale(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LightColor(struct_of<4>* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LightColor());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LightColor(struct_of<4> value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LightColor(*reinterpret_cast<Windows::UI::Color const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HeightMapKernelSize(Windows::Foundation::Numerics::float2* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HeightMapKernelSize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_HeightMapKernelSize(Windows::Foundation::Numerics::float2 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HeightMapKernelSize(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HeightMapInterpolationMode(Microsoft::Graphics::Canvas::CanvasImageInterpolation* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HeightMapInterpolationMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_HeightMapInterpolationMode(Microsoft::Graphics::Canvas::CanvasImageInterpolation value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HeightMapInterpolationMode(*reinterpret_cast<Microsoft::Graphics::Canvas::CanvasImageInterpolation const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LightColorHdr(Windows::Foundation::Numerics::float4* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LightColorHdr());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LightColorHdr(Windows::Foundation::Numerics::float4 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LightColorHdr(*reinterpret_cast<Windows::Foundation::Numerics::float4 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source(::IUnknown** source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *source = detach_abi(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            *source = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source(::IUnknown* source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source(*reinterpret_cast<Windows::Graphics::Effects::IGraphicsEffectSource const*>(&source));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Effects::IDpiCompensationEffect> : produce_base<D, Microsoft::Graphics::Canvas::Effects::IDpiCompensationEffect>
{
    HRESULT __stdcall get_InterpolationMode(Microsoft::Graphics::Canvas::CanvasImageInterpolation* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InterpolationMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_InterpolationMode(Microsoft::Graphics::Canvas::CanvasImageInterpolation value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InterpolationMode(*reinterpret_cast<Microsoft::Graphics::Canvas::CanvasImageInterpolation const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BorderMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BorderMode(*reinterpret_cast<Microsoft::Graphics::Canvas::Effects::EffectBorderMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SourceDpi(Windows::Foundation::Numerics::float2* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SourceDpi());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SourceDpi(Windows::Foundation::Numerics::float2 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SourceDpi(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source(::IUnknown** source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *source = detach_abi(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            *source = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source(::IUnknown* source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source(*reinterpret_cast<Windows::Graphics::Effects::IGraphicsEffectSource const*>(&source));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Effects::IEdgeDetectionEffect> : produce_base<D, Microsoft::Graphics::Canvas::Effects::IEdgeDetectionEffect>
{
    HRESULT __stdcall get_Amount(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Amount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Amount(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Amount(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BlurAmount(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BlurAmount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BlurAmount(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BlurAmount(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Mode(Microsoft::Graphics::Canvas::Effects::EdgeDetectionEffectMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Mode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Mode(Microsoft::Graphics::Canvas::Effects::EdgeDetectionEffectMode value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Mode(*reinterpret_cast<Microsoft::Graphics::Canvas::Effects::EdgeDetectionEffectMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OverlayEdges(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OverlayEdges());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_OverlayEdges(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OverlayEdges(value);
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

    HRESULT __stdcall put_AlphaMode(Microsoft::Graphics::Canvas::CanvasAlphaMode value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AlphaMode(*reinterpret_cast<Microsoft::Graphics::Canvas::CanvasAlphaMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source(::IUnknown** source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *source = detach_abi(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            *source = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source(::IUnknown* source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source(*reinterpret_cast<Windows::Graphics::Effects::IGraphicsEffectSource const*>(&source));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Effects::IEffectTransferTable3D> : produce_base<D, Microsoft::Graphics::Canvas::Effects::IEffectTransferTable3D>
{
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
struct produce<D, Microsoft::Graphics::Canvas::Effects::IEffectTransferTable3DStatics> : produce_base<D, Microsoft::Graphics::Canvas::Effects::IEffectTransferTable3DStatics>
{
    HRESULT __stdcall CreateFromColors(::IUnknown* resourceCreator, uint32_t __colorsSize, struct_of<4>* colors, int32_t sizeB, int32_t sizeG, int32_t sizeR, ::IUnknown** result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateFromColors(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator), array_view<Windows::UI::Color const>(reinterpret_cast<Windows::UI::Color const *>(colors), reinterpret_cast<Windows::UI::Color const *>(colors) + __colorsSize), sizeB, sizeG, sizeR));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateFromBytes(::IUnknown* resourceCreator, uint32_t __bytesSize, uint8_t* bytes, int32_t sizeB, int32_t sizeG, int32_t sizeR, Windows::Graphics::DirectX::DirectXPixelFormat format, ::IUnknown** result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateFromBytes(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator), array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(bytes), reinterpret_cast<uint8_t const *>(bytes) + __bytesSize), sizeB, sizeG, sizeR, *reinterpret_cast<Windows::Graphics::DirectX::DirectXPixelFormat const*>(&format)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Effects::IEmbossEffect> : produce_base<D, Microsoft::Graphics::Canvas::Effects::IEmbossEffect>
{
    HRESULT __stdcall get_Amount(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Amount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Amount(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Amount(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Angle(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Angle());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Angle(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Angle(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source(::IUnknown** source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *source = detach_abi(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            *source = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source(::IUnknown* source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source(*reinterpret_cast<Windows::Graphics::Effects::IGraphicsEffectSource const*>(&source));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Effects::IExposureEffect> : produce_base<D, Microsoft::Graphics::Canvas::Effects::IExposureEffect>
{
    HRESULT __stdcall get_Exposure(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Exposure());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Exposure(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Exposure(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source(::IUnknown** source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *source = detach_abi(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            *source = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source(::IUnknown* source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source(*reinterpret_cast<Windows::Graphics::Effects::IGraphicsEffectSource const*>(&source));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Effects::IGammaTransferEffect> : produce_base<D, Microsoft::Graphics::Canvas::Effects::IGammaTransferEffect>
{
    HRESULT __stdcall get_RedAmplitude(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RedAmplitude());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RedAmplitude(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RedAmplitude(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RedExponent(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RedExponent());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RedExponent(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RedExponent(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RedOffset(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RedOffset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RedOffset(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RedOffset(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RedDisable(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RedDisable());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RedDisable(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RedDisable(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_GreenAmplitude(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GreenAmplitude());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_GreenAmplitude(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GreenAmplitude(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_GreenExponent(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GreenExponent());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_GreenExponent(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GreenExponent(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_GreenOffset(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GreenOffset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_GreenOffset(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GreenOffset(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_GreenDisable(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GreenDisable());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_GreenDisable(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GreenDisable(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BlueAmplitude(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BlueAmplitude());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BlueAmplitude(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BlueAmplitude(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BlueExponent(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BlueExponent());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BlueExponent(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BlueExponent(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BlueOffset(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BlueOffset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BlueOffset(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BlueOffset(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BlueDisable(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BlueDisable());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BlueDisable(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BlueDisable(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AlphaAmplitude(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AlphaAmplitude());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AlphaAmplitude(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AlphaAmplitude(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AlphaExponent(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AlphaExponent());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AlphaExponent(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AlphaExponent(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AlphaOffset(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AlphaOffset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AlphaOffset(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AlphaOffset(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AlphaDisable(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AlphaDisable());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AlphaDisable(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AlphaDisable(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ClampOutput(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ClampOutput());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ClampOutput(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ClampOutput(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source(::IUnknown** source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *source = detach_abi(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            *source = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source(::IUnknown* source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source(*reinterpret_cast<Windows::Graphics::Effects::IGraphicsEffectSource const*>(&source));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Effects::IGaussianBlurEffect> : produce_base<D, Microsoft::Graphics::Canvas::Effects::IGaussianBlurEffect>
{
    HRESULT __stdcall get_BlurAmount(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BlurAmount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BlurAmount(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BlurAmount(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Optimization(Microsoft::Graphics::Canvas::Effects::EffectOptimization* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Optimization());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Optimization(Microsoft::Graphics::Canvas::Effects::EffectOptimization value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Optimization(*reinterpret_cast<Microsoft::Graphics::Canvas::Effects::EffectOptimization const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BorderMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BorderMode(*reinterpret_cast<Microsoft::Graphics::Canvas::Effects::EffectBorderMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source(::IUnknown** source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *source = detach_abi(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            *source = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source(::IUnknown* source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source(*reinterpret_cast<Windows::Graphics::Effects::IGraphicsEffectSource const*>(&source));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Effects::IGrayscaleEffect> : produce_base<D, Microsoft::Graphics::Canvas::Effects::IGrayscaleEffect>
{
    HRESULT __stdcall get_Source(::IUnknown** source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *source = detach_abi(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            *source = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source(::IUnknown* source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source(*reinterpret_cast<Windows::Graphics::Effects::IGraphicsEffectSource const*>(&source));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Effects::IHighlightsAndShadowsEffect> : produce_base<D, Microsoft::Graphics::Canvas::Effects::IHighlightsAndShadowsEffect>
{
    HRESULT __stdcall get_Highlights(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Highlights());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Highlights(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Highlights(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Shadows(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Shadows());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Shadows(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Shadows(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Clarity(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Clarity());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Clarity(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Clarity(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaskBlurAmount(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaskBlurAmount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaskBlurAmount(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaskBlurAmount(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SourceIsLinearGamma(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SourceIsLinearGamma());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SourceIsLinearGamma(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SourceIsLinearGamma(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source(::IUnknown** source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *source = detach_abi(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            *source = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source(::IUnknown* source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source(*reinterpret_cast<Windows::Graphics::Effects::IGraphicsEffectSource const*>(&source));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Effects::IHueRotationEffect> : produce_base<D, Microsoft::Graphics::Canvas::Effects::IHueRotationEffect>
{
    HRESULT __stdcall get_Angle(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Angle());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Angle(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Angle(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source(::IUnknown** source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *source = detach_abi(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            *source = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source(::IUnknown* source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source(*reinterpret_cast<Windows::Graphics::Effects::IGraphicsEffectSource const*>(&source));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Effects::IHueToRgbEffect> : produce_base<D, Microsoft::Graphics::Canvas::Effects::IHueToRgbEffect>
{
    HRESULT __stdcall get_SourceColorSpace(Microsoft::Graphics::Canvas::Effects::EffectHueColorSpace* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SourceColorSpace());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SourceColorSpace(Microsoft::Graphics::Canvas::Effects::EffectHueColorSpace value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SourceColorSpace(*reinterpret_cast<Microsoft::Graphics::Canvas::Effects::EffectHueColorSpace const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source(::IUnknown** source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *source = detach_abi(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            *source = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source(::IUnknown* source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source(*reinterpret_cast<Windows::Graphics::Effects::IGraphicsEffectSource const*>(&source));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Effects::IInvertEffect> : produce_base<D, Microsoft::Graphics::Canvas::Effects::IInvertEffect>
{
    HRESULT __stdcall get_Source(::IUnknown** source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *source = detach_abi(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            *source = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source(::IUnknown* source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source(*reinterpret_cast<Windows::Graphics::Effects::IGraphicsEffectSource const*>(&source));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Effects::ILinearTransferEffect> : produce_base<D, Microsoft::Graphics::Canvas::Effects::ILinearTransferEffect>
{
    HRESULT __stdcall get_RedOffset(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RedOffset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RedOffset(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RedOffset(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RedSlope(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RedSlope());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RedSlope(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RedSlope(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RedDisable(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RedDisable());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RedDisable(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RedDisable(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_GreenOffset(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GreenOffset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_GreenOffset(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GreenOffset(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_GreenSlope(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GreenSlope());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_GreenSlope(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GreenSlope(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_GreenDisable(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GreenDisable());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_GreenDisable(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GreenDisable(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BlueOffset(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BlueOffset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BlueOffset(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BlueOffset(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BlueSlope(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BlueSlope());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BlueSlope(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BlueSlope(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BlueDisable(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BlueDisable());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BlueDisable(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BlueDisable(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AlphaOffset(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AlphaOffset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AlphaOffset(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AlphaOffset(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AlphaSlope(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AlphaSlope());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AlphaSlope(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AlphaSlope(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AlphaDisable(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AlphaDisable());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AlphaDisable(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AlphaDisable(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ClampOutput(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ClampOutput());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ClampOutput(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ClampOutput(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source(::IUnknown** source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *source = detach_abi(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            *source = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source(::IUnknown* source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source(*reinterpret_cast<Windows::Graphics::Effects::IGraphicsEffectSource const*>(&source));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Effects::ILuminanceToAlphaEffect> : produce_base<D, Microsoft::Graphics::Canvas::Effects::ILuminanceToAlphaEffect>
{
    HRESULT __stdcall get_Source(::IUnknown** source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *source = detach_abi(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            *source = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source(::IUnknown* source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source(*reinterpret_cast<Windows::Graphics::Effects::IGraphicsEffectSource const*>(&source));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Effects::IMorphologyEffect> : produce_base<D, Microsoft::Graphics::Canvas::Effects::IMorphologyEffect>
{
    HRESULT __stdcall get_Mode(Microsoft::Graphics::Canvas::Effects::MorphologyEffectMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Mode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Mode(Microsoft::Graphics::Canvas::Effects::MorphologyEffectMode value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Mode(*reinterpret_cast<Microsoft::Graphics::Canvas::Effects::MorphologyEffectMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Width(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Width());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Width(int32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Width(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Height(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Height());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Height(int32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Height(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source(::IUnknown** source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *source = detach_abi(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            *source = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source(::IUnknown* source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source(*reinterpret_cast<Windows::Graphics::Effects::IGraphicsEffectSource const*>(&source));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Effects::IOpacityEffect> : produce_base<D, Microsoft::Graphics::Canvas::Effects::IOpacityEffect>
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

    HRESULT __stdcall get_Source(::IUnknown** source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *source = detach_abi(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            *source = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source(::IUnknown* source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source(*reinterpret_cast<Windows::Graphics::Effects::IGraphicsEffectSource const*>(&source));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Effects::IOpacityEffectStatics> : produce_base<D, Microsoft::Graphics::Canvas::Effects::IOpacityEffectStatics>
{
    HRESULT __stdcall get_IsSupported(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Effects::IOpacityMetadataEffect> : produce_base<D, Microsoft::Graphics::Canvas::Effects::IOpacityMetadataEffect>
{
    HRESULT __stdcall get_OpaqueRectangle(Windows::Foundation::Rect* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OpaqueRectangle());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_OpaqueRectangle(Windows::Foundation::Rect value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OpaqueRectangle(*reinterpret_cast<Windows::Foundation::Rect const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source(::IUnknown** source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *source = detach_abi(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            *source = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source(::IUnknown* source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source(*reinterpret_cast<Windows::Graphics::Effects::IGraphicsEffectSource const*>(&source));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Effects::IPixelShaderEffect> : produce_base<D, Microsoft::Graphics::Canvas::Effects::IPixelShaderEffect>
{
    HRESULT __stdcall get_Properties(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Properties());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source1(::IUnknown** source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *source = detach_abi(this->shim().Source1());
            return S_OK;
        }
        catch (...)
        {
            *source = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source2(::IUnknown** source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *source = detach_abi(this->shim().Source2());
            return S_OK;
        }
        catch (...)
        {
            *source = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source3(::IUnknown** source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *source = detach_abi(this->shim().Source3());
            return S_OK;
        }
        catch (...)
        {
            *source = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source4(::IUnknown** source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *source = detach_abi(this->shim().Source4());
            return S_OK;
        }
        catch (...)
        {
            *source = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source5(::IUnknown** source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *source = detach_abi(this->shim().Source5());
            return S_OK;
        }
        catch (...)
        {
            *source = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source6(::IUnknown** source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *source = detach_abi(this->shim().Source6());
            return S_OK;
        }
        catch (...)
        {
            *source = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source7(::IUnknown** source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *source = detach_abi(this->shim().Source7());
            return S_OK;
        }
        catch (...)
        {
            *source = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source8(::IUnknown** source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *source = detach_abi(this->shim().Source8());
            return S_OK;
        }
        catch (...)
        {
            *source = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source1(::IUnknown* source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source1(*reinterpret_cast<Windows::Graphics::Effects::IGraphicsEffectSource const*>(&source));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source2(::IUnknown* source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source2(*reinterpret_cast<Windows::Graphics::Effects::IGraphicsEffectSource const*>(&source));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source3(::IUnknown* source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source3(*reinterpret_cast<Windows::Graphics::Effects::IGraphicsEffectSource const*>(&source));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source4(::IUnknown* source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source4(*reinterpret_cast<Windows::Graphics::Effects::IGraphicsEffectSource const*>(&source));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source5(::IUnknown* source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source5(*reinterpret_cast<Windows::Graphics::Effects::IGraphicsEffectSource const*>(&source));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source6(::IUnknown* source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source6(*reinterpret_cast<Windows::Graphics::Effects::IGraphicsEffectSource const*>(&source));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source7(::IUnknown* source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source7(*reinterpret_cast<Windows::Graphics::Effects::IGraphicsEffectSource const*>(&source));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source8(::IUnknown* source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source8(*reinterpret_cast<Windows::Graphics::Effects::IGraphicsEffectSource const*>(&source));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source1Mapping(Microsoft::Graphics::Canvas::Effects::SamplerCoordinateMapping* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Source1Mapping());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source2Mapping(Microsoft::Graphics::Canvas::Effects::SamplerCoordinateMapping* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Source2Mapping());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source3Mapping(Microsoft::Graphics::Canvas::Effects::SamplerCoordinateMapping* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Source3Mapping());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source4Mapping(Microsoft::Graphics::Canvas::Effects::SamplerCoordinateMapping* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Source4Mapping());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source5Mapping(Microsoft::Graphics::Canvas::Effects::SamplerCoordinateMapping* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Source5Mapping());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source6Mapping(Microsoft::Graphics::Canvas::Effects::SamplerCoordinateMapping* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Source6Mapping());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source7Mapping(Microsoft::Graphics::Canvas::Effects::SamplerCoordinateMapping* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Source7Mapping());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source8Mapping(Microsoft::Graphics::Canvas::Effects::SamplerCoordinateMapping* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Source8Mapping());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source1Mapping(Microsoft::Graphics::Canvas::Effects::SamplerCoordinateMapping value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source1Mapping(*reinterpret_cast<Microsoft::Graphics::Canvas::Effects::SamplerCoordinateMapping const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source2Mapping(Microsoft::Graphics::Canvas::Effects::SamplerCoordinateMapping value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source2Mapping(*reinterpret_cast<Microsoft::Graphics::Canvas::Effects::SamplerCoordinateMapping const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source3Mapping(Microsoft::Graphics::Canvas::Effects::SamplerCoordinateMapping value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source3Mapping(*reinterpret_cast<Microsoft::Graphics::Canvas::Effects::SamplerCoordinateMapping const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source4Mapping(Microsoft::Graphics::Canvas::Effects::SamplerCoordinateMapping value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source4Mapping(*reinterpret_cast<Microsoft::Graphics::Canvas::Effects::SamplerCoordinateMapping const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source5Mapping(Microsoft::Graphics::Canvas::Effects::SamplerCoordinateMapping value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source5Mapping(*reinterpret_cast<Microsoft::Graphics::Canvas::Effects::SamplerCoordinateMapping const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source6Mapping(Microsoft::Graphics::Canvas::Effects::SamplerCoordinateMapping value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source6Mapping(*reinterpret_cast<Microsoft::Graphics::Canvas::Effects::SamplerCoordinateMapping const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source7Mapping(Microsoft::Graphics::Canvas::Effects::SamplerCoordinateMapping value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source7Mapping(*reinterpret_cast<Microsoft::Graphics::Canvas::Effects::SamplerCoordinateMapping const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source8Mapping(Microsoft::Graphics::Canvas::Effects::SamplerCoordinateMapping value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source8Mapping(*reinterpret_cast<Microsoft::Graphics::Canvas::Effects::SamplerCoordinateMapping const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source1BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Source1BorderMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source2BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Source2BorderMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source3BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Source3BorderMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source4BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Source4BorderMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source5BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Source5BorderMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source6BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Source6BorderMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source7BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Source7BorderMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source8BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Source8BorderMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source1BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source1BorderMode(*reinterpret_cast<Microsoft::Graphics::Canvas::Effects::EffectBorderMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source2BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source2BorderMode(*reinterpret_cast<Microsoft::Graphics::Canvas::Effects::EffectBorderMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source3BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source3BorderMode(*reinterpret_cast<Microsoft::Graphics::Canvas::Effects::EffectBorderMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source4BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source4BorderMode(*reinterpret_cast<Microsoft::Graphics::Canvas::Effects::EffectBorderMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source5BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source5BorderMode(*reinterpret_cast<Microsoft::Graphics::Canvas::Effects::EffectBorderMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source6BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source6BorderMode(*reinterpret_cast<Microsoft::Graphics::Canvas::Effects::EffectBorderMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source7BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source7BorderMode(*reinterpret_cast<Microsoft::Graphics::Canvas::Effects::EffectBorderMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source8BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source8BorderMode(*reinterpret_cast<Microsoft::Graphics::Canvas::Effects::EffectBorderMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxSamplerOffset(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaxSamplerOffset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaxSamplerOffset(int32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxSamplerOffset(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source1Interpolation(Microsoft::Graphics::Canvas::CanvasImageInterpolation* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Source1Interpolation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source2Interpolation(Microsoft::Graphics::Canvas::CanvasImageInterpolation* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Source2Interpolation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source3Interpolation(Microsoft::Graphics::Canvas::CanvasImageInterpolation* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Source3Interpolation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source4Interpolation(Microsoft::Graphics::Canvas::CanvasImageInterpolation* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Source4Interpolation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source5Interpolation(Microsoft::Graphics::Canvas::CanvasImageInterpolation* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Source5Interpolation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source6Interpolation(Microsoft::Graphics::Canvas::CanvasImageInterpolation* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Source6Interpolation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source7Interpolation(Microsoft::Graphics::Canvas::CanvasImageInterpolation* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Source7Interpolation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source8Interpolation(Microsoft::Graphics::Canvas::CanvasImageInterpolation* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Source8Interpolation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source1Interpolation(Microsoft::Graphics::Canvas::CanvasImageInterpolation value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source1Interpolation(*reinterpret_cast<Microsoft::Graphics::Canvas::CanvasImageInterpolation const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source2Interpolation(Microsoft::Graphics::Canvas::CanvasImageInterpolation value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source2Interpolation(*reinterpret_cast<Microsoft::Graphics::Canvas::CanvasImageInterpolation const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source3Interpolation(Microsoft::Graphics::Canvas::CanvasImageInterpolation value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source3Interpolation(*reinterpret_cast<Microsoft::Graphics::Canvas::CanvasImageInterpolation const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source4Interpolation(Microsoft::Graphics::Canvas::CanvasImageInterpolation value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source4Interpolation(*reinterpret_cast<Microsoft::Graphics::Canvas::CanvasImageInterpolation const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source5Interpolation(Microsoft::Graphics::Canvas::CanvasImageInterpolation value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source5Interpolation(*reinterpret_cast<Microsoft::Graphics::Canvas::CanvasImageInterpolation const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source6Interpolation(Microsoft::Graphics::Canvas::CanvasImageInterpolation value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source6Interpolation(*reinterpret_cast<Microsoft::Graphics::Canvas::CanvasImageInterpolation const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source7Interpolation(Microsoft::Graphics::Canvas::CanvasImageInterpolation value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source7Interpolation(*reinterpret_cast<Microsoft::Graphics::Canvas::CanvasImageInterpolation const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source8Interpolation(Microsoft::Graphics::Canvas::CanvasImageInterpolation value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source8Interpolation(*reinterpret_cast<Microsoft::Graphics::Canvas::CanvasImageInterpolation const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IsSupported(::IUnknown* device, bool* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().IsSupported(*reinterpret_cast<Microsoft::Graphics::Canvas::CanvasDevice const*>(&device)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Effects::IPixelShaderEffectFactory> : produce_base<D, Microsoft::Graphics::Canvas::Effects::IPixelShaderEffectFactory>
{
    HRESULT __stdcall Create(uint32_t __shaderCodeSize, uint8_t* shaderCode, ::IUnknown** effect) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *effect = detach_abi(this->shim().Create(array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(shaderCode), reinterpret_cast<uint8_t const *>(shaderCode) + __shaderCodeSize)));
            return S_OK;
        }
        catch (...)
        {
            *effect = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Effects::IPointDiffuseEffect> : produce_base<D, Microsoft::Graphics::Canvas::Effects::IPointDiffuseEffect>
{
    HRESULT __stdcall get_LightPosition(Windows::Foundation::Numerics::float3* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LightPosition());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LightPosition(Windows::Foundation::Numerics::float3 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LightPosition(*reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DiffuseAmount(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DiffuseAmount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DiffuseAmount(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DiffuseAmount(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HeightMapScale(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HeightMapScale());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_HeightMapScale(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HeightMapScale(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LightColor(struct_of<4>* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LightColor());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LightColor(struct_of<4> value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LightColor(*reinterpret_cast<Windows::UI::Color const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HeightMapKernelSize(Windows::Foundation::Numerics::float2* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HeightMapKernelSize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_HeightMapKernelSize(Windows::Foundation::Numerics::float2 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HeightMapKernelSize(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HeightMapInterpolationMode(Microsoft::Graphics::Canvas::CanvasImageInterpolation* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HeightMapInterpolationMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_HeightMapInterpolationMode(Microsoft::Graphics::Canvas::CanvasImageInterpolation value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HeightMapInterpolationMode(*reinterpret_cast<Microsoft::Graphics::Canvas::CanvasImageInterpolation const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LightColorHdr(Windows::Foundation::Numerics::float4* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LightColorHdr());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LightColorHdr(Windows::Foundation::Numerics::float4 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LightColorHdr(*reinterpret_cast<Windows::Foundation::Numerics::float4 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source(::IUnknown** source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *source = detach_abi(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            *source = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source(::IUnknown* source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source(*reinterpret_cast<Windows::Graphics::Effects::IGraphicsEffectSource const*>(&source));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Effects::IPointSpecularEffect> : produce_base<D, Microsoft::Graphics::Canvas::Effects::IPointSpecularEffect>
{
    HRESULT __stdcall get_LightPosition(Windows::Foundation::Numerics::float3* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LightPosition());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LightPosition(Windows::Foundation::Numerics::float3 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LightPosition(*reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SpecularExponent(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SpecularExponent());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SpecularExponent(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SpecularExponent(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SpecularAmount(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SpecularAmount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SpecularAmount(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SpecularAmount(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HeightMapScale(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HeightMapScale());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_HeightMapScale(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HeightMapScale(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LightColor(struct_of<4>* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LightColor());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LightColor(struct_of<4> value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LightColor(*reinterpret_cast<Windows::UI::Color const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HeightMapKernelSize(Windows::Foundation::Numerics::float2* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HeightMapKernelSize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_HeightMapKernelSize(Windows::Foundation::Numerics::float2 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HeightMapKernelSize(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HeightMapInterpolationMode(Microsoft::Graphics::Canvas::CanvasImageInterpolation* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HeightMapInterpolationMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_HeightMapInterpolationMode(Microsoft::Graphics::Canvas::CanvasImageInterpolation value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HeightMapInterpolationMode(*reinterpret_cast<Microsoft::Graphics::Canvas::CanvasImageInterpolation const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LightColorHdr(Windows::Foundation::Numerics::float4* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LightColorHdr());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LightColorHdr(Windows::Foundation::Numerics::float4 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LightColorHdr(*reinterpret_cast<Windows::Foundation::Numerics::float4 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source(::IUnknown** source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *source = detach_abi(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            *source = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source(::IUnknown* source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source(*reinterpret_cast<Windows::Graphics::Effects::IGraphicsEffectSource const*>(&source));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Effects::IPosterizeEffect> : produce_base<D, Microsoft::Graphics::Canvas::Effects::IPosterizeEffect>
{
    HRESULT __stdcall get_RedValueCount(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RedValueCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RedValueCount(int32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RedValueCount(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_GreenValueCount(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GreenValueCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_GreenValueCount(int32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GreenValueCount(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BlueValueCount(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BlueValueCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BlueValueCount(int32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BlueValueCount(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source(::IUnknown** source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *source = detach_abi(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            *source = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source(::IUnknown* source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source(*reinterpret_cast<Windows::Graphics::Effects::IGraphicsEffectSource const*>(&source));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Effects::IPremultiplyEffect> : produce_base<D, Microsoft::Graphics::Canvas::Effects::IPremultiplyEffect>
{
    HRESULT __stdcall get_Source(::IUnknown** source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *source = detach_abi(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            *source = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source(::IUnknown* source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source(*reinterpret_cast<Windows::Graphics::Effects::IGraphicsEffectSource const*>(&source));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Effects::IRgbToHueEffect> : produce_base<D, Microsoft::Graphics::Canvas::Effects::IRgbToHueEffect>
{
    HRESULT __stdcall get_OutputColorSpace(Microsoft::Graphics::Canvas::Effects::EffectHueColorSpace* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OutputColorSpace());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_OutputColorSpace(Microsoft::Graphics::Canvas::Effects::EffectHueColorSpace value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OutputColorSpace(*reinterpret_cast<Microsoft::Graphics::Canvas::Effects::EffectHueColorSpace const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source(::IUnknown** source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *source = detach_abi(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            *source = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source(::IUnknown* source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source(*reinterpret_cast<Windows::Graphics::Effects::IGraphicsEffectSource const*>(&source));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Effects::ISaturationEffect> : produce_base<D, Microsoft::Graphics::Canvas::Effects::ISaturationEffect>
{
    HRESULT __stdcall get_Saturation(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Saturation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Saturation(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Saturation(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source(::IUnknown** source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *source = detach_abi(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            *source = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source(::IUnknown* source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source(*reinterpret_cast<Windows::Graphics::Effects::IGraphicsEffectSource const*>(&source));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Effects::IScaleEffect> : produce_base<D, Microsoft::Graphics::Canvas::Effects::IScaleEffect>
{
    HRESULT __stdcall get_Scale(Windows::Foundation::Numerics::float2* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Scale());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Scale(Windows::Foundation::Numerics::float2 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Scale(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CenterPoint(Windows::Foundation::Numerics::float2* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CenterPoint());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CenterPoint(Windows::Foundation::Numerics::float2 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CenterPoint(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InterpolationMode(Microsoft::Graphics::Canvas::CanvasImageInterpolation* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InterpolationMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_InterpolationMode(Microsoft::Graphics::Canvas::CanvasImageInterpolation value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InterpolationMode(*reinterpret_cast<Microsoft::Graphics::Canvas::CanvasImageInterpolation const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BorderMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BorderMode(*reinterpret_cast<Microsoft::Graphics::Canvas::Effects::EffectBorderMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Sharpness(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Sharpness());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Sharpness(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Sharpness(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source(::IUnknown** source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *source = detach_abi(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            *source = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source(::IUnknown* source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source(*reinterpret_cast<Windows::Graphics::Effects::IGraphicsEffectSource const*>(&source));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Effects::ISepiaEffect> : produce_base<D, Microsoft::Graphics::Canvas::Effects::ISepiaEffect>
{
    HRESULT __stdcall get_Intensity(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Intensity());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Intensity(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Intensity(value);
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

    HRESULT __stdcall put_AlphaMode(Microsoft::Graphics::Canvas::CanvasAlphaMode value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AlphaMode(*reinterpret_cast<Microsoft::Graphics::Canvas::CanvasAlphaMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source(::IUnknown** source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *source = detach_abi(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            *source = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source(::IUnknown* source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source(*reinterpret_cast<Windows::Graphics::Effects::IGraphicsEffectSource const*>(&source));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Effects::IShadowEffect> : produce_base<D, Microsoft::Graphics::Canvas::Effects::IShadowEffect>
{
    HRESULT __stdcall get_BlurAmount(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BlurAmount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BlurAmount(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BlurAmount(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ShadowColor(struct_of<4>* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ShadowColor());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ShadowColor(struct_of<4> value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShadowColor(*reinterpret_cast<Windows::UI::Color const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Optimization(Microsoft::Graphics::Canvas::Effects::EffectOptimization* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Optimization());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Optimization(Microsoft::Graphics::Canvas::Effects::EffectOptimization value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Optimization(*reinterpret_cast<Microsoft::Graphics::Canvas::Effects::EffectOptimization const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ShadowColorHdr(Windows::Foundation::Numerics::float4* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ShadowColorHdr());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ShadowColorHdr(Windows::Foundation::Numerics::float4 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShadowColorHdr(*reinterpret_cast<Windows::Foundation::Numerics::float4 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source(::IUnknown** source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *source = detach_abi(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            *source = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source(::IUnknown* source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source(*reinterpret_cast<Windows::Graphics::Effects::IGraphicsEffectSource const*>(&source));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Effects::ISharpenEffect> : produce_base<D, Microsoft::Graphics::Canvas::Effects::ISharpenEffect>
{
    HRESULT __stdcall get_Amount(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Amount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Amount(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Amount(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Threshold(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Threshold());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Threshold(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Threshold(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source(::IUnknown** source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *source = detach_abi(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            *source = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source(::IUnknown* source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source(*reinterpret_cast<Windows::Graphics::Effects::IGraphicsEffectSource const*>(&source));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Effects::ISpotDiffuseEffect> : produce_base<D, Microsoft::Graphics::Canvas::Effects::ISpotDiffuseEffect>
{
    HRESULT __stdcall get_LightPosition(Windows::Foundation::Numerics::float3* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LightPosition());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LightPosition(Windows::Foundation::Numerics::float3 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LightPosition(*reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LightTarget(Windows::Foundation::Numerics::float3* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LightTarget());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LightTarget(Windows::Foundation::Numerics::float3 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LightTarget(*reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Focus(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Focus());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Focus(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Focus(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LimitingConeAngle(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LimitingConeAngle());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LimitingConeAngle(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LimitingConeAngle(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DiffuseAmount(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DiffuseAmount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DiffuseAmount(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DiffuseAmount(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HeightMapScale(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HeightMapScale());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_HeightMapScale(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HeightMapScale(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LightColor(struct_of<4>* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LightColor());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LightColor(struct_of<4> value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LightColor(*reinterpret_cast<Windows::UI::Color const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HeightMapKernelSize(Windows::Foundation::Numerics::float2* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HeightMapKernelSize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_HeightMapKernelSize(Windows::Foundation::Numerics::float2 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HeightMapKernelSize(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HeightMapInterpolationMode(Microsoft::Graphics::Canvas::CanvasImageInterpolation* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HeightMapInterpolationMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_HeightMapInterpolationMode(Microsoft::Graphics::Canvas::CanvasImageInterpolation value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HeightMapInterpolationMode(*reinterpret_cast<Microsoft::Graphics::Canvas::CanvasImageInterpolation const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LightColorHdr(Windows::Foundation::Numerics::float4* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LightColorHdr());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LightColorHdr(Windows::Foundation::Numerics::float4 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LightColorHdr(*reinterpret_cast<Windows::Foundation::Numerics::float4 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source(::IUnknown** source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *source = detach_abi(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            *source = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source(::IUnknown* source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source(*reinterpret_cast<Windows::Graphics::Effects::IGraphicsEffectSource const*>(&source));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Effects::ISpotSpecularEffect> : produce_base<D, Microsoft::Graphics::Canvas::Effects::ISpotSpecularEffect>
{
    HRESULT __stdcall get_LightPosition(Windows::Foundation::Numerics::float3* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LightPosition());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LightPosition(Windows::Foundation::Numerics::float3 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LightPosition(*reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LightTarget(Windows::Foundation::Numerics::float3* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LightTarget());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LightTarget(Windows::Foundation::Numerics::float3 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LightTarget(*reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Focus(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Focus());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Focus(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Focus(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LimitingConeAngle(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LimitingConeAngle());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LimitingConeAngle(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LimitingConeAngle(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SpecularExponent(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SpecularExponent());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SpecularExponent(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SpecularExponent(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SpecularAmount(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SpecularAmount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SpecularAmount(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SpecularAmount(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HeightMapScale(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HeightMapScale());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_HeightMapScale(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HeightMapScale(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LightColor(struct_of<4>* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LightColor());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LightColor(struct_of<4> value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LightColor(*reinterpret_cast<Windows::UI::Color const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HeightMapKernelSize(Windows::Foundation::Numerics::float2* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HeightMapKernelSize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_HeightMapKernelSize(Windows::Foundation::Numerics::float2 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HeightMapKernelSize(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HeightMapInterpolationMode(Microsoft::Graphics::Canvas::CanvasImageInterpolation* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HeightMapInterpolationMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_HeightMapInterpolationMode(Microsoft::Graphics::Canvas::CanvasImageInterpolation value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HeightMapInterpolationMode(*reinterpret_cast<Microsoft::Graphics::Canvas::CanvasImageInterpolation const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LightColorHdr(Windows::Foundation::Numerics::float4* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LightColorHdr());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LightColorHdr(Windows::Foundation::Numerics::float4 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LightColorHdr(*reinterpret_cast<Windows::Foundation::Numerics::float4 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source(::IUnknown** source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *source = detach_abi(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            *source = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source(::IUnknown* source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source(*reinterpret_cast<Windows::Graphics::Effects::IGraphicsEffectSource const*>(&source));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Effects::IStraightenEffect> : produce_base<D, Microsoft::Graphics::Canvas::Effects::IStraightenEffect>
{
    HRESULT __stdcall get_Angle(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Angle());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Angle(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Angle(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaintainSize(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaintainSize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaintainSize(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaintainSize(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InterpolationMode(Microsoft::Graphics::Canvas::CanvasImageInterpolation* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InterpolationMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_InterpolationMode(Microsoft::Graphics::Canvas::CanvasImageInterpolation value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InterpolationMode(*reinterpret_cast<Microsoft::Graphics::Canvas::CanvasImageInterpolation const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source(::IUnknown** source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *source = detach_abi(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            *source = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source(::IUnknown* source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source(*reinterpret_cast<Windows::Graphics::Effects::IGraphicsEffectSource const*>(&source));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Effects::ITableTransfer3DEffect> : produce_base<D, Microsoft::Graphics::Canvas::Effects::ITableTransfer3DEffect>
{
    HRESULT __stdcall get_Table(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Table());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Table(::IUnknown* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Table(*reinterpret_cast<Microsoft::Graphics::Canvas::Effects::EffectTransferTable3D const*>(&value));
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

    HRESULT __stdcall put_AlphaMode(Microsoft::Graphics::Canvas::CanvasAlphaMode value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AlphaMode(*reinterpret_cast<Microsoft::Graphics::Canvas::CanvasAlphaMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source(::IUnknown** source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *source = detach_abi(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            *source = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source(::IUnknown* source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source(*reinterpret_cast<Windows::Graphics::Effects::IGraphicsEffectSource const*>(&source));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Effects::ITableTransferEffect> : produce_base<D, Microsoft::Graphics::Canvas::Effects::ITableTransferEffect>
{
    HRESULT __stdcall get_RedTable(uint32_t* __valueElementsSize, float** valueElements) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            std::tie(*__valueElementsSize, *valueElements) = detach_abi(this->shim().RedTable());
            return S_OK;
        }
        catch (...)
        {
            *__valueElementsSize = 0;
            *valueElements = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RedTable(uint32_t __valueElementsSize, float* valueElements) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RedTable(array_view<float const>(reinterpret_cast<float const *>(valueElements), reinterpret_cast<float const *>(valueElements) + __valueElementsSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RedDisable(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RedDisable());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RedDisable(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RedDisable(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_GreenTable(uint32_t* __valueElementsSize, float** valueElements) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            std::tie(*__valueElementsSize, *valueElements) = detach_abi(this->shim().GreenTable());
            return S_OK;
        }
        catch (...)
        {
            *__valueElementsSize = 0;
            *valueElements = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_GreenTable(uint32_t __valueElementsSize, float* valueElements) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GreenTable(array_view<float const>(reinterpret_cast<float const *>(valueElements), reinterpret_cast<float const *>(valueElements) + __valueElementsSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_GreenDisable(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GreenDisable());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_GreenDisable(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GreenDisable(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BlueTable(uint32_t* __valueElementsSize, float** valueElements) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            std::tie(*__valueElementsSize, *valueElements) = detach_abi(this->shim().BlueTable());
            return S_OK;
        }
        catch (...)
        {
            *__valueElementsSize = 0;
            *valueElements = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BlueTable(uint32_t __valueElementsSize, float* valueElements) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BlueTable(array_view<float const>(reinterpret_cast<float const *>(valueElements), reinterpret_cast<float const *>(valueElements) + __valueElementsSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BlueDisable(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BlueDisable());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BlueDisable(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BlueDisable(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AlphaTable(uint32_t* __valueElementsSize, float** valueElements) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            std::tie(*__valueElementsSize, *valueElements) = detach_abi(this->shim().AlphaTable());
            return S_OK;
        }
        catch (...)
        {
            *__valueElementsSize = 0;
            *valueElements = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AlphaTable(uint32_t __valueElementsSize, float* valueElements) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AlphaTable(array_view<float const>(reinterpret_cast<float const *>(valueElements), reinterpret_cast<float const *>(valueElements) + __valueElementsSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AlphaDisable(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AlphaDisable());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AlphaDisable(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AlphaDisable(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ClampOutput(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ClampOutput());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ClampOutput(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ClampOutput(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source(::IUnknown** source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *source = detach_abi(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            *source = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source(::IUnknown* source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source(*reinterpret_cast<Windows::Graphics::Effects::IGraphicsEffectSource const*>(&source));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Effects::ITemperatureAndTintEffect> : produce_base<D, Microsoft::Graphics::Canvas::Effects::ITemperatureAndTintEffect>
{
    HRESULT __stdcall get_Temperature(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Temperature());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Temperature(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Temperature(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Tint(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Tint());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Tint(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Tint(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source(::IUnknown** source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *source = detach_abi(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            *source = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source(::IUnknown* source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source(*reinterpret_cast<Windows::Graphics::Effects::IGraphicsEffectSource const*>(&source));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Effects::ITileEffect> : produce_base<D, Microsoft::Graphics::Canvas::Effects::ITileEffect>
{
    HRESULT __stdcall get_SourceRectangle(Windows::Foundation::Rect* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SourceRectangle());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SourceRectangle(Windows::Foundation::Rect value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SourceRectangle(*reinterpret_cast<Windows::Foundation::Rect const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source(::IUnknown** source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *source = detach_abi(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            *source = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source(::IUnknown* source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source(*reinterpret_cast<Windows::Graphics::Effects::IGraphicsEffectSource const*>(&source));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Effects::ITintEffect> : produce_base<D, Microsoft::Graphics::Canvas::Effects::ITintEffect>
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

    HRESULT __stdcall get_ClampOutput(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ClampOutput());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ClampOutput(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ClampOutput(value);
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

    HRESULT __stdcall get_Source(::IUnknown** source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *source = detach_abi(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            *source = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source(::IUnknown* source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source(*reinterpret_cast<Windows::Graphics::Effects::IGraphicsEffectSource const*>(&source));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Effects::ITintEffectStatics> : produce_base<D, Microsoft::Graphics::Canvas::Effects::ITintEffectStatics>
{
    HRESULT __stdcall get_IsSupported(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Effects::ITransform2DEffect> : produce_base<D, Microsoft::Graphics::Canvas::Effects::ITransform2DEffect>
{
    HRESULT __stdcall get_InterpolationMode(Microsoft::Graphics::Canvas::CanvasImageInterpolation* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InterpolationMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_InterpolationMode(Microsoft::Graphics::Canvas::CanvasImageInterpolation value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InterpolationMode(*reinterpret_cast<Microsoft::Graphics::Canvas::CanvasImageInterpolation const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BorderMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BorderMode(*reinterpret_cast<Microsoft::Graphics::Canvas::Effects::EffectBorderMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TransformMatrix(Windows::Foundation::Numerics::float3x2* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TransformMatrix());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TransformMatrix(Windows::Foundation::Numerics::float3x2 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TransformMatrix(*reinterpret_cast<Windows::Foundation::Numerics::float3x2 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Sharpness(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Sharpness());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Sharpness(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Sharpness(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source(::IUnknown** source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *source = detach_abi(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            *source = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source(::IUnknown* source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source(*reinterpret_cast<Windows::Graphics::Effects::IGraphicsEffectSource const*>(&source));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Effects::ITransform3DEffect> : produce_base<D, Microsoft::Graphics::Canvas::Effects::ITransform3DEffect>
{
    HRESULT __stdcall get_InterpolationMode(Microsoft::Graphics::Canvas::CanvasImageInterpolation* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InterpolationMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_InterpolationMode(Microsoft::Graphics::Canvas::CanvasImageInterpolation value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InterpolationMode(*reinterpret_cast<Microsoft::Graphics::Canvas::CanvasImageInterpolation const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BorderMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BorderMode(*reinterpret_cast<Microsoft::Graphics::Canvas::Effects::EffectBorderMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TransformMatrix(Windows::Foundation::Numerics::float4x4* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TransformMatrix());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TransformMatrix(Windows::Foundation::Numerics::float4x4 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TransformMatrix(*reinterpret_cast<Windows::Foundation::Numerics::float4x4 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source(::IUnknown** source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *source = detach_abi(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            *source = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source(::IUnknown* source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source(*reinterpret_cast<Windows::Graphics::Effects::IGraphicsEffectSource const*>(&source));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Effects::ITurbulenceEffect> : produce_base<D, Microsoft::Graphics::Canvas::Effects::ITurbulenceEffect>
{
    HRESULT __stdcall get_Offset(Windows::Foundation::Numerics::float2* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Offset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Offset(Windows::Foundation::Numerics::float2 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Offset(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Size(Windows::Foundation::Numerics::float2* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Size());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Size(Windows::Foundation::Numerics::float2 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Size(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Frequency(Windows::Foundation::Numerics::float2* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Frequency());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Frequency(Windows::Foundation::Numerics::float2 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Frequency(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Octaves(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Octaves());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Octaves(int32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Octaves(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Seed(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Seed());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Seed(int32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Seed(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Noise(Microsoft::Graphics::Canvas::Effects::TurbulenceEffectNoise* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Noise());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Noise(Microsoft::Graphics::Canvas::Effects::TurbulenceEffectNoise value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Noise(*reinterpret_cast<Microsoft::Graphics::Canvas::Effects::TurbulenceEffectNoise const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Tileable(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Tileable());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Tileable(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Tileable(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Effects::IUnPremultiplyEffect> : produce_base<D, Microsoft::Graphics::Canvas::Effects::IUnPremultiplyEffect>
{
    HRESULT __stdcall get_Source(::IUnknown** source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *source = detach_abi(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            *source = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source(::IUnknown* source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source(*reinterpret_cast<Windows::Graphics::Effects::IGraphicsEffectSource const*>(&source));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Effects::IVignetteEffect> : produce_base<D, Microsoft::Graphics::Canvas::Effects::IVignetteEffect>
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

    HRESULT __stdcall get_Amount(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Amount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Amount(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Amount(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Curve(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Curve());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Curve(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Curve(value);
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

    HRESULT __stdcall get_Source(::IUnknown** source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *source = detach_abi(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            *source = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source(::IUnknown* source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source(*reinterpret_cast<Windows::Graphics::Effects::IGraphicsEffectSource const*>(&source));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Microsoft::Graphics::Canvas::Effects {

inline AlphaMaskEffect::AlphaMaskEffect() :
    AlphaMaskEffect(activate_instance<AlphaMaskEffect>())
{}

inline bool AlphaMaskEffect::IsSupported()
{
    return get_activation_factory<AlphaMaskEffect, Microsoft::Graphics::Canvas::Effects::IAlphaMaskEffectStatics>().IsSupported();
}

inline ArithmeticCompositeEffect::ArithmeticCompositeEffect() :
    ArithmeticCompositeEffect(activate_instance<ArithmeticCompositeEffect>())
{}

inline AtlasEffect::AtlasEffect() :
    AtlasEffect(activate_instance<AtlasEffect>())
{}

inline BlendEffect::BlendEffect() :
    BlendEffect(activate_instance<BlendEffect>())
{}

inline BorderEffect::BorderEffect() :
    BorderEffect(activate_instance<BorderEffect>())
{}

inline BrightnessEffect::BrightnessEffect() :
    BrightnessEffect(activate_instance<BrightnessEffect>())
{}

inline ChromaKeyEffect::ChromaKeyEffect() :
    ChromaKeyEffect(activate_instance<ChromaKeyEffect>())
{}

inline ColorManagementEffect::ColorManagementEffect() :
    ColorManagementEffect(activate_instance<ColorManagementEffect>())
{}

inline bool ColorManagementEffect::IsBestQualitySupported(Microsoft::Graphics::Canvas::CanvasDevice const& device)
{
    return get_activation_factory<ColorManagementEffect, Microsoft::Graphics::Canvas::Effects::IColorManagementEffectStatics>().IsBestQualitySupported(device);
}

inline ColorManagementProfile::ColorManagementProfile(Microsoft::Graphics::Canvas::CanvasColorSpace const& colorSpace) :
    ColorManagementProfile(get_activation_factory<ColorManagementProfile, Microsoft::Graphics::Canvas::Effects::IColorManagementProfileFactory>().Create(colorSpace))
{}

inline Microsoft::Graphics::Canvas::Effects::ColorManagementProfile ColorManagementProfile::CreateCustom(array_view<uint8_t const> iccProfile)
{
    return get_activation_factory<ColorManagementProfile, Microsoft::Graphics::Canvas::Effects::IColorManagementProfileStatics>().CreateCustom(iccProfile);
}

inline Microsoft::Graphics::Canvas::Effects::ColorManagementProfile ColorManagementProfile::CreateSimple(Microsoft::Graphics::Canvas::Effects::ColorManagementSimpleProfile const& simpleProfile)
{
    return get_activation_factory<ColorManagementProfile, Microsoft::Graphics::Canvas::Effects::IColorManagementProfileStatics>().CreateSimple(simpleProfile);
}

inline Microsoft::Graphics::Canvas::Effects::ColorManagementProfile ColorManagementProfile::CreateExtended(Microsoft::Graphics::Canvas::Effects::ExtendedColorSpace const& colorSpace)
{
    return get_activation_factory<ColorManagementProfile, Microsoft::Graphics::Canvas::Effects::IColorManagementProfileStatics>().CreateExtended(colorSpace);
}

inline bool ColorManagementProfile::IsSupported(Microsoft::Graphics::Canvas::Effects::ColorManagementProfileType const& type, Microsoft::Graphics::Canvas::CanvasDevice const& device)
{
    return get_activation_factory<ColorManagementProfile, Microsoft::Graphics::Canvas::Effects::IColorManagementProfileStatics>().IsSupported(type, device);
}

inline ColorMatrixEffect::ColorMatrixEffect() :
    ColorMatrixEffect(activate_instance<ColorMatrixEffect>())
{}

inline ColorSourceEffect::ColorSourceEffect() :
    ColorSourceEffect(activate_instance<ColorSourceEffect>())
{}

inline CompositeEffect::CompositeEffect() :
    CompositeEffect(activate_instance<CompositeEffect>())
{}

inline ContrastEffect::ContrastEffect() :
    ContrastEffect(activate_instance<ContrastEffect>())
{}

inline ConvolveMatrixEffect::ConvolveMatrixEffect() :
    ConvolveMatrixEffect(activate_instance<ConvolveMatrixEffect>())
{}

inline CropEffect::CropEffect() :
    CropEffect(activate_instance<CropEffect>())
{}

inline CrossFadeEffect::CrossFadeEffect() :
    CrossFadeEffect(activate_instance<CrossFadeEffect>())
{}

inline bool CrossFadeEffect::IsSupported()
{
    return get_activation_factory<CrossFadeEffect, Microsoft::Graphics::Canvas::Effects::ICrossFadeEffectStatics>().IsSupported();
}

inline DirectionalBlurEffect::DirectionalBlurEffect() :
    DirectionalBlurEffect(activate_instance<DirectionalBlurEffect>())
{}

inline DiscreteTransferEffect::DiscreteTransferEffect() :
    DiscreteTransferEffect(activate_instance<DiscreteTransferEffect>())
{}

inline DisplacementMapEffect::DisplacementMapEffect() :
    DisplacementMapEffect(activate_instance<DisplacementMapEffect>())
{}

inline DistantDiffuseEffect::DistantDiffuseEffect() :
    DistantDiffuseEffect(activate_instance<DistantDiffuseEffect>())
{}

inline DistantSpecularEffect::DistantSpecularEffect() :
    DistantSpecularEffect(activate_instance<DistantSpecularEffect>())
{}

inline DpiCompensationEffect::DpiCompensationEffect() :
    DpiCompensationEffect(activate_instance<DpiCompensationEffect>())
{}

inline EdgeDetectionEffect::EdgeDetectionEffect() :
    EdgeDetectionEffect(activate_instance<EdgeDetectionEffect>())
{}

inline Microsoft::Graphics::Canvas::Effects::EffectTransferTable3D EffectTransferTable3D::CreateFromColors(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<Windows::UI::Color const> colors, int32_t sizeB, int32_t sizeG, int32_t sizeR)
{
    return get_activation_factory<EffectTransferTable3D, Microsoft::Graphics::Canvas::Effects::IEffectTransferTable3DStatics>().CreateFromColors(resourceCreator, colors, sizeB, sizeG, sizeR);
}

inline Microsoft::Graphics::Canvas::Effects::EffectTransferTable3D EffectTransferTable3D::CreateFromBytes(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<uint8_t const> bytes, int32_t sizeB, int32_t sizeG, int32_t sizeR, Windows::Graphics::DirectX::DirectXPixelFormat const& format)
{
    return get_activation_factory<EffectTransferTable3D, Microsoft::Graphics::Canvas::Effects::IEffectTransferTable3DStatics>().CreateFromBytes(resourceCreator, bytes, sizeB, sizeG, sizeR, format);
}

inline EmbossEffect::EmbossEffect() :
    EmbossEffect(activate_instance<EmbossEffect>())
{}

inline ExposureEffect::ExposureEffect() :
    ExposureEffect(activate_instance<ExposureEffect>())
{}

inline GammaTransferEffect::GammaTransferEffect() :
    GammaTransferEffect(activate_instance<GammaTransferEffect>())
{}

inline GaussianBlurEffect::GaussianBlurEffect() :
    GaussianBlurEffect(activate_instance<GaussianBlurEffect>())
{}

inline GrayscaleEffect::GrayscaleEffect() :
    GrayscaleEffect(activate_instance<GrayscaleEffect>())
{}

inline HighlightsAndShadowsEffect::HighlightsAndShadowsEffect() :
    HighlightsAndShadowsEffect(activate_instance<HighlightsAndShadowsEffect>())
{}

inline HueRotationEffect::HueRotationEffect() :
    HueRotationEffect(activate_instance<HueRotationEffect>())
{}

inline HueToRgbEffect::HueToRgbEffect() :
    HueToRgbEffect(activate_instance<HueToRgbEffect>())
{}

inline InvertEffect::InvertEffect() :
    InvertEffect(activate_instance<InvertEffect>())
{}

inline LinearTransferEffect::LinearTransferEffect() :
    LinearTransferEffect(activate_instance<LinearTransferEffect>())
{}

inline LuminanceToAlphaEffect::LuminanceToAlphaEffect() :
    LuminanceToAlphaEffect(activate_instance<LuminanceToAlphaEffect>())
{}

inline MorphologyEffect::MorphologyEffect() :
    MorphologyEffect(activate_instance<MorphologyEffect>())
{}

inline OpacityEffect::OpacityEffect() :
    OpacityEffect(activate_instance<OpacityEffect>())
{}

inline bool OpacityEffect::IsSupported()
{
    return get_activation_factory<OpacityEffect, Microsoft::Graphics::Canvas::Effects::IOpacityEffectStatics>().IsSupported();
}

inline OpacityMetadataEffect::OpacityMetadataEffect() :
    OpacityMetadataEffect(activate_instance<OpacityMetadataEffect>())
{}

inline PixelShaderEffect::PixelShaderEffect(array_view<uint8_t const> shaderCode) :
    PixelShaderEffect(get_activation_factory<PixelShaderEffect, Microsoft::Graphics::Canvas::Effects::IPixelShaderEffectFactory>().Create(shaderCode))
{}

inline PointDiffuseEffect::PointDiffuseEffect() :
    PointDiffuseEffect(activate_instance<PointDiffuseEffect>())
{}

inline PointSpecularEffect::PointSpecularEffect() :
    PointSpecularEffect(activate_instance<PointSpecularEffect>())
{}

inline PosterizeEffect::PosterizeEffect() :
    PosterizeEffect(activate_instance<PosterizeEffect>())
{}

inline PremultiplyEffect::PremultiplyEffect() :
    PremultiplyEffect(activate_instance<PremultiplyEffect>())
{}

inline RgbToHueEffect::RgbToHueEffect() :
    RgbToHueEffect(activate_instance<RgbToHueEffect>())
{}

inline SaturationEffect::SaturationEffect() :
    SaturationEffect(activate_instance<SaturationEffect>())
{}

inline ScaleEffect::ScaleEffect() :
    ScaleEffect(activate_instance<ScaleEffect>())
{}

inline SepiaEffect::SepiaEffect() :
    SepiaEffect(activate_instance<SepiaEffect>())
{}

inline ShadowEffect::ShadowEffect() :
    ShadowEffect(activate_instance<ShadowEffect>())
{}

inline SharpenEffect::SharpenEffect() :
    SharpenEffect(activate_instance<SharpenEffect>())
{}

inline SpotDiffuseEffect::SpotDiffuseEffect() :
    SpotDiffuseEffect(activate_instance<SpotDiffuseEffect>())
{}

inline SpotSpecularEffect::SpotSpecularEffect() :
    SpotSpecularEffect(activate_instance<SpotSpecularEffect>())
{}

inline StraightenEffect::StraightenEffect() :
    StraightenEffect(activate_instance<StraightenEffect>())
{}

inline TableTransfer3DEffect::TableTransfer3DEffect() :
    TableTransfer3DEffect(activate_instance<TableTransfer3DEffect>())
{}

inline TableTransferEffect::TableTransferEffect() :
    TableTransferEffect(activate_instance<TableTransferEffect>())
{}

inline TemperatureAndTintEffect::TemperatureAndTintEffect() :
    TemperatureAndTintEffect(activate_instance<TemperatureAndTintEffect>())
{}

inline TileEffect::TileEffect() :
    TileEffect(activate_instance<TileEffect>())
{}

inline TintEffect::TintEffect() :
    TintEffect(activate_instance<TintEffect>())
{}

inline bool TintEffect::IsSupported()
{
    return get_activation_factory<TintEffect, Microsoft::Graphics::Canvas::Effects::ITintEffectStatics>().IsSupported();
}

inline Transform2DEffect::Transform2DEffect() :
    Transform2DEffect(activate_instance<Transform2DEffect>())
{}

inline Transform3DEffect::Transform3DEffect() :
    Transform3DEffect(activate_instance<Transform3DEffect>())
{}

inline TurbulenceEffect::TurbulenceEffect() :
    TurbulenceEffect(activate_instance<TurbulenceEffect>())
{}

inline UnPremultiplyEffect::UnPremultiplyEffect() :
    UnPremultiplyEffect(activate_instance<UnPremultiplyEffect>())
{}

inline VignetteEffect::VignetteEffect() :
    VignetteEffect(activate_instance<VignetteEffect>())
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::IAlphaMaskEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::IAlphaMaskEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::IAlphaMaskEffectStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::IAlphaMaskEffectStatics> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::IArithmeticCompositeEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::IArithmeticCompositeEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::IAtlasEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::IAtlasEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::IBlendEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::IBlendEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::IBorderEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::IBorderEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::IBrightnessEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::IBrightnessEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::ICanvasEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::ICanvasEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::IChromaKeyEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::IChromaKeyEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::IColorManagementEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::IColorManagementEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::IColorManagementEffectStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::IColorManagementEffectStatics> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::IColorManagementProfile> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::IColorManagementProfile> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::IColorManagementProfileFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::IColorManagementProfileFactory> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::IColorManagementProfileStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::IColorManagementProfileStatics> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::IColorMatrixEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::IColorMatrixEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::IColorSourceEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::IColorSourceEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::ICompositeEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::ICompositeEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::IContrastEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::IContrastEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::IConvolveMatrixEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::IConvolveMatrixEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::ICropEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::ICropEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::ICrossFadeEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::ICrossFadeEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::ICrossFadeEffectStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::ICrossFadeEffectStatics> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::IDirectionalBlurEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::IDirectionalBlurEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::IDiscreteTransferEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::IDiscreteTransferEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::IDisplacementMapEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::IDisplacementMapEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::IDistantDiffuseEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::IDistantDiffuseEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::IDistantSpecularEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::IDistantSpecularEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::IDpiCompensationEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::IDpiCompensationEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::IEdgeDetectionEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::IEdgeDetectionEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::IEffectTransferTable3D> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::IEffectTransferTable3D> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::IEffectTransferTable3DStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::IEffectTransferTable3DStatics> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::IEmbossEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::IEmbossEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::IExposureEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::IExposureEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::IGammaTransferEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::IGammaTransferEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::IGaussianBlurEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::IGaussianBlurEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::IGrayscaleEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::IGrayscaleEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::IHighlightsAndShadowsEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::IHighlightsAndShadowsEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::IHueRotationEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::IHueRotationEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::IHueToRgbEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::IHueToRgbEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::IInvertEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::IInvertEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::ILinearTransferEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::ILinearTransferEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::ILuminanceToAlphaEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::ILuminanceToAlphaEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::IMorphologyEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::IMorphologyEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::IOpacityEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::IOpacityEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::IOpacityEffectStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::IOpacityEffectStatics> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::IOpacityMetadataEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::IOpacityMetadataEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::IPixelShaderEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::IPixelShaderEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::IPixelShaderEffectFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::IPixelShaderEffectFactory> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::IPointDiffuseEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::IPointDiffuseEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::IPointSpecularEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::IPointSpecularEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::IPosterizeEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::IPosterizeEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::IPremultiplyEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::IPremultiplyEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::IRgbToHueEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::IRgbToHueEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::ISaturationEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::ISaturationEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::IScaleEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::IScaleEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::ISepiaEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::ISepiaEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::IShadowEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::IShadowEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::ISharpenEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::ISharpenEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::ISpotDiffuseEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::ISpotDiffuseEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::ISpotSpecularEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::ISpotSpecularEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::IStraightenEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::IStraightenEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::ITableTransfer3DEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::ITableTransfer3DEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::ITableTransferEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::ITableTransferEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::ITemperatureAndTintEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::ITemperatureAndTintEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::ITileEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::ITileEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::ITintEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::ITintEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::ITintEffectStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::ITintEffectStatics> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::ITransform2DEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::ITransform2DEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::ITransform3DEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::ITransform3DEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::ITurbulenceEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::ITurbulenceEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::IUnPremultiplyEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::IUnPremultiplyEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::IVignetteEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::IVignetteEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::AlphaMaskEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::AlphaMaskEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::ArithmeticCompositeEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::ArithmeticCompositeEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::AtlasEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::AtlasEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::BlendEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::BlendEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::BorderEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::BorderEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::BrightnessEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::BrightnessEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::ChromaKeyEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::ChromaKeyEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::ColorManagementEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::ColorManagementEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::ColorManagementProfile> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::ColorManagementProfile> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::ColorMatrixEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::ColorMatrixEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::ColorSourceEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::ColorSourceEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::CompositeEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::CompositeEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::ContrastEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::ContrastEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::ConvolveMatrixEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::ConvolveMatrixEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::CropEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::CropEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::CrossFadeEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::CrossFadeEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::DirectionalBlurEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::DirectionalBlurEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::DiscreteTransferEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::DiscreteTransferEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::DisplacementMapEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::DisplacementMapEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::DistantDiffuseEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::DistantDiffuseEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::DistantSpecularEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::DistantSpecularEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::DpiCompensationEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::DpiCompensationEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::EdgeDetectionEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::EdgeDetectionEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::EffectTransferTable3D> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::EffectTransferTable3D> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::EmbossEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::EmbossEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::ExposureEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::ExposureEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::GammaTransferEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::GammaTransferEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::GaussianBlurEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::GaussianBlurEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::GrayscaleEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::GrayscaleEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::HighlightsAndShadowsEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::HighlightsAndShadowsEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::HueRotationEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::HueRotationEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::HueToRgbEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::HueToRgbEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::InvertEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::InvertEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::LinearTransferEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::LinearTransferEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::LuminanceToAlphaEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::LuminanceToAlphaEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::MorphologyEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::MorphologyEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::OpacityEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::OpacityEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::OpacityMetadataEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::OpacityMetadataEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::PixelShaderEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::PixelShaderEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::PointDiffuseEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::PointDiffuseEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::PointSpecularEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::PointSpecularEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::PosterizeEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::PosterizeEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::PremultiplyEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::PremultiplyEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::RgbToHueEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::RgbToHueEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::SaturationEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::SaturationEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::ScaleEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::ScaleEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::SepiaEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::SepiaEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::ShadowEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::ShadowEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::SharpenEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::SharpenEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::SpotDiffuseEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::SpotDiffuseEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::SpotSpecularEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::SpotSpecularEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::StraightenEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::StraightenEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::TableTransfer3DEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::TableTransfer3DEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::TableTransferEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::TableTransferEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::TemperatureAndTintEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::TemperatureAndTintEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::TileEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::TileEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::TintEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::TintEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::Transform2DEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::Transform2DEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::Transform3DEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::Transform3DEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::TurbulenceEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::TurbulenceEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::UnPremultiplyEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::UnPremultiplyEffect> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Effects::VignetteEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Effects::VignetteEffect> {};

}

WINRT_WARNING_POP
