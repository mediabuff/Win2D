// C++/WinRT v1.0.170906.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Microsoft::Graphics::Canvas::UI {

enum class CanvasCreateResourcesReason : int32_t
{
    FirstTime = 0,
    NewDevice = 1,
    DpiChanged = 2,
};

struct ICanvasCreateResourcesEventArgs;
struct ICanvasCreateResourcesEventArgsFactory;
struct CanvasCreateResourcesEventArgs;
struct CanvasTimingInformation;

}

namespace winrt::impl {

template <> struct category<Microsoft::Graphics::Canvas::UI::ICanvasCreateResourcesEventArgs>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::UI::ICanvasCreateResourcesEventArgsFactory>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::UI::CanvasCreateResourcesEventArgs>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::UI::CanvasCreateResourcesReason>{ using type = enum_category; };
template <> struct category<Microsoft::Graphics::Canvas::UI::CanvasTimingInformation>{ using type = struct_category<int64_t,Windows::Foundation::TimeSpan,Windows::Foundation::TimeSpan,bool>; };
template <> struct name<Microsoft::Graphics::Canvas::UI::ICanvasCreateResourcesEventArgs>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.UI.ICanvasCreateResourcesEventArgs" }; };
template <> struct name<Microsoft::Graphics::Canvas::UI::ICanvasCreateResourcesEventArgsFactory>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.UI.ICanvasCreateResourcesEventArgsFactory" }; };
template <> struct name<Microsoft::Graphics::Canvas::UI::CanvasCreateResourcesEventArgs>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.UI.CanvasCreateResourcesEventArgs" }; };
template <> struct name<Microsoft::Graphics::Canvas::UI::CanvasCreateResourcesReason>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.UI.CanvasCreateResourcesReason" }; };
template <> struct name<Microsoft::Graphics::Canvas::UI::CanvasTimingInformation>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.UI.CanvasTimingInformation" }; };
template <> struct guid<Microsoft::Graphics::Canvas::UI::ICanvasCreateResourcesEventArgs>{ static constexpr GUID value{ 0xEDC52108,0xF6BA,0x4A09,{ 0x9F,0xA3,0x10,0xC9,0x7A,0x24,0xE4,0x9A } }; };
template <> struct guid<Microsoft::Graphics::Canvas::UI::ICanvasCreateResourcesEventArgsFactory>{ static constexpr GUID value{ 0x3A21C766,0x0781,0x4389,{ 0xBB,0xC3,0x86,0xB1,0xF5,0x02,0x2A,0xF1 } }; };
template <> struct default_interface<Microsoft::Graphics::Canvas::UI::CanvasCreateResourcesEventArgs>{ using type = Microsoft::Graphics::Canvas::UI::ICanvasCreateResourcesEventArgs; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_UI_ICanvasCreateResourcesEventArgs
{
    Microsoft::Graphics::Canvas::UI::CanvasCreateResourcesReason Reason() const;
    void TrackAsyncAction(Windows::Foundation::IAsyncAction const& action) const;
    Windows::Foundation::IAsyncAction GetTrackedAction() const;
};
template <> struct consume<Microsoft::Graphics::Canvas::UI::ICanvasCreateResourcesEventArgs> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_UI_ICanvasCreateResourcesEventArgs<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_UI_ICanvasCreateResourcesEventArgsFactory
{
    Microsoft::Graphics::Canvas::UI::CanvasCreateResourcesEventArgs Create(Microsoft::Graphics::Canvas::UI::CanvasCreateResourcesReason const& createResourcesReason) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::UI::ICanvasCreateResourcesEventArgsFactory> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_UI_ICanvasCreateResourcesEventArgsFactory<D>; };

template <> struct abi<Microsoft::Graphics::Canvas::UI::ICanvasCreateResourcesEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Reason(Microsoft::Graphics::Canvas::UI::CanvasCreateResourcesReason* value) = 0;
    virtual HRESULT __stdcall TrackAsyncAction(::IUnknown* action) = 0;
    virtual HRESULT __stdcall GetTrackedAction(::IUnknown** action) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::UI::ICanvasCreateResourcesEventArgsFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(Microsoft::Graphics::Canvas::UI::CanvasCreateResourcesReason createResourcesReason, ::IUnknown** CreateResourcesEventArgs) = 0;
};};

}
