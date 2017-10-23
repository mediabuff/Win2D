// C++/WinRT v1.0.170906.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Devices.Printers.Extensions.2.h"
#include "winrt/Windows.Devices.Printers.h"

namespace winrt::impl {

template <typename D> hstring consume_Windows_Devices_Printers_Extensions_IPrint3DWorkflow<D>::DeviceID() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Printers::Extensions::IPrint3DWorkflow)->get_DeviceID(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_Devices_Printers_Extensions_IPrint3DWorkflow<D>::GetPrintModelPackage() const
{
    Windows::Foundation::IInspectable printModelPackage{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Printers::Extensions::IPrint3DWorkflow)->GetPrintModelPackage(put_abi(printModelPackage)));
    return printModelPackage;
}

template <typename D> bool consume_Windows_Devices_Printers_Extensions_IPrint3DWorkflow<D>::IsPrintReady() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Printers::Extensions::IPrint3DWorkflow)->get_IsPrintReady(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_Printers_Extensions_IPrint3DWorkflow<D>::IsPrintReady(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Printers::Extensions::IPrint3DWorkflow)->put_IsPrintReady(value));
}

template <typename D> event_token consume_Windows_Devices_Printers_Extensions_IPrint3DWorkflow<D>::PrintRequested(Windows::Foundation::TypedEventHandler<Windows::Devices::Printers::Extensions::Print3DWorkflow, Windows::Devices::Printers::Extensions::Print3DWorkflowPrintRequestedEventArgs> const& eventHandler) const
{
    event_token eventCookie{};
    check_hresult(WINRT_SHIM(Windows::Devices::Printers::Extensions::IPrint3DWorkflow)->add_PrintRequested(get_abi(eventHandler), put_abi(eventCookie)));
    return eventCookie;
}

template <typename D> event_revoker<Windows::Devices::Printers::Extensions::IPrint3DWorkflow> consume_Windows_Devices_Printers_Extensions_IPrint3DWorkflow<D>::PrintRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Printers::Extensions::Print3DWorkflow, Windows::Devices::Printers::Extensions::Print3DWorkflowPrintRequestedEventArgs> const& eventHandler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Printers::Extensions::IPrint3DWorkflow>(this, &abi_t<Windows::Devices::Printers::Extensions::IPrint3DWorkflow>::remove_PrintRequested, PrintRequested(eventHandler));
}

template <typename D> void consume_Windows_Devices_Printers_Extensions_IPrint3DWorkflow<D>::PrintRequested(event_token const& eventCookie) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Printers::Extensions::IPrint3DWorkflow)->remove_PrintRequested(get_abi(eventCookie)));
}

template <typename D> event_token consume_Windows_Devices_Printers_Extensions_IPrint3DWorkflow2<D>::PrinterChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Printers::Extensions::Print3DWorkflow, Windows::Devices::Printers::Extensions::Print3DWorkflowPrinterChangedEventArgs> const& eventHandler) const
{
    event_token eventCookie{};
    check_hresult(WINRT_SHIM(Windows::Devices::Printers::Extensions::IPrint3DWorkflow2)->add_PrinterChanged(get_abi(eventHandler), put_abi(eventCookie)));
    return eventCookie;
}

template <typename D> event_revoker<Windows::Devices::Printers::Extensions::IPrint3DWorkflow2> consume_Windows_Devices_Printers_Extensions_IPrint3DWorkflow2<D>::PrinterChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Printers::Extensions::Print3DWorkflow, Windows::Devices::Printers::Extensions::Print3DWorkflowPrinterChangedEventArgs> const& eventHandler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Printers::Extensions::IPrint3DWorkflow2>(this, &abi_t<Windows::Devices::Printers::Extensions::IPrint3DWorkflow2>::remove_PrinterChanged, PrinterChanged(eventHandler));
}

template <typename D> void consume_Windows_Devices_Printers_Extensions_IPrint3DWorkflow2<D>::PrinterChanged(event_token const& eventCookie) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Printers::Extensions::IPrint3DWorkflow2)->remove_PrinterChanged(get_abi(eventCookie)));
}

