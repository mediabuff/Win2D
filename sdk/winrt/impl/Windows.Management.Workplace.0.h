// C++/WinRT v1.0.170906.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Management::Workplace {

enum class MessagingSyncPolicy : int32_t
{
    Disallowed = 0,
    Allowed = 1,
    Required = 2,
};

struct IMdmAllowPolicyStatics;
struct IMdmPolicyStatics2;
struct MdmPolicy;

}

namespace winrt::impl {

template <> struct category<Windows::Management::Workplace::IMdmAllowPolicyStatics>{ using type = interface_category; };
template <> struct category<Windows::Management::Workplace::IMdmPolicyStatics2>{ using type = interface_category; };
template <> struct category<Windows::Management::Workplace::MdmPolicy>{ using type = class_category; };
template <> struct category<Windows::Management::Workplace::MessagingSyncPolicy>{ using type = enum_category; };
template <> struct name<Windows::Management::Workplace::IMdmAllowPolicyStatics>{ static constexpr auto & value{ L"Windows.Management.Workplace.IMdmAllowPolicyStatics" }; };
template <> struct name<Windows::Management::Workplace::IMdmPolicyStatics2>{ static constexpr auto & value{ L"Windows.Management.Workplace.IMdmPolicyStatics2" }; };
template <> struct name<Windows::Management::Workplace::MdmPolicy>{ static constexpr auto & value{ L"Windows.Management.Workplace.MdmPolicy" }; };
template <> struct name<Windows::Management::Workplace::MessagingSyncPolicy>{ static constexpr auto & value{ L"Windows.Management.Workplace.MessagingSyncPolicy" }; };
template <> struct guid<Windows::Management::Workplace::IMdmAllowPolicyStatics>{ static constexpr GUID value{ 0xC39709E7,0x741C,0x41F2,{ 0xA4,0xB6,0x31,0x4C,0x31,0x50,0x25,0x86 } }; };
template <> struct guid<Windows::Management::Workplace::IMdmPolicyStatics2>{ static constexpr GUID value{ 0xC99C7526,0x03D4,0x49F9,{ 0xA9,0x93,0x43,0xEF,0xCC,0xD2,0x65,0xC4 } }; };

template <typename D>
struct consume_Windows_Management_Workplace_IMdmAllowPolicyStatics
{
    bool IsBrowserAllowed() const;
    bool IsCameraAllowed() const;
    bool IsMicrosoftAccountAllowed() const;
    bool IsStoreAllowed() const;
};
template <> struct consume<Windows::Management::Workplace::IMdmAllowPolicyStatics> { template <typename D> using type = consume_Windows_Management_Workplace_IMdmAllowPolicyStatics<D>; };

template <typename D>
struct consume_Windows_Management_Workplace_IMdmPolicyStatics2
{
    Windows::Management::Workplace::MessagingSyncPolicy GetMessagingSyncPolicy() const;
};
template <> struct consume<Windows::Management::Workplace::IMdmPolicyStatics2> { template <typename D> using type = consume_Windows_Management_Workplace_IMdmPolicyStatics2<D>; };

template <> struct abi<Windows::Management::Workplace::IMdmAllowPolicyStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall IsBrowserAllowed(bool* value) = 0;
    virtual HRESULT __stdcall IsCameraAllowed(bool* value) = 0;
    virtual HRESULT __stdcall IsMicrosoftAccountAllowed(bool* value) = 0;
    virtual HRESULT __stdcall IsStoreAllowed(bool* value) = 0;
};};

template <> struct abi<Windows::Management::Workplace::IMdmPolicyStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetMessagingSyncPolicy(Windows::Management::Workplace::MessagingSyncPolicy* value) = 0;
};};

}
