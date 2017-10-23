// C++/WinRT v1.0.170906.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Services::Cortana {

enum class CortanaPermission : int32_t
{
    BrowsingHistory = 0,
    Calendar = 1,
    CallHistory = 2,
    Contacts = 3,
    Email = 4,
    InputPersonalization = 5,
    Location = 6,
    Messaging = 7,
    Microphone = 8,
    Personalization = 9,
    PhoneCall = 10,
};

enum class CortanaPermissionsChangeResult : int32_t
{
    Success = 0,
    Unavailable = 1,
    DisabledByPolicy = 2,
};

struct ICortanaPermissionsManager;
struct ICortanaPermissionsManagerStatics;
struct CortanaPermissionsManager;

}

namespace winrt::impl {

template <> struct category<Windows::Services::Cortana::ICortanaPermissionsManager>{ using type = interface_category; };
template <> struct category<Windows::Services::Cortana::ICortanaPermissionsManagerStatics>{ using type = interface_category; };
template <> struct category<Windows::Services::Cortana::CortanaPermissionsManager>{ using type = class_category; };
template <> struct category<Windows::Services::Cortana::CortanaPermission>{ using type = enum_category; };
template <> struct category<Windows::Services::Cortana::CortanaPermissionsChangeResult>{ using type = enum_category; };
template <> struct name<Windows::Services::Cortana::ICortanaPermissionsManager>{ static constexpr auto & value{ L"Windows.Services.Cortana.ICortanaPermissionsManager" }; };
template <> struct name<Windows::Services::Cortana::ICortanaPermissionsManagerStatics>{ static constexpr auto & value{ L"Windows.Services.Cortana.ICortanaPermissionsManagerStatics" }; };
template <> struct name<Windows::Services::Cortana::CortanaPermissionsManager>{ static constexpr auto & value{ L"Windows.Services.Cortana.CortanaPermissionsManager" }; };
template <> struct name<Windows::Services::Cortana::CortanaPermission>{ static constexpr auto & value{ L"Windows.Services.Cortana.CortanaPermission" }; };
template <> struct name<Windows::Services::Cortana::CortanaPermissionsChangeResult>{ static constexpr auto & value{ L"Windows.Services.Cortana.CortanaPermissionsChangeResult" }; };
template <> struct guid<Windows::Services::Cortana::ICortanaPermissionsManager>{ static constexpr GUID value{ 0x191330E0,0x8695,0x438A,{ 0x95,0x45,0x3D,0xA4,0xE8,0x22,0xDD,0xB4 } }; };
template <> struct guid<Windows::Services::Cortana::ICortanaPermissionsManagerStatics>{ static constexpr GUID value{ 0x76B1E67A,0xB045,0x4414,{ 0x9D,0x6D,0x2A,0xD3,0xA5,0xFE,0x3A,0x7E } }; };
template <> struct default_interface<Windows::Services::Cortana::CortanaPermissionsManager>{ using type = Windows::Services::Cortana::ICortanaPermissionsManager; };

template <typename D>
struct consume_Windows_Services_Cortana_ICortanaPermissionsManager
{
    bool IsSupported() const;
    Windows::Foundation::IAsyncOperation<bool> ArePermissionsGrantedAsync(param::async_iterable<Windows::Services::Cortana::CortanaPermission> const& permissions) const;
    Windows::Foundation::IAsyncOperation<Windows::Services::Cortana::CortanaPermissionsChangeResult> GrantPermissionsAsync(param::async_iterable<Windows::Services::Cortana::CortanaPermission> const& permissions) const;
    Windows::Foundation::IAsyncOperation<Windows::Services::Cortana::CortanaPermissionsChangeResult> RevokePermissionsAsync(param::async_iterable<Windows::Services::Cortana::CortanaPermission> const& permissions) const;
};
template <> struct consume<Windows::Services::Cortana::ICortanaPermissionsManager> { template <typename D> using type = consume_Windows_Services_Cortana_ICortanaPermissionsManager<D>; };

template <typename D>
struct consume_Windows_Services_Cortana_ICortanaPermissionsManagerStatics
{
    Windows::Services::Cortana::CortanaPermissionsManager GetDefault() const;
};
template <> struct consume<Windows::Services::Cortana::ICortanaPermissionsManagerStatics> { template <typename D> using type = consume_Windows_Services_Cortana_ICortanaPermissionsManagerStatics<D>; };

template <> struct abi<Windows::Services::Cortana::ICortanaPermissionsManager>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall IsSupported(bool* result) = 0;
    virtual HRESULT __stdcall ArePermissionsGrantedAsync(::IUnknown* permissions, ::IUnknown** getGrantedPermissionsOperation) = 0;
    virtual HRESULT __stdcall GrantPermissionsAsync(::IUnknown* permissions, ::IUnknown** grantOperation) = 0;
    virtual HRESULT __stdcall RevokePermissionsAsync(::IUnknown* permissions, ::IUnknown** revokeOperation) = 0;
};};

template <> struct abi<Windows::Services::Cortana::ICortanaPermissionsManagerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDefault(::IUnknown** result) = 0;
};};

}
