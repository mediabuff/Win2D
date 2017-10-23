// C++/WinRT v1.0.170906.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Microsoft::Graphics::Canvas {

enum class CanvasAlphaMode;
enum class CanvasDpiRounding;
struct CanvasDevice;
struct CanvasDrawingSession;
struct CanvasSwapChain;
struct ICanvasResourceCreator;
struct ICanvasResourceCreatorWithDpi;

}

WINRT_EXPORT namespace winrt::Microsoft::Graphics::Canvas::UI {

struct CanvasCreateResourcesEventArgs;
struct CanvasTimingInformation;

}

WINRT_EXPORT namespace winrt::Windows::Graphics::Imaging {

struct BitmapSize;

}

WINRT_EXPORT namespace winrt::Windows::UI {

struct Color;

}

WINRT_EXPORT namespace winrt::Windows::UI::Core {

enum class CoreInputDeviceTypes : unsigned;
struct CoreIndependentInputSource;
struct DispatchedHandler;

}

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Media::Imaging {

struct VirtualSurfaceImageSource;

}

WINRT_EXPORT namespace winrt::Microsoft::Graphics::Canvas::UI::Xaml {

struct ICanvasAnimatedControl;
struct ICanvasAnimatedDrawEventArgs;
struct ICanvasAnimatedDrawEventArgsFactory;
struct ICanvasAnimatedUpdateEventArgs;
struct ICanvasAnimatedUpdateEventArgsFactory;
struct ICanvasControl;
struct ICanvasDrawEventArgs;
struct ICanvasDrawEventArgsFactory;
struct ICanvasImageSource;
struct ICanvasImageSourceFactory;
struct ICanvasRegionsInvalidatedEventArgs;
struct ICanvasSwapChainPanel;
struct ICanvasVirtualControl;
struct ICanvasVirtualImageSource;
struct ICanvasVirtualImageSourceFactory;
struct CanvasAnimatedControl;
struct CanvasAnimatedDrawEventArgs;
struct CanvasAnimatedUpdateEventArgs;
struct CanvasControl;
struct CanvasDrawEventArgs;
struct CanvasImageSource;
struct CanvasRegionsInvalidatedEventArgs;
struct CanvasSwapChainPanel;
struct CanvasVirtualControl;
struct CanvasVirtualImageSource;

}

