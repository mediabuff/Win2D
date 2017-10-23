// C++/WinRT v1.0.170906.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Microsoft::Graphics::Canvas::Brushes {

struct ICanvasBrush;

}

WINRT_EXPORT namespace winrt::Microsoft::Graphics::Canvas::Effects {

enum class EffectChannelSelect;

}

WINRT_EXPORT namespace winrt::Microsoft::Graphics::Canvas::Geometry {

struct CanvasCachedGeometry;
struct CanvasGeometry;
struct CanvasGradientMesh;
struct CanvasStrokeStyle;

}

WINRT_EXPORT namespace winrt::Microsoft::Graphics::Canvas::Svg {

struct CanvasSvgDocument;

}

WINRT_EXPORT namespace winrt::Microsoft::Graphics::Canvas::Text {

enum class CanvasTextAntialiasing;
enum class CanvasTextMeasuringMode;
struct CanvasFontFace;
struct CanvasGlyph;
struct CanvasTextFormat;
struct CanvasTextLayout;
struct CanvasTextRenderingParameters;

}

WINRT_EXPORT namespace winrt::Windows::Foundation {

struct Uri;

}

WINRT_EXPORT namespace winrt::Windows::Graphics::DirectX {

enum class DirectXPixelFormat;

}

WINRT_EXPORT namespace winrt::Windows::Graphics::DirectX::Direct3D11 {

struct Direct3DSurfaceDescription;
struct IDirect3DDevice;
struct IDirect3DSurface;

}

WINRT_EXPORT namespace winrt::Windows::Graphics::Imaging {

struct BitmapSize;
struct SoftwareBitmap;

}

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

struct IBuffer;
struct IRandomAccessStream;

}

WINRT_EXPORT namespace winrt::Windows::UI {

struct Color;

}

WINRT_EXPORT namespace winrt::Windows::UI::Core {

struct CoreWindow;

}

WINRT_EXPORT namespace winrt::Windows::UI::Input::Inking {

struct InkStroke;

}

WINRT_EXPORT namespace winrt::Microsoft::Graphics::Canvas {

enum class CanvasAlphaMode : int32_t
{
    Premultiplied = 0,
    Straight = 1,
    Ignore = 2,
};

enum class CanvasAntialiasing : int32_t
{
    Antialiased = 0,
    Aliased = 1,
};

enum class CanvasBitmapFileFormat : int32_t
{
    Auto = 0,
    Bmp = 1,
    Png = 2,
    Jpeg = 3,
    Tiff = 4,
    Gif = 5,
    JpegXR = 6,
};

enum class CanvasBlend : int32_t
{
    SourceOver = 0,
    Copy = 1,
    Min = 2,
    Add = 3,
};

enum class CanvasBufferPrecision : int32_t
{
    Precision8UIntNormalized = 0,
    Precision8UIntNormalizedSrgb = 1,
    Precision16UIntNormalized = 2,
    Precision16Float = 3,
    Precision32Float = 4,
};

enum class CanvasColorSpace : int32_t
{
    Custom = 0,
    Srgb = 1,
    ScRgb = 2,
};

enum class CanvasComposite : int32_t
{
    SourceOver = 0,
    DestinationOver = 1,
    SourceIn = 2,
    DestinationIn = 3,
    SourceOut = 4,
    DestinationOut = 5,
    SourceAtop = 6,
    DestinationAtop = 7,
    Xor = 8,
    Add = 9,
    Copy = 10,
    BoundedCopy = 11,
    MaskInvert = 12,
};

enum class CanvasDebugLevel : int32_t
{
    None = 0,
    Error = 1,
    Warning = 2,
    Information = 3,
};

enum class CanvasDpiRounding : int32_t
{
    Floor = 0,
    Round = 1,
    Ceiling = 2,
};

enum class CanvasEdgeBehavior : int32_t
{
    Clamp = 0,
    Wrap = 1,
    Mirror = 2,
};

enum class CanvasImageInterpolation : int32_t
{
    NearestNeighbor = 0,
    Linear = 1,
    Cubic = 2,
    MultiSampleLinear = 3,
    Anisotropic = 4,
    HighQualityCubic = 5,
};

enum class CanvasLayerOptions : uint32_t
{
    None = 0x0,
    InitializeFromBackground = 0x1,
    IgnoreAlpha = 0x2,
};

enum class CanvasSpriteFlip : uint32_t
{
    None = 0x0,
    Horizontal = 0x1,
    Vertical = 0x2,
    Both = 0x3,
};

enum class CanvasSpriteOptions : uint32_t
{
    None = 0x0,
    ClampToSourceRect = 0x1,
};

enum class CanvasSpriteSortMode : int32_t
{
    None = 0,
    Bitmap = 1,
};

enum class CanvasSwapChainRotation : int32_t
{
    None = 0,
    Rotate90 = 1,
    Rotate180 = 2,
    Rotate270 = 3,
};

enum class CanvasUnits : int32_t
{
    Dips = 0,
    Pixels = 1,
};

enum class CanvasVirtualBitmapOptions : int32_t
{
    None = 0,
    ReleaseSource = 1,
    CacheOnDemand = 2,
};

struct ICanvasActiveLayer;
struct ICanvasBitmap;
struct ICanvasBitmapFactory;
struct ICanvasBitmapStatics;
struct ICanvasCommandList;
struct ICanvasCommandListFactory;
struct ICanvasDevice;
struct ICanvasDeviceFactory;
struct ICanvasDeviceStatics;
struct ICanvasDrawingSession;
struct ICanvasImage;
struct ICanvasImageStatics;
struct ICanvasLock;
struct ICanvasRenderTarget;
struct ICanvasRenderTargetFactory;
struct ICanvasRenderTargetStatics;
struct ICanvasResourceCreator;
struct ICanvasResourceCreatorWithDpi;
struct ICanvasSpriteBatch;
struct ICanvasSpriteBatchStatics;
struct ICanvasSwapChain;
struct ICanvasSwapChainFactory;
struct ICanvasSwapChainStatics;
struct ICanvasVirtualBitmap;
struct ICanvasVirtualBitmapStatics;
struct CanvasActiveLayer;
struct CanvasBitmap;
struct CanvasCommandList;
struct CanvasDevice;
struct CanvasDrawingSession;
struct CanvasImage;
struct CanvasLock;
struct CanvasRenderTarget;
struct CanvasSpriteBatch;
struct CanvasSwapChain;
struct CanvasVirtualBitmap;

}

