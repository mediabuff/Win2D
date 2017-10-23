// C++/WinRT v1.0.170906.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH

static_assert(winrt::impl::make_constexpr_string(CPPWINRT_VERSION) == "1.0.170906.1", "Mismatched component and base headers.");
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Microsoft.Graphics.Canvas.UI.2.h"
#include "winrt/Microsoft.Graphics.Canvas.h"

namespace winrt::impl {

template <typename D> Microsoft::Graphics::Canvas::UI::CanvasCreateResourcesReason consume_Microsoft_Graphics_Canvas_UI_ICanvasCreateResourcesEventArgs<D>::Reason() const
{
    Microsoft::Graphics::Canvas::UI::CanvasCreateResourcesReason value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::ICanvasCreateResourcesEventArgs)->get_Reason(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_UI_ICanvasCreateResourcesEventArgs<D>::TrackAsyncAction(Windows::Foundation::IAsyncAction const& action) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::ICanvasCreateResourcesEventArgs)->TrackAsyncAction(get_abi(action)));
}

template <typename D> Windows::Foundation::IAsyncAction consume_Microsoft_Graphics_Canvas_UI_ICanvasCreateResourcesEventArgs<D>::GetTrackedAction() const
{
    Windows::Foundation::IAsyncAction action{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::ICanvasCreateResourcesEventArgs)->GetTrackedAction(put_abi(action)));
    return action;
}

template <typename D> Microsoft::Graphics::Canvas::UI::CanvasCreateResourcesEventArgs consume_Microsoft_Graphics_Canvas_UI_ICanvasCreateResourcesEventArgsFactory<D>::Create(Microsoft::Graphics::Canvas::UI::CanvasCreateResourcesReason const& createResourcesReason) const
{
    Microsoft::Graphics::Canvas::UI::CanvasCreateResourcesEventArgs CreateResourcesEventArgs{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::ICanvasCreateResourcesEventArgsFactory)->Create(get_abi(createResourcesReason), put_abi(CreateResourcesEventArgs)));
    return CreateResourcesEventArgs;
}

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::UI::ICanvasCreateResourcesEventArgs> : produce_base<D, Microsoft::Graphics::Canvas::UI::ICanvasCreateResourcesEventArgs>
{
    HRESULT __stdcall get_Reason(Microsoft::Graphics::Canvas::UI::CanvasCreateResourcesReason* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Reason());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TrackAsyncAction(::IUnknown* action) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TrackAsyncAction(*reinterpret_cast<Windows::Foundation::IAsyncAction const*>(&action));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetTrackedAction(::IUnknown** action) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *action = detach_abi(this->shim().GetTrackedAction());
            return S_OK;
        }
        catch (...)
        {
            *action = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::UI::ICanvasCreateResourcesEventArgsFactory> : produce_base<D, Microsoft::Graphics::Canvas::UI::ICanvasCreateResourcesEventArgsFactory>
{
    HRESULT __stdcall Create(Microsoft::Graphics::Canvas::UI::CanvasCreateResourcesReason createResourcesReason, ::IUnknown** CreateResourcesEventArgs) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *CreateResourcesEventArgs = detach_abi(this->shim().Create(*reinterpret_cast<Microsoft::Graphics::Canvas::UI::CanvasCreateResourcesReason const*>(&createResourcesReason)));
            return S_OK;
        }
        catch (...)
        {
            *CreateResourcesEventArgs = nullptr;
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Microsoft::Graphics::Canvas::UI {

inline CanvasCreateResourcesEventArgs::CanvasCreateResourcesEventArgs(Microsoft::Graphics::Canvas::UI::CanvasCreateResourcesReason const& createResourcesReason) :
    CanvasCreateResourcesEventArgs(get_activation_factory<CanvasCreateResourcesEventArgs, Microsoft::Graphics::Canvas::UI::ICanvasCreateResourcesEventArgsFactory>().Create(createResourcesReason))
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Microsoft::Graphics::Canvas::UI::ICanvasCreateResourcesEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::UI::ICanvasCreateResourcesEventArgs> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::UI::ICanvasCreateResourcesEventArgsFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::UI::ICanvasCreateResourcesEventArgsFactory> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::UI::CanvasCreateResourcesEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::UI::CanvasCreateResourcesEventArgs> {};

}

WINRT_WARNING_POP
