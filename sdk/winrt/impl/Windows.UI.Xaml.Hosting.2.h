// C++/WinRT v1.0.170906.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.UI.Composition.1.h"
#include "winrt/impl/Windows.UI.Xaml.1.h"
#include "winrt/impl/Windows.UI.Xaml.Controls.1.h"
#include "winrt/impl/Windows.UI.Xaml.Hosting.1.h"

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Hosting {

}

namespace winrt::impl {

}

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Hosting {

struct WINRT_EBO ElementCompositionPreview :
    Windows::UI::Xaml::Hosting::IElementCompositionPreview
{
    ElementCompositionPreview(std::nullptr_t) noexcept {}
    static Windows::UI::Composition::Visual GetElementVisual(Windows::UI::Xaml::UIElement const& element);
    static Windows::UI::Composition::Visual GetElementChildVisual(Windows::UI::Xaml::UIElement const& element);
    static void SetElementChildVisual(Windows::UI::Xaml::UIElement const& element, Windows::UI::Composition::Visual const& visual);
    static Windows::UI::Composition::CompositionPropertySet GetScrollViewerManipulationPropertySet(Windows::UI::Xaml::Controls::ScrollViewer const& scrollViewer);
    static void SetImplicitShowAnimation(Windows::UI::Xaml::UIElement const& element, Windows::UI::Composition::ICompositionAnimationBase const& animation);
    static void SetImplicitHideAnimation(Windows::UI::Xaml::UIElement const& element, Windows::UI::Composition::ICompositionAnimationBase const& animation);
    static void SetIsTranslationEnabled(Windows::UI::Xaml::UIElement const& element, bool value);
    static Windows::UI::Composition::CompositionPropertySet GetPointerPositionPropertySet(Windows::UI::Xaml::UIElement const& targetElement);
};

}
