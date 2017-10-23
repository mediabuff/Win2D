// C++/WinRT v1.0.170906.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH

static_assert(winrt::impl::make_constexpr_string(CPPWINRT_VERSION) == "1.0.170906.1", "Mismatched component and base headers.");
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Microsoft.Graphics.Canvas.2.h"
#include "winrt/impl/Windows.UI.Composition.2.h"
#include "winrt/impl/Microsoft.Graphics.Canvas.UI.Composition.2.h"
#include "winrt/Microsoft.Graphics.Canvas.UI.h"

namespace winrt::impl {

template <typename D> Windows::UI::Composition::CompositionGraphicsDevice consume_Microsoft_Graphics_Canvas_UI_Composition_ICanvasCompositionStatics<D>::CreateCompositionGraphicsDevice(Windows::UI::Composition::Compositor const& compositor, Microsoft::Graphics::Canvas::CanvasDevice const& canvasDevice) const
{
    Windows::UI::Composition::CompositionGraphicsDevice graphicsDevice{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Composition::ICanvasCompositionStatics)->CreateCompositionGraphicsDevice(get_abi(compositor), get_abi(canvasDevice), put_abi(graphicsDevice)));
    return graphicsDevice;
}

template <typename D> Windows::UI::Composition::ICompositionSurface consume_Microsoft_Graphics_Canvas_UI_Composition_ICanvasCompositionStatics<D>::CreateCompositionSurfaceForSwapChain(Windows::UI::Composition::Compositor const& compositor, Microsoft::Graphics::Canvas::CanvasSwapChain const& swapChain) const
{
    Windows::UI::Composition::ICompositionSurface compositionSurface{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Composition::ICanvasCompositionStatics)->CreateCompositionSurfaceForSwapChain(get_abi(compositor), get_abi(swapChain), put_abi(compositionSurface)));
    return compositionSurface;
}

template <typename D> Microsoft::Graphics::Canvas::CanvasDevice consume_Microsoft_Graphics_Canvas_UI_Composition_ICanvasCompositionStatics<D>::GetCanvasDevice(Windows::UI::Composition::CompositionGraphicsDevice const& graphicsDevice) const
{
    Microsoft::Graphics::Canvas::CanvasDevice canvasDevice{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Composition::ICanvasCompositionStatics)->GetCanvasDevice(get_abi(graphicsDevice), put_abi(canvasDevice)));
    return canvasDevice;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_UI_Composition_ICanvasCompositionStatics<D>::SetCanvasDevice(Windows::UI::Composition::CompositionGraphicsDevice const& graphicsDevice, Microsoft::Graphics::Canvas::CanvasDevice const& canvasDevice) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Composition::ICanvasCompositionStatics)->SetCanvasDevice(get_abi(graphicsDevice), get_abi(canvasDevice)));
}

template <typename D> Microsoft::Graphics::Canvas::CanvasDrawingSession consume_Microsoft_Graphics_Canvas_UI_Composition_ICanvasCompositionStatics<D>::CreateDrawingSession(Windows::UI::Composition::CompositionDrawingSurface const& drawingSurface) const
{
    Microsoft::Graphics::Canvas::CanvasDrawingSession drawingSession{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Composition::ICanvasCompositionStatics)->CreateDrawingSession(get_abi(drawingSurface), put_abi(drawingSession)));
    return drawingSession;
}

template <typename D> Microsoft::Graphics::Canvas::CanvasDrawingSession consume_Microsoft_Graphics_Canvas_UI_Composition_ICanvasCompositionStatics<D>::CreateDrawingSession(Windows::UI::Composition::CompositionDrawingSurface const& drawingSurface, Windows::Foundation::Rect const& updateRect) const
{
    Microsoft::Graphics::Canvas::CanvasDrawingSession drawingSession{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Composition::ICanvasCompositionStatics)->CreateDrawingSessionWithUpdateRect(get_abi(drawingSurface), get_abi(updateRect), put_abi(drawingSession)));
    return drawingSession;
}

