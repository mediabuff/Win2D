﻿// C++/WinRT v1.0.170906.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Microsoft.Graphics.Canvas.1.h"
#include "winrt/impl/Microsoft.Graphics.Canvas.Geometry.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.UI.1.h"
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Microsoft.Graphics.Canvas.Svg.1.h"

WINRT_EXPORT namespace winrt::Microsoft::Graphics::Canvas::Svg {

}

namespace winrt::impl {

}

WINRT_EXPORT namespace winrt::Microsoft::Graphics::Canvas::Svg {

struct WINRT_EBO CanvasSvgDocument :
    Microsoft::Graphics::Canvas::Svg::ICanvasSvgDocument
{
    CanvasSvgDocument(std::nullptr_t) noexcept {}
    CanvasSvgDocument(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator);
    static Microsoft::Graphics::Canvas::Svg::CanvasSvgDocument LoadFromXml(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, param::hstring const& xmlString);
    static Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::Svg::CanvasSvgDocument> LoadAsync(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Storage::Streams::IRandomAccessStream const& stream);
    static bool IsSupported(Microsoft::Graphics::Canvas::CanvasDevice const& device);
};

struct WINRT_EBO CanvasSvgNamedElement :
    Microsoft::Graphics::Canvas::Svg::ICanvasSvgNamedElement
{
    CanvasSvgNamedElement(std::nullptr_t) noexcept {}
};

struct WINRT_EBO CanvasSvgPaintAttribute :
    Microsoft::Graphics::Canvas::Svg::ICanvasSvgPaintAttribute
{
    CanvasSvgPaintAttribute(std::nullptr_t) noexcept {}
};

struct WINRT_EBO CanvasSvgPathAttribute :
    Microsoft::Graphics::Canvas::Svg::ICanvasSvgPathAttribute
{
    CanvasSvgPathAttribute(std::nullptr_t) noexcept {}
};

struct WINRT_EBO CanvasSvgPointsAttribute :
    Microsoft::Graphics::Canvas::Svg::ICanvasSvgPointsAttribute
{
    CanvasSvgPointsAttribute(std::nullptr_t) noexcept {}
};

struct WINRT_EBO CanvasSvgStrokeDashArrayAttribute :
    Microsoft::Graphics::Canvas::Svg::ICanvasSvgStrokeDashArrayAttribute
{
    CanvasSvgStrokeDashArrayAttribute(std::nullptr_t) noexcept {}
};

struct WINRT_EBO CanvasSvgTextElement :
    Microsoft::Graphics::Canvas::Svg::ICanvasSvgTextElement
{
    CanvasSvgTextElement(std::nullptr_t) noexcept {}
};

}
