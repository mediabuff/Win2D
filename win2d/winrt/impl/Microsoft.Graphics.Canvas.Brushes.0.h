// C++/WinRT v1.0.170906.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Microsoft::Graphics::Canvas {

enum class CanvasAlphaMode;
enum class CanvasBufferPrecision;
enum class CanvasColorSpace;
enum class CanvasEdgeBehavior;
enum class CanvasImageInterpolation;
struct CanvasDevice;
struct ICanvasImage;
struct ICanvasResourceCreator;

}

WINRT_EXPORT namespace winrt::Windows::UI {

struct Color;

}

WINRT_EXPORT namespace winrt::Microsoft::Graphics::Canvas::Brushes {

struct ICanvasBrush;
struct ICanvasImageBrush;
struct ICanvasImageBrushFactory;
struct ICanvasLinearGradientBrush;
struct ICanvasLinearGradientBrushFactory;
struct ICanvasLinearGradientBrushStatics;
struct ICanvasRadialGradientBrush;
struct ICanvasRadialGradientBrushFactory;
struct ICanvasRadialGradientBrushStatics;
struct ICanvasSolidColorBrush;
struct ICanvasSolidColorBrushFactory;
struct ICanvasSolidColorBrushStatics;
struct CanvasImageBrush;
struct CanvasLinearGradientBrush;
struct CanvasRadialGradientBrush;
struct CanvasSolidColorBrush;
struct CanvasGradientStop;
struct CanvasGradientStopHdr;

}

