﻿// C++/WinRT v1.0.170906.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Microsoft.Graphics.Canvas.0.h"
#include "winrt/impl/Windows.Graphics.DirectX.0.h"
#include "winrt/impl/Windows.Graphics.Effects.0.h"
#include "winrt/impl/Windows.UI.0.h"
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Microsoft.Graphics.Canvas.Effects.0.h"

WINRT_EXPORT namespace winrt::Microsoft::Graphics::Canvas::Effects {

struct WINRT_EBO IAlphaMaskEffect :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAlphaMaskEffect>,
    impl::require<IAlphaMaskEffect, Microsoft::Graphics::Canvas::Effects::ICanvasEffect, Microsoft::Graphics::Canvas::ICanvasImage, Windows::Foundation::IClosable, Windows::Graphics::Effects::IGraphicsEffect, Windows::Graphics::Effects::IGraphicsEffectSource>
{
    IAlphaMaskEffect(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAlphaMaskEffectStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAlphaMaskEffectStatics>
{
    IAlphaMaskEffectStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IArithmeticCompositeEffect :
    Windows::Foundation::IInspectable,
    impl::consume_t<IArithmeticCompositeEffect>,
    impl::require<IArithmeticCompositeEffect, Microsoft::Graphics::Canvas::Effects::ICanvasEffect, Microsoft::Graphics::Canvas::ICanvasImage, Windows::Foundation::IClosable, Windows::Graphics::Effects::IGraphicsEffect, Windows::Graphics::Effects::IGraphicsEffectSource>
{
    IArithmeticCompositeEffect(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAtlasEffect :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAtlasEffect>,
    impl::require<IAtlasEffect, Microsoft::Graphics::Canvas::Effects::ICanvasEffect, Microsoft::Graphics::Canvas::ICanvasImage, Windows::Foundation::IClosable, Windows::Graphics::Effects::IGraphicsEffect, Windows::Graphics::Effects::IGraphicsEffectSource>
{
    IAtlasEffect(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBlendEffect :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBlendEffect>,
    impl::require<IBlendEffect, Microsoft::Graphics::Canvas::Effects::ICanvasEffect, Microsoft::Graphics::Canvas::ICanvasImage, Windows::Foundation::IClosable, Windows::Graphics::Effects::IGraphicsEffect, Windows::Graphics::Effects::IGraphicsEffectSource>
{
    IBlendEffect(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBorderEffect :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBorderEffect>,
    impl::require<IBorderEffect, Microsoft::Graphics::Canvas::Effects::ICanvasEffect, Microsoft::Graphics::Canvas::ICanvasImage, Windows::Foundation::IClosable, Windows::Graphics::Effects::IGraphicsEffect, Windows::Graphics::Effects::IGraphicsEffectSource>
{
    IBorderEffect(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBrightnessEffect :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBrightnessEffect>,
    impl::require<IBrightnessEffect, Microsoft::Graphics::Canvas::Effects::ICanvasEffect, Microsoft::Graphics::Canvas::ICanvasImage, Windows::Foundation::IClosable, Windows::Graphics::Effects::IGraphicsEffect, Windows::Graphics::Effects::IGraphicsEffectSource>
{
    IBrightnessEffect(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICanvasEffect :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICanvasEffect>,
    impl::require<ICanvasEffect, Microsoft::Graphics::Canvas::ICanvasImage, Windows::Foundation::IClosable, Windows::Graphics::Effects::IGraphicsEffect, Windows::Graphics::Effects::IGraphicsEffectSource>
{
    ICanvasEffect(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IChromaKeyEffect :
    Windows::Foundation::IInspectable,
    impl::consume_t<IChromaKeyEffect>,
    impl::require<IChromaKeyEffect, Microsoft::Graphics::Canvas::Effects::ICanvasEffect, Microsoft::Graphics::Canvas::ICanvasImage, Windows::Foundation::IClosable, Windows::Graphics::Effects::IGraphicsEffect, Windows::Graphics::Effects::IGraphicsEffectSource>
{
    IChromaKeyEffect(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IColorManagementEffect :
    Windows::Foundation::IInspectable,
    impl::consume_t<IColorManagementEffect>,
    impl::require<IColorManagementEffect, Microsoft::Graphics::Canvas::Effects::ICanvasEffect, Microsoft::Graphics::Canvas::ICanvasImage, Windows::Foundation::IClosable, Windows::Graphics::Effects::IGraphicsEffect, Windows::Graphics::Effects::IGraphicsEffectSource>
{
    IColorManagementEffect(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IColorManagementEffectStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IColorManagementEffectStatics>
{
    IColorManagementEffectStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IColorManagementProfile :
    Windows::Foundation::IInspectable,
    impl::consume_t<IColorManagementProfile>,
    impl::require<IColorManagementProfile, Windows::Foundation::IClosable>
{
    IColorManagementProfile(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IColorManagementProfileFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IColorManagementProfileFactory>
{
    IColorManagementProfileFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IColorManagementProfileStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IColorManagementProfileStatics>
{
    IColorManagementProfileStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IColorMatrixEffect :
    Windows::Foundation::IInspectable,
    impl::consume_t<IColorMatrixEffect>,
    impl::require<IColorMatrixEffect, Microsoft::Graphics::Canvas::Effects::ICanvasEffect, Microsoft::Graphics::Canvas::ICanvasImage, Windows::Foundation::IClosable, Windows::Graphics::Effects::IGraphicsEffect, Windows::Graphics::Effects::IGraphicsEffectSource>
{
    IColorMatrixEffect(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IColorSourceEffect :
    Windows::Foundation::IInspectable,
    impl::consume_t<IColorSourceEffect>,
    impl::require<IColorSourceEffect, Microsoft::Graphics::Canvas::Effects::ICanvasEffect, Microsoft::Graphics::Canvas::ICanvasImage, Windows::Foundation::IClosable, Windows::Graphics::Effects::IGraphicsEffect, Windows::Graphics::Effects::IGraphicsEffectSource>
{
    IColorSourceEffect(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICompositeEffect :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositeEffect>,
    impl::require<ICompositeEffect, Microsoft::Graphics::Canvas::Effects::ICanvasEffect, Microsoft::Graphics::Canvas::ICanvasImage, Windows::Foundation::IClosable, Windows::Graphics::Effects::IGraphicsEffect, Windows::Graphics::Effects::IGraphicsEffectSource>
{
    ICompositeEffect(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContrastEffect :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContrastEffect>,
    impl::require<IContrastEffect, Microsoft::Graphics::Canvas::Effects::ICanvasEffect, Microsoft::Graphics::Canvas::ICanvasImage, Windows::Foundation::IClosable, Windows::Graphics::Effects::IGraphicsEffect, Windows::Graphics::Effects::IGraphicsEffectSource>
{
    IContrastEffect(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IConvolveMatrixEffect :
    Windows::Foundation::IInspectable,
    impl::consume_t<IConvolveMatrixEffect>,
    impl::require<IConvolveMatrixEffect, Microsoft::Graphics::Canvas::Effects::ICanvasEffect, Microsoft::Graphics::Canvas::ICanvasImage, Windows::Foundation::IClosable, Windows::Graphics::Effects::IGraphicsEffect, Windows::Graphics::Effects::IGraphicsEffectSource>
{
    IConvolveMatrixEffect(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICropEffect :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICropEffect>,
    impl::require<ICropEffect, Microsoft::Graphics::Canvas::Effects::ICanvasEffect, Microsoft::Graphics::Canvas::ICanvasImage, Windows::Foundation::IClosable, Windows::Graphics::Effects::IGraphicsEffect, Windows::Graphics::Effects::IGraphicsEffectSource>
{
    ICropEffect(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICrossFadeEffect :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICrossFadeEffect>,
    impl::require<ICrossFadeEffect, Microsoft::Graphics::Canvas::Effects::ICanvasEffect, Microsoft::Graphics::Canvas::ICanvasImage, Windows::Foundation::IClosable, Windows::Graphics::Effects::IGraphicsEffect, Windows::Graphics::Effects::IGraphicsEffectSource>
{
    ICrossFadeEffect(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICrossFadeEffectStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICrossFadeEffectStatics>
{
    ICrossFadeEffectStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDirectionalBlurEffect :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDirectionalBlurEffect>,
    impl::require<IDirectionalBlurEffect, Microsoft::Graphics::Canvas::Effects::ICanvasEffect, Microsoft::Graphics::Canvas::ICanvasImage, Windows::Foundation::IClosable, Windows::Graphics::Effects::IGraphicsEffect, Windows::Graphics::Effects::IGraphicsEffectSource>
{
    IDirectionalBlurEffect(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDiscreteTransferEffect :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDiscreteTransferEffect>,
    impl::require<IDiscreteTransferEffect, Microsoft::Graphics::Canvas::Effects::ICanvasEffect, Microsoft::Graphics::Canvas::ICanvasImage, Windows::Foundation::IClosable, Windows::Graphics::Effects::IGraphicsEffect, Windows::Graphics::Effects::IGraphicsEffectSource>
{
    IDiscreteTransferEffect(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDisplacementMapEffect :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDisplacementMapEffect>,
    impl::require<IDisplacementMapEffect, Microsoft::Graphics::Canvas::Effects::ICanvasEffect, Microsoft::Graphics::Canvas::ICanvasImage, Windows::Foundation::IClosable, Windows::Graphics::Effects::IGraphicsEffect, Windows::Graphics::Effects::IGraphicsEffectSource>
{
    IDisplacementMapEffect(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDistantDiffuseEffect :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDistantDiffuseEffect>,
    impl::require<IDistantDiffuseEffect, Microsoft::Graphics::Canvas::Effects::ICanvasEffect, Microsoft::Graphics::Canvas::ICanvasImage, Windows::Foundation::IClosable, Windows::Graphics::Effects::IGraphicsEffect, Windows::Graphics::Effects::IGraphicsEffectSource>
{
    IDistantDiffuseEffect(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDistantSpecularEffect :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDistantSpecularEffect>,
    impl::require<IDistantSpecularEffect, Microsoft::Graphics::Canvas::Effects::ICanvasEffect, Microsoft::Graphics::Canvas::ICanvasImage, Windows::Foundation::IClosable, Windows::Graphics::Effects::IGraphicsEffect, Windows::Graphics::Effects::IGraphicsEffectSource>
{
    IDistantSpecularEffect(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDpiCompensationEffect :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDpiCompensationEffect>,
    impl::require<IDpiCompensationEffect, Microsoft::Graphics::Canvas::Effects::ICanvasEffect, Microsoft::Graphics::Canvas::ICanvasImage, Windows::Foundation::IClosable, Windows::Graphics::Effects::IGraphicsEffect, Windows::Graphics::Effects::IGraphicsEffectSource>
{
    IDpiCompensationEffect(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEdgeDetectionEffect :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEdgeDetectionEffect>,
    impl::require<IEdgeDetectionEffect, Microsoft::Graphics::Canvas::Effects::ICanvasEffect, Microsoft::Graphics::Canvas::ICanvasImage, Windows::Foundation::IClosable, Windows::Graphics::Effects::IGraphicsEffect, Windows::Graphics::Effects::IGraphicsEffectSource>
{
    IEdgeDetectionEffect(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEffectTransferTable3D :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEffectTransferTable3D>,
    impl::require<IEffectTransferTable3D, Windows::Foundation::IClosable>
{
    IEffectTransferTable3D(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEffectTransferTable3DStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEffectTransferTable3DStatics>
{
    IEffectTransferTable3DStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmbossEffect :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmbossEffect>,
    impl::require<IEmbossEffect, Microsoft::Graphics::Canvas::Effects::ICanvasEffect, Microsoft::Graphics::Canvas::ICanvasImage, Windows::Foundation::IClosable, Windows::Graphics::Effects::IGraphicsEffect, Windows::Graphics::Effects::IGraphicsEffectSource>
{
    IEmbossEffect(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IExposureEffect :
    Windows::Foundation::IInspectable,
    impl::consume_t<IExposureEffect>,
    impl::require<IExposureEffect, Microsoft::Graphics::Canvas::Effects::ICanvasEffect, Microsoft::Graphics::Canvas::ICanvasImage, Windows::Foundation::IClosable, Windows::Graphics::Effects::IGraphicsEffect, Windows::Graphics::Effects::IGraphicsEffectSource>
{
    IExposureEffect(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGammaTransferEffect :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGammaTransferEffect>,
    impl::require<IGammaTransferEffect, Microsoft::Graphics::Canvas::Effects::ICanvasEffect, Microsoft::Graphics::Canvas::ICanvasImage, Windows::Foundation::IClosable, Windows::Graphics::Effects::IGraphicsEffect, Windows::Graphics::Effects::IGraphicsEffectSource>
{
    IGammaTransferEffect(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGaussianBlurEffect :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGaussianBlurEffect>,
    impl::require<IGaussianBlurEffect, Microsoft::Graphics::Canvas::Effects::ICanvasEffect, Microsoft::Graphics::Canvas::ICanvasImage, Windows::Foundation::IClosable, Windows::Graphics::Effects::IGraphicsEffect, Windows::Graphics::Effects::IGraphicsEffectSource>
{
    IGaussianBlurEffect(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGrayscaleEffect :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGrayscaleEffect>,
    impl::require<IGrayscaleEffect, Microsoft::Graphics::Canvas::Effects::ICanvasEffect, Microsoft::Graphics::Canvas::ICanvasImage, Windows::Foundation::IClosable, Windows::Graphics::Effects::IGraphicsEffect, Windows::Graphics::Effects::IGraphicsEffectSource>
{
    IGrayscaleEffect(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IHighlightsAndShadowsEffect :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHighlightsAndShadowsEffect>,
    impl::require<IHighlightsAndShadowsEffect, Microsoft::Graphics::Canvas::Effects::ICanvasEffect, Microsoft::Graphics::Canvas::ICanvasImage, Windows::Foundation::IClosable, Windows::Graphics::Effects::IGraphicsEffect, Windows::Graphics::Effects::IGraphicsEffectSource>
{
    IHighlightsAndShadowsEffect(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IHueRotationEffect :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHueRotationEffect>,
    impl::require<IHueRotationEffect, Microsoft::Graphics::Canvas::Effects::ICanvasEffect, Microsoft::Graphics::Canvas::ICanvasImage, Windows::Foundation::IClosable, Windows::Graphics::Effects::IGraphicsEffect, Windows::Graphics::Effects::IGraphicsEffectSource>
{
    IHueRotationEffect(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IHueToRgbEffect :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHueToRgbEffect>,
    impl::require<IHueToRgbEffect, Microsoft::Graphics::Canvas::Effects::ICanvasEffect, Microsoft::Graphics::Canvas::ICanvasImage, Windows::Foundation::IClosable, Windows::Graphics::Effects::IGraphicsEffect, Windows::Graphics::Effects::IGraphicsEffectSource>
{
    IHueToRgbEffect(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IInvertEffect :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInvertEffect>,
    impl::require<IInvertEffect, Microsoft::Graphics::Canvas::Effects::ICanvasEffect, Microsoft::Graphics::Canvas::ICanvasImage, Windows::Foundation::IClosable, Windows::Graphics::Effects::IGraphicsEffect, Windows::Graphics::Effects::IGraphicsEffectSource>
{
    IInvertEffect(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ILinearTransferEffect :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILinearTransferEffect>,
    impl::require<ILinearTransferEffect, Microsoft::Graphics::Canvas::Effects::ICanvasEffect, Microsoft::Graphics::Canvas::ICanvasImage, Windows::Foundation::IClosable, Windows::Graphics::Effects::IGraphicsEffect, Windows::Graphics::Effects::IGraphicsEffectSource>
{
    ILinearTransferEffect(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ILuminanceToAlphaEffect :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILuminanceToAlphaEffect>,
    impl::require<ILuminanceToAlphaEffect, Microsoft::Graphics::Canvas::Effects::ICanvasEffect, Microsoft::Graphics::Canvas::ICanvasImage, Windows::Foundation::IClosable, Windows::Graphics::Effects::IGraphicsEffect, Windows::Graphics::Effects::IGraphicsEffectSource>
{
    ILuminanceToAlphaEffect(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMorphologyEffect :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMorphologyEffect>,
    impl::require<IMorphologyEffect, Microsoft::Graphics::Canvas::Effects::ICanvasEffect, Microsoft::Graphics::Canvas::ICanvasImage, Windows::Foundation::IClosable, Windows::Graphics::Effects::IGraphicsEffect, Windows::Graphics::Effects::IGraphicsEffectSource>
{
    IMorphologyEffect(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IOpacityEffect :
    Windows::Foundation::IInspectable,
    impl::consume_t<IOpacityEffect>,
    impl::require<IOpacityEffect, Microsoft::Graphics::Canvas::Effects::ICanvasEffect, Microsoft::Graphics::Canvas::ICanvasImage, Windows::Foundation::IClosable, Windows::Graphics::Effects::IGraphicsEffect, Windows::Graphics::Effects::IGraphicsEffectSource>
{
    IOpacityEffect(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IOpacityEffectStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IOpacityEffectStatics>
{
    IOpacityEffectStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IOpacityMetadataEffect :
    Windows::Foundation::IInspectable,
    impl::consume_t<IOpacityMetadataEffect>,
    impl::require<IOpacityMetadataEffect, Microsoft::Graphics::Canvas::Effects::ICanvasEffect, Microsoft::Graphics::Canvas::ICanvasImage, Windows::Foundation::IClosable, Windows::Graphics::Effects::IGraphicsEffect, Windows::Graphics::Effects::IGraphicsEffectSource>
{
    IOpacityMetadataEffect(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPixelShaderEffect :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPixelShaderEffect>,
    impl::require<IPixelShaderEffect, Microsoft::Graphics::Canvas::Effects::ICanvasEffect, Microsoft::Graphics::Canvas::ICanvasImage, Windows::Foundation::IClosable, Windows::Graphics::Effects::IGraphicsEffect, Windows::Graphics::Effects::IGraphicsEffectSource>
{
    IPixelShaderEffect(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPixelShaderEffectFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPixelShaderEffectFactory>
{
    IPixelShaderEffectFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPointDiffuseEffect :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPointDiffuseEffect>,
    impl::require<IPointDiffuseEffect, Microsoft::Graphics::Canvas::Effects::ICanvasEffect, Microsoft::Graphics::Canvas::ICanvasImage, Windows::Foundation::IClosable, Windows::Graphics::Effects::IGraphicsEffect, Windows::Graphics::Effects::IGraphicsEffectSource>
{
    IPointDiffuseEffect(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPointSpecularEffect :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPointSpecularEffect>,
    impl::require<IPointSpecularEffect, Microsoft::Graphics::Canvas::Effects::ICanvasEffect, Microsoft::Graphics::Canvas::ICanvasImage, Windows::Foundation::IClosable, Windows::Graphics::Effects::IGraphicsEffect, Windows::Graphics::Effects::IGraphicsEffectSource>
{
    IPointSpecularEffect(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPosterizeEffect :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPosterizeEffect>,
    impl::require<IPosterizeEffect, Microsoft::Graphics::Canvas::Effects::ICanvasEffect, Microsoft::Graphics::Canvas::ICanvasImage, Windows::Foundation::IClosable, Windows::Graphics::Effects::IGraphicsEffect, Windows::Graphics::Effects::IGraphicsEffectSource>
{
    IPosterizeEffect(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPremultiplyEffect :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPremultiplyEffect>,
    impl::require<IPremultiplyEffect, Microsoft::Graphics::Canvas::Effects::ICanvasEffect, Microsoft::Graphics::Canvas::ICanvasImage, Windows::Foundation::IClosable, Windows::Graphics::Effects::IGraphicsEffect, Windows::Graphics::Effects::IGraphicsEffectSource>
{
    IPremultiplyEffect(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRgbToHueEffect :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRgbToHueEffect>,
    impl::require<IRgbToHueEffect, Microsoft::Graphics::Canvas::Effects::ICanvasEffect, Microsoft::Graphics::Canvas::ICanvasImage, Windows::Foundation::IClosable, Windows::Graphics::Effects::IGraphicsEffect, Windows::Graphics::Effects::IGraphicsEffectSource>
{
    IRgbToHueEffect(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISaturationEffect :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISaturationEffect>,
    impl::require<ISaturationEffect, Microsoft::Graphics::Canvas::Effects::ICanvasEffect, Microsoft::Graphics::Canvas::ICanvasImage, Windows::Foundation::IClosable, Windows::Graphics::Effects::IGraphicsEffect, Windows::Graphics::Effects::IGraphicsEffectSource>
{
    ISaturationEffect(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IScaleEffect :
    Windows::Foundation::IInspectable,
    impl::consume_t<IScaleEffect>,
    impl::require<IScaleEffect, Microsoft::Graphics::Canvas::Effects::ICanvasEffect, Microsoft::Graphics::Canvas::ICanvasImage, Windows::Foundation::IClosable, Windows::Graphics::Effects::IGraphicsEffect, Windows::Graphics::Effects::IGraphicsEffectSource>
{
    IScaleEffect(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISepiaEffect :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISepiaEffect>,
    impl::require<ISepiaEffect, Microsoft::Graphics::Canvas::Effects::ICanvasEffect, Microsoft::Graphics::Canvas::ICanvasImage, Windows::Foundation::IClosable, Windows::Graphics::Effects::IGraphicsEffect, Windows::Graphics::Effects::IGraphicsEffectSource>
{
    ISepiaEffect(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IShadowEffect :
    Windows::Foundation::IInspectable,
    impl::consume_t<IShadowEffect>,
    impl::require<IShadowEffect, Microsoft::Graphics::Canvas::Effects::ICanvasEffect, Microsoft::Graphics::Canvas::ICanvasImage, Windows::Foundation::IClosable, Windows::Graphics::Effects::IGraphicsEffect, Windows::Graphics::Effects::IGraphicsEffectSource>
{
    IShadowEffect(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISharpenEffect :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISharpenEffect>,
    impl::require<ISharpenEffect, Microsoft::Graphics::Canvas::Effects::ICanvasEffect, Microsoft::Graphics::Canvas::ICanvasImage, Windows::Foundation::IClosable, Windows::Graphics::Effects::IGraphicsEffect, Windows::Graphics::Effects::IGraphicsEffectSource>
{
    ISharpenEffect(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISpotDiffuseEffect :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpotDiffuseEffect>,
    impl::require<ISpotDiffuseEffect, Microsoft::Graphics::Canvas::Effects::ICanvasEffect, Microsoft::Graphics::Canvas::ICanvasImage, Windows::Foundation::IClosable, Windows::Graphics::Effects::IGraphicsEffect, Windows::Graphics::Effects::IGraphicsEffectSource>
{
    ISpotDiffuseEffect(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISpotSpecularEffect :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpotSpecularEffect>,
    impl::require<ISpotSpecularEffect, Microsoft::Graphics::Canvas::Effects::ICanvasEffect, Microsoft::Graphics::Canvas::ICanvasImage, Windows::Foundation::IClosable, Windows::Graphics::Effects::IGraphicsEffect, Windows::Graphics::Effects::IGraphicsEffectSource>
{
    ISpotSpecularEffect(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStraightenEffect :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStraightenEffect>,
    impl::require<IStraightenEffect, Microsoft::Graphics::Canvas::Effects::ICanvasEffect, Microsoft::Graphics::Canvas::ICanvasImage, Windows::Foundation::IClosable, Windows::Graphics::Effects::IGraphicsEffect, Windows::Graphics::Effects::IGraphicsEffectSource>
{
    IStraightenEffect(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITableTransfer3DEffect :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITableTransfer3DEffect>,
    impl::require<ITableTransfer3DEffect, Microsoft::Graphics::Canvas::Effects::ICanvasEffect, Microsoft::Graphics::Canvas::ICanvasImage, Windows::Foundation::IClosable, Windows::Graphics::Effects::IGraphicsEffect, Windows::Graphics::Effects::IGraphicsEffectSource>
{
    ITableTransfer3DEffect(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITableTransferEffect :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITableTransferEffect>,
    impl::require<ITableTransferEffect, Microsoft::Graphics::Canvas::Effects::ICanvasEffect, Microsoft::Graphics::Canvas::ICanvasImage, Windows::Foundation::IClosable, Windows::Graphics::Effects::IGraphicsEffect, Windows::Graphics::Effects::IGraphicsEffectSource>
{
    ITableTransferEffect(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITemperatureAndTintEffect :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITemperatureAndTintEffect>,
    impl::require<ITemperatureAndTintEffect, Microsoft::Graphics::Canvas::Effects::ICanvasEffect, Microsoft::Graphics::Canvas::ICanvasImage, Windows::Foundation::IClosable, Windows::Graphics::Effects::IGraphicsEffect, Windows::Graphics::Effects::IGraphicsEffectSource>
{
    ITemperatureAndTintEffect(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITileEffect :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITileEffect>,
    impl::require<ITileEffect, Microsoft::Graphics::Canvas::Effects::ICanvasEffect, Microsoft::Graphics::Canvas::ICanvasImage, Windows::Foundation::IClosable, Windows::Graphics::Effects::IGraphicsEffect, Windows::Graphics::Effects::IGraphicsEffectSource>
{
    ITileEffect(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITintEffect :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITintEffect>,
    impl::require<ITintEffect, Microsoft::Graphics::Canvas::Effects::ICanvasEffect, Microsoft::Graphics::Canvas::ICanvasImage, Windows::Foundation::IClosable, Windows::Graphics::Effects::IGraphicsEffect, Windows::Graphics::Effects::IGraphicsEffectSource>
{
    ITintEffect(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITintEffectStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITintEffectStatics>
{
    ITintEffectStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITransform2DEffect :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITransform2DEffect>,
    impl::require<ITransform2DEffect, Microsoft::Graphics::Canvas::Effects::ICanvasEffect, Microsoft::Graphics::Canvas::ICanvasImage, Windows::Foundation::IClosable, Windows::Graphics::Effects::IGraphicsEffect, Windows::Graphics::Effects::IGraphicsEffectSource>
{
    ITransform2DEffect(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITransform3DEffect :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITransform3DEffect>,
    impl::require<ITransform3DEffect, Microsoft::Graphics::Canvas::Effects::ICanvasEffect, Microsoft::Graphics::Canvas::ICanvasImage, Windows::Foundation::IClosable, Windows::Graphics::Effects::IGraphicsEffect, Windows::Graphics::Effects::IGraphicsEffectSource>
{
    ITransform3DEffect(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITurbulenceEffect :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITurbulenceEffect>,
    impl::require<ITurbulenceEffect, Microsoft::Graphics::Canvas::Effects::ICanvasEffect, Microsoft::Graphics::Canvas::ICanvasImage, Windows::Foundation::IClosable, Windows::Graphics::Effects::IGraphicsEffect, Windows::Graphics::Effects::IGraphicsEffectSource>
{
    ITurbulenceEffect(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUnPremultiplyEffect :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUnPremultiplyEffect>,
    impl::require<IUnPremultiplyEffect, Microsoft::Graphics::Canvas::Effects::ICanvasEffect, Microsoft::Graphics::Canvas::ICanvasImage, Windows::Foundation::IClosable, Windows::Graphics::Effects::IGraphicsEffect, Windows::Graphics::Effects::IGraphicsEffectSource>
{
    IUnPremultiplyEffect(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVignetteEffect :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVignetteEffect>,
    impl::require<IVignetteEffect, Microsoft::Graphics::Canvas::Effects::ICanvasEffect, Microsoft::Graphics::Canvas::ICanvasImage, Windows::Foundation::IClosable, Windows::Graphics::Effects::IGraphicsEffect, Windows::Graphics::Effects::IGraphicsEffectSource>
{
    IVignetteEffect(std::nullptr_t = nullptr) noexcept {}
};

}
