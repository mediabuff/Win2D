// C++/WinRT v1.0.170906.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Security::ExchangeActiveSyncProvisioning {

struct IEasClientDeviceInformation;
struct IEasClientDeviceInformation2;
struct EasClientDeviceInformation;

}

namespace winrt::impl {

template <> struct category<Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation>{ using type = interface_category; };
template <> struct category<Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation2>{ using type = interface_category; };
template <> struct category<Windows::Security::ExchangeActiveSyncProvisioning::EasClientDeviceInformation>{ using type = class_category; };
template <> struct name<Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation>{ static constexpr auto & value{ L"Windows.Security.ExchangeActiveSyncProvisioning.IEasClientDeviceInformation" }; };
template <> struct name<Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation2>{ static constexpr auto & value{ L"Windows.Security.ExchangeActiveSyncProvisioning.IEasClientDeviceInformation2" }; };
template <> struct name<Windows::Security::ExchangeActiveSyncProvisioning::EasClientDeviceInformation>{ static constexpr auto & value{ L"Windows.Security.ExchangeActiveSyncProvisioning.EasClientDeviceInformation" }; };
template <> struct guid<Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation>{ static constexpr GUID value{ 0x54DFD981,0x1968,0x4CA3,{ 0xB9,0x58,0xE5,0x95,0xD1,0x65,0x05,0xEB } }; };
template <> struct guid<Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation2>{ static constexpr GUID value{ 0xFFB35923,0xBB26,0x4D6A,{ 0x81,0xBC,0x16,0x5A,0xEE,0x0A,0xD7,0x54 } }; };
template <> struct default_interface<Windows::Security::ExchangeActiveSyncProvisioning::EasClientDeviceInformation>{ using type = Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation; };

template <typename D>
struct consume_Windows_Security_ExchangeActiveSyncProvisioning_IEasClientDeviceInformation
{
    GUID Id() const;
    hstring OperatingSystem() const;
    hstring FriendlyName() const;
    hstring SystemManufacturer() const;
    hstring SystemProductName() const;
    hstring SystemSku() const;
};
template <> struct consume<Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation> { template <typename D> using type = consume_Windows_Security_ExchangeActiveSyncProvisioning_IEasClientDeviceInformation<D>; };

template <typename D>
struct consume_Windows_Security_ExchangeActiveSyncProvisioning_IEasClientDeviceInformation2
{
    hstring SystemHardwareVersion() const;
    hstring SystemFirmwareVersion() const;
};
template <> struct consume<Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation2> { template <typename D> using type = consume_Windows_Security_ExchangeActiveSyncProvisioning_IEasClientDeviceInformation2<D>; };

template <> struct abi<Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Id(GUID* value) = 0;
    virtual HRESULT __stdcall get_OperatingSystem(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_FriendlyName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_SystemManufacturer(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_SystemProductName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_SystemSku(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_SystemHardwareVersion(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_SystemFirmwareVersion(HSTRING* value) = 0;
};};

}
