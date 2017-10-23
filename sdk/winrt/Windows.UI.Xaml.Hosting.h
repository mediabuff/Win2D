// C++/WinRT v1.0.170906.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.UI.Composition.2.h"
#include "winrt/impl/Windows.UI.Xaml.2.h"
#include "winrt/impl/Windows.UI.Xaml.Controls.2.h"
#include "winrt/impl/Windows.UI.Xaml.Hosting.2.h"
#include "winrt/Windows.UI.Xaml.h"

namespace winrt::impl {

template <typename D> Windows::UI::Composition::Visual consume_Windows_UI_Xaml_Hosting_IElementCompositionPreviewStatics<D>::GetElementVisual(Windows::UI::Xaml::UIElement const& element) const
{
    Windows::UI::Composition::Visual result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics)->GetElementVisual(get_abi(element), put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::Visual consume_Windows_UI_Xaml_Hosting_IElementCompositionPreviewStatics<D>::GetElementChildVisual(Windows::UI::Xaml::UIElement const& element) const
{
    Windows::UI::Composition::Visual result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics)->GetElementChildVisual(get_abi(element), put_abi(result)));
    return result;
}

template <typename D> void consume_Windows_UI_Xaml_Hosting_IElementCompositionPreviewStatics<D>::SetElementChildVisual(Windows::UI::Xaml::UIElement const& element, Windows::UI::Composition::Visual const& visual) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics)->SetElementChildVisual(get_abi(element), get_abi(visual)));
}

template <typename D> Windows::UI::Composition::CompositionPropertySet consume_Windows_UI_Xaml_Hosting_IElementCompositionPreviewStatics<D>::GetScrollViewerManipulationPropertySet(Windows::UI::Xaml::Controls::ScrollViewer const& scrollViewer) const
{
    Windows::UI::Composition::CompositionPropertySet result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics)->GetScrollViewerManipulationPropertySet(get_abi(scrollViewer), put_abi(result)));
    return result;
}

template <typename D> void consume_Windows_UI_Xaml_Hosting_IElementCompositionPreviewStatics2<D>::SetImplicitShowAnimation(Windows::UI::Xaml::UIElement const& element, Windows::UI::Composition::ICompositionAnimationBase const& animation) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2)->SetImplicitShowAnimation(get_abi(element), get_abi(animation)));
}

template <typename D> void consume_Windows_UI_Xaml_Hosting_IElementCompositionPreviewStatics2<D>::SetImplicitHideAnimation(Windows::UI::Xaml::UIElement const& element, Windows::UI::Composition::ICompositionAnimationBase const& animation) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2)->SetImplicitHideAnimation(get_abi(element), get_abi(animation)));
}

template <typename D> void consume_Windows_UI_Xaml_Hosting_IElementCompositionPreviewStatics2<D>::SetIsTranslationEnabled(Windows::UI::Xaml::UIElement const& element, bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2)->SetIsTranslationEnabled(get_abi(element), value));
}

template <typename D> Windows::UI::Composition::CompositionPropertySet consume_Windows_UI_Xaml_Hosting_IElementCompositionPreviewStatics2<D>::GetPointerPositionPropertySet(Windows::UI::Xaml::UIElement const& targetElement) const
{
    Windows::UI::Composition::CompositionPropertySet result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2)->GetPointerPositionPropertySet(get_abi(targetElement), put_abi(result)));
    return result;
}

