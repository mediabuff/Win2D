// C++/WinRT v1.0.170906.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH

static_assert(winrt::impl::make_constexpr_string(CPPWINRT_VERSION) == "1.0.170906.1", "Mismatched component and base headers.");
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Microsoft.Graphics.Canvas.2.h"
#include "winrt/impl/Windows.Graphics.Printing.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Microsoft.Graphics.Canvas.Printing.2.h"
#include "winrt/Microsoft.Graphics.Canvas.h"

namespace winrt::impl {

template <typename D> uint32_t consume_Microsoft_Graphics_Canvas_Printing_ICanvasPreviewEventArgs<D>::PageNumber() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Printing::ICanvasPreviewEventArgs)->get_PageNumber(&value));
    return value;
}

template <typename D> Windows::Graphics::Printing::PrintTaskOptions consume_Microsoft_Graphics_Canvas_Printing_ICanvasPreviewEventArgs<D>::PrintTaskOptions() const
{
    Windows::Graphics::Printing::PrintTaskOptions value{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Printing::ICanvasPreviewEventArgs)->get_PrintTaskOptions(put_abi(value)));
    return value;
}

template <typename D> Microsoft::Graphics::Canvas::Printing::CanvasPrintDeferral consume_Microsoft_Graphics_Canvas_Printing_ICanvasPreviewEventArgs<D>::GetDeferral() const
{
    Microsoft::Graphics::Canvas::Printing::CanvasPrintDeferral value{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Printing::ICanvasPreviewEventArgs)->GetDeferral(put_abi(value)));
    return value;
}

template <typename D> Microsoft::Graphics::Canvas::CanvasDrawingSession consume_Microsoft_Graphics_Canvas_Printing_ICanvasPreviewEventArgs<D>::DrawingSession() const
{
    Microsoft::Graphics::Canvas::CanvasDrawingSession value{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Printing::ICanvasPreviewEventArgs)->get_DrawingSession(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Printing_ICanvasPrintDeferral<D>::Complete() const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Printing::ICanvasPrintDeferral)->Complete());
}

template <typename D> event_token consume_Microsoft_Graphics_Canvas_Printing_ICanvasPrintDocument<D>::PrintTaskOptionsChanged(Windows::Foundation::TypedEventHandler<Microsoft::Graphics::Canvas::Printing::CanvasPrintDocument, Microsoft::Graphics::Canvas::Printing::CanvasPrintTaskOptionsChangedEventArgs> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Printing::ICanvasPrintDocument)->add_PrintTaskOptionsChanged(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Microsoft::Graphics::Canvas::Printing::ICanvasPrintDocument> consume_Microsoft_Graphics_Canvas_Printing_ICanvasPrintDocument<D>::PrintTaskOptionsChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Microsoft::Graphics::Canvas::Printing::CanvasPrintDocument, Microsoft::Graphics::Canvas::Printing::CanvasPrintTaskOptionsChangedEventArgs> const& value) const
{
    return impl::make_event_revoker<D, Microsoft::Graphics::Canvas::Printing::ICanvasPrintDocument>(this, &abi_t<Microsoft::Graphics::Canvas::Printing::ICanvasPrintDocument>::remove_PrintTaskOptionsChanged, PrintTaskOptionsChanged(value));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Printing_ICanvasPrintDocument<D>::PrintTaskOptionsChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Printing::ICanvasPrintDocument)->remove_PrintTaskOptionsChanged(get_abi(token)));
}

template <typename D> event_token consume_Microsoft_Graphics_Canvas_Printing_ICanvasPrintDocument<D>::Preview(Windows::Foundation::TypedEventHandler<Microsoft::Graphics::Canvas::Printing::CanvasPrintDocument, Microsoft::Graphics::Canvas::Printing::CanvasPreviewEventArgs> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Printing::ICanvasPrintDocument)->add_Preview(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Microsoft::Graphics::Canvas::Printing::ICanvasPrintDocument> consume_Microsoft_Graphics_Canvas_Printing_ICanvasPrintDocument<D>::Preview(auto_revoke_t, Windows::Foundation::TypedEventHandler<Microsoft::Graphics::Canvas::Printing::CanvasPrintDocument, Microsoft::Graphics::Canvas::Printing::CanvasPreviewEventArgs> const& value) const
{
    return impl::make_event_revoker<D, Microsoft::Graphics::Canvas::Printing::ICanvasPrintDocument>(this, &abi_t<Microsoft::Graphics::Canvas::Printing::ICanvasPrintDocument>::remove_Preview, Preview(value));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Printing_ICanvasPrintDocument<D>::Preview(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Printing::ICanvasPrintDocument)->remove_Preview(get_abi(token)));
}

