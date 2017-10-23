﻿// C++/WinRT v1.0.170906.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Microsoft.Graphics.Canvas.Brushes.0.h"
#include "winrt/impl/Microsoft.Graphics.Canvas.Effects.0.h"
#include "winrt/impl/Microsoft.Graphics.Canvas.Geometry.0.h"
#include "winrt/impl/Microsoft.Graphics.Canvas.Svg.0.h"
#include "winrt/impl/Microsoft.Graphics.Canvas.Text.0.h"
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Graphics.DirectX.0.h"
#include "winrt/impl/Windows.Graphics.DirectX.Direct3D11.0.h"
#include "winrt/impl/Windows.Graphics.Imaging.0.h"
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.UI.0.h"
#include "winrt/impl/Windows.UI.Core.0.h"
#include "winrt/impl/Windows.UI.Input.Inking.0.h"
#include "winrt/impl/Windows.Graphics.Effects.0.h"
#include "winrt/impl/Windows.UI.Xaml.0.h"
#include "winrt/impl/Microsoft.Graphics.Canvas.0.h"

WINRT_EXPORT namespace winrt::Microsoft::Graphics::Canvas {

struct WINRT_EBO ICanvasActiveLayer :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICanvasActiveLayer>,
    impl::require<ICanvasActiveLayer, Windows::Foundation::IClosable>
{
    ICanvasActiveLayer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICanvasBitmap :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICanvasBitmap>,
    impl::require<ICanvasBitmap, Microsoft::Graphics::Canvas::ICanvasImage, Microsoft::Graphics::Canvas::ICanvasResourceCreator, Microsoft::Graphics::Canvas::ICanvasResourceCreatorWithDpi, Windows::Foundation::IClosable, Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface, Windows::Graphics::Effects::IGraphicsEffectSource>
{
    ICanvasBitmap(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICanvasBitmapFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICanvasBitmapFactory>
{
    ICanvasBitmapFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICanvasBitmapStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICanvasBitmapStatics>
{
    ICanvasBitmapStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICanvasCommandList :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICanvasCommandList>,
    impl::require<ICanvasCommandList, Microsoft::Graphics::Canvas::ICanvasImage, Windows::Foundation::IClosable, Windows::Graphics::Effects::IGraphicsEffectSource>
{
    ICanvasCommandList(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICanvasCommandListFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICanvasCommandListFactory>
{
    ICanvasCommandListFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICanvasDevice :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICanvasDevice>,
    impl::require<ICanvasDevice, Microsoft::Graphics::Canvas::ICanvasResourceCreator, Windows::Foundation::IClosable, Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice>
{
    ICanvasDevice(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICanvasDeviceFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICanvasDeviceFactory>
{
    ICanvasDeviceFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICanvasDeviceStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICanvasDeviceStatics>
{
    ICanvasDeviceStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICanvasDrawingSession :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICanvasDrawingSession>,
    impl::require<ICanvasDrawingSession, Microsoft::Graphics::Canvas::ICanvasResourceCreator, Microsoft::Graphics::Canvas::ICanvasResourceCreatorWithDpi, Windows::Foundation::IClosable>
{
    ICanvasDrawingSession(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICanvasImage :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICanvasImage>,
    impl::require<ICanvasImage, Windows::Foundation::IClosable, Windows::Graphics::Effects::IGraphicsEffectSource>
{
    ICanvasImage(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICanvasImageStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICanvasImageStatics>
{
    ICanvasImageStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICanvasLock :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICanvasLock>
{
    ICanvasLock(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICanvasRenderTarget :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICanvasRenderTarget>
{
    ICanvasRenderTarget(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICanvasRenderTargetFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICanvasRenderTargetFactory>
{
    ICanvasRenderTargetFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICanvasRenderTargetStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICanvasRenderTargetStatics>
{
    ICanvasRenderTargetStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICanvasResourceCreator :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICanvasResourceCreator>
{
    ICanvasResourceCreator(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICanvasResourceCreatorWithDpi :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICanvasResourceCreatorWithDpi>,
    impl::require<ICanvasResourceCreatorWithDpi, Microsoft::Graphics::Canvas::ICanvasResourceCreator>
{
    ICanvasResourceCreatorWithDpi(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICanvasSpriteBatch :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICanvasSpriteBatch>,
    impl::require<ICanvasSpriteBatch, Microsoft::Graphics::Canvas::ICanvasResourceCreator, Microsoft::Graphics::Canvas::ICanvasResourceCreatorWithDpi, Windows::Foundation::IClosable>
{
    ICanvasSpriteBatch(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICanvasSpriteBatchStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICanvasSpriteBatchStatics>
{
    ICanvasSpriteBatchStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICanvasSwapChain :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICanvasSwapChain>,
    impl::require<ICanvasSwapChain, Microsoft::Graphics::Canvas::ICanvasResourceCreator, Microsoft::Graphics::Canvas::ICanvasResourceCreatorWithDpi, Windows::Foundation::IClosable>
{
    ICanvasSwapChain(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICanvasSwapChainFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICanvasSwapChainFactory>
{
    ICanvasSwapChainFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICanvasSwapChainStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICanvasSwapChainStatics>
{
    ICanvasSwapChainStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICanvasVirtualBitmap :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICanvasVirtualBitmap>,
    impl::require<ICanvasVirtualBitmap, Microsoft::Graphics::Canvas::ICanvasImage, Windows::Foundation::IClosable, Windows::Graphics::Effects::IGraphicsEffectSource>
{
    ICanvasVirtualBitmap(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICanvasVirtualBitmapStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICanvasVirtualBitmapStatics>
{
    ICanvasVirtualBitmapStatics(std::nullptr_t = nullptr) noexcept {}
};

}
