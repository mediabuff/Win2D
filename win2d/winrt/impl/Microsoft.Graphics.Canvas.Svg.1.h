﻿// C++/WinRT v1.0.170906.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Microsoft.Graphics.Canvas.0.h"
#include "winrt/impl/Microsoft.Graphics.Canvas.Geometry.0.h"
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.UI.0.h"
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Microsoft.Graphics.Canvas.Svg.0.h"

WINRT_EXPORT namespace winrt::Microsoft::Graphics::Canvas::Svg {

struct WINRT_EBO ICanvasSvgAttribute :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICanvasSvgAttribute>,
    impl::require<ICanvasSvgAttribute, Windows::Foundation::IClosable>
{
    ICanvasSvgAttribute(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICanvasSvgDocument :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICanvasSvgDocument>,
    impl::require<ICanvasSvgDocument, Windows::Foundation::IClosable>
{
    ICanvasSvgDocument(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICanvasSvgDocumentFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICanvasSvgDocumentFactory>
{
    ICanvasSvgDocumentFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICanvasSvgDocumentStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICanvasSvgDocumentStatics>
{
    ICanvasSvgDocumentStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICanvasSvgElement :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICanvasSvgElement>,
    impl::require<ICanvasSvgElement, Windows::Foundation::IClosable>
{
    ICanvasSvgElement(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICanvasSvgNamedElement :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICanvasSvgNamedElement>,
    impl::require<ICanvasSvgNamedElement, Microsoft::Graphics::Canvas::Svg::ICanvasSvgElement, Windows::Foundation::IClosable>
{
    ICanvasSvgNamedElement(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICanvasSvgPaintAttribute :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICanvasSvgPaintAttribute>,
    impl::require<ICanvasSvgPaintAttribute, Microsoft::Graphics::Canvas::Svg::ICanvasSvgAttribute, Windows::Foundation::IClosable>
{
    ICanvasSvgPaintAttribute(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICanvasSvgPathAttribute :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICanvasSvgPathAttribute>,
    impl::require<ICanvasSvgPathAttribute, Microsoft::Graphics::Canvas::Svg::ICanvasSvgAttribute, Windows::Foundation::IClosable>
{
    ICanvasSvgPathAttribute(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICanvasSvgPointsAttribute :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICanvasSvgPointsAttribute>,
    impl::require<ICanvasSvgPointsAttribute, Microsoft::Graphics::Canvas::Svg::ICanvasSvgAttribute, Windows::Foundation::IClosable>
{
    ICanvasSvgPointsAttribute(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICanvasSvgStrokeDashArrayAttribute :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICanvasSvgStrokeDashArrayAttribute>,
    impl::require<ICanvasSvgStrokeDashArrayAttribute, Microsoft::Graphics::Canvas::Svg::ICanvasSvgAttribute, Windows::Foundation::IClosable>
{
    ICanvasSvgStrokeDashArrayAttribute(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICanvasSvgTextElement :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICanvasSvgTextElement>,
    impl::require<ICanvasSvgTextElement, Windows::Foundation::IClosable>
{
    ICanvasSvgTextElement(std::nullptr_t = nullptr) noexcept {}
};

}