template <typename D> Microsoft::Graphics::Canvas::CanvasDrawingSession consume_Microsoft_Graphics_Canvas_UI_Composition_ICanvasCompositionStatics<D>::CreateDrawingSession(Windows::UI::Composition::CompositionDrawingSurface const& drawingSurface, Windows::Foundation::Rect const& updateRectInPixels, float dpi) const
{
    Microsoft::Graphics::Canvas::CanvasDrawingSession drawingSession{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Composition::ICanvasCompositionStatics)->CreateDrawingSessionWithUpdateRectAndDpi(get_abi(drawingSurface), get_abi(updateRectInPixels), dpi, put_abi(drawingSession)));
    return drawingSession;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_UI_Composition_ICanvasCompositionStatics<D>::Resize(Windows::UI::Composition::CompositionDrawingSurface const& drawingSurface, Windows::Foundation::Size const& sizeInPixels) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Composition::ICanvasCompositionStatics)->Resize(get_abi(drawingSurface), get_abi(sizeInPixels)));
}

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::UI::Composition::ICanvasCompositionStatics> : produce_base<D, Microsoft::Graphics::Canvas::UI::Composition::ICanvasCompositionStatics>
{
    HRESULT __stdcall CreateCompositionGraphicsDevice(::IUnknown* compositor, ::IUnknown* canvasDevice, ::IUnknown** graphicsDevice) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *graphicsDevice = detach_abi(this->shim().CreateCompositionGraphicsDevice(*reinterpret_cast<Windows::UI::Composition::Compositor const*>(&compositor), *reinterpret_cast<Microsoft::Graphics::Canvas::CanvasDevice const*>(&canvasDevice)));
            return S_OK;
        }
        catch (...)
        {
            *graphicsDevice = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateCompositionSurfaceForSwapChain(::IUnknown* compositor, ::IUnknown* swapChain, ::IUnknown** compositionSurface) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *compositionSurface = detach_abi(this->shim().CreateCompositionSurfaceForSwapChain(*reinterpret_cast<Windows::UI::Composition::Compositor const*>(&compositor), *reinterpret_cast<Microsoft::Graphics::Canvas::CanvasSwapChain const*>(&swapChain)));
            return S_OK;
        }
        catch (...)
        {
            *compositionSurface = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetCanvasDevice(::IUnknown* graphicsDevice, ::IUnknown** canvasDevice) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *canvasDevice = detach_abi(this->shim().GetCanvasDevice(*reinterpret_cast<Windows::UI::Composition::CompositionGraphicsDevice const*>(&graphicsDevice)));
            return S_OK;
        }
        catch (...)
        {
            *canvasDevice = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetCanvasDevice(::IUnknown* graphicsDevice, ::IUnknown* canvasDevice) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetCanvasDevice(*reinterpret_cast<Windows::UI::Composition::CompositionGraphicsDevice const*>(&graphicsDevice), *reinterpret_cast<Microsoft::Graphics::Canvas::CanvasDevice const*>(&canvasDevice));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateDrawingSession(::IUnknown* drawingSurface, ::IUnknown** drawingSession) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *drawingSession = detach_abi(this->shim().CreateDrawingSession(*reinterpret_cast<Windows::UI::Composition::CompositionDrawingSurface const*>(&drawingSurface)));
            return S_OK;
        }
        catch (...)
        {
            *drawingSession = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateDrawingSessionWithUpdateRect(::IUnknown* drawingSurface, Windows::Foundation::Rect updateRect, ::IUnknown** drawingSession) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *drawingSession = detach_abi(this->shim().CreateDrawingSession(*reinterpret_cast<Windows::UI::Composition::CompositionDrawingSurface const*>(&drawingSurface), *reinterpret_cast<Windows::Foundation::Rect const*>(&updateRect)));
            return S_OK;
        }
        catch (...)
        {
            *drawingSession = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateDrawingSessionWithUpdateRectAndDpi(::IUnknown* drawingSurface, Windows::Foundation::Rect updateRectInPixels, float dpi, ::IUnknown** drawingSession) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *drawingSession = detach_abi(this->shim().CreateDrawingSession(*reinterpret_cast<Windows::UI::Composition::CompositionDrawingSurface const*>(&drawingSurface), *reinterpret_cast<Windows::Foundation::Rect const*>(&updateRectInPixels), dpi));
            return S_OK;
        }
        catch (...)
        {
            *drawingSession = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Resize(::IUnknown* drawingSurface, Windows::Foundation::Size sizeInPixels) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Resize(*reinterpret_cast<Windows::UI::Composition::CompositionDrawingSurface const*>(&drawingSurface), *reinterpret_cast<Windows::Foundation::Size const*>(&sizeInPixels));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Microsoft::Graphics::Canvas::UI::Composition {

inline Windows::UI::Composition::CompositionGraphicsDevice CanvasComposition::CreateCompositionGraphicsDevice(Windows::UI::Composition::Compositor const& compositor, Microsoft::Graphics::Canvas::CanvasDevice const& canvasDevice)
{
    return get_activation_factory<CanvasComposition, Microsoft::Graphics::Canvas::UI::Composition::ICanvasCompositionStatics>().CreateCompositionGraphicsDevice(compositor, canvasDevice);
}

inline Windows::UI::Composition::ICompositionSurface CanvasComposition::CreateCompositionSurfaceForSwapChain(Windows::UI::Composition::Compositor const& compositor, Microsoft::Graphics::Canvas::CanvasSwapChain const& swapChain)
{
    return get_activation_factory<CanvasComposition, Microsoft::Graphics::Canvas::UI::Composition::ICanvasCompositionStatics>().CreateCompositionSurfaceForSwapChain(compositor, swapChain);
}

inline Microsoft::Graphics::Canvas::CanvasDevice CanvasComposition::GetCanvasDevice(Windows::UI::Composition::CompositionGraphicsDevice const& graphicsDevice)
{
    return get_activation_factory<CanvasComposition, Microsoft::Graphics::Canvas::UI::Composition::ICanvasCompositionStatics>().GetCanvasDevice(graphicsDevice);
}

inline void CanvasComposition::SetCanvasDevice(Windows::UI::Composition::CompositionGraphicsDevice const& graphicsDevice, Microsoft::Graphics::Canvas::CanvasDevice const& canvasDevice)
{
    get_activation_factory<CanvasComposition, Microsoft::Graphics::Canvas::UI::Composition::ICanvasCompositionStatics>().SetCanvasDevice(graphicsDevice, canvasDevice);
}

inline Microsoft::Graphics::Canvas::CanvasDrawingSession CanvasComposition::CreateDrawingSession(Windows::UI::Composition::CompositionDrawingSurface const& drawingSurface)
{
    return get_activation_factory<CanvasComposition, Microsoft::Graphics::Canvas::UI::Composition::ICanvasCompositionStatics>().CreateDrawingSession(drawingSurface);
}

inline Microsoft::Graphics::Canvas::CanvasDrawingSession CanvasComposition::CreateDrawingSession(Windows::UI::Composition::CompositionDrawingSurface const& drawingSurface, Windows::Foundation::Rect const& updateRect)
{
    return get_activation_factory<CanvasComposition, Microsoft::Graphics::Canvas::UI::Composition::ICanvasCompositionStatics>().CreateDrawingSession(drawingSurface, updateRect);
}

inline Microsoft::Graphics::Canvas::CanvasDrawingSession CanvasComposition::CreateDrawingSession(Windows::UI::Composition::CompositionDrawingSurface const& drawingSurface, Windows::Foundation::Rect const& updateRectInPixels, float dpi)
{
    return get_activation_factory<CanvasComposition, Microsoft::Graphics::Canvas::UI::Composition::ICanvasCompositionStatics>().CreateDrawingSession(drawingSurface, updateRectInPixels, dpi);
}

inline void CanvasComposition::Resize(Windows::UI::Composition::CompositionDrawingSurface const& drawingSurface, Windows::Foundation::Size const& sizeInPixels)
{
    get_activation_factory<CanvasComposition, Microsoft::Graphics::Canvas::UI::Composition::ICanvasCompositionStatics>().Resize(drawingSurface, sizeInPixels);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Microsoft::Graphics::Canvas::UI::Composition::ICanvasCompositionStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::UI::Composition::ICanvasCompositionStatics> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::UI::Composition::CanvasComposition> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::UI::Composition::CanvasComposition> {};

}

WINRT_WARNING_POP
