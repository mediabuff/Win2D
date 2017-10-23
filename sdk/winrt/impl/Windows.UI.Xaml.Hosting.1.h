// C++/WinRT v1.0.170906.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.UI.Composition.0.h"
#include "winrt/impl/Windows.UI.Xaml.0.h"
#include "winrt/impl/Windows.UI.Xaml.Controls.0.h"
#include "winrt/impl/Windows.UI.Xaml.Hosting.0.h"

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Hosting {

struct WINRT_EBO IElementCompositionPreview :
    Windows::Foundation::IInspectable,
    impl::consume_t<IElementCompositionPreview>
{
    IElementCompositionPreview(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IElementCompositionPreviewStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IElementCompositionPreviewStatics>
{
    IElementCompositionPreviewStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IElementCompositionPreviewStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IElementCompositionPreviewStatics2>
{
    IElementCompositionPreviewStatics2(std::nullptr_t = nullptr) noexcept {}
};

}
