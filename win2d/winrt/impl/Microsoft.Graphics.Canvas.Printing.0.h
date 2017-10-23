// C++/WinRT v1.0.170906.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Microsoft::Graphics::Canvas {

struct CanvasDevice;
struct CanvasDrawingSession;

}

WINRT_EXPORT namespace winrt::Windows::Graphics::Printing {

struct PrintTaskOptions;

}

WINRT_EXPORT namespace winrt::Microsoft::Graphics::Canvas::Printing {

struct ICanvasPreviewEventArgs;
struct ICanvasPrintDeferral;
struct ICanvasPrintDocument;
struct ICanvasPrintDocumentFactory;
struct ICanvasPrintEventArgs;
struct ICanvasPrintTaskOptionsChangedEventArgs;
struct CanvasPreviewEventArgs;
struct CanvasPrintDeferral;
struct CanvasPrintDocument;
struct CanvasPrintEventArgs;
struct CanvasPrintTaskOptionsChangedEventArgs;

}

namespace winrt::impl {

template <> struct category<Microsoft::Graphics::Canvas::Printing::ICanvasPreviewEventArgs>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Printing::ICanvasPrintDeferral>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Printing::ICanvasPrintDocument>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Printing::ICanvasPrintDocumentFactory>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Printing::ICanvasPrintEventArgs>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Printing::ICanvasPrintTaskOptionsChangedEventArgs>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Printing::CanvasPreviewEventArgs>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::Printing::CanvasPrintDeferral>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::Printing::CanvasPrintDocument>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::Printing::CanvasPrintEventArgs>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::Printing::CanvasPrintTaskOptionsChangedEventArgs>{ using type = class_category; };
template <> struct name<Microsoft::Graphics::Canvas::Printing::ICanvasPreviewEventArgs>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Printing.ICanvasPreviewEventArgs" }; };
template <> struct name<Microsoft::Graphics::Canvas::Printing::ICanvasPrintDeferral>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Printing.ICanvasPrintDeferral" }; };
template <> struct name<Microsoft::Graphics::Canvas::Printing::ICanvasPrintDocument>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Printing.ICanvasPrintDocument" }; };
template <> struct name<Microsoft::Graphics::Canvas::Printing::ICanvasPrintDocumentFactory>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Printing.ICanvasPrintDocumentFactory" }; };
template <> struct name<Microsoft::Graphics::Canvas::Printing::ICanvasPrintEventArgs>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Printing.ICanvasPrintEventArgs" }; };
template <> struct name<Microsoft::Graphics::Canvas::Printing::ICanvasPrintTaskOptionsChangedEventArgs>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Printing.ICanvasPrintTaskOptionsChangedEventArgs" }; };
template <> struct name<Microsoft::Graphics::Canvas::Printing::CanvasPreviewEventArgs>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Printing.CanvasPreviewEventArgs" }; };
template <> struct name<Microsoft::Graphics::Canvas::Printing::CanvasPrintDeferral>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Printing.CanvasPrintDeferral" }; };
template <> struct name<Microsoft::Graphics::Canvas::Printing::CanvasPrintDocument>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Printing.CanvasPrintDocument" }; };
template <> struct name<Microsoft::Graphics::Canvas::Printing::CanvasPrintEventArgs>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Printing.CanvasPrintEventArgs" }; };
template <> struct name<Microsoft::Graphics::Canvas::Printing::CanvasPrintTaskOptionsChangedEventArgs>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Printing.CanvasPrintTaskOptionsChangedEventArgs" }; };
template <> struct guid<Microsoft::Graphics::Canvas::Printing::ICanvasPreviewEventArgs>{ static constexpr GUID value{ 0x0A6A80A0,0xB07D,0x4DB2,{ 0xBD,0xEB,0x03,0x68,0xBB,0x18,0xC0,0xF8 } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Printing::ICanvasPrintDeferral>{ static constexpr GUID value{ 0x08CA99A2,0x5801,0x4EA4,{ 0x86,0x87,0x89,0x6C,0xBD,0xA6,0x9A,0x47 } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Printing::ICanvasPrintDocument>{ static constexpr GUID value{ 0x0A99CDEE,0xBF11,0x49D0,{ 0xAA,0x34,0x3B,0xA5,0xC3,0x2C,0x51,0xA5 } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Printing::ICanvasPrintDocumentFactory>{ static constexpr GUID value{ 0xA201AF1E,0xCE4A,0x401D,{ 0xA7,0x19,0x2B,0xF0,0x04,0xD5,0xC2,0x6A } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Printing::ICanvasPrintEventArgs>{ static constexpr GUID value{ 0x0C6148C4,0x0216,0x4561,{ 0xA8,0x17,0x34,0xC8,0x94,0x2A,0xAC,0x8B } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Printing::ICanvasPrintTaskOptionsChangedEventArgs>{ static constexpr GUID value{ 0xF92089BA,0x6C99,0x4CAC,{ 0xB2,0x8A,0xB5,0xDC,0xEC,0x7A,0x31,0x0D } }; };
template <> struct default_interface<Microsoft::Graphics::Canvas::Printing::CanvasPreviewEventArgs>{ using type = Microsoft::Graphics::Canvas::Printing::ICanvasPreviewEventArgs; };
template <> struct default_interface<Microsoft::Graphics::Canvas::Printing::CanvasPrintDeferral>{ using type = Microsoft::Graphics::Canvas::Printing::ICanvasPrintDeferral; };
template <> struct default_interface<Microsoft::Graphics::Canvas::Printing::CanvasPrintDocument>{ using type = Microsoft::Graphics::Canvas::Printing::ICanvasPrintDocument; };
template <> struct default_interface<Microsoft::Graphics::Canvas::Printing::CanvasPrintEventArgs>{ using type = Microsoft::Graphics::Canvas::Printing::ICanvasPrintEventArgs; };
template <> struct default_interface<Microsoft::Graphics::Canvas::Printing::CanvasPrintTaskOptionsChangedEventArgs>{ using type = Microsoft::Graphics::Canvas::Printing::ICanvasPrintTaskOptionsChangedEventArgs; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Printing_ICanvasPreviewEventArgs
{
    uint32_t PageNumber() const;
    Windows::Graphics::Printing::PrintTaskOptions PrintTaskOptions() const;
    Microsoft::Graphics::Canvas::Printing::CanvasPrintDeferral GetDeferral() const;
    Microsoft::Graphics::Canvas::CanvasDrawingSession DrawingSession() const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Printing::ICanvasPreviewEventArgs> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Printing_ICanvasPreviewEventArgs<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Printing_ICanvasPrintDeferral
{
    void Complete() const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Printing::ICanvasPrintDeferral> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Printing_ICanvasPrintDeferral<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Printing_ICanvasPrintDocument
{
    event_token PrintTaskOptionsChanged(Windows::Foundation::TypedEventHandler<Microsoft::Graphics::Canvas::Printing::CanvasPrintDocument, Microsoft::Graphics::Canvas::Printing::CanvasPrintTaskOptionsChangedEventArgs> const& value) const;
    using PrintTaskOptionsChanged_revoker = event_revoker<Microsoft::Graphics::Canvas::Printing::ICanvasPrintDocument>;
    PrintTaskOptionsChanged_revoker PrintTaskOptionsChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Microsoft::Graphics::Canvas::Printing::CanvasPrintDocument, Microsoft::Graphics::Canvas::Printing::CanvasPrintTaskOptionsChangedEventArgs> const& value) const;
    void PrintTaskOptionsChanged(event_token const& token) const;
    event_token Preview(Windows::Foundation::TypedEventHandler<Microsoft::Graphics::Canvas::Printing::CanvasPrintDocument, Microsoft::Graphics::Canvas::Printing::CanvasPreviewEventArgs> const& value) const;
    using Preview_revoker = event_revoker<Microsoft::Graphics::Canvas::Printing::ICanvasPrintDocument>;
    Preview_revoker Preview(auto_revoke_t, Windows::Foundation::TypedEventHandler<Microsoft::Graphics::Canvas::Printing::CanvasPrintDocument, Microsoft::Graphics::Canvas::Printing::CanvasPreviewEventArgs> const& value) const;
    void Preview(event_token const& token) const;
    event_token Print(Windows::Foundation::TypedEventHandler<Microsoft::Graphics::Canvas::Printing::CanvasPrintDocument, Microsoft::Graphics::Canvas::Printing::CanvasPrintEventArgs> const& value) const;
    using Print_revoker = event_revoker<Microsoft::Graphics::Canvas::Printing::ICanvasPrintDocument>;
    Print_revoker Print(auto_revoke_t, Windows::Foundation::TypedEventHandler<Microsoft::Graphics::Canvas::Printing::CanvasPrintDocument, Microsoft::Graphics::Canvas::Printing::CanvasPrintEventArgs> const& value) const;
    void Print(event_token const& token) const;
    void InvalidatePreview() const;
    void SetPageCount(uint32_t count) const;
    void SetIntermediatePageCount(uint32_t count) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Printing::ICanvasPrintDocument> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Printing_ICanvasPrintDocument<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Printing_ICanvasPrintDocumentFactory
{
    Microsoft::Graphics::Canvas::Printing::CanvasPrintDocument CreateWithDevice(Microsoft::Graphics::Canvas::CanvasDevice const& device) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Printing::ICanvasPrintDocumentFactory> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Printing_ICanvasPrintDocumentFactory<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Printing_ICanvasPrintEventArgs
{
    Windows::Graphics::Printing::PrintTaskOptions PrintTaskOptions() const;
    float Dpi() const;
    void Dpi(float value) const;
    Microsoft::Graphics::Canvas::Printing::CanvasPrintDeferral GetDeferral() const;
    Microsoft::Graphics::Canvas::CanvasDrawingSession CreateDrawingSession() const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Printing::ICanvasPrintEventArgs> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Printing_ICanvasPrintEventArgs<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Printing_ICanvasPrintTaskOptionsChangedEventArgs
{
    uint32_t CurrentPreviewPageNumber() const;
    void NewPreviewPageNumber(uint32_t value) const;
    uint32_t NewPreviewPageNumber() const;
    Microsoft::Graphics::Canvas::Printing::CanvasPrintDeferral GetDeferral() const;
    Windows::Graphics::Printing::PrintTaskOptions PrintTaskOptions() const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Printing::ICanvasPrintTaskOptionsChangedEventArgs> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Printing_ICanvasPrintTaskOptionsChangedEventArgs<D>; };

template <> struct abi<Microsoft::Graphics::Canvas::Printing::ICanvasPreviewEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_PageNumber(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_PrintTaskOptions(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetDeferral(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_DrawingSession(::IUnknown** value) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Printing::ICanvasPrintDeferral>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Complete() = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Printing::ICanvasPrintDocument>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_PrintTaskOptionsChanged(::IUnknown* value, event_token* token) = 0;
    virtual HRESULT __stdcall remove_PrintTaskOptionsChanged(event_token token) = 0;
    virtual HRESULT __stdcall add_Preview(::IUnknown* value, event_token* token) = 0;
    virtual HRESULT __stdcall remove_Preview(event_token token) = 0;
    virtual HRESULT __stdcall add_Print(::IUnknown* value, event_token* token) = 0;
    virtual HRESULT __stdcall remove_Print(event_token token) = 0;
    virtual HRESULT __stdcall InvalidatePreview() = 0;
    virtual HRESULT __stdcall SetPageCount(uint32_t count) = 0;
    virtual HRESULT __stdcall SetIntermediatePageCount(uint32_t count) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Printing::ICanvasPrintDocumentFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateWithDevice(::IUnknown* device, ::IUnknown** value) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Printing::ICanvasPrintEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_PrintTaskOptions(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Dpi(float* value) = 0;
    virtual HRESULT __stdcall put_Dpi(float value) = 0;
    virtual HRESULT __stdcall GetDeferral(::IUnknown** value) = 0;
    virtual HRESULT __stdcall CreateDrawingSession(::IUnknown** value) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Printing::ICanvasPrintTaskOptionsChangedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_CurrentPreviewPageNumber(uint32_t* value) = 0;
    virtual HRESULT __stdcall put_NewPreviewPageNumber(uint32_t value) = 0;
    virtual HRESULT __stdcall get_NewPreviewPageNumber(uint32_t* value) = 0;
    virtual HRESULT __stdcall GetDeferral(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_PrintTaskOptions(::IUnknown** value) = 0;
};};

}
