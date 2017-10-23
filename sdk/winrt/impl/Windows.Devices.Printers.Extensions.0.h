// C++/WinRT v1.0.170906.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Devices::Printers::Extensions {

enum class Print3DWorkflowDetail : int32_t
{
    Unknown = 0,
    ModelExceedsPrintBed = 1,
    UploadFailed = 2,
    InvalidMaterialSelection = 3,
    InvalidModel = 4,
    ModelNotManifold = 5,
    InvalidPrintTicket = 6,
};

enum class Print3DWorkflowStatus : int32_t
{
    Abandoned = 0,
    Canceled = 1,
    Failed = 2,
    Slicing = 3,
    Submitted = 4,
};

struct IPrint3DWorkflow;
struct IPrint3DWorkflow2;
struct IPrint3DWorkflowPrintRequestedEventArgs;
struct IPrint3DWorkflowPrinterChangedEventArgs;
struct Print3DWorkflow;
struct Print3DWorkflowPrintRequestedEventArgs;
struct Print3DWorkflowPrinterChangedEventArgs;

}

namespace winrt::impl {

template <> struct category<Windows::Devices::Printers::Extensions::IPrint3DWorkflow>{ using type = interface_category; };
template <> struct category<Windows::Devices::Printers::Extensions::IPrint3DWorkflow2>{ using type = interface_category; };
template <> struct category<Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrintRequestedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrinterChangedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Devices::Printers::Extensions::Print3DWorkflow>{ using type = class_category; };
template <> struct category<Windows::Devices::Printers::Extensions::Print3DWorkflowPrintRequestedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Devices::Printers::Extensions::Print3DWorkflowPrinterChangedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Devices::Printers::Extensions::Print3DWorkflowDetail>{ using type = enum_category; };
template <> struct category<Windows::Devices::Printers::Extensions::Print3DWorkflowStatus>{ using type = enum_category; };
template <> struct name<Windows::Devices::Printers::Extensions::IPrint3DWorkflow>{ static constexpr auto & value{ L"Windows.Devices.Printers.Extensions.IPrint3DWorkflow" }; };
template <> struct name<Windows::Devices::Printers::Extensions::IPrint3DWorkflow2>{ static constexpr auto & value{ L"Windows.Devices.Printers.Extensions.IPrint3DWorkflow2" }; };
template <> struct name<Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrintRequestedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.Printers.Extensions.IPrint3DWorkflowPrintRequestedEventArgs" }; };
template <> struct name<Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrinterChangedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.Printers.Extensions.IPrint3DWorkflowPrinterChangedEventArgs" }; };
template <> struct name<Windows::Devices::Printers::Extensions::Print3DWorkflow>{ static constexpr auto & value{ L"Windows.Devices.Printers.Extensions.Print3DWorkflow" }; };
template <> struct name<Windows::Devices::Printers::Extensions::Print3DWorkflowPrintRequestedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.Printers.Extensions.Print3DWorkflowPrintRequestedEventArgs" }; };
template <> struct name<Windows::Devices::Printers::Extensions::Print3DWorkflowPrinterChangedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.Printers.Extensions.Print3DWorkflowPrinterChangedEventArgs" }; };
template <> struct name<Windows::Devices::Printers::Extensions::Print3DWorkflowDetail>{ static constexpr auto & value{ L"Windows.Devices.Printers.Extensions.Print3DWorkflowDetail" }; };
template <> struct name<Windows::Devices::Printers::Extensions::Print3DWorkflowStatus>{ static constexpr auto & value{ L"Windows.Devices.Printers.Extensions.Print3DWorkflowStatus" }; };
template <> struct guid<Windows::Devices::Printers::Extensions::IPrint3DWorkflow>{ static constexpr GUID value{ 0xC56F74BD,0x3669,0x4A66,{ 0xAB,0x42,0xC8,0x15,0x19,0x30,0xCD,0x34 } }; };
template <> struct guid<Windows::Devices::Printers::Extensions::IPrint3DWorkflow2>{ static constexpr GUID value{ 0xA2A6C54F,0x8AC1,0x4918,{ 0x97,0x41,0xE3,0x4F,0x30,0x04,0x23,0x9E } }; };
template <> struct guid<Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrintRequestedEventArgs>{ static constexpr GUID value{ 0x19F8C858,0x5AC8,0x4B55,{ 0x8A,0x5F,0xE6,0x15,0x67,0xDA,0xFB,0x4D } }; };
template <> struct guid<Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrinterChangedEventArgs>{ static constexpr GUID value{ 0x45226402,0x95FC,0x4847,{ 0x93,0xB3,0x13,0x4D,0xBF,0x5C,0x60,0xF7 } }; };
template <> struct default_interface<Windows::Devices::Printers::Extensions::Print3DWorkflow>{ using type = Windows::Devices::Printers::Extensions::IPrint3DWorkflow; };
template <> struct default_interface<Windows::Devices::Printers::Extensions::Print3DWorkflowPrintRequestedEventArgs>{ using type = Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrintRequestedEventArgs; };
template <> struct default_interface<Windows::Devices::Printers::Extensions::Print3DWorkflowPrinterChangedEventArgs>{ using type = Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrinterChangedEventArgs; };

template <typename D>
struct consume_Windows_Devices_Printers_Extensions_IPrint3DWorkflow
{
    hstring DeviceID() const;
    Windows::Foundation::IInspectable GetPrintModelPackage() const;
    bool IsPrintReady() const;
    void IsPrintReady(bool value) const;
    event_token PrintRequested(Windows::Foundation::TypedEventHandler<Windows::Devices::Printers::Extensions::Print3DWorkflow, Windows::Devices::Printers::Extensions::Print3DWorkflowPrintRequestedEventArgs> const& eventHandler) const;
    using PrintRequested_revoker = event_revoker<Windows::Devices::Printers::Extensions::IPrint3DWorkflow>;
    PrintRequested_revoker PrintRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Printers::Extensions::Print3DWorkflow, Windows::Devices::Printers::Extensions::Print3DWorkflowPrintRequestedEventArgs> const& eventHandler) const;
    void PrintRequested(event_token const& eventCookie) const;
};
template <> struct consume<Windows::Devices::Printers::Extensions::IPrint3DWorkflow> { template <typename D> using type = consume_Windows_Devices_Printers_Extensions_IPrint3DWorkflow<D>; };

