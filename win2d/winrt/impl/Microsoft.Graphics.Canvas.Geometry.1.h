﻿// C++/WinRT v1.0.170906.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Microsoft.Graphics.Canvas.0.h"
#include "winrt/impl/Microsoft.Graphics.Canvas.Text.0.h"
#include "winrt/impl/Windows.UI.Input.Inking.0.h"
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Microsoft.Graphics.Canvas.Geometry.0.h"

WINRT_EXPORT namespace winrt::Microsoft::Graphics::Canvas::Geometry {

struct WINRT_EBO ICanvasCachedGeometry :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICanvasCachedGeometry>,
    impl::require<ICanvasCachedGeometry, Windows::Foundation::IClosable>
{
    ICanvasCachedGeometry(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICanvasCachedGeometryStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICanvasCachedGeometryStatics>
{
    ICanvasCachedGeometryStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICanvasGeometry :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICanvasGeometry>,
    impl::require<ICanvasGeometry, Windows::Foundation::IClosable>
{
    ICanvasGeometry(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICanvasGeometryStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICanvasGeometryStatics>
{
    ICanvasGeometryStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICanvasGradientMesh :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICanvasGradientMesh>,
    impl::require<ICanvasGradientMesh, Windows::Foundation::IClosable>
{
    ICanvasGradientMesh(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICanvasGradientMeshFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICanvasGradientMeshFactory>
{
    ICanvasGradientMeshFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICanvasGradientMeshStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICanvasGradientMeshStatics>
{
    ICanvasGradientMeshStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICanvasPathBuilder :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICanvasPathBuilder>,
    impl::require<ICanvasPathBuilder, Windows::Foundation::IClosable>
{
    ICanvasPathBuilder(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICanvasPathBuilderFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICanvasPathBuilderFactory>
{
    ICanvasPathBuilderFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICanvasPathReceiver :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICanvasPathReceiver>
{
    ICanvasPathReceiver(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICanvasStrokeStyle :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICanvasStrokeStyle>,
    impl::require<ICanvasStrokeStyle, Windows::Foundation::IClosable>
{
    ICanvasStrokeStyle(std::nullptr_t = nullptr) noexcept {}
};

}