template <typename D>
struct produce<D, Windows::UI::Xaml::Hosting::IElementCompositionPreview> : produce_base<D, Windows::UI::Xaml::Hosting::IElementCompositionPreview>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics> : produce_base<D, Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics>
{
    HRESULT __stdcall GetElementVisual(::IUnknown* element, ::IUnknown** result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetElementVisual(*reinterpret_cast<Windows::UI::Xaml::UIElement const*>(&element)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetElementChildVisual(::IUnknown* element, ::IUnknown** result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetElementChildVisual(*reinterpret_cast<Windows::UI::Xaml::UIElement const*>(&element)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetElementChildVisual(::IUnknown* element, ::IUnknown* visual) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetElementChildVisual(*reinterpret_cast<Windows::UI::Xaml::UIElement const*>(&element), *reinterpret_cast<Windows::UI::Composition::Visual const*>(&visual));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetScrollViewerManipulationPropertySet(::IUnknown* scrollViewer, ::IUnknown** result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetScrollViewerManipulationPropertySet(*reinterpret_cast<Windows::UI::Xaml::Controls::ScrollViewer const*>(&scrollViewer)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2> : produce_base<D, Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2>
{
    HRESULT __stdcall SetImplicitShowAnimation(::IUnknown* element, ::IUnknown* animation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetImplicitShowAnimation(*reinterpret_cast<Windows::UI::Xaml::UIElement const*>(&element), *reinterpret_cast<Windows::UI::Composition::ICompositionAnimationBase const*>(&animation));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetImplicitHideAnimation(::IUnknown* element, ::IUnknown* animation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetImplicitHideAnimation(*reinterpret_cast<Windows::UI::Xaml::UIElement const*>(&element), *reinterpret_cast<Windows::UI::Composition::ICompositionAnimationBase const*>(&animation));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetIsTranslationEnabled(::IUnknown* element, bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetIsTranslationEnabled(*reinterpret_cast<Windows::UI::Xaml::UIElement const*>(&element), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetPointerPositionPropertySet(::IUnknown* targetElement, ::IUnknown** result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetPointerPositionPropertySet(*reinterpret_cast<Windows::UI::Xaml::UIElement const*>(&targetElement)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Hosting {

inline Windows::UI::Composition::Visual ElementCompositionPreview::GetElementVisual(Windows::UI::Xaml::UIElement const& element)
{
    return get_activation_factory<ElementCompositionPreview, Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics>().GetElementVisual(element);
}

inline Windows::UI::Composition::Visual ElementCompositionPreview::GetElementChildVisual(Windows::UI::Xaml::UIElement const& element)
{
    return get_activation_factory<ElementCompositionPreview, Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics>().GetElementChildVisual(element);
}

inline void ElementCompositionPreview::SetElementChildVisual(Windows::UI::Xaml::UIElement const& element, Windows::UI::Composition::Visual const& visual)
{
    get_activation_factory<ElementCompositionPreview, Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics>().SetElementChildVisual(element, visual);
}

inline Windows::UI::Composition::CompositionPropertySet ElementCompositionPreview::GetScrollViewerManipulationPropertySet(Windows::UI::Xaml::Controls::ScrollViewer const& scrollViewer)
{
    return get_activation_factory<ElementCompositionPreview, Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics>().GetScrollViewerManipulationPropertySet(scrollViewer);
}

inline void ElementCompositionPreview::SetImplicitShowAnimation(Windows::UI::Xaml::UIElement const& element, Windows::UI::Composition::ICompositionAnimationBase const& animation)
{
    get_activation_factory<ElementCompositionPreview, Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2>().SetImplicitShowAnimation(element, animation);
}

inline void ElementCompositionPreview::SetImplicitHideAnimation(Windows::UI::Xaml::UIElement const& element, Windows::UI::Composition::ICompositionAnimationBase const& animation)
{
    get_activation_factory<ElementCompositionPreview, Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2>().SetImplicitHideAnimation(element, animation);
}

inline void ElementCompositionPreview::SetIsTranslationEnabled(Windows::UI::Xaml::UIElement const& element, bool value)
{
    get_activation_factory<ElementCompositionPreview, Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2>().SetIsTranslationEnabled(element, value);
}

inline Windows::UI::Composition::CompositionPropertySet ElementCompositionPreview::GetPointerPositionPropertySet(Windows::UI::Xaml::UIElement const& targetElement)
{
    return get_activation_factory<ElementCompositionPreview, Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2>().GetPointerPositionPropertySet(targetElement);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreview> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreview> {};

template<> struct hash<winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2> {};

template<> struct hash<winrt::Windows::UI::Xaml::Hosting::ElementCompositionPreview> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Hosting::ElementCompositionPreview> {};

}

WINRT_WARNING_POP
