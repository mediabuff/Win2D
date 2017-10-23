// C++/WinRT v1.0.170906.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Microsoft::Graphics::Canvas {

enum class CanvasAlphaMode;
enum class CanvasBufferPrecision;
enum class CanvasColorSpace;
enum class CanvasComposite;
enum class CanvasEdgeBehavior;
enum class CanvasImageInterpolation;
struct CanvasDevice;
struct ICanvasResourceCreator;
struct ICanvasResourceCreatorWithDpi;

}

WINRT_EXPORT namespace winrt::Windows::Graphics::DirectX {

enum class DirectXPixelFormat;

}

WINRT_EXPORT namespace winrt::Windows::Graphics::Effects {

struct IGraphicsEffectSource;

}

WINRT_EXPORT namespace winrt::Windows::UI {

struct Color;

}

WINRT_EXPORT namespace winrt::Microsoft::Graphics::Canvas::Effects {

enum class BlendEffectMode : int32_t
{
    Multiply = 0,
    Screen = 1,
    Darken = 2,
    Lighten = 3,
    Dissolve = 4,
    ColorBurn = 5,
    LinearBurn = 6,
    DarkerColor = 7,
    LighterColor = 8,
    ColorDodge = 9,
    LinearDodge = 10,
    Overlay = 11,
    SoftLight = 12,
    HardLight = 13,
    VividLight = 14,
    LinearLight = 15,
    PinLight = 16,
    HardMix = 17,
    Difference = 18,
    Exclusion = 19,
    Hue = 20,
    Saturation = 21,
    Color = 22,
    Luminosity = 23,
    Subtract = 24,
    Division = 25,
};

enum class ColorManagementEffectQuality : int32_t
{
    Proof = 0,
    Normal = 1,
    Best = 2,
};

enum class ColorManagementGamma : int32_t
{
    G22 = 0,
    G10 = 1,
    G2084 = 2,
};

enum class ColorManagementProfileType : int32_t
{
    Icc = 0,
    Simple = 1,
    Extended = 2,
};

enum class ColorManagementRenderingIntent : int32_t
{
    Perceptual = 0,
    RelativeColorimetric = 1,
    Saturation = 2,
    AbsoluteColorimetric = 3,
};

enum class EdgeDetectionEffectMode : int32_t
{
    Sobel = 0,
    Prewitt = 1,
};

enum class EffectBorderMode : int32_t
{
    Soft = 0,
    Hard = 1,
};

enum class EffectChannelSelect : int32_t
{
    Red = 0,
    Green = 1,
    Blue = 2,
    Alpha = 3,
};

enum class EffectHueColorSpace : int32_t
{
    Hsv = 0,
    Hsl = 1,
};

enum class EffectOptimization : int32_t
{
    Speed = 0,
    Balanced = 1,
    Quality = 2,
};

enum class ExtendedColorSpace : int32_t
{
    FullG22P709 = 0,
    FullG10P709 = 1,
    StudioG22P709 = 2,
    StudioG22P2020 = 3,
    FullG2084P2020 = 12,
    StudioG2084P2020 = 14,
    FullG22P2020 = 17,
    Custom = -1,
};

enum class MorphologyEffectMode : int32_t
{
    Erode = 0,
    Dilate = 1,
};

enum class SamplerCoordinateMapping : int32_t
{
    Unknown = 0,
    OneToOne = 1,
    Offset = 2,
};

enum class TurbulenceEffectNoise : int32_t
{
    FractalSum = 0,
    Turbulence = 1,
};

struct IAlphaMaskEffect;
struct IAlphaMaskEffectStatics;
struct IArithmeticCompositeEffect;
struct IAtlasEffect;
struct IBlendEffect;
struct IBorderEffect;
struct IBrightnessEffect;
struct ICanvasEffect;
struct IChromaKeyEffect;
struct IColorManagementEffect;
struct IColorManagementEffectStatics;
struct IColorManagementProfile;
struct IColorManagementProfileFactory;
struct IColorManagementProfileStatics;
struct IColorMatrixEffect;
struct IColorSourceEffect;
struct ICompositeEffect;
struct IContrastEffect;
struct IConvolveMatrixEffect;
struct ICropEffect;
struct ICrossFadeEffect;
struct ICrossFadeEffectStatics;
struct IDirectionalBlurEffect;
struct IDiscreteTransferEffect;
struct IDisplacementMapEffect;
struct IDistantDiffuseEffect;
struct IDistantSpecularEffect;
struct IDpiCompensationEffect;
struct IEdgeDetectionEffect;
struct IEffectTransferTable3D;
struct IEffectTransferTable3DStatics;
struct IEmbossEffect;
struct IExposureEffect;
struct IGammaTransferEffect;
struct IGaussianBlurEffect;
struct IGrayscaleEffect;
struct IHighlightsAndShadowsEffect;
struct IHueRotationEffect;
struct IHueToRgbEffect;
struct IInvertEffect;
struct ILinearTransferEffect;
struct ILuminanceToAlphaEffect;
struct IMorphologyEffect;
struct IOpacityEffect;
struct IOpacityEffectStatics;
struct IOpacityMetadataEffect;
struct IPixelShaderEffect;
struct IPixelShaderEffectFactory;
struct IPointDiffuseEffect;
struct IPointSpecularEffect;
struct IPosterizeEffect;
struct IPremultiplyEffect;
struct IRgbToHueEffect;
struct ISaturationEffect;
struct IScaleEffect;
struct ISepiaEffect;
struct IShadowEffect;
struct ISharpenEffect;
struct ISpotDiffuseEffect;
struct ISpotSpecularEffect;
struct IStraightenEffect;
struct ITableTransfer3DEffect;
struct ITableTransferEffect;
struct ITemperatureAndTintEffect;
struct ITileEffect;
struct ITintEffect;
struct ITintEffectStatics;
struct ITransform2DEffect;
struct ITransform3DEffect;
struct ITurbulenceEffect;
struct IUnPremultiplyEffect;
struct IVignetteEffect;
struct AlphaMaskEffect;
struct ArithmeticCompositeEffect;
struct AtlasEffect;
struct BlendEffect;
struct BorderEffect;
struct BrightnessEffect;
struct ChromaKeyEffect;
struct ColorManagementEffect;
struct ColorManagementProfile;
struct ColorMatrixEffect;
struct ColorSourceEffect;
struct CompositeEffect;
struct ContrastEffect;
struct ConvolveMatrixEffect;
struct CropEffect;
struct CrossFadeEffect;
struct DirectionalBlurEffect;
struct DiscreteTransferEffect;
struct DisplacementMapEffect;
struct DistantDiffuseEffect;
struct DistantSpecularEffect;
struct DpiCompensationEffect;
struct EdgeDetectionEffect;
struct EffectTransferTable3D;
struct EmbossEffect;
struct ExposureEffect;
struct GammaTransferEffect;
struct GaussianBlurEffect;
struct GrayscaleEffect;
struct HighlightsAndShadowsEffect;
struct HueRotationEffect;
struct HueToRgbEffect;
struct InvertEffect;
struct LinearTransferEffect;
struct LuminanceToAlphaEffect;
struct MorphologyEffect;
struct OpacityEffect;
struct OpacityMetadataEffect;
struct PixelShaderEffect;
struct PointDiffuseEffect;
struct PointSpecularEffect;
struct PosterizeEffect;
struct PremultiplyEffect;
struct RgbToHueEffect;
struct SaturationEffect;
struct ScaleEffect;
struct SepiaEffect;
struct ShadowEffect;
struct SharpenEffect;
struct SpotDiffuseEffect;
struct SpotSpecularEffect;
struct StraightenEffect;
struct TableTransfer3DEffect;
struct TableTransferEffect;
struct TemperatureAndTintEffect;
struct TileEffect;
struct TintEffect;
struct Transform2DEffect;
struct Transform3DEffect;
struct TurbulenceEffect;
struct UnPremultiplyEffect;
struct VignetteEffect;
struct ColorManagementSimpleProfile;
struct Matrix5x4;

}