namespace winrt::impl {

template <> struct category<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedControl>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedDrawEventArgs>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedDrawEventArgsFactory>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedUpdateEventArgs>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedUpdateEventArgsFactory>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasControl>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasDrawEventArgs>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasDrawEventArgsFactory>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasImageSource>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasImageSourceFactory>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasRegionsInvalidatedEventArgs>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasSwapChainPanel>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualControl>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualImageSource>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualImageSourceFactory>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::UI::Xaml::CanvasAnimatedControl>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::UI::Xaml::CanvasAnimatedDrawEventArgs>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::UI::Xaml::CanvasAnimatedUpdateEventArgs>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::UI::Xaml::CanvasControl>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::UI::Xaml::CanvasDrawEventArgs>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::UI::Xaml::CanvasImageSource>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::UI::Xaml::CanvasRegionsInvalidatedEventArgs>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::UI::Xaml::CanvasSwapChainPanel>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::UI::Xaml::CanvasVirtualControl>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::UI::Xaml::CanvasVirtualImageSource>{ using type = class_category; };
template <> struct name<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedControl>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.UI.Xaml.ICanvasAnimatedControl" }; };
template <> struct name<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedDrawEventArgs>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.UI.Xaml.ICanvasAnimatedDrawEventArgs" }; };
template <> struct name<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedDrawEventArgsFactory>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.UI.Xaml.ICanvasAnimatedDrawEventArgsFactory" }; };
template <> struct name<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedUpdateEventArgs>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.UI.Xaml.ICanvasAnimatedUpdateEventArgs" }; };
template <> struct name<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedUpdateEventArgsFactory>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.UI.Xaml.ICanvasAnimatedUpdateEventArgsFactory" }; };
template <> struct name<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasControl>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.UI.Xaml.ICanvasControl" }; };
template <> struct name<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasDrawEventArgs>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.UI.Xaml.ICanvasDrawEventArgs" }; };
template <> struct name<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasDrawEventArgsFactory>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.UI.Xaml.ICanvasDrawEventArgsFactory" }; };
template <> struct name<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasImageSource>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.UI.Xaml.ICanvasImageSource" }; };
template <> struct name<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasImageSourceFactory>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.UI.Xaml.ICanvasImageSourceFactory" }; };
template <> struct name<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasRegionsInvalidatedEventArgs>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.UI.Xaml.ICanvasRegionsInvalidatedEventArgs" }; };
template <> struct name<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasSwapChainPanel>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.UI.Xaml.ICanvasSwapChainPanel" }; };
template <> struct name<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualControl>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.UI.Xaml.ICanvasVirtualControl" }; };
template <> struct name<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualImageSource>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.UI.Xaml.ICanvasVirtualImageSource" }; };
template <> struct name<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualImageSourceFactory>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.UI.Xaml.ICanvasVirtualImageSourceFactory" }; };
template <> struct name<Microsoft::Graphics::Canvas::UI::Xaml::CanvasAnimatedControl>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.UI.Xaml.CanvasAnimatedControl" }; };
template <> struct name<Microsoft::Graphics::Canvas::UI::Xaml::CanvasAnimatedDrawEventArgs>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.UI.Xaml.CanvasAnimatedDrawEventArgs" }; };
template <> struct name<Microsoft::Graphics::Canvas::UI::Xaml::CanvasAnimatedUpdateEventArgs>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.UI.Xaml.CanvasAnimatedUpdateEventArgs" }; };
template <> struct name<Microsoft::Graphics::Canvas::UI::Xaml::CanvasControl>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.UI.Xaml.CanvasControl" }; };
template <> struct name<Microsoft::Graphics::Canvas::UI::Xaml::CanvasDrawEventArgs>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.UI.Xaml.CanvasDrawEventArgs" }; };
template <> struct name<Microsoft::Graphics::Canvas::UI::Xaml::CanvasImageSource>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.UI.Xaml.CanvasImageSource" }; };
template <> struct name<Microsoft::Graphics::Canvas::UI::Xaml::CanvasRegionsInvalidatedEventArgs>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.UI.Xaml.CanvasRegionsInvalidatedEventArgs" }; };
template <> struct name<Microsoft::Graphics::Canvas::UI::Xaml::CanvasSwapChainPanel>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.UI.Xaml.CanvasSwapChainPanel" }; };
template <> struct name<Microsoft::Graphics::Canvas::UI::Xaml::CanvasVirtualControl>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.UI.Xaml.CanvasVirtualControl" }; };
template <> struct name<Microsoft::Graphics::Canvas::UI::Xaml::CanvasVirtualImageSource>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.UI.Xaml.CanvasVirtualImageSource" }; };
template <> struct guid<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedControl>{ static constexpr GUID value{ 0x9BD47D0D,0xD57D,0x43B7,{ 0x82,0xCB,0x48,0x9C,0xC5,0x66,0xE8,0x87 } }; };
template <> struct guid<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedDrawEventArgs>{ static constexpr GUID value{ 0xBC01FF4D,0xFF6C,0x4D4D,{ 0xA9,0xE9,0x8E,0xEB,0x21,0x39,0xF2,0x3F } }; };
template <> struct guid<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedDrawEventArgsFactory>{ static constexpr GUID value{ 0xC0C8FDAC,0x0DFC,0x4E18,{ 0xA6,0xE9,0x9E,0xF7,0xDC,0x82,0xBC,0xC2 } }; };
template <> struct guid<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedUpdateEventArgs>{ static constexpr GUID value{ 0xA96B2B2A,0x0C6E,0x4AA8,{ 0x92,0x5B,0x71,0x37,0x26,0x3B,0x4E,0x44 } }; };
template <> struct guid<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedUpdateEventArgsFactory>{ static constexpr GUID value{ 0x766F4867,0xB22A,0x464B,{ 0x89,0xB1,0x0D,0xA6,0xAB,0x62,0xBE,0x68 } }; };
template <> struct guid<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasControl>{ static constexpr GUID value{ 0xF006E06D,0x79DB,0x484F,{ 0xB8,0x98,0x47,0x9C,0xF0,0x69,0xC0,0xF5 } }; };
template <> struct guid<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasDrawEventArgs>{ static constexpr GUID value{ 0xFB86169F,0x25D4,0x4551,{ 0xBD,0x8F,0x21,0x4B,0xEA,0xF0,0xAC,0x24 } }; };
template <> struct guid<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasDrawEventArgsFactory>{ static constexpr GUID value{ 0x7299D72C,0xF8E4,0x4A2F,{ 0x9E,0x30,0x7C,0xDF,0xCC,0xF3,0x1C,0x44 } }; };
template <> struct guid<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasImageSource>{ static constexpr GUID value{ 0x3C35E87A,0xE881,0x4F44,{ 0xB0,0xD1,0x55,0x14,0x13,0xAE,0xC6,0x6D } }; };
template <> struct guid<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasImageSourceFactory>{ static constexpr GUID value{ 0x8596BEDD,0xD7F7,0x4C6B,{ 0xB1,0xAD,0x41,0x94,0x90,0x35,0xE0,0x84 } }; };
template <> struct guid<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasRegionsInvalidatedEventArgs>{ static constexpr GUID value{ 0x3A21A204,0xF52F,0x4E7A,{ 0x9B,0x3F,0x94,0x66,0x98,0x19,0xD9,0x81 } }; };
template <> struct guid<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasSwapChainPanel>{ static constexpr GUID value{ 0xDBDCCB96,0x147E,0x4A82,{ 0xAF,0x3A,0xC9,0x1C,0x78,0x00,0xDA,0xA7 } }; };
template <> struct guid<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualControl>{ static constexpr GUID value{ 0x3C2B5177,0x7C61,0x41D2,{ 0x95,0xAE,0xFC,0xFC,0x92,0xFD,0x61,0x7A } }; };
template <> struct guid<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualImageSource>{ static constexpr GUID value{ 0xDF342987,0x4FE6,0x4BCD,{ 0xB8,0x85,0x2A,0xD3,0xE6,0xEF,0x9F,0xCE } }; };
template <> struct guid<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualImageSourceFactory>{ static constexpr GUID value{ 0x2FE755A1,0x307A,0x4623,{ 0x92,0x50,0x29,0x59,0x04,0x85,0xBD,0xB6 } }; };
template <> struct default_interface<Microsoft::Graphics::Canvas::UI::Xaml::CanvasAnimatedControl>{ using type = Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedControl; };
template <> struct default_interface<Microsoft::Graphics::Canvas::UI::Xaml::CanvasAnimatedDrawEventArgs>{ using type = Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedDrawEventArgs; };
template <> struct default_interface<Microsoft::Graphics::Canvas::UI::Xaml::CanvasAnimatedUpdateEventArgs>{ using type = Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedUpdateEventArgs; };
template <> struct default_interface<Microsoft::Graphics::Canvas::UI::Xaml::CanvasControl>{ using type = Microsoft::Graphics::Canvas::UI::Xaml::ICanvasControl; };
template <> struct default_interface<Microsoft::Graphics::Canvas::UI::Xaml::CanvasDrawEventArgs>{ using type = Microsoft::Graphics::Canvas::UI::Xaml::ICanvasDrawEventArgs; };
template <> struct default_interface<Microsoft::Graphics::Canvas::UI::Xaml::CanvasImageSource>{ using type = Microsoft::Graphics::Canvas::UI::Xaml::ICanvasImageSource; };
template <> struct default_interface<Microsoft::Graphics::Canvas::UI::Xaml::CanvasRegionsInvalidatedEventArgs>{ using type = Microsoft::Graphics::Canvas::UI::Xaml::ICanvasRegionsInvalidatedEventArgs; };
template <> struct default_interface<Microsoft::Graphics::Canvas::UI::Xaml::CanvasSwapChainPanel>{ using type = Microsoft::Graphics::Canvas::UI::Xaml::ICanvasSwapChainPanel; };
template <> struct default_interface<Microsoft::Graphics::Canvas::UI::Xaml::CanvasVirtualControl>{ using type = Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualControl; };
template <> struct default_interface<Microsoft::Graphics::Canvas::UI::Xaml::CanvasVirtualImageSource>{ using type = Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualImageSource; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasAnimatedControl
{
    event_token CreateResources(Windows::Foundation::TypedEventHandler<Microsoft::Graphics::Canvas::UI::Xaml::CanvasAnimatedControl, Microsoft::Graphics::Canvas::UI::CanvasCreateResourcesEventArgs> const& value) const;
    using CreateResources_revoker = event_revoker<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedControl>;
    CreateResources_revoker CreateResources(auto_revoke_t, Windows::Foundation::TypedEventHandler<Microsoft::Graphics::Canvas::UI::Xaml::CanvasAnimatedControl, Microsoft::Graphics::Canvas::UI::CanvasCreateResourcesEventArgs> const& value) const;
    void CreateResources(event_token const& token) const;
    event_token Update(Windows::Foundation::TypedEventHandler<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedControl, Microsoft::Graphics::Canvas::UI::Xaml::CanvasAnimatedUpdateEventArgs> const& value) const;
    using Update_revoker = event_revoker<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedControl>;
    Update_revoker Update(auto_revoke_t, Windows::Foundation::TypedEventHandler<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedControl, Microsoft::Graphics::Canvas::UI::Xaml::CanvasAnimatedUpdateEventArgs> const& value) const;
    void Update(event_token const& token) const;
    event_token Draw(Windows::Foundation::TypedEventHandler<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedControl, Microsoft::Graphics::Canvas::UI::Xaml::CanvasAnimatedDrawEventArgs> const& value) const;
    using Draw_revoker = event_revoker<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedControl>;
    Draw_revoker Draw(auto_revoke_t, Windows::Foundation::TypedEventHandler<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedControl, Microsoft::Graphics::Canvas::UI::Xaml::CanvasAnimatedDrawEventArgs> const& value) const;
    void Draw(event_token const& token) const;
    event_token GameLoopStarting(Windows::Foundation::TypedEventHandler<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedControl, Windows::Foundation::IInspectable> const& value) const;
    using GameLoopStarting_revoker = event_revoker<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedControl>;
    GameLoopStarting_revoker GameLoopStarting(auto_revoke_t, Windows::Foundation::TypedEventHandler<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedControl, Windows::Foundation::IInspectable> const& value) const;
    void GameLoopStarting(event_token const& token) const;
    event_token GameLoopStopped(Windows::Foundation::TypedEventHandler<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedControl, Windows::Foundation::IInspectable> const& value) const;
    using GameLoopStopped_revoker = event_revoker<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedControl>;
    GameLoopStopped_revoker GameLoopStopped(auto_revoke_t, Windows::Foundation::TypedEventHandler<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedControl, Windows::Foundation::IInspectable> const& value) const;
    void GameLoopStopped(event_token const& token) const;
    bool ReadyToDraw() const;
    void IsFixedTimeStep(bool value) const;
    bool IsFixedTimeStep() const;
    void TargetElapsedTime(Windows::Foundation::TimeSpan const& value) const;
    Windows::Foundation::TimeSpan TargetElapsedTime() const;
    void Paused(bool value) const;
    bool Paused() const;
    void ClearColor(Windows::UI::Color const& value) const;
    Windows::UI::Color ClearColor() const;
    Windows::Foundation::Size Size() const;
    void Invalidate() const;
    void ResetElapsedTime() const;
    Windows::UI::Core::CoreIndependentInputSource CreateCoreIndependentInputSource(Windows::UI::Core::CoreInputDeviceTypes const& deviceTypes) const;
    void RemoveFromVisualTree() const;
    bool HasGameLoopThreadAccess() const;
    Windows::Foundation::IAsyncAction RunOnGameLoopThreadAsync(Windows::UI::Core::DispatchedHandler const& agileCallback) const;
    bool UseSharedDevice() const;
    void UseSharedDevice(bool value) const;
    bool ForceSoftwareRenderer() const;
    void ForceSoftwareRenderer(bool value) const;
    Microsoft::Graphics::Canvas::CanvasDevice CustomDevice() const;
    void CustomDevice(Microsoft::Graphics::Canvas::CanvasDevice const& value) const;
    float DpiScale() const;
    void DpiScale(float ratio) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedControl> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasAnimatedControl<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasAnimatedDrawEventArgs
{
    Microsoft::Graphics::Canvas::CanvasDrawingSession DrawingSession() const;
    Microsoft::Graphics::Canvas::UI::CanvasTimingInformation Timing() const;
};
template <> struct consume<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedDrawEventArgs> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasAnimatedDrawEventArgs<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasAnimatedDrawEventArgsFactory
{
    Microsoft::Graphics::Canvas::UI::Xaml::CanvasAnimatedDrawEventArgs Create(Microsoft::Graphics::Canvas::CanvasDrawingSession const& canvasDrawingSession, Microsoft::Graphics::Canvas::UI::CanvasTimingInformation const& timingInformation) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedDrawEventArgsFactory> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasAnimatedDrawEventArgsFactory<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasAnimatedUpdateEventArgs
{
    Microsoft::Graphics::Canvas::UI::CanvasTimingInformation Timing() const;
};
template <> struct consume<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedUpdateEventArgs> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasAnimatedUpdateEventArgs<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasAnimatedUpdateEventArgsFactory
{
    Microsoft::Graphics::Canvas::UI::Xaml::CanvasAnimatedUpdateEventArgs Create(Microsoft::Graphics::Canvas::UI::CanvasTimingInformation const& timingInformation) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedUpdateEventArgsFactory> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasAnimatedUpdateEventArgsFactory<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasControl
{
    event_token CreateResources(Windows::Foundation::TypedEventHandler<Microsoft::Graphics::Canvas::UI::Xaml::CanvasControl, Microsoft::Graphics::Canvas::UI::CanvasCreateResourcesEventArgs> const& value) const;
    using CreateResources_revoker = event_revoker<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasControl>;
    CreateResources_revoker CreateResources(auto_revoke_t, Windows::Foundation::TypedEventHandler<Microsoft::Graphics::Canvas::UI::Xaml::CanvasControl, Microsoft::Graphics::Canvas::UI::CanvasCreateResourcesEventArgs> const& value) const;
    void CreateResources(event_token const& token) const;
    bool ReadyToDraw() const;
    event_token Draw(Windows::Foundation::TypedEventHandler<Microsoft::Graphics::Canvas::UI::Xaml::CanvasControl, Microsoft::Graphics::Canvas::UI::Xaml::CanvasDrawEventArgs> const& value) const;
    using Draw_revoker = event_revoker<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasControl>;
    Draw_revoker Draw(auto_revoke_t, Windows::Foundation::TypedEventHandler<Microsoft::Graphics::Canvas::UI::Xaml::CanvasControl, Microsoft::Graphics::Canvas::UI::Xaml::CanvasDrawEventArgs> const& value) const;
    void Draw(event_token const& token) const;
    void ClearColor(Windows::UI::Color const& value) const;
    Windows::UI::Color ClearColor() const;
    void Invalidate() const;
    Windows::Foundation::Size Size() const;
    void RemoveFromVisualTree() const;
    bool UseSharedDevice() const;
    void UseSharedDevice(bool value) const;
    bool ForceSoftwareRenderer() const;
    void ForceSoftwareRenderer(bool value) const;
    Microsoft::Graphics::Canvas::CanvasDevice CustomDevice() const;
    void CustomDevice(Microsoft::Graphics::Canvas::CanvasDevice const& value) const;
    float DpiScale() const;
    void DpiScale(float ratio) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasControl> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasControl<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasDrawEventArgs
{
    Microsoft::Graphics::Canvas::CanvasDrawingSession DrawingSession() const;
};
template <> struct consume<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasDrawEventArgs> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasDrawEventArgs<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasDrawEventArgsFactory
{
    Microsoft::Graphics::Canvas::UI::Xaml::CanvasDrawEventArgs Create(Microsoft::Graphics::Canvas::CanvasDrawingSession const& canvasDrawingSession) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasDrawEventArgsFactory> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasDrawEventArgsFactory<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasImageSource
{
    Microsoft::Graphics::Canvas::CanvasDrawingSession CreateDrawingSession(Windows::UI::Color const& clearColor) const;
    Microsoft::Graphics::Canvas::CanvasDrawingSession CreateDrawingSession(Windows::UI::Color const& clearColor, Windows::Foundation::Rect const& updateRectangle) const;
    void Recreate(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& value) const;
    Windows::Foundation::Size Size() const;
    Windows::Graphics::Imaging::BitmapSize SizeInPixels() const;
    Microsoft::Graphics::Canvas::CanvasAlphaMode AlphaMode() const;
};
template <> struct consume<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasImageSource> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasImageSource<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasImageSourceFactory
{
    Microsoft::Graphics::Canvas::UI::Xaml::CanvasImageSource CreateWithSize(Microsoft::Graphics::Canvas::ICanvasResourceCreatorWithDpi const& resourceCreator, Windows::Foundation::Size const& size) const;
    Microsoft::Graphics::Canvas::UI::Xaml::CanvasImageSource CreateWithWidthAndHeight(Microsoft::Graphics::Canvas::ICanvasResourceCreatorWithDpi const& resourceCreator, float width, float height) const;
    Microsoft::Graphics::Canvas::UI::Xaml::CanvasImageSource CreateWithWidthAndHeightAndDpi(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, float width, float height, float dpi) const;
    Microsoft::Graphics::Canvas::UI::Xaml::CanvasImageSource CreateWithWidthAndHeightAndDpiAndAlphaMode(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, float width, float height, float dpi, Microsoft::Graphics::Canvas::CanvasAlphaMode const& alphaMode) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasImageSourceFactory> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasImageSourceFactory<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasRegionsInvalidatedEventArgs
{
    com_array<Windows::Foundation::Rect> InvalidatedRegions() const;
    Windows::Foundation::Rect VisibleRegion() const;
};
template <> struct consume<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasRegionsInvalidatedEventArgs> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasRegionsInvalidatedEventArgs<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasSwapChainPanel
{
    void SwapChain(Microsoft::Graphics::Canvas::CanvasSwapChain const& value) const;
    Microsoft::Graphics::Canvas::CanvasSwapChain SwapChain() const;
    void RemoveFromVisualTree() const;
};
template <> struct consume<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasSwapChainPanel> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasSwapChainPanel<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasVirtualControl
{
    event_token CreateResources(Windows::Foundation::TypedEventHandler<Microsoft::Graphics::Canvas::UI::Xaml::CanvasVirtualControl, Microsoft::Graphics::Canvas::UI::CanvasCreateResourcesEventArgs> const& value) const;
    using CreateResources_revoker = event_revoker<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualControl>;
    CreateResources_revoker CreateResources(auto_revoke_t, Windows::Foundation::TypedEventHandler<Microsoft::Graphics::Canvas::UI::Xaml::CanvasVirtualControl, Microsoft::Graphics::Canvas::UI::CanvasCreateResourcesEventArgs> const& value) const;
    void CreateResources(event_token const& token) const;
    bool ReadyToDraw() const;
    event_token RegionsInvalidated(Windows::Foundation::TypedEventHandler<Microsoft::Graphics::Canvas::UI::Xaml::CanvasVirtualControl, Microsoft::Graphics::Canvas::UI::Xaml::CanvasRegionsInvalidatedEventArgs> const& value) const;
    using RegionsInvalidated_revoker = event_revoker<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualControl>;
    RegionsInvalidated_revoker RegionsInvalidated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Microsoft::Graphics::Canvas::UI::Xaml::CanvasVirtualControl, Microsoft::Graphics::Canvas::UI::Xaml::CanvasRegionsInvalidatedEventArgs> const& value) const;
    void RegionsInvalidated(event_token const& token) const;
    void ClearColor(Windows::UI::Color const& value) const;
    Windows::UI::Color ClearColor() const;
    Microsoft::Graphics::Canvas::CanvasDrawingSession CreateDrawingSession(Windows::Foundation::Rect const& updateRectangle) const;
    void SuspendDrawingSession(Microsoft::Graphics::Canvas::CanvasDrawingSession const& drawingSession) const;
    void ResumeDrawingSession(Microsoft::Graphics::Canvas::CanvasDrawingSession const& drawingSession) const;
    void Invalidate() const;
    void Invalidate(Windows::Foundation::Rect const& region) const;
    Windows::Foundation::Size Size() const;
    void RemoveFromVisualTree() const;
    bool UseSharedDevice() const;
    void UseSharedDevice(bool value) const;
    bool ForceSoftwareRenderer() const;
    void ForceSoftwareRenderer(bool value) const;
    Microsoft::Graphics::Canvas::CanvasDevice CustomDevice() const;
    void CustomDevice(Microsoft::Graphics::Canvas::CanvasDevice const& value) const;
    float DpiScale() const;
    void DpiScale(float ratio) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualControl> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasVirtualControl<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasVirtualImageSource
{
    Windows::UI::Xaml::Media::Imaging::VirtualSurfaceImageSource Source() const;
    Microsoft::Graphics::Canvas::CanvasDrawingSession CreateDrawingSession(Windows::UI::Color const& clearColor, Windows::Foundation::Rect const& updateRectangle) const;
    void SuspendDrawingSession(Microsoft::Graphics::Canvas::CanvasDrawingSession const& drawingSession) const;
    void ResumeDrawingSession(Microsoft::Graphics::Canvas::CanvasDrawingSession const& drawingSession) const;
    void Invalidate() const;
    void Invalidate(Windows::Foundation::Rect const& region) const;
    void RaiseRegionsInvalidatedIfAny() const;
    event_token RegionsInvalidated(Windows::Foundation::TypedEventHandler<Microsoft::Graphics::Canvas::UI::Xaml::CanvasVirtualImageSource, Microsoft::Graphics::Canvas::UI::Xaml::CanvasRegionsInvalidatedEventArgs> const& value) const;
    using RegionsInvalidated_revoker = event_revoker<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualImageSource>;
    RegionsInvalidated_revoker RegionsInvalidated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Microsoft::Graphics::Canvas::UI::Xaml::CanvasVirtualImageSource, Microsoft::Graphics::Canvas::UI::Xaml::CanvasRegionsInvalidatedEventArgs> const& value) const;
    void RegionsInvalidated(event_token const& token) const;
    void Resize(Windows::Foundation::Size const& size) const;
    void Resize(float width, float height) const;
    void Resize(float width, float height, float dpi) const;
    void Recreate(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator) const;
    Windows::Foundation::Size Size() const;
    Windows::Graphics::Imaging::BitmapSize SizeInPixels() const;
    Microsoft::Graphics::Canvas::CanvasAlphaMode AlphaMode() const;
};
template <> struct consume<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualImageSource> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasVirtualImageSource<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasVirtualImageSourceFactory
{
    Microsoft::Graphics::Canvas::UI::Xaml::CanvasVirtualImageSource CreateWithSize(Microsoft::Graphics::Canvas::ICanvasResourceCreatorWithDpi const& resourceCreator, Windows::Foundation::Size const& size) const;
    Microsoft::Graphics::Canvas::UI::Xaml::CanvasVirtualImageSource CreateWithWidthAndHeight(Microsoft::Graphics::Canvas::ICanvasResourceCreatorWithDpi const& resourceCreator, float width, float height) const;
    Microsoft::Graphics::Canvas::UI::Xaml::CanvasVirtualImageSource CreateWithWidthAndHeightAndDpi(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, float width, float height, float dpi) const;
    Microsoft::Graphics::Canvas::UI::Xaml::CanvasVirtualImageSource CreateWithWidthAndHeightAndDpiAndAlphaMode(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, float width, float height, float dpi, Microsoft::Graphics::Canvas::CanvasAlphaMode const& alphaMode) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualImageSourceFactory> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasVirtualImageSourceFactory<D>; };

template <> struct abi<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedControl>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_CreateResources(::IUnknown* value, event_token* token) = 0;
    virtual HRESULT __stdcall remove_CreateResources(event_token token) = 0;
    virtual HRESULT __stdcall add_Update(::IUnknown* value, event_token* token) = 0;
    virtual HRESULT __stdcall remove_Update(event_token token) = 0;
    virtual HRESULT __stdcall add_Draw(::IUnknown* value, event_token* token) = 0;
    virtual HRESULT __stdcall remove_Draw(event_token token) = 0;
    virtual HRESULT __stdcall add_GameLoopStarting(::IUnknown* value, event_token* token) = 0;
    virtual HRESULT __stdcall remove_GameLoopStarting(event_token token) = 0;
    virtual HRESULT __stdcall add_GameLoopStopped(::IUnknown* value, event_token* token) = 0;
    virtual HRESULT __stdcall remove_GameLoopStopped(event_token token) = 0;
    virtual HRESULT __stdcall get_ReadyToDraw(bool* value) = 0;
    virtual HRESULT __stdcall put_IsFixedTimeStep(bool value) = 0;
    virtual HRESULT __stdcall get_IsFixedTimeStep(bool* value) = 0;
    virtual HRESULT __stdcall put_TargetElapsedTime(Windows::Foundation::TimeSpan value) = 0;
    virtual HRESULT __stdcall get_TargetElapsedTime(Windows::Foundation::TimeSpan* value) = 0;
    virtual HRESULT __stdcall put_Paused(bool value) = 0;
    virtual HRESULT __stdcall get_Paused(bool* value) = 0;
    virtual HRESULT __stdcall put_ClearColor(struct_of<4> value) = 0;
    virtual HRESULT __stdcall get_ClearColor(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_Size(Windows::Foundation::Size* value) = 0;
    virtual HRESULT __stdcall Invalidate() = 0;
    virtual HRESULT __stdcall ResetElapsedTime() = 0;
    virtual HRESULT __stdcall CreateCoreIndependentInputSource(Windows::UI::Core::CoreInputDeviceTypes deviceTypes, ::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall RemoveFromVisualTree() = 0;
    virtual HRESULT __stdcall get_HasGameLoopThreadAccess(bool* value) = 0;
    virtual HRESULT __stdcall RunOnGameLoopThreadAsync(::IUnknown* agileCallback, ::IUnknown** asyncAction) = 0;
    virtual HRESULT __stdcall get_UseSharedDevice(bool* value) = 0;
    virtual HRESULT __stdcall put_UseSharedDevice(bool value) = 0;
    virtual HRESULT __stdcall get_ForceSoftwareRenderer(bool* value) = 0;
    virtual HRESULT __stdcall put_ForceSoftwareRenderer(bool value) = 0;
    virtual HRESULT __stdcall get_CustomDevice(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_CustomDevice(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_DpiScale(float* value) = 0;
    virtual HRESULT __stdcall put_DpiScale(float ratio) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedDrawEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DrawingSession(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Timing(struct_of<32>* value) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedDrawEventArgsFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(::IUnknown* canvasDrawingSession, struct_of<32> timingInformation, ::IUnknown** animatedControlDrawEventArgs) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedUpdateEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Timing(struct_of<32>* value) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedUpdateEventArgsFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(struct_of<32> timingInformation, ::IUnknown** updateEventArgs) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasControl>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_CreateResources(::IUnknown* value, event_token* token) = 0;
    virtual HRESULT __stdcall remove_CreateResources(event_token token) = 0;
    virtual HRESULT __stdcall get_ReadyToDraw(bool* value) = 0;
    virtual HRESULT __stdcall add_Draw(::IUnknown* value, event_token* token) = 0;
    virtual HRESULT __stdcall remove_Draw(event_token token) = 0;
    virtual HRESULT __stdcall put_ClearColor(struct_of<4> value) = 0;
    virtual HRESULT __stdcall get_ClearColor(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall Invalidate() = 0;
    virtual HRESULT __stdcall get_Size(Windows::Foundation::Size* size) = 0;
    virtual HRESULT __stdcall RemoveFromVisualTree() = 0;
    virtual HRESULT __stdcall get_UseSharedDevice(bool* value) = 0;
    virtual HRESULT __stdcall put_UseSharedDevice(bool value) = 0;
    virtual HRESULT __stdcall get_ForceSoftwareRenderer(bool* value) = 0;
    virtual HRESULT __stdcall put_ForceSoftwareRenderer(bool value) = 0;
    virtual HRESULT __stdcall get_CustomDevice(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_CustomDevice(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_DpiScale(float* value) = 0;
    virtual HRESULT __stdcall put_DpiScale(float ratio) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasDrawEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DrawingSession(::IUnknown** value) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasDrawEventArgsFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(::IUnknown* canvasDrawingSession, ::IUnknown** drawEventArgs) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasImageSource>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateDrawingSession(struct_of<4> clearColor, ::IUnknown** drawingSession) = 0;
    virtual HRESULT __stdcall CreateDrawingSessionWithUpdateRectangle(struct_of<4> clearColor, Windows::Foundation::Rect updateRectangle, ::IUnknown** drawingSession) = 0;
    virtual HRESULT __stdcall Recreate(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Size(Windows::Foundation::Size* size) = 0;
    virtual HRESULT __stdcall get_SizeInPixels(struct_of<8>* size) = 0;
    virtual HRESULT __stdcall get_AlphaMode(Microsoft::Graphics::Canvas::CanvasAlphaMode* value) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasImageSourceFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateWithSize(::IUnknown* resourceCreator, Windows::Foundation::Size size, ::IUnknown** imageSource) = 0;
    virtual HRESULT __stdcall CreateWithWidthAndHeight(::IUnknown* resourceCreator, float width, float height, ::IUnknown** imageSource) = 0;
    virtual HRESULT __stdcall CreateWithWidthAndHeightAndDpi(::IUnknown* resourceCreator, float width, float height, float dpi, ::IUnknown** imageSource) = 0;
    virtual HRESULT __stdcall CreateWithWidthAndHeightAndDpiAndAlphaMode(::IUnknown* resourceCreator, float width, float height, float dpi, Microsoft::Graphics::Canvas::CanvasAlphaMode alphaMode, ::IUnknown** imageSource) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasRegionsInvalidatedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_InvalidatedRegions(uint32_t* __valueSize, Windows::Foundation::Rect** value) = 0;
    virtual HRESULT __stdcall get_VisibleRegion(Windows::Foundation::Rect* value) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasSwapChainPanel>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall put_SwapChain(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_SwapChain(::IUnknown** value) = 0;
    virtual HRESULT __stdcall RemoveFromVisualTree() = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualControl>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_CreateResources(::IUnknown* value, event_token* token) = 0;
    virtual HRESULT __stdcall remove_CreateResources(event_token token) = 0;
    virtual HRESULT __stdcall get_ReadyToDraw(bool* value) = 0;
    virtual HRESULT __stdcall add_RegionsInvalidated(::IUnknown* value, event_token* token) = 0;
    virtual HRESULT __stdcall remove_RegionsInvalidated(event_token token) = 0;
    virtual HRESULT __stdcall put_ClearColor(struct_of<4> value) = 0;
    virtual HRESULT __stdcall get_ClearColor(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall CreateDrawingSession(Windows::Foundation::Rect updateRectangle, ::IUnknown** drawingSession) = 0;
    virtual HRESULT __stdcall SuspendDrawingSession(::IUnknown* drawingSession) = 0;
    virtual HRESULT __stdcall ResumeDrawingSession(::IUnknown* drawingSession) = 0;
    virtual HRESULT __stdcall Invalidate() = 0;
    virtual HRESULT __stdcall InvalidateRegion(Windows::Foundation::Rect region) = 0;
    virtual HRESULT __stdcall get_Size(Windows::Foundation::Size* size) = 0;
    virtual HRESULT __stdcall RemoveFromVisualTree() = 0;
    virtual HRESULT __stdcall get_UseSharedDevice(bool* value) = 0;
    virtual HRESULT __stdcall put_UseSharedDevice(bool value) = 0;
    virtual HRESULT __stdcall get_ForceSoftwareRenderer(bool* value) = 0;
    virtual HRESULT __stdcall put_ForceSoftwareRenderer(bool value) = 0;
    virtual HRESULT __stdcall get_CustomDevice(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_CustomDevice(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_DpiScale(float* value) = 0;
    virtual HRESULT __stdcall put_DpiScale(float ratio) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualImageSource>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Source(::IUnknown** value) = 0;
    virtual HRESULT __stdcall CreateDrawingSession(struct_of<4> clearColor, Windows::Foundation::Rect updateRectangle, ::IUnknown** drawingSession) = 0;
    virtual HRESULT __stdcall SuspendDrawingSession(::IUnknown* drawingSession) = 0;
    virtual HRESULT __stdcall ResumeDrawingSession(::IUnknown* drawingSession) = 0;
    virtual HRESULT __stdcall Invalidate() = 0;
    virtual HRESULT __stdcall InvalidateRegion(Windows::Foundation::Rect region) = 0;
    virtual HRESULT __stdcall RaiseRegionsInvalidatedIfAny() = 0;
    virtual HRESULT __stdcall add_RegionsInvalidated(::IUnknown* value, event_token* token) = 0;
    virtual HRESULT __stdcall remove_RegionsInvalidated(event_token token) = 0;
    virtual HRESULT __stdcall ResizeWithSize(Windows::Foundation::Size size) = 0;
    virtual HRESULT __stdcall ResizeWithWidthAndHeight(float width, float height) = 0;
    virtual HRESULT __stdcall ResizeWithWidthAndHeightAndDpi(float width, float height, float dpi) = 0;
    virtual HRESULT __stdcall Recreate(::IUnknown* resourceCreator) = 0;
    virtual HRESULT __stdcall get_Size(Windows::Foundation::Size* size) = 0;
    virtual HRESULT __stdcall get_SizeInPixels(struct_of<8>* size) = 0;
    virtual HRESULT __stdcall get_AlphaMode(Microsoft::Graphics::Canvas::CanvasAlphaMode* value) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualImageSourceFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateWithSize(::IUnknown* resourceCreator, Windows::Foundation::Size size, ::IUnknown** imageSource) = 0;
    virtual HRESULT __stdcall CreateWithWidthAndHeight(::IUnknown* resourceCreator, float width, float height, ::IUnknown** imageSource) = 0;
    virtual HRESULT __stdcall CreateWithWidthAndHeightAndDpi(::IUnknown* resourceCreator, float width, float height, float dpi, ::IUnknown** imageSource) = 0;
    virtual HRESULT __stdcall CreateWithWidthAndHeightAndDpiAndAlphaMode(::IUnknown* resourceCreator, float width, float height, float dpi, Microsoft::Graphics::Canvas::CanvasAlphaMode alphaMode, ::IUnknown** imageSource) = 0;
};};

}
