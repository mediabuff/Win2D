// C++/WinRT v1.0.170906.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Microsoft::Graphics::Canvas {

struct CanvasDevice;
struct CanvasDrawingSession;
struct CanvasSwapChain;

}

WINRT_EXPORT namespace winrt::Windows::UI::Composition {

struct CompositionDrawingSurface;
struct CompositionGraphicsDevice;
struct Compositor;
struct ICompositionSurface;

}

WINRT_EXPORT namespace winrt::Microsoft::Graphics::Canvas::UI::Composition {

struct ICanvasCompositionStatics;
struct CanvasComposition;

}

namespace winrt::impl {

template <> struct category<Microsoft::Graphics::Canvas::UI::Composition::ICanvasCompositionStatics>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::UI::Composition::CanvasComposition>{ using type = class_category; };
template <> struct name<Microsoft::Graphics::Canvas::UI::Composition::ICanvasCompositionStatics>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.UI.Composition.ICanvasCompositionStatics" }; };
template <> struct name<Microsoft::Graphics::Canvas::UI::Composition::CanvasComposition>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.UI.Composition.CanvasComposition" }; };
template <> struct guid<Microsoft::Graphics::Canvas::UI::Composition::ICanvasCompositionStatics>{ static constexpr GUID value{ 0x162DEB43,0x1CF5,0x46F8,{ 0xA0,0xAF,0x35,0x6B,0x23,0x15,0x8F,0x92 } }; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_UI_Composition_ICanvasCompositionStatics
{
    Windows::UI::Composition::CompositionGraphicsDevice CreateCompositionGraphicsDevice(Windows::UI::Composition::Compositor const& compositor, Microsoft::Graphics::Canvas::CanvasDevice const& canvasDevice) const;
    Windows::UI::Composition::ICompositionSurface CreateCompositionSurfaceForSwapChain(Windows::UI::Composition::Compositor const& compositor, Microsoft::Graphics::Canvas::CanvasSwapChain const& swapChain) const;
    Microsoft::Graphics::Canvas::CanvasDevice GetCanvasDevice(Windows::UI::Composition::CompositionGraphicsDevice const& graphicsDevice) const;
    void SetCanvasDevice(Windows::UI::Composition::CompositionGraphicsDevice const& graphicsDevice, Microsoft::Graphics::Canvas::CanvasDevice const& canvasDevice) const;
    Microsoft::Graphics::Canvas::CanvasDrawingSession CreateDrawingSession(Windows::UI::Composition::CompositionDrawingSurface const& drawingSurface) const;
    Microsoft::Graphics::Canvas::CanvasDrawingSession CreateDrawingSession(Windows::UI::Composition::CompositionDrawingSurface const& drawingSurface, Windows::Foundation::Rect const& updateRect) const;
    Microsoft::Graphics::Canvas::CanvasDrawingSession CreateDrawingSession(Windows::UI::Composition::CompositionDrawingSurface const& drawingSurface, Windows::Foundation::Rect const& updateRectInPixels, float dpi) const;
    void Resize(Windows::UI::Composition::CompositionDrawingSurface const& drawingSurface, Windows::Foundation::Size const& sizeInPixels) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::UI::Composition::ICanvasCompositionStatics> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_UI_Composition_ICanvasCompositionStatics<D>; };

template <> struct abi<Microsoft::Graphics::Canvas::UI::Composition::ICanvasCompositionStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateCompositionGraphicsDevice(::IUnknown* compositor, ::IUnknown* canvasDevice, ::IUnknown** graphicsDevice) = 0;
    virtual HRESULT __stdcall CreateCompositionSurfaceForSwapChain(::IUnknown* compositor, ::IUnknown* swapChain, ::IUnknown** compositionSurface) = 0;
    virtual HRESULT __stdcall GetCanvasDevice(::IUnknown* graphicsDevice, ::IUnknown** canvasDevice) = 0;
    virtual HRESULT __stdcall SetCanvasDevice(::IUnknown* graphicsDevice, ::IUnknown* canvasDevice) = 0;
    virtual HRESULT __stdcall CreateDrawingSession(::IUnknown* drawingSurface, ::IUnknown** drawingSession) = 0;
    virtual HRESULT __stdcall CreateDrawingSessionWithUpdateRect(::IUnknown* drawingSurface, Windows::Foundation::Rect updateRect, ::IUnknown** drawingSession) = 0;
    virtual HRESULT __stdcall CreateDrawingSessionWithUpdateRectAndDpi(::IUnknown* drawingSurface, Windows::Foundation::Rect updateRectInPixels, float dpi, ::IUnknown** drawingSession) = 0;
    virtual HRESULT __stdcall Resize(::IUnknown* drawingSurface, Windows::Foundation::Size sizeInPixels) = 0;
};};

}
