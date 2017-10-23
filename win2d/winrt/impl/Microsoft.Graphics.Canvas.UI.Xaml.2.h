﻿// C++/WinRT v1.0.170906.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Microsoft.Graphics.Canvas.1.h"
#include "winrt/impl/Microsoft.Graphics.Canvas.UI.1.h"
#include "winrt/impl/Windows.Graphics.Imaging.1.h"
#include "winrt/impl/Windows.UI.1.h"
#include "winrt/impl/Windows.UI.Core.1.h"
#include "winrt/impl/Windows.UI.Xaml.Media.Imaging.1.h"
#include "winrt/impl/Windows.UI.Xaml.1.h"
#include "winrt/impl/Windows.UI.Xaml.Controls.1.h"
#include "winrt/impl/Windows.UI.Xaml.Media.1.h"
#include "winrt/impl/Microsoft.Graphics.Canvas.UI.Xaml.1.h"

WINRT_EXPORT namespace winrt::Microsoft::Graphics::Canvas::UI::Xaml {

}

namespace winrt::impl {

}

WINRT_EXPORT namespace winrt::Microsoft::Graphics::Canvas::UI::Xaml {

struct WINRT_EBO CanvasAnimatedControl :
    Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedControl,
    impl::base<CanvasAnimatedControl, Windows::UI::Xaml::Controls::UserControl, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<CanvasAnimatedControl, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlOverrides6, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::Controls::IUserControl, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElement6, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElement7, Windows::UI::Xaml::IUIElementOverrides, Windows::UI::Xaml::IUIElementOverrides7>
{
    CanvasAnimatedControl(std::nullptr_t) noexcept {}
    CanvasAnimatedControl();
};

struct WINRT_EBO CanvasAnimatedDrawEventArgs :
    Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedDrawEventArgs
{
    CanvasAnimatedDrawEventArgs(std::nullptr_t) noexcept {}
    CanvasAnimatedDrawEventArgs(Microsoft::Graphics::Canvas::CanvasDrawingSession const& canvasDrawingSession, Microsoft::Graphics::Canvas::UI::CanvasTimingInformation const& timingInformation);
};

struct WINRT_EBO CanvasAnimatedUpdateEventArgs :
    Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedUpdateEventArgs
{
    CanvasAnimatedUpdateEventArgs(std::nullptr_t) noexcept {}
    CanvasAnimatedUpdateEventArgs(Microsoft::Graphics::Canvas::UI::CanvasTimingInformation const& timingInformation);
};

struct WINRT_EBO CanvasControl :
    Microsoft::Graphics::Canvas::UI::Xaml::ICanvasControl,
    impl::base<CanvasControl, Windows::UI::Xaml::Controls::UserControl, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<CanvasControl, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlOverrides6, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::Controls::IUserControl, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElement6, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElement7, Windows::UI::Xaml::IUIElementOverrides, Windows::UI::Xaml::IUIElementOverrides7>
{
    CanvasControl(std::nullptr_t) noexcept {}
    CanvasControl();
};

struct WINRT_EBO CanvasDrawEventArgs :
    Microsoft::Graphics::Canvas::UI::Xaml::ICanvasDrawEventArgs
{
    CanvasDrawEventArgs(std::nullptr_t) noexcept {}
    CanvasDrawEventArgs(Microsoft::Graphics::Canvas::CanvasDrawingSession const& canvasDrawingSession);
};

struct WINRT_EBO CanvasImageSource :
    Microsoft::Graphics::Canvas::UI::Xaml::ICanvasImageSource,
    impl::base<CanvasImageSource, Windows::UI::Xaml::Media::Imaging::SurfaceImageSource, Windows::UI::Xaml::Media::ImageSource, Windows::UI::Xaml::DependencyObject>,
    impl::require<CanvasImageSource, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::Media::IImageSource, Windows::UI::Xaml::Media::Imaging::ISurfaceImageSource>
{
    CanvasImageSource(std::nullptr_t) noexcept {}
    CanvasImageSource(Microsoft::Graphics::Canvas::ICanvasResourceCreatorWithDpi const& resourceCreator, Windows::Foundation::Size const& size);
    CanvasImageSource(Microsoft::Graphics::Canvas::ICanvasResourceCreatorWithDpi const& resourceCreator, float width, float height);
    CanvasImageSource(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, float width, float height, float dpi);
    CanvasImageSource(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, float width, float height, float dpi, Microsoft::Graphics::Canvas::CanvasAlphaMode const& alphaMode);
};

struct WINRT_EBO CanvasRegionsInvalidatedEventArgs :
    Microsoft::Graphics::Canvas::UI::Xaml::ICanvasRegionsInvalidatedEventArgs
{
    CanvasRegionsInvalidatedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO CanvasSwapChainPanel :
    Microsoft::Graphics::Canvas::UI::Xaml::ICanvasSwapChainPanel,
    impl::base<CanvasSwapChainPanel, Windows::UI::Xaml::Controls::SwapChainPanel, Windows::UI::Xaml::Controls::Grid, Windows::UI::Xaml::Controls::Panel, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<CanvasSwapChainPanel, Windows::UI::Xaml::Controls::IGrid, Windows::UI::Xaml::Controls::IGrid2, Windows::UI::Xaml::Controls::IGrid3, Windows::UI::Xaml::Controls::IPanel, Windows::UI::Xaml::Controls::ISwapChainPanel, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElement6, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElement7, Windows::UI::Xaml::IUIElementOverrides, Windows::UI::Xaml::IUIElementOverrides7>
{
    CanvasSwapChainPanel(std::nullptr_t) noexcept {}
    CanvasSwapChainPanel();
};

struct WINRT_EBO CanvasVirtualControl :
    Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualControl,
    impl::base<CanvasVirtualControl, Windows::UI::Xaml::Controls::UserControl, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<CanvasVirtualControl, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlOverrides6, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::Controls::IUserControl, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElement6, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElement7, Windows::UI::Xaml::IUIElementOverrides, Windows::UI::Xaml::IUIElementOverrides7>
{
    CanvasVirtualControl(std::nullptr_t) noexcept {}
    CanvasVirtualControl();
};

struct WINRT_EBO CanvasVirtualImageSource :
    Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualImageSource
{
    CanvasVirtualImageSource(std::nullptr_t) noexcept {}
    CanvasVirtualImageSource(Microsoft::Graphics::Canvas::ICanvasResourceCreatorWithDpi const& resourceCreator, Windows::Foundation::Size const& size);
    CanvasVirtualImageSource(Microsoft::Graphics::Canvas::ICanvasResourceCreatorWithDpi const& resourceCreator, float width, float height);
    CanvasVirtualImageSource(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, float width, float height, float dpi);
    CanvasVirtualImageSource(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, float width, float height, float dpi, Microsoft::Graphics::Canvas::CanvasAlphaMode const& alphaMode);
};

}
