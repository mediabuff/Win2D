// C++/WinRT v1.0.170906.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::UI::Composition {

struct CompositionPropertySet;
struct ICompositionAnimationBase;
struct Visual;

}

WINRT_EXPORT namespace winrt::Windows::UI::Xaml {

struct UIElement;

}

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Controls {

struct ScrollViewer;

}

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Hosting {

struct IElementCompositionPreview;
struct IElementCompositionPreviewStatics;
struct IElementCompositionPreviewStatics2;
struct ElementCompositionPreview;

}

namespace winrt::impl {

template <> struct category<Windows::UI::Xaml::Hosting::IElementCompositionPreview>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Hosting::ElementCompositionPreview>{ using type = class_category; };
template <> struct name<Windows::UI::Xaml::Hosting::IElementCompositionPreview>{ static constexpr auto & value{ L"Windows.UI.Xaml.Hosting.IElementCompositionPreview" }; };
template <> struct name<Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Hosting.IElementCompositionPreviewStatics" }; };
template <> struct name<Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2>{ static constexpr auto & value{ L"Windows.UI.Xaml.Hosting.IElementCompositionPreviewStatics2" }; };
template <> struct name<Windows::UI::Xaml::Hosting::ElementCompositionPreview>{ static constexpr auto & value{ L"Windows.UI.Xaml.Hosting.ElementCompositionPreview" }; };
template <> struct guid<Windows::UI::Xaml::Hosting::IElementCompositionPreview>{ static constexpr GUID value{ 0xB6F1A676,0xCFE6,0x46AC,{ 0xAC,0xF6,0xC4,0x68,0x7B,0xB6,0x5E,0x60 } }; };
template <> struct guid<Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics>{ static constexpr GUID value{ 0x08C92B38,0xEC99,0x4C55,{ 0xBC,0x85,0xA1,0xC1,0x80,0xB2,0x76,0x46 } }; };
template <> struct guid<Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2>{ static constexpr GUID value{ 0x24148FBB,0x23D6,0x4F37,{ 0xBA,0x0C,0x07,0x33,0xE7,0x99,0x72,0x2D } }; };
template <> struct default_interface<Windows::UI::Xaml::Hosting::ElementCompositionPreview>{ using type = Windows::UI::Xaml::Hosting::IElementCompositionPreview; };

template <typename D>
struct consume_Windows_UI_Xaml_Hosting_IElementCompositionPreview
{
};
template <> struct consume<Windows::UI::Xaml::Hosting::IElementCompositionPreview> { template <typename D> using type = consume_Windows_UI_Xaml_Hosting_IElementCompositionPreview<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Hosting_IElementCompositionPreviewStatics
{
    Windows::UI::Composition::Visual GetElementVisual(Windows::UI::Xaml::UIElement const& element) const;
    Windows::UI::Composition::Visual GetElementChildVisual(Windows::UI::Xaml::UIElement const& element) const;
    void SetElementChildVisual(Windows::UI::Xaml::UIElement const& element, Windows::UI::Composition::Visual const& visual) const;
    Windows::UI::Composition::CompositionPropertySet GetScrollViewerManipulationPropertySet(Windows::UI::Xaml::Controls::ScrollViewer const& scrollViewer) const;
};
template <> struct consume<Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Hosting_IElementCompositionPreviewStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Hosting_IElementCompositionPreviewStatics2
{
    void SetImplicitShowAnimation(Windows::UI::Xaml::UIElement const& element, Windows::UI::Composition::ICompositionAnimationBase const& animation) const;
    void SetImplicitHideAnimation(Windows::UI::Xaml::UIElement const& element, Windows::UI::Composition::ICompositionAnimationBase const& animation) const;
    void SetIsTranslationEnabled(Windows::UI::Xaml::UIElement const& element, bool value) const;
    Windows::UI::Composition::CompositionPropertySet GetPointerPositionPropertySet(Windows::UI::Xaml::UIElement const& targetElement) const;
};
template <> struct consume<Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2> { template <typename D> using type = consume_Windows_UI_Xaml_Hosting_IElementCompositionPreviewStatics2<D>; };

template <> struct abi<Windows::UI::Xaml::Hosting::IElementCompositionPreview>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetElementVisual(::IUnknown* element, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall GetElementChildVisual(::IUnknown* element, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall SetElementChildVisual(::IUnknown* element, ::IUnknown* visual) = 0;
    virtual HRESULT __stdcall GetScrollViewerManipulationPropertySet(::IUnknown* scrollViewer, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall SetImplicitShowAnimation(::IUnknown* element, ::IUnknown* animation) = 0;
    virtual HRESULT __stdcall SetImplicitHideAnimation(::IUnknown* element, ::IUnknown* animation) = 0;
    virtual HRESULT __stdcall SetIsTranslationEnabled(::IUnknown* element, bool value) = 0;
    virtual HRESULT __stdcall GetPointerPositionPropertySet(::IUnknown* targetElement, ::IUnknown** result) = 0;
};};

}