namespace winrt::impl {

template<> struct is_enum_flag<Microsoft::Graphics::Canvas::CanvasLayerOptions> : std::true_type {};
template<> struct is_enum_flag<Microsoft::Graphics::Canvas::CanvasSpriteFlip> : std::true_type {};
template<> struct is_enum_flag<Microsoft::Graphics::Canvas::CanvasSpriteOptions> : std::true_type {};
template <> struct category<Microsoft::Graphics::Canvas::ICanvasActiveLayer>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::ICanvasBitmap>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::ICanvasBitmapFactory>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::ICanvasBitmapStatics>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::ICanvasCommandList>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::ICanvasCommandListFactory>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::ICanvasDevice>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::ICanvasDeviceFactory>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::ICanvasDeviceStatics>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::ICanvasDrawingSession>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::ICanvasImage>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::ICanvasImageStatics>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::ICanvasLock>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::ICanvasRenderTarget>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::ICanvasRenderTargetFactory>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::ICanvasRenderTargetStatics>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::ICanvasResourceCreator>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::ICanvasResourceCreatorWithDpi>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::ICanvasSpriteBatch>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::ICanvasSpriteBatchStatics>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::ICanvasSwapChain>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::ICanvasSwapChainFactory>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::ICanvasSwapChainStatics>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::ICanvasVirtualBitmap>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::ICanvasVirtualBitmapStatics>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::CanvasActiveLayer>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::CanvasBitmap>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::CanvasCommandList>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::CanvasDevice>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::CanvasDrawingSession>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::CanvasImage>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::CanvasLock>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::CanvasRenderTarget>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::CanvasSpriteBatch>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::CanvasSwapChain>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::CanvasVirtualBitmap>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::CanvasAlphaMode>{ using type = enum_category; };
template <> struct category<Microsoft::Graphics::Canvas::CanvasAntialiasing>{ using type = enum_category; };
template <> struct category<Microsoft::Graphics::Canvas::CanvasBitmapFileFormat>{ using type = enum_category; };
template <> struct category<Microsoft::Graphics::Canvas::CanvasBlend>{ using type = enum_category; };
template <> struct category<Microsoft::Graphics::Canvas::CanvasBufferPrecision>{ using type = enum_category; };
template <> struct category<Microsoft::Graphics::Canvas::CanvasColorSpace>{ using type = enum_category; };
template <> struct category<Microsoft::Graphics::Canvas::CanvasComposite>{ using type = enum_category; };
template <> struct category<Microsoft::Graphics::Canvas::CanvasDebugLevel>{ using type = enum_category; };
template <> struct category<Microsoft::Graphics::Canvas::CanvasDpiRounding>{ using type = enum_category; };
template <> struct category<Microsoft::Graphics::Canvas::CanvasEdgeBehavior>{ using type = enum_category; };
template <> struct category<Microsoft::Graphics::Canvas::CanvasImageInterpolation>{ using type = enum_category; };
template <> struct category<Microsoft::Graphics::Canvas::CanvasLayerOptions>{ using type = enum_category; };
template <> struct category<Microsoft::Graphics::Canvas::CanvasSpriteFlip>{ using type = enum_category; };
template <> struct category<Microsoft::Graphics::Canvas::CanvasSpriteOptions>{ using type = enum_category; };
template <> struct category<Microsoft::Graphics::Canvas::CanvasSpriteSortMode>{ using type = enum_category; };
template <> struct category<Microsoft::Graphics::Canvas::CanvasSwapChainRotation>{ using type = enum_category; };
template <> struct category<Microsoft::Graphics::Canvas::CanvasUnits>{ using type = enum_category; };
template <> struct category<Microsoft::Graphics::Canvas::CanvasVirtualBitmapOptions>{ using type = enum_category; };
template <> struct name<Microsoft::Graphics::Canvas::ICanvasActiveLayer>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.ICanvasActiveLayer" }; };
template <> struct name<Microsoft::Graphics::Canvas::ICanvasBitmap>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.ICanvasBitmap" }; };
template <> struct name<Microsoft::Graphics::Canvas::ICanvasBitmapFactory>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.ICanvasBitmapFactory" }; };
template <> struct name<Microsoft::Graphics::Canvas::ICanvasBitmapStatics>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.ICanvasBitmapStatics" }; };
template <> struct name<Microsoft::Graphics::Canvas::ICanvasCommandList>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.ICanvasCommandList" }; };
template <> struct name<Microsoft::Graphics::Canvas::ICanvasCommandListFactory>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.ICanvasCommandListFactory" }; };
template <> struct name<Microsoft::Graphics::Canvas::ICanvasDevice>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.ICanvasDevice" }; };
template <> struct name<Microsoft::Graphics::Canvas::ICanvasDeviceFactory>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.ICanvasDeviceFactory" }; };
template <> struct name<Microsoft::Graphics::Canvas::ICanvasDeviceStatics>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.ICanvasDeviceStatics" }; };
template <> struct name<Microsoft::Graphics::Canvas::ICanvasDrawingSession>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.ICanvasDrawingSession" }; };
template <> struct name<Microsoft::Graphics::Canvas::ICanvasImage>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.ICanvasImage" }; };
template <> struct name<Microsoft::Graphics::Canvas::ICanvasImageStatics>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.ICanvasImageStatics" }; };
template <> struct name<Microsoft::Graphics::Canvas::ICanvasLock>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.ICanvasLock" }; };
template <> struct name<Microsoft::Graphics::Canvas::ICanvasRenderTarget>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.ICanvasRenderTarget" }; };
template <> struct name<Microsoft::Graphics::Canvas::ICanvasRenderTargetFactory>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.ICanvasRenderTargetFactory" }; };
template <> struct name<Microsoft::Graphics::Canvas::ICanvasRenderTargetStatics>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.ICanvasRenderTargetStatics" }; };
template <> struct name<Microsoft::Graphics::Canvas::ICanvasResourceCreator>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.ICanvasResourceCreator" }; };
template <> struct name<Microsoft::Graphics::Canvas::ICanvasResourceCreatorWithDpi>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.ICanvasResourceCreatorWithDpi" }; };
template <> struct name<Microsoft::Graphics::Canvas::ICanvasSpriteBatch>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.ICanvasSpriteBatch" }; };
template <> struct name<Microsoft::Graphics::Canvas::ICanvasSpriteBatchStatics>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.ICanvasSpriteBatchStatics" }; };
template <> struct name<Microsoft::Graphics::Canvas::ICanvasSwapChain>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.ICanvasSwapChain" }; };
template <> struct name<Microsoft::Graphics::Canvas::ICanvasSwapChainFactory>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.ICanvasSwapChainFactory" }; };
template <> struct name<Microsoft::Graphics::Canvas::ICanvasSwapChainStatics>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.ICanvasSwapChainStatics" }; };
template <> struct name<Microsoft::Graphics::Canvas::ICanvasVirtualBitmap>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.ICanvasVirtualBitmap" }; };
template <> struct name<Microsoft::Graphics::Canvas::ICanvasVirtualBitmapStatics>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.ICanvasVirtualBitmapStatics" }; };
template <> struct name<Microsoft::Graphics::Canvas::CanvasActiveLayer>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.CanvasActiveLayer" }; };
template <> struct name<Microsoft::Graphics::Canvas::CanvasBitmap>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.CanvasBitmap" }; };
template <> struct name<Microsoft::Graphics::Canvas::CanvasCommandList>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.CanvasCommandList" }; };
template <> struct name<Microsoft::Graphics::Canvas::CanvasDevice>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.CanvasDevice" }; };
template <> struct name<Microsoft::Graphics::Canvas::CanvasDrawingSession>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.CanvasDrawingSession" }; };
template <> struct name<Microsoft::Graphics::Canvas::CanvasImage>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.CanvasImage" }; };
template <> struct name<Microsoft::Graphics::Canvas::CanvasLock>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.CanvasLock" }; };
template <> struct name<Microsoft::Graphics::Canvas::CanvasRenderTarget>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.CanvasRenderTarget" }; };
template <> struct name<Microsoft::Graphics::Canvas::CanvasSpriteBatch>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.CanvasSpriteBatch" }; };
template <> struct name<Microsoft::Graphics::Canvas::CanvasSwapChain>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.CanvasSwapChain" }; };
template <> struct name<Microsoft::Graphics::Canvas::CanvasVirtualBitmap>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.CanvasVirtualBitmap" }; };
template <> struct name<Microsoft::Graphics::Canvas::CanvasAlphaMode>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.CanvasAlphaMode" }; };
template <> struct name<Microsoft::Graphics::Canvas::CanvasAntialiasing>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.CanvasAntialiasing" }; };
template <> struct name<Microsoft::Graphics::Canvas::CanvasBitmapFileFormat>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.CanvasBitmapFileFormat" }; };
template <> struct name<Microsoft::Graphics::Canvas::CanvasBlend>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.CanvasBlend" }; };
template <> struct name<Microsoft::Graphics::Canvas::CanvasBufferPrecision>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.CanvasBufferPrecision" }; };
template <> struct name<Microsoft::Graphics::Canvas::CanvasColorSpace>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.CanvasColorSpace" }; };
template <> struct name<Microsoft::Graphics::Canvas::CanvasComposite>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.CanvasComposite" }; };
template <> struct name<Microsoft::Graphics::Canvas::CanvasDebugLevel>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.CanvasDebugLevel" }; };
template <> struct name<Microsoft::Graphics::Canvas::CanvasDpiRounding>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.CanvasDpiRounding" }; };
template <> struct name<Microsoft::Graphics::Canvas::CanvasEdgeBehavior>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.CanvasEdgeBehavior" }; };
template <> struct name<Microsoft::Graphics::Canvas::CanvasImageInterpolation>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.CanvasImageInterpolation" }; };
template <> struct name<Microsoft::Graphics::Canvas::CanvasLayerOptions>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.CanvasLayerOptions" }; };
template <> struct name<Microsoft::Graphics::Canvas::CanvasSpriteFlip>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.CanvasSpriteFlip" }; };
template <> struct name<Microsoft::Graphics::Canvas::CanvasSpriteOptions>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.CanvasSpriteOptions" }; };
template <> struct name<Microsoft::Graphics::Canvas::CanvasSpriteSortMode>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.CanvasSpriteSortMode" }; };
template <> struct name<Microsoft::Graphics::Canvas::CanvasSwapChainRotation>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.CanvasSwapChainRotation" }; };
template <> struct name<Microsoft::Graphics::Canvas::CanvasUnits>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.CanvasUnits" }; };
template <> struct name<Microsoft::Graphics::Canvas::CanvasVirtualBitmapOptions>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.CanvasVirtualBitmapOptions" }; };
template <> struct guid<Microsoft::Graphics::Canvas::ICanvasActiveLayer>{ static constexpr GUID value{ 0x49ECFC58,0x5E1C,0x4EE3,{ 0x80,0x88,0x54,0x2F,0x94,0xE9,0x3C,0x60 } }; };
template <> struct guid<Microsoft::Graphics::Canvas::ICanvasBitmap>{ static constexpr GUID value{ 0xC57532ED,0x709E,0x4AC2,{ 0x86,0xBE,0xA1,0xEC,0x3A,0x7F,0xA8,0xFE } }; };
template <> struct guid<Microsoft::Graphics::Canvas::ICanvasBitmapFactory>{ static constexpr GUID value{ 0xF2D0EB0E,0x16F3,0x4BCF,{ 0xB1,0xD1,0x04,0x83,0x4A,0xB9,0x7D,0xE4 } }; };
template <> struct guid<Microsoft::Graphics::Canvas::ICanvasBitmapStatics>{ static constexpr GUID value{ 0xC8948DEA,0xA41D,0x4CC2,{ 0xAF,0x9A,0xFD,0xDE,0x01,0xB6,0x06,0xDC } }; };
template <> struct guid<Microsoft::Graphics::Canvas::ICanvasCommandList>{ static constexpr GUID value{ 0xB71E73CF,0x2FE7,0x4D3A,{ 0xBB,0xB8,0x19,0xF0,0x16,0xF5,0xBE,0x1B } }; };
template <> struct guid<Microsoft::Graphics::Canvas::ICanvasCommandListFactory>{ static constexpr GUID value{ 0xB3D44E68,0xD931,0x4B5B,{ 0xB9,0x57,0x08,0x88,0x98,0x0A,0x7D,0x50 } }; };
template <> struct guid<Microsoft::Graphics::Canvas::ICanvasDevice>{ static constexpr GUID value{ 0xA27F0B5D,0xEC2C,0x4D4F,{ 0x94,0x8F,0x0A,0xA1,0xE9,0x5E,0x33,0xE6 } }; };
template <> struct guid<Microsoft::Graphics::Canvas::ICanvasDeviceFactory>{ static constexpr GUID value{ 0xE2C2BF21,0x5418,0x43B9,{ 0xA2,0xDA,0x53,0x9E,0x28,0x7C,0x79,0x0F } }; };
template <> struct guid<Microsoft::Graphics::Canvas::ICanvasDeviceStatics>{ static constexpr GUID value{ 0x9B6E2B27,0xCD07,0x421A,{ 0x8F,0x69,0x0A,0xE8,0xA7,0x87,0xFE,0x8C } }; };
template <> struct guid<Microsoft::Graphics::Canvas::ICanvasDrawingSession>{ static constexpr GUID value{ 0xF60AFD09,0xE623,0x4BE0,{ 0xB7,0x50,0x57,0x8A,0xA9,0x20,0xB1,0xDB } }; };
template <> struct guid<Microsoft::Graphics::Canvas::ICanvasImage>{ static constexpr GUID value{ 0x794966D3,0x6A64,0x47E9,{ 0x8D,0xA8,0xB4,0x6A,0xAA,0x24,0xD5,0x3B } }; };
template <> struct guid<Microsoft::Graphics::Canvas::ICanvasImageStatics>{ static constexpr GUID value{ 0xC54EEA15,0x5A14,0x489A,{ 0x8F,0xA0,0x6E,0x84,0x54,0x1F,0x92,0x2D } }; };
template <> struct guid<Microsoft::Graphics::Canvas::ICanvasLock>{ static constexpr GUID value{ 0x7A0E8498,0xFBA9,0x4FB0,{ 0xAA,0x8C,0x6A,0x48,0xB5,0xEE,0x3E,0x4F } }; };
template <> struct guid<Microsoft::Graphics::Canvas::ICanvasRenderTarget>{ static constexpr GUID value{ 0x2D4C7349,0x9A32,0x41B9,{ 0xB3,0xCC,0xCA,0xF1,0xB7,0xE1,0x09,0x9B } }; };
template <> struct guid<Microsoft::Graphics::Canvas::ICanvasRenderTargetFactory>{ static constexpr GUID value{ 0x620DFDBB,0x9D08,0x406C,{ 0xBF,0xE6,0xD9,0xB8,0x1E,0x6D,0xF8,0xE7 } }; };
template <> struct guid<Microsoft::Graphics::Canvas::ICanvasRenderTargetStatics>{ static constexpr GUID value{ 0xC7D1FE37,0xDD57,0x45D7,{ 0xBC,0xC1,0x15,0x62,0x5A,0x21,0xE8,0xD5 } }; };
template <> struct guid<Microsoft::Graphics::Canvas::ICanvasResourceCreator>{ static constexpr GUID value{ 0x8F6D8AA8,0x492F,0x4BC6,{ 0xB3,0xD0,0xE7,0xF5,0xEA,0xE8,0x4B,0x11 } }; };
template <> struct guid<Microsoft::Graphics::Canvas::ICanvasResourceCreatorWithDpi>{ static constexpr GUID value{ 0x1A75B512,0xE9FA,0x49E6,{ 0xA8,0x76,0x38,0xCA,0xE1,0x94,0x01,0x3E } }; };
template <> struct guid<Microsoft::Graphics::Canvas::ICanvasSpriteBatch>{ static constexpr GUID value{ 0xA065DCE4,0xA7F2,0x4DF4,{ 0x84,0x05,0xEA,0x9E,0x3A,0x21,0x5B,0xF8 } }; };
template <> struct guid<Microsoft::Graphics::Canvas::ICanvasSpriteBatchStatics>{ static constexpr GUID value{ 0x851EB08D,0x9D01,0x4B57,{ 0x9E,0x94,0x24,0x11,0x31,0x51,0xB7,0x4B } }; };
template <> struct guid<Microsoft::Graphics::Canvas::ICanvasSwapChain>{ static constexpr GUID value{ 0x882E3C3A,0x5725,0x409C,{ 0x9E,0x76,0xF8,0x0B,0x3B,0xAC,0xF1,0xB4 } }; };
template <> struct guid<Microsoft::Graphics::Canvas::ICanvasSwapChainFactory>{ static constexpr GUID value{ 0x133C25CB,0xED3C,0x492B,{ 0xBF,0xFE,0x75,0x09,0xB5,0x21,0x84,0x2B } }; };
template <> struct guid<Microsoft::Graphics::Canvas::ICanvasSwapChainStatics>{ static constexpr GUID value{ 0x05376D8F,0x3E8D,0x4A82,{ 0x98,0x38,0x69,0x16,0x80,0xD3,0x2A,0x52 } }; };
template <> struct guid<Microsoft::Graphics::Canvas::ICanvasVirtualBitmap>{ static constexpr GUID value{ 0x707D8BB0,0x05F9,0x484C,{ 0x9E,0xE2,0x17,0x9E,0x06,0x81,0xC8,0xA7 } }; };
template <> struct guid<Microsoft::Graphics::Canvas::ICanvasVirtualBitmapStatics>{ static constexpr GUID value{ 0xB2F1F8E9,0x0770,0x4DD4,{ 0x95,0x6D,0x78,0xD9,0x11,0x39,0x09,0x57 } }; };
template <> struct default_interface<Microsoft::Graphics::Canvas::CanvasActiveLayer>{ using type = Microsoft::Graphics::Canvas::ICanvasActiveLayer; };
template <> struct default_interface<Microsoft::Graphics::Canvas::CanvasBitmap>{ using type = Microsoft::Graphics::Canvas::ICanvasBitmap; };
template <> struct default_interface<Microsoft::Graphics::Canvas::CanvasCommandList>{ using type = Microsoft::Graphics::Canvas::ICanvasCommandList; };
template <> struct default_interface<Microsoft::Graphics::Canvas::CanvasDevice>{ using type = Microsoft::Graphics::Canvas::ICanvasDevice; };
template <> struct default_interface<Microsoft::Graphics::Canvas::CanvasDrawingSession>{ using type = Microsoft::Graphics::Canvas::ICanvasDrawingSession; };
template <> struct default_interface<Microsoft::Graphics::Canvas::CanvasLock>{ using type = Microsoft::Graphics::Canvas::ICanvasLock; };
template <> struct default_interface<Microsoft::Graphics::Canvas::CanvasRenderTarget>{ using type = Microsoft::Graphics::Canvas::ICanvasRenderTarget; };
template <> struct default_interface<Microsoft::Graphics::Canvas::CanvasSpriteBatch>{ using type = Microsoft::Graphics::Canvas::ICanvasSpriteBatch; };
template <> struct default_interface<Microsoft::Graphics::Canvas::CanvasSwapChain>{ using type = Microsoft::Graphics::Canvas::ICanvasSwapChain; };
template <> struct default_interface<Microsoft::Graphics::Canvas::CanvasVirtualBitmap>{ using type = Microsoft::Graphics::Canvas::ICanvasVirtualBitmap; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_ICanvasActiveLayer
{
};
template <> struct consume<Microsoft::Graphics::Canvas::ICanvasActiveLayer> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_ICanvasActiveLayer<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_ICanvasBitmap
{
    Windows::Graphics::Imaging::BitmapSize SizeInPixels() const;
    Windows::Foundation::Size Size() const;
    Windows::Foundation::Rect Bounds() const;
    Windows::Graphics::DirectX::DirectXPixelFormat Format() const;
    Microsoft::Graphics::Canvas::CanvasAlphaMode AlphaMode() const;
    Windows::Foundation::IAsyncAction SaveAsync(param::hstring const& fileName) const;
    Windows::Foundation::IAsyncAction SaveAsync(param::hstring const& fileName, Microsoft::Graphics::Canvas::CanvasBitmapFileFormat const& fileFormat) const;
    Windows::Foundation::IAsyncAction SaveAsync(param::hstring const& fileName, Microsoft::Graphics::Canvas::CanvasBitmapFileFormat const& fileFormat, float quality) const;
    Windows::Foundation::IAsyncAction SaveAsync(Windows::Storage::Streams::IRandomAccessStream const& stream, Microsoft::Graphics::Canvas::CanvasBitmapFileFormat const& fileFormat) const;
    Windows::Foundation::IAsyncAction SaveAsync(Windows::Storage::Streams::IRandomAccessStream const& stream, Microsoft::Graphics::Canvas::CanvasBitmapFileFormat const& fileFormat, float quality) const;
    com_array<uint8_t> GetPixelBytes() const;
    com_array<uint8_t> GetPixelBytes(int32_t left, int32_t top, int32_t width, int32_t height) const;
    void GetPixelBytes(Windows::Storage::Streams::IBuffer const& buffer) const;
    void GetPixelBytes(Windows::Storage::Streams::IBuffer const& buffer, int32_t left, int32_t top, int32_t width, int32_t height) const;
    com_array<Windows::UI::Color> GetPixelColors() const;
    com_array<Windows::UI::Color> GetPixelColors(int32_t left, int32_t top, int32_t width, int32_t height) const;
    void SetPixelBytes(array_view<uint8_t const> valueElements) const;
    void SetPixelBytes(array_view<uint8_t const> valueElements, int32_t left, int32_t top, int32_t width, int32_t height) const;
    void SetPixelBytes(Windows::Storage::Streams::IBuffer const& buffer) const;
    void SetPixelBytes(Windows::Storage::Streams::IBuffer const& buffer, int32_t left, int32_t top, int32_t width, int32_t height) const;
    void SetPixelColors(array_view<Windows::UI::Color const> valueElements) const;
    void SetPixelColors(array_view<Windows::UI::Color const> valueElements, int32_t left, int32_t top, int32_t width, int32_t height) const;
    void CopyPixelsFromBitmap(Microsoft::Graphics::Canvas::CanvasBitmap const& otherBitmap) const;
    void CopyPixelsFromBitmap(Microsoft::Graphics::Canvas::CanvasBitmap const& otherBitmap, int32_t destX, int32_t destY) const;
    void CopyPixelsFromBitmap(Microsoft::Graphics::Canvas::CanvasBitmap const& otherBitmap, int32_t destX, int32_t destY, int32_t sourceRectLeft, int32_t sourceRectTop, int32_t sourceRectWidth, int32_t sourceRectHeight) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::ICanvasBitmap> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_ICanvasBitmap<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_ICanvasBitmapFactory
{
};
template <> struct consume<Microsoft::Graphics::Canvas::ICanvasBitmapFactory> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_ICanvasBitmapFactory<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_ICanvasBitmapStatics
{
    Microsoft::Graphics::Canvas::CanvasBitmap CreateFromDirect3D11Surface(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const& surface) const;
    Microsoft::Graphics::Canvas::CanvasBitmap CreateFromDirect3D11Surface(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const& surface, float dpi) const;
    Microsoft::Graphics::Canvas::CanvasBitmap CreateFromDirect3D11Surface(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const& surface, float dpi, Microsoft::Graphics::Canvas::CanvasAlphaMode const& alpha) const;
    Microsoft::Graphics::Canvas::CanvasBitmap CreateFromBytes(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<uint8_t const> bytes, int32_t widthInPixels, int32_t heightInPixels, Windows::Graphics::DirectX::DirectXPixelFormat const& format) const;
    Microsoft::Graphics::Canvas::CanvasBitmap CreateFromBytes(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<uint8_t const> bytes, int32_t widthInPixels, int32_t heightInPixels, Windows::Graphics::DirectX::DirectXPixelFormat const& format, float dpi) const;
    Microsoft::Graphics::Canvas::CanvasBitmap CreateFromBytes(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<uint8_t const> bytes, int32_t widthInPixels, int32_t heightInPixels, Windows::Graphics::DirectX::DirectXPixelFormat const& format, float dpi, Microsoft::Graphics::Canvas::CanvasAlphaMode const& alpha) const;
    Microsoft::Graphics::Canvas::CanvasBitmap CreateFromBytes(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Storage::Streams::IBuffer const& buffer, int32_t widthInPixels, int32_t heightInPixels, Windows::Graphics::DirectX::DirectXPixelFormat const& format) const;
    Microsoft::Graphics::Canvas::CanvasBitmap CreateFromBytes(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Storage::Streams::IBuffer const& buffer, int32_t widthInPixels, int32_t heightInPixels, Windows::Graphics::DirectX::DirectXPixelFormat const& format, float dpi) const;
    Microsoft::Graphics::Canvas::CanvasBitmap CreateFromBytes(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Storage::Streams::IBuffer const& buffer, int32_t widthInPixels, int32_t heightInPixels, Windows::Graphics::DirectX::DirectXPixelFormat const& format, float dpi, Microsoft::Graphics::Canvas::CanvasAlphaMode const& alpha) const;
    Microsoft::Graphics::Canvas::CanvasBitmap CreateFromColors(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<Windows::UI::Color const> colors, int32_t widthInPixels, int32_t heightInPixels) const;
    Microsoft::Graphics::Canvas::CanvasBitmap CreateFromColors(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<Windows::UI::Color const> colors, int32_t widthInPixels, int32_t heightInPixels, float dpi) const;
    Microsoft::Graphics::Canvas::CanvasBitmap CreateFromColors(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<Windows::UI::Color const> colors, int32_t widthInPixels, int32_t heightInPixels, float dpi, Microsoft::Graphics::Canvas::CanvasAlphaMode const& alpha) const;
    Microsoft::Graphics::Canvas::CanvasBitmap CreateFromSoftwareBitmap(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Graphics::Imaging::SoftwareBitmap const& sourceBitmap) const;
    Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::CanvasBitmap> LoadAsync(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, param::hstring const& fileName) const;
    Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::CanvasBitmap> LoadAsync(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, param::hstring const& fileName, float dpi) const;
    Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::CanvasBitmap> LoadAsync(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, param::hstring const& fileName, float dpi, Microsoft::Graphics::Canvas::CanvasAlphaMode const& alpha) const;
    Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::CanvasBitmap> LoadAsync(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Foundation::Uri const& uri) const;
    Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::CanvasBitmap> LoadAsync(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Foundation::Uri const& uri, float dpi) const;
    Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::CanvasBitmap> LoadAsync(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Foundation::Uri const& uri, float dpi, Microsoft::Graphics::Canvas::CanvasAlphaMode const& alpha) const;
    Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::CanvasBitmap> LoadAsync(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Storage::Streams::IRandomAccessStream const& stream) const;
    Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::CanvasBitmap> LoadAsync(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Storage::Streams::IRandomAccessStream const& stream, float dpi) const;
    Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::CanvasBitmap> LoadAsync(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Storage::Streams::IRandomAccessStream const& stream, float dpi, Microsoft::Graphics::Canvas::CanvasAlphaMode const& alpha) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::ICanvasBitmapStatics> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_ICanvasBitmapStatics<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_ICanvasCommandList
{
    Microsoft::Graphics::Canvas::CanvasDrawingSession CreateDrawingSession() const;
    Microsoft::Graphics::Canvas::CanvasDevice Device() const;
};
template <> struct consume<Microsoft::Graphics::Canvas::ICanvasCommandList> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_ICanvasCommandList<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_ICanvasCommandListFactory
{
    Microsoft::Graphics::Canvas::CanvasCommandList Create(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::ICanvasCommandListFactory> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_ICanvasCommandListFactory<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_ICanvasDevice
{
    bool ForceSoftwareRenderer() const;
    int32_t MaximumBitmapSizeInPixels() const;
    bool IsPixelFormatSupported(Windows::Graphics::DirectX::DirectXPixelFormat const& pixelFormat) const;
    bool IsBufferPrecisionSupported(Microsoft::Graphics::Canvas::CanvasBufferPrecision const& bufferPrecision) const;
    uint64_t MaximumCacheSize() const;
    void MaximumCacheSize(uint64_t value) const;
    bool LowPriority() const;
    void LowPriority(bool value) const;
    event_token DeviceLost(Windows::Foundation::TypedEventHandler<Microsoft::Graphics::Canvas::CanvasDevice, Windows::Foundation::IInspectable> const& value) const;
    using DeviceLost_revoker = event_revoker<Microsoft::Graphics::Canvas::ICanvasDevice>;
    DeviceLost_revoker DeviceLost(auto_revoke_t, Windows::Foundation::TypedEventHandler<Microsoft::Graphics::Canvas::CanvasDevice, Windows::Foundation::IInspectable> const& value) const;
    void DeviceLost(event_token const& token) const;
    bool IsDeviceLost(int32_t hresult) const;
    void RaiseDeviceLost() const;
    Microsoft::Graphics::Canvas::CanvasLock Lock() const;
};
template <> struct consume<Microsoft::Graphics::Canvas::ICanvasDevice> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_ICanvasDevice<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_ICanvasDeviceFactory
{
    Microsoft::Graphics::Canvas::CanvasDevice CreateWithForceSoftwareRendererOption(bool forceSoftwareRenderer) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::ICanvasDeviceFactory> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_ICanvasDeviceFactory<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_ICanvasDeviceStatics
{
    Microsoft::Graphics::Canvas::CanvasDevice CreateFromDirect3D11Device(Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice const& direct3DDevice) const;
    Microsoft::Graphics::Canvas::CanvasDevice GetSharedDevice() const;
    Microsoft::Graphics::Canvas::CanvasDevice GetSharedDevice(bool forceSoftwareRenderer) const;
    void DebugLevel(Microsoft::Graphics::Canvas::CanvasDebugLevel const& value) const;
    Microsoft::Graphics::Canvas::CanvasDebugLevel DebugLevel() const;
};
template <> struct consume<Microsoft::Graphics::Canvas::ICanvasDeviceStatics> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_ICanvasDeviceStatics<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession
{
    void Clear(Windows::UI::Color const& color) const;
    void Clear(Windows::Foundation::Numerics::float4 const& color) const;
    void Flush() const;
    void DrawImage(Microsoft::Graphics::Canvas::ICanvasImage const& image) const;
    void DrawImage(Microsoft::Graphics::Canvas::ICanvasImage const& image, Windows::Foundation::Numerics::float2 const& offset) const;
    void DrawImage(Microsoft::Graphics::Canvas::ICanvasImage const& image, float x, float y) const;
    void DrawImage(Microsoft::Graphics::Canvas::CanvasBitmap const& bitmap, Windows::Foundation::Rect const& destinationRectangle) const;
    void DrawImage(Microsoft::Graphics::Canvas::ICanvasImage const& image, Windows::Foundation::Numerics::float2 const& offset, Windows::Foundation::Rect const& sourceRectangle) const;
    void DrawImage(Microsoft::Graphics::Canvas::ICanvasImage const& image, float x, float y, Windows::Foundation::Rect const& sourceRectangle) const;
    void DrawImage(Microsoft::Graphics::Canvas::ICanvasImage const& image, Windows::Foundation::Rect const& destinationRectangle, Windows::Foundation::Rect const& sourceRectangle) const;
    void DrawImage(Microsoft::Graphics::Canvas::ICanvasImage const& image, Windows::Foundation::Numerics::float2 const& offset, Windows::Foundation::Rect const& sourceRectangle, float opacity) const;
    void DrawImage(Microsoft::Graphics::Canvas::ICanvasImage const& image, float x, float y, Windows::Foundation::Rect const& sourceRectangle, float opacity) const;
    void DrawImage(Microsoft::Graphics::Canvas::ICanvasImage const& image, Windows::Foundation::Rect const& destinationRectangle, Windows::Foundation::Rect const& sourceRectangle, float opacity) const;
    void DrawImage(Microsoft::Graphics::Canvas::ICanvasImage const& image, Windows::Foundation::Numerics::float2 const& offset, Windows::Foundation::Rect const& sourceRectangle, float opacity, Microsoft::Graphics::Canvas::CanvasImageInterpolation const& interpolation) const;
    void DrawImage(Microsoft::Graphics::Canvas::ICanvasImage const& image, float x, float y, Windows::Foundation::Rect const& sourceRectangle, float opacity, Microsoft::Graphics::Canvas::CanvasImageInterpolation const& interpolation) const;
    void DrawImage(Microsoft::Graphics::Canvas::ICanvasImage const& image, Windows::Foundation::Rect const& destinationRectangle, Windows::Foundation::Rect const& sourceRectangle, float opacity, Microsoft::Graphics::Canvas::CanvasImageInterpolation const& interpolation) const;
    void DrawImage(Microsoft::Graphics::Canvas::ICanvasImage const& image, Windows::Foundation::Numerics::float2 const& offset, Windows::Foundation::Rect const& sourceRectangle, float opacity, Microsoft::Graphics::Canvas::CanvasImageInterpolation const& interpolation, Microsoft::Graphics::Canvas::CanvasComposite const& composite) const;
    void DrawImage(Microsoft::Graphics::Canvas::ICanvasImage const& image, float x, float y, Windows::Foundation::Rect const& sourceRectangle, float opacity, Microsoft::Graphics::Canvas::CanvasImageInterpolation const& interpolation, Microsoft::Graphics::Canvas::CanvasComposite const& composite) const;
    void DrawImage(Microsoft::Graphics::Canvas::ICanvasImage const& image, Windows::Foundation::Rect const& destinationRectangle, Windows::Foundation::Rect const& sourceRectangle, float opacity, Microsoft::Graphics::Canvas::CanvasImageInterpolation const& interpolation, Microsoft::Graphics::Canvas::CanvasComposite const& composite) const;
    void DrawImage(Microsoft::Graphics::Canvas::CanvasBitmap const& bitmap, Windows::Foundation::Numerics::float2 const& offset, Windows::Foundation::Rect const& sourceRectangle, float opacity, Microsoft::Graphics::Canvas::CanvasImageInterpolation const& interpolation, Windows::Foundation::Numerics::float4x4 const& perspective) const;
    void DrawImage(Microsoft::Graphics::Canvas::CanvasBitmap const& bitmap, float x, float y, Windows::Foundation::Rect const& sourceRectangle, float opacity, Microsoft::Graphics::Canvas::CanvasImageInterpolation const& interpolation, Windows::Foundation::Numerics::float4x4 const& perspective) const;
    void DrawImage(Microsoft::Graphics::Canvas::CanvasBitmap const& bitmap, Windows::Foundation::Rect const& destinationRectangle, Windows::Foundation::Rect const& sourceRectangle, float opacity, Microsoft::Graphics::Canvas::CanvasImageInterpolation const& interpolation, Windows::Foundation::Numerics::float4x4 const& perspective) const;
    void DrawLine(Windows::Foundation::Numerics::float2 const& point0, Windows::Foundation::Numerics::float2 const& point1, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush) const;
    void DrawLine(float x0, float y0, float x1, float y1, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush) const;
    void DrawLine(Windows::Foundation::Numerics::float2 const& point0, Windows::Foundation::Numerics::float2 const& point1, Windows::UI::Color const& color) const;
    void DrawLine(float x0, float y0, float x1, float y1, Windows::UI::Color const& color) const;
    void DrawLine(Windows::Foundation::Numerics::float2 const& point0, Windows::Foundation::Numerics::float2 const& point1, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush, float strokeWidth) const;
    void DrawLine(float x0, float y0, float x1, float y1, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush, float strokeWidth) const;
    void DrawLine(Windows::Foundation::Numerics::float2 const& point0, Windows::Foundation::Numerics::float2 const& point1, Windows::UI::Color const& color, float strokeWidth) const;
    void DrawLine(float x0, float y0, float x1, float y1, Windows::UI::Color const& color, float strokeWidth) const;
    void DrawLine(Windows::Foundation::Numerics::float2 const& point0, Windows::Foundation::Numerics::float2 const& point1, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush, float strokeWidth, Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const& strokeStyle) const;
    void DrawLine(float x0, float y0, float x1, float y1, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush, float strokeWidth, Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const& strokeStyle) const;
    void DrawLine(Windows::Foundation::Numerics::float2 const& point0, Windows::Foundation::Numerics::float2 const& point1, Windows::UI::Color const& color, float strokeWidth, Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const& strokeStyle) const;
    void DrawLine(float x0, float y0, float x1, float y1, Windows::UI::Color const& color, float strokeWidth, Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const& strokeStyle) const;
    void DrawRectangle(Windows::Foundation::Rect const& rect, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush) const;
    void DrawRectangle(float x, float y, float w, float h, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush) const;
    void DrawRectangle(Windows::Foundation::Rect const& rect, Windows::UI::Color const& color) const;
    void DrawRectangle(float x, float y, float w, float h, Windows::UI::Color const& color) const;
    void DrawRectangle(Windows::Foundation::Rect const& rect, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush, float strokeWidth) const;
    void DrawRectangle(float x, float y, float w, float h, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush, float strokeWidth) const;
    void DrawRectangle(Windows::Foundation::Rect const& rect, Windows::UI::Color const& color, float strokeWidth) const;
    void DrawRectangle(float x, float y, float w, float h, Windows::UI::Color const& color, float strokeWidth) const;
    void DrawRectangle(Windows::Foundation::Rect const& rect, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush, float strokeWidth, Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const& strokeStyle) const;
    void DrawRectangle(float x, float y, float w, float h, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush, float strokeWidth, Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const& strokeStyle) const;
    void DrawRectangle(Windows::Foundation::Rect const& rect, Windows::UI::Color const& color, float strokeWidth, Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const& strokeStyle) const;
    void DrawRectangle(float x, float y, float w, float h, Windows::UI::Color const& color, float strokeWidth, Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const& strokeStyle) const;
    void FillRectangle(Windows::Foundation::Rect const& rect, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush) const;
    void FillRectangle(float x, float y, float w, float h, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush) const;
    void FillRectangle(Windows::Foundation::Rect const& rect, Windows::UI::Color const& color) const;
    void FillRectangle(float x, float y, float w, float h, Windows::UI::Color const& color) const;
    void FillRectangle(Windows::Foundation::Rect const& rect, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& opacityBrush) const;
    void FillRectangle(float x, float y, float w, float h, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& opacityBrush) const;
    void DrawRoundedRectangle(Windows::Foundation::Rect const& rect, float radiusX, float radiusY, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush) const;
    void DrawRoundedRectangle(float x, float y, float w, float h, float radiusX, float radiusY, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush) const;
    void DrawRoundedRectangle(Windows::Foundation::Rect const& rect, float radiusX, float radiusY, Windows::UI::Color const& color) const;
    void DrawRoundedRectangle(float x, float y, float w, float h, float radiusX, float radiusY, Windows::UI::Color const& color) const;
    void DrawRoundedRectangle(Windows::Foundation::Rect const& rect, float radiusX, float radiusY, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush, float strokeWidth) const;
    void DrawRoundedRectangle(float x, float y, float w, float h, float radiusX, float radiusY, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush, float strokeWidth) const;
    void DrawRoundedRectangle(Windows::Foundation::Rect const& rect, float radiusX, float radiusY, Windows::UI::Color const& color, float strokeWidth) const;
    void DrawRoundedRectangle(float x, float y, float w, float h, float radiusX, float radiusY, Windows::UI::Color const& color, float strokeWidth) const;
    void DrawRoundedRectangle(Windows::Foundation::Rect const& rect, float radiusX, float radiusY, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush, float strokeWidth, Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const& strokeStyle) const;
    void DrawRoundedRectangle(float x, float y, float w, float h, float radiusX, float radiusY, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush, float strokeWidth, Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const& strokeStyle) const;
    void DrawRoundedRectangle(Windows::Foundation::Rect const& rect, float radiusX, float radiusY, Windows::UI::Color const& color, float strokeWidth, Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const& strokeStyle) const;
    void DrawRoundedRectangle(float x, float y, float w, float h, float radiusX, float radiusY, Windows::UI::Color const& color, float strokeWidth, Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const& strokeStyle) const;
    void FillRoundedRectangle(Windows::Foundation::Rect const& rect, float radiusX, float radiusY, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush) const;
    void FillRoundedRectangle(float x, float y, float w, float h, float radiusX, float radiusY, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush) const;
    void FillRoundedRectangle(Windows::Foundation::Rect const& rect, float radiusX, float radiusY, Windows::UI::Color const& color) const;
    void FillRoundedRectangle(float x, float y, float w, float h, float radiusX, float radiusY, Windows::UI::Color const& color) const;
    void DrawEllipse(Windows::Foundation::Numerics::float2 const& centerPoint, float radiusX, float radiusY, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush) const;
    void DrawEllipse(float x, float y, float radiusX, float radiusY, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush) const;
    void DrawEllipse(Windows::Foundation::Numerics::float2 const& centerPoint, float radiusX, float radiusY, Windows::UI::Color const& color) const;
    void DrawEllipse(float x, float y, float radiusX, float radiusY, Windows::UI::Color const& color) const;
    void DrawEllipse(Windows::Foundation::Numerics::float2 const& centerPoint, float radiusX, float radiusY, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush, float strokeWidth) const;
    void DrawEllipse(float x, float y, float radiusX, float radiusY, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush, float strokeWidth) const;
    void DrawEllipse(Windows::Foundation::Numerics::float2 const& centerPoint, float radiusX, float radiusY, Windows::UI::Color const& color, float strokeWidth) const;
    void DrawEllipse(float x, float y, float radiusX, float radiusY, Windows::UI::Color const& color, float strokeWidth) const;
    void DrawEllipse(Windows::Foundation::Numerics::float2 const& centerPoint, float radiusX, float radiusY, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush, float strokeWidth, Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const& strokeStyle) const;
    void DrawEllipse(float x, float y, float radiusX, float radiusY, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush, float strokeWidth, Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const& strokeStyle) const;
    void DrawEllipse(Windows::Foundation::Numerics::float2 const& centerPoint, float radiusX, float radiusY, Windows::UI::Color const& color, float strokeWidth, Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const& strokeStyle) const;
    void DrawEllipse(float x, float y, float radiusX, float radiusY, Windows::UI::Color const& color, float strokeWidth, Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const& strokeStyle) const;
    void FillEllipse(Windows::Foundation::Numerics::float2 const& centerPoint, float radiusX, float radiusY, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush) const;
    void FillEllipse(float x, float y, float radiusX, float radiusY, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush) const;
    void FillEllipse(Windows::Foundation::Numerics::float2 const& centerPoint, float radiusX, float radiusY, Windows::UI::Color const& color) const;
    void FillEllipse(float x, float y, float radiusX, float radiusY, Windows::UI::Color const& color) const;
    void DrawCircle(Windows::Foundation::Numerics::float2 const& centerPoint, float radius, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush) const;
    void DrawCircle(float x, float y, float radius, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush) const;
    void DrawCircle(Windows::Foundation::Numerics::float2 const& centerPoint, float radius, Windows::UI::Color const& color) const;
    void DrawCircle(float x, float y, float radius, Windows::UI::Color const& color) const;
    void DrawCircle(Windows::Foundation::Numerics::float2 const& centerPoint, float radius, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush, float strokeWidth) const;
    void DrawCircle(float x, float y, float radius, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush, float strokeWidth) const;
    void DrawCircle(Windows::Foundation::Numerics::float2 const& centerPoint, float radius, Windows::UI::Color const& color, float strokeWidth) const;
    void DrawCircle(float x, float y, float radius, Windows::UI::Color const& color, float strokeWidth) const;
    void DrawCircle(Windows::Foundation::Numerics::float2 const& centerPoint, float radius, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush, float strokeWidth, Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const& strokeStyle) const;
    void DrawCircle(float x, float y, float radius, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush, float strokeWidth, Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const& strokeStyle) const;
    void DrawCircle(Windows::Foundation::Numerics::float2 const& centerPoint, float radius, Windows::UI::Color const& color, float strokeWidth, Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const& strokeStyle) const;
    void DrawCircle(float x, float y, float radius, Windows::UI::Color const& color, float strokeWidth, Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const& strokeStyle) const;
    void FillCircle(Windows::Foundation::Numerics::float2 const& centerPoint, float radius, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush) const;
    void FillCircle(float x, float y, float radius, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush) const;
    void FillCircle(Windows::Foundation::Numerics::float2 const& centerPoint, float radius, Windows::UI::Color const& color) const;
    void FillCircle(float x, float y, float radius, Windows::UI::Color const& color) const;
    void DrawText(param::hstring const& text, Windows::Foundation::Numerics::float2 const& point, Windows::UI::Color const& color) const;
    void DrawText(param::hstring const& text, float x, float y, Windows::UI::Color const& color) const;
    void DrawText(param::hstring const& text, Windows::Foundation::Numerics::float2 const& point, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush, Microsoft::Graphics::Canvas::Text::CanvasTextFormat const& format) const;
    void DrawText(param::hstring const& text, Windows::Foundation::Rect const& rectangle, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush, Microsoft::Graphics::Canvas::Text::CanvasTextFormat const& format) const;
    void DrawText(param::hstring const& text, float x, float y, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush, Microsoft::Graphics::Canvas::Text::CanvasTextFormat const& format) const;
    void DrawText(param::hstring const& text, float x, float y, float w, float h, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush, Microsoft::Graphics::Canvas::Text::CanvasTextFormat const& format) const;
    void DrawText(param::hstring const& text, Windows::Foundation::Numerics::float2 const& point, Windows::UI::Color const& color, Microsoft::Graphics::Canvas::Text::CanvasTextFormat const& format) const;
    void DrawText(param::hstring const& text, Windows::Foundation::Rect const& rectangle, Windows::UI::Color const& color, Microsoft::Graphics::Canvas::Text::CanvasTextFormat const& format) const;
    void DrawText(param::hstring const& text, float x, float y, Windows::UI::Color const& color, Microsoft::Graphics::Canvas::Text::CanvasTextFormat const& format) const;
    void DrawText(param::hstring const& text, float x, float y, float w, float h, Windows::UI::Color const& color, Microsoft::Graphics::Canvas::Text::CanvasTextFormat const& format) const;
    void DrawGeometry(Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& geometry, Windows::Foundation::Numerics::float2 const& offset, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush) const;
    void DrawGeometry(Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& geometry, Windows::Foundation::Numerics::float2 const& offset, Windows::UI::Color const& color) const;
    void DrawGeometry(Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& geometry, float x, float y, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush) const;
    void DrawGeometry(Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& geometry, float x, float y, Windows::UI::Color const& color) const;
    void DrawGeometry(Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& geometry, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush) const;
    void DrawGeometry(Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& geometry, Windows::UI::Color const& color) const;
    void DrawGeometry(Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& geometry, Windows::Foundation::Numerics::float2 const& offset, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush, float strokeWidth) const;
    void DrawGeometry(Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& geometry, Windows::Foundation::Numerics::float2 const& offset, Windows::UI::Color const& color, float strokeWidth) const;
    void DrawGeometry(Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& geometry, float x, float y, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush, float strokeWidth) const;
    void DrawGeometry(Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& geometry, float x, float y, Windows::UI::Color const& color, float strokeWidth) const;
    void DrawGeometry(Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& geometry, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush, float strokeWidth) const;
    void DrawGeometry(Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& geometry, Windows::UI::Color const& color, float strokeWidth) const;
    void DrawGeometry(Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& geometry, Windows::Foundation::Numerics::float2 const& offset, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush, float strokeWidth, Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const& strokeStyle) const;
    void DrawGeometry(Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& geometry, Windows::Foundation::Numerics::float2 const& offset, Windows::UI::Color const& color, float strokeWidth, Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const& strokeStyle) const;
    void DrawGeometry(Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& geometry, float x, float y, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush, float strokeWidth, Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const& strokeStyle) const;
    void DrawGeometry(Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& geometry, float x, float y, Windows::UI::Color const& color, float strokeWidth, Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const& strokeStyle) const;
    void DrawGeometry(Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& geometry, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush, float strokeWidth, Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const& strokeStyle) const;
    void DrawGeometry(Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& geometry, Windows::UI::Color const& color, float strokeWidth, Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const& strokeStyle) const;
    void FillGeometry(Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& geometry, Windows::Foundation::Numerics::float2 const& offset, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush) const;
    void FillGeometry(Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& geometry, Windows::Foundation::Numerics::float2 const& offset, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& opacityBrush) const;
    void FillGeometry(Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& geometry, Windows::Foundation::Numerics::float2 const& offset, Windows::UI::Color const& color) const;
    void FillGeometry(Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& geometry, float x, float y, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush) const;
    void FillGeometry(Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& geometry, float x, float y, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& opacityBrush) const;
    void FillGeometry(Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& geometry, float x, float y, Windows::UI::Color const& color) const;
    void FillGeometry(Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& geometry, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush) const;
    void FillGeometry(Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& geometry, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& opacityBrush) const;
    void FillGeometry(Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& geometry, Windows::UI::Color const& color) const;
    void DrawCachedGeometry(Microsoft::Graphics::Canvas::Geometry::CanvasCachedGeometry const& geometry, Windows::Foundation::Numerics::float2 const& offset, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush) const;
    void DrawCachedGeometry(Microsoft::Graphics::Canvas::Geometry::CanvasCachedGeometry const& geometry, Windows::Foundation::Numerics::float2 const& offset, Windows::UI::Color const& color) const;
    void DrawCachedGeometry(Microsoft::Graphics::Canvas::Geometry::CanvasCachedGeometry const& geometry, float x, float y, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush) const;
    void DrawCachedGeometry(Microsoft::Graphics::Canvas::Geometry::CanvasCachedGeometry const& geometry, float x, float y, Windows::UI::Color const& color) const;
    void DrawCachedGeometry(Microsoft::Graphics::Canvas::Geometry::CanvasCachedGeometry const& geometry, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush) const;
    void DrawCachedGeometry(Microsoft::Graphics::Canvas::Geometry::CanvasCachedGeometry const& geometry, Windows::UI::Color const& color) const;
    void DrawTextLayout(Microsoft::Graphics::Canvas::Text::CanvasTextLayout const& textLayout, Windows::Foundation::Numerics::float2 const& point, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush) const;
    void DrawTextLayout(Microsoft::Graphics::Canvas::Text::CanvasTextLayout const& textLayout, float x, float y, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush) const;
    void DrawTextLayout(Microsoft::Graphics::Canvas::Text::CanvasTextLayout const& textLayout, Windows::Foundation::Numerics::float2 const& point, Windows::UI::Color const& color) const;
    void DrawTextLayout(Microsoft::Graphics::Canvas::Text::CanvasTextLayout const& textLayout, float x, float y, Windows::UI::Color const& color) const;
    void DrawInk(param::iterable<Windows::UI::Input::Inking::InkStroke> const& inkStrokes) const;
    void DrawInk(param::iterable<Windows::UI::Input::Inking::InkStroke> const& inkStrokes, bool highContrast) const;
    void DrawGradientMesh(Microsoft::Graphics::Canvas::Geometry::CanvasGradientMesh const& gradientMesh) const;
    void DrawGradientMesh(Microsoft::Graphics::Canvas::Geometry::CanvasGradientMesh const& gradientMesh, Windows::Foundation::Numerics::float2 const& point) const;
    void DrawGradientMesh(Microsoft::Graphics::Canvas::Geometry::CanvasGradientMesh const& gradientMesh, float x, float y) const;
    void DrawSvg(Microsoft::Graphics::Canvas::Svg::CanvasSvgDocument const& svgDocument, Windows::Foundation::Size const& viewportSize) const;
    void DrawSvg(Microsoft::Graphics::Canvas::Svg::CanvasSvgDocument const& svgDocument, Windows::Foundation::Size const& viewportSize, Windows::Foundation::Numerics::float2 const& point) const;
    void DrawSvg(Microsoft::Graphics::Canvas::Svg::CanvasSvgDocument const& svgDocument, Windows::Foundation::Size const& viewportSize, float x, float y) const;
    Microsoft::Graphics::Canvas::CanvasAntialiasing Antialiasing() const;
    void Antialiasing(Microsoft::Graphics::Canvas::CanvasAntialiasing const& value) const;
    Microsoft::Graphics::Canvas::CanvasBlend Blend() const;
    void Blend(Microsoft::Graphics::Canvas::CanvasBlend const& value) const;
    Microsoft::Graphics::Canvas::Text::CanvasTextAntialiasing TextAntialiasing() const;
    void TextAntialiasing(Microsoft::Graphics::Canvas::Text::CanvasTextAntialiasing const& value) const;
    Microsoft::Graphics::Canvas::Text::CanvasTextRenderingParameters TextRenderingParameters() const;
    void TextRenderingParameters(Microsoft::Graphics::Canvas::Text::CanvasTextRenderingParameters const& value) const;
    Windows::Foundation::Numerics::float3x2 Transform() const;
    void Transform(Windows::Foundation::Numerics::float3x2 const& value) const;
    Microsoft::Graphics::Canvas::CanvasUnits Units() const;
    void Units(Microsoft::Graphics::Canvas::CanvasUnits const& value) const;
    Windows::Foundation::IReference<Microsoft::Graphics::Canvas::CanvasBufferPrecision> EffectBufferPrecision() const;
    void EffectBufferPrecision(optional<Microsoft::Graphics::Canvas::CanvasBufferPrecision> const& value) const;
    Windows::Graphics::Imaging::BitmapSize EffectTileSize() const;
    void EffectTileSize(Windows::Graphics::Imaging::BitmapSize const& value) const;
    Microsoft::Graphics::Canvas::CanvasActiveLayer CreateLayer(float opacity) const;
    Microsoft::Graphics::Canvas::CanvasActiveLayer CreateLayer(Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& opacityBrush) const;
    Microsoft::Graphics::Canvas::CanvasActiveLayer CreateLayer(float opacity, Windows::Foundation::Rect const& clipRectangle) const;
    Microsoft::Graphics::Canvas::CanvasActiveLayer CreateLayer(Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& opacityBrush, Windows::Foundation::Rect const& clipRectangle) const;
    Microsoft::Graphics::Canvas::CanvasActiveLayer CreateLayer(float opacity, Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& clipGeometry) const;
    Microsoft::Graphics::Canvas::CanvasActiveLayer CreateLayer(Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& opacityBrush, Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& clipGeometry) const;
    Microsoft::Graphics::Canvas::CanvasActiveLayer CreateLayer(float opacity, Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& clipGeometry, Windows::Foundation::Numerics::float3x2 const& geometryTransform) const;
    Microsoft::Graphics::Canvas::CanvasActiveLayer CreateLayer(Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& opacityBrush, Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& clipGeometry, Windows::Foundation::Numerics::float3x2 const& geometryTransform) const;
    Microsoft::Graphics::Canvas::CanvasActiveLayer CreateLayer(float opacity, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& opacityBrush, Windows::Foundation::Rect const& clipRectangle, Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& clipGeometry, Windows::Foundation::Numerics::float3x2 const& geometryTransform, Microsoft::Graphics::Canvas::CanvasLayerOptions const& options) const;
    void DrawGlyphRun(Windows::Foundation::Numerics::float2 const& point, Microsoft::Graphics::Canvas::Text::CanvasFontFace const& fontFace, float fontSize, array_view<Microsoft::Graphics::Canvas::Text::CanvasGlyph const> glyphs, bool isSideways, uint32_t bidiLevel, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush) const;
    void DrawGlyphRun(Windows::Foundation::Numerics::float2 const& point, Microsoft::Graphics::Canvas::Text::CanvasFontFace const& fontFace, float fontSize, array_view<Microsoft::Graphics::Canvas::Text::CanvasGlyph const> glyphs, bool isSideways, uint32_t bidiLevel, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush, Microsoft::Graphics::Canvas::Text::CanvasTextMeasuringMode const& measuringMode) const;
    void DrawGlyphRun(Windows::Foundation::Numerics::float2 const& point, Microsoft::Graphics::Canvas::Text::CanvasFontFace const& fontFace, float fontSize, array_view<Microsoft::Graphics::Canvas::Text::CanvasGlyph const> glyphs, bool isSideways, uint32_t bidiLevel, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush, Microsoft::Graphics::Canvas::Text::CanvasTextMeasuringMode const& measuringMode, param::hstring const& localeName, param::hstring const& textString, array_view<int32_t const> clusterMapIndices, uint32_t textPosition) const;
    Microsoft::Graphics::Canvas::CanvasSpriteBatch CreateSpriteBatch() const;
    Microsoft::Graphics::Canvas::CanvasSpriteBatch CreateSpriteBatch(Microsoft::Graphics::Canvas::CanvasSpriteSortMode const& sortMode) const;
    Microsoft::Graphics::Canvas::CanvasSpriteBatch CreateSpriteBatch(Microsoft::Graphics::Canvas::CanvasSpriteSortMode const& sortMode, Microsoft::Graphics::Canvas::CanvasImageInterpolation const& interpolation) const;
    Microsoft::Graphics::Canvas::CanvasSpriteBatch CreateSpriteBatch(Microsoft::Graphics::Canvas::CanvasSpriteSortMode const& sortMode, Microsoft::Graphics::Canvas::CanvasImageInterpolation const& interpolation, Microsoft::Graphics::Canvas::CanvasSpriteOptions const& options) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::ICanvasDrawingSession> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_ICanvasImage
{
    Windows::Foundation::Rect GetBounds(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator) const;
    Windows::Foundation::Rect GetBounds(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Foundation::Numerics::float3x2 const& transform) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::ICanvasImage> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_ICanvasImage<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_ICanvasImageStatics
{
    Windows::Foundation::IAsyncAction SaveAsync(Microsoft::Graphics::Canvas::ICanvasImage const& image, Windows::Foundation::Rect const& sourceRectangle, float dpi, Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Storage::Streams::IRandomAccessStream const& stream, Microsoft::Graphics::Canvas::CanvasBitmapFileFormat const& fileFormat) const;
    Windows::Foundation::IAsyncAction SaveAsync(Microsoft::Graphics::Canvas::ICanvasImage const& image, Windows::Foundation::Rect const& sourceRectangle, float dpi, Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Storage::Streams::IRandomAccessStream const& stream, Microsoft::Graphics::Canvas::CanvasBitmapFileFormat const& fileFormat, float quality) const;
    Windows::Foundation::IAsyncAction SaveAsync(Microsoft::Graphics::Canvas::ICanvasImage const& image, Windows::Foundation::Rect const& sourceRectangle, float dpi, Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Storage::Streams::IRandomAccessStream const& stream, Microsoft::Graphics::Canvas::CanvasBitmapFileFormat const& fileFormat, float quality, Microsoft::Graphics::Canvas::CanvasBufferPrecision const& bufferPrecision) const;
    com_array<float> ComputeHistogram(Microsoft::Graphics::Canvas::ICanvasImage const& image, Windows::Foundation::Rect const& sourceRectangle, Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Microsoft::Graphics::Canvas::Effects::EffectChannelSelect const& channelSelect, int32_t numberOfBins) const;
    bool IsHistogramSupported(Microsoft::Graphics::Canvas::CanvasDevice const& device) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::ICanvasImageStatics> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_ICanvasImageStatics<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_ICanvasLock
{
};
template <> struct consume<Microsoft::Graphics::Canvas::ICanvasLock> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_ICanvasLock<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_ICanvasRenderTarget
{
    Microsoft::Graphics::Canvas::CanvasDrawingSession CreateDrawingSession() const;
};
template <> struct consume<Microsoft::Graphics::Canvas::ICanvasRenderTarget> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_ICanvasRenderTarget<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_ICanvasRenderTargetFactory
{
    Microsoft::Graphics::Canvas::CanvasRenderTarget CreateWithSize(Microsoft::Graphics::Canvas::ICanvasResourceCreatorWithDpi const& resourceCreator, Windows::Foundation::Size const& size) const;
    Microsoft::Graphics::Canvas::CanvasRenderTarget CreateWithWidthAndHeight(Microsoft::Graphics::Canvas::ICanvasResourceCreatorWithDpi const& resourceCreator, float width, float height) const;
    Microsoft::Graphics::Canvas::CanvasRenderTarget CreateWithWidthAndHeightAndDpi(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, float width, float height, float dpi) const;
    Microsoft::Graphics::Canvas::CanvasRenderTarget CreateWithWidthAndHeightAndDpiAndFormatAndAlpha(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, float width, float height, float dpi, Windows::Graphics::DirectX::DirectXPixelFormat const& format, Microsoft::Graphics::Canvas::CanvasAlphaMode const& alpha) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::ICanvasRenderTargetFactory> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_ICanvasRenderTargetFactory<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_ICanvasRenderTargetStatics
{
    Microsoft::Graphics::Canvas::CanvasRenderTarget CreateFromDirect3D11Surface(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const& surface) const;
    Microsoft::Graphics::Canvas::CanvasRenderTarget CreateFromDirect3D11Surface(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const& surface, float dpi) const;
    Microsoft::Graphics::Canvas::CanvasRenderTarget CreateFromDirect3D11Surface(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const& surface, float dpi, Microsoft::Graphics::Canvas::CanvasAlphaMode const& alpha) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::ICanvasRenderTargetStatics> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_ICanvasRenderTargetStatics<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_ICanvasResourceCreator
{
    Microsoft::Graphics::Canvas::CanvasDevice Device() const;
};
template <> struct consume<Microsoft::Graphics::Canvas::ICanvasResourceCreator> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_ICanvasResourceCreator<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_ICanvasResourceCreatorWithDpi
{
    float Dpi() const;
    float ConvertPixelsToDips(int32_t pixels) const;
    int32_t ConvertDipsToPixels(float dips, Microsoft::Graphics::Canvas::CanvasDpiRounding const& dpiRounding) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::ICanvasResourceCreatorWithDpi> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_ICanvasResourceCreatorWithDpi<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_ICanvasSpriteBatch
{
    void Draw(Microsoft::Graphics::Canvas::CanvasBitmap const& bitmap, Windows::Foundation::Rect const& destRect) const;
    void Draw(Microsoft::Graphics::Canvas::CanvasBitmap const& bitmap, Windows::Foundation::Numerics::float2 const& offset) const;
    void Draw(Microsoft::Graphics::Canvas::CanvasBitmap const& bitmap, Windows::Foundation::Numerics::float3x2 const& transform) const;
    void Draw(Microsoft::Graphics::Canvas::CanvasBitmap const& bitmap, Windows::Foundation::Rect const& destRect, Windows::Foundation::Numerics::float4 const& tint) const;
    void Draw(Microsoft::Graphics::Canvas::CanvasBitmap const& bitmap, Windows::Foundation::Numerics::float2 const& offset, Windows::Foundation::Numerics::float4 const& tint) const;
    void Draw(Microsoft::Graphics::Canvas::CanvasBitmap const& bitmap, Windows::Foundation::Numerics::float3x2 const& transform, Windows::Foundation::Numerics::float4 const& tint) const;
    void Draw(Microsoft::Graphics::Canvas::CanvasBitmap const& bitmap, Windows::Foundation::Rect const& destRect, Windows::Foundation::Numerics::float4 const& tint, Microsoft::Graphics::Canvas::CanvasSpriteFlip const& flip) const;
    void Draw(Microsoft::Graphics::Canvas::CanvasBitmap const& bitmap, Windows::Foundation::Numerics::float3x2 const& transform, Windows::Foundation::Numerics::float4 const& tint, Microsoft::Graphics::Canvas::CanvasSpriteFlip const& flip) const;
    void Draw(Microsoft::Graphics::Canvas::CanvasBitmap const& bitmap, Windows::Foundation::Numerics::float2 const& offset, Windows::Foundation::Numerics::float4 const& tint, Windows::Foundation::Numerics::float2 const& origin, float rotation, Windows::Foundation::Numerics::float2 const& scale, Microsoft::Graphics::Canvas::CanvasSpriteFlip const& flip) const;
    void DrawFromSpriteSheet(Microsoft::Graphics::Canvas::CanvasBitmap const& bitmap, Windows::Foundation::Rect const& destRect, Windows::Foundation::Rect const& sourceRect) const;
    void DrawFromSpriteSheet(Microsoft::Graphics::Canvas::CanvasBitmap const& bitmap, Windows::Foundation::Numerics::float2 const& offset, Windows::Foundation::Rect const& sourceRect) const;
    void DrawFromSpriteSheet(Microsoft::Graphics::Canvas::CanvasBitmap const& bitmap, Windows::Foundation::Numerics::float3x2 const& transform, Windows::Foundation::Rect const& sourceRect) const;
    void DrawFromSpriteSheet(Microsoft::Graphics::Canvas::CanvasBitmap const& bitmap, Windows::Foundation::Rect const& destRect, Windows::Foundation::Rect const& sourceRect, Windows::Foundation::Numerics::float4 const& tint) const;
    void DrawFromSpriteSheet(Microsoft::Graphics::Canvas::CanvasBitmap const& bitmap, Windows::Foundation::Numerics::float2 const& offset, Windows::Foundation::Rect const& sourceRect, Windows::Foundation::Numerics::float4 const& tint) const;
    void DrawFromSpriteSheet(Microsoft::Graphics::Canvas::CanvasBitmap const& bitmap, Windows::Foundation::Numerics::float3x2 const& transform, Windows::Foundation::Rect const& sourceRect, Windows::Foundation::Numerics::float4 const& tint) const;
    void DrawFromSpriteSheet(Microsoft::Graphics::Canvas::CanvasBitmap const& bitmap, Windows::Foundation::Rect const& destRect, Windows::Foundation::Rect const& sourceRect, Windows::Foundation::Numerics::float4 const& tint, Microsoft::Graphics::Canvas::CanvasSpriteFlip const& flip) const;
    void DrawFromSpriteSheet(Microsoft::Graphics::Canvas::CanvasBitmap const& bitmap, Windows::Foundation::Numerics::float3x2 const& transform, Windows::Foundation::Rect const& sourceRect, Windows::Foundation::Numerics::float4 const& tint, Microsoft::Graphics::Canvas::CanvasSpriteFlip const& flip) const;
    void DrawFromSpriteSheet(Microsoft::Graphics::Canvas::CanvasBitmap const& bitmap, Windows::Foundation::Numerics::float2 const& offset, Windows::Foundation::Rect const& sourceRect, Windows::Foundation::Numerics::float4 const& tint, Windows::Foundation::Numerics::float2 const& origin, float rotation, Windows::Foundation::Numerics::float2 const& scale, Microsoft::Graphics::Canvas::CanvasSpriteFlip const& flip) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::ICanvasSpriteBatch> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_ICanvasSpriteBatch<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_ICanvasSpriteBatchStatics
{
    bool IsSupported(Microsoft::Graphics::Canvas::CanvasDevice const& device) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::ICanvasSpriteBatchStatics> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_ICanvasSpriteBatchStatics<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_ICanvasSwapChain
{
    void Present() const;
    void Present(int32_t syncInterval) const;
    void ResizeBuffers(Windows::Foundation::Size const& newSize) const;
    void ResizeBuffers(float newWidth, float newHeight) const;
    void ResizeBuffers(float newWidth, float newHeight, float newDpi) const;
    void ResizeBuffers(float newWidth, float newHeight, float newDpi, Windows::Graphics::DirectX::DirectXPixelFormat const& newFormat, int32_t bufferCount) const;
    Windows::Foundation::Size Size() const;
    Windows::Graphics::Imaging::BitmapSize SizeInPixels() const;
    Windows::Graphics::DirectX::DirectXPixelFormat Format() const;
    int32_t BufferCount() const;
    Microsoft::Graphics::Canvas::CanvasAlphaMode AlphaMode() const;
    Microsoft::Graphics::Canvas::CanvasSwapChainRotation Rotation() const;
    void Rotation(Microsoft::Graphics::Canvas::CanvasSwapChainRotation const& value) const;
    Windows::Foundation::Size SourceSize() const;
    void SourceSize(Windows::Foundation::Size const& value) const;
    Windows::Foundation::Numerics::float3x2 TransformMatrix() const;
    void TransformMatrix(Windows::Foundation::Numerics::float3x2 const& value) const;
    Microsoft::Graphics::Canvas::CanvasDrawingSession CreateDrawingSession(Windows::UI::Color const& clearColor) const;
    void WaitForVerticalBlank() const;
};
template <> struct consume<Microsoft::Graphics::Canvas::ICanvasSwapChain> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_ICanvasSwapChain<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_ICanvasSwapChainFactory
{
    Microsoft::Graphics::Canvas::CanvasSwapChain CreateWithSize(Microsoft::Graphics::Canvas::ICanvasResourceCreatorWithDpi const& resourceCreator, Windows::Foundation::Size const& size) const;
    Microsoft::Graphics::Canvas::CanvasSwapChain CreateWithWidthAndHeight(Microsoft::Graphics::Canvas::ICanvasResourceCreatorWithDpi const& resourceCreator, float width, float height) const;
    Microsoft::Graphics::Canvas::CanvasSwapChain CreateWithWidthAndHeightAndDpi(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, float width, float height, float dpi) const;
    Microsoft::Graphics::Canvas::CanvasSwapChain CreateWithAllOptions(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, float width, float height, float dpi, Windows::Graphics::DirectX::DirectXPixelFormat const& format, int32_t bufferCount, Microsoft::Graphics::Canvas::CanvasAlphaMode const& alphaMode) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::ICanvasSwapChainFactory> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_ICanvasSwapChainFactory<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_ICanvasSwapChainStatics
{
    Microsoft::Graphics::Canvas::CanvasSwapChain CreateForCoreWindow(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::UI::Core::CoreWindow const& coreWindow, float dpi) const;
    Microsoft::Graphics::Canvas::CanvasSwapChain CreateForCoreWindow(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::UI::Core::CoreWindow const& coreWindow, float width, float height, float dpi, Windows::Graphics::DirectX::DirectXPixelFormat const& format, int32_t bufferCount) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::ICanvasSwapChainStatics> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_ICanvasSwapChainStatics<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_ICanvasVirtualBitmap
{
    Microsoft::Graphics::Canvas::CanvasDevice Device() const;
    bool IsCachedOnDemand() const;
    Windows::Graphics::Imaging::BitmapSize SizeInPixels() const;
    Windows::Foundation::Size Size() const;
    Windows::Foundation::Rect Bounds() const;
};
template <> struct consume<Microsoft::Graphics::Canvas::ICanvasVirtualBitmap> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_ICanvasVirtualBitmap<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_ICanvasVirtualBitmapStatics
{
    Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::CanvasVirtualBitmap> LoadAsync(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, param::hstring const& fileName) const;
    Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::CanvasVirtualBitmap> LoadAsync(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, param::hstring const& fileName, Microsoft::Graphics::Canvas::CanvasVirtualBitmapOptions const& options) const;
    Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::CanvasVirtualBitmap> LoadAsync(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, param::hstring const& fileName, Microsoft::Graphics::Canvas::CanvasVirtualBitmapOptions const& options, Microsoft::Graphics::Canvas::CanvasAlphaMode const& alpha) const;
    Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::CanvasVirtualBitmap> LoadAsync(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Foundation::Uri const& uri) const;
    Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::CanvasVirtualBitmap> LoadAsync(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Foundation::Uri const& uri, Microsoft::Graphics::Canvas::CanvasVirtualBitmapOptions const& options) const;
    Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::CanvasVirtualBitmap> LoadAsync(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Foundation::Uri const& uri, Microsoft::Graphics::Canvas::CanvasVirtualBitmapOptions const& options, Microsoft::Graphics::Canvas::CanvasAlphaMode const& alpha) const;
    Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::CanvasVirtualBitmap> LoadAsync(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Storage::Streams::IRandomAccessStream const& stream) const;
    Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::CanvasVirtualBitmap> LoadAsync(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Storage::Streams::IRandomAccessStream const& stream, Microsoft::Graphics::Canvas::CanvasVirtualBitmapOptions const& options) const;
    Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::CanvasVirtualBitmap> LoadAsync(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Storage::Streams::IRandomAccessStream const& stream, Microsoft::Graphics::Canvas::CanvasVirtualBitmapOptions const& options, Microsoft::Graphics::Canvas::CanvasAlphaMode const& alpha) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::ICanvasVirtualBitmapStatics> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_ICanvasVirtualBitmapStatics<D>; };

template <> struct abi<Microsoft::Graphics::Canvas::ICanvasActiveLayer>{ struct type : ::IInspectable
{
};};

template <> struct abi<Microsoft::Graphics::Canvas::ICanvasBitmap>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_SizeInPixels(struct_of<8>* size) = 0;
    virtual HRESULT __stdcall get_Size(Windows::Foundation::Size* size) = 0;
    virtual HRESULT __stdcall get_Bounds(Windows::Foundation::Rect* bounds) = 0;
    virtual HRESULT __stdcall get_Format(Windows::Graphics::DirectX::DirectXPixelFormat* value) = 0;
    virtual HRESULT __stdcall get_AlphaMode(Microsoft::Graphics::Canvas::CanvasAlphaMode* value) = 0;
    virtual HRESULT __stdcall SaveToFileAsync(HSTRING fileName, ::IUnknown** asyncAction) = 0;
    virtual HRESULT __stdcall SaveToFileWithBitmapFileFormatAsync(HSTRING fileName, Microsoft::Graphics::Canvas::CanvasBitmapFileFormat fileFormat, ::IUnknown** asyncAction) = 0;
    virtual HRESULT __stdcall SaveToFileWithBitmapFileFormatAndQualityAsync(HSTRING fileName, Microsoft::Graphics::Canvas::CanvasBitmapFileFormat fileFormat, float quality, ::IUnknown** asyncAction) = 0;
    virtual HRESULT __stdcall SaveToStreamAsync(::IUnknown* stream, Microsoft::Graphics::Canvas::CanvasBitmapFileFormat fileFormat, ::IUnknown** asyncAction) = 0;
    virtual HRESULT __stdcall SaveToStreamWithQualityAsync(::IUnknown* stream, Microsoft::Graphics::Canvas::CanvasBitmapFileFormat fileFormat, float quality, ::IUnknown** asyncAction) = 0;
    virtual HRESULT __stdcall GetPixelBytes(uint32_t* __valueElementsSize, uint8_t** valueElements) = 0;
    virtual HRESULT __stdcall GetPixelBytesWithSubrectangle(int32_t left, int32_t top, int32_t width, int32_t height, uint32_t* __valueElementsSize, uint8_t** valueElements) = 0;
    virtual HRESULT __stdcall GetPixelBytesWithBuffer(::IUnknown* buffer) = 0;
    virtual HRESULT __stdcall GetPixelBytesWithBufferAndSubrectangle(::IUnknown* buffer, int32_t left, int32_t top, int32_t width, int32_t height) = 0;
    virtual HRESULT __stdcall GetPixelColors(uint32_t* __valueElementsSize, struct_of<4>** valueElements) = 0;
    virtual HRESULT __stdcall GetPixelColorsWithSubrectangle(int32_t left, int32_t top, int32_t width, int32_t height, uint32_t* __valueElementsSize, struct_of<4>** valueElements) = 0;
    virtual HRESULT __stdcall SetPixelBytes(uint32_t __valueElementsSize, uint8_t* valueElements) = 0;
    virtual HRESULT __stdcall SetPixelBytesWithSubrectangle(uint32_t __valueElementsSize, uint8_t* valueElements, int32_t left, int32_t top, int32_t width, int32_t height) = 0;
    virtual HRESULT __stdcall SetPixelBytesWithBuffer(::IUnknown* buffer) = 0;
    virtual HRESULT __stdcall SetPixelBytesWithBufferAndSubrectangle(::IUnknown* buffer, int32_t left, int32_t top, int32_t width, int32_t height) = 0;
    virtual HRESULT __stdcall SetPixelColors(uint32_t __valueElementsSize, struct_of<4>* valueElements) = 0;
    virtual HRESULT __stdcall SetPixelColorsWithSubrectangle(uint32_t __valueElementsSize, struct_of<4>* valueElements, int32_t left, int32_t top, int32_t width, int32_t height) = 0;
    virtual HRESULT __stdcall CopyPixelsFromBitmap(::IUnknown* otherBitmap) = 0;
    virtual HRESULT __stdcall CopyPixelsFromBitmapWithDestPoint(::IUnknown* otherBitmap, int32_t destX, int32_t destY) = 0;
    virtual HRESULT __stdcall CopyPixelsFromBitmapWithDestPointAndSourceRect(::IUnknown* otherBitmap, int32_t destX, int32_t destY, int32_t sourceRectLeft, int32_t sourceRectTop, int32_t sourceRectWidth, int32_t sourceRectHeight) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::ICanvasBitmapFactory>{ struct type : ::IInspectable
{
};};

template <> struct abi<Microsoft::Graphics::Canvas::ICanvasBitmapStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateFromDirect3D11Surface(::IUnknown* resourceCreator, ::IUnknown* surface, ::IUnknown** bitmap) = 0;
    virtual HRESULT __stdcall CreateFromDirect3D11SurfaceWithDpi(::IUnknown* resourceCreator, ::IUnknown* surface, float dpi, ::IUnknown** bitmap) = 0;
    virtual HRESULT __stdcall CreateFromDirect3D11SurfaceWithDpiAndAlpha(::IUnknown* resourceCreator, ::IUnknown* surface, float dpi, Microsoft::Graphics::Canvas::CanvasAlphaMode alpha, ::IUnknown** bitmap) = 0;
    virtual HRESULT __stdcall CreateFromBytes(::IUnknown* resourceCreator, uint32_t __bytesSize, uint8_t* bytes, int32_t widthInPixels, int32_t heightInPixels, Windows::Graphics::DirectX::DirectXPixelFormat format, ::IUnknown** bitmap) = 0;
    virtual HRESULT __stdcall CreateFromBytesWithDpi(::IUnknown* resourceCreator, uint32_t __bytesSize, uint8_t* bytes, int32_t widthInPixels, int32_t heightInPixels, Windows::Graphics::DirectX::DirectXPixelFormat format, float dpi, ::IUnknown** bitmap) = 0;
    virtual HRESULT __stdcall CreateFromBytesWithDpiAndAlpha(::IUnknown* resourceCreator, uint32_t __bytesSize, uint8_t* bytes, int32_t widthInPixels, int32_t heightInPixels, Windows::Graphics::DirectX::DirectXPixelFormat format, float dpi, Microsoft::Graphics::Canvas::CanvasAlphaMode alpha, ::IUnknown** bitmap) = 0;
    virtual HRESULT __stdcall CreateFromBytesWithBuffer(::IUnknown* resourceCreator, ::IUnknown* buffer, int32_t widthInPixels, int32_t heightInPixels, Windows::Graphics::DirectX::DirectXPixelFormat format, ::IUnknown** bitmap) = 0;
    virtual HRESULT __stdcall CreateFromBytesWithBufferAndDpi(::IUnknown* resourceCreator, ::IUnknown* buffer, int32_t widthInPixels, int32_t heightInPixels, Windows::Graphics::DirectX::DirectXPixelFormat format, float dpi, ::IUnknown** bitmap) = 0;
    virtual HRESULT __stdcall CreateFromBytesWithBufferAndDpiAndAlpha(::IUnknown* resourceCreator, ::IUnknown* buffer, int32_t widthInPixels, int32_t heightInPixels, Windows::Graphics::DirectX::DirectXPixelFormat format, float dpi, Microsoft::Graphics::Canvas::CanvasAlphaMode alpha, ::IUnknown** bitmap) = 0;
    virtual HRESULT __stdcall CreateFromColors(::IUnknown* resourceCreator, uint32_t __colorsSize, struct_of<4>* colors, int32_t widthInPixels, int32_t heightInPixels, ::IUnknown** bitmap) = 0;
    virtual HRESULT __stdcall CreateFromColorsWithDpi(::IUnknown* resourceCreator, uint32_t __colorsSize, struct_of<4>* colors, int32_t widthInPixels, int32_t heightInPixels, float dpi, ::IUnknown** bitmap) = 0;
    virtual HRESULT __stdcall CreateFromColorsWithDpiAndAlpha(::IUnknown* resourceCreator, uint32_t __colorsSize, struct_of<4>* colors, int32_t widthInPixels, int32_t heightInPixels, float dpi, Microsoft::Graphics::Canvas::CanvasAlphaMode alpha, ::IUnknown** bitmap) = 0;
    virtual HRESULT __stdcall CreateFromSoftwareBitmap(::IUnknown* resourceCreator, ::IUnknown* sourceBitmap, ::IUnknown** bitmap) = 0;
    virtual HRESULT __stdcall LoadAsyncFromHstring(::IUnknown* resourceCreator, HSTRING fileName, ::IUnknown** canvasBitmap) = 0;
    virtual HRESULT __stdcall LoadAsyncFromHstringWithDpi(::IUnknown* resourceCreator, HSTRING fileName, float dpi, ::IUnknown** canvasBitmap) = 0;
    virtual HRESULT __stdcall LoadAsyncFromHstringWithDpiAndAlpha(::IUnknown* resourceCreator, HSTRING fileName, float dpi, Microsoft::Graphics::Canvas::CanvasAlphaMode alpha, ::IUnknown** canvasBitmap) = 0;
    virtual HRESULT __stdcall LoadAsyncFromUri(::IUnknown* resourceCreator, ::IUnknown* uri, ::IUnknown** canvasBitmap) = 0;
    virtual HRESULT __stdcall LoadAsyncFromUriWithDpi(::IUnknown* resourceCreator, ::IUnknown* uri, float dpi, ::IUnknown** canvasBitmap) = 0;
    virtual HRESULT __stdcall LoadAsyncFromUriWithDpiAndAlpha(::IUnknown* resourceCreator, ::IUnknown* uri, float dpi, Microsoft::Graphics::Canvas::CanvasAlphaMode alpha, ::IUnknown** canvasBitmap) = 0;
    virtual HRESULT __stdcall LoadAsyncFromStream(::IUnknown* resourceCreator, ::IUnknown* stream, ::IUnknown** canvasBitmap) = 0;
    virtual HRESULT __stdcall LoadAsyncFromStreamWithDpi(::IUnknown* resourceCreator, ::IUnknown* stream, float dpi, ::IUnknown** canvasBitmap) = 0;
    virtual HRESULT __stdcall LoadAsyncFromStreamWithDpiAndAlpha(::IUnknown* resourceCreator, ::IUnknown* stream, float dpi, Microsoft::Graphics::Canvas::CanvasAlphaMode alpha, ::IUnknown** canvasBitmap) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::ICanvasCommandList>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateDrawingSession(::IUnknown** drawingSession) = 0;
    virtual HRESULT __stdcall get_Device(::IUnknown** value) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::ICanvasCommandListFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(::IUnknown* resourceCreator, ::IUnknown** commandList) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::ICanvasDevice>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ForceSoftwareRenderer(bool* value) = 0;
    virtual HRESULT __stdcall get_MaximumBitmapSizeInPixels(int32_t* value) = 0;
    virtual HRESULT __stdcall IsPixelFormatSupported(Windows::Graphics::DirectX::DirectXPixelFormat pixelFormat, bool* value) = 0;
    virtual HRESULT __stdcall IsBufferPrecisionSupported(Microsoft::Graphics::Canvas::CanvasBufferPrecision bufferPrecision, bool* value) = 0;
    virtual HRESULT __stdcall get_MaximumCacheSize(uint64_t* value) = 0;
    virtual HRESULT __stdcall put_MaximumCacheSize(uint64_t value) = 0;
    virtual HRESULT __stdcall get_LowPriority(bool* value) = 0;
    virtual HRESULT __stdcall put_LowPriority(bool value) = 0;
    virtual HRESULT __stdcall add_DeviceLost(::IUnknown* value, event_token* token) = 0;
    virtual HRESULT __stdcall remove_DeviceLost(event_token token) = 0;
    virtual HRESULT __stdcall IsDeviceLost(int32_t hresult, bool* value) = 0;
    virtual HRESULT __stdcall RaiseDeviceLost() = 0;
    virtual HRESULT __stdcall Lock(::IUnknown** lock) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::ICanvasDeviceFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateWithForceSoftwareRendererOption(bool forceSoftwareRenderer, ::IUnknown** canvasDevice) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::ICanvasDeviceStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateFromDirect3D11Device(::IUnknown* direct3DDevice, ::IUnknown** canvasDevice) = 0;
    virtual HRESULT __stdcall GetSharedDevice(::IUnknown** canvasDevice) = 0;
    virtual HRESULT __stdcall GetSharedDeviceWithForceSoftwareRenderer(bool forceSoftwareRenderer, ::IUnknown** canvasDevice) = 0;
    virtual HRESULT __stdcall put_DebugLevel(Microsoft::Graphics::Canvas::CanvasDebugLevel value) = 0;
    virtual HRESULT __stdcall get_DebugLevel(Microsoft::Graphics::Canvas::CanvasDebugLevel* value) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::ICanvasDrawingSession>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Clear(struct_of<4> color) = 0;
    virtual HRESULT __stdcall ClearHdr(Windows::Foundation::Numerics::float4 color) = 0;
    virtual HRESULT __stdcall Flush() = 0;
    virtual HRESULT __stdcall DrawImageAtOrigin(::IUnknown* image) = 0;
    virtual HRESULT __stdcall DrawImageAtOffset(::IUnknown* image, Windows::Foundation::Numerics::float2 offset) = 0;
    virtual HRESULT __stdcall DrawImageAtCoords(::IUnknown* image, float x, float y) = 0;
    virtual HRESULT __stdcall DrawImageToRect(::IUnknown* bitmap, Windows::Foundation::Rect destinationRectangle) = 0;
    virtual HRESULT __stdcall DrawImageAtOffsetWithSourceRect(::IUnknown* image, Windows::Foundation::Numerics::float2 offset, Windows::Foundation::Rect sourceRectangle) = 0;
    virtual HRESULT __stdcall DrawImageAtCoordsWithSourceRect(::IUnknown* image, float x, float y, Windows::Foundation::Rect sourceRectangle) = 0;
    virtual HRESULT __stdcall DrawImageToRectWithSourceRect(::IUnknown* image, Windows::Foundation::Rect destinationRectangle, Windows::Foundation::Rect sourceRectangle) = 0;
    virtual HRESULT __stdcall DrawImageAtOffsetWithSourceRectAndOpacity(::IUnknown* image, Windows::Foundation::Numerics::float2 offset, Windows::Foundation::Rect sourceRectangle, float opacity) = 0;
    virtual HRESULT __stdcall DrawImageAtCoordsWithSourceRectAndOpacity(::IUnknown* image, float x, float y, Windows::Foundation::Rect sourceRectangle, float opacity) = 0;
    virtual HRESULT __stdcall DrawImageToRectWithSourceRectAndOpacity(::IUnknown* image, Windows::Foundation::Rect destinationRectangle, Windows::Foundation::Rect sourceRectangle, float opacity) = 0;
    virtual HRESULT __stdcall DrawImageAtOffsetWithSourceRectAndOpacityAndInterpolation(::IUnknown* image, Windows::Foundation::Numerics::float2 offset, Windows::Foundation::Rect sourceRectangle, float opacity, Microsoft::Graphics::Canvas::CanvasImageInterpolation interpolation) = 0;
    virtual HRESULT __stdcall DrawImageAtCoordsWithSourceRectAndOpacityAndInterpolation(::IUnknown* image, float x, float y, Windows::Foundation::Rect sourceRectangle, float opacity, Microsoft::Graphics::Canvas::CanvasImageInterpolation interpolation) = 0;
    virtual HRESULT __stdcall DrawImageToRectWithSourceRectAndOpacityAndInterpolation(::IUnknown* image, Windows::Foundation::Rect destinationRectangle, Windows::Foundation::Rect sourceRectangle, float opacity, Microsoft::Graphics::Canvas::CanvasImageInterpolation interpolation) = 0;
    virtual HRESULT __stdcall DrawImageAtOffsetWithSourceRectAndOpacityAndInterpolationAndComposite(::IUnknown* image, Windows::Foundation::Numerics::float2 offset, Windows::Foundation::Rect sourceRectangle, float opacity, Microsoft::Graphics::Canvas::CanvasImageInterpolation interpolation, Microsoft::Graphics::Canvas::CanvasComposite composite) = 0;
    virtual HRESULT __stdcall DrawImageAtCoordsWithSourceRectAndOpacityAndInterpolationAndComposite(::IUnknown* image, float x, float y, Windows::Foundation::Rect sourceRectangle, float opacity, Microsoft::Graphics::Canvas::CanvasImageInterpolation interpolation, Microsoft::Graphics::Canvas::CanvasComposite composite) = 0;
    virtual HRESULT __stdcall DrawImageToRectWithSourceRectAndOpacityAndInterpolationAndComposite(::IUnknown* image, Windows::Foundation::Rect destinationRectangle, Windows::Foundation::Rect sourceRectangle, float opacity, Microsoft::Graphics::Canvas::CanvasImageInterpolation interpolation, Microsoft::Graphics::Canvas::CanvasComposite composite) = 0;
    virtual HRESULT __stdcall DrawImageAtOffsetWithSourceRectAndOpacityAndInterpolationAndPerspective(::IUnknown* bitmap, Windows::Foundation::Numerics::float2 offset, Windows::Foundation::Rect sourceRectangle, float opacity, Microsoft::Graphics::Canvas::CanvasImageInterpolation interpolation, Windows::Foundation::Numerics::float4x4 perspective) = 0;
    virtual HRESULT __stdcall DrawImageAtCoordsWithSourceRectAndOpacityAndInterpolationAndPerspective(::IUnknown* bitmap, float x, float y, Windows::Foundation::Rect sourceRectangle, float opacity, Microsoft::Graphics::Canvas::CanvasImageInterpolation interpolation, Windows::Foundation::Numerics::float4x4 perspective) = 0;
    virtual HRESULT __stdcall DrawImageToRectWithSourceRectAndOpacityAndInterpolationAndPerspective(::IUnknown* bitmap, Windows::Foundation::Rect destinationRectangle, Windows::Foundation::Rect sourceRectangle, float opacity, Microsoft::Graphics::Canvas::CanvasImageInterpolation interpolation, Windows::Foundation::Numerics::float4x4 perspective) = 0;
    virtual HRESULT __stdcall DrawLineWithBrush(Windows::Foundation::Numerics::float2 point0, Windows::Foundation::Numerics::float2 point1, ::IUnknown* brush) = 0;
    virtual HRESULT __stdcall DrawLineAtCoordsWithBrush(float x0, float y0, float x1, float y1, ::IUnknown* brush) = 0;
    virtual HRESULT __stdcall DrawLineWithColor(Windows::Foundation::Numerics::float2 point0, Windows::Foundation::Numerics::float2 point1, struct_of<4> color) = 0;
    virtual HRESULT __stdcall DrawLineAtCoordsWithColor(float x0, float y0, float x1, float y1, struct_of<4> color) = 0;
    virtual HRESULT __stdcall DrawLineWithBrushAndStrokeWidth(Windows::Foundation::Numerics::float2 point0, Windows::Foundation::Numerics::float2 point1, ::IUnknown* brush, float strokeWidth) = 0;
    virtual HRESULT __stdcall DrawLineAtCoordsWithBrushAndStrokeWidth(float x0, float y0, float x1, float y1, ::IUnknown* brush, float strokeWidth) = 0;
    virtual HRESULT __stdcall DrawLineWithColorAndStrokeWidth(Windows::Foundation::Numerics::float2 point0, Windows::Foundation::Numerics::float2 point1, struct_of<4> color, float strokeWidth) = 0;
    virtual HRESULT __stdcall DrawLineAtCoordsWithColorAndStrokeWidth(float x0, float y0, float x1, float y1, struct_of<4> color, float strokeWidth) = 0;
    virtual HRESULT __stdcall DrawLineWithBrushAndStrokeWidthAndStrokeStyle(Windows::Foundation::Numerics::float2 point0, Windows::Foundation::Numerics::float2 point1, ::IUnknown* brush, float strokeWidth, ::IUnknown* strokeStyle) = 0;
    virtual HRESULT __stdcall DrawLineAtCoordsWithBrushAndStrokeWidthAndStrokeStyle(float x0, float y0, float x1, float y1, ::IUnknown* brush, float strokeWidth, ::IUnknown* strokeStyle) = 0;
    virtual HRESULT __stdcall DrawLineWithColorAndStrokeWidthAndStrokeStyle(Windows::Foundation::Numerics::float2 point0, Windows::Foundation::Numerics::float2 point1, struct_of<4> color, float strokeWidth, ::IUnknown* strokeStyle) = 0;
    virtual HRESULT __stdcall DrawLineAtCoordsWithColorAndStrokeWidthAndStrokeStyle(float x0, float y0, float x1, float y1, struct_of<4> color, float strokeWidth, ::IUnknown* strokeStyle) = 0;
    virtual HRESULT __stdcall DrawRectangleWithBrush(Windows::Foundation::Rect rect, ::IUnknown* brush) = 0;
    virtual HRESULT __stdcall DrawRectangleAtCoordsWithBrush(float x, float y, float w, float h, ::IUnknown* brush) = 0;
    virtual HRESULT __stdcall DrawRectangleWithColor(Windows::Foundation::Rect rect, struct_of<4> color) = 0;
    virtual HRESULT __stdcall DrawRectangleAtCoordsWithColor(float x, float y, float w, float h, struct_of<4> color) = 0;
    virtual HRESULT __stdcall DrawRectangleWithBrushAndStrokeWidth(Windows::Foundation::Rect rect, ::IUnknown* brush, float strokeWidth) = 0;
    virtual HRESULT __stdcall DrawRectangleAtCoordsWithBrushAndStrokeWidth(float x, float y, float w, float h, ::IUnknown* brush, float strokeWidth) = 0;
    virtual HRESULT __stdcall DrawRectangleWithColorAndStrokeWidth(Windows::Foundation::Rect rect, struct_of<4> color, float strokeWidth) = 0;
    virtual HRESULT __stdcall DrawRectangleAtCoordsWithColorAndStrokeWidth(float x, float y, float w, float h, struct_of<4> color, float strokeWidth) = 0;
    virtual HRESULT __stdcall DrawRectangleWithBrushAndStrokeWidthAndStrokeStyle(Windows::Foundation::Rect rect, ::IUnknown* brush, float strokeWidth, ::IUnknown* strokeStyle) = 0;
    virtual HRESULT __stdcall DrawRectangleAtCoordsWithBrushAndStrokeWidthAndStrokeStyle(float x, float y, float w, float h, ::IUnknown* brush, float strokeWidth, ::IUnknown* strokeStyle) = 0;
    virtual HRESULT __stdcall DrawRectangleWithColorAndStrokeWidthAndStrokeStyle(Windows::Foundation::Rect rect, struct_of<4> color, float strokeWidth, ::IUnknown* strokeStyle) = 0;
    virtual HRESULT __stdcall DrawRectangleAtCoordsWithColorAndStrokeWidthAndStrokeStyle(float x, float y, float w, float h, struct_of<4> color, float strokeWidth, ::IUnknown* strokeStyle) = 0;
    virtual HRESULT __stdcall FillRectangleWithBrush(Windows::Foundation::Rect rect, ::IUnknown* brush) = 0;
    virtual HRESULT __stdcall FillRectangleAtCoordsWithBrush(float x, float y, float w, float h, ::IUnknown* brush) = 0;
    virtual HRESULT __stdcall FillRectangleWithColor(Windows::Foundation::Rect rect, struct_of<4> color) = 0;
    virtual HRESULT __stdcall FillRectangleAtCoordsWithColor(float x, float y, float w, float h, struct_of<4> color) = 0;
    virtual HRESULT __stdcall FillRectangleWithBrushAndOpacityBrush(Windows::Foundation::Rect rect, ::IUnknown* brush, ::IUnknown* opacityBrush) = 0;
    virtual HRESULT __stdcall FillRectangleAtCoordsWithBrushAndOpacityBrush(float x, float y, float w, float h, ::IUnknown* brush, ::IUnknown* opacityBrush) = 0;
    virtual HRESULT __stdcall DrawRoundedRectangleWithBrush(Windows::Foundation::Rect rect, float radiusX, float radiusY, ::IUnknown* brush) = 0;
    virtual HRESULT __stdcall DrawRoundedRectangleAtCoordsWithBrush(float x, float y, float w, float h, float radiusX, float radiusY, ::IUnknown* brush) = 0;
    virtual HRESULT __stdcall DrawRoundedRectangleWithColor(Windows::Foundation::Rect rect, float radiusX, float radiusY, struct_of<4> color) = 0;
    virtual HRESULT __stdcall DrawRoundedRectangleAtCoordsWithColor(float x, float y, float w, float h, float radiusX, float radiusY, struct_of<4> color) = 0;
    virtual HRESULT __stdcall DrawRoundedRectangleWithBrushAndStrokeWidth(Windows::Foundation::Rect rect, float radiusX, float radiusY, ::IUnknown* brush, float strokeWidth) = 0;
    virtual HRESULT __stdcall DrawRoundedRectangleAtCoordsWithBrushAndStrokeWidth(float x, float y, float w, float h, float radiusX, float radiusY, ::IUnknown* brush, float strokeWidth) = 0;
    virtual HRESULT __stdcall DrawRoundedRectangleWithColorAndStrokeWidth(Windows::Foundation::Rect rect, float radiusX, float radiusY, struct_of<4> color, float strokeWidth) = 0;
    virtual HRESULT __stdcall DrawRoundedRectangleAtCoordsWithColorAndStrokeWidth(float x, float y, float w, float h, float radiusX, float radiusY, struct_of<4> color, float strokeWidth) = 0;
    virtual HRESULT __stdcall DrawRoundedRectangleWithBrushAndStrokeWidthAndStrokeStyle(Windows::Foundation::Rect rect, float radiusX, float radiusY, ::IUnknown* brush, float strokeWidth, ::IUnknown* strokeStyle) = 0;
    virtual HRESULT __stdcall DrawRoundedRectangleAtCoordsWithBrushAndStrokeWidthAndStrokeStyle(float x, float y, float w, float h, float radiusX, float radiusY, ::IUnknown* brush, float strokeWidth, ::IUnknown* strokeStyle) = 0;
    virtual HRESULT __stdcall DrawRoundedRectangleWithColorAndStrokeWidthAndStrokeStyle(Windows::Foundation::Rect rect, float radiusX, float radiusY, struct_of<4> color, float strokeWidth, ::IUnknown* strokeStyle) = 0;
    virtual HRESULT __stdcall DrawRoundedRectangleAtCoordsWithColorAndStrokeWidthAndStrokeStyle(float x, float y, float w, float h, float radiusX, float radiusY, struct_of<4> color, float strokeWidth, ::IUnknown* strokeStyle) = 0;
    virtual HRESULT __stdcall FillRoundedRectangleWithBrush(Windows::Foundation::Rect rect, float radiusX, float radiusY, ::IUnknown* brush) = 0;
    virtual HRESULT __stdcall FillRoundedRectangleAtCoordsWithBrush(float x, float y, float w, float h, float radiusX, float radiusY, ::IUnknown* brush) = 0;
    virtual HRESULT __stdcall FillRoundedRectangleWithColor(Windows::Foundation::Rect rect, float radiusX, float radiusY, struct_of<4> color) = 0;
    virtual HRESULT __stdcall FillRoundedRectangleAtCoordsWithColor(float x, float y, float w, float h, float radiusX, float radiusY, struct_of<4> color) = 0;
    virtual HRESULT __stdcall DrawEllipseWithBrush(Windows::Foundation::Numerics::float2 centerPoint, float radiusX, float radiusY, ::IUnknown* brush) = 0;
    virtual HRESULT __stdcall DrawEllipseAtCoordsWithBrush(float x, float y, float radiusX, float radiusY, ::IUnknown* brush) = 0;
    virtual HRESULT __stdcall DrawEllipseWithColor(Windows::Foundation::Numerics::float2 centerPoint, float radiusX, float radiusY, struct_of<4> color) = 0;
    virtual HRESULT __stdcall DrawEllipseAtCoordsWithColor(float x, float y, float radiusX, float radiusY, struct_of<4> color) = 0;
    virtual HRESULT __stdcall DrawEllipseWithBrushAndStrokeWidth(Windows::Foundation::Numerics::float2 centerPoint, float radiusX, float radiusY, ::IUnknown* brush, float strokeWidth) = 0;
    virtual HRESULT __stdcall DrawEllipseAtCoordsWithBrushAndStrokeWidth(float x, float y, float radiusX, float radiusY, ::IUnknown* brush, float strokeWidth) = 0;
    virtual HRESULT __stdcall DrawEllipseWithColorAndStrokeWidth(Windows::Foundation::Numerics::float2 centerPoint, float radiusX, float radiusY, struct_of<4> color, float strokeWidth) = 0;
    virtual HRESULT __stdcall DrawEllipseAtCoordsWithColorAndStrokeWidth(float x, float y, float radiusX, float radiusY, struct_of<4> color, float strokeWidth) = 0;
    virtual HRESULT __stdcall DrawEllipseWithBrushAndStrokeWidthAndStrokeStyle(Windows::Foundation::Numerics::float2 centerPoint, float radiusX, float radiusY, ::IUnknown* brush, float strokeWidth, ::IUnknown* strokeStyle) = 0;
    virtual HRESULT __stdcall DrawEllipseAtCoordsWithBrushAndStrokeWidthAndStrokeStyle(float x, float y, float radiusX, float radiusY, ::IUnknown* brush, float strokeWidth, ::IUnknown* strokeStyle) = 0;
    virtual HRESULT __stdcall DrawEllipseWithColorAndStrokeWidthAndStrokeStyle(Windows::Foundation::Numerics::float2 centerPoint, float radiusX, float radiusY, struct_of<4> color, float strokeWidth, ::IUnknown* strokeStyle) = 0;
    virtual HRESULT __stdcall DrawEllipseAtCoordsWithColorAndStrokeWidthAndStrokeStyle(float x, float y, float radiusX, float radiusY, struct_of<4> color, float strokeWidth, ::IUnknown* strokeStyle) = 0;
    virtual HRESULT __stdcall FillEllipseWithBrush(Windows::Foundation::Numerics::float2 centerPoint, float radiusX, float radiusY, ::IUnknown* brush) = 0;
    virtual HRESULT __stdcall FillEllipseAtCoordsWithBrush(float x, float y, float radiusX, float radiusY, ::IUnknown* brush) = 0;
    virtual HRESULT __stdcall FillEllipseWithColor(Windows::Foundation::Numerics::float2 centerPoint, float radiusX, float radiusY, struct_of<4> color) = 0;
    virtual HRESULT __stdcall FillEllipseAtCoordsWithColor(float x, float y, float radiusX, float radiusY, struct_of<4> color) = 0;
    virtual HRESULT __stdcall DrawCircleWithBrush(Windows::Foundation::Numerics::float2 centerPoint, float radius, ::IUnknown* brush) = 0;
    virtual HRESULT __stdcall DrawCircleAtCoordsWithBrush(float x, float y, float radius, ::IUnknown* brush) = 0;
    virtual HRESULT __stdcall DrawCircleWithColor(Windows::Foundation::Numerics::float2 centerPoint, float radius, struct_of<4> color) = 0;
    virtual HRESULT __stdcall DrawCircleAtCoordsWithColor(float x, float y, float radius, struct_of<4> color) = 0;
    virtual HRESULT __stdcall DrawCircleWithBrushAndStrokeWidth(Windows::Foundation::Numerics::float2 centerPoint, float radius, ::IUnknown* brush, float strokeWidth) = 0;
    virtual HRESULT __stdcall DrawCircleAtCoordsWithBrushAndStrokeWidth(float x, float y, float radius, ::IUnknown* brush, float strokeWidth) = 0;
    virtual HRESULT __stdcall DrawCircleWithColorAndStrokeWidth(Windows::Foundation::Numerics::float2 centerPoint, float radius, struct_of<4> color, float strokeWidth) = 0;
    virtual HRESULT __stdcall DrawCircleAtCoordsWithColorAndStrokeWidth(float x, float y, float radius, struct_of<4> color, float strokeWidth) = 0;
    virtual HRESULT __stdcall DrawCircleWithBrushAndStrokeWidthAndStrokeStyle(Windows::Foundation::Numerics::float2 centerPoint, float radius, ::IUnknown* brush, float strokeWidth, ::IUnknown* strokeStyle) = 0;
    virtual HRESULT __stdcall DrawCircleAtCoordsWithBrushAndStrokeWidthAndStrokeStyle(float x, float y, float radius, ::IUnknown* brush, float strokeWidth, ::IUnknown* strokeStyle) = 0;
    virtual HRESULT __stdcall DrawCircleWithColorAndStrokeWidthAndStrokeStyle(Windows::Foundation::Numerics::float2 centerPoint, float radius, struct_of<4> color, float strokeWidth, ::IUnknown* strokeStyle) = 0;
    virtual HRESULT __stdcall DrawCircleAtCoordsWithColorAndStrokeWidthAndStrokeStyle(float x, float y, float radius, struct_of<4> color, float strokeWidth, ::IUnknown* strokeStyle) = 0;
    virtual HRESULT __stdcall FillCircleWithBrush(Windows::Foundation::Numerics::float2 centerPoint, float radius, ::IUnknown* brush) = 0;
    virtual HRESULT __stdcall FillCircleAtCoordsWithBrush(float x, float y, float radius, ::IUnknown* brush) = 0;
    virtual HRESULT __stdcall FillCircleWithColor(Windows::Foundation::Numerics::float2 centerPoint, float radius, struct_of<4> color) = 0;
    virtual HRESULT __stdcall FillCircleAtCoordsWithColor(float x, float y, float radius, struct_of<4> color) = 0;
    virtual HRESULT __stdcall DrawTextAtPointWithColor(HSTRING text, Windows::Foundation::Numerics::float2 point, struct_of<4> color) = 0;
    virtual HRESULT __stdcall DrawTextAtPointCoordsWithColor(HSTRING text, float x, float y, struct_of<4> color) = 0;
    virtual HRESULT __stdcall DrawTextAtPointWithBrushAndFormat(HSTRING text, Windows::Foundation::Numerics::float2 point, ::IUnknown* brush, ::IUnknown* format) = 0;
    virtual HRESULT __stdcall DrawTextAtRectWithBrushAndFormat(HSTRING text, Windows::Foundation::Rect rectangle, ::IUnknown* brush, ::IUnknown* format) = 0;
    virtual HRESULT __stdcall DrawTextAtPointCoordsWithBrushAndFormat(HSTRING text, float x, float y, ::IUnknown* brush, ::IUnknown* format) = 0;
    virtual HRESULT __stdcall DrawTextAtRectCoordsWithBrushAndFormat(HSTRING text, float x, float y, float w, float h, ::IUnknown* brush, ::IUnknown* format) = 0;
    virtual HRESULT __stdcall DrawTextAtPointWithColorAndFormat(HSTRING text, Windows::Foundation::Numerics::float2 point, struct_of<4> color, ::IUnknown* format) = 0;
    virtual HRESULT __stdcall DrawTextAtRectWithColorAndFormat(HSTRING text, Windows::Foundation::Rect rectangle, struct_of<4> color, ::IUnknown* format) = 0;
    virtual HRESULT __stdcall DrawTextAtPointCoordsWithColorAndFormat(HSTRING text, float x, float y, struct_of<4> color, ::IUnknown* format) = 0;
    virtual HRESULT __stdcall DrawTextAtRectCoordsWithColorAndFormat(HSTRING text, float x, float y, float w, float h, struct_of<4> color, ::IUnknown* format) = 0;
    virtual HRESULT __stdcall DrawGeometryWithBrush(::IUnknown* geometry, Windows::Foundation::Numerics::float2 offset, ::IUnknown* brush) = 0;
    virtual HRESULT __stdcall DrawGeometryWithColor(::IUnknown* geometry, Windows::Foundation::Numerics::float2 offset, struct_of<4> color) = 0;
    virtual HRESULT __stdcall DrawGeometryAtCoordsWithBrush(::IUnknown* geometry, float x, float y, ::IUnknown* brush) = 0;
    virtual HRESULT __stdcall DrawGeometryAtCoordsWithColor(::IUnknown* geometry, float x, float y, struct_of<4> color) = 0;
    virtual HRESULT __stdcall DrawGeometryAtOriginWithBrush(::IUnknown* geometry, ::IUnknown* brush) = 0;
    virtual HRESULT __stdcall DrawGeometryAtOriginWithColor(::IUnknown* geometry, struct_of<4> color) = 0;
    virtual HRESULT __stdcall DrawGeometryWithBrushAndStrokeWidth(::IUnknown* geometry, Windows::Foundation::Numerics::float2 offset, ::IUnknown* brush, float strokeWidth) = 0;
    virtual HRESULT __stdcall DrawGeometryWithColorAndStrokeWidth(::IUnknown* geometry, Windows::Foundation::Numerics::float2 offset, struct_of<4> color, float strokeWidth) = 0;
    virtual HRESULT __stdcall DrawGeometryAtCoordsWithBrushAndStrokeWidth(::IUnknown* geometry, float x, float y, ::IUnknown* brush, float strokeWidth) = 0;
    virtual HRESULT __stdcall DrawGeometryAtCoordsWithColorAndStrokeWidth(::IUnknown* geometry, float x, float y, struct_of<4> color, float strokeWidth) = 0;
    virtual HRESULT __stdcall DrawGeometryAtOriginWithBrushAndStrokeWidth(::IUnknown* geometry, ::IUnknown* brush, float strokeWidth) = 0;
    virtual HRESULT __stdcall DrawGeometryAtOriginWithColorAndStrokeWidth(::IUnknown* geometry, struct_of<4> color, float strokeWidth) = 0;
    virtual HRESULT __stdcall DrawGeometryWithBrushAndStrokeWidthAndStrokeStyle(::IUnknown* geometry, Windows::Foundation::Numerics::float2 offset, ::IUnknown* brush, float strokeWidth, ::IUnknown* strokeStyle) = 0;
    virtual HRESULT __stdcall DrawGeometryWithColorAndStrokeWidthAndStrokeStyle(::IUnknown* geometry, Windows::Foundation::Numerics::float2 offset, struct_of<4> color, float strokeWidth, ::IUnknown* strokeStyle) = 0;
    virtual HRESULT __stdcall DrawGeometryAtCoordsWithBrushAndStrokeWidthAndStrokeStyle(::IUnknown* geometry, float x, float y, ::IUnknown* brush, float strokeWidth, ::IUnknown* strokeStyle) = 0;
    virtual HRESULT __stdcall DrawGeometryAtCoordsWithColorAndStrokeWidthAndStrokeStyle(::IUnknown* geometry, float x, float y, struct_of<4> color, float strokeWidth, ::IUnknown* strokeStyle) = 0;
    virtual HRESULT __stdcall DrawGeometryAtOriginWithBrushAndStrokeWidthAndStrokeStyle(::IUnknown* geometry, ::IUnknown* brush, float strokeWidth, ::IUnknown* strokeStyle) = 0;
    virtual HRESULT __stdcall DrawGeometryAtOriginWithColorAndStrokeWidthAndStrokeStyle(::IUnknown* geometry, struct_of<4> color, float strokeWidth, ::IUnknown* strokeStyle) = 0;
    virtual HRESULT __stdcall FillGeometryWithBrush(::IUnknown* geometry, Windows::Foundation::Numerics::float2 offset, ::IUnknown* brush) = 0;
    virtual HRESULT __stdcall FillGeometryWithBrushAndOpacityBrush(::IUnknown* geometry, Windows::Foundation::Numerics::float2 offset, ::IUnknown* brush, ::IUnknown* opacityBrush) = 0;
    virtual HRESULT __stdcall FillGeometryWithColor(::IUnknown* geometry, Windows::Foundation::Numerics::float2 offset, struct_of<4> color) = 0;
    virtual HRESULT __stdcall FillGeometryAtCoordsWithBrush(::IUnknown* geometry, float x, float y, ::IUnknown* brush) = 0;
    virtual HRESULT __stdcall FillGeometryAtCoordsWithBrushAndOpacityBrush(::IUnknown* geometry, float x, float y, ::IUnknown* brush, ::IUnknown* opacityBrush) = 0;
    virtual HRESULT __stdcall FillGeometryAtCoordsWithColor(::IUnknown* geometry, float x, float y, struct_of<4> color) = 0;
    virtual HRESULT __stdcall FillGeometryAtOriginWithBrush(::IUnknown* geometry, ::IUnknown* brush) = 0;
    virtual HRESULT __stdcall FillGeometryAtOriginWithBrushAndOpacityBrush(::IUnknown* geometry, ::IUnknown* brush, ::IUnknown* opacityBrush) = 0;
    virtual HRESULT __stdcall FillGeometryAtOriginWithColor(::IUnknown* geometry, struct_of<4> color) = 0;
    virtual HRESULT __stdcall DrawCachedGeometryWithBrush(::IUnknown* geometry, Windows::Foundation::Numerics::float2 offset, ::IUnknown* brush) = 0;
    virtual HRESULT __stdcall DrawCachedGeometryWithColor(::IUnknown* geometry, Windows::Foundation::Numerics::float2 offset, struct_of<4> color) = 0;
    virtual HRESULT __stdcall DrawCachedGeometryAtCoordsWithBrush(::IUnknown* geometry, float x, float y, ::IUnknown* brush) = 0;
    virtual HRESULT __stdcall DrawCachedGeometryAtCoordsWithColor(::IUnknown* geometry, float x, float y, struct_of<4> color) = 0;
    virtual HRESULT __stdcall DrawCachedGeometryAtOriginWithBrush(::IUnknown* geometry, ::IUnknown* brush) = 0;
    virtual HRESULT __stdcall DrawCachedGeometryAtOriginWithColor(::IUnknown* geometry, struct_of<4> color) = 0;
    virtual HRESULT __stdcall DrawTextLayoutWithBrush(::IUnknown* textLayout, Windows::Foundation::Numerics::float2 point, ::IUnknown* brush) = 0;
    virtual HRESULT __stdcall DrawTextLayoutAtCoordsWithBrush(::IUnknown* textLayout, float x, float y, ::IUnknown* brush) = 0;
    virtual HRESULT __stdcall DrawTextLayoutWithColor(::IUnknown* textLayout, Windows::Foundation::Numerics::float2 point, struct_of<4> color) = 0;
    virtual HRESULT __stdcall DrawTextLayoutAtCoordsWithColor(::IUnknown* textLayout, float x, float y, struct_of<4> color) = 0;
    virtual HRESULT __stdcall DrawInk(::IUnknown* inkStrokes) = 0;
    virtual HRESULT __stdcall DrawInkWithHighContrast(::IUnknown* inkStrokes, bool highContrast) = 0;
    virtual HRESULT __stdcall DrawGradientMeshAtOrigin(::IUnknown* gradientMesh) = 0;
    virtual HRESULT __stdcall DrawGradientMesh(::IUnknown* gradientMesh, Windows::Foundation::Numerics::float2 point) = 0;
    virtual HRESULT __stdcall DrawGradientMeshAtCoords(::IUnknown* gradientMesh, float x, float y) = 0;
    virtual HRESULT __stdcall DrawSvgAtOrigin(::IUnknown* svgDocument, Windows::Foundation::Size viewportSize) = 0;
    virtual HRESULT __stdcall DrawSvgAtPoint(::IUnknown* svgDocument, Windows::Foundation::Size viewportSize, Windows::Foundation::Numerics::float2 point) = 0;
    virtual HRESULT __stdcall DrawSvgAtCoords(::IUnknown* svgDocument, Windows::Foundation::Size viewportSize, float x, float y) = 0;
    virtual HRESULT __stdcall get_Antialiasing(Microsoft::Graphics::Canvas::CanvasAntialiasing* value) = 0;
    virtual HRESULT __stdcall put_Antialiasing(Microsoft::Graphics::Canvas::CanvasAntialiasing value) = 0;
    virtual HRESULT __stdcall get_Blend(Microsoft::Graphics::Canvas::CanvasBlend* value) = 0;
    virtual HRESULT __stdcall put_Blend(Microsoft::Graphics::Canvas::CanvasBlend value) = 0;
    virtual HRESULT __stdcall get_TextAntialiasing(Microsoft::Graphics::Canvas::Text::CanvasTextAntialiasing* value) = 0;
    virtual HRESULT __stdcall put_TextAntialiasing(Microsoft::Graphics::Canvas::Text::CanvasTextAntialiasing value) = 0;
    virtual HRESULT __stdcall get_TextRenderingParameters(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_TextRenderingParameters(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Transform(Windows::Foundation::Numerics::float3x2* value) = 0;
    virtual HRESULT __stdcall put_Transform(Windows::Foundation::Numerics::float3x2 value) = 0;
    virtual HRESULT __stdcall get_Units(Microsoft::Graphics::Canvas::CanvasUnits* value) = 0;
    virtual HRESULT __stdcall put_Units(Microsoft::Graphics::Canvas::CanvasUnits value) = 0;
    virtual HRESULT __stdcall get_EffectBufferPrecision(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_EffectBufferPrecision(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_EffectTileSize(struct_of<8>* value) = 0;
    virtual HRESULT __stdcall put_EffectTileSize(struct_of<8> value) = 0;
    virtual HRESULT __stdcall CreateLayerWithOpacity(float opacity, ::IUnknown** layer) = 0;
    virtual HRESULT __stdcall CreateLayerWithOpacityBrush(::IUnknown* opacityBrush, ::IUnknown** layer) = 0;
    virtual HRESULT __stdcall CreateLayerWithOpacityAndClipRectangle(float opacity, Windows::Foundation::Rect clipRectangle, ::IUnknown** layer) = 0;
    virtual HRESULT __stdcall CreateLayerWithOpacityBrushAndClipRectangle(::IUnknown* opacityBrush, Windows::Foundation::Rect clipRectangle, ::IUnknown** layer) = 0;
    virtual HRESULT __stdcall CreateLayerWithOpacityAndClipGeometry(float opacity, ::IUnknown* clipGeometry, ::IUnknown** layer) = 0;
    virtual HRESULT __stdcall CreateLayerWithOpacityBrushAndClipGeometry(::IUnknown* opacityBrush, ::IUnknown* clipGeometry, ::IUnknown** layer) = 0;
    virtual HRESULT __stdcall CreateLayerWithOpacityAndClipGeometryAndTransform(float opacity, ::IUnknown* clipGeometry, Windows::Foundation::Numerics::float3x2 geometryTransform, ::IUnknown** layer) = 0;
    virtual HRESULT __stdcall CreateLayerWithOpacityBrushAndClipGeometryAndTransform(::IUnknown* opacityBrush, ::IUnknown* clipGeometry, Windows::Foundation::Numerics::float3x2 geometryTransform, ::IUnknown** layer) = 0;
    virtual HRESULT __stdcall CreateLayerWithAllOptions(float opacity, ::IUnknown* opacityBrush, Windows::Foundation::Rect clipRectangle, ::IUnknown* clipGeometry, Windows::Foundation::Numerics::float3x2 geometryTransform, Microsoft::Graphics::Canvas::CanvasLayerOptions options, ::IUnknown** layer) = 0;
    virtual HRESULT __stdcall DrawGlyphRun(Windows::Foundation::Numerics::float2 point, ::IUnknown* fontFace, float fontSize, uint32_t __glyphsSize, struct_of<16>* glyphs, bool isSideways, uint32_t bidiLevel, ::IUnknown* brush) = 0;
    virtual HRESULT __stdcall DrawGlyphRunWithMeasuringMode(Windows::Foundation::Numerics::float2 point, ::IUnknown* fontFace, float fontSize, uint32_t __glyphsSize, struct_of<16>* glyphs, bool isSideways, uint32_t bidiLevel, ::IUnknown* brush, Microsoft::Graphics::Canvas::Text::CanvasTextMeasuringMode measuringMode) = 0;
    virtual HRESULT __stdcall DrawGlyphRunWithMeasuringModeAndDescription(Windows::Foundation::Numerics::float2 point, ::IUnknown* fontFace, float fontSize, uint32_t __glyphsSize, struct_of<16>* glyphs, bool isSideways, uint32_t bidiLevel, ::IUnknown* brush, Microsoft::Graphics::Canvas::Text::CanvasTextMeasuringMode measuringMode, HSTRING localeName, HSTRING textString, uint32_t __clusterMapIndicesSize, int32_t* clusterMapIndices, uint32_t textPosition) = 0;
    virtual HRESULT __stdcall CreateSpriteBatch(::IUnknown** spriteBatch) = 0;
    virtual HRESULT __stdcall CreateSpriteBatchWithSortMode(Microsoft::Graphics::Canvas::CanvasSpriteSortMode sortMode, ::IUnknown** spriteBatch) = 0;
    virtual HRESULT __stdcall CreateSpriteBatchWithSortModeAndInterpolation(Microsoft::Graphics::Canvas::CanvasSpriteSortMode sortMode, Microsoft::Graphics::Canvas::CanvasImageInterpolation interpolation, ::IUnknown** spriteBatch) = 0;
    virtual HRESULT __stdcall CreateSpriteBatchWithSortModeAndInterpolationAndOptions(Microsoft::Graphics::Canvas::CanvasSpriteSortMode sortMode, Microsoft::Graphics::Canvas::CanvasImageInterpolation interpolation, Microsoft::Graphics::Canvas::CanvasSpriteOptions options, ::IUnknown** spriteBatch) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::ICanvasImage>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetBounds(::IUnknown* resourceCreator, Windows::Foundation::Rect* bounds) = 0;
    virtual HRESULT __stdcall GetBoundsWithTransform(::IUnknown* resourceCreator, Windows::Foundation::Numerics::float3x2 transform, Windows::Foundation::Rect* bounds) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::ICanvasImageStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall SaveAsync(::IUnknown* image, Windows::Foundation::Rect sourceRectangle, float dpi, ::IUnknown* resourceCreator, ::IUnknown* stream, Microsoft::Graphics::Canvas::CanvasBitmapFileFormat fileFormat, ::IUnknown** action) = 0;
    virtual HRESULT __stdcall SaveWithQualityAsync(::IUnknown* image, Windows::Foundation::Rect sourceRectangle, float dpi, ::IUnknown* resourceCreator, ::IUnknown* stream, Microsoft::Graphics::Canvas::CanvasBitmapFileFormat fileFormat, float quality, ::IUnknown** action) = 0;
    virtual HRESULT __stdcall SaveWithQualityAndBufferPrecisionAsync(::IUnknown* image, Windows::Foundation::Rect sourceRectangle, float dpi, ::IUnknown* resourceCreator, ::IUnknown* stream, Microsoft::Graphics::Canvas::CanvasBitmapFileFormat fileFormat, float quality, Microsoft::Graphics::Canvas::CanvasBufferPrecision bufferPrecision, ::IUnknown** action) = 0;
    virtual HRESULT __stdcall ComputeHistogram(::IUnknown* image, Windows::Foundation::Rect sourceRectangle, ::IUnknown* resourceCreator, Microsoft::Graphics::Canvas::Effects::EffectChannelSelect channelSelect, int32_t numberOfBins, uint32_t* __valueElementsSize, float** valueElements) = 0;
    virtual HRESULT __stdcall IsHistogramSupported(::IUnknown* device, bool* result) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::ICanvasLock>{ struct type : ::IInspectable
{
};};

template <> struct abi<Microsoft::Graphics::Canvas::ICanvasRenderTarget>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateDrawingSession(::IUnknown** drawingSession) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::ICanvasRenderTargetFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateWithSize(::IUnknown* resourceCreator, Windows::Foundation::Size size, ::IUnknown** renderTarget) = 0;
    virtual HRESULT __stdcall CreateWithWidthAndHeight(::IUnknown* resourceCreator, float width, float height, ::IUnknown** renderTarget) = 0;
    virtual HRESULT __stdcall CreateWithWidthAndHeightAndDpi(::IUnknown* resourceCreator, float width, float height, float dpi, ::IUnknown** renderTarget) = 0;
    virtual HRESULT __stdcall CreateWithWidthAndHeightAndDpiAndFormatAndAlpha(::IUnknown* resourceCreator, float width, float height, float dpi, Windows::Graphics::DirectX::DirectXPixelFormat format, Microsoft::Graphics::Canvas::CanvasAlphaMode alpha, ::IUnknown** renderTarget) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::ICanvasRenderTargetStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateFromDirect3D11Surface(::IUnknown* resourceCreator, ::IUnknown* surface, ::IUnknown** bitmap) = 0;
    virtual HRESULT __stdcall CreateFromDirect3D11SurfaceWithDpi(::IUnknown* resourceCreator, ::IUnknown* surface, float dpi, ::IUnknown** bitmap) = 0;
    virtual HRESULT __stdcall CreateFromDirect3D11SurfaceWithDpiAndAlpha(::IUnknown* resourceCreator, ::IUnknown* surface, float dpi, Microsoft::Graphics::Canvas::CanvasAlphaMode alpha, ::IUnknown** bitmap) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::ICanvasResourceCreator>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Device(::IUnknown** value) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::ICanvasResourceCreatorWithDpi>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Dpi(float* dpi) = 0;
    virtual HRESULT __stdcall ConvertPixelsToDips(int32_t pixels, float* dips) = 0;
    virtual HRESULT __stdcall ConvertDipsToPixels(float dips, Microsoft::Graphics::Canvas::CanvasDpiRounding dpiRounding, int32_t* pixels) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::ICanvasSpriteBatch>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall DrawToRect(::IUnknown* bitmap, Windows::Foundation::Rect destRect) = 0;
    virtual HRESULT __stdcall DrawAtOffset(::IUnknown* bitmap, Windows::Foundation::Numerics::float2 offset) = 0;
    virtual HRESULT __stdcall DrawWithTransform(::IUnknown* bitmap, Windows::Foundation::Numerics::float3x2 transform) = 0;
    virtual HRESULT __stdcall DrawToRectWithTint(::IUnknown* bitmap, Windows::Foundation::Rect destRect, Windows::Foundation::Numerics::float4 tint) = 0;
    virtual HRESULT __stdcall DrawAtOffsetWithTint(::IUnknown* bitmap, Windows::Foundation::Numerics::float2 offset, Windows::Foundation::Numerics::float4 tint) = 0;
    virtual HRESULT __stdcall DrawWithTransformAndTint(::IUnknown* bitmap, Windows::Foundation::Numerics::float3x2 transform, Windows::Foundation::Numerics::float4 tint) = 0;
    virtual HRESULT __stdcall DrawToRectWithTintAndFlip(::IUnknown* bitmap, Windows::Foundation::Rect destRect, Windows::Foundation::Numerics::float4 tint, Microsoft::Graphics::Canvas::CanvasSpriteFlip flip) = 0;
    virtual HRESULT __stdcall DrawWithTransformAndTintAndFlip(::IUnknown* bitmap, Windows::Foundation::Numerics::float3x2 transform, Windows::Foundation::Numerics::float4 tint, Microsoft::Graphics::Canvas::CanvasSpriteFlip flip) = 0;
    virtual HRESULT __stdcall DrawAtOffsetWithTintAndTransform(::IUnknown* bitmap, Windows::Foundation::Numerics::float2 offset, Windows::Foundation::Numerics::float4 tint, Windows::Foundation::Numerics::float2 origin, float rotation, Windows::Foundation::Numerics::float2 scale, Microsoft::Graphics::Canvas::CanvasSpriteFlip flip) = 0;
    virtual HRESULT __stdcall DrawFromSpriteSheetToRect(::IUnknown* bitmap, Windows::Foundation::Rect destRect, Windows::Foundation::Rect sourceRect) = 0;
    virtual HRESULT __stdcall DrawFromSpriteSheetAtOffset(::IUnknown* bitmap, Windows::Foundation::Numerics::float2 offset, Windows::Foundation::Rect sourceRect) = 0;
    virtual HRESULT __stdcall DrawFromSpriteSheetWithTransform(::IUnknown* bitmap, Windows::Foundation::Numerics::float3x2 transform, Windows::Foundation::Rect sourceRect) = 0;
    virtual HRESULT __stdcall DrawFromSpriteSheetToRectWithTint(::IUnknown* bitmap, Windows::Foundation::Rect destRect, Windows::Foundation::Rect sourceRect, Windows::Foundation::Numerics::float4 tint) = 0;
    virtual HRESULT __stdcall DrawFromSpriteSheetAtOffsetWithTint(::IUnknown* bitmap, Windows::Foundation::Numerics::float2 offset, Windows::Foundation::Rect sourceRect, Windows::Foundation::Numerics::float4 tint) = 0;
    virtual HRESULT __stdcall DrawFromSpriteSheetWithTransformAndTint(::IUnknown* bitmap, Windows::Foundation::Numerics::float3x2 transform, Windows::Foundation::Rect sourceRect, Windows::Foundation::Numerics::float4 tint) = 0;
    virtual HRESULT __stdcall DrawFromSpriteSheetToRectWithTintAndFlip(::IUnknown* bitmap, Windows::Foundation::Rect destRect, Windows::Foundation::Rect sourceRect, Windows::Foundation::Numerics::float4 tint, Microsoft::Graphics::Canvas::CanvasSpriteFlip flip) = 0;
    virtual HRESULT __stdcall DrawFromSpriteSheetWithTransformAndTintAndFlip(::IUnknown* bitmap, Windows::Foundation::Numerics::float3x2 transform, Windows::Foundation::Rect sourceRect, Windows::Foundation::Numerics::float4 tint, Microsoft::Graphics::Canvas::CanvasSpriteFlip flip) = 0;
    virtual HRESULT __stdcall DrawFromSpriteSheetAtOffsetWithTintAndTransform(::IUnknown* bitmap, Windows::Foundation::Numerics::float2 offset, Windows::Foundation::Rect sourceRect, Windows::Foundation::Numerics::float4 tint, Windows::Foundation::Numerics::float2 origin, float rotation, Windows::Foundation::Numerics::float2 scale, Microsoft::Graphics::Canvas::CanvasSpriteFlip flip) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::ICanvasSpriteBatchStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall IsSupported(::IUnknown* device, bool* value) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::ICanvasSwapChain>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Present() = 0;
    virtual HRESULT __stdcall PresentWithSyncInterval(int32_t syncInterval) = 0;
    virtual HRESULT __stdcall ResizeBuffersWithSize(Windows::Foundation::Size newSize) = 0;
    virtual HRESULT __stdcall ResizeBuffersWithWidthAndHeight(float newWidth, float newHeight) = 0;
    virtual HRESULT __stdcall ResizeBuffersWithWidthAndHeightAndDpi(float newWidth, float newHeight, float newDpi) = 0;
    virtual HRESULT __stdcall ResizeBuffersWithAllOptions(float newWidth, float newHeight, float newDpi, Windows::Graphics::DirectX::DirectXPixelFormat newFormat, int32_t bufferCount) = 0;
    virtual HRESULT __stdcall get_Size(Windows::Foundation::Size* size) = 0;
    virtual HRESULT __stdcall get_SizeInPixels(struct_of<8>* size) = 0;
    virtual HRESULT __stdcall get_Format(Windows::Graphics::DirectX::DirectXPixelFormat* value) = 0;
    virtual HRESULT __stdcall get_BufferCount(int32_t* value) = 0;
    virtual HRESULT __stdcall get_AlphaMode(Microsoft::Graphics::Canvas::CanvasAlphaMode* value) = 0;
    virtual HRESULT __stdcall get_Rotation(Microsoft::Graphics::Canvas::CanvasSwapChainRotation* value) = 0;
    virtual HRESULT __stdcall put_Rotation(Microsoft::Graphics::Canvas::CanvasSwapChainRotation value) = 0;
    virtual HRESULT __stdcall get_SourceSize(Windows::Foundation::Size* value) = 0;
    virtual HRESULT __stdcall put_SourceSize(Windows::Foundation::Size value) = 0;
    virtual HRESULT __stdcall get_TransformMatrix(Windows::Foundation::Numerics::float3x2* value) = 0;
    virtual HRESULT __stdcall put_TransformMatrix(Windows::Foundation::Numerics::float3x2 value) = 0;
    virtual HRESULT __stdcall CreateDrawingSession(struct_of<4> clearColor, ::IUnknown** drawingSession) = 0;
    virtual HRESULT __stdcall WaitForVerticalBlank() = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::ICanvasSwapChainFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateWithSize(::IUnknown* resourceCreator, Windows::Foundation::Size size, ::IUnknown** swapChain) = 0;
    virtual HRESULT __stdcall CreateWithWidthAndHeight(::IUnknown* resourceCreator, float width, float height, ::IUnknown** swapChain) = 0;
    virtual HRESULT __stdcall CreateWithWidthAndHeightAndDpi(::IUnknown* resourceCreator, float width, float height, float dpi, ::IUnknown** swapChain) = 0;
    virtual HRESULT __stdcall CreateWithAllOptions(::IUnknown* resourceCreator, float width, float height, float dpi, Windows::Graphics::DirectX::DirectXPixelFormat format, int32_t bufferCount, Microsoft::Graphics::Canvas::CanvasAlphaMode alphaMode, ::IUnknown** swapChain) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::ICanvasSwapChainStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateForCoreWindowWithDpi(::IUnknown* resourceCreator, ::IUnknown* coreWindow, float dpi, ::IUnknown** swapChain) = 0;
    virtual HRESULT __stdcall CreateForCoreWindowWithAllOptions(::IUnknown* resourceCreator, ::IUnknown* coreWindow, float width, float height, float dpi, Windows::Graphics::DirectX::DirectXPixelFormat format, int32_t bufferCount, ::IUnknown** swapChain) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::ICanvasVirtualBitmap>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Device(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_IsCachedOnDemand(bool* value) = 0;
    virtual HRESULT __stdcall get_SizeInPixels(struct_of<8>* value) = 0;
    virtual HRESULT __stdcall get_Size(Windows::Foundation::Size* value) = 0;
    virtual HRESULT __stdcall get_Bounds(Windows::Foundation::Rect* value) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::ICanvasVirtualBitmapStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall LoadAsyncFromFileName(::IUnknown* resourceCreator, HSTRING fileName, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall LoadAsyncFromFileNameWithOptions(::IUnknown* resourceCreator, HSTRING fileName, Microsoft::Graphics::Canvas::CanvasVirtualBitmapOptions options, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall LoadAsyncFromFileNameWithOptionsAndAlpha(::IUnknown* resourceCreator, HSTRING fileName, Microsoft::Graphics::Canvas::CanvasVirtualBitmapOptions options, Microsoft::Graphics::Canvas::CanvasAlphaMode alpha, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall LoadAsyncFromUri(::IUnknown* resourceCreator, ::IUnknown* uri, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall LoadAsyncFromUriWithOptions(::IUnknown* resourceCreator, ::IUnknown* uri, Microsoft::Graphics::Canvas::CanvasVirtualBitmapOptions options, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall LoadAsyncFromUriWithOptionsAndAlpha(::IUnknown* resourceCreator, ::IUnknown* uri, Microsoft::Graphics::Canvas::CanvasVirtualBitmapOptions options, Microsoft::Graphics::Canvas::CanvasAlphaMode alpha, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall LoadAsyncFromStream(::IUnknown* resourceCreator, ::IUnknown* stream, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall LoadAsyncFromStreamWithOptions(::IUnknown* resourceCreator, ::IUnknown* stream, Microsoft::Graphics::Canvas::CanvasVirtualBitmapOptions options, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall LoadAsyncFromStreamWithOptionsAndAlpha(::IUnknown* resourceCreator, ::IUnknown* stream, Microsoft::Graphics::Canvas::CanvasVirtualBitmapOptions options, Microsoft::Graphics::Canvas::CanvasAlphaMode alpha, ::IUnknown** value) = 0;
};};

}