template <typename D> Windows::Devices::Printers::Extensions::Print3DWorkflowStatus consume_Windows_Devices_Printers_Extensions_IPrint3DWorkflowPrintRequestedEventArgs<D>::Status() const
{
    Windows::Devices::Printers::Extensions::Print3DWorkflowStatus value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrintRequestedEventArgs)->get_Status(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Printers_Extensions_IPrint3DWorkflowPrintRequestedEventArgs<D>::SetExtendedStatus(Windows::Devices::Printers::Extensions::Print3DWorkflowDetail const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrintRequestedEventArgs)->SetExtendedStatus(get_abi(value)));
}

template <typename D> void consume_Windows_Devices_Printers_Extensions_IPrint3DWorkflowPrintRequestedEventArgs<D>::SetSource(Windows::Foundation::IInspectable const& source) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrintRequestedEventArgs)->SetSource(get_abi(source)));
}

template <typename D> void consume_Windows_Devices_Printers_Extensions_IPrint3DWorkflowPrintRequestedEventArgs<D>::SetSourceChanged(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrintRequestedEventArgs)->SetSourceChanged(value));
}

template <typename D> hstring consume_Windows_Devices_Printers_Extensions_IPrint3DWorkflowPrinterChangedEventArgs<D>::NewDeviceId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrinterChangedEventArgs)->get_NewDeviceId(put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::Devices::Printers::Extensions::IPrint3DWorkflow> : produce_base<D, Windows::Devices::Printers::Extensions::IPrint3DWorkflow>
{
    HRESULT __stdcall get_DeviceID(HSTRING* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DeviceID());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetPrintModelPackage(::IUnknown** printModelPackage) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *printModelPackage = detach_abi(this->shim().GetPrintModelPackage());
            return S_OK;
        }
        catch (...)
        {
            *printModelPackage = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsPrintReady(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsPrintReady());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsPrintReady(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsPrintReady(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PrintRequested(::IUnknown* eventHandler, event_token* eventCookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *eventCookie = detach_abi(this->shim().PrintRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Printers::Extensions::Print3DWorkflow, Windows::Devices::Printers::Extensions::Print3DWorkflowPrintRequestedEventArgs> const*>(&eventHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PrintRequested(event_token eventCookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PrintRequested(*reinterpret_cast<event_token const*>(&eventCookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Printers::Extensions::IPrint3DWorkflow2> : produce_base<D, Windows::Devices::Printers::Extensions::IPrint3DWorkflow2>
{
    HRESULT __stdcall add_PrinterChanged(::IUnknown* eventHandler, event_token* eventCookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *eventCookie = detach_abi(this->shim().PrinterChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Printers::Extensions::Print3DWorkflow, Windows::Devices::Printers::Extensions::Print3DWorkflowPrinterChangedEventArgs> const*>(&eventHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PrinterChanged(event_token eventCookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PrinterChanged(*reinterpret_cast<event_token const*>(&eventCookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrintRequestedEventArgs> : produce_base<D, Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrintRequestedEventArgs>
{
    HRESULT __stdcall get_Status(Windows::Devices::Printers::Extensions::Print3DWorkflowStatus* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetExtendedStatus(Windows::Devices::Printers::Extensions::Print3DWorkflowDetail value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetExtendedStatus(*reinterpret_cast<Windows::Devices::Printers::Extensions::Print3DWorkflowDetail const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetSource(::IUnknown* source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetSource(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&source));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetSourceChanged(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetSourceChanged(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrinterChangedEventArgs> : produce_base<D, Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrinterChangedEventArgs>
{
    HRESULT __stdcall get_NewDeviceId(HSTRING* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NewDeviceId());
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

WINRT_EXPORT namespace winrt::Windows::Devices::Printers::Extensions {

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Devices::Printers::Extensions::IPrint3DWorkflow> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Printers::Extensions::IPrint3DWorkflow> {};

template<> struct hash<winrt::Windows::Devices::Printers::Extensions::IPrint3DWorkflow2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Printers::Extensions::IPrint3DWorkflow2> {};

template<> struct hash<winrt::Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrintRequestedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrintRequestedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrinterChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrinterChangedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::Printers::Extensions::Print3DWorkflow> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Printers::Extensions::Print3DWorkflow> {};

template<> struct hash<winrt::Windows::Devices::Printers::Extensions::Print3DWorkflowPrintRequestedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Printers::Extensions::Print3DWorkflowPrintRequestedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::Printers::Extensions::Print3DWorkflowPrinterChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Printers::Extensions::Print3DWorkflowPrinterChangedEventArgs> {};

}

WINRT_WARNING_POP
