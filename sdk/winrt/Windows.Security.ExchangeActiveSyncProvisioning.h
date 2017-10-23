// C++/WinRT v1.0.170906.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Security.ExchangeActiveSyncProvisioning.2.h"

namespace winrt::impl {

template <typename D> GUID consume_Windows_Security_ExchangeActiveSyncProvisioning_IEasClientDeviceInformation<D>::Id() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation)->get_Id(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_ExchangeActiveSyncProvisioning_IEasClientDeviceInformation<D>::OperatingSystem() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation)->get_OperatingSystem(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_ExchangeActiveSyncProvisioning_IEasClientDeviceInformation<D>::FriendlyName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation)->get_FriendlyName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_ExchangeActiveSyncProvisioning_IEasClientDeviceInformation<D>::SystemManufacturer() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation)->get_SystemManufacturer(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_ExchangeActiveSyncProvisioning_IEasClientDeviceInformation<D>::SystemProductName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation)->get_SystemProductName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_ExchangeActiveSyncProvisioning_IEasClientDeviceInformation<D>::SystemSku() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation)->get_SystemSku(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_ExchangeActiveSyncProvisioning_IEasClientDeviceInformation2<D>::SystemHardwareVersion() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation2)->get_SystemHardwareVersion(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_ExchangeActiveSyncProvisioning_IEasClientDeviceInformation2<D>::SystemFirmwareVersion() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation2)->get_SystemFirmwareVersion(put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation> : produce_base<D, Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation>
{
    HRESULT __stdcall get_Id(GUID* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OperatingSystem(HSTRING* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OperatingSystem());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FriendlyName(HSTRING* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FriendlyName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SystemManufacturer(HSTRING* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SystemManufacturer());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SystemProductName(HSTRING* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SystemProductName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SystemSku(HSTRING* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SystemSku());
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
struct produce<D, Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation2> : produce_base<D, Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation2>
{
    HRESULT __stdcall get_SystemHardwareVersion(HSTRING* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SystemHardwareVersion());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SystemFirmwareVersion(HSTRING* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SystemFirmwareVersion());
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

WINRT_EXPORT namespace winrt::Windows::Security::ExchangeActiveSyncProvisioning {

inline EasClientDeviceInformation::EasClientDeviceInformation() :
    EasClientDeviceInformation(activate_instance<EasClientDeviceInformation>())
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation> {};

template<> struct hash<winrt::Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation2> {};

template<> struct hash<winrt::Windows::Security::ExchangeActiveSyncProvisioning::EasClientDeviceInformation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::ExchangeActiveSyncProvisioning::EasClientDeviceInformation> {};

}

WINRT_WARNING_POP