namespace winrt::impl {

template <> struct category<Microsoft::Graphics::Canvas::Brushes::ICanvasBrush>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Brushes::ICanvasImageBrush>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Brushes::ICanvasImageBrushFactory>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Brushes::ICanvasLinearGradientBrush>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Brushes::ICanvasLinearGradientBrushFactory>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Brushes::ICanvasLinearGradientBrushStatics>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Brushes::ICanvasRadialGradientBrush>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Brushes::ICanvasRadialGradientBrushFactory>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Brushes::ICanvasRadialGradientBrushStatics>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Brushes::ICanvasSolidColorBrush>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Brushes::ICanvasSolidColorBrushFactory>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Brushes::ICanvasSolidColorBrushStatics>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Brushes::CanvasImageBrush>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::Brushes::CanvasLinearGradientBrush>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::Brushes::CanvasRadialGradientBrush>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::Brushes::CanvasSolidColorBrush>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStop>{ using type = struct_category<float,Windows::UI::Color>; };
template <> struct category<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStopHdr>{ using type = struct_category<float,Windows::Foundation::Numerics::float4>; };
template <> struct name<Microsoft::Graphics::Canvas::Brushes::ICanvasBrush>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Brushes.ICanvasBrush" }; };
template <> struct name<Microsoft::Graphics::Canvas::Brushes::ICanvasImageBrush>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Brushes.ICanvasImageBrush" }; };
template <> struct name<Microsoft::Graphics::Canvas::Brushes::ICanvasImageBrushFactory>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Brushes.ICanvasImageBrushFactory" }; };
template <> struct name<Microsoft::Graphics::Canvas::Brushes::ICanvasLinearGradientBrush>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Brushes.ICanvasLinearGradientBrush" }; };
template <> struct name<Microsoft::Graphics::Canvas::Brushes::ICanvasLinearGradientBrushFactory>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Brushes.ICanvasLinearGradientBrushFactory" }; };
template <> struct name<Microsoft::Graphics::Canvas::Brushes::ICanvasLinearGradientBrushStatics>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Brushes.ICanvasLinearGradientBrushStatics" }; };
template <> struct name<Microsoft::Graphics::Canvas::Brushes::ICanvasRadialGradientBrush>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Brushes.ICanvasRadialGradientBrush" }; };
template <> struct name<Microsoft::Graphics::Canvas::Brushes::ICanvasRadialGradientBrushFactory>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Brushes.ICanvasRadialGradientBrushFactory" }; };
template <> struct name<Microsoft::Graphics::Canvas::Brushes::ICanvasRadialGradientBrushStatics>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Brushes.ICanvasRadialGradientBrushStatics" }; };
template <> struct name<Microsoft::Graphics::Canvas::Brushes::ICanvasSolidColorBrush>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Brushes.ICanvasSolidColorBrush" }; };
template <> struct name<Microsoft::Graphics::Canvas::Brushes::ICanvasSolidColorBrushFactory>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Brushes.ICanvasSolidColorBrushFactory" }; };
template <> struct name<Microsoft::Graphics::Canvas::Brushes::ICanvasSolidColorBrushStatics>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Brushes.ICanvasSolidColorBrushStatics" }; };
template <> struct name<Microsoft::Graphics::Canvas::Brushes::CanvasImageBrush>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Brushes.CanvasImageBrush" }; };
template <> struct name<Microsoft::Graphics::Canvas::Brushes::CanvasLinearGradientBrush>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Brushes.CanvasLinearGradientBrush" }; };
template <> struct name<Microsoft::Graphics::Canvas::Brushes::CanvasRadialGradientBrush>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Brushes.CanvasRadialGradientBrush" }; };
template <> struct name<Microsoft::Graphics::Canvas::Brushes::CanvasSolidColorBrush>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Brushes.CanvasSolidColorBrush" }; };
template <> struct name<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStop>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Brushes.CanvasGradientStop" }; };
template <> struct name<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStopHdr>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Brushes.CanvasGradientStopHdr" }; };
template <> struct guid<Microsoft::Graphics::Canvas::Brushes::ICanvasBrush>{ static constexpr GUID value{ 0xF5D58591,0xC803,0x41B4,{ 0x87,0x8E,0x79,0xD9,0x2A,0xB1,0x32,0x95 } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Brushes::ICanvasImageBrush>{ static constexpr GUID value{ 0x5A21C4E7,0xD450,0x4942,{ 0x8B,0xBD,0xF0,0x17,0x09,0x7A,0xB7,0x63 } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Brushes::ICanvasImageBrushFactory>{ static constexpr GUID value{ 0xC40CCB59,0x1B87,0x4394,{ 0xA6,0xA6,0xEC,0xD2,0x78,0xE8,0x77,0xD6 } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Brushes::ICanvasLinearGradientBrush>{ static constexpr GUID value{ 0xA4FFBCB1,0xEC22,0x48C8,{ 0xB1,0xAF,0x09,0xBC,0xFD,0x34,0xEE,0xBD } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Brushes::ICanvasLinearGradientBrushFactory>{ static constexpr GUID value{ 0xA2E8E34A,0x8592,0x4B9D,{ 0xBA,0x1C,0x00,0xD3,0xF3,0xC3,0x4F,0x54 } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Brushes::ICanvasLinearGradientBrushStatics>{ static constexpr GUID value{ 0xE9DE3392,0x8FBF,0x478C,{ 0x8E,0x6A,0xD0,0xA0,0xEA,0x75,0x3B,0x37 } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Brushes::ICanvasRadialGradientBrush>{ static constexpr GUID value{ 0x4D27D756,0x14A9,0x4EB7,{ 0x97,0x3F,0xE6,0x61,0x4D,0x4F,0x89,0xE7 } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Brushes::ICanvasRadialGradientBrushFactory>{ static constexpr GUID value{ 0x7933A51F,0xA910,0x4548,{ 0x84,0x9F,0x42,0xDD,0xEC,0x46,0x6F,0x41 } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Brushes::ICanvasRadialGradientBrushStatics>{ static constexpr GUID value{ 0x3B0D4DAE,0x3E21,0x4818,{ 0x99,0xB4,0x77,0x9A,0xCA,0xAF,0x18,0xBE } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Brushes::ICanvasSolidColorBrush>{ static constexpr GUID value{ 0x8BC30F87,0xBAD5,0x4871,{ 0x88,0xB8,0x9F,0xE3,0xC6,0x3D,0x20,0x4A } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Brushes::ICanvasSolidColorBrushFactory>{ static constexpr GUID value{ 0x8ABF4780,0x4EDD,0x4F2B,{ 0xBF,0x63,0x2C,0x38,0x51,0x15,0xB2,0x01 } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Brushes::ICanvasSolidColorBrushStatics>{ static constexpr GUID value{ 0x629B7244,0x5B9E,0x4EF8,{ 0x8E,0x09,0x26,0x47,0x14,0x20,0x1E,0xE8 } }; };
template <> struct default_interface<Microsoft::Graphics::Canvas::Brushes::CanvasImageBrush>{ using type = Microsoft::Graphics::Canvas::Brushes::ICanvasImageBrush; };
template <> struct default_interface<Microsoft::Graphics::Canvas::Brushes::CanvasLinearGradientBrush>{ using type = Microsoft::Graphics::Canvas::Brushes::ICanvasLinearGradientBrush; };
template <> struct default_interface<Microsoft::Graphics::Canvas::Brushes::CanvasRadialGradientBrush>{ using type = Microsoft::Graphics::Canvas::Brushes::ICanvasRadialGradientBrush; };
template <> struct default_interface<Microsoft::Graphics::Canvas::Brushes::CanvasSolidColorBrush>{ using type = Microsoft::Graphics::Canvas::Brushes::ICanvasSolidColorBrush; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Brushes_ICanvasBrush
{
    float Opacity() const;
    void Opacity(float value) const;
    Windows::Foundation::Numerics::float3x2 Transform() const;
    void Transform(Windows::Foundation::Numerics::float3x2 const& value) const;
    Microsoft::Graphics::Canvas::CanvasDevice Device() const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Brushes::ICanvasBrush> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Brushes_ICanvasBrush<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Brushes_ICanvasImageBrush
{
    Microsoft::Graphics::Canvas::ICanvasImage Image() const;
    void Image(Microsoft::Graphics::Canvas::ICanvasImage const& value) const;
    Microsoft::Graphics::Canvas::CanvasEdgeBehavior ExtendX() const;
    void ExtendX(Microsoft::Graphics::Canvas::CanvasEdgeBehavior const& value) const;
    Microsoft::Graphics::Canvas::CanvasEdgeBehavior ExtendY() const;
    void ExtendY(Microsoft::Graphics::Canvas::CanvasEdgeBehavior const& value) const;
    Windows::Foundation::IReference<Windows::Foundation::Rect> SourceRectangle() const;
    void SourceRectangle(optional<Windows::Foundation::Rect> const& value) const;
    Microsoft::Graphics::Canvas::CanvasImageInterpolation Interpolation() const;
    void Interpolation(Microsoft::Graphics::Canvas::CanvasImageInterpolation const& value) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Brushes::ICanvasImageBrush> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Brushes_ICanvasImageBrush<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Brushes_ICanvasImageBrushFactory
{
    Microsoft::Graphics::Canvas::Brushes::CanvasImageBrush Create(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator) const;
    Microsoft::Graphics::Canvas::Brushes::CanvasImageBrush CreateWithImage(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Microsoft::Graphics::Canvas::ICanvasImage const& image) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Brushes::ICanvasImageBrushFactory> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Brushes_ICanvasImageBrushFactory<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Brushes_ICanvasLinearGradientBrush
{
    Windows::Foundation::Numerics::float2 StartPoint() const;
    void StartPoint(Windows::Foundation::Numerics::float2 const& value) const;
    Windows::Foundation::Numerics::float2 EndPoint() const;
    void EndPoint(Windows::Foundation::Numerics::float2 const& value) const;
    com_array<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStop> Stops() const;
    com_array<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStopHdr> StopsHdr() const;
    Microsoft::Graphics::Canvas::CanvasEdgeBehavior EdgeBehavior() const;
    Microsoft::Graphics::Canvas::CanvasColorSpace PreInterpolationSpace() const;
    Microsoft::Graphics::Canvas::CanvasColorSpace PostInterpolationSpace() const;
    Microsoft::Graphics::Canvas::CanvasBufferPrecision BufferPrecision() const;
    Microsoft::Graphics::Canvas::CanvasAlphaMode AlphaMode() const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Brushes::ICanvasLinearGradientBrush> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Brushes_ICanvasLinearGradientBrush<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Brushes_ICanvasLinearGradientBrushFactory
{
    Microsoft::Graphics::Canvas::Brushes::CanvasLinearGradientBrush CreateSimple(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::UI::Color const& startColor, Windows::UI::Color const& endColor) const;
    Microsoft::Graphics::Canvas::Brushes::CanvasLinearGradientBrush CreateWithStops(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStop const> gradientStops) const;
    Microsoft::Graphics::Canvas::Brushes::CanvasLinearGradientBrush CreateWithEdgeBehaviorAndAlphaMode(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStop const> gradientStops, Microsoft::Graphics::Canvas::CanvasEdgeBehavior const& edgeBehavior, Microsoft::Graphics::Canvas::CanvasAlphaMode const& alphaMode) const;
    Microsoft::Graphics::Canvas::Brushes::CanvasLinearGradientBrush CreateWithEdgeBehaviorAndInterpolationOptions(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStop const> gradientStops, Microsoft::Graphics::Canvas::CanvasEdgeBehavior const& edgeBehavior, Microsoft::Graphics::Canvas::CanvasAlphaMode const& alphaMode, Microsoft::Graphics::Canvas::CanvasColorSpace const& preInterpolationSpace, Microsoft::Graphics::Canvas::CanvasColorSpace const& postInterpolationSpace, Microsoft::Graphics::Canvas::CanvasBufferPrecision const& bufferPrecision) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Brushes::ICanvasLinearGradientBrushFactory> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Brushes_ICanvasLinearGradientBrushFactory<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Brushes_ICanvasLinearGradientBrushStatics
{
    Microsoft::Graphics::Canvas::Brushes::CanvasLinearGradientBrush CreateHdr(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Foundation::Numerics::float4 const& startColorHdr, Windows::Foundation::Numerics::float4 const& endColorHdr) const;
    Microsoft::Graphics::Canvas::Brushes::CanvasLinearGradientBrush CreateHdr(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStopHdr const> gradientStopsHdr) const;
    Microsoft::Graphics::Canvas::Brushes::CanvasLinearGradientBrush CreateHdr(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStopHdr const> gradientStopsHdr, Microsoft::Graphics::Canvas::CanvasEdgeBehavior const& edgeBehavior, Microsoft::Graphics::Canvas::CanvasAlphaMode const& alphaMode) const;
    Microsoft::Graphics::Canvas::Brushes::CanvasLinearGradientBrush CreateHdr(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStopHdr const> gradientStopsHdr, Microsoft::Graphics::Canvas::CanvasEdgeBehavior const& edgeBehavior, Microsoft::Graphics::Canvas::CanvasAlphaMode const& alphaMode, Microsoft::Graphics::Canvas::CanvasColorSpace const& preInterpolationSpace, Microsoft::Graphics::Canvas::CanvasColorSpace const& postInterpolationSpace, Microsoft::Graphics::Canvas::CanvasBufferPrecision const& bufferPrecision) const;
    Microsoft::Graphics::Canvas::Brushes::CanvasLinearGradientBrush CreateRainbow(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, float eldritchness) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Brushes::ICanvasLinearGradientBrushStatics> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Brushes_ICanvasLinearGradientBrushStatics<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Brushes_ICanvasRadialGradientBrush
{
    Windows::Foundation::Numerics::float2 Center() const;
    void Center(Windows::Foundation::Numerics::float2 const& value) const;
    Windows::Foundation::Numerics::float2 OriginOffset() const;
    void OriginOffset(Windows::Foundation::Numerics::float2 const& value) const;
    float RadiusX() const;
    void RadiusX(float value) const;
    float RadiusY() const;
    void RadiusY(float value) const;
    com_array<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStop> Stops() const;
    com_array<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStopHdr> StopsHdr() const;
    Microsoft::Graphics::Canvas::CanvasEdgeBehavior EdgeBehavior() const;
    Microsoft::Graphics::Canvas::CanvasColorSpace PreInterpolationSpace() const;
    Microsoft::Graphics::Canvas::CanvasColorSpace PostInterpolationSpace() const;
    Microsoft::Graphics::Canvas::CanvasBufferPrecision BufferPrecision() const;
    Microsoft::Graphics::Canvas::CanvasAlphaMode AlphaMode() const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Brushes::ICanvasRadialGradientBrush> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Brushes_ICanvasRadialGradientBrush<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Brushes_ICanvasRadialGradientBrushFactory
{
    Microsoft::Graphics::Canvas::Brushes::CanvasRadialGradientBrush CreateSimple(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::UI::Color const& startColor, Windows::UI::Color const& endColor) const;
    Microsoft::Graphics::Canvas::Brushes::CanvasRadialGradientBrush CreateWithStops(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStop const> gradientStops) const;
    Microsoft::Graphics::Canvas::Brushes::CanvasRadialGradientBrush CreateWithEdgeBehaviorAndAlphaMode(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStop const> gradientStops, Microsoft::Graphics::Canvas::CanvasEdgeBehavior const& edgeBehavior, Microsoft::Graphics::Canvas::CanvasAlphaMode const& alphaMode) const;
    Microsoft::Graphics::Canvas::Brushes::CanvasRadialGradientBrush CreateWithEdgeBehaviorAndInterpolationOptions(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStop const> gradientStops, Microsoft::Graphics::Canvas::CanvasEdgeBehavior const& edgeBehavior, Microsoft::Graphics::Canvas::CanvasAlphaMode const& alphaMode, Microsoft::Graphics::Canvas::CanvasColorSpace const& preInterpolationSpace, Microsoft::Graphics::Canvas::CanvasColorSpace const& postInterpolationSpace, Microsoft::Graphics::Canvas::CanvasBufferPrecision const& bufferPrecision) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Brushes::ICanvasRadialGradientBrushFactory> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Brushes_ICanvasRadialGradientBrushFactory<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Brushes_ICanvasRadialGradientBrushStatics
{
    Microsoft::Graphics::Canvas::Brushes::CanvasRadialGradientBrush CreateHdr(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Foundation::Numerics::float4 const& startColorHdr, Windows::Foundation::Numerics::float4 const& endColorHdr) const;
    Microsoft::Graphics::Canvas::Brushes::CanvasRadialGradientBrush CreateHdr(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStopHdr const> gradientStops) const;
    Microsoft::Graphics::Canvas::Brushes::CanvasRadialGradientBrush CreateHdr(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStopHdr const> gradientStops, Microsoft::Graphics::Canvas::CanvasEdgeBehavior const& edgeBehavior, Microsoft::Graphics::Canvas::CanvasAlphaMode const& alphaMode) const;
    Microsoft::Graphics::Canvas::Brushes::CanvasRadialGradientBrush CreateHdr(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<Microsoft::Graphics::Canvas::Brushes::CanvasGradientStopHdr const> gradientStops, Microsoft::Graphics::Canvas::CanvasEdgeBehavior const& edgeBehavior, Microsoft::Graphics::Canvas::CanvasAlphaMode const& alphaMode, Microsoft::Graphics::Canvas::CanvasColorSpace const& preInterpolationSpace, Microsoft::Graphics::Canvas::CanvasColorSpace const& postInterpolationSpace, Microsoft::Graphics::Canvas::CanvasBufferPrecision const& bufferPrecision) const;
    Microsoft::Graphics::Canvas::Brushes::CanvasRadialGradientBrush CreateRainbow(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, float eldritchness) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Brushes::ICanvasRadialGradientBrushStatics> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Brushes_ICanvasRadialGradientBrushStatics<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Brushes_ICanvasSolidColorBrush
{
    Windows::UI::Color Color() const;
    void Color(Windows::UI::Color const& value) const;
    Windows::Foundation::Numerics::float4 ColorHdr() const;
    void ColorHdr(Windows::Foundation::Numerics::float4 const& value) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Brushes::ICanvasSolidColorBrush> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Brushes_ICanvasSolidColorBrush<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Brushes_ICanvasSolidColorBrushFactory
{
    Microsoft::Graphics::Canvas::Brushes::CanvasSolidColorBrush Create(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::UI::Color const& color) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Brushes::ICanvasSolidColorBrushFactory> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Brushes_ICanvasSolidColorBrushFactory<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Brushes_ICanvasSolidColorBrushStatics
{
    Microsoft::Graphics::Canvas::Brushes::CanvasSolidColorBrush CreateHdr(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Foundation::Numerics::float4 const& colorHdr) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Brushes::ICanvasSolidColorBrushStatics> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Brushes_ICanvasSolidColorBrushStatics<D>; };

template <> struct abi<Microsoft::Graphics::Canvas::Brushes::ICanvasBrush>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Opacity(float* value) = 0;
    virtual HRESULT __stdcall put_Opacity(float value) = 0;
    virtual HRESULT __stdcall get_Transform(Windows::Foundation::Numerics::float3x2* value) = 0;
    virtual HRESULT __stdcall put_Transform(Windows::Foundation::Numerics::float3x2 value) = 0;
    virtual HRESULT __stdcall get_Device(::IUnknown** value) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Brushes::ICanvasImageBrush>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Image(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Image(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_ExtendX(Microsoft::Graphics::Canvas::CanvasEdgeBehavior* value) = 0;
    virtual HRESULT __stdcall put_ExtendX(Microsoft::Graphics::Canvas::CanvasEdgeBehavior value) = 0;
    virtual HRESULT __stdcall get_ExtendY(Microsoft::Graphics::Canvas::CanvasEdgeBehavior* value) = 0;
    virtual HRESULT __stdcall put_ExtendY(Microsoft::Graphics::Canvas::CanvasEdgeBehavior value) = 0;
    virtual HRESULT __stdcall get_SourceRectangle(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_SourceRectangle(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Interpolation(Microsoft::Graphics::Canvas::CanvasImageInterpolation* value) = 0;
    virtual HRESULT __stdcall put_Interpolation(Microsoft::Graphics::Canvas::CanvasImageInterpolation value) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Brushes::ICanvasImageBrushFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(::IUnknown* resourceCreator, ::IUnknown** canvasImageBrush) = 0;
    virtual HRESULT __stdcall CreateWithImage(::IUnknown* resourceCreator, ::IUnknown* image, ::IUnknown** canvasImageBrush) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Brushes::ICanvasLinearGradientBrush>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_StartPoint(Windows::Foundation::Numerics::float2* value) = 0;
    virtual HRESULT __stdcall put_StartPoint(Windows::Foundation::Numerics::float2 value) = 0;
    virtual HRESULT __stdcall get_EndPoint(Windows::Foundation::Numerics::float2* value) = 0;
    virtual HRESULT __stdcall put_EndPoint(Windows::Foundation::Numerics::float2 value) = 0;
    virtual HRESULT __stdcall get_Stops(uint32_t* __valueElementsSize, struct_of<8>** valueElements) = 0;
    virtual HRESULT __stdcall get_StopsHdr(uint32_t* __valueElementsSize, struct_of<20>** valueElements) = 0;
    virtual HRESULT __stdcall get_EdgeBehavior(Microsoft::Graphics::Canvas::CanvasEdgeBehavior* value) = 0;
    virtual HRESULT __stdcall get_PreInterpolationSpace(Microsoft::Graphics::Canvas::CanvasColorSpace* value) = 0;
    virtual HRESULT __stdcall get_PostInterpolationSpace(Microsoft::Graphics::Canvas::CanvasColorSpace* value) = 0;
    virtual HRESULT __stdcall get_BufferPrecision(Microsoft::Graphics::Canvas::CanvasBufferPrecision* value) = 0;
    virtual HRESULT __stdcall get_AlphaMode(Microsoft::Graphics::Canvas::CanvasAlphaMode* value) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Brushes::ICanvasLinearGradientBrushFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateSimple(::IUnknown* resourceCreator, struct_of<4> startColor, struct_of<4> endColor, ::IUnknown** canvasLinearGradientBrush) = 0;
    virtual HRESULT __stdcall CreateWithStops(::IUnknown* resourceCreator, uint32_t __gradientStopsSize, struct_of<8>* gradientStops, ::IUnknown** canvasLinearGradientBrush) = 0;
    virtual HRESULT __stdcall CreateWithEdgeBehaviorAndAlphaMode(::IUnknown* resourceCreator, uint32_t __gradientStopsSize, struct_of<8>* gradientStops, Microsoft::Graphics::Canvas::CanvasEdgeBehavior edgeBehavior, Microsoft::Graphics::Canvas::CanvasAlphaMode alphaMode, ::IUnknown** canvasLinearGradientBrush) = 0;
    virtual HRESULT __stdcall CreateWithEdgeBehaviorAndInterpolationOptions(::IUnknown* resourceCreator, uint32_t __gradientStopsSize, struct_of<8>* gradientStops, Microsoft::Graphics::Canvas::CanvasEdgeBehavior edgeBehavior, Microsoft::Graphics::Canvas::CanvasAlphaMode alphaMode, Microsoft::Graphics::Canvas::CanvasColorSpace preInterpolationSpace, Microsoft::Graphics::Canvas::CanvasColorSpace postInterpolationSpace, Microsoft::Graphics::Canvas::CanvasBufferPrecision bufferPrecision, ::IUnknown** canvasLinearGradientBrush) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Brushes::ICanvasLinearGradientBrushStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateHdrSimple(::IUnknown* resourceCreator, Windows::Foundation::Numerics::float4 startColorHdr, Windows::Foundation::Numerics::float4 endColorHdr, ::IUnknown** canvasLinearGradientBrush) = 0;
    virtual HRESULT __stdcall CreateHdrWithStops(::IUnknown* resourceCreator, uint32_t __gradientStopsHdrSize, struct_of<20>* gradientStopsHdr, ::IUnknown** canvasLinearGradientBrush) = 0;
    virtual HRESULT __stdcall CreateHdrWithEdgeBehaviorAndAlphaMode(::IUnknown* resourceCreator, uint32_t __gradientStopsHdrSize, struct_of<20>* gradientStopsHdr, Microsoft::Graphics::Canvas::CanvasEdgeBehavior edgeBehavior, Microsoft::Graphics::Canvas::CanvasAlphaMode alphaMode, ::IUnknown** canvasLinearGradientBrush) = 0;
    virtual HRESULT __stdcall CreateHdrWithEdgeBehaviorAndInterpolationOptions(::IUnknown* resourceCreator, uint32_t __gradientStopsHdrSize, struct_of<20>* gradientStopsHdr, Microsoft::Graphics::Canvas::CanvasEdgeBehavior edgeBehavior, Microsoft::Graphics::Canvas::CanvasAlphaMode alphaMode, Microsoft::Graphics::Canvas::CanvasColorSpace preInterpolationSpace, Microsoft::Graphics::Canvas::CanvasColorSpace postInterpolationSpace, Microsoft::Graphics::Canvas::CanvasBufferPrecision bufferPrecision, ::IUnknown** canvasLinearGradientBrush) = 0;
    virtual HRESULT __stdcall CreateRainbow(::IUnknown* resourceCreator, float eldritchness, ::IUnknown** canvasLinearGradientBrush) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Brushes::ICanvasRadialGradientBrush>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Center(Windows::Foundation::Numerics::float2* value) = 0;
    virtual HRESULT __stdcall put_Center(Windows::Foundation::Numerics::float2 value) = 0;
    virtual HRESULT __stdcall get_OriginOffset(Windows::Foundation::Numerics::float2* value) = 0;
    virtual HRESULT __stdcall put_OriginOffset(Windows::Foundation::Numerics::float2 value) = 0;
    virtual HRESULT __stdcall get_RadiusX(float* value) = 0;
    virtual HRESULT __stdcall put_RadiusX(float value) = 0;
    virtual HRESULT __stdcall get_RadiusY(float* value) = 0;
    virtual HRESULT __stdcall put_RadiusY(float value) = 0;
    virtual HRESULT __stdcall get_Stops(uint32_t* __valueElementsSize, struct_of<8>** valueElements) = 0;
    virtual HRESULT __stdcall get_StopsHdr(uint32_t* __valueElementsSize, struct_of<20>** valueElements) = 0;
    virtual HRESULT __stdcall get_EdgeBehavior(Microsoft::Graphics::Canvas::CanvasEdgeBehavior* value) = 0;
    virtual HRESULT __stdcall get_PreInterpolationSpace(Microsoft::Graphics::Canvas::CanvasColorSpace* value) = 0;
    virtual HRESULT __stdcall get_PostInterpolationSpace(Microsoft::Graphics::Canvas::CanvasColorSpace* value) = 0;
    virtual HRESULT __stdcall get_BufferPrecision(Microsoft::Graphics::Canvas::CanvasBufferPrecision* value) = 0;
    virtual HRESULT __stdcall get_AlphaMode(Microsoft::Graphics::Canvas::CanvasAlphaMode* value) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Brushes::ICanvasRadialGradientBrushFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateSimple(::IUnknown* resourceCreator, struct_of<4> startColor, struct_of<4> endColor, ::IUnknown** canvasRadialGradientBrush) = 0;
    virtual HRESULT __stdcall CreateWithStops(::IUnknown* resourceCreator, uint32_t __gradientStopsSize, struct_of<8>* gradientStops, ::IUnknown** canvasRadialGradientBrush) = 0;
    virtual HRESULT __stdcall CreateWithEdgeBehaviorAndAlphaMode(::IUnknown* resourceCreator, uint32_t __gradientStopsSize, struct_of<8>* gradientStops, Microsoft::Graphics::Canvas::CanvasEdgeBehavior edgeBehavior, Microsoft::Graphics::Canvas::CanvasAlphaMode alphaMode, ::IUnknown** canvasRadialGradientBrush) = 0;
    virtual HRESULT __stdcall CreateWithEdgeBehaviorAndInterpolationOptions(::IUnknown* resourceCreator, uint32_t __gradientStopsSize, struct_of<8>* gradientStops, Microsoft::Graphics::Canvas::CanvasEdgeBehavior edgeBehavior, Microsoft::Graphics::Canvas::CanvasAlphaMode alphaMode, Microsoft::Graphics::Canvas::CanvasColorSpace preInterpolationSpace, Microsoft::Graphics::Canvas::CanvasColorSpace postInterpolationSpace, Microsoft::Graphics::Canvas::CanvasBufferPrecision bufferPrecision, ::IUnknown** canvasRadialGradientBrush) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Brushes::ICanvasRadialGradientBrushStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateHdrSimple(::IUnknown* resourceCreator, Windows::Foundation::Numerics::float4 startColorHdr, Windows::Foundation::Numerics::float4 endColorHdr, ::IUnknown** canvasRadialGradientBrush) = 0;
    virtual HRESULT __stdcall CreateHdrWithStops(::IUnknown* resourceCreator, uint32_t __gradientStopsSize, struct_of<20>* gradientStops, ::IUnknown** canvasRadialGradientBrush) = 0;
    virtual HRESULT __stdcall CreateHdrWithEdgeBehaviorAndAlphaMode(::IUnknown* resourceCreator, uint32_t __gradientStopsSize, struct_of<20>* gradientStops, Microsoft::Graphics::Canvas::CanvasEdgeBehavior edgeBehavior, Microsoft::Graphics::Canvas::CanvasAlphaMode alphaMode, ::IUnknown** canvasRadialGradientBrush) = 0;
    virtual HRESULT __stdcall CreateHdrWithEdgeBehaviorAndInterpolationOptions(::IUnknown* resourceCreator, uint32_t __gradientStopsSize, struct_of<20>* gradientStops, Microsoft::Graphics::Canvas::CanvasEdgeBehavior edgeBehavior, Microsoft::Graphics::Canvas::CanvasAlphaMode alphaMode, Microsoft::Graphics::Canvas::CanvasColorSpace preInterpolationSpace, Microsoft::Graphics::Canvas::CanvasColorSpace postInterpolationSpace, Microsoft::Graphics::Canvas::CanvasBufferPrecision bufferPrecision, ::IUnknown** canvasRadialGradientBrush) = 0;
    virtual HRESULT __stdcall CreateRainbow(::IUnknown* resourceCreator, float eldritchness, ::IUnknown** canvasRadialGradientBrush) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Brushes::ICanvasSolidColorBrush>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Color(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall put_Color(struct_of<4> value) = 0;
    virtual HRESULT __stdcall get_ColorHdr(Windows::Foundation::Numerics::float4* value) = 0;
    virtual HRESULT __stdcall put_ColorHdr(Windows::Foundation::Numerics::float4 value) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Brushes::ICanvasSolidColorBrushFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(::IUnknown* resourceCreator, struct_of<4> color, ::IUnknown** canvasSolidColorBrush) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Brushes::ICanvasSolidColorBrushStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateHdr(::IUnknown* resourceCreator, Windows::Foundation::Numerics::float4 colorHdr, ::IUnknown** canvasSolidColorBrush) = 0;
};};

}