template <typename D> event_token consume_Microsoft_Graphics_Canvas_Printing_ICanvasPrintDocument<D>::Print(Windows::Foundation::TypedEventHandler<Microsoft::Graphics::Canvas::Printing::CanvasPrintDocument, Microsoft::Graphics::Canvas::Printing::CanvasPrintEventArgs> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Printing::ICanvasPrintDocument)->add_Print(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Microsoft::Graphics::Canvas::Printing::ICanvasPrintDocument> consume_Microsoft_Graphics_Canvas_Printing_ICanvasPrintDocument<D>::Print(auto_revoke_t, Windows::Foundation::TypedEventHandler<Microsoft::Graphics::Canvas::Printing::CanvasPrintDocument, Microsoft::Graphics::Canvas::Printing::CanvasPrintEventArgs> const& value) const
{
    return impl::make_event_revoker<D, Microsoft::Graphics::Canvas::Printing::ICanvasPrintDocument>(this, &abi_t<Microsoft::Graphics::Canvas::Printing::ICanvasPrintDocument>::remove_Print, Print(value));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Printing_ICanvasPrintDocument<D>::Print(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Printing::ICanvasPrintDocument)->remove_Print(get_abi(token)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Printing_ICanvasPrintDocument<D>::InvalidatePreview() const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Printing::ICanvasPrintDocument)->InvalidatePreview());
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Printing_ICanvasPrintDocument<D>::SetPageCount(uint32_t count) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Printing::ICanvasPrintDocument)->SetPageCount(count));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Printing_ICanvasPrintDocument<D>::SetIntermediatePageCount(uint32_t count) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Printing::ICanvasPrintDocument)->SetIntermediatePageCount(count));
}

template <typename D> Microsoft::Graphics::Canvas::Printing::CanvasPrintDocument consume_Microsoft_Graphics_Canvas_Printing_ICanvasPrintDocumentFactory<D>::CreateWithDevice(Microsoft::Graphics::Canvas::CanvasDevice const& device) const
{
    Microsoft::Graphics::Canvas::Printing::CanvasPrintDocument value{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Printing::ICanvasPrintDocumentFactory)->CreateWithDevice(get_abi(device), put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Printing::PrintTaskOptions consume_Microsoft_Graphics_Canvas_Printing_ICanvasPrintEventArgs<D>::PrintTaskOptions() const
{
    Windows::Graphics::Printing::PrintTaskOptions value{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Printing::ICanvasPrintEventArgs)->get_PrintTaskOptions(put_abi(value)));
    return value;
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Printing_ICanvasPrintEventArgs<D>::Dpi() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Printing::ICanvasPrintEventArgs)->get_Dpi(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Printing_ICanvasPrintEventArgs<D>::Dpi(float value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Printing::ICanvasPrintEventArgs)->put_Dpi(value));
}

template <typename D> Microsoft::Graphics::Canvas::Printing::CanvasPrintDeferral consume_Microsoft_Graphics_Canvas_Printing_ICanvasPrintEventArgs<D>::GetDeferral() const
{
    Microsoft::Graphics::Canvas::Printing::CanvasPrintDeferral value{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Printing::ICanvasPrintEventArgs)->GetDeferral(put_abi(value)));
    return value;
}

template <typename D> Microsoft::Graphics::Canvas::CanvasDrawingSession consume_Microsoft_Graphics_Canvas_Printing_ICanvasPrintEventArgs<D>::CreateDrawingSession() const
{
    Microsoft::Graphics::Canvas::CanvasDrawingSession value{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Printing::ICanvasPrintEventArgs)->CreateDrawingSession(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Microsoft_Graphics_Canvas_Printing_ICanvasPrintTaskOptionsChangedEventArgs<D>::CurrentPreviewPageNumber() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Printing::ICanvasPrintTaskOptionsChangedEventArgs)->get_CurrentPreviewPageNumber(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Printing_ICanvasPrintTaskOptionsChangedEventArgs<D>::NewPreviewPageNumber(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Printing::ICanvasPrintTaskOptionsChangedEventArgs)->put_NewPreviewPageNumber(value));
}

template <typename D> uint32_t consume_Microsoft_Graphics_Canvas_Printing_ICanvasPrintTaskOptionsChangedEventArgs<D>::NewPreviewPageNumber() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Printing::ICanvasPrintTaskOptionsChangedEventArgs)->get_NewPreviewPageNumber(&value));
    return value;
}