namespace winrt::impl {

template <> struct category<Microsoft::Graphics::Canvas::Effects::IAlphaMaskEffect>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::IAlphaMaskEffectStatics>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::IArithmeticCompositeEffect>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::IAtlasEffect>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::IBlendEffect>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::IBorderEffect>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::IBrightnessEffect>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::ICanvasEffect>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::IChromaKeyEffect>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::IColorManagementEffect>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::IColorManagementEffectStatics>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::IColorManagementProfile>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::IColorManagementProfileFactory>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::IColorManagementProfileStatics>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::IColorMatrixEffect>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::IColorSourceEffect>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::ICompositeEffect>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::IContrastEffect>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::IConvolveMatrixEffect>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::ICropEffect>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::ICrossFadeEffect>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::ICrossFadeEffectStatics>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::IDirectionalBlurEffect>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::IDiscreteTransferEffect>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::IDisplacementMapEffect>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::IDistantDiffuseEffect>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::IDistantSpecularEffect>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::IDpiCompensationEffect>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::IEdgeDetectionEffect>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::IEffectTransferTable3D>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::IEffectTransferTable3DStatics>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::IEmbossEffect>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::IExposureEffect>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::IGammaTransferEffect>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::IGaussianBlurEffect>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::IGrayscaleEffect>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::IHighlightsAndShadowsEffect>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::IHueRotationEffect>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::IHueToRgbEffect>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::IInvertEffect>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::ILinearTransferEffect>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::ILuminanceToAlphaEffect>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::IMorphologyEffect>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::IOpacityEffect>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::IOpacityEffectStatics>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::IOpacityMetadataEffect>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::IPixelShaderEffect>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::IPixelShaderEffectFactory>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::IPointDiffuseEffect>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::IPointSpecularEffect>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::IPosterizeEffect>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::IPremultiplyEffect>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::IRgbToHueEffect>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::ISaturationEffect>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::IScaleEffect>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::ISepiaEffect>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::IShadowEffect>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::ISharpenEffect>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::ISpotDiffuseEffect>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::ISpotSpecularEffect>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::IStraightenEffect>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::ITableTransfer3DEffect>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::ITableTransferEffect>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::ITemperatureAndTintEffect>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::ITileEffect>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::ITintEffect>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::ITintEffectStatics>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::ITransform2DEffect>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::ITransform3DEffect>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::ITurbulenceEffect>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::IUnPremultiplyEffect>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::IVignetteEffect>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::AlphaMaskEffect>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::ArithmeticCompositeEffect>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::AtlasEffect>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::BlendEffect>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::BorderEffect>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::BrightnessEffect>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::ChromaKeyEffect>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::ColorManagementEffect>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::ColorManagementProfile>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::ColorMatrixEffect>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::ColorSourceEffect>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::CompositeEffect>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::ContrastEffect>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::ConvolveMatrixEffect>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::CropEffect>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::CrossFadeEffect>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::DirectionalBlurEffect>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::DiscreteTransferEffect>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::DisplacementMapEffect>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::DistantDiffuseEffect>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::DistantSpecularEffect>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::DpiCompensationEffect>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::EdgeDetectionEffect>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::EffectTransferTable3D>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::EmbossEffect>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::ExposureEffect>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::GammaTransferEffect>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::GaussianBlurEffect>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::GrayscaleEffect>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::HighlightsAndShadowsEffect>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::HueRotationEffect>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::HueToRgbEffect>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::InvertEffect>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::LinearTransferEffect>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::LuminanceToAlphaEffect>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::MorphologyEffect>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::OpacityEffect>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::OpacityMetadataEffect>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::PixelShaderEffect>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::PointDiffuseEffect>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::PointSpecularEffect>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::PosterizeEffect>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::PremultiplyEffect>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::RgbToHueEffect>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::SaturationEffect>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::ScaleEffect>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::SepiaEffect>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::ShadowEffect>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::SharpenEffect>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::SpotDiffuseEffect>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::SpotSpecularEffect>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::StraightenEffect>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::TableTransfer3DEffect>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::TableTransferEffect>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::TemperatureAndTintEffect>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::TileEffect>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::TintEffect>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::Transform2DEffect>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::Transform3DEffect>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::TurbulenceEffect>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::UnPremultiplyEffect>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::VignetteEffect>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::BlendEffectMode>{ using type = enum_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::ColorManagementEffectQuality>{ using type = enum_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::ColorManagementGamma>{ using type = enum_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::ColorManagementProfileType>{ using type = enum_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::ColorManagementRenderingIntent>{ using type = enum_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::EdgeDetectionEffectMode>{ using type = enum_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::EffectBorderMode>{ using type = enum_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::EffectChannelSelect>{ using type = enum_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::EffectHueColorSpace>{ using type = enum_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::EffectOptimization>{ using type = enum_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::ExtendedColorSpace>{ using type = enum_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::MorphologyEffectMode>{ using type = enum_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::SamplerCoordinateMapping>{ using type = enum_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::TurbulenceEffectNoise>{ using type = enum_category; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::ColorManagementSimpleProfile>{ using type = struct_category<Windows::Foundation::Numerics::float2,Windows::Foundation::Numerics::float2,Windows::Foundation::Numerics::float2,Windows::Foundation::Numerics::float2,Microsoft::Graphics::Canvas::Effects::ColorManagementGamma>; };
template <> struct category<Microsoft::Graphics::Canvas::Effects::Matrix5x4>{ using type = struct_category<float,float,float,float,float,float,float,float,float,float,float,float,float,float,float,float,float,float,float,float>; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::IAlphaMaskEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.IAlphaMaskEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::IAlphaMaskEffectStatics>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.IAlphaMaskEffectStatics" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::IArithmeticCompositeEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.IArithmeticCompositeEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::IAtlasEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.IAtlasEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::IBlendEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.IBlendEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::IBorderEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.IBorderEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::IBrightnessEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.IBrightnessEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::ICanvasEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.ICanvasEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::IChromaKeyEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.IChromaKeyEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::IColorManagementEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.IColorManagementEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::IColorManagementEffectStatics>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.IColorManagementEffectStatics" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::IColorManagementProfile>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.IColorManagementProfile" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::IColorManagementProfileFactory>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.IColorManagementProfileFactory" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::IColorManagementProfileStatics>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.IColorManagementProfileStatics" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::IColorMatrixEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.IColorMatrixEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::IColorSourceEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.IColorSourceEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::ICompositeEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.ICompositeEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::IContrastEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.IContrastEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::IConvolveMatrixEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.IConvolveMatrixEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::ICropEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.ICropEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::ICrossFadeEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.ICrossFadeEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::ICrossFadeEffectStatics>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.ICrossFadeEffectStatics" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::IDirectionalBlurEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.IDirectionalBlurEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::IDiscreteTransferEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.IDiscreteTransferEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::IDisplacementMapEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.IDisplacementMapEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::IDistantDiffuseEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.IDistantDiffuseEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::IDistantSpecularEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.IDistantSpecularEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::IDpiCompensationEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.IDpiCompensationEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::IEdgeDetectionEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.IEdgeDetectionEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::IEffectTransferTable3D>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.IEffectTransferTable3D" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::IEffectTransferTable3DStatics>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.IEffectTransferTable3DStatics" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::IEmbossEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.IEmbossEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::IExposureEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.IExposureEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::IGammaTransferEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.IGammaTransferEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::IGaussianBlurEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.IGaussianBlurEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::IGrayscaleEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.IGrayscaleEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::IHighlightsAndShadowsEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.IHighlightsAndShadowsEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::IHueRotationEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.IHueRotationEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::IHueToRgbEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.IHueToRgbEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::IInvertEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.IInvertEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::ILinearTransferEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.ILinearTransferEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::ILuminanceToAlphaEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.ILuminanceToAlphaEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::IMorphologyEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.IMorphologyEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::IOpacityEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.IOpacityEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::IOpacityEffectStatics>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.IOpacityEffectStatics" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::IOpacityMetadataEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.IOpacityMetadataEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::IPixelShaderEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.IPixelShaderEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::IPixelShaderEffectFactory>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.IPixelShaderEffectFactory" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::IPointDiffuseEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.IPointDiffuseEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::IPointSpecularEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.IPointSpecularEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::IPosterizeEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.IPosterizeEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::IPremultiplyEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.IPremultiplyEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::IRgbToHueEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.IRgbToHueEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::ISaturationEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.ISaturationEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::IScaleEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.IScaleEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::ISepiaEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.ISepiaEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::IShadowEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.IShadowEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::ISharpenEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.ISharpenEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::ISpotDiffuseEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.ISpotDiffuseEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::ISpotSpecularEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.ISpotSpecularEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::IStraightenEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.IStraightenEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::ITableTransfer3DEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.ITableTransfer3DEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::ITableTransferEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.ITableTransferEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::ITemperatureAndTintEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.ITemperatureAndTintEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::ITileEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.ITileEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::ITintEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.ITintEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::ITintEffectStatics>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.ITintEffectStatics" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::ITransform2DEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.ITransform2DEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::ITransform3DEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.ITransform3DEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::ITurbulenceEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.ITurbulenceEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::IUnPremultiplyEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.IUnPremultiplyEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::IVignetteEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.IVignetteEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::AlphaMaskEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.AlphaMaskEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::ArithmeticCompositeEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.ArithmeticCompositeEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::AtlasEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.AtlasEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::BlendEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.BlendEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::BorderEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.BorderEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::BrightnessEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.BrightnessEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::ChromaKeyEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.ChromaKeyEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::ColorManagementEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.ColorManagementEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::ColorManagementProfile>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.ColorManagementProfile" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::ColorMatrixEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.ColorMatrixEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::ColorSourceEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.ColorSourceEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::CompositeEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.CompositeEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::ContrastEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.ContrastEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::ConvolveMatrixEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.ConvolveMatrixEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::CropEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.CropEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::CrossFadeEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.CrossFadeEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::DirectionalBlurEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.DirectionalBlurEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::DiscreteTransferEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.DiscreteTransferEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::DisplacementMapEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.DisplacementMapEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::DistantDiffuseEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.DistantDiffuseEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::DistantSpecularEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.DistantSpecularEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::DpiCompensationEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.DpiCompensationEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::EdgeDetectionEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.EdgeDetectionEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::EffectTransferTable3D>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.EffectTransferTable3D" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::EmbossEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.EmbossEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::ExposureEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.ExposureEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::GammaTransferEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.GammaTransferEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::GaussianBlurEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.GaussianBlurEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::GrayscaleEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.GrayscaleEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::HighlightsAndShadowsEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.HighlightsAndShadowsEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::HueRotationEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.HueRotationEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::HueToRgbEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.HueToRgbEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::InvertEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.InvertEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::LinearTransferEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.LinearTransferEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::LuminanceToAlphaEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.LuminanceToAlphaEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::MorphologyEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.MorphologyEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::OpacityEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.OpacityEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::OpacityMetadataEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.OpacityMetadataEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::PixelShaderEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.PixelShaderEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::PointDiffuseEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.PointDiffuseEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::PointSpecularEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.PointSpecularEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::PosterizeEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.PosterizeEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::PremultiplyEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.PremultiplyEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::RgbToHueEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.RgbToHueEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::SaturationEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.SaturationEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::ScaleEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.ScaleEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::SepiaEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.SepiaEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::ShadowEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.ShadowEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::SharpenEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.SharpenEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::SpotDiffuseEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.SpotDiffuseEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::SpotSpecularEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.SpotSpecularEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::StraightenEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.StraightenEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::TableTransfer3DEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.TableTransfer3DEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::TableTransferEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.TableTransferEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::TemperatureAndTintEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.TemperatureAndTintEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::TileEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.TileEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::TintEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.TintEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::Transform2DEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.Transform2DEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::Transform3DEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.Transform3DEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::TurbulenceEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.TurbulenceEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::UnPremultiplyEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.UnPremultiplyEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::VignetteEffect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.VignetteEffect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::BlendEffectMode>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.BlendEffectMode" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::ColorManagementEffectQuality>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.ColorManagementEffectQuality" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::ColorManagementGamma>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.ColorManagementGamma" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::ColorManagementProfileType>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.ColorManagementProfileType" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::ColorManagementRenderingIntent>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.ColorManagementRenderingIntent" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::EdgeDetectionEffectMode>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.EdgeDetectionEffectMode" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::EffectBorderMode>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.EffectBorderMode" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::EffectChannelSelect>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.EffectChannelSelect" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::EffectHueColorSpace>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.EffectHueColorSpace" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::EffectOptimization>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.EffectOptimization" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::ExtendedColorSpace>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.ExtendedColorSpace" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::MorphologyEffectMode>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.MorphologyEffectMode" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::SamplerCoordinateMapping>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.SamplerCoordinateMapping" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::TurbulenceEffectNoise>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.TurbulenceEffectNoise" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::ColorManagementSimpleProfile>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.ColorManagementSimpleProfile" }; };
template <> struct name<Microsoft::Graphics::Canvas::Effects::Matrix5x4>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Effects.Matrix5x4" }; };
template <> struct guid<Microsoft::Graphics::Canvas::Effects::IAlphaMaskEffect>{ static constexpr GUID value{ 0x9BA6607E,0x75C9,0x5388,{ 0x89,0x2F,0xDD,0x34,0x40,0x56,0x4D,0x98 } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Effects::IAlphaMaskEffectStatics>{ static constexpr GUID value{ 0xCC31105C,0x0377,0x5708,{ 0x84,0x84,0x1A,0xD8,0xEE,0x3E,0x55,0x4B } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Effects::IArithmeticCompositeEffect>{ static constexpr GUID value{ 0xBEEB682B,0xD64C,0x5C8B,{ 0xA1,0xFB,0x33,0x21,0x62,0xED,0x09,0x9C } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Effects::IAtlasEffect>{ static constexpr GUID value{ 0xF7F26EBA,0xF015,0x5EFF,{ 0x9A,0xF3,0x7B,0xD2,0xD4,0x49,0x04,0xBD } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Effects::IBlendEffect>{ static constexpr GUID value{ 0x5673248E,0x7266,0x5E49,{ 0xB2,0xAB,0x25,0x89,0xD5,0xD8,0x75,0xC3 } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Effects::IBorderEffect>{ static constexpr GUID value{ 0x31602441,0x15DB,0x5B4A,{ 0x98,0xDD,0xBA,0x42,0x47,0x54,0x8B,0x41 } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Effects::IBrightnessEffect>{ static constexpr GUID value{ 0xBECED347,0x025F,0x5727,{ 0x8F,0x7D,0x49,0x8D,0x67,0xDF,0x55,0x7E } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Effects::ICanvasEffect>{ static constexpr GUID value{ 0x0EF96F8C,0x9B5E,0x4BF0,{ 0xA3,0x99,0xAA,0xD8,0xCE,0x53,0xDB,0x55 } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Effects::IChromaKeyEffect>{ static constexpr GUID value{ 0xF14B9464,0x1871,0x5EAA,{ 0x9D,0xB6,0xC0,0x90,0x11,0x40,0xE9,0xD3 } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Effects::IColorManagementEffect>{ static constexpr GUID value{ 0x6E8BBE37,0xE1E4,0x5AD0,{ 0xB9,0x8D,0x94,0x0E,0x32,0x13,0xA5,0x4E } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Effects::IColorManagementEffectStatics>{ static constexpr GUID value{ 0x31C7AF98,0xF2D4,0x55FC,{ 0xB1,0x29,0xA7,0x07,0x36,0xE6,0xDA,0x05 } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Effects::IColorManagementProfile>{ static constexpr GUID value{ 0x5123A56B,0xB199,0x47AB,{ 0xAE,0xBE,0xD3,0x08,0x04,0x44,0x23,0xFE } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Effects::IColorManagementProfileFactory>{ static constexpr GUID value{ 0x7A0F1C98,0x94C6,0x4621,{ 0x98,0x77,0xC5,0x1A,0x17,0x82,0x3E,0xDF } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Effects::IColorManagementProfileStatics>{ static constexpr GUID value{ 0x94EEF610,0x03BD,0x4E82,{ 0x94,0x79,0x62,0xA6,0x16,0xBE,0x75,0xF1 } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Effects::IColorMatrixEffect>{ static constexpr GUID value{ 0xE6AE54C4,0x883D,0x588E,{ 0xB4,0x51,0xE9,0xEB,0xE3,0x83,0x04,0x37 } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Effects::IColorSourceEffect>{ static constexpr GUID value{ 0x25F942C7,0x7FEE,0x518A,{ 0xBA,0x7B,0x22,0xA0,0x06,0x0A,0xF7,0xF6 } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Effects::ICompositeEffect>{ static constexpr GUID value{ 0xF8808C48,0xCDC7,0x5DB4,{ 0x80,0x7C,0xB9,0x34,0x4F,0xF7,0x19,0x84 } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Effects::IContrastEffect>{ static constexpr GUID value{ 0xDA8A2B9F,0x594E,0x560A,{ 0x9E,0xAA,0x1F,0x91,0x24,0x08,0xFE,0x79 } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Effects::IConvolveMatrixEffect>{ static constexpr GUID value{ 0x82961257,0xA78D,0x5440,{ 0x80,0x26,0xAF,0x57,0xD4,0xA7,0x6A,0x9E } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Effects::ICropEffect>{ static constexpr GUID value{ 0xD8A1C2A5,0xE031,0x566D,{ 0x8F,0x7C,0xBA,0x07,0xCF,0xB5,0x8A,0xAE } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Effects::ICrossFadeEffect>{ static constexpr GUID value{ 0xBE161A9F,0x43D2,0x5613,{ 0x86,0x00,0xD5,0x1E,0x3D,0x7C,0xE2,0x88 } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Effects::ICrossFadeEffectStatics>{ static constexpr GUID value{ 0xA3B67330,0x6284,0x5EF6,{ 0x99,0xE8,0xB4,0xB0,0x5D,0x2B,0x8B,0xFC } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Effects::IDirectionalBlurEffect>{ static constexpr GUID value{ 0x5D155C4B,0x0882,0x506A,{ 0xA8,0xE1,0x12,0xE1,0xEA,0xD1,0x7F,0x0A } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Effects::IDiscreteTransferEffect>{ static constexpr GUID value{ 0x7F1F54F9,0x21B5,0x5B91,{ 0x95,0x06,0x83,0x2C,0x53,0x6F,0xDD,0xFA } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Effects::IDisplacementMapEffect>{ static constexpr GUID value{ 0x45F57C50,0xD4D9,0x5AF1,{ 0x8A,0x6B,0x50,0x37,0x8F,0x34,0x98,0xA2 } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Effects::IDistantDiffuseEffect>{ static constexpr GUID value{ 0xD501B10B,0xB445,0x50F4,{ 0x8B,0x8F,0xCD,0xEC,0xFC,0xDD,0x13,0x21 } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Effects::IDistantSpecularEffect>{ static constexpr GUID value{ 0xA7A828DF,0x3072,0x545F,{ 0x8D,0x75,0x86,0xC1,0x00,0xF0,0x32,0x31 } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Effects::IDpiCompensationEffect>{ static constexpr GUID value{ 0x636597CD,0xF94A,0x55B6,{ 0x9C,0xF0,0x69,0x4A,0x53,0xD6,0x38,0xEA } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Effects::IEdgeDetectionEffect>{ static constexpr GUID value{ 0x69F6CF3A,0xF38F,0x5A88,{ 0x97,0x4A,0x29,0x39,0x0B,0x95,0x7E,0x5C } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Effects::IEffectTransferTable3D>{ static constexpr GUID value{ 0x7AF06B86,0x2C45,0x49C8,{ 0x8F,0x44,0xE1,0x5A,0x6D,0x4F,0xA4,0x4E } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Effects::IEffectTransferTable3DStatics>{ static constexpr GUID value{ 0x3CB83559,0x216A,0x4BCA,{ 0x9B,0xB6,0xE2,0x33,0xC5,0xAD,0x2C,0x48 } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Effects::IEmbossEffect>{ static constexpr GUID value{ 0x617BFF35,0x481C,0x5596,{ 0xAB,0xA5,0x00,0xA1,0x62,0x34,0x9D,0x7B } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Effects::IExposureEffect>{ static constexpr GUID value{ 0xB9E20A03,0x2232,0x5FD3,{ 0xB4,0x08,0x15,0x78,0x4B,0x79,0xDB,0xB0 } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Effects::IGammaTransferEffect>{ static constexpr GUID value{ 0xB4576B6B,0x6C3E,0x534A,{ 0x85,0x76,0xD4,0x6D,0xF4,0xFC,0xE9,0x3D } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Effects::IGaussianBlurEffect>{ static constexpr GUID value{ 0xA82EC394,0x6734,0x5830,{ 0x91,0x23,0x2C,0x82,0xB2,0x7D,0xD3,0xC0 } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Effects::IGrayscaleEffect>{ static constexpr GUID value{ 0x78E13B83,0x0638,0x53F8,{ 0xB0,0xB3,0x5B,0x0B,0x32,0x0A,0x9A,0xD2 } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Effects::IHighlightsAndShadowsEffect>{ static constexpr GUID value{ 0x7F90BE14,0x267E,0x5088,{ 0xBC,0x36,0x2E,0x0A,0xAD,0x86,0x9B,0x52 } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Effects::IHueRotationEffect>{ static constexpr GUID value{ 0xC172EBF2,0xE35F,0x58AE,{ 0xAD,0x2C,0x56,0x1E,0xCE,0xAF,0x26,0x94 } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Effects::IHueToRgbEffect>{ static constexpr GUID value{ 0x1E97C12C,0xB743,0x53D0,{ 0x88,0xC4,0x84,0x35,0x27,0x2B,0x0A,0x3D } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Effects::IInvertEffect>{ static constexpr GUID value{ 0xD4ADCDFC,0x0F60,0x524D,{ 0x93,0x6A,0x7F,0x27,0x36,0xAD,0x33,0xD8 } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Effects::ILinearTransferEffect>{ static constexpr GUID value{ 0x43D27AD0,0x8937,0x5FDB,{ 0x87,0x6A,0x4E,0x91,0xCB,0x47,0x54,0x0C } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Effects::ILuminanceToAlphaEffect>{ static constexpr GUID value{ 0x22364900,0xAC51,0x5BD3,{ 0x8B,0xD2,0xD6,0x26,0xFC,0x9A,0x65,0xF9 } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Effects::IMorphologyEffect>{ static constexpr GUID value{ 0xFF065FDB,0x62C8,0x5808,{ 0x92,0x1E,0x49,0xEF,0xA4,0x3A,0x3D,0x34 } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Effects::IOpacityEffect>{ static constexpr GUID value{ 0x94B6AD75,0xC540,0x51B8,{ 0xA9,0xD1,0x54,0x41,0x74,0xAD,0xC6,0x8D } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Effects::IOpacityEffectStatics>{ static constexpr GUID value{ 0x91A7CDE3,0xB9B7,0x5437,{ 0x88,0x78,0xFB,0x2E,0x14,0x10,0x0E,0x6D } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Effects::IOpacityMetadataEffect>{ static constexpr GUID value{ 0x099F3299,0x9B0A,0x5ED3,{ 0xB0,0x44,0x4A,0x6F,0xC9,0x6F,0x83,0x62 } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Effects::IPixelShaderEffect>{ static constexpr GUID value{ 0xFC8C3C31,0xFA96,0x45E2,{ 0x8B,0x72,0x17,0x41,0xC6,0x5C,0xEE,0x8E } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Effects::IPixelShaderEffectFactory>{ static constexpr GUID value{ 0x9D1727E5,0x489D,0x4ABC,{ 0xB1,0x29,0x53,0x61,0xE3,0x53,0x4A,0xF4 } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Effects::IPointDiffuseEffect>{ static constexpr GUID value{ 0x6CCE09EC,0xF847,0x5661,{ 0xAF,0x4B,0x53,0x1D,0xD3,0xDD,0x7D,0x6E } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Effects::IPointSpecularEffect>{ static constexpr GUID value{ 0xEC8AFE9B,0x8501,0x5286,{ 0xA4,0x3C,0x1A,0xFF,0xF7,0x42,0x0A,0xD6 } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Effects::IPosterizeEffect>{ static constexpr GUID value{ 0x2F631A3B,0xC89A,0x507C,{ 0x97,0x56,0x29,0x9B,0x61,0x43,0x4F,0xA4 } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Effects::IPremultiplyEffect>{ static constexpr GUID value{ 0xD29A9D1E,0xBD57,0x5F3E,{ 0x9A,0xE0,0x00,0x9C,0x6A,0xC5,0xB0,0x6D } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Effects::IRgbToHueEffect>{ static constexpr GUID value{ 0x7CAEADC6,0x9EB3,0x5895,{ 0xB8,0x76,0xF4,0x85,0xC9,0x57,0x48,0x47 } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Effects::ISaturationEffect>{ static constexpr GUID value{ 0xF85A5ED7,0x7212,0x57A6,{ 0xB3,0x57,0x61,0x03,0x89,0x61,0xC5,0x8D } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Effects::IScaleEffect>{ static constexpr GUID value{ 0x7522AE90,0xBEC2,0x512C,{ 0xBC,0xC0,0x4D,0x6A,0x97,0xE3,0xED,0x34 } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Effects::ISepiaEffect>{ static constexpr GUID value{ 0xF933471F,0xA7AF,0x5521,{ 0xBE,0x79,0xB0,0xDA,0x22,0x97,0x6C,0xFF } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Effects::IShadowEffect>{ static constexpr GUID value{ 0x3947C621,0x78DA,0x5489,{ 0x99,0x27,0xBE,0x65,0x5F,0x45,0x76,0xE2 } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Effects::ISharpenEffect>{ static constexpr GUID value{ 0x7EFEF0A1,0x7578,0x5F62,{ 0x83,0x64,0x46,0x14,0x56,0x74,0xEF,0x7E } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Effects::ISpotDiffuseEffect>{ static constexpr GUID value{ 0xB3DCBE44,0x1DD7,0x5CB3,{ 0x95,0xE5,0xA4,0x89,0x74,0xCD,0x12,0xE8 } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Effects::ISpotSpecularEffect>{ static constexpr GUID value{ 0x83AE4CD0,0x80AA,0x5783,{ 0x85,0x72,0xF1,0x5E,0x5F,0x85,0x32,0x9E } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Effects::IStraightenEffect>{ static constexpr GUID value{ 0x965FC262,0x2EBA,0x59E6,{ 0x93,0x5F,0x23,0x89,0xCB,0x5A,0x30,0x5A } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Effects::ITableTransfer3DEffect>{ static constexpr GUID value{ 0xEF09C6E0,0x9437,0x53F7,{ 0xB7,0xB4,0xB5,0x3C,0x79,0xA0,0xBC,0x37 } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Effects::ITableTransferEffect>{ static constexpr GUID value{ 0xBF0B63B6,0xFE77,0x5198,{ 0xA2,0xA1,0x3F,0xB8,0x0C,0x26,0x8B,0x8F } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Effects::ITemperatureAndTintEffect>{ static constexpr GUID value{ 0x8AE43E02,0x2619,0x5D78,{ 0x89,0x80,0x4E,0xD5,0x69,0x54,0x9B,0xD8 } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Effects::ITileEffect>{ static constexpr GUID value{ 0x78A809CB,0x1154,0x5AD6,{ 0xA8,0x80,0xE3,0xA1,0x75,0x77,0x28,0x15 } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Effects::ITintEffect>{ static constexpr GUID value{ 0x729A21EA,0xC61E,0x5308,{ 0x9E,0xAE,0xD6,0x38,0xAA,0x1F,0x5B,0x8C } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Effects::ITintEffectStatics>{ static constexpr GUID value{ 0x65E31771,0x4BAF,0x5C8C,{ 0x93,0xF4,0x3B,0x87,0x4E,0x29,0xF6,0x8D } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Effects::ITransform2DEffect>{ static constexpr GUID value{ 0x4467D118,0x33E7,0x5B1A,{ 0x87,0xC2,0x0F,0x1F,0x04,0x97,0x35,0x3D } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Effects::ITransform3DEffect>{ static constexpr GUID value{ 0x3025ED7F,0x8F25,0x5E0B,{ 0x80,0xC9,0x56,0xBB,0xDD,0x3E,0x8A,0x10 } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Effects::ITurbulenceEffect>{ static constexpr GUID value{ 0x1CB1B33D,0x20E9,0x564B,{ 0x85,0x6E,0x37,0xE9,0xFA,0x1D,0x00,0x16 } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Effects::IUnPremultiplyEffect>{ static constexpr GUID value{ 0x73098BB4,0xDCF1,0x5403,{ 0xAF,0x44,0x33,0x44,0xD2,0x98,0x2D,0x40 } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Effects::IVignetteEffect>{ static constexpr GUID value{ 0x574D0F9F,0xEEC7,0x5989,{ 0xAC,0x53,0x13,0x58,0x68,0xCF,0x5E,0x0C } }; };
template <> struct default_interface<Microsoft::Graphics::Canvas::Effects::AlphaMaskEffect>{ using type = Microsoft::Graphics::Canvas::Effects::IAlphaMaskEffect; };
template <> struct default_interface<Microsoft::Graphics::Canvas::Effects::ArithmeticCompositeEffect>{ using type = Microsoft::Graphics::Canvas::Effects::IArithmeticCompositeEffect; };
template <> struct default_interface<Microsoft::Graphics::Canvas::Effects::AtlasEffect>{ using type = Microsoft::Graphics::Canvas::Effects::IAtlasEffect; };
template <> struct default_interface<Microsoft::Graphics::Canvas::Effects::BlendEffect>{ using type = Microsoft::Graphics::Canvas::Effects::IBlendEffect; };
template <> struct default_interface<Microsoft::Graphics::Canvas::Effects::BorderEffect>{ using type = Microsoft::Graphics::Canvas::Effects::IBorderEffect; };
template <> struct default_interface<Microsoft::Graphics::Canvas::Effects::BrightnessEffect>{ using type = Microsoft::Graphics::Canvas::Effects::IBrightnessEffect; };
template <> struct default_interface<Microsoft::Graphics::Canvas::Effects::ChromaKeyEffect>{ using type = Microsoft::Graphics::Canvas::Effects::IChromaKeyEffect; };
template <> struct default_interface<Microsoft::Graphics::Canvas::Effects::ColorManagementEffect>{ using type = Microsoft::Graphics::Canvas::Effects::IColorManagementEffect; };
template <> struct default_interface<Microsoft::Graphics::Canvas::Effects::ColorManagementProfile>{ using type = Microsoft::Graphics::Canvas::Effects::IColorManagementProfile; };
template <> struct default_interface<Microsoft::Graphics::Canvas::Effects::ColorMatrixEffect>{ using type = Microsoft::Graphics::Canvas::Effects::IColorMatrixEffect; };
template <> struct default_interface<Microsoft::Graphics::Canvas::Effects::ColorSourceEffect>{ using type = Microsoft::Graphics::Canvas::Effects::IColorSourceEffect; };
template <> struct default_interface<Microsoft::Graphics::Canvas::Effects::CompositeEffect>{ using type = Microsoft::Graphics::Canvas::Effects::ICompositeEffect; };
template <> struct default_interface<Microsoft::Graphics::Canvas::Effects::ContrastEffect>{ using type = Microsoft::Graphics::Canvas::Effects::IContrastEffect; };
template <> struct default_interface<Microsoft::Graphics::Canvas::Effects::ConvolveMatrixEffect>{ using type = Microsoft::Graphics::Canvas::Effects::IConvolveMatrixEffect; };
template <> struct default_interface<Microsoft::Graphics::Canvas::Effects::CropEffect>{ using type = Microsoft::Graphics::Canvas::Effects::ICropEffect; };
template <> struct default_interface<Microsoft::Graphics::Canvas::Effects::CrossFadeEffect>{ using type = Microsoft::Graphics::Canvas::Effects::ICrossFadeEffect; };
template <> struct default_interface<Microsoft::Graphics::Canvas::Effects::DirectionalBlurEffect>{ using type = Microsoft::Graphics::Canvas::Effects::IDirectionalBlurEffect; };
template <> struct default_interface<Microsoft::Graphics::Canvas::Effects::DiscreteTransferEffect>{ using type = Microsoft::Graphics::Canvas::Effects::IDiscreteTransferEffect; };
template <> struct default_interface<Microsoft::Graphics::Canvas::Effects::DisplacementMapEffect>{ using type = Microsoft::Graphics::Canvas::Effects::IDisplacementMapEffect; };
template <> struct default_interface<Microsoft::Graphics::Canvas::Effects::DistantDiffuseEffect>{ using type = Microsoft::Graphics::Canvas::Effects::IDistantDiffuseEffect; };
template <> struct default_interface<Microsoft::Graphics::Canvas::Effects::DistantSpecularEffect>{ using type = Microsoft::Graphics::Canvas::Effects::IDistantSpecularEffect; };
template <> struct default_interface<Microsoft::Graphics::Canvas::Effects::DpiCompensationEffect>{ using type = Microsoft::Graphics::Canvas::Effects::IDpiCompensationEffect; };
template <> struct default_interface<Microsoft::Graphics::Canvas::Effects::EdgeDetectionEffect>{ using type = Microsoft::Graphics::Canvas::Effects::IEdgeDetectionEffect; };
template <> struct default_interface<Microsoft::Graphics::Canvas::Effects::EffectTransferTable3D>{ using type = Microsoft::Graphics::Canvas::Effects::IEffectTransferTable3D; };
template <> struct default_interface<Microsoft::Graphics::Canvas::Effects::EmbossEffect>{ using type = Microsoft::Graphics::Canvas::Effects::IEmbossEffect; };
template <> struct default_interface<Microsoft::Graphics::Canvas::Effects::ExposureEffect>{ using type = Microsoft::Graphics::Canvas::Effects::IExposureEffect; };
template <> struct default_interface<Microsoft::Graphics::Canvas::Effects::GammaTransferEffect>{ using type = Microsoft::Graphics::Canvas::Effects::IGammaTransferEffect; };
template <> struct default_interface<Microsoft::Graphics::Canvas::Effects::GaussianBlurEffect>{ using type = Microsoft::Graphics::Canvas::Effects::IGaussianBlurEffect; };
template <> struct default_interface<Microsoft::Graphics::Canvas::Effects::GrayscaleEffect>{ using type = Microsoft::Graphics::Canvas::Effects::IGrayscaleEffect; };
template <> struct default_interface<Microsoft::Graphics::Canvas::Effects::HighlightsAndShadowsEffect>{ using type = Microsoft::Graphics::Canvas::Effects::IHighlightsAndShadowsEffect; };
template <> struct default_interface<Microsoft::Graphics::Canvas::Effects::HueRotationEffect>{ using type = Microsoft::Graphics::Canvas::Effects::IHueRotationEffect; };
template <> struct default_interface<Microsoft::Graphics::Canvas::Effects::HueToRgbEffect>{ using type = Microsoft::Graphics::Canvas::Effects::IHueToRgbEffect; };
template <> struct default_interface<Microsoft::Graphics::Canvas::Effects::InvertEffect>{ using type = Microsoft::Graphics::Canvas::Effects::IInvertEffect; };
template <> struct default_interface<Microsoft::Graphics::Canvas::Effects::LinearTransferEffect>{ using type = Microsoft::Graphics::Canvas::Effects::ILinearTransferEffect; };
template <> struct default_interface<Microsoft::Graphics::Canvas::Effects::LuminanceToAlphaEffect>{ using type = Microsoft::Graphics::Canvas::Effects::ILuminanceToAlphaEffect; };
template <> struct default_interface<Microsoft::Graphics::Canvas::Effects::MorphologyEffect>{ using type = Microsoft::Graphics::Canvas::Effects::IMorphologyEffect; };
template <> struct default_interface<Microsoft::Graphics::Canvas::Effects::OpacityEffect>{ using type = Microsoft::Graphics::Canvas::Effects::IOpacityEffect; };
template <> struct default_interface<Microsoft::Graphics::Canvas::Effects::OpacityMetadataEffect>{ using type = Microsoft::Graphics::Canvas::Effects::IOpacityMetadataEffect; };
template <> struct default_interface<Microsoft::Graphics::Canvas::Effects::PixelShaderEffect>{ using type = Microsoft::Graphics::Canvas::Effects::IPixelShaderEffect; };
template <> struct default_interface<Microsoft::Graphics::Canvas::Effects::PointDiffuseEffect>{ using type = Microsoft::Graphics::Canvas::Effects::IPointDiffuseEffect; };
template <> struct default_interface<Microsoft::Graphics::Canvas::Effects::PointSpecularEffect>{ using type = Microsoft::Graphics::Canvas::Effects::IPointSpecularEffect; };
template <> struct default_interface<Microsoft::Graphics::Canvas::Effects::PosterizeEffect>{ using type = Microsoft::Graphics::Canvas::Effects::IPosterizeEffect; };
template <> struct default_interface<Microsoft::Graphics::Canvas::Effects::PremultiplyEffect>{ using type = Microsoft::Graphics::Canvas::Effects::IPremultiplyEffect; };
template <> struct default_interface<Microsoft::Graphics::Canvas::Effects::RgbToHueEffect>{ using type = Microsoft::Graphics::Canvas::Effects::IRgbToHueEffect; };
template <> struct default_interface<Microsoft::Graphics::Canvas::Effects::SaturationEffect>{ using type = Microsoft::Graphics::Canvas::Effects::ISaturationEffect; };
template <> struct default_interface<Microsoft::Graphics::Canvas::Effects::ScaleEffect>{ using type = Microsoft::Graphics::Canvas::Effects::IScaleEffect; };
template <> struct default_interface<Microsoft::Graphics::Canvas::Effects::SepiaEffect>{ using type = Microsoft::Graphics::Canvas::Effects::ISepiaEffect; };
template <> struct default_interface<Microsoft::Graphics::Canvas::Effects::ShadowEffect>{ using type = Microsoft::Graphics::Canvas::Effects::IShadowEffect; };
template <> struct default_interface<Microsoft::Graphics::Canvas::Effects::SharpenEffect>{ using type = Microsoft::Graphics::Canvas::Effects::ISharpenEffect; };
template <> struct default_interface<Microsoft::Graphics::Canvas::Effects::SpotDiffuseEffect>{ using type = Microsoft::Graphics::Canvas::Effects::ISpotDiffuseEffect; };
template <> struct default_interface<Microsoft::Graphics::Canvas::Effects::SpotSpecularEffect>{ using type = Microsoft::Graphics::Canvas::Effects::ISpotSpecularEffect; };
template <> struct default_interface<Microsoft::Graphics::Canvas::Effects::StraightenEffect>{ using type = Microsoft::Graphics::Canvas::Effects::IStraightenEffect; };
template <> struct default_interface<Microsoft::Graphics::Canvas::Effects::TableTransfer3DEffect>{ using type = Microsoft::Graphics::Canvas::Effects::ITableTransfer3DEffect; };
template <> struct default_interface<Microsoft::Graphics::Canvas::Effects::TableTransferEffect>{ using type = Microsoft::Graphics::Canvas::Effects::ITableTransferEffect; };
template <> struct default_interface<Microsoft::Graphics::Canvas::Effects::TemperatureAndTintEffect>{ using type = Microsoft::Graphics::Canvas::Effects::ITemperatureAndTintEffect; };
template <> struct default_interface<Microsoft::Graphics::Canvas::Effects::TileEffect>{ using type = Microsoft::Graphics::Canvas::Effects::ITileEffect; };
template <> struct default_interface<Microsoft::Graphics::Canvas::Effects::TintEffect>{ using type = Microsoft::Graphics::Canvas::Effects::ITintEffect; };
template <> struct default_interface<Microsoft::Graphics::Canvas::Effects::Transform2DEffect>{ using type = Microsoft::Graphics::Canvas::Effects::ITransform2DEffect; };
template <> struct default_interface<Microsoft::Graphics::Canvas::Effects::Transform3DEffect>{ using type = Microsoft::Graphics::Canvas::Effects::ITransform3DEffect; };
template <> struct default_interface<Microsoft::Graphics::Canvas::Effects::TurbulenceEffect>{ using type = Microsoft::Graphics::Canvas::Effects::ITurbulenceEffect; };
template <> struct default_interface<Microsoft::Graphics::Canvas::Effects::UnPremultiplyEffect>{ using type = Microsoft::Graphics::Canvas::Effects::IUnPremultiplyEffect; };
template <> struct default_interface<Microsoft::Graphics::Canvas::Effects::VignetteEffect>{ using type = Microsoft::Graphics::Canvas::Effects::IVignetteEffect; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Effects_IAlphaMaskEffect
{
    Windows::Graphics::Effects::IGraphicsEffectSource Source() const;
    void Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const;
    Windows::Graphics::Effects::IGraphicsEffectSource AlphaMask() const;
    void AlphaMask(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Effects::IAlphaMaskEffect> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Effects_IAlphaMaskEffect<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Effects_IAlphaMaskEffectStatics
{
    bool IsSupported() const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Effects::IAlphaMaskEffectStatics> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Effects_IAlphaMaskEffectStatics<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Effects_IArithmeticCompositeEffect
{
    bool ClampOutput() const;
    void ClampOutput(bool value) const;
    float MultiplyAmount() const;
    void MultiplyAmount(float value) const;
    float Source1Amount() const;
    void Source1Amount(float value) const;
    float Source2Amount() const;
    void Source2Amount(float value) const;
    float Offset() const;
    void Offset(float value) const;
    Windows::Graphics::Effects::IGraphicsEffectSource Source1() const;
    void Source1(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const;
    Windows::Graphics::Effects::IGraphicsEffectSource Source2() const;
    void Source2(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Effects::IArithmeticCompositeEffect> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Effects_IArithmeticCompositeEffect<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Effects_IAtlasEffect
{
    Windows::Foundation::Rect SourceRectangle() const;
    void SourceRectangle(Windows::Foundation::Rect const& value) const;
    Windows::Foundation::Rect PaddingRectangle() const;
    void PaddingRectangle(Windows::Foundation::Rect const& value) const;
    Windows::Graphics::Effects::IGraphicsEffectSource Source() const;
    void Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Effects::IAtlasEffect> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Effects_IAtlasEffect<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Effects_IBlendEffect
{
    Microsoft::Graphics::Canvas::Effects::BlendEffectMode Mode() const;
    void Mode(Microsoft::Graphics::Canvas::Effects::BlendEffectMode const& value) const;
    Windows::Graphics::Effects::IGraphicsEffectSource Background() const;
    void Background(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const;
    Windows::Graphics::Effects::IGraphicsEffectSource Foreground() const;
    void Foreground(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Effects::IBlendEffect> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Effects_IBlendEffect<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Effects_IBorderEffect
{
    Microsoft::Graphics::Canvas::CanvasEdgeBehavior ExtendX() const;
    void ExtendX(Microsoft::Graphics::Canvas::CanvasEdgeBehavior const& value) const;
    Microsoft::Graphics::Canvas::CanvasEdgeBehavior ExtendY() const;
    void ExtendY(Microsoft::Graphics::Canvas::CanvasEdgeBehavior const& value) const;
    Windows::Graphics::Effects::IGraphicsEffectSource Source() const;
    void Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Effects::IBorderEffect> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Effects_IBorderEffect<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Effects_IBrightnessEffect
{
    Windows::Foundation::Numerics::float2 WhitePoint() const;
    void WhitePoint(Windows::Foundation::Numerics::float2 const& value) const;
    Windows::Foundation::Numerics::float2 BlackPoint() const;
    void BlackPoint(Windows::Foundation::Numerics::float2 const& value) const;
    Windows::Graphics::Effects::IGraphicsEffectSource Source() const;
    void Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Effects::IBrightnessEffect> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Effects_IBrightnessEffect<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Effects_ICanvasEffect
{
    bool CacheOutput() const;
    void CacheOutput(bool value) const;
    Windows::Foundation::IReference<Microsoft::Graphics::Canvas::CanvasBufferPrecision> BufferPrecision() const;
    void BufferPrecision(optional<Microsoft::Graphics::Canvas::CanvasBufferPrecision> const& value) const;
    void InvalidateSourceRectangle(Microsoft::Graphics::Canvas::ICanvasResourceCreatorWithDpi const& resourceCreator, uint32_t sourceIndex, Windows::Foundation::Rect const& invalidRectangle) const;
    com_array<Windows::Foundation::Rect> GetInvalidRectangles(Microsoft::Graphics::Canvas::ICanvasResourceCreatorWithDpi const& resourceCreator) const;
    Windows::Foundation::Rect GetRequiredSourceRectangle(Microsoft::Graphics::Canvas::ICanvasResourceCreatorWithDpi const& resourceCreator, Windows::Foundation::Rect const& outputRectangle, Microsoft::Graphics::Canvas::Effects::ICanvasEffect const& sourceEffect, uint32_t sourceIndex, Windows::Foundation::Rect const& sourceBounds) const;
    com_array<Windows::Foundation::Rect> GetRequiredSourceRectangles(Microsoft::Graphics::Canvas::ICanvasResourceCreatorWithDpi const& resourceCreator, Windows::Foundation::Rect const& outputRectangle, array_view<Microsoft::Graphics::Canvas::Effects::ICanvasEffect const> sourceEffects, array_view<uint32_t const> sourceIndices, array_view<Windows::Foundation::Rect const> sourceBounds) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Effects::ICanvasEffect> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Effects_ICanvasEffect<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Effects_IChromaKeyEffect
{
    Windows::UI::Color Color() const;
    void Color(Windows::UI::Color const& value) const;
    float Tolerance() const;
    void Tolerance(float value) const;
    bool InvertAlpha() const;
    void InvertAlpha(bool value) const;
    bool Feather() const;
    void Feather(bool value) const;
    Windows::Foundation::Numerics::float4 ColorHdr() const;
    void ColorHdr(Windows::Foundation::Numerics::float4 const& value) const;
    Windows::Graphics::Effects::IGraphicsEffectSource Source() const;
    void Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Effects::IChromaKeyEffect> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Effects_IChromaKeyEffect<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Effects_IColorManagementEffect
{
    Microsoft::Graphics::Canvas::Effects::ColorManagementProfile SourceColorProfile() const;
    void SourceColorProfile(Microsoft::Graphics::Canvas::Effects::ColorManagementProfile const& value) const;
    Microsoft::Graphics::Canvas::Effects::ColorManagementRenderingIntent SourceRenderingIntent() const;
    void SourceRenderingIntent(Microsoft::Graphics::Canvas::Effects::ColorManagementRenderingIntent const& value) const;
    Microsoft::Graphics::Canvas::Effects::ColorManagementProfile OutputColorProfile() const;
    void OutputColorProfile(Microsoft::Graphics::Canvas::Effects::ColorManagementProfile const& value) const;
    Microsoft::Graphics::Canvas::Effects::ColorManagementRenderingIntent OutputRenderingIntent() const;
    void OutputRenderingIntent(Microsoft::Graphics::Canvas::Effects::ColorManagementRenderingIntent const& value) const;
    Microsoft::Graphics::Canvas::CanvasAlphaMode AlphaMode() const;
    void AlphaMode(Microsoft::Graphics::Canvas::CanvasAlphaMode const& value) const;
    Microsoft::Graphics::Canvas::Effects::ColorManagementEffectQuality Quality() const;
    void Quality(Microsoft::Graphics::Canvas::Effects::ColorManagementEffectQuality const& value) const;
    Windows::Graphics::Effects::IGraphicsEffectSource Source() const;
    void Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Effects::IColorManagementEffect> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Effects_IColorManagementEffect<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Effects_IColorManagementEffectStatics
{
    bool IsBestQualitySupported(Microsoft::Graphics::Canvas::CanvasDevice const& device) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Effects::IColorManagementEffectStatics> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Effects_IColorManagementEffectStatics<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Effects_IColorManagementProfile
{
    Microsoft::Graphics::Canvas::CanvasColorSpace ColorSpace() const;
    com_array<uint8_t> IccProfile() const;
    Microsoft::Graphics::Canvas::Effects::ColorManagementProfileType Type() const;
    Windows::Foundation::IReference<Microsoft::Graphics::Canvas::Effects::ColorManagementSimpleProfile> SimpleProfile() const;
    Microsoft::Graphics::Canvas::Effects::ExtendedColorSpace ExtendedColorSpace() const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Effects::IColorManagementProfile> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Effects_IColorManagementProfile<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Effects_IColorManagementProfileFactory
{
    Microsoft::Graphics::Canvas::Effects::ColorManagementProfile Create(Microsoft::Graphics::Canvas::CanvasColorSpace const& colorSpace) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Effects::IColorManagementProfileFactory> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Effects_IColorManagementProfileFactory<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Effects_IColorManagementProfileStatics
{
    Microsoft::Graphics::Canvas::Effects::ColorManagementProfile CreateCustom(array_view<uint8_t const> iccProfile) const;
    Microsoft::Graphics::Canvas::Effects::ColorManagementProfile CreateSimple(Microsoft::Graphics::Canvas::Effects::ColorManagementSimpleProfile const& simpleProfile) const;
    Microsoft::Graphics::Canvas::Effects::ColorManagementProfile CreateExtended(Microsoft::Graphics::Canvas::Effects::ExtendedColorSpace const& colorSpace) const;
    bool IsSupported(Microsoft::Graphics::Canvas::Effects::ColorManagementProfileType const& type, Microsoft::Graphics::Canvas::CanvasDevice const& device) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Effects::IColorManagementProfileStatics> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Effects_IColorManagementProfileStatics<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Effects_IColorMatrixEffect
{
    Microsoft::Graphics::Canvas::Effects::Matrix5x4 ColorMatrix() const;
    void ColorMatrix(Microsoft::Graphics::Canvas::Effects::Matrix5x4 const& value) const;
    Microsoft::Graphics::Canvas::CanvasAlphaMode AlphaMode() const;
    void AlphaMode(Microsoft::Graphics::Canvas::CanvasAlphaMode const& value) const;
    bool ClampOutput() const;
    void ClampOutput(bool value) const;
    Windows::Graphics::Effects::IGraphicsEffectSource Source() const;
    void Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Effects::IColorMatrixEffect> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Effects_IColorMatrixEffect<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Effects_IColorSourceEffect
{
    Windows::UI::Color Color() const;
    void Color(Windows::UI::Color const& value) const;
    Windows::Foundation::Numerics::float4 ColorHdr() const;
    void ColorHdr(Windows::Foundation::Numerics::float4 const& value) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Effects::IColorSourceEffect> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Effects_IColorSourceEffect<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Effects_ICompositeEffect
{
    Microsoft::Graphics::Canvas::CanvasComposite Mode() const;
    void Mode(Microsoft::Graphics::Canvas::CanvasComposite const& value) const;
    Windows::Foundation::Collections::IVector<Windows::Graphics::Effects::IGraphicsEffectSource> Sources() const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Effects::ICompositeEffect> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Effects_ICompositeEffect<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Effects_IContrastEffect
{
    float Contrast() const;
    void Contrast(float value) const;
    bool ClampSource() const;
    void ClampSource(bool value) const;
    Windows::Graphics::Effects::IGraphicsEffectSource Source() const;
    void Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Effects::IContrastEffect> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Effects_IContrastEffect<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Effects_IConvolveMatrixEffect
{
    Windows::Foundation::Numerics::float2 KernelScale() const;
    void KernelScale(Windows::Foundation::Numerics::float2 const& value) const;
    Microsoft::Graphics::Canvas::CanvasImageInterpolation InterpolationMode() const;
    void InterpolationMode(Microsoft::Graphics::Canvas::CanvasImageInterpolation const& value) const;
    int32_t KernelWidth() const;
    void KernelWidth(int32_t value) const;
    int32_t KernelHeight() const;
    void KernelHeight(int32_t value) const;
    com_array<float> KernelMatrix() const;
    void KernelMatrix(array_view<float const> valueElements) const;
    float Divisor() const;
    void Divisor(float value) const;
    float Offset() const;
    void Offset(float value) const;
    Windows::Foundation::Numerics::float2 KernelOffset() const;
    void KernelOffset(Windows::Foundation::Numerics::float2 const& value) const;
    bool PreserveAlpha() const;
    void PreserveAlpha(bool value) const;
    Microsoft::Graphics::Canvas::Effects::EffectBorderMode BorderMode() const;
    void BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode const& value) const;
    bool ClampOutput() const;
    void ClampOutput(bool value) const;
    Windows::Graphics::Effects::IGraphicsEffectSource Source() const;
    void Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Effects::IConvolveMatrixEffect> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Effects_IConvolveMatrixEffect<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Effects_ICropEffect
{
    Windows::Foundation::Rect SourceRectangle() const;
    void SourceRectangle(Windows::Foundation::Rect const& value) const;
    Microsoft::Graphics::Canvas::Effects::EffectBorderMode BorderMode() const;
    void BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode const& value) const;
    Windows::Graphics::Effects::IGraphicsEffectSource Source() const;
    void Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Effects::ICropEffect> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Effects_ICropEffect<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Effects_ICrossFadeEffect
{
    float CrossFade() const;
    void CrossFade(float value) const;
    Windows::Graphics::Effects::IGraphicsEffectSource Source2() const;
    void Source2(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const;
    Windows::Graphics::Effects::IGraphicsEffectSource Source1() const;
    void Source1(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Effects::ICrossFadeEffect> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Effects_ICrossFadeEffect<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Effects_ICrossFadeEffectStatics
{
    bool IsSupported() const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Effects::ICrossFadeEffectStatics> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Effects_ICrossFadeEffectStatics<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Effects_IDirectionalBlurEffect
{
    float BlurAmount() const;
    void BlurAmount(float value) const;
    float Angle() const;
    void Angle(float value) const;
    Microsoft::Graphics::Canvas::Effects::EffectOptimization Optimization() const;
    void Optimization(Microsoft::Graphics::Canvas::Effects::EffectOptimization const& value) const;
    Microsoft::Graphics::Canvas::Effects::EffectBorderMode BorderMode() const;
    void BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode const& value) const;
    Windows::Graphics::Effects::IGraphicsEffectSource Source() const;
    void Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Effects::IDirectionalBlurEffect> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Effects_IDirectionalBlurEffect<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Effects_IDiscreteTransferEffect
{
    com_array<float> RedTable() const;
    void RedTable(array_view<float const> valueElements) const;
    bool RedDisable() const;
    void RedDisable(bool value) const;
    com_array<float> GreenTable() const;
    void GreenTable(array_view<float const> valueElements) const;
    bool GreenDisable() const;
    void GreenDisable(bool value) const;
    com_array<float> BlueTable() const;
    void BlueTable(array_view<float const> valueElements) const;
    bool BlueDisable() const;
    void BlueDisable(bool value) const;
    com_array<float> AlphaTable() const;
    void AlphaTable(array_view<float const> valueElements) const;
    bool AlphaDisable() const;
    void AlphaDisable(bool value) const;
    bool ClampOutput() const;
    void ClampOutput(bool value) const;
    Windows::Graphics::Effects::IGraphicsEffectSource Source() const;
    void Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Effects::IDiscreteTransferEffect> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Effects_IDiscreteTransferEffect<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Effects_IDisplacementMapEffect
{
    float Amount() const;
    void Amount(float value) const;
    Microsoft::Graphics::Canvas::Effects::EffectChannelSelect XChannelSelect() const;
    void XChannelSelect(Microsoft::Graphics::Canvas::Effects::EffectChannelSelect const& value) const;
    Microsoft::Graphics::Canvas::Effects::EffectChannelSelect YChannelSelect() const;
    void YChannelSelect(Microsoft::Graphics::Canvas::Effects::EffectChannelSelect const& value) const;
    Windows::Graphics::Effects::IGraphicsEffectSource Source() const;
    void Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const;
    Windows::Graphics::Effects::IGraphicsEffectSource Displacement() const;
    void Displacement(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Effects::IDisplacementMapEffect> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Effects_IDisplacementMapEffect<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Effects_IDistantDiffuseEffect
{
    float Azimuth() const;
    void Azimuth(float value) const;
    float Elevation() const;
    void Elevation(float value) const;
    float DiffuseAmount() const;
    void DiffuseAmount(float value) const;
    float HeightMapScale() const;
    void HeightMapScale(float value) const;
    Windows::UI::Color LightColor() const;
    void LightColor(Windows::UI::Color const& value) const;
    Windows::Foundation::Numerics::float2 HeightMapKernelSize() const;
    void HeightMapKernelSize(Windows::Foundation::Numerics::float2 const& value) const;
    Microsoft::Graphics::Canvas::CanvasImageInterpolation HeightMapInterpolationMode() const;
    void HeightMapInterpolationMode(Microsoft::Graphics::Canvas::CanvasImageInterpolation const& value) const;
    Windows::Foundation::Numerics::float4 LightColorHdr() const;
    void LightColorHdr(Windows::Foundation::Numerics::float4 const& value) const;
    Windows::Graphics::Effects::IGraphicsEffectSource Source() const;
    void Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Effects::IDistantDiffuseEffect> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Effects_IDistantDiffuseEffect<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Effects_IDistantSpecularEffect
{
    float Azimuth() const;
    void Azimuth(float value) const;
    float Elevation() const;
    void Elevation(float value) const;
    float SpecularExponent() const;
    void SpecularExponent(float value) const;
    float SpecularAmount() const;
    void SpecularAmount(float value) const;
    float HeightMapScale() const;
    void HeightMapScale(float value) const;
    Windows::UI::Color LightColor() const;
    void LightColor(Windows::UI::Color const& value) const;
    Windows::Foundation::Numerics::float2 HeightMapKernelSize() const;
    void HeightMapKernelSize(Windows::Foundation::Numerics::float2 const& value) const;
    Microsoft::Graphics::Canvas::CanvasImageInterpolation HeightMapInterpolationMode() const;
    void HeightMapInterpolationMode(Microsoft::Graphics::Canvas::CanvasImageInterpolation const& value) const;
    Windows::Foundation::Numerics::float4 LightColorHdr() const;
    void LightColorHdr(Windows::Foundation::Numerics::float4 const& value) const;
    Windows::Graphics::Effects::IGraphicsEffectSource Source() const;
    void Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Effects::IDistantSpecularEffect> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Effects_IDistantSpecularEffect<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Effects_IDpiCompensationEffect
{
    Microsoft::Graphics::Canvas::CanvasImageInterpolation InterpolationMode() const;
    void InterpolationMode(Microsoft::Graphics::Canvas::CanvasImageInterpolation const& value) const;
    Microsoft::Graphics::Canvas::Effects::EffectBorderMode BorderMode() const;
    void BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode const& value) const;
    Windows::Foundation::Numerics::float2 SourceDpi() const;
    void SourceDpi(Windows::Foundation::Numerics::float2 const& value) const;
    Windows::Graphics::Effects::IGraphicsEffectSource Source() const;
    void Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Effects::IDpiCompensationEffect> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Effects_IDpiCompensationEffect<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Effects_IEdgeDetectionEffect
{
    float Amount() const;
    void Amount(float value) const;
    float BlurAmount() const;
    void BlurAmount(float value) const;
    Microsoft::Graphics::Canvas::Effects::EdgeDetectionEffectMode Mode() const;
    void Mode(Microsoft::Graphics::Canvas::Effects::EdgeDetectionEffectMode const& value) const;
    bool OverlayEdges() const;
    void OverlayEdges(bool value) const;
    Microsoft::Graphics::Canvas::CanvasAlphaMode AlphaMode() const;
    void AlphaMode(Microsoft::Graphics::Canvas::CanvasAlphaMode const& value) const;
    Windows::Graphics::Effects::IGraphicsEffectSource Source() const;
    void Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Effects::IEdgeDetectionEffect> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Effects_IEdgeDetectionEffect<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Effects_IEffectTransferTable3D
{
    Microsoft::Graphics::Canvas::CanvasDevice Device() const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Effects::IEffectTransferTable3D> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Effects_IEffectTransferTable3D<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Effects_IEffectTransferTable3DStatics
{
    Microsoft::Graphics::Canvas::Effects::EffectTransferTable3D CreateFromColors(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<Windows::UI::Color const> colors, int32_t sizeB, int32_t sizeG, int32_t sizeR) const;
    Microsoft::Graphics::Canvas::Effects::EffectTransferTable3D CreateFromBytes(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<uint8_t const> bytes, int32_t sizeB, int32_t sizeG, int32_t sizeR, Windows::Graphics::DirectX::DirectXPixelFormat const& format) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Effects::IEffectTransferTable3DStatics> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Effects_IEffectTransferTable3DStatics<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Effects_IEmbossEffect
{
    float Amount() const;
    void Amount(float value) const;
    float Angle() const;
    void Angle(float value) const;
    Windows::Graphics::Effects::IGraphicsEffectSource Source() const;
    void Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Effects::IEmbossEffect> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Effects_IEmbossEffect<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Effects_IExposureEffect
{
    float Exposure() const;
    void Exposure(float value) const;
    Windows::Graphics::Effects::IGraphicsEffectSource Source() const;
    void Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Effects::IExposureEffect> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Effects_IExposureEffect<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Effects_IGammaTransferEffect
{
    float RedAmplitude() const;
    void RedAmplitude(float value) const;
    float RedExponent() const;
    void RedExponent(float value) const;
    float RedOffset() const;
    void RedOffset(float value) const;
    bool RedDisable() const;
    void RedDisable(bool value) const;
    float GreenAmplitude() const;
    void GreenAmplitude(float value) const;
    float GreenExponent() const;
    void GreenExponent(float value) const;
    float GreenOffset() const;
    void GreenOffset(float value) const;
    bool GreenDisable() const;
    void GreenDisable(bool value) const;
    float BlueAmplitude() const;
    void BlueAmplitude(float value) const;
    float BlueExponent() const;
    void BlueExponent(float value) const;
    float BlueOffset() const;
    void BlueOffset(float value) const;
    bool BlueDisable() const;
    void BlueDisable(bool value) const;
    float AlphaAmplitude() const;
    void AlphaAmplitude(float value) const;
    float AlphaExponent() const;
    void AlphaExponent(float value) const;
    float AlphaOffset() const;
    void AlphaOffset(float value) const;
    bool AlphaDisable() const;
    void AlphaDisable(bool value) const;
    bool ClampOutput() const;
    void ClampOutput(bool value) const;
    Windows::Graphics::Effects::IGraphicsEffectSource Source() const;
    void Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Effects::IGammaTransferEffect> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Effects_IGammaTransferEffect<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Effects_IGaussianBlurEffect
{
    float BlurAmount() const;
    void BlurAmount(float value) const;
    Microsoft::Graphics::Canvas::Effects::EffectOptimization Optimization() const;
    void Optimization(Microsoft::Graphics::Canvas::Effects::EffectOptimization const& value) const;
    Microsoft::Graphics::Canvas::Effects::EffectBorderMode BorderMode() const;
    void BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode const& value) const;
    Windows::Graphics::Effects::IGraphicsEffectSource Source() const;
    void Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Effects::IGaussianBlurEffect> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Effects_IGaussianBlurEffect<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Effects_IGrayscaleEffect
{
    Windows::Graphics::Effects::IGraphicsEffectSource Source() const;
    void Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Effects::IGrayscaleEffect> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Effects_IGrayscaleEffect<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Effects_IHighlightsAndShadowsEffect
{
    float Highlights() const;
    void Highlights(float value) const;
    float Shadows() const;
    void Shadows(float value) const;
    float Clarity() const;
    void Clarity(float value) const;
    float MaskBlurAmount() const;
    void MaskBlurAmount(float value) const;
    bool SourceIsLinearGamma() const;
    void SourceIsLinearGamma(bool value) const;
    Windows::Graphics::Effects::IGraphicsEffectSource Source() const;
    void Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Effects::IHighlightsAndShadowsEffect> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Effects_IHighlightsAndShadowsEffect<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Effects_IHueRotationEffect
{
    float Angle() const;
    void Angle(float value) const;
    Windows::Graphics::Effects::IGraphicsEffectSource Source() const;
    void Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Effects::IHueRotationEffect> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Effects_IHueRotationEffect<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Effects_IHueToRgbEffect
{
    Microsoft::Graphics::Canvas::Effects::EffectHueColorSpace SourceColorSpace() const;
    void SourceColorSpace(Microsoft::Graphics::Canvas::Effects::EffectHueColorSpace const& value) const;
    Windows::Graphics::Effects::IGraphicsEffectSource Source() const;
    void Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Effects::IHueToRgbEffect> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Effects_IHueToRgbEffect<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Effects_IInvertEffect
{
    Windows::Graphics::Effects::IGraphicsEffectSource Source() const;
    void Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Effects::IInvertEffect> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Effects_IInvertEffect<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Effects_ILinearTransferEffect
{
    float RedOffset() const;
    void RedOffset(float value) const;
    float RedSlope() const;
    void RedSlope(float value) const;
    bool RedDisable() const;
    void RedDisable(bool value) const;
    float GreenOffset() const;
    void GreenOffset(float value) const;
    float GreenSlope() const;
    void GreenSlope(float value) const;
    bool GreenDisable() const;
    void GreenDisable(bool value) const;
    float BlueOffset() const;
    void BlueOffset(float value) const;
    float BlueSlope() const;
    void BlueSlope(float value) const;
    bool BlueDisable() const;
    void BlueDisable(bool value) const;
    float AlphaOffset() const;
    void AlphaOffset(float value) const;
    float AlphaSlope() const;
    void AlphaSlope(float value) const;
    bool AlphaDisable() const;
    void AlphaDisable(bool value) const;
    bool ClampOutput() const;
    void ClampOutput(bool value) const;
    Windows::Graphics::Effects::IGraphicsEffectSource Source() const;
    void Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Effects::ILinearTransferEffect> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Effects_ILinearTransferEffect<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Effects_ILuminanceToAlphaEffect
{
    Windows::Graphics::Effects::IGraphicsEffectSource Source() const;
    void Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Effects::ILuminanceToAlphaEffect> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Effects_ILuminanceToAlphaEffect<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Effects_IMorphologyEffect
{
    Microsoft::Graphics::Canvas::Effects::MorphologyEffectMode Mode() const;
    void Mode(Microsoft::Graphics::Canvas::Effects::MorphologyEffectMode const& value) const;
    int32_t Width() const;
    void Width(int32_t value) const;
    int32_t Height() const;
    void Height(int32_t value) const;
    Windows::Graphics::Effects::IGraphicsEffectSource Source() const;
    void Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Effects::IMorphologyEffect> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Effects_IMorphologyEffect<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Effects_IOpacityEffect
{
    float Opacity() const;
    void Opacity(float value) const;
    Windows::Graphics::Effects::IGraphicsEffectSource Source() const;
    void Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Effects::IOpacityEffect> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Effects_IOpacityEffect<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Effects_IOpacityEffectStatics
{
    bool IsSupported() const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Effects::IOpacityEffectStatics> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Effects_IOpacityEffectStatics<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Effects_IOpacityMetadataEffect
{
    Windows::Foundation::Rect OpaqueRectangle() const;
    void OpaqueRectangle(Windows::Foundation::Rect const& value) const;
    Windows::Graphics::Effects::IGraphicsEffectSource Source() const;
    void Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Effects::IOpacityMetadataEffect> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Effects_IOpacityMetadataEffect<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Effects_IPixelShaderEffect
{
    Windows::Foundation::Collections::IMap<hstring, Windows::Foundation::IInspectable> Properties() const;
    Windows::Graphics::Effects::IGraphicsEffectSource Source1() const;
    Windows::Graphics::Effects::IGraphicsEffectSource Source2() const;
    Windows::Graphics::Effects::IGraphicsEffectSource Source3() const;
    Windows::Graphics::Effects::IGraphicsEffectSource Source4() const;
    Windows::Graphics::Effects::IGraphicsEffectSource Source5() const;
    Windows::Graphics::Effects::IGraphicsEffectSource Source6() const;
    Windows::Graphics::Effects::IGraphicsEffectSource Source7() const;
    Windows::Graphics::Effects::IGraphicsEffectSource Source8() const;
    void Source1(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const;
    void Source2(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const;
    void Source3(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const;
    void Source4(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const;
    void Source5(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const;
    void Source6(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const;
    void Source7(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const;
    void Source8(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const;
    Microsoft::Graphics::Canvas::Effects::SamplerCoordinateMapping Source1Mapping() const;
    Microsoft::Graphics::Canvas::Effects::SamplerCoordinateMapping Source2Mapping() const;
    Microsoft::Graphics::Canvas::Effects::SamplerCoordinateMapping Source3Mapping() const;
    Microsoft::Graphics::Canvas::Effects::SamplerCoordinateMapping Source4Mapping() const;
    Microsoft::Graphics::Canvas::Effects::SamplerCoordinateMapping Source5Mapping() const;
    Microsoft::Graphics::Canvas::Effects::SamplerCoordinateMapping Source6Mapping() const;
    Microsoft::Graphics::Canvas::Effects::SamplerCoordinateMapping Source7Mapping() const;
    Microsoft::Graphics::Canvas::Effects::SamplerCoordinateMapping Source8Mapping() const;
    void Source1Mapping(Microsoft::Graphics::Canvas::Effects::SamplerCoordinateMapping const& value) const;
    void Source2Mapping(Microsoft::Graphics::Canvas::Effects::SamplerCoordinateMapping const& value) const;
    void Source3Mapping(Microsoft::Graphics::Canvas::Effects::SamplerCoordinateMapping const& value) const;
    void Source4Mapping(Microsoft::Graphics::Canvas::Effects::SamplerCoordinateMapping const& value) const;
    void Source5Mapping(Microsoft::Graphics::Canvas::Effects::SamplerCoordinateMapping const& value) const;
    void Source6Mapping(Microsoft::Graphics::Canvas::Effects::SamplerCoordinateMapping const& value) const;
    void Source7Mapping(Microsoft::Graphics::Canvas::Effects::SamplerCoordinateMapping const& value) const;
    void Source8Mapping(Microsoft::Graphics::Canvas::Effects::SamplerCoordinateMapping const& value) const;
    Microsoft::Graphics::Canvas::Effects::EffectBorderMode Source1BorderMode() const;
    Microsoft::Graphics::Canvas::Effects::EffectBorderMode Source2BorderMode() const;
    Microsoft::Graphics::Canvas::Effects::EffectBorderMode Source3BorderMode() const;
    Microsoft::Graphics::Canvas::Effects::EffectBorderMode Source4BorderMode() const;
    Microsoft::Graphics::Canvas::Effects::EffectBorderMode Source5BorderMode() const;
    Microsoft::Graphics::Canvas::Effects::EffectBorderMode Source6BorderMode() const;
    Microsoft::Graphics::Canvas::Effects::EffectBorderMode Source7BorderMode() const;
    Microsoft::Graphics::Canvas::Effects::EffectBorderMode Source8BorderMode() const;
    void Source1BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode const& value) const;
    void Source2BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode const& value) const;
    void Source3BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode const& value) const;
    void Source4BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode const& value) const;
    void Source5BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode const& value) const;
    void Source6BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode const& value) const;
    void Source7BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode const& value) const;
    void Source8BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode const& value) const;
    int32_t MaxSamplerOffset() const;
    void MaxSamplerOffset(int32_t value) const;
    Microsoft::Graphics::Canvas::CanvasImageInterpolation Source1Interpolation() const;
    Microsoft::Graphics::Canvas::CanvasImageInterpolation Source2Interpolation() const;
    Microsoft::Graphics::Canvas::CanvasImageInterpolation Source3Interpolation() const;
    Microsoft::Graphics::Canvas::CanvasImageInterpolation Source4Interpolation() const;
    Microsoft::Graphics::Canvas::CanvasImageInterpolation Source5Interpolation() const;
    Microsoft::Graphics::Canvas::CanvasImageInterpolation Source6Interpolation() const;
    Microsoft::Graphics::Canvas::CanvasImageInterpolation Source7Interpolation() const;
    Microsoft::Graphics::Canvas::CanvasImageInterpolation Source8Interpolation() const;
    void Source1Interpolation(Microsoft::Graphics::Canvas::CanvasImageInterpolation const& value) const;
    void Source2Interpolation(Microsoft::Graphics::Canvas::CanvasImageInterpolation const& value) const;
    void Source3Interpolation(Microsoft::Graphics::Canvas::CanvasImageInterpolation const& value) const;
    void Source4Interpolation(Microsoft::Graphics::Canvas::CanvasImageInterpolation const& value) const;
    void Source5Interpolation(Microsoft::Graphics::Canvas::CanvasImageInterpolation const& value) const;
    void Source6Interpolation(Microsoft::Graphics::Canvas::CanvasImageInterpolation const& value) const;
    void Source7Interpolation(Microsoft::Graphics::Canvas::CanvasImageInterpolation const& value) const;
    void Source8Interpolation(Microsoft::Graphics::Canvas::CanvasImageInterpolation const& value) const;
    bool IsSupported(Microsoft::Graphics::Canvas::CanvasDevice const& device) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Effects::IPixelShaderEffect> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Effects_IPixelShaderEffect<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Effects_IPixelShaderEffectFactory
{
    Microsoft::Graphics::Canvas::Effects::PixelShaderEffect Create(array_view<uint8_t const> shaderCode) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Effects::IPixelShaderEffectFactory> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Effects_IPixelShaderEffectFactory<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Effects_IPointDiffuseEffect
{
    Windows::Foundation::Numerics::float3 LightPosition() const;
    void LightPosition(Windows::Foundation::Numerics::float3 const& value) const;
    float DiffuseAmount() const;
    void DiffuseAmount(float value) const;
    float HeightMapScale() const;
    void HeightMapScale(float value) const;
    Windows::UI::Color LightColor() const;
    void LightColor(Windows::UI::Color const& value) const;
    Windows::Foundation::Numerics::float2 HeightMapKernelSize() const;
    void HeightMapKernelSize(Windows::Foundation::Numerics::float2 const& value) const;
    Microsoft::Graphics::Canvas::CanvasImageInterpolation HeightMapInterpolationMode() const;
    void HeightMapInterpolationMode(Microsoft::Graphics::Canvas::CanvasImageInterpolation const& value) const;
    Windows::Foundation::Numerics::float4 LightColorHdr() const;
    void LightColorHdr(Windows::Foundation::Numerics::float4 const& value) const;
    Windows::Graphics::Effects::IGraphicsEffectSource Source() const;
    void Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Effects::IPointDiffuseEffect> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Effects_IPointDiffuseEffect<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Effects_IPointSpecularEffect
{
    Windows::Foundation::Numerics::float3 LightPosition() const;
    void LightPosition(Windows::Foundation::Numerics::float3 const& value) const;
    float SpecularExponent() const;
    void SpecularExponent(float value) const;
    float SpecularAmount() const;
    void SpecularAmount(float value) const;
    float HeightMapScale() const;
    void HeightMapScale(float value) const;
    Windows::UI::Color LightColor() const;
    void LightColor(Windows::UI::Color const& value) const;
    Windows::Foundation::Numerics::float2 HeightMapKernelSize() const;
    void HeightMapKernelSize(Windows::Foundation::Numerics::float2 const& value) const;
    Microsoft::Graphics::Canvas::CanvasImageInterpolation HeightMapInterpolationMode() const;
    void HeightMapInterpolationMode(Microsoft::Graphics::Canvas::CanvasImageInterpolation const& value) const;
    Windows::Foundation::Numerics::float4 LightColorHdr() const;
    void LightColorHdr(Windows::Foundation::Numerics::float4 const& value) const;
    Windows::Graphics::Effects::IGraphicsEffectSource Source() const;
    void Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Effects::IPointSpecularEffect> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Effects_IPointSpecularEffect<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Effects_IPosterizeEffect
{
    int32_t RedValueCount() const;
    void RedValueCount(int32_t value) const;
    int32_t GreenValueCount() const;
    void GreenValueCount(int32_t value) const;
    int32_t BlueValueCount() const;
    void BlueValueCount(int32_t value) const;
    Windows::Graphics::Effects::IGraphicsEffectSource Source() const;
    void Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Effects::IPosterizeEffect> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Effects_IPosterizeEffect<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Effects_IPremultiplyEffect
{
    Windows::Graphics::Effects::IGraphicsEffectSource Source() const;
    void Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Effects::IPremultiplyEffect> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Effects_IPremultiplyEffect<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Effects_IRgbToHueEffect
{
    Microsoft::Graphics::Canvas::Effects::EffectHueColorSpace OutputColorSpace() const;
    void OutputColorSpace(Microsoft::Graphics::Canvas::Effects::EffectHueColorSpace const& value) const;
    Windows::Graphics::Effects::IGraphicsEffectSource Source() const;
    void Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Effects::IRgbToHueEffect> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Effects_IRgbToHueEffect<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Effects_ISaturationEffect
{
    float Saturation() const;
    void Saturation(float value) const;
    Windows::Graphics::Effects::IGraphicsEffectSource Source() const;
    void Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Effects::ISaturationEffect> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Effects_ISaturationEffect<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Effects_IScaleEffect
{
    Windows::Foundation::Numerics::float2 Scale() const;
    void Scale(Windows::Foundation::Numerics::float2 const& value) const;
    Windows::Foundation::Numerics::float2 CenterPoint() const;
    void CenterPoint(Windows::Foundation::Numerics::float2 const& value) const;
    Microsoft::Graphics::Canvas::CanvasImageInterpolation InterpolationMode() const;
    void InterpolationMode(Microsoft::Graphics::Canvas::CanvasImageInterpolation const& value) const;
    Microsoft::Graphics::Canvas::Effects::EffectBorderMode BorderMode() const;
    void BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode const& value) const;
    float Sharpness() const;
    void Sharpness(float value) const;
    Windows::Graphics::Effects::IGraphicsEffectSource Source() const;
    void Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Effects::IScaleEffect> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Effects_IScaleEffect<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Effects_ISepiaEffect
{
    float Intensity() const;
    void Intensity(float value) const;
    Microsoft::Graphics::Canvas::CanvasAlphaMode AlphaMode() const;
    void AlphaMode(Microsoft::Graphics::Canvas::CanvasAlphaMode const& value) const;
    Windows::Graphics::Effects::IGraphicsEffectSource Source() const;
    void Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Effects::ISepiaEffect> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Effects_ISepiaEffect<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Effects_IShadowEffect
{
    float BlurAmount() const;
    void BlurAmount(float value) const;
    Windows::UI::Color ShadowColor() const;
    void ShadowColor(Windows::UI::Color const& value) const;
    Microsoft::Graphics::Canvas::Effects::EffectOptimization Optimization() const;
    void Optimization(Microsoft::Graphics::Canvas::Effects::EffectOptimization const& value) const;
    Windows::Foundation::Numerics::float4 ShadowColorHdr() const;
    void ShadowColorHdr(Windows::Foundation::Numerics::float4 const& value) const;
    Windows::Graphics::Effects::IGraphicsEffectSource Source() const;
    void Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Effects::IShadowEffect> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Effects_IShadowEffect<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Effects_ISharpenEffect
{
    float Amount() const;
    void Amount(float value) const;
    float Threshold() const;
    void Threshold(float value) const;
    Windows::Graphics::Effects::IGraphicsEffectSource Source() const;
    void Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Effects::ISharpenEffect> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Effects_ISharpenEffect<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Effects_ISpotDiffuseEffect
{
    Windows::Foundation::Numerics::float3 LightPosition() const;
    void LightPosition(Windows::Foundation::Numerics::float3 const& value) const;
    Windows::Foundation::Numerics::float3 LightTarget() const;
    void LightTarget(Windows::Foundation::Numerics::float3 const& value) const;
    float Focus() const;
    void Focus(float value) const;
    float LimitingConeAngle() const;
    void LimitingConeAngle(float value) const;
    float DiffuseAmount() const;
    void DiffuseAmount(float value) const;
    float HeightMapScale() const;
    void HeightMapScale(float value) const;
    Windows::UI::Color LightColor() const;
    void LightColor(Windows::UI::Color const& value) const;
    Windows::Foundation::Numerics::float2 HeightMapKernelSize() const;
    void HeightMapKernelSize(Windows::Foundation::Numerics::float2 const& value) const;
    Microsoft::Graphics::Canvas::CanvasImageInterpolation HeightMapInterpolationMode() const;
    void HeightMapInterpolationMode(Microsoft::Graphics::Canvas::CanvasImageInterpolation const& value) const;
    Windows::Foundation::Numerics::float4 LightColorHdr() const;
    void LightColorHdr(Windows::Foundation::Numerics::float4 const& value) const;
    Windows::Graphics::Effects::IGraphicsEffectSource Source() const;
    void Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Effects::ISpotDiffuseEffect> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Effects_ISpotDiffuseEffect<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Effects_ISpotSpecularEffect
{
    Windows::Foundation::Numerics::float3 LightPosition() const;
    void LightPosition(Windows::Foundation::Numerics::float3 const& value) const;
    Windows::Foundation::Numerics::float3 LightTarget() const;
    void LightTarget(Windows::Foundation::Numerics::float3 const& value) const;
    float Focus() const;
    void Focus(float value) const;
    float LimitingConeAngle() const;
    void LimitingConeAngle(float value) const;
    float SpecularExponent() const;
    void SpecularExponent(float value) const;
    float SpecularAmount() const;
    void SpecularAmount(float value) const;
    float HeightMapScale() const;
    void HeightMapScale(float value) const;
    Windows::UI::Color LightColor() const;
    void LightColor(Windows::UI::Color const& value) const;
    Windows::Foundation::Numerics::float2 HeightMapKernelSize() const;
    void HeightMapKernelSize(Windows::Foundation::Numerics::float2 const& value) const;
    Microsoft::Graphics::Canvas::CanvasImageInterpolation HeightMapInterpolationMode() const;
    void HeightMapInterpolationMode(Microsoft::Graphics::Canvas::CanvasImageInterpolation const& value) const;
    Windows::Foundation::Numerics::float4 LightColorHdr() const;
    void LightColorHdr(Windows::Foundation::Numerics::float4 const& value) const;
    Windows::Graphics::Effects::IGraphicsEffectSource Source() const;
    void Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Effects::ISpotSpecularEffect> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Effects_ISpotSpecularEffect<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Effects_IStraightenEffect
{
    float Angle() const;
    void Angle(float value) const;
    bool MaintainSize() const;
    void MaintainSize(bool value) const;
    Microsoft::Graphics::Canvas::CanvasImageInterpolation InterpolationMode() const;
    void InterpolationMode(Microsoft::Graphics::Canvas::CanvasImageInterpolation const& value) const;
    Windows::Graphics::Effects::IGraphicsEffectSource Source() const;
    void Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Effects::IStraightenEffect> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Effects_IStraightenEffect<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Effects_ITableTransfer3DEffect
{
    Microsoft::Graphics::Canvas::Effects::EffectTransferTable3D Table() const;
    void Table(Microsoft::Graphics::Canvas::Effects::EffectTransferTable3D const& value) const;
    Microsoft::Graphics::Canvas::CanvasAlphaMode AlphaMode() const;
    void AlphaMode(Microsoft::Graphics::Canvas::CanvasAlphaMode const& value) const;
    Windows::Graphics::Effects::IGraphicsEffectSource Source() const;
    void Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Effects::ITableTransfer3DEffect> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Effects_ITableTransfer3DEffect<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Effects_ITableTransferEffect
{
    com_array<float> RedTable() const;
    void RedTable(array_view<float const> valueElements) const;
    bool RedDisable() const;
    void RedDisable(bool value) const;
    com_array<float> GreenTable() const;
    void GreenTable(array_view<float const> valueElements) const;
    bool GreenDisable() const;
    void GreenDisable(bool value) const;
    com_array<float> BlueTable() const;
    void BlueTable(array_view<float const> valueElements) const;
    bool BlueDisable() const;
    void BlueDisable(bool value) const;
    com_array<float> AlphaTable() const;
    void AlphaTable(array_view<float const> valueElements) const;
    bool AlphaDisable() const;
    void AlphaDisable(bool value) const;
    bool ClampOutput() const;
    void ClampOutput(bool value) const;
    Windows::Graphics::Effects::IGraphicsEffectSource Source() const;
    void Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Effects::ITableTransferEffect> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Effects_ITableTransferEffect<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Effects_ITemperatureAndTintEffect
{
    float Temperature() const;
    void Temperature(float value) const;
    float Tint() const;
    void Tint(float value) const;
    Windows::Graphics::Effects::IGraphicsEffectSource Source() const;
    void Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Effects::ITemperatureAndTintEffect> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Effects_ITemperatureAndTintEffect<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Effects_ITileEffect
{
    Windows::Foundation::Rect SourceRectangle() const;
    void SourceRectangle(Windows::Foundation::Rect const& value) const;
    Windows::Graphics::Effects::IGraphicsEffectSource Source() const;
    void Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Effects::ITileEffect> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Effects_ITileEffect<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Effects_ITintEffect
{
    Windows::UI::Color Color() const;
    void Color(Windows::UI::Color const& value) const;
    bool ClampOutput() const;
    void ClampOutput(bool value) const;
    Windows::Foundation::Numerics::float4 ColorHdr() const;
    void ColorHdr(Windows::Foundation::Numerics::float4 const& value) const;
    Windows::Graphics::Effects::IGraphicsEffectSource Source() const;
    void Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Effects::ITintEffect> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Effects_ITintEffect<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Effects_ITintEffectStatics
{
    bool IsSupported() const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Effects::ITintEffectStatics> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Effects_ITintEffectStatics<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Effects_ITransform2DEffect
{
    Microsoft::Graphics::Canvas::CanvasImageInterpolation InterpolationMode() const;
    void InterpolationMode(Microsoft::Graphics::Canvas::CanvasImageInterpolation const& value) const;
    Microsoft::Graphics::Canvas::Effects::EffectBorderMode BorderMode() const;
    void BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode const& value) const;
    Windows::Foundation::Numerics::float3x2 TransformMatrix() const;
    void TransformMatrix(Windows::Foundation::Numerics::float3x2 const& value) const;
    float Sharpness() const;
    void Sharpness(float value) const;
    Windows::Graphics::Effects::IGraphicsEffectSource Source() const;
    void Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Effects::ITransform2DEffect> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Effects_ITransform2DEffect<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Effects_ITransform3DEffect
{
    Microsoft::Graphics::Canvas::CanvasImageInterpolation InterpolationMode() const;
    void InterpolationMode(Microsoft::Graphics::Canvas::CanvasImageInterpolation const& value) const;
    Microsoft::Graphics::Canvas::Effects::EffectBorderMode BorderMode() const;
    void BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode const& value) const;
    Windows::Foundation::Numerics::float4x4 TransformMatrix() const;
    void TransformMatrix(Windows::Foundation::Numerics::float4x4 const& value) const;
    Windows::Graphics::Effects::IGraphicsEffectSource Source() const;
    void Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Effects::ITransform3DEffect> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Effects_ITransform3DEffect<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Effects_ITurbulenceEffect
{
    Windows::Foundation::Numerics::float2 Offset() const;
    void Offset(Windows::Foundation::Numerics::float2 const& value) const;
    Windows::Foundation::Numerics::float2 Size() const;
    void Size(Windows::Foundation::Numerics::float2 const& value) const;
    Windows::Foundation::Numerics::float2 Frequency() const;
    void Frequency(Windows::Foundation::Numerics::float2 const& value) const;
    int32_t Octaves() const;
    void Octaves(int32_t value) const;
    int32_t Seed() const;
    void Seed(int32_t value) const;
    Microsoft::Graphics::Canvas::Effects::TurbulenceEffectNoise Noise() const;
    void Noise(Microsoft::Graphics::Canvas::Effects::TurbulenceEffectNoise const& value) const;
    bool Tileable() const;
    void Tileable(bool value) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Effects::ITurbulenceEffect> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Effects_ITurbulenceEffect<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Effects_IUnPremultiplyEffect
{
    Windows::Graphics::Effects::IGraphicsEffectSource Source() const;
    void Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Effects::IUnPremultiplyEffect> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Effects_IUnPremultiplyEffect<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Effects_IVignetteEffect
{
    Windows::UI::Color Color() const;
    void Color(Windows::UI::Color const& value) const;
    float Amount() const;
    void Amount(float value) const;
    float Curve() const;
    void Curve(float value) const;
    Windows::Foundation::Numerics::float4 ColorHdr() const;
    void ColorHdr(Windows::Foundation::Numerics::float4 const& value) const;
    Windows::Graphics::Effects::IGraphicsEffectSource Source() const;
    void Source(Windows::Graphics::Effects::IGraphicsEffectSource const& source) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Effects::IVignetteEffect> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Effects_IVignetteEffect<D>; };

template <> struct abi<Microsoft::Graphics::Canvas::Effects::IAlphaMaskEffect>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Source(::IUnknown** source) = 0;
    virtual HRESULT __stdcall put_Source(::IUnknown* source) = 0;
    virtual HRESULT __stdcall get_AlphaMask(::IUnknown** source) = 0;
    virtual HRESULT __stdcall put_AlphaMask(::IUnknown* source) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Effects::IAlphaMaskEffectStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsSupported(bool* value) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Effects::IArithmeticCompositeEffect>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ClampOutput(bool* value) = 0;
    virtual HRESULT __stdcall put_ClampOutput(bool value) = 0;
    virtual HRESULT __stdcall get_MultiplyAmount(float* value) = 0;
    virtual HRESULT __stdcall put_MultiplyAmount(float value) = 0;
    virtual HRESULT __stdcall get_Source1Amount(float* value) = 0;
    virtual HRESULT __stdcall put_Source1Amount(float value) = 0;
    virtual HRESULT __stdcall get_Source2Amount(float* value) = 0;
    virtual HRESULT __stdcall put_Source2Amount(float value) = 0;
    virtual HRESULT __stdcall get_Offset(float* value) = 0;
    virtual HRESULT __stdcall put_Offset(float value) = 0;
    virtual HRESULT __stdcall get_Source1(::IUnknown** source) = 0;
    virtual HRESULT __stdcall put_Source1(::IUnknown* source) = 0;
    virtual HRESULT __stdcall get_Source2(::IUnknown** source) = 0;
    virtual HRESULT __stdcall put_Source2(::IUnknown* source) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Effects::IAtlasEffect>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_SourceRectangle(Windows::Foundation::Rect* value) = 0;
    virtual HRESULT __stdcall put_SourceRectangle(Windows::Foundation::Rect value) = 0;
    virtual HRESULT __stdcall get_PaddingRectangle(Windows::Foundation::Rect* value) = 0;
    virtual HRESULT __stdcall put_PaddingRectangle(Windows::Foundation::Rect value) = 0;
    virtual HRESULT __stdcall get_Source(::IUnknown** source) = 0;
    virtual HRESULT __stdcall put_Source(::IUnknown* source) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Effects::IBlendEffect>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Mode(Microsoft::Graphics::Canvas::Effects::BlendEffectMode* value) = 0;
    virtual HRESULT __stdcall put_Mode(Microsoft::Graphics::Canvas::Effects::BlendEffectMode value) = 0;
    virtual HRESULT __stdcall get_Background(::IUnknown** source) = 0;
    virtual HRESULT __stdcall put_Background(::IUnknown* source) = 0;
    virtual HRESULT __stdcall get_Foreground(::IUnknown** source) = 0;
    virtual HRESULT __stdcall put_Foreground(::IUnknown* source) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Effects::IBorderEffect>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ExtendX(Microsoft::Graphics::Canvas::CanvasEdgeBehavior* value) = 0;
    virtual HRESULT __stdcall put_ExtendX(Microsoft::Graphics::Canvas::CanvasEdgeBehavior value) = 0;
    virtual HRESULT __stdcall get_ExtendY(Microsoft::Graphics::Canvas::CanvasEdgeBehavior* value) = 0;
    virtual HRESULT __stdcall put_ExtendY(Microsoft::Graphics::Canvas::CanvasEdgeBehavior value) = 0;
    virtual HRESULT __stdcall get_Source(::IUnknown** source) = 0;
    virtual HRESULT __stdcall put_Source(::IUnknown* source) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Effects::IBrightnessEffect>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_WhitePoint(Windows::Foundation::Numerics::float2* value) = 0;
    virtual HRESULT __stdcall put_WhitePoint(Windows::Foundation::Numerics::float2 value) = 0;
    virtual HRESULT __stdcall get_BlackPoint(Windows::Foundation::Numerics::float2* value) = 0;
    virtual HRESULT __stdcall put_BlackPoint(Windows::Foundation::Numerics::float2 value) = 0;
    virtual HRESULT __stdcall get_Source(::IUnknown** source) = 0;
    virtual HRESULT __stdcall put_Source(::IUnknown* source) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Effects::ICanvasEffect>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_CacheOutput(bool* value) = 0;
    virtual HRESULT __stdcall put_CacheOutput(bool value) = 0;
    virtual HRESULT __stdcall get_BufferPrecision(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_BufferPrecision(::IUnknown* value) = 0;
    virtual HRESULT __stdcall InvalidateSourceRectangle(::IUnknown* resourceCreator, uint32_t sourceIndex, Windows::Foundation::Rect invalidRectangle) = 0;
    virtual HRESULT __stdcall GetInvalidRectangles(::IUnknown* resourceCreator, uint32_t* __valueElementsSize, Windows::Foundation::Rect** valueElements) = 0;
    virtual HRESULT __stdcall GetRequiredSourceRectangle(::IUnknown* resourceCreator, Windows::Foundation::Rect outputRectangle, ::IUnknown* sourceEffect, uint32_t sourceIndex, Windows::Foundation::Rect sourceBounds, Windows::Foundation::Rect* value) = 0;
    virtual HRESULT __stdcall GetRequiredSourceRectangles(::IUnknown* resourceCreator, Windows::Foundation::Rect outputRectangle, uint32_t __sourceEffectsSize, ::IUnknown** sourceEffects, uint32_t __sourceIndicesSize, uint32_t* sourceIndices, uint32_t __sourceBoundsSize, Windows::Foundation::Rect* sourceBounds, uint32_t* __valueElementsSize, Windows::Foundation::Rect** valueElements) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Effects::IChromaKeyEffect>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Color(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall put_Color(struct_of<4> value) = 0;
    virtual HRESULT __stdcall get_Tolerance(float* value) = 0;
    virtual HRESULT __stdcall put_Tolerance(float value) = 0;
    virtual HRESULT __stdcall get_InvertAlpha(bool* value) = 0;
    virtual HRESULT __stdcall put_InvertAlpha(bool value) = 0;
    virtual HRESULT __stdcall get_Feather(bool* value) = 0;
    virtual HRESULT __stdcall put_Feather(bool value) = 0;
    virtual HRESULT __stdcall get_ColorHdr(Windows::Foundation::Numerics::float4* value) = 0;
    virtual HRESULT __stdcall put_ColorHdr(Windows::Foundation::Numerics::float4 value) = 0;
    virtual HRESULT __stdcall get_Source(::IUnknown** source) = 0;
    virtual HRESULT __stdcall put_Source(::IUnknown* source) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Effects::IColorManagementEffect>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_SourceColorProfile(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_SourceColorProfile(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_SourceRenderingIntent(Microsoft::Graphics::Canvas::Effects::ColorManagementRenderingIntent* value) = 0;
    virtual HRESULT __stdcall put_SourceRenderingIntent(Microsoft::Graphics::Canvas::Effects::ColorManagementRenderingIntent value) = 0;
    virtual HRESULT __stdcall get_OutputColorProfile(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_OutputColorProfile(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_OutputRenderingIntent(Microsoft::Graphics::Canvas::Effects::ColorManagementRenderingIntent* value) = 0;
    virtual HRESULT __stdcall put_OutputRenderingIntent(Microsoft::Graphics::Canvas::Effects::ColorManagementRenderingIntent value) = 0;
    virtual HRESULT __stdcall get_AlphaMode(Microsoft::Graphics::Canvas::CanvasAlphaMode* value) = 0;
    virtual HRESULT __stdcall put_AlphaMode(Microsoft::Graphics::Canvas::CanvasAlphaMode value) = 0;
    virtual HRESULT __stdcall get_Quality(Microsoft::Graphics::Canvas::Effects::ColorManagementEffectQuality* value) = 0;
    virtual HRESULT __stdcall put_Quality(Microsoft::Graphics::Canvas::Effects::ColorManagementEffectQuality value) = 0;
    virtual HRESULT __stdcall get_Source(::IUnknown** source) = 0;
    virtual HRESULT __stdcall put_Source(::IUnknown* source) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Effects::IColorManagementEffectStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall IsBestQualitySupported(::IUnknown* device, bool* result) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Effects::IColorManagementProfile>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ColorSpace(Microsoft::Graphics::Canvas::CanvasColorSpace* value) = 0;
    virtual HRESULT __stdcall get_IccProfile(uint32_t* __valueElementsSize, uint8_t** valueElements) = 0;
    virtual HRESULT __stdcall get_Type(Microsoft::Graphics::Canvas::Effects::ColorManagementProfileType* value) = 0;
    virtual HRESULT __stdcall get_SimpleProfile(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ExtendedColorSpace(Microsoft::Graphics::Canvas::Effects::ExtendedColorSpace* value) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Effects::IColorManagementProfileFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(Microsoft::Graphics::Canvas::CanvasColorSpace colorSpace, ::IUnknown** result) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Effects::IColorManagementProfileStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateCustom(uint32_t __iccProfileSize, uint8_t* iccProfile, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateSimple(struct_of<36> simpleProfile, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateExtended(Microsoft::Graphics::Canvas::Effects::ExtendedColorSpace colorSpace, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall IsSupported(Microsoft::Graphics::Canvas::Effects::ColorManagementProfileType type, ::IUnknown* device, bool* result) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Effects::IColorMatrixEffect>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ColorMatrix(struct_of<80>* value) = 0;
    virtual HRESULT __stdcall put_ColorMatrix(struct_of<80> value) = 0;
    virtual HRESULT __stdcall get_AlphaMode(Microsoft::Graphics::Canvas::CanvasAlphaMode* value) = 0;
    virtual HRESULT __stdcall put_AlphaMode(Microsoft::Graphics::Canvas::CanvasAlphaMode value) = 0;
    virtual HRESULT __stdcall get_ClampOutput(bool* value) = 0;
    virtual HRESULT __stdcall put_ClampOutput(bool value) = 0;
    virtual HRESULT __stdcall get_Source(::IUnknown** source) = 0;
    virtual HRESULT __stdcall put_Source(::IUnknown* source) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Effects::IColorSourceEffect>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Color(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall put_Color(struct_of<4> value) = 0;
    virtual HRESULT __stdcall get_ColorHdr(Windows::Foundation::Numerics::float4* value) = 0;
    virtual HRESULT __stdcall put_ColorHdr(Windows::Foundation::Numerics::float4 value) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Effects::ICompositeEffect>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Mode(Microsoft::Graphics::Canvas::CanvasComposite* value) = 0;
    virtual HRESULT __stdcall put_Mode(Microsoft::Graphics::Canvas::CanvasComposite value) = 0;
    virtual HRESULT __stdcall get_Sources(::IUnknown** value) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Effects::IContrastEffect>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Contrast(float* value) = 0;
    virtual HRESULT __stdcall put_Contrast(float value) = 0;
    virtual HRESULT __stdcall get_ClampSource(bool* value) = 0;
    virtual HRESULT __stdcall put_ClampSource(bool value) = 0;
    virtual HRESULT __stdcall get_Source(::IUnknown** source) = 0;
    virtual HRESULT __stdcall put_Source(::IUnknown* source) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Effects::IConvolveMatrixEffect>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_KernelScale(Windows::Foundation::Numerics::float2* value) = 0;
    virtual HRESULT __stdcall put_KernelScale(Windows::Foundation::Numerics::float2 value) = 0;
    virtual HRESULT __stdcall get_InterpolationMode(Microsoft::Graphics::Canvas::CanvasImageInterpolation* value) = 0;
    virtual HRESULT __stdcall put_InterpolationMode(Microsoft::Graphics::Canvas::CanvasImageInterpolation value) = 0;
    virtual HRESULT __stdcall get_KernelWidth(int32_t* value) = 0;
    virtual HRESULT __stdcall put_KernelWidth(int32_t value) = 0;
    virtual HRESULT __stdcall get_KernelHeight(int32_t* value) = 0;
    virtual HRESULT __stdcall put_KernelHeight(int32_t value) = 0;
    virtual HRESULT __stdcall get_KernelMatrix(uint32_t* __valueElementsSize, float** valueElements) = 0;
    virtual HRESULT __stdcall put_KernelMatrix(uint32_t __valueElementsSize, float* valueElements) = 0;
    virtual HRESULT __stdcall get_Divisor(float* value) = 0;
    virtual HRESULT __stdcall put_Divisor(float value) = 0;
    virtual HRESULT __stdcall get_Offset(float* value) = 0;
    virtual HRESULT __stdcall put_Offset(float value) = 0;
    virtual HRESULT __stdcall get_KernelOffset(Windows::Foundation::Numerics::float2* value) = 0;
    virtual HRESULT __stdcall put_KernelOffset(Windows::Foundation::Numerics::float2 value) = 0;
    virtual HRESULT __stdcall get_PreserveAlpha(bool* value) = 0;
    virtual HRESULT __stdcall put_PreserveAlpha(bool value) = 0;
    virtual HRESULT __stdcall get_BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode* value) = 0;
    virtual HRESULT __stdcall put_BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode value) = 0;
    virtual HRESULT __stdcall get_ClampOutput(bool* value) = 0;
    virtual HRESULT __stdcall put_ClampOutput(bool value) = 0;
    virtual HRESULT __stdcall get_Source(::IUnknown** source) = 0;
    virtual HRESULT __stdcall put_Source(::IUnknown* source) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Effects::ICropEffect>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_SourceRectangle(Windows::Foundation::Rect* value) = 0;
    virtual HRESULT __stdcall put_SourceRectangle(Windows::Foundation::Rect value) = 0;
    virtual HRESULT __stdcall get_BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode* value) = 0;
    virtual HRESULT __stdcall put_BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode value) = 0;
    virtual HRESULT __stdcall get_Source(::IUnknown** source) = 0;
    virtual HRESULT __stdcall put_Source(::IUnknown* source) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Effects::ICrossFadeEffect>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_CrossFade(float* value) = 0;
    virtual HRESULT __stdcall put_CrossFade(float value) = 0;
    virtual HRESULT __stdcall get_Source2(::IUnknown** source) = 0;
    virtual HRESULT __stdcall put_Source2(::IUnknown* source) = 0;
    virtual HRESULT __stdcall get_Source1(::IUnknown** source) = 0;
    virtual HRESULT __stdcall put_Source1(::IUnknown* source) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Effects::ICrossFadeEffectStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsSupported(bool* value) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Effects::IDirectionalBlurEffect>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_BlurAmount(float* value) = 0;
    virtual HRESULT __stdcall put_BlurAmount(float value) = 0;
    virtual HRESULT __stdcall get_Angle(float* value) = 0;
    virtual HRESULT __stdcall put_Angle(float value) = 0;
    virtual HRESULT __stdcall get_Optimization(Microsoft::Graphics::Canvas::Effects::EffectOptimization* value) = 0;
    virtual HRESULT __stdcall put_Optimization(Microsoft::Graphics::Canvas::Effects::EffectOptimization value) = 0;
    virtual HRESULT __stdcall get_BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode* value) = 0;
    virtual HRESULT __stdcall put_BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode value) = 0;
    virtual HRESULT __stdcall get_Source(::IUnknown** source) = 0;
    virtual HRESULT __stdcall put_Source(::IUnknown* source) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Effects::IDiscreteTransferEffect>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_RedTable(uint32_t* __valueElementsSize, float** valueElements) = 0;
    virtual HRESULT __stdcall put_RedTable(uint32_t __valueElementsSize, float* valueElements) = 0;
    virtual HRESULT __stdcall get_RedDisable(bool* value) = 0;
    virtual HRESULT __stdcall put_RedDisable(bool value) = 0;
    virtual HRESULT __stdcall get_GreenTable(uint32_t* __valueElementsSize, float** valueElements) = 0;
    virtual HRESULT __stdcall put_GreenTable(uint32_t __valueElementsSize, float* valueElements) = 0;
    virtual HRESULT __stdcall get_GreenDisable(bool* value) = 0;
    virtual HRESULT __stdcall put_GreenDisable(bool value) = 0;
    virtual HRESULT __stdcall get_BlueTable(uint32_t* __valueElementsSize, float** valueElements) = 0;
    virtual HRESULT __stdcall put_BlueTable(uint32_t __valueElementsSize, float* valueElements) = 0;
    virtual HRESULT __stdcall get_BlueDisable(bool* value) = 0;
    virtual HRESULT __stdcall put_BlueDisable(bool value) = 0;
    virtual HRESULT __stdcall get_AlphaTable(uint32_t* __valueElementsSize, float** valueElements) = 0;
    virtual HRESULT __stdcall put_AlphaTable(uint32_t __valueElementsSize, float* valueElements) = 0;
    virtual HRESULT __stdcall get_AlphaDisable(bool* value) = 0;
    virtual HRESULT __stdcall put_AlphaDisable(bool value) = 0;
    virtual HRESULT __stdcall get_ClampOutput(bool* value) = 0;
    virtual HRESULT __stdcall put_ClampOutput(bool value) = 0;
    virtual HRESULT __stdcall get_Source(::IUnknown** source) = 0;
    virtual HRESULT __stdcall put_Source(::IUnknown* source) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Effects::IDisplacementMapEffect>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Amount(float* value) = 0;
    virtual HRESULT __stdcall put_Amount(float value) = 0;
    virtual HRESULT __stdcall get_XChannelSelect(Microsoft::Graphics::Canvas::Effects::EffectChannelSelect* value) = 0;
    virtual HRESULT __stdcall put_XChannelSelect(Microsoft::Graphics::Canvas::Effects::EffectChannelSelect value) = 0;
    virtual HRESULT __stdcall get_YChannelSelect(Microsoft::Graphics::Canvas::Effects::EffectChannelSelect* value) = 0;
    virtual HRESULT __stdcall put_YChannelSelect(Microsoft::Graphics::Canvas::Effects::EffectChannelSelect value) = 0;
    virtual HRESULT __stdcall get_Source(::IUnknown** source) = 0;
    virtual HRESULT __stdcall put_Source(::IUnknown* source) = 0;
    virtual HRESULT __stdcall get_Displacement(::IUnknown** source) = 0;
    virtual HRESULT __stdcall put_Displacement(::IUnknown* source) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Effects::IDistantDiffuseEffect>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Azimuth(float* value) = 0;
    virtual HRESULT __stdcall put_Azimuth(float value) = 0;
    virtual HRESULT __stdcall get_Elevation(float* value) = 0;
    virtual HRESULT __stdcall put_Elevation(float value) = 0;
    virtual HRESULT __stdcall get_DiffuseAmount(float* value) = 0;
    virtual HRESULT __stdcall put_DiffuseAmount(float value) = 0;
    virtual HRESULT __stdcall get_HeightMapScale(float* value) = 0;
    virtual HRESULT __stdcall put_HeightMapScale(float value) = 0;
    virtual HRESULT __stdcall get_LightColor(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall put_LightColor(struct_of<4> value) = 0;
    virtual HRESULT __stdcall get_HeightMapKernelSize(Windows::Foundation::Numerics::float2* value) = 0;
    virtual HRESULT __stdcall put_HeightMapKernelSize(Windows::Foundation::Numerics::float2 value) = 0;
    virtual HRESULT __stdcall get_HeightMapInterpolationMode(Microsoft::Graphics::Canvas::CanvasImageInterpolation* value) = 0;
    virtual HRESULT __stdcall put_HeightMapInterpolationMode(Microsoft::Graphics::Canvas::CanvasImageInterpolation value) = 0;
    virtual HRESULT __stdcall get_LightColorHdr(Windows::Foundation::Numerics::float4* value) = 0;
    virtual HRESULT __stdcall put_LightColorHdr(Windows::Foundation::Numerics::float4 value) = 0;
    virtual HRESULT __stdcall get_Source(::IUnknown** source) = 0;
    virtual HRESULT __stdcall put_Source(::IUnknown* source) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Effects::IDistantSpecularEffect>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Azimuth(float* value) = 0;
    virtual HRESULT __stdcall put_Azimuth(float value) = 0;
    virtual HRESULT __stdcall get_Elevation(float* value) = 0;
    virtual HRESULT __stdcall put_Elevation(float value) = 0;
    virtual HRESULT __stdcall get_SpecularExponent(float* value) = 0;
    virtual HRESULT __stdcall put_SpecularExponent(float value) = 0;
    virtual HRESULT __stdcall get_SpecularAmount(float* value) = 0;
    virtual HRESULT __stdcall put_SpecularAmount(float value) = 0;
    virtual HRESULT __stdcall get_HeightMapScale(float* value) = 0;
    virtual HRESULT __stdcall put_HeightMapScale(float value) = 0;
    virtual HRESULT __stdcall get_LightColor(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall put_LightColor(struct_of<4> value) = 0;
    virtual HRESULT __stdcall get_HeightMapKernelSize(Windows::Foundation::Numerics::float2* value) = 0;
    virtual HRESULT __stdcall put_HeightMapKernelSize(Windows::Foundation::Numerics::float2 value) = 0;
    virtual HRESULT __stdcall get_HeightMapInterpolationMode(Microsoft::Graphics::Canvas::CanvasImageInterpolation* value) = 0;
    virtual HRESULT __stdcall put_HeightMapInterpolationMode(Microsoft::Graphics::Canvas::CanvasImageInterpolation value) = 0;
    virtual HRESULT __stdcall get_LightColorHdr(Windows::Foundation::Numerics::float4* value) = 0;
    virtual HRESULT __stdcall put_LightColorHdr(Windows::Foundation::Numerics::float4 value) = 0;
    virtual HRESULT __stdcall get_Source(::IUnknown** source) = 0;
    virtual HRESULT __stdcall put_Source(::IUnknown* source) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Effects::IDpiCompensationEffect>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_InterpolationMode(Microsoft::Graphics::Canvas::CanvasImageInterpolation* value) = 0;
    virtual HRESULT __stdcall put_InterpolationMode(Microsoft::Graphics::Canvas::CanvasImageInterpolation value) = 0;
    virtual HRESULT __stdcall get_BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode* value) = 0;
    virtual HRESULT __stdcall put_BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode value) = 0;
    virtual HRESULT __stdcall get_SourceDpi(Windows::Foundation::Numerics::float2* value) = 0;
    virtual HRESULT __stdcall put_SourceDpi(Windows::Foundation::Numerics::float2 value) = 0;
    virtual HRESULT __stdcall get_Source(::IUnknown** source) = 0;
    virtual HRESULT __stdcall put_Source(::IUnknown* source) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Effects::IEdgeDetectionEffect>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Amount(float* value) = 0;
    virtual HRESULT __stdcall put_Amount(float value) = 0;
    virtual HRESULT __stdcall get_BlurAmount(float* value) = 0;
    virtual HRESULT __stdcall put_BlurAmount(float value) = 0;
    virtual HRESULT __stdcall get_Mode(Microsoft::Graphics::Canvas::Effects::EdgeDetectionEffectMode* value) = 0;
    virtual HRESULT __stdcall put_Mode(Microsoft::Graphics::Canvas::Effects::EdgeDetectionEffectMode value) = 0;
    virtual HRESULT __stdcall get_OverlayEdges(bool* value) = 0;
    virtual HRESULT __stdcall put_OverlayEdges(bool value) = 0;
    virtual HRESULT __stdcall get_AlphaMode(Microsoft::Graphics::Canvas::CanvasAlphaMode* value) = 0;
    virtual HRESULT __stdcall put_AlphaMode(Microsoft::Graphics::Canvas::CanvasAlphaMode value) = 0;
    virtual HRESULT __stdcall get_Source(::IUnknown** source) = 0;
    virtual HRESULT __stdcall put_Source(::IUnknown* source) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Effects::IEffectTransferTable3D>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Device(::IUnknown** value) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Effects::IEffectTransferTable3DStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateFromColors(::IUnknown* resourceCreator, uint32_t __colorsSize, struct_of<4>* colors, int32_t sizeB, int32_t sizeG, int32_t sizeR, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateFromBytes(::IUnknown* resourceCreator, uint32_t __bytesSize, uint8_t* bytes, int32_t sizeB, int32_t sizeG, int32_t sizeR, Windows::Graphics::DirectX::DirectXPixelFormat format, ::IUnknown** result) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Effects::IEmbossEffect>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Amount(float* value) = 0;
    virtual HRESULT __stdcall put_Amount(float value) = 0;
    virtual HRESULT __stdcall get_Angle(float* value) = 0;
    virtual HRESULT __stdcall put_Angle(float value) = 0;
    virtual HRESULT __stdcall get_Source(::IUnknown** source) = 0;
    virtual HRESULT __stdcall put_Source(::IUnknown* source) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Effects::IExposureEffect>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Exposure(float* value) = 0;
    virtual HRESULT __stdcall put_Exposure(float value) = 0;
    virtual HRESULT __stdcall get_Source(::IUnknown** source) = 0;
    virtual HRESULT __stdcall put_Source(::IUnknown* source) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Effects::IGammaTransferEffect>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_RedAmplitude(float* value) = 0;
    virtual HRESULT __stdcall put_RedAmplitude(float value) = 0;
    virtual HRESULT __stdcall get_RedExponent(float* value) = 0;
    virtual HRESULT __stdcall put_RedExponent(float value) = 0;
    virtual HRESULT __stdcall get_RedOffset(float* value) = 0;
    virtual HRESULT __stdcall put_RedOffset(float value) = 0;
    virtual HRESULT __stdcall get_RedDisable(bool* value) = 0;
    virtual HRESULT __stdcall put_RedDisable(bool value) = 0;
    virtual HRESULT __stdcall get_GreenAmplitude(float* value) = 0;
    virtual HRESULT __stdcall put_GreenAmplitude(float value) = 0;
    virtual HRESULT __stdcall get_GreenExponent(float* value) = 0;
    virtual HRESULT __stdcall put_GreenExponent(float value) = 0;
    virtual HRESULT __stdcall get_GreenOffset(float* value) = 0;
    virtual HRESULT __stdcall put_GreenOffset(float value) = 0;
    virtual HRESULT __stdcall get_GreenDisable(bool* value) = 0;
    virtual HRESULT __stdcall put_GreenDisable(bool value) = 0;
    virtual HRESULT __stdcall get_BlueAmplitude(float* value) = 0;
    virtual HRESULT __stdcall put_BlueAmplitude(float value) = 0;
    virtual HRESULT __stdcall get_BlueExponent(float* value) = 0;
    virtual HRESULT __stdcall put_BlueExponent(float value) = 0;
    virtual HRESULT __stdcall get_BlueOffset(float* value) = 0;
    virtual HRESULT __stdcall put_BlueOffset(float value) = 0;
    virtual HRESULT __stdcall get_BlueDisable(bool* value) = 0;
    virtual HRESULT __stdcall put_BlueDisable(bool value) = 0;
    virtual HRESULT __stdcall get_AlphaAmplitude(float* value) = 0;
    virtual HRESULT __stdcall put_AlphaAmplitude(float value) = 0;
    virtual HRESULT __stdcall get_AlphaExponent(float* value) = 0;
    virtual HRESULT __stdcall put_AlphaExponent(float value) = 0;
    virtual HRESULT __stdcall get_AlphaOffset(float* value) = 0;
    virtual HRESULT __stdcall put_AlphaOffset(float value) = 0;
    virtual HRESULT __stdcall get_AlphaDisable(bool* value) = 0;
    virtual HRESULT __stdcall put_AlphaDisable(bool value) = 0;
    virtual HRESULT __stdcall get_ClampOutput(bool* value) = 0;
    virtual HRESULT __stdcall put_ClampOutput(bool value) = 0;
    virtual HRESULT __stdcall get_Source(::IUnknown** source) = 0;
    virtual HRESULT __stdcall put_Source(::IUnknown* source) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Effects::IGaussianBlurEffect>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_BlurAmount(float* value) = 0;
    virtual HRESULT __stdcall put_BlurAmount(float value) = 0;
    virtual HRESULT __stdcall get_Optimization(Microsoft::Graphics::Canvas::Effects::EffectOptimization* value) = 0;
    virtual HRESULT __stdcall put_Optimization(Microsoft::Graphics::Canvas::Effects::EffectOptimization value) = 0;
    virtual HRESULT __stdcall get_BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode* value) = 0;
    virtual HRESULT __stdcall put_BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode value) = 0;
    virtual HRESULT __stdcall get_Source(::IUnknown** source) = 0;
    virtual HRESULT __stdcall put_Source(::IUnknown* source) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Effects::IGrayscaleEffect>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Source(::IUnknown** source) = 0;
    virtual HRESULT __stdcall put_Source(::IUnknown* source) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Effects::IHighlightsAndShadowsEffect>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Highlights(float* value) = 0;
    virtual HRESULT __stdcall put_Highlights(float value) = 0;
    virtual HRESULT __stdcall get_Shadows(float* value) = 0;
    virtual HRESULT __stdcall put_Shadows(float value) = 0;
    virtual HRESULT __stdcall get_Clarity(float* value) = 0;
    virtual HRESULT __stdcall put_Clarity(float value) = 0;
    virtual HRESULT __stdcall get_MaskBlurAmount(float* value) = 0;
    virtual HRESULT __stdcall put_MaskBlurAmount(float value) = 0;
    virtual HRESULT __stdcall get_SourceIsLinearGamma(bool* value) = 0;
    virtual HRESULT __stdcall put_SourceIsLinearGamma(bool value) = 0;
    virtual HRESULT __stdcall get_Source(::IUnknown** source) = 0;
    virtual HRESULT __stdcall put_Source(::IUnknown* source) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Effects::IHueRotationEffect>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Angle(float* value) = 0;
    virtual HRESULT __stdcall put_Angle(float value) = 0;
    virtual HRESULT __stdcall get_Source(::IUnknown** source) = 0;
    virtual HRESULT __stdcall put_Source(::IUnknown* source) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Effects::IHueToRgbEffect>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_SourceColorSpace(Microsoft::Graphics::Canvas::Effects::EffectHueColorSpace* value) = 0;
    virtual HRESULT __stdcall put_SourceColorSpace(Microsoft::Graphics::Canvas::Effects::EffectHueColorSpace value) = 0;
    virtual HRESULT __stdcall get_Source(::IUnknown** source) = 0;
    virtual HRESULT __stdcall put_Source(::IUnknown* source) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Effects::IInvertEffect>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Source(::IUnknown** source) = 0;
    virtual HRESULT __stdcall put_Source(::IUnknown* source) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Effects::ILinearTransferEffect>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_RedOffset(float* value) = 0;
    virtual HRESULT __stdcall put_RedOffset(float value) = 0;
    virtual HRESULT __stdcall get_RedSlope(float* value) = 0;
    virtual HRESULT __stdcall put_RedSlope(float value) = 0;
    virtual HRESULT __stdcall get_RedDisable(bool* value) = 0;
    virtual HRESULT __stdcall put_RedDisable(bool value) = 0;
    virtual HRESULT __stdcall get_GreenOffset(float* value) = 0;
    virtual HRESULT __stdcall put_GreenOffset(float value) = 0;
    virtual HRESULT __stdcall get_GreenSlope(float* value) = 0;
    virtual HRESULT __stdcall put_GreenSlope(float value) = 0;
    virtual HRESULT __stdcall get_GreenDisable(bool* value) = 0;
    virtual HRESULT __stdcall put_GreenDisable(bool value) = 0;
    virtual HRESULT __stdcall get_BlueOffset(float* value) = 0;
    virtual HRESULT __stdcall put_BlueOffset(float value) = 0;
    virtual HRESULT __stdcall get_BlueSlope(float* value) = 0;
    virtual HRESULT __stdcall put_BlueSlope(float value) = 0;
    virtual HRESULT __stdcall get_BlueDisable(bool* value) = 0;
    virtual HRESULT __stdcall put_BlueDisable(bool value) = 0;
    virtual HRESULT __stdcall get_AlphaOffset(float* value) = 0;
    virtual HRESULT __stdcall put_AlphaOffset(float value) = 0;
    virtual HRESULT __stdcall get_AlphaSlope(float* value) = 0;
    virtual HRESULT __stdcall put_AlphaSlope(float value) = 0;
    virtual HRESULT __stdcall get_AlphaDisable(bool* value) = 0;
    virtual HRESULT __stdcall put_AlphaDisable(bool value) = 0;
    virtual HRESULT __stdcall get_ClampOutput(bool* value) = 0;
    virtual HRESULT __stdcall put_ClampOutput(bool value) = 0;
    virtual HRESULT __stdcall get_Source(::IUnknown** source) = 0;
    virtual HRESULT __stdcall put_Source(::IUnknown* source) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Effects::ILuminanceToAlphaEffect>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Source(::IUnknown** source) = 0;
    virtual HRESULT __stdcall put_Source(::IUnknown* source) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Effects::IMorphologyEffect>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Mode(Microsoft::Graphics::Canvas::Effects::MorphologyEffectMode* value) = 0;
    virtual HRESULT __stdcall put_Mode(Microsoft::Graphics::Canvas::Effects::MorphologyEffectMode value) = 0;
    virtual HRESULT __stdcall get_Width(int32_t* value) = 0;
    virtual HRESULT __stdcall put_Width(int32_t value) = 0;
    virtual HRESULT __stdcall get_Height(int32_t* value) = 0;
    virtual HRESULT __stdcall put_Height(int32_t value) = 0;
    virtual HRESULT __stdcall get_Source(::IUnknown** source) = 0;
    virtual HRESULT __stdcall put_Source(::IUnknown* source) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Effects::IOpacityEffect>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Opacity(float* value) = 0;
    virtual HRESULT __stdcall put_Opacity(float value) = 0;
    virtual HRESULT __stdcall get_Source(::IUnknown** source) = 0;
    virtual HRESULT __stdcall put_Source(::IUnknown* source) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Effects::IOpacityEffectStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsSupported(bool* value) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Effects::IOpacityMetadataEffect>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_OpaqueRectangle(Windows::Foundation::Rect* value) = 0;
    virtual HRESULT __stdcall put_OpaqueRectangle(Windows::Foundation::Rect value) = 0;
    virtual HRESULT __stdcall get_Source(::IUnknown** source) = 0;
    virtual HRESULT __stdcall put_Source(::IUnknown* source) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Effects::IPixelShaderEffect>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Properties(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Source1(::IUnknown** source) = 0;
    virtual HRESULT __stdcall get_Source2(::IUnknown** source) = 0;
    virtual HRESULT __stdcall get_Source3(::IUnknown** source) = 0;
    virtual HRESULT __stdcall get_Source4(::IUnknown** source) = 0;
    virtual HRESULT __stdcall get_Source5(::IUnknown** source) = 0;
    virtual HRESULT __stdcall get_Source6(::IUnknown** source) = 0;
    virtual HRESULT __stdcall get_Source7(::IUnknown** source) = 0;
    virtual HRESULT __stdcall get_Source8(::IUnknown** source) = 0;
    virtual HRESULT __stdcall put_Source1(::IUnknown* source) = 0;
    virtual HRESULT __stdcall put_Source2(::IUnknown* source) = 0;
    virtual HRESULT __stdcall put_Source3(::IUnknown* source) = 0;
    virtual HRESULT __stdcall put_Source4(::IUnknown* source) = 0;
    virtual HRESULT __stdcall put_Source5(::IUnknown* source) = 0;
    virtual HRESULT __stdcall put_Source6(::IUnknown* source) = 0;
    virtual HRESULT __stdcall put_Source7(::IUnknown* source) = 0;
    virtual HRESULT __stdcall put_Source8(::IUnknown* source) = 0;
    virtual HRESULT __stdcall get_Source1Mapping(Microsoft::Graphics::Canvas::Effects::SamplerCoordinateMapping* value) = 0;
    virtual HRESULT __stdcall get_Source2Mapping(Microsoft::Graphics::Canvas::Effects::SamplerCoordinateMapping* value) = 0;
    virtual HRESULT __stdcall get_Source3Mapping(Microsoft::Graphics::Canvas::Effects::SamplerCoordinateMapping* value) = 0;
    virtual HRESULT __stdcall get_Source4Mapping(Microsoft::Graphics::Canvas::Effects::SamplerCoordinateMapping* value) = 0;
    virtual HRESULT __stdcall get_Source5Mapping(Microsoft::Graphics::Canvas::Effects::SamplerCoordinateMapping* value) = 0;
    virtual HRESULT __stdcall get_Source6Mapping(Microsoft::Graphics::Canvas::Effects::SamplerCoordinateMapping* value) = 0;
    virtual HRESULT __stdcall get_Source7Mapping(Microsoft::Graphics::Canvas::Effects::SamplerCoordinateMapping* value) = 0;
    virtual HRESULT __stdcall get_Source8Mapping(Microsoft::Graphics::Canvas::Effects::SamplerCoordinateMapping* value) = 0;
    virtual HRESULT __stdcall put_Source1Mapping(Microsoft::Graphics::Canvas::Effects::SamplerCoordinateMapping value) = 0;
    virtual HRESULT __stdcall put_Source2Mapping(Microsoft::Graphics::Canvas::Effects::SamplerCoordinateMapping value) = 0;
    virtual HRESULT __stdcall put_Source3Mapping(Microsoft::Graphics::Canvas::Effects::SamplerCoordinateMapping value) = 0;
    virtual HRESULT __stdcall put_Source4Mapping(Microsoft::Graphics::Canvas::Effects::SamplerCoordinateMapping value) = 0;
    virtual HRESULT __stdcall put_Source5Mapping(Microsoft::Graphics::Canvas::Effects::SamplerCoordinateMapping value) = 0;
    virtual HRESULT __stdcall put_Source6Mapping(Microsoft::Graphics::Canvas::Effects::SamplerCoordinateMapping value) = 0;
    virtual HRESULT __stdcall put_Source7Mapping(Microsoft::Graphics::Canvas::Effects::SamplerCoordinateMapping value) = 0;
    virtual HRESULT __stdcall put_Source8Mapping(Microsoft::Graphics::Canvas::Effects::SamplerCoordinateMapping value) = 0;
    virtual HRESULT __stdcall get_Source1BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode* value) = 0;
    virtual HRESULT __stdcall get_Source2BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode* value) = 0;
    virtual HRESULT __stdcall get_Source3BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode* value) = 0;
    virtual HRESULT __stdcall get_Source4BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode* value) = 0;
    virtual HRESULT __stdcall get_Source5BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode* value) = 0;
    virtual HRESULT __stdcall get_Source6BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode* value) = 0;
    virtual HRESULT __stdcall get_Source7BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode* value) = 0;
    virtual HRESULT __stdcall get_Source8BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode* value) = 0;
    virtual HRESULT __stdcall put_Source1BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode value) = 0;
    virtual HRESULT __stdcall put_Source2BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode value) = 0;
    virtual HRESULT __stdcall put_Source3BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode value) = 0;
    virtual HRESULT __stdcall put_Source4BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode value) = 0;
    virtual HRESULT __stdcall put_Source5BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode value) = 0;
    virtual HRESULT __stdcall put_Source6BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode value) = 0;
    virtual HRESULT __stdcall put_Source7BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode value) = 0;
    virtual HRESULT __stdcall put_Source8BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode value) = 0;
    virtual HRESULT __stdcall get_MaxSamplerOffset(int32_t* value) = 0;
    virtual HRESULT __stdcall put_MaxSamplerOffset(int32_t value) = 0;
    virtual HRESULT __stdcall get_Source1Interpolation(Microsoft::Graphics::Canvas::CanvasImageInterpolation* value) = 0;
    virtual HRESULT __stdcall get_Source2Interpolation(Microsoft::Graphics::Canvas::CanvasImageInterpolation* value) = 0;
    virtual HRESULT __stdcall get_Source3Interpolation(Microsoft::Graphics::Canvas::CanvasImageInterpolation* value) = 0;
    virtual HRESULT __stdcall get_Source4Interpolation(Microsoft::Graphics::Canvas::CanvasImageInterpolation* value) = 0;
    virtual HRESULT __stdcall get_Source5Interpolation(Microsoft::Graphics::Canvas::CanvasImageInterpolation* value) = 0;
    virtual HRESULT __stdcall get_Source6Interpolation(Microsoft::Graphics::Canvas::CanvasImageInterpolation* value) = 0;
    virtual HRESULT __stdcall get_Source7Interpolation(Microsoft::Graphics::Canvas::CanvasImageInterpolation* value) = 0;
    virtual HRESULT __stdcall get_Source8Interpolation(Microsoft::Graphics::Canvas::CanvasImageInterpolation* value) = 0;
    virtual HRESULT __stdcall put_Source1Interpolation(Microsoft::Graphics::Canvas::CanvasImageInterpolation value) = 0;
    virtual HRESULT __stdcall put_Source2Interpolation(Microsoft::Graphics::Canvas::CanvasImageInterpolation value) = 0;
    virtual HRESULT __stdcall put_Source3Interpolation(Microsoft::Graphics::Canvas::CanvasImageInterpolation value) = 0;
    virtual HRESULT __stdcall put_Source4Interpolation(Microsoft::Graphics::Canvas::CanvasImageInterpolation value) = 0;
    virtual HRESULT __stdcall put_Source5Interpolation(Microsoft::Graphics::Canvas::CanvasImageInterpolation value) = 0;
    virtual HRESULT __stdcall put_Source6Interpolation(Microsoft::Graphics::Canvas::CanvasImageInterpolation value) = 0;
    virtual HRESULT __stdcall put_Source7Interpolation(Microsoft::Graphics::Canvas::CanvasImageInterpolation value) = 0;
    virtual HRESULT __stdcall put_Source8Interpolation(Microsoft::Graphics::Canvas::CanvasImageInterpolation value) = 0;
    virtual HRESULT __stdcall IsSupported(::IUnknown* device, bool* result) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Effects::IPixelShaderEffectFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(uint32_t __shaderCodeSize, uint8_t* shaderCode, ::IUnknown** effect) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Effects::IPointDiffuseEffect>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_LightPosition(Windows::Foundation::Numerics::float3* value) = 0;
    virtual HRESULT __stdcall put_LightPosition(Windows::Foundation::Numerics::float3 value) = 0;
    virtual HRESULT __stdcall get_DiffuseAmount(float* value) = 0;
    virtual HRESULT __stdcall put_DiffuseAmount(float value) = 0;
    virtual HRESULT __stdcall get_HeightMapScale(float* value) = 0;
    virtual HRESULT __stdcall put_HeightMapScale(float value) = 0;
    virtual HRESULT __stdcall get_LightColor(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall put_LightColor(struct_of<4> value) = 0;
    virtual HRESULT __stdcall get_HeightMapKernelSize(Windows::Foundation::Numerics::float2* value) = 0;
    virtual HRESULT __stdcall put_HeightMapKernelSize(Windows::Foundation::Numerics::float2 value) = 0;
    virtual HRESULT __stdcall get_HeightMapInterpolationMode(Microsoft::Graphics::Canvas::CanvasImageInterpolation* value) = 0;
    virtual HRESULT __stdcall put_HeightMapInterpolationMode(Microsoft::Graphics::Canvas::CanvasImageInterpolation value) = 0;
    virtual HRESULT __stdcall get_LightColorHdr(Windows::Foundation::Numerics::float4* value) = 0;
    virtual HRESULT __stdcall put_LightColorHdr(Windows::Foundation::Numerics::float4 value) = 0;
    virtual HRESULT __stdcall get_Source(::IUnknown** source) = 0;
    virtual HRESULT __stdcall put_Source(::IUnknown* source) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Effects::IPointSpecularEffect>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_LightPosition(Windows::Foundation::Numerics::float3* value) = 0;
    virtual HRESULT __stdcall put_LightPosition(Windows::Foundation::Numerics::float3 value) = 0;
    virtual HRESULT __stdcall get_SpecularExponent(float* value) = 0;
    virtual HRESULT __stdcall put_SpecularExponent(float value) = 0;
    virtual HRESULT __stdcall get_SpecularAmount(float* value) = 0;
    virtual HRESULT __stdcall put_SpecularAmount(float value) = 0;
    virtual HRESULT __stdcall get_HeightMapScale(float* value) = 0;
    virtual HRESULT __stdcall put_HeightMapScale(float value) = 0;
    virtual HRESULT __stdcall get_LightColor(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall put_LightColor(struct_of<4> value) = 0;
    virtual HRESULT __stdcall get_HeightMapKernelSize(Windows::Foundation::Numerics::float2* value) = 0;
    virtual HRESULT __stdcall put_HeightMapKernelSize(Windows::Foundation::Numerics::float2 value) = 0;
    virtual HRESULT __stdcall get_HeightMapInterpolationMode(Microsoft::Graphics::Canvas::CanvasImageInterpolation* value) = 0;
    virtual HRESULT __stdcall put_HeightMapInterpolationMode(Microsoft::Graphics::Canvas::CanvasImageInterpolation value) = 0;
    virtual HRESULT __stdcall get_LightColorHdr(Windows::Foundation::Numerics::float4* value) = 0;
    virtual HRESULT __stdcall put_LightColorHdr(Windows::Foundation::Numerics::float4 value) = 0;
    virtual HRESULT __stdcall get_Source(::IUnknown** source) = 0;
    virtual HRESULT __stdcall put_Source(::IUnknown* source) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Effects::IPosterizeEffect>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_RedValueCount(int32_t* value) = 0;
    virtual HRESULT __stdcall put_RedValueCount(int32_t value) = 0;
    virtual HRESULT __stdcall get_GreenValueCount(int32_t* value) = 0;
    virtual HRESULT __stdcall put_GreenValueCount(int32_t value) = 0;
    virtual HRESULT __stdcall get_BlueValueCount(int32_t* value) = 0;
    virtual HRESULT __stdcall put_BlueValueCount(int32_t value) = 0;
    virtual HRESULT __stdcall get_Source(::IUnknown** source) = 0;
    virtual HRESULT __stdcall put_Source(::IUnknown* source) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Effects::IPremultiplyEffect>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Source(::IUnknown** source) = 0;
    virtual HRESULT __stdcall put_Source(::IUnknown* source) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Effects::IRgbToHueEffect>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_OutputColorSpace(Microsoft::Graphics::Canvas::Effects::EffectHueColorSpace* value) = 0;
    virtual HRESULT __stdcall put_OutputColorSpace(Microsoft::Graphics::Canvas::Effects::EffectHueColorSpace value) = 0;
    virtual HRESULT __stdcall get_Source(::IUnknown** source) = 0;
    virtual HRESULT __stdcall put_Source(::IUnknown* source) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Effects::ISaturationEffect>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Saturation(float* value) = 0;
    virtual HRESULT __stdcall put_Saturation(float value) = 0;
    virtual HRESULT __stdcall get_Source(::IUnknown** source) = 0;
    virtual HRESULT __stdcall put_Source(::IUnknown* source) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Effects::IScaleEffect>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Scale(Windows::Foundation::Numerics::float2* value) = 0;
    virtual HRESULT __stdcall put_Scale(Windows::Foundation::Numerics::float2 value) = 0;
    virtual HRESULT __stdcall get_CenterPoint(Windows::Foundation::Numerics::float2* value) = 0;
    virtual HRESULT __stdcall put_CenterPoint(Windows::Foundation::Numerics::float2 value) = 0;
    virtual HRESULT __stdcall get_InterpolationMode(Microsoft::Graphics::Canvas::CanvasImageInterpolation* value) = 0;
    virtual HRESULT __stdcall put_InterpolationMode(Microsoft::Graphics::Canvas::CanvasImageInterpolation value) = 0;
    virtual HRESULT __stdcall get_BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode* value) = 0;
    virtual HRESULT __stdcall put_BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode value) = 0;
    virtual HRESULT __stdcall get_Sharpness(float* value) = 0;
    virtual HRESULT __stdcall put_Sharpness(float value) = 0;
    virtual HRESULT __stdcall get_Source(::IUnknown** source) = 0;
    virtual HRESULT __stdcall put_Source(::IUnknown* source) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Effects::ISepiaEffect>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Intensity(float* value) = 0;
    virtual HRESULT __stdcall put_Intensity(float value) = 0;
    virtual HRESULT __stdcall get_AlphaMode(Microsoft::Graphics::Canvas::CanvasAlphaMode* value) = 0;
    virtual HRESULT __stdcall put_AlphaMode(Microsoft::Graphics::Canvas::CanvasAlphaMode value) = 0;
    virtual HRESULT __stdcall get_Source(::IUnknown** source) = 0;
    virtual HRESULT __stdcall put_Source(::IUnknown* source) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Effects::IShadowEffect>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_BlurAmount(float* value) = 0;
    virtual HRESULT __stdcall put_BlurAmount(float value) = 0;
    virtual HRESULT __stdcall get_ShadowColor(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall put_ShadowColor(struct_of<4> value) = 0;
    virtual HRESULT __stdcall get_Optimization(Microsoft::Graphics::Canvas::Effects::EffectOptimization* value) = 0;
    virtual HRESULT __stdcall put_Optimization(Microsoft::Graphics::Canvas::Effects::EffectOptimization value) = 0;
    virtual HRESULT __stdcall get_ShadowColorHdr(Windows::Foundation::Numerics::float4* value) = 0;
    virtual HRESULT __stdcall put_ShadowColorHdr(Windows::Foundation::Numerics::float4 value) = 0;
    virtual HRESULT __stdcall get_Source(::IUnknown** source) = 0;
    virtual HRESULT __stdcall put_Source(::IUnknown* source) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Effects::ISharpenEffect>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Amount(float* value) = 0;
    virtual HRESULT __stdcall put_Amount(float value) = 0;
    virtual HRESULT __stdcall get_Threshold(float* value) = 0;
    virtual HRESULT __stdcall put_Threshold(float value) = 0;
    virtual HRESULT __stdcall get_Source(::IUnknown** source) = 0;
    virtual HRESULT __stdcall put_Source(::IUnknown* source) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Effects::ISpotDiffuseEffect>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_LightPosition(Windows::Foundation::Numerics::float3* value) = 0;
    virtual HRESULT __stdcall put_LightPosition(Windows::Foundation::Numerics::float3 value) = 0;
    virtual HRESULT __stdcall get_LightTarget(Windows::Foundation::Numerics::float3* value) = 0;
    virtual HRESULT __stdcall put_LightTarget(Windows::Foundation::Numerics::float3 value) = 0;
    virtual HRESULT __stdcall get_Focus(float* value) = 0;
    virtual HRESULT __stdcall put_Focus(float value) = 0;
    virtual HRESULT __stdcall get_LimitingConeAngle(float* value) = 0;
    virtual HRESULT __stdcall put_LimitingConeAngle(float value) = 0;
    virtual HRESULT __stdcall get_DiffuseAmount(float* value) = 0;
    virtual HRESULT __stdcall put_DiffuseAmount(float value) = 0;
    virtual HRESULT __stdcall get_HeightMapScale(float* value) = 0;
    virtual HRESULT __stdcall put_HeightMapScale(float value) = 0;
    virtual HRESULT __stdcall get_LightColor(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall put_LightColor(struct_of<4> value) = 0;
    virtual HRESULT __stdcall get_HeightMapKernelSize(Windows::Foundation::Numerics::float2* value) = 0;
    virtual HRESULT __stdcall put_HeightMapKernelSize(Windows::Foundation::Numerics::float2 value) = 0;
    virtual HRESULT __stdcall get_HeightMapInterpolationMode(Microsoft::Graphics::Canvas::CanvasImageInterpolation* value) = 0;
    virtual HRESULT __stdcall put_HeightMapInterpolationMode(Microsoft::Graphics::Canvas::CanvasImageInterpolation value) = 0;
    virtual HRESULT __stdcall get_LightColorHdr(Windows::Foundation::Numerics::float4* value) = 0;
    virtual HRESULT __stdcall put_LightColorHdr(Windows::Foundation::Numerics::float4 value) = 0;
    virtual HRESULT __stdcall get_Source(::IUnknown** source) = 0;
    virtual HRESULT __stdcall put_Source(::IUnknown* source) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Effects::ISpotSpecularEffect>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_LightPosition(Windows::Foundation::Numerics::float3* value) = 0;
    virtual HRESULT __stdcall put_LightPosition(Windows::Foundation::Numerics::float3 value) = 0;
    virtual HRESULT __stdcall get_LightTarget(Windows::Foundation::Numerics::float3* value) = 0;
    virtual HRESULT __stdcall put_LightTarget(Windows::Foundation::Numerics::float3 value) = 0;
    virtual HRESULT __stdcall get_Focus(float* value) = 0;
    virtual HRESULT __stdcall put_Focus(float value) = 0;
    virtual HRESULT __stdcall get_LimitingConeAngle(float* value) = 0;
    virtual HRESULT __stdcall put_LimitingConeAngle(float value) = 0;
    virtual HRESULT __stdcall get_SpecularExponent(float* value) = 0;
    virtual HRESULT __stdcall put_SpecularExponent(float value) = 0;
    virtual HRESULT __stdcall get_SpecularAmount(float* value) = 0;
    virtual HRESULT __stdcall put_SpecularAmount(float value) = 0;
    virtual HRESULT __stdcall get_HeightMapScale(float* value) = 0;
    virtual HRESULT __stdcall put_HeightMapScale(float value) = 0;
    virtual HRESULT __stdcall get_LightColor(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall put_LightColor(struct_of<4> value) = 0;
    virtual HRESULT __stdcall get_HeightMapKernelSize(Windows::Foundation::Numerics::float2* value) = 0;
    virtual HRESULT __stdcall put_HeightMapKernelSize(Windows::Foundation::Numerics::float2 value) = 0;
    virtual HRESULT __stdcall get_HeightMapInterpolationMode(Microsoft::Graphics::Canvas::CanvasImageInterpolation* value) = 0;
    virtual HRESULT __stdcall put_HeightMapInterpolationMode(Microsoft::Graphics::Canvas::CanvasImageInterpolation value) = 0;
    virtual HRESULT __stdcall get_LightColorHdr(Windows::Foundation::Numerics::float4* value) = 0;
    virtual HRESULT __stdcall put_LightColorHdr(Windows::Foundation::Numerics::float4 value) = 0;
    virtual HRESULT __stdcall get_Source(::IUnknown** source) = 0;
    virtual HRESULT __stdcall put_Source(::IUnknown* source) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Effects::IStraightenEffect>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Angle(float* value) = 0;
    virtual HRESULT __stdcall put_Angle(float value) = 0;
    virtual HRESULT __stdcall get_MaintainSize(bool* value) = 0;
    virtual HRESULT __stdcall put_MaintainSize(bool value) = 0;
    virtual HRESULT __stdcall get_InterpolationMode(Microsoft::Graphics::Canvas::CanvasImageInterpolation* value) = 0;
    virtual HRESULT __stdcall put_InterpolationMode(Microsoft::Graphics::Canvas::CanvasImageInterpolation value) = 0;
    virtual HRESULT __stdcall get_Source(::IUnknown** source) = 0;
    virtual HRESULT __stdcall put_Source(::IUnknown* source) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Effects::ITableTransfer3DEffect>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Table(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Table(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_AlphaMode(Microsoft::Graphics::Canvas::CanvasAlphaMode* value) = 0;
    virtual HRESULT __stdcall put_AlphaMode(Microsoft::Graphics::Canvas::CanvasAlphaMode value) = 0;
    virtual HRESULT __stdcall get_Source(::IUnknown** source) = 0;
    virtual HRESULT __stdcall put_Source(::IUnknown* source) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Effects::ITableTransferEffect>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_RedTable(uint32_t* __valueElementsSize, float** valueElements) = 0;
    virtual HRESULT __stdcall put_RedTable(uint32_t __valueElementsSize, float* valueElements) = 0;
    virtual HRESULT __stdcall get_RedDisable(bool* value) = 0;
    virtual HRESULT __stdcall put_RedDisable(bool value) = 0;
    virtual HRESULT __stdcall get_GreenTable(uint32_t* __valueElementsSize, float** valueElements) = 0;
    virtual HRESULT __stdcall put_GreenTable(uint32_t __valueElementsSize, float* valueElements) = 0;
    virtual HRESULT __stdcall get_GreenDisable(bool* value) = 0;
    virtual HRESULT __stdcall put_GreenDisable(bool value) = 0;
    virtual HRESULT __stdcall get_BlueTable(uint32_t* __valueElementsSize, float** valueElements) = 0;
    virtual HRESULT __stdcall put_BlueTable(uint32_t __valueElementsSize, float* valueElements) = 0;
    virtual HRESULT __stdcall get_BlueDisable(bool* value) = 0;
    virtual HRESULT __stdcall put_BlueDisable(bool value) = 0;
    virtual HRESULT __stdcall get_AlphaTable(uint32_t* __valueElementsSize, float** valueElements) = 0;
    virtual HRESULT __stdcall put_AlphaTable(uint32_t __valueElementsSize, float* valueElements) = 0;
    virtual HRESULT __stdcall get_AlphaDisable(bool* value) = 0;
    virtual HRESULT __stdcall put_AlphaDisable(bool value) = 0;
    virtual HRESULT __stdcall get_ClampOutput(bool* value) = 0;
    virtual HRESULT __stdcall put_ClampOutput(bool value) = 0;
    virtual HRESULT __stdcall get_Source(::IUnknown** source) = 0;
    virtual HRESULT __stdcall put_Source(::IUnknown* source) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Effects::ITemperatureAndTintEffect>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Temperature(float* value) = 0;
    virtual HRESULT __stdcall put_Temperature(float value) = 0;
    virtual HRESULT __stdcall get_Tint(float* value) = 0;
    virtual HRESULT __stdcall put_Tint(float value) = 0;
    virtual HRESULT __stdcall get_Source(::IUnknown** source) = 0;
    virtual HRESULT __stdcall put_Source(::IUnknown* source) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Effects::ITileEffect>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_SourceRectangle(Windows::Foundation::Rect* value) = 0;
    virtual HRESULT __stdcall put_SourceRectangle(Windows::Foundation::Rect value) = 0;
    virtual HRESULT __stdcall get_Source(::IUnknown** source) = 0;
    virtual HRESULT __stdcall put_Source(::IUnknown* source) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Effects::ITintEffect>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Color(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall put_Color(struct_of<4> value) = 0;
    virtual HRESULT __stdcall get_ClampOutput(bool* value) = 0;
    virtual HRESULT __stdcall put_ClampOutput(bool value) = 0;
    virtual HRESULT __stdcall get_ColorHdr(Windows::Foundation::Numerics::float4* value) = 0;
    virtual HRESULT __stdcall put_ColorHdr(Windows::Foundation::Numerics::float4 value) = 0;
    virtual HRESULT __stdcall get_Source(::IUnknown** source) = 0;
    virtual HRESULT __stdcall put_Source(::IUnknown* source) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Effects::ITintEffectStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsSupported(bool* value) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Effects::ITransform2DEffect>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_InterpolationMode(Microsoft::Graphics::Canvas::CanvasImageInterpolation* value) = 0;
    virtual HRESULT __stdcall put_InterpolationMode(Microsoft::Graphics::Canvas::CanvasImageInterpolation value) = 0;
    virtual HRESULT __stdcall get_BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode* value) = 0;
    virtual HRESULT __stdcall put_BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode value) = 0;
    virtual HRESULT __stdcall get_TransformMatrix(Windows::Foundation::Numerics::float3x2* value) = 0;
    virtual HRESULT __stdcall put_TransformMatrix(Windows::Foundation::Numerics::float3x2 value) = 0;
    virtual HRESULT __stdcall get_Sharpness(float* value) = 0;
    virtual HRESULT __stdcall put_Sharpness(float value) = 0;
    virtual HRESULT __stdcall get_Source(::IUnknown** source) = 0;
    virtual HRESULT __stdcall put_Source(::IUnknown* source) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Effects::ITransform3DEffect>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_InterpolationMode(Microsoft::Graphics::Canvas::CanvasImageInterpolation* value) = 0;
    virtual HRESULT __stdcall put_InterpolationMode(Microsoft::Graphics::Canvas::CanvasImageInterpolation value) = 0;
    virtual HRESULT __stdcall get_BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode* value) = 0;
    virtual HRESULT __stdcall put_BorderMode(Microsoft::Graphics::Canvas::Effects::EffectBorderMode value) = 0;
    virtual HRESULT __stdcall get_TransformMatrix(Windows::Foundation::Numerics::float4x4* value) = 0;
    virtual HRESULT __stdcall put_TransformMatrix(Windows::Foundation::Numerics::float4x4 value) = 0;
    virtual HRESULT __stdcall get_Source(::IUnknown** source) = 0;
    virtual HRESULT __stdcall put_Source(::IUnknown* source) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Effects::ITurbulenceEffect>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Offset(Windows::Foundation::Numerics::float2* value) = 0;
    virtual HRESULT __stdcall put_Offset(Windows::Foundation::Numerics::float2 value) = 0;
    virtual HRESULT __stdcall get_Size(Windows::Foundation::Numerics::float2* value) = 0;
    virtual HRESULT __stdcall put_Size(Windows::Foundation::Numerics::float2 value) = 0;
    virtual HRESULT __stdcall get_Frequency(Windows::Foundation::Numerics::float2* value) = 0;
    virtual HRESULT __stdcall put_Frequency(Windows::Foundation::Numerics::float2 value) = 0;
    virtual HRESULT __stdcall get_Octaves(int32_t* value) = 0;
    virtual HRESULT __stdcall put_Octaves(int32_t value) = 0;
    virtual HRESULT __stdcall get_Seed(int32_t* value) = 0;
    virtual HRESULT __stdcall put_Seed(int32_t value) = 0;
    virtual HRESULT __stdcall get_Noise(Microsoft::Graphics::Canvas::Effects::TurbulenceEffectNoise* value) = 0;
    virtual HRESULT __stdcall put_Noise(Microsoft::Graphics::Canvas::Effects::TurbulenceEffectNoise value) = 0;
    virtual HRESULT __stdcall get_Tileable(bool* value) = 0;
    virtual HRESULT __stdcall put_Tileable(bool value) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Effects::IUnPremultiplyEffect>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Source(::IUnknown** source) = 0;
    virtual HRESULT __stdcall put_Source(::IUnknown* source) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Effects::IVignetteEffect>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Color(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall put_Color(struct_of<4> value) = 0;
    virtual HRESULT __stdcall get_Amount(float* value) = 0;
    virtual HRESULT __stdcall put_Amount(float value) = 0;
    virtual HRESULT __stdcall get_Curve(float* value) = 0;
    virtual HRESULT __stdcall put_Curve(float value) = 0;
    virtual HRESULT __stdcall get_ColorHdr(Windows::Foundation::Numerics::float4* value) = 0;
    virtual HRESULT __stdcall put_ColorHdr(Windows::Foundation::Numerics::float4 value) = 0;
    virtual HRESULT __stdcall get_Source(::IUnknown** source) = 0;
    virtual HRESULT __stdcall put_Source(::IUnknown* source) = 0;
};};

}
