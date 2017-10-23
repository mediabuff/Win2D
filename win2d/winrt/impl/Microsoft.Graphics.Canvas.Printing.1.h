﻿// C++/WinRT v1.0.170906.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Microsoft.Graphics.Canvas.0.h"
#include "winrt/impl/Windows.Graphics.Printing.0.h"
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Microsoft.Graphics.Canvas.Printing.0.h"

WINRT_EXPORT namespace winrt::Microsoft::Graphics::Canvas::Printing {

struct WINRT_EBO ICanvasPreviewEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICanvasPreviewEventArgs>
{
    ICanvasPreviewEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICanvasPrintDeferral :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICanvasPrintDeferral>
{
    ICanvasPrintDeferral(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICanvasPrintDocument :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICanvasPrintDocument>,
    impl::require<ICanvasPrintDocument, Microsoft::Graphics::Canvas::ICanvasResourceCreator, Windows::Foundation::IClosable, Windows::Graphics::Printing::IPrintDocumentSource>
{
    ICanvasPrintDocument(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICanvasPrintDocumentFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICanvasPrintDocumentFactory>
{
    ICanvasPrintDocumentFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICanvasPrintEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICanvasPrintEventArgs>
{
    ICanvasPrintEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICanvasPrintTaskOptionsChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICanvasPrintTaskOptionsChangedEventArgs>
{
    ICanvasPrintTaskOptionsChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

}