template <typename D> Microsoft::Graphics::Canvas::Printing::CanvasPrintDeferral consume_Microsoft_Graphics_Canvas_Printing_ICanvasPrintTaskOptionsChangedEventArgs<D>::GetDeferral() const
{
    Microsoft::Graphics::Canvas::Printing::CanvasPrintDeferral value{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Printing::ICanvasPrintTaskOptionsChangedEventArgs)->GetDeferral(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Printing::PrintTaskOptions consume_Microsoft_Graphics_Canvas_Printing_ICanvasPrintTaskOptionsChangedEventArgs<D>::PrintTaskOptions() const
{
    Windows::Graphics::Printing::PrintTaskOptions value{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Printing::ICanvasPrintTaskOptionsChangedEventArgs)->get_PrintTaskOptions(put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Printing::ICanvasPreviewEventArgs> : produce_base<D, Microsoft::Graphics::Canvas::Printing::ICanvasPreviewEventArgs>
{
    HRESULT __stdcall get_PageNumber(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PageNumber());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PrintTaskOptions(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PrintTaskOptions());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDeferral(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DrawingSession(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DrawingSession());
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
struct produce<D, Microsoft::Graphics::Canvas::Printing::ICanvasPrintDeferral> : produce_base<D, Microsoft::Graphics::Canvas::Printing::ICanvasPrintDeferral>
{
    HRESULT __stdcall Complete() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Complete();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Printing::ICanvasPrintDocument> : produce_base<D, Microsoft::Graphics::Canvas::Printing::ICanvasPrintDocument>
{
    HRESULT __stdcall add_PrintTaskOptionsChanged(::IUnknown* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().PrintTaskOptionsChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Microsoft::Graphics::Canvas::Printing::CanvasPrintDocument, Microsoft::Graphics::Canvas::Printing::CanvasPrintTaskOptionsChangedEventArgs> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PrintTaskOptionsChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PrintTaskOptionsChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Preview(::IUnknown* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().Preview(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Microsoft::Graphics::Canvas::Printing::CanvasPrintDocument, Microsoft::Graphics::Canvas::Printing::CanvasPreviewEventArgs> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Preview(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Preview(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Print(::IUnknown* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().Print(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Microsoft::Graphics::Canvas::Printing::CanvasPrintDocument, Microsoft::Graphics::Canvas::Printing::CanvasPrintEventArgs> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Print(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Print(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall InvalidatePreview() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InvalidatePreview();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetPageCount(uint32_t count) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetPageCount(count);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetIntermediatePageCount(uint32_t count) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetIntermediatePageCount(count);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Printing::ICanvasPrintDocumentFactory> : produce_base<D, Microsoft::Graphics::Canvas::Printing::ICanvasPrintDocumentFactory>
{
    HRESULT __stdcall CreateWithDevice(::IUnknown* device, ::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateWithDevice(*reinterpret_cast<Microsoft::Graphics::Canvas::CanvasDevice const*>(&device)));
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
struct produce<D, Microsoft::Graphics::Canvas::Printing::ICanvasPrintEventArgs> : produce_base<D, Microsoft::Graphics::Canvas::Printing::ICanvasPrintEventArgs>
{
    HRESULT __stdcall get_PrintTaskOptions(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PrintTaskOptions());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Dpi(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Dpi());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Dpi(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Dpi(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDeferral(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateDrawingSession(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateDrawingSession());
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
struct produce<D, Microsoft::Graphics::Canvas::Printing::ICanvasPrintTaskOptionsChangedEventArgs> : produce_base<D, Microsoft::Graphics::Canvas::Printing::ICanvasPrintTaskOptionsChangedEventArgs>
{
    HRESULT __stdcall get_CurrentPreviewPageNumber(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CurrentPreviewPageNumber());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_NewPreviewPageNumber(uint32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NewPreviewPageNumber(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NewPreviewPageNumber(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NewPreviewPageNumber());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDeferral(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PrintTaskOptions(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PrintTaskOptions());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Microsoft::Graphics::Canvas::Printing {

inline CanvasPrintDocument::CanvasPrintDocument() :
    CanvasPrintDocument(activate_instance<CanvasPrintDocument>())
{}

inline CanvasPrintDocument::CanvasPrintDocument(Microsoft::Graphics::Canvas::CanvasDevice const& device) :
    CanvasPrintDocument(get_activation_factory<CanvasPrintDocument, Microsoft::Graphics::Canvas::Printing::ICanvasPrintDocumentFactory>().CreateWithDevice(device))
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Printing::ICanvasPreviewEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Printing::ICanvasPreviewEventArgs> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Printing::ICanvasPrintDeferral> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Printing::ICanvasPrintDeferral> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Printing::ICanvasPrintDocument> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Printing::ICanvasPrintDocument> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Printing::ICanvasPrintDocumentFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Printing::ICanvasPrintDocumentFactory> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Printing::ICanvasPrintEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Printing::ICanvasPrintEventArgs> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Printing::ICanvasPrintTaskOptionsChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Printing::ICanvasPrintTaskOptionsChangedEventArgs> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Printing::CanvasPreviewEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Printing::CanvasPreviewEventArgs> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Printing::CanvasPrintDeferral> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Printing::CanvasPrintDeferral> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Printing::CanvasPrintDocument> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Printing::CanvasPrintDocument> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Printing::CanvasPrintEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Printing::CanvasPrintEventArgs> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Printing::CanvasPrintTaskOptionsChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Printing::CanvasPrintTaskOptionsChangedEventArgs> {};

}

WINRT_WARNING_POP