template <typename D>
struct consume_Windows_Devices_Printers_Extensions_IPrint3DWorkflow2
{
    event_token PrinterChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Printers::Extensions::Print3DWorkflow, Windows::Devices::Printers::Extensions::Print3DWorkflowPrinterChangedEventArgs> const& eventHandler) const;
    using PrinterChanged_revoker = event_revoker<Windows::Devices::Printers::Extensions::IPrint3DWorkflow2>;
    PrinterChanged_revoker PrinterChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Printers::Extensions::Print3DWorkflow, Windows::Devices::Printers::Extensions::Print3DWorkflowPrinterChangedEventArgs> const& eventHandler) const;
    void PrinterChanged(event_token const& eventCookie) const;
};
template <> struct consume<Windows::Devices::Printers::Extensions::IPrint3DWorkflow2> { template <typename D> using type = consume_Windows_Devices_Printers_Extensions_IPrint3DWorkflow2<D>; };

template <typename D>
struct consume_Windows_Devices_Printers_Extensions_IPrint3DWorkflowPrintRequestedEventArgs
{
    Windows::Devices::Printers::Extensions::Print3DWorkflowStatus Status() const;
    void SetExtendedStatus(Windows::Devices::Printers::Extensions::Print3DWorkflowDetail const& value) const;
    void SetSource(Windows::Foundation::IInspectable const& source) const;
    void SetSourceChanged(bool value) const;
};
template <> struct consume<Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrintRequestedEventArgs> { template <typename D> using type = consume_Windows_Devices_Printers_Extensions_IPrint3DWorkflowPrintRequestedEventArgs<D>; };

template <typename D>
struct consume_Windows_Devices_Printers_Extensions_IPrint3DWorkflowPrinterChangedEventArgs
{
    hstring NewDeviceId() const;
};
template <> struct consume<Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrinterChangedEventArgs> { template <typename D> using type = consume_Windows_Devices_Printers_Extensions_IPrint3DWorkflowPrinterChangedEventArgs<D>; };

template <> struct abi<Windows::Devices::Printers::Extensions::IPrint3DWorkflow>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DeviceID(HSTRING* value) = 0;
    virtual HRESULT __stdcall GetPrintModelPackage(::IUnknown** printModelPackage) = 0;
    virtual HRESULT __stdcall get_IsPrintReady(bool* value) = 0;
    virtual HRESULT __stdcall put_IsPrintReady(bool value) = 0;
    virtual HRESULT __stdcall add_PrintRequested(::IUnknown* eventHandler, event_token* eventCookie) = 0;
    virtual HRESULT __stdcall remove_PrintRequested(event_token eventCookie) = 0;
};};

template <> struct abi<Windows::Devices::Printers::Extensions::IPrint3DWorkflow2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_PrinterChanged(::IUnknown* eventHandler, event_token* eventCookie) = 0;
    virtual HRESULT __stdcall remove_PrinterChanged(event_token eventCookie) = 0;
};};

template <> struct abi<Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrintRequestedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Status(Windows::Devices::Printers::Extensions::Print3DWorkflowStatus* value) = 0;
    virtual HRESULT __stdcall SetExtendedStatus(Windows::Devices::Printers::Extensions::Print3DWorkflowDetail value) = 0;
    virtual HRESULT __stdcall SetSource(::IUnknown* source) = 0;
    virtual HRESULT __stdcall SetSourceChanged(bool value) = 0;
};};

template <> struct abi<Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrinterChangedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_NewDeviceId(HSTRING* value) = 0;
};};

}
