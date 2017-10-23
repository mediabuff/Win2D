// C++/WinRT v1.0.170906.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH

static_assert(winrt::impl::make_constexpr_string(CPPWINRT_VERSION) == "1.0.170906.1", "Mismatched component and base headers.");
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Microsoft.Graphics.Canvas.Brushes.2.h"
#include "winrt/impl/Microsoft.Graphics.Canvas.Effects.2.h"
#include "winrt/impl/Microsoft.Graphics.Canvas.Geometry.2.h"
#include "winrt/impl/Microsoft.Graphics.Canvas.Svg.2.h"
#include "winrt/impl/Microsoft.Graphics.Canvas.Text.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Graphics.DirectX.2.h"
#include "winrt/impl/Windows.Graphics.DirectX.Direct3D11.2.h"
#include "winrt/impl/Windows.Graphics.Imaging.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.UI.2.h"
#include "winrt/impl/Windows.UI.Core.2.h"
#include "winrt/impl/Windows.UI.Input.Inking.2.h"
#include "winrt/impl/Windows.Graphics.Effects.2.h"
#include "winrt/impl/Windows.UI.Xaml.2.h"
#include "winrt/impl/Microsoft.Graphics.Canvas.2.h"

namespace winrt::impl {

template <typename D> Windows::Graphics::Imaging::BitmapSize consume_Microsoft_Graphics_Canvas_ICanvasBitmap<D>::SizeInPixels() const
{
    Windows::Graphics::Imaging::BitmapSize size{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasBitmap)->get_SizeInPixels(put_abi(size)));
    return size;
}

template <typename D> Windows::Foundation::Size consume_Microsoft_Graphics_Canvas_ICanvasBitmap<D>::Size() const
{
    Windows::Foundation::Size size{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasBitmap)->get_Size(put_abi(size)));
    return size;
}

template <typename D> Windows::Foundation::Rect consume_Microsoft_Graphics_Canvas_ICanvasBitmap<D>::Bounds() const
{
    Windows::Foundation::Rect bounds{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasBitmap)->get_Bounds(put_abi(bounds)));
    return bounds;
}

template <typename D> Windows::Graphics::DirectX::DirectXPixelFormat consume_Microsoft_Graphics_Canvas_ICanvasBitmap<D>::Format() const
{
    Windows::Graphics::DirectX::DirectXPixelFormat value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasBitmap)->get_Format(put_abi(value)));
    return value;
}

template <typename D> Microsoft::Graphics::Canvas::CanvasAlphaMode consume_Microsoft_Graphics_Canvas_ICanvasBitmap<D>::AlphaMode() const
{
    Microsoft::Graphics::Canvas::CanvasAlphaMode value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasBitmap)->get_AlphaMode(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Microsoft_Graphics_Canvas_ICanvasBitmap<D>::SaveAsync(param::hstring const& fileName) const
{
    Windows::Foundation::IAsyncAction asyncAction{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasBitmap)->SaveToFileAsync(get_abi(fileName), put_abi(asyncAction)));
    return asyncAction;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Microsoft_Graphics_Canvas_ICanvasBitmap<D>::SaveAsync(param::hstring const& fileName, Microsoft::Graphics::Canvas::CanvasBitmapFileFormat const& fileFormat) const
{
    Windows::Foundation::IAsyncAction asyncAction{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasBitmap)->SaveToFileWithBitmapFileFormatAsync(get_abi(fileName), get_abi(fileFormat), put_abi(asyncAction)));
    return asyncAction;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Microsoft_Graphics_Canvas_ICanvasBitmap<D>::SaveAsync(param::hstring const& fileName, Microsoft::Graphics::Canvas::CanvasBitmapFileFormat const& fileFormat, float quality) const
{
    Windows::Foundation::IAsyncAction asyncAction{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasBitmap)->SaveToFileWithBitmapFileFormatAndQualityAsync(get_abi(fileName), get_abi(fileFormat), quality, put_abi(asyncAction)));
    return asyncAction;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Microsoft_Graphics_Canvas_ICanvasBitmap<D>::SaveAsync(Windows::Storage::Streams::IRandomAccessStream const& stream, Microsoft::Graphics::Canvas::CanvasBitmapFileFormat const& fileFormat) const
{
    Windows::Foundation::IAsyncAction asyncAction{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasBitmap)->SaveToStreamAsync(get_abi(stream), get_abi(fileFormat), put_abi(asyncAction)));
    return asyncAction;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Microsoft_Graphics_Canvas_ICanvasBitmap<D>::SaveAsync(Windows::Storage::Streams::IRandomAccessStream const& stream, Microsoft::Graphics::Canvas::CanvasBitmapFileFormat const& fileFormat, float quality) const
{
    Windows::Foundation::IAsyncAction asyncAction{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasBitmap)->SaveToStreamWithQualityAsync(get_abi(stream), get_abi(fileFormat), quality, put_abi(asyncAction)));
    return asyncAction;
}

template <typename D> com_array<uint8_t> consume_Microsoft_Graphics_Canvas_ICanvasBitmap<D>::GetPixelBytes() const
{
    com_array<uint8_t> valueElements;
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasBitmap)->GetPixelBytes(impl::put_size_abi(valueElements), put_abi(valueElements)));
    return valueElements;
}

template <typename D> com_array<uint8_t> consume_Microsoft_Graphics_Canvas_ICanvasBitmap<D>::GetPixelBytes(int32_t left, int32_t top, int32_t width, int32_t height) const
{
    com_array<uint8_t> valueElements;
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasBitmap)->GetPixelBytesWithSubrectangle(left, top, width, height, impl::put_size_abi(valueElements), put_abi(valueElements)));
    return valueElements;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasBitmap<D>::GetPixelBytes(Windows::Storage::Streams::IBuffer const& buffer) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasBitmap)->GetPixelBytesWithBuffer(get_abi(buffer)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasBitmap<D>::GetPixelBytes(Windows::Storage::Streams::IBuffer const& buffer, int32_t left, int32_t top, int32_t width, int32_t height) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasBitmap)->GetPixelBytesWithBufferAndSubrectangle(get_abi(buffer), left, top, width, height));
}

template <typename D> com_array<Windows::UI::Color> consume_Microsoft_Graphics_Canvas_ICanvasBitmap<D>::GetPixelColors() const
{
    com_array<Windows::UI::Color> valueElements;
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasBitmap)->GetPixelColors(impl::put_size_abi(valueElements), put_abi(valueElements)));
    return valueElements;
}

template <typename D> com_array<Windows::UI::Color> consume_Microsoft_Graphics_Canvas_ICanvasBitmap<D>::GetPixelColors(int32_t left, int32_t top, int32_t width, int32_t height) const
{
    com_array<Windows::UI::Color> valueElements;
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasBitmap)->GetPixelColorsWithSubrectangle(left, top, width, height, impl::put_size_abi(valueElements), put_abi(valueElements)));
    return valueElements;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasBitmap<D>::SetPixelBytes(array_view<uint8_t const> valueElements) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasBitmap)->SetPixelBytes(valueElements.size(), get_abi(valueElements)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasBitmap<D>::SetPixelBytes(array_view<uint8_t const> valueElements, int32_t left, int32_t top, int32_t width, int32_t height) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasBitmap)->SetPixelBytesWithSubrectangle(valueElements.size(), get_abi(valueElements), left, top, width, height));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasBitmap<D>::SetPixelBytes(Windows::Storage::Streams::IBuffer const& buffer) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasBitmap)->SetPixelBytesWithBuffer(get_abi(buffer)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasBitmap<D>::SetPixelBytes(Windows::Storage::Streams::IBuffer const& buffer, int32_t left, int32_t top, int32_t width, int32_t height) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasBitmap)->SetPixelBytesWithBufferAndSubrectangle(get_abi(buffer), left, top, width, height));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasBitmap<D>::SetPixelColors(array_view<Windows::UI::Color const> valueElements) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasBitmap)->SetPixelColors(valueElements.size(), get_abi(valueElements)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasBitmap<D>::SetPixelColors(array_view<Windows::UI::Color const> valueElements, int32_t left, int32_t top, int32_t width, int32_t height) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasBitmap)->SetPixelColorsWithSubrectangle(valueElements.size(), get_abi(valueElements), left, top, width, height));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasBitmap<D>::CopyPixelsFromBitmap(Microsoft::Graphics::Canvas::CanvasBitmap const& otherBitmap) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasBitmap)->CopyPixelsFromBitmap(get_abi(otherBitmap)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasBitmap<D>::CopyPixelsFromBitmap(Microsoft::Graphics::Canvas::CanvasBitmap const& otherBitmap, int32_t destX, int32_t destY) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasBitmap)->CopyPixelsFromBitmapWithDestPoint(get_abi(otherBitmap), destX, destY));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasBitmap<D>::CopyPixelsFromBitmap(Microsoft::Graphics::Canvas::CanvasBitmap const& otherBitmap, int32_t destX, int32_t destY, int32_t sourceRectLeft, int32_t sourceRectTop, int32_t sourceRectWidth, int32_t sourceRectHeight) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasBitmap)->CopyPixelsFromBitmapWithDestPointAndSourceRect(get_abi(otherBitmap), destX, destY, sourceRectLeft, sourceRectTop, sourceRectWidth, sourceRectHeight));
}

template <typename D> Microsoft::Graphics::Canvas::CanvasBitmap consume_Microsoft_Graphics_Canvas_ICanvasBitmapStatics<D>::CreateFromDirect3D11Surface(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const& surface) const
{
    Microsoft::Graphics::Canvas::CanvasBitmap bitmap{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasBitmapStatics)->CreateFromDirect3D11Surface(get_abi(resourceCreator), get_abi(surface), put_abi(bitmap)));
    return bitmap;
}

template <typename D> Microsoft::Graphics::Canvas::CanvasBitmap consume_Microsoft_Graphics_Canvas_ICanvasBitmapStatics<D>::CreateFromDirect3D11Surface(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const& surface, float dpi) const
{
    Microsoft::Graphics::Canvas::CanvasBitmap bitmap{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasBitmapStatics)->CreateFromDirect3D11SurfaceWithDpi(get_abi(resourceCreator), get_abi(surface), dpi, put_abi(bitmap)));
    return bitmap;
}

template <typename D> Microsoft::Graphics::Canvas::CanvasBitmap consume_Microsoft_Graphics_Canvas_ICanvasBitmapStatics<D>::CreateFromDirect3D11Surface(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const& surface, float dpi, Microsoft::Graphics::Canvas::CanvasAlphaMode const& alpha) const
{
    Microsoft::Graphics::Canvas::CanvasBitmap bitmap{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasBitmapStatics)->CreateFromDirect3D11SurfaceWithDpiAndAlpha(get_abi(resourceCreator), get_abi(surface), dpi, get_abi(alpha), put_abi(bitmap)));
    return bitmap;
}

template <typename D> Microsoft::Graphics::Canvas::CanvasBitmap consume_Microsoft_Graphics_Canvas_ICanvasBitmapStatics<D>::CreateFromBytes(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<uint8_t const> bytes, int32_t widthInPixels, int32_t heightInPixels, Windows::Graphics::DirectX::DirectXPixelFormat const& format) const
{
    Microsoft::Graphics::Canvas::CanvasBitmap bitmap{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasBitmapStatics)->CreateFromBytes(get_abi(resourceCreator), bytes.size(), get_abi(bytes), widthInPixels, heightInPixels, get_abi(format), put_abi(bitmap)));
    return bitmap;
}

template <typename D> Microsoft::Graphics::Canvas::CanvasBitmap consume_Microsoft_Graphics_Canvas_ICanvasBitmapStatics<D>::CreateFromBytes(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<uint8_t const> bytes, int32_t widthInPixels, int32_t heightInPixels, Windows::Graphics::DirectX::DirectXPixelFormat const& format, float dpi) const
{
    Microsoft::Graphics::Canvas::CanvasBitmap bitmap{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasBitmapStatics)->CreateFromBytesWithDpi(get_abi(resourceCreator), bytes.size(), get_abi(bytes), widthInPixels, heightInPixels, get_abi(format), dpi, put_abi(bitmap)));
    return bitmap;
}

template <typename D> Microsoft::Graphics::Canvas::CanvasBitmap consume_Microsoft_Graphics_Canvas_ICanvasBitmapStatics<D>::CreateFromBytes(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<uint8_t const> bytes, int32_t widthInPixels, int32_t heightInPixels, Windows::Graphics::DirectX::DirectXPixelFormat const& format, float dpi, Microsoft::Graphics::Canvas::CanvasAlphaMode const& alpha) const
{
    Microsoft::Graphics::Canvas::CanvasBitmap bitmap{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasBitmapStatics)->CreateFromBytesWithDpiAndAlpha(get_abi(resourceCreator), bytes.size(), get_abi(bytes), widthInPixels, heightInPixels, get_abi(format), dpi, get_abi(alpha), put_abi(bitmap)));
    return bitmap;
}

template <typename D> Microsoft::Graphics::Canvas::CanvasBitmap consume_Microsoft_Graphics_Canvas_ICanvasBitmapStatics<D>::CreateFromBytes(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Storage::Streams::IBuffer const& buffer, int32_t widthInPixels, int32_t heightInPixels, Windows::Graphics::DirectX::DirectXPixelFormat const& format) const
{
    Microsoft::Graphics::Canvas::CanvasBitmap bitmap{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasBitmapStatics)->CreateFromBytesWithBuffer(get_abi(resourceCreator), get_abi(buffer), widthInPixels, heightInPixels, get_abi(format), put_abi(bitmap)));
    return bitmap;
}

template <typename D> Microsoft::Graphics::Canvas::CanvasBitmap consume_Microsoft_Graphics_Canvas_ICanvasBitmapStatics<D>::CreateFromBytes(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Storage::Streams::IBuffer const& buffer, int32_t widthInPixels, int32_t heightInPixels, Windows::Graphics::DirectX::DirectXPixelFormat const& format, float dpi) const
{
    Microsoft::Graphics::Canvas::CanvasBitmap bitmap{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasBitmapStatics)->CreateFromBytesWithBufferAndDpi(get_abi(resourceCreator), get_abi(buffer), widthInPixels, heightInPixels, get_abi(format), dpi, put_abi(bitmap)));
    return bitmap;
}

template <typename D> Microsoft::Graphics::Canvas::CanvasBitmap consume_Microsoft_Graphics_Canvas_ICanvasBitmapStatics<D>::CreateFromBytes(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Storage::Streams::IBuffer const& buffer, int32_t widthInPixels, int32_t heightInPixels, Windows::Graphics::DirectX::DirectXPixelFormat const& format, float dpi, Microsoft::Graphics::Canvas::CanvasAlphaMode const& alpha) const
{
    Microsoft::Graphics::Canvas::CanvasBitmap bitmap{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasBitmapStatics)->CreateFromBytesWithBufferAndDpiAndAlpha(get_abi(resourceCreator), get_abi(buffer), widthInPixels, heightInPixels, get_abi(format), dpi, get_abi(alpha), put_abi(bitmap)));
    return bitmap;
}

template <typename D> Microsoft::Graphics::Canvas::CanvasBitmap consume_Microsoft_Graphics_Canvas_ICanvasBitmapStatics<D>::CreateFromColors(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<Windows::UI::Color const> colors, int32_t widthInPixels, int32_t heightInPixels) const
{
    Microsoft::Graphics::Canvas::CanvasBitmap bitmap{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasBitmapStatics)->CreateFromColors(get_abi(resourceCreator), colors.size(), get_abi(colors), widthInPixels, heightInPixels, put_abi(bitmap)));
    return bitmap;
}

template <typename D> Microsoft::Graphics::Canvas::CanvasBitmap consume_Microsoft_Graphics_Canvas_ICanvasBitmapStatics<D>::CreateFromColors(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<Windows::UI::Color const> colors, int32_t widthInPixels, int32_t heightInPixels, float dpi) const
{
    Microsoft::Graphics::Canvas::CanvasBitmap bitmap{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasBitmapStatics)->CreateFromColorsWithDpi(get_abi(resourceCreator), colors.size(), get_abi(colors), widthInPixels, heightInPixels, dpi, put_abi(bitmap)));
    return bitmap;
}

template <typename D> Microsoft::Graphics::Canvas::CanvasBitmap consume_Microsoft_Graphics_Canvas_ICanvasBitmapStatics<D>::CreateFromColors(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<Windows::UI::Color const> colors, int32_t widthInPixels, int32_t heightInPixels, float dpi, Microsoft::Graphics::Canvas::CanvasAlphaMode const& alpha) const
{
    Microsoft::Graphics::Canvas::CanvasBitmap bitmap{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasBitmapStatics)->CreateFromColorsWithDpiAndAlpha(get_abi(resourceCreator), colors.size(), get_abi(colors), widthInPixels, heightInPixels, dpi, get_abi(alpha), put_abi(bitmap)));
    return bitmap;
}

template <typename D> Microsoft::Graphics::Canvas::CanvasBitmap consume_Microsoft_Graphics_Canvas_ICanvasBitmapStatics<D>::CreateFromSoftwareBitmap(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Graphics::Imaging::SoftwareBitmap const& sourceBitmap) const
{
    Microsoft::Graphics::Canvas::CanvasBitmap bitmap{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasBitmapStatics)->CreateFromSoftwareBitmap(get_abi(resourceCreator), get_abi(sourceBitmap), put_abi(bitmap)));
    return bitmap;
}

template <typename D> Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::CanvasBitmap> consume_Microsoft_Graphics_Canvas_ICanvasBitmapStatics<D>::LoadAsync(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, param::hstring const& fileName) const
{
    Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::CanvasBitmap> canvasBitmap{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasBitmapStatics)->LoadAsyncFromHstring(get_abi(resourceCreator), get_abi(fileName), put_abi(canvasBitmap)));
    return canvasBitmap;
}

template <typename D> Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::CanvasBitmap> consume_Microsoft_Graphics_Canvas_ICanvasBitmapStatics<D>::LoadAsync(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, param::hstring const& fileName, float dpi) const
{
    Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::CanvasBitmap> canvasBitmap{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasBitmapStatics)->LoadAsyncFromHstringWithDpi(get_abi(resourceCreator), get_abi(fileName), dpi, put_abi(canvasBitmap)));
    return canvasBitmap;
}

template <typename D> Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::CanvasBitmap> consume_Microsoft_Graphics_Canvas_ICanvasBitmapStatics<D>::LoadAsync(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, param::hstring const& fileName, float dpi, Microsoft::Graphics::Canvas::CanvasAlphaMode const& alpha) const
{
    Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::CanvasBitmap> canvasBitmap{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasBitmapStatics)->LoadAsyncFromHstringWithDpiAndAlpha(get_abi(resourceCreator), get_abi(fileName), dpi, get_abi(alpha), put_abi(canvasBitmap)));
    return canvasBitmap;
}

template <typename D> Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::CanvasBitmap> consume_Microsoft_Graphics_Canvas_ICanvasBitmapStatics<D>::LoadAsync(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Foundation::Uri const& uri) const
{
    Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::CanvasBitmap> canvasBitmap{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasBitmapStatics)->LoadAsyncFromUri(get_abi(resourceCreator), get_abi(uri), put_abi(canvasBitmap)));
    return canvasBitmap;
}

template <typename D> Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::CanvasBitmap> consume_Microsoft_Graphics_Canvas_ICanvasBitmapStatics<D>::LoadAsync(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Foundation::Uri const& uri, float dpi) const
{
    Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::CanvasBitmap> canvasBitmap{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasBitmapStatics)->LoadAsyncFromUriWithDpi(get_abi(resourceCreator), get_abi(uri), dpi, put_abi(canvasBitmap)));
    return canvasBitmap;
}

template <typename D> Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::CanvasBitmap> consume_Microsoft_Graphics_Canvas_ICanvasBitmapStatics<D>::LoadAsync(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Foundation::Uri const& uri, float dpi, Microsoft::Graphics::Canvas::CanvasAlphaMode const& alpha) const
{
    Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::CanvasBitmap> canvasBitmap{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasBitmapStatics)->LoadAsyncFromUriWithDpiAndAlpha(get_abi(resourceCreator), get_abi(uri), dpi, get_abi(alpha), put_abi(canvasBitmap)));
    return canvasBitmap;
}

template <typename D> Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::CanvasBitmap> consume_Microsoft_Graphics_Canvas_ICanvasBitmapStatics<D>::LoadAsync(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Storage::Streams::IRandomAccessStream const& stream) const
{
    Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::CanvasBitmap> canvasBitmap{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasBitmapStatics)->LoadAsyncFromStream(get_abi(resourceCreator), get_abi(stream), put_abi(canvasBitmap)));
    return canvasBitmap;
}

template <typename D> Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::CanvasBitmap> consume_Microsoft_Graphics_Canvas_ICanvasBitmapStatics<D>::LoadAsync(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Storage::Streams::IRandomAccessStream const& stream, float dpi) const
{
    Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::CanvasBitmap> canvasBitmap{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasBitmapStatics)->LoadAsyncFromStreamWithDpi(get_abi(resourceCreator), get_abi(stream), dpi, put_abi(canvasBitmap)));
    return canvasBitmap;
}

template <typename D> Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::CanvasBitmap> consume_Microsoft_Graphics_Canvas_ICanvasBitmapStatics<D>::LoadAsync(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Storage::Streams::IRandomAccessStream const& stream, float dpi, Microsoft::Graphics::Canvas::CanvasAlphaMode const& alpha) const
{
    Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::CanvasBitmap> canvasBitmap{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasBitmapStatics)->LoadAsyncFromStreamWithDpiAndAlpha(get_abi(resourceCreator), get_abi(stream), dpi, get_abi(alpha), put_abi(canvasBitmap)));
    return canvasBitmap;
}

template <typename D> Microsoft::Graphics::Canvas::CanvasDrawingSession consume_Microsoft_Graphics_Canvas_ICanvasCommandList<D>::CreateDrawingSession() const
{
    Microsoft::Graphics::Canvas::CanvasDrawingSession drawingSession{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasCommandList)->CreateDrawingSession(put_abi(drawingSession)));
    return drawingSession;
}

template <typename D> Microsoft::Graphics::Canvas::CanvasDevice consume_Microsoft_Graphics_Canvas_ICanvasCommandList<D>::Device() const
{
    Microsoft::Graphics::Canvas::CanvasDevice value{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasCommandList)->get_Device(put_abi(value)));
    return value;
}

template <typename D> Microsoft::Graphics::Canvas::CanvasCommandList consume_Microsoft_Graphics_Canvas_ICanvasCommandListFactory<D>::Create(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator) const
{
    Microsoft::Graphics::Canvas::CanvasCommandList commandList{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasCommandListFactory)->Create(get_abi(resourceCreator), put_abi(commandList)));
    return commandList;
}

template <typename D> bool consume_Microsoft_Graphics_Canvas_ICanvasDevice<D>::ForceSoftwareRenderer() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDevice)->get_ForceSoftwareRenderer(&value));
    return value;
}

template <typename D> int32_t consume_Microsoft_Graphics_Canvas_ICanvasDevice<D>::MaximumBitmapSizeInPixels() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDevice)->get_MaximumBitmapSizeInPixels(&value));
    return value;
}

template <typename D> bool consume_Microsoft_Graphics_Canvas_ICanvasDevice<D>::IsPixelFormatSupported(Windows::Graphics::DirectX::DirectXPixelFormat const& pixelFormat) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDevice)->IsPixelFormatSupported(get_abi(pixelFormat), &value));
    return value;
}

template <typename D> bool consume_Microsoft_Graphics_Canvas_ICanvasDevice<D>::IsBufferPrecisionSupported(Microsoft::Graphics::Canvas::CanvasBufferPrecision const& bufferPrecision) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDevice)->IsBufferPrecisionSupported(get_abi(bufferPrecision), &value));
    return value;
}

template <typename D> uint64_t consume_Microsoft_Graphics_Canvas_ICanvasDevice<D>::MaximumCacheSize() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDevice)->get_MaximumCacheSize(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDevice<D>::MaximumCacheSize(uint64_t value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDevice)->put_MaximumCacheSize(value));
}

template <typename D> bool consume_Microsoft_Graphics_Canvas_ICanvasDevice<D>::LowPriority() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDevice)->get_LowPriority(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDevice<D>::LowPriority(bool value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDevice)->put_LowPriority(value));
}

template <typename D> event_token consume_Microsoft_Graphics_Canvas_ICanvasDevice<D>::DeviceLost(Windows::Foundation::TypedEventHandler<Microsoft::Graphics::Canvas::CanvasDevice, Windows::Foundation::IInspectable> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDevice)->add_DeviceLost(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Microsoft::Graphics::Canvas::ICanvasDevice> consume_Microsoft_Graphics_Canvas_ICanvasDevice<D>::DeviceLost(auto_revoke_t, Windows::Foundation::TypedEventHandler<Microsoft::Graphics::Canvas::CanvasDevice, Windows::Foundation::IInspectable> const& value) const
{
    return impl::make_event_revoker<D, Microsoft::Graphics::Canvas::ICanvasDevice>(this, &abi_t<Microsoft::Graphics::Canvas::ICanvasDevice>::remove_DeviceLost, DeviceLost(value));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDevice<D>::DeviceLost(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDevice)->remove_DeviceLost(get_abi(token)));
}

template <typename D> bool consume_Microsoft_Graphics_Canvas_ICanvasDevice<D>::IsDeviceLost(int32_t hresult) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDevice)->IsDeviceLost(hresult, &value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDevice<D>::RaiseDeviceLost() const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDevice)->RaiseDeviceLost());
}

template <typename D> Microsoft::Graphics::Canvas::CanvasLock consume_Microsoft_Graphics_Canvas_ICanvasDevice<D>::Lock() const
{
    Microsoft::Graphics::Canvas::CanvasLock lock{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDevice)->Lock(put_abi(lock)));
    return lock;
}

template <typename D> Microsoft::Graphics::Canvas::CanvasDevice consume_Microsoft_Graphics_Canvas_ICanvasDeviceFactory<D>::CreateWithForceSoftwareRendererOption(bool forceSoftwareRenderer) const
{
    Microsoft::Graphics::Canvas::CanvasDevice canvasDevice{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDeviceFactory)->CreateWithForceSoftwareRendererOption(forceSoftwareRenderer, put_abi(canvasDevice)));
    return canvasDevice;
}

template <typename D> Microsoft::Graphics::Canvas::CanvasDevice consume_Microsoft_Graphics_Canvas_ICanvasDeviceStatics<D>::CreateFromDirect3D11Device(Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice const& direct3DDevice) const
{
    Microsoft::Graphics::Canvas::CanvasDevice canvasDevice{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDeviceStatics)->CreateFromDirect3D11Device(get_abi(direct3DDevice), put_abi(canvasDevice)));
    return canvasDevice;
}

template <typename D> Microsoft::Graphics::Canvas::CanvasDevice consume_Microsoft_Graphics_Canvas_ICanvasDeviceStatics<D>::GetSharedDevice() const
{
    Microsoft::Graphics::Canvas::CanvasDevice canvasDevice{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDeviceStatics)->GetSharedDevice(put_abi(canvasDevice)));
    return canvasDevice;
}

template <typename D> Microsoft::Graphics::Canvas::CanvasDevice consume_Microsoft_Graphics_Canvas_ICanvasDeviceStatics<D>::GetSharedDevice(bool forceSoftwareRenderer) const
{
    Microsoft::Graphics::Canvas::CanvasDevice canvasDevice{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDeviceStatics)->GetSharedDeviceWithForceSoftwareRenderer(forceSoftwareRenderer, put_abi(canvasDevice)));
    return canvasDevice;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDeviceStatics<D>::DebugLevel(Microsoft::Graphics::Canvas::CanvasDebugLevel const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDeviceStatics)->put_DebugLevel(get_abi(value)));
}

template <typename D> Microsoft::Graphics::Canvas::CanvasDebugLevel consume_Microsoft_Graphics_Canvas_ICanvasDeviceStatics<D>::DebugLevel() const
{
    Microsoft::Graphics::Canvas::CanvasDebugLevel value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDeviceStatics)->get_DebugLevel(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::Clear(Windows::UI::Color const& color) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->Clear(get_abi(color)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::Clear(Windows::Foundation::Numerics::float4 const& color) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->ClearHdr(get_abi(color)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::Flush() const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->Flush());
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawImage(Microsoft::Graphics::Canvas::ICanvasImage const& image) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawImageAtOrigin(get_abi(image)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawImage(Microsoft::Graphics::Canvas::ICanvasImage const& image, Windows::Foundation::Numerics::float2 const& offset) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawImageAtOffset(get_abi(image), get_abi(offset)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawImage(Microsoft::Graphics::Canvas::ICanvasImage const& image, float x, float y) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawImageAtCoords(get_abi(image), x, y));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawImage(Microsoft::Graphics::Canvas::CanvasBitmap const& bitmap, Windows::Foundation::Rect const& destinationRectangle) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawImageToRect(get_abi(bitmap), get_abi(destinationRectangle)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawImage(Microsoft::Graphics::Canvas::ICanvasImage const& image, Windows::Foundation::Numerics::float2 const& offset, Windows::Foundation::Rect const& sourceRectangle) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawImageAtOffsetWithSourceRect(get_abi(image), get_abi(offset), get_abi(sourceRectangle)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawImage(Microsoft::Graphics::Canvas::ICanvasImage const& image, float x, float y, Windows::Foundation::Rect const& sourceRectangle) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawImageAtCoordsWithSourceRect(get_abi(image), x, y, get_abi(sourceRectangle)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawImage(Microsoft::Graphics::Canvas::ICanvasImage const& image, Windows::Foundation::Rect const& destinationRectangle, Windows::Foundation::Rect const& sourceRectangle) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawImageToRectWithSourceRect(get_abi(image), get_abi(destinationRectangle), get_abi(sourceRectangle)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawImage(Microsoft::Graphics::Canvas::ICanvasImage const& image, Windows::Foundation::Numerics::float2 const& offset, Windows::Foundation::Rect const& sourceRectangle, float opacity) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawImageAtOffsetWithSourceRectAndOpacity(get_abi(image), get_abi(offset), get_abi(sourceRectangle), opacity));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawImage(Microsoft::Graphics::Canvas::ICanvasImage const& image, float x, float y, Windows::Foundation::Rect const& sourceRectangle, float opacity) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawImageAtCoordsWithSourceRectAndOpacity(get_abi(image), x, y, get_abi(sourceRectangle), opacity));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawImage(Microsoft::Graphics::Canvas::ICanvasImage const& image, Windows::Foundation::Rect const& destinationRectangle, Windows::Foundation::Rect const& sourceRectangle, float opacity) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawImageToRectWithSourceRectAndOpacity(get_abi(image), get_abi(destinationRectangle), get_abi(sourceRectangle), opacity));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawImage(Microsoft::Graphics::Canvas::ICanvasImage const& image, Windows::Foundation::Numerics::float2 const& offset, Windows::Foundation::Rect const& sourceRectangle, float opacity, Microsoft::Graphics::Canvas::CanvasImageInterpolation const& interpolation) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawImageAtOffsetWithSourceRectAndOpacityAndInterpolation(get_abi(image), get_abi(offset), get_abi(sourceRectangle), opacity, get_abi(interpolation)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawImage(Microsoft::Graphics::Canvas::ICanvasImage const& image, float x, float y, Windows::Foundation::Rect const& sourceRectangle, float opacity, Microsoft::Graphics::Canvas::CanvasImageInterpolation const& interpolation) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawImageAtCoordsWithSourceRectAndOpacityAndInterpolation(get_abi(image), x, y, get_abi(sourceRectangle), opacity, get_abi(interpolation)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawImage(Microsoft::Graphics::Canvas::ICanvasImage const& image, Windows::Foundation::Rect const& destinationRectangle, Windows::Foundation::Rect const& sourceRectangle, float opacity, Microsoft::Graphics::Canvas::CanvasImageInterpolation const& interpolation) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawImageToRectWithSourceRectAndOpacityAndInterpolation(get_abi(image), get_abi(destinationRectangle), get_abi(sourceRectangle), opacity, get_abi(interpolation)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawImage(Microsoft::Graphics::Canvas::ICanvasImage const& image, Windows::Foundation::Numerics::float2 const& offset, Windows::Foundation::Rect const& sourceRectangle, float opacity, Microsoft::Graphics::Canvas::CanvasImageInterpolation const& interpolation, Microsoft::Graphics::Canvas::CanvasComposite const& composite) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawImageAtOffsetWithSourceRectAndOpacityAndInterpolationAndComposite(get_abi(image), get_abi(offset), get_abi(sourceRectangle), opacity, get_abi(interpolation), get_abi(composite)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawImage(Microsoft::Graphics::Canvas::ICanvasImage const& image, float x, float y, Windows::Foundation::Rect const& sourceRectangle, float opacity, Microsoft::Graphics::Canvas::CanvasImageInterpolation const& interpolation, Microsoft::Graphics::Canvas::CanvasComposite const& composite) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawImageAtCoordsWithSourceRectAndOpacityAndInterpolationAndComposite(get_abi(image), x, y, get_abi(sourceRectangle), opacity, get_abi(interpolation), get_abi(composite)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawImage(Microsoft::Graphics::Canvas::ICanvasImage const& image, Windows::Foundation::Rect const& destinationRectangle, Windows::Foundation::Rect const& sourceRectangle, float opacity, Microsoft::Graphics::Canvas::CanvasImageInterpolation const& interpolation, Microsoft::Graphics::Canvas::CanvasComposite const& composite) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawImageToRectWithSourceRectAndOpacityAndInterpolationAndComposite(get_abi(image), get_abi(destinationRectangle), get_abi(sourceRectangle), opacity, get_abi(interpolation), get_abi(composite)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawImage(Microsoft::Graphics::Canvas::CanvasBitmap const& bitmap, Windows::Foundation::Numerics::float2 const& offset, Windows::Foundation::Rect const& sourceRectangle, float opacity, Microsoft::Graphics::Canvas::CanvasImageInterpolation const& interpolation, Windows::Foundation::Numerics::float4x4 const& perspective) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawImageAtOffsetWithSourceRectAndOpacityAndInterpolationAndPerspective(get_abi(bitmap), get_abi(offset), get_abi(sourceRectangle), opacity, get_abi(interpolation), get_abi(perspective)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawImage(Microsoft::Graphics::Canvas::CanvasBitmap const& bitmap, float x, float y, Windows::Foundation::Rect const& sourceRectangle, float opacity, Microsoft::Graphics::Canvas::CanvasImageInterpolation const& interpolation, Windows::Foundation::Numerics::float4x4 const& perspective) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawImageAtCoordsWithSourceRectAndOpacityAndInterpolationAndPerspective(get_abi(bitmap), x, y, get_abi(sourceRectangle), opacity, get_abi(interpolation), get_abi(perspective)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawImage(Microsoft::Graphics::Canvas::CanvasBitmap const& bitmap, Windows::Foundation::Rect const& destinationRectangle, Windows::Foundation::Rect const& sourceRectangle, float opacity, Microsoft::Graphics::Canvas::CanvasImageInterpolation const& interpolation, Windows::Foundation::Numerics::float4x4 const& perspective) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawImageToRectWithSourceRectAndOpacityAndInterpolationAndPerspective(get_abi(bitmap), get_abi(destinationRectangle), get_abi(sourceRectangle), opacity, get_abi(interpolation), get_abi(perspective)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawLine(Windows::Foundation::Numerics::float2 const& point0, Windows::Foundation::Numerics::float2 const& point1, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawLineWithBrush(get_abi(point0), get_abi(point1), get_abi(brush)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawLine(float x0, float y0, float x1, float y1, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawLineAtCoordsWithBrush(x0, y0, x1, y1, get_abi(brush)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawLine(Windows::Foundation::Numerics::float2 const& point0, Windows::Foundation::Numerics::float2 const& point1, Windows::UI::Color const& color) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawLineWithColor(get_abi(point0), get_abi(point1), get_abi(color)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawLine(float x0, float y0, float x1, float y1, Windows::UI::Color const& color) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawLineAtCoordsWithColor(x0, y0, x1, y1, get_abi(color)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawLine(Windows::Foundation::Numerics::float2 const& point0, Windows::Foundation::Numerics::float2 const& point1, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush, float strokeWidth) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawLineWithBrushAndStrokeWidth(get_abi(point0), get_abi(point1), get_abi(brush), strokeWidth));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawLine(float x0, float y0, float x1, float y1, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush, float strokeWidth) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawLineAtCoordsWithBrushAndStrokeWidth(x0, y0, x1, y1, get_abi(brush), strokeWidth));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawLine(Windows::Foundation::Numerics::float2 const& point0, Windows::Foundation::Numerics::float2 const& point1, Windows::UI::Color const& color, float strokeWidth) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawLineWithColorAndStrokeWidth(get_abi(point0), get_abi(point1), get_abi(color), strokeWidth));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawLine(float x0, float y0, float x1, float y1, Windows::UI::Color const& color, float strokeWidth) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawLineAtCoordsWithColorAndStrokeWidth(x0, y0, x1, y1, get_abi(color), strokeWidth));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawLine(Windows::Foundation::Numerics::float2 const& point0, Windows::Foundation::Numerics::float2 const& point1, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush, float strokeWidth, Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const& strokeStyle) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawLineWithBrushAndStrokeWidthAndStrokeStyle(get_abi(point0), get_abi(point1), get_abi(brush), strokeWidth, get_abi(strokeStyle)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawLine(float x0, float y0, float x1, float y1, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush, float strokeWidth, Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const& strokeStyle) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawLineAtCoordsWithBrushAndStrokeWidthAndStrokeStyle(x0, y0, x1, y1, get_abi(brush), strokeWidth, get_abi(strokeStyle)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawLine(Windows::Foundation::Numerics::float2 const& point0, Windows::Foundation::Numerics::float2 const& point1, Windows::UI::Color const& color, float strokeWidth, Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const& strokeStyle) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawLineWithColorAndStrokeWidthAndStrokeStyle(get_abi(point0), get_abi(point1), get_abi(color), strokeWidth, get_abi(strokeStyle)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawLine(float x0, float y0, float x1, float y1, Windows::UI::Color const& color, float strokeWidth, Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const& strokeStyle) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawLineAtCoordsWithColorAndStrokeWidthAndStrokeStyle(x0, y0, x1, y1, get_abi(color), strokeWidth, get_abi(strokeStyle)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawRectangle(Windows::Foundation::Rect const& rect, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawRectangleWithBrush(get_abi(rect), get_abi(brush)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawRectangle(float x, float y, float w, float h, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawRectangleAtCoordsWithBrush(x, y, w, h, get_abi(brush)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawRectangle(Windows::Foundation::Rect const& rect, Windows::UI::Color const& color) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawRectangleWithColor(get_abi(rect), get_abi(color)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawRectangle(float x, float y, float w, float h, Windows::UI::Color const& color) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawRectangleAtCoordsWithColor(x, y, w, h, get_abi(color)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawRectangle(Windows::Foundation::Rect const& rect, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush, float strokeWidth) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawRectangleWithBrushAndStrokeWidth(get_abi(rect), get_abi(brush), strokeWidth));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawRectangle(float x, float y, float w, float h, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush, float strokeWidth) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawRectangleAtCoordsWithBrushAndStrokeWidth(x, y, w, h, get_abi(brush), strokeWidth));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawRectangle(Windows::Foundation::Rect const& rect, Windows::UI::Color const& color, float strokeWidth) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawRectangleWithColorAndStrokeWidth(get_abi(rect), get_abi(color), strokeWidth));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawRectangle(float x, float y, float w, float h, Windows::UI::Color const& color, float strokeWidth) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawRectangleAtCoordsWithColorAndStrokeWidth(x, y, w, h, get_abi(color), strokeWidth));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawRectangle(Windows::Foundation::Rect const& rect, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush, float strokeWidth, Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const& strokeStyle) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawRectangleWithBrushAndStrokeWidthAndStrokeStyle(get_abi(rect), get_abi(brush), strokeWidth, get_abi(strokeStyle)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawRectangle(float x, float y, float w, float h, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush, float strokeWidth, Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const& strokeStyle) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawRectangleAtCoordsWithBrushAndStrokeWidthAndStrokeStyle(x, y, w, h, get_abi(brush), strokeWidth, get_abi(strokeStyle)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawRectangle(Windows::Foundation::Rect const& rect, Windows::UI::Color const& color, float strokeWidth, Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const& strokeStyle) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawRectangleWithColorAndStrokeWidthAndStrokeStyle(get_abi(rect), get_abi(color), strokeWidth, get_abi(strokeStyle)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawRectangle(float x, float y, float w, float h, Windows::UI::Color const& color, float strokeWidth, Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const& strokeStyle) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawRectangleAtCoordsWithColorAndStrokeWidthAndStrokeStyle(x, y, w, h, get_abi(color), strokeWidth, get_abi(strokeStyle)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::FillRectangle(Windows::Foundation::Rect const& rect, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->FillRectangleWithBrush(get_abi(rect), get_abi(brush)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::FillRectangle(float x, float y, float w, float h, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->FillRectangleAtCoordsWithBrush(x, y, w, h, get_abi(brush)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::FillRectangle(Windows::Foundation::Rect const& rect, Windows::UI::Color const& color) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->FillRectangleWithColor(get_abi(rect), get_abi(color)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::FillRectangle(float x, float y, float w, float h, Windows::UI::Color const& color) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->FillRectangleAtCoordsWithColor(x, y, w, h, get_abi(color)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::FillRectangle(Windows::Foundation::Rect const& rect, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& opacityBrush) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->FillRectangleWithBrushAndOpacityBrush(get_abi(rect), get_abi(brush), get_abi(opacityBrush)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::FillRectangle(float x, float y, float w, float h, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& opacityBrush) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->FillRectangleAtCoordsWithBrushAndOpacityBrush(x, y, w, h, get_abi(brush), get_abi(opacityBrush)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawRoundedRectangle(Windows::Foundation::Rect const& rect, float radiusX, float radiusY, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawRoundedRectangleWithBrush(get_abi(rect), radiusX, radiusY, get_abi(brush)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawRoundedRectangle(float x, float y, float w, float h, float radiusX, float radiusY, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawRoundedRectangleAtCoordsWithBrush(x, y, w, h, radiusX, radiusY, get_abi(brush)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawRoundedRectangle(Windows::Foundation::Rect const& rect, float radiusX, float radiusY, Windows::UI::Color const& color) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawRoundedRectangleWithColor(get_abi(rect), radiusX, radiusY, get_abi(color)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawRoundedRectangle(float x, float y, float w, float h, float radiusX, float radiusY, Windows::UI::Color const& color) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawRoundedRectangleAtCoordsWithColor(x, y, w, h, radiusX, radiusY, get_abi(color)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawRoundedRectangle(Windows::Foundation::Rect const& rect, float radiusX, float radiusY, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush, float strokeWidth) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawRoundedRectangleWithBrushAndStrokeWidth(get_abi(rect), radiusX, radiusY, get_abi(brush), strokeWidth));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawRoundedRectangle(float x, float y, float w, float h, float radiusX, float radiusY, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush, float strokeWidth) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawRoundedRectangleAtCoordsWithBrushAndStrokeWidth(x, y, w, h, radiusX, radiusY, get_abi(brush), strokeWidth));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawRoundedRectangle(Windows::Foundation::Rect const& rect, float radiusX, float radiusY, Windows::UI::Color const& color, float strokeWidth) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawRoundedRectangleWithColorAndStrokeWidth(get_abi(rect), radiusX, radiusY, get_abi(color), strokeWidth));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawRoundedRectangle(float x, float y, float w, float h, float radiusX, float radiusY, Windows::UI::Color const& color, float strokeWidth) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawRoundedRectangleAtCoordsWithColorAndStrokeWidth(x, y, w, h, radiusX, radiusY, get_abi(color), strokeWidth));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawRoundedRectangle(Windows::Foundation::Rect const& rect, float radiusX, float radiusY, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush, float strokeWidth, Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const& strokeStyle) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawRoundedRectangleWithBrushAndStrokeWidthAndStrokeStyle(get_abi(rect), radiusX, radiusY, get_abi(brush), strokeWidth, get_abi(strokeStyle)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawRoundedRectangle(float x, float y, float w, float h, float radiusX, float radiusY, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush, float strokeWidth, Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const& strokeStyle) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawRoundedRectangleAtCoordsWithBrushAndStrokeWidthAndStrokeStyle(x, y, w, h, radiusX, radiusY, get_abi(brush), strokeWidth, get_abi(strokeStyle)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawRoundedRectangle(Windows::Foundation::Rect const& rect, float radiusX, float radiusY, Windows::UI::Color const& color, float strokeWidth, Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const& strokeStyle) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawRoundedRectangleWithColorAndStrokeWidthAndStrokeStyle(get_abi(rect), radiusX, radiusY, get_abi(color), strokeWidth, get_abi(strokeStyle)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawRoundedRectangle(float x, float y, float w, float h, float radiusX, float radiusY, Windows::UI::Color const& color, float strokeWidth, Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const& strokeStyle) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawRoundedRectangleAtCoordsWithColorAndStrokeWidthAndStrokeStyle(x, y, w, h, radiusX, radiusY, get_abi(color), strokeWidth, get_abi(strokeStyle)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::FillRoundedRectangle(Windows::Foundation::Rect const& rect, float radiusX, float radiusY, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->FillRoundedRectangleWithBrush(get_abi(rect), radiusX, radiusY, get_abi(brush)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::FillRoundedRectangle(float x, float y, float w, float h, float radiusX, float radiusY, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->FillRoundedRectangleAtCoordsWithBrush(x, y, w, h, radiusX, radiusY, get_abi(brush)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::FillRoundedRectangle(Windows::Foundation::Rect const& rect, float radiusX, float radiusY, Windows::UI::Color const& color) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->FillRoundedRectangleWithColor(get_abi(rect), radiusX, radiusY, get_abi(color)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::FillRoundedRectangle(float x, float y, float w, float h, float radiusX, float radiusY, Windows::UI::Color const& color) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->FillRoundedRectangleAtCoordsWithColor(x, y, w, h, radiusX, radiusY, get_abi(color)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawEllipse(Windows::Foundation::Numerics::float2 const& centerPoint, float radiusX, float radiusY, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawEllipseWithBrush(get_abi(centerPoint), radiusX, radiusY, get_abi(brush)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawEllipse(float x, float y, float radiusX, float radiusY, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawEllipseAtCoordsWithBrush(x, y, radiusX, radiusY, get_abi(brush)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawEllipse(Windows::Foundation::Numerics::float2 const& centerPoint, float radiusX, float radiusY, Windows::UI::Color const& color) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawEllipseWithColor(get_abi(centerPoint), radiusX, radiusY, get_abi(color)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawEllipse(float x, float y, float radiusX, float radiusY, Windows::UI::Color const& color) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawEllipseAtCoordsWithColor(x, y, radiusX, radiusY, get_abi(color)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawEllipse(Windows::Foundation::Numerics::float2 const& centerPoint, float radiusX, float radiusY, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush, float strokeWidth) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawEllipseWithBrushAndStrokeWidth(get_abi(centerPoint), radiusX, radiusY, get_abi(brush), strokeWidth));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawEllipse(float x, float y, float radiusX, float radiusY, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush, float strokeWidth) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawEllipseAtCoordsWithBrushAndStrokeWidth(x, y, radiusX, radiusY, get_abi(brush), strokeWidth));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawEllipse(Windows::Foundation::Numerics::float2 const& centerPoint, float radiusX, float radiusY, Windows::UI::Color const& color, float strokeWidth) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawEllipseWithColorAndStrokeWidth(get_abi(centerPoint), radiusX, radiusY, get_abi(color), strokeWidth));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawEllipse(float x, float y, float radiusX, float radiusY, Windows::UI::Color const& color, float strokeWidth) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawEllipseAtCoordsWithColorAndStrokeWidth(x, y, radiusX, radiusY, get_abi(color), strokeWidth));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawEllipse(Windows::Foundation::Numerics::float2 const& centerPoint, float radiusX, float radiusY, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush, float strokeWidth, Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const& strokeStyle) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawEllipseWithBrushAndStrokeWidthAndStrokeStyle(get_abi(centerPoint), radiusX, radiusY, get_abi(brush), strokeWidth, get_abi(strokeStyle)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawEllipse(float x, float y, float radiusX, float radiusY, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush, float strokeWidth, Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const& strokeStyle) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawEllipseAtCoordsWithBrushAndStrokeWidthAndStrokeStyle(x, y, radiusX, radiusY, get_abi(brush), strokeWidth, get_abi(strokeStyle)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawEllipse(Windows::Foundation::Numerics::float2 const& centerPoint, float radiusX, float radiusY, Windows::UI::Color const& color, float strokeWidth, Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const& strokeStyle) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawEllipseWithColorAndStrokeWidthAndStrokeStyle(get_abi(centerPoint), radiusX, radiusY, get_abi(color), strokeWidth, get_abi(strokeStyle)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawEllipse(float x, float y, float radiusX, float radiusY, Windows::UI::Color const& color, float strokeWidth, Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const& strokeStyle) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawEllipseAtCoordsWithColorAndStrokeWidthAndStrokeStyle(x, y, radiusX, radiusY, get_abi(color), strokeWidth, get_abi(strokeStyle)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::FillEllipse(Windows::Foundation::Numerics::float2 const& centerPoint, float radiusX, float radiusY, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->FillEllipseWithBrush(get_abi(centerPoint), radiusX, radiusY, get_abi(brush)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::FillEllipse(float x, float y, float radiusX, float radiusY, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->FillEllipseAtCoordsWithBrush(x, y, radiusX, radiusY, get_abi(brush)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::FillEllipse(Windows::Foundation::Numerics::float2 const& centerPoint, float radiusX, float radiusY, Windows::UI::Color const& color) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->FillEllipseWithColor(get_abi(centerPoint), radiusX, radiusY, get_abi(color)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::FillEllipse(float x, float y, float radiusX, float radiusY, Windows::UI::Color const& color) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->FillEllipseAtCoordsWithColor(x, y, radiusX, radiusY, get_abi(color)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawCircle(Windows::Foundation::Numerics::float2 const& centerPoint, float radius, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawCircleWithBrush(get_abi(centerPoint), radius, get_abi(brush)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawCircle(float x, float y, float radius, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawCircleAtCoordsWithBrush(x, y, radius, get_abi(brush)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawCircle(Windows::Foundation::Numerics::float2 const& centerPoint, float radius, Windows::UI::Color const& color) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawCircleWithColor(get_abi(centerPoint), radius, get_abi(color)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawCircle(float x, float y, float radius, Windows::UI::Color const& color) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawCircleAtCoordsWithColor(x, y, radius, get_abi(color)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawCircle(Windows::Foundation::Numerics::float2 const& centerPoint, float radius, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush, float strokeWidth) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawCircleWithBrushAndStrokeWidth(get_abi(centerPoint), radius, get_abi(brush), strokeWidth));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawCircle(float x, float y, float radius, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush, float strokeWidth) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawCircleAtCoordsWithBrushAndStrokeWidth(x, y, radius, get_abi(brush), strokeWidth));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawCircle(Windows::Foundation::Numerics::float2 const& centerPoint, float radius, Windows::UI::Color const& color, float strokeWidth) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawCircleWithColorAndStrokeWidth(get_abi(centerPoint), radius, get_abi(color), strokeWidth));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawCircle(float x, float y, float radius, Windows::UI::Color const& color, float strokeWidth) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawCircleAtCoordsWithColorAndStrokeWidth(x, y, radius, get_abi(color), strokeWidth));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawCircle(Windows::Foundation::Numerics::float2 const& centerPoint, float radius, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush, float strokeWidth, Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const& strokeStyle) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawCircleWithBrushAndStrokeWidthAndStrokeStyle(get_abi(centerPoint), radius, get_abi(brush), strokeWidth, get_abi(strokeStyle)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawCircle(float x, float y, float radius, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush, float strokeWidth, Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const& strokeStyle) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawCircleAtCoordsWithBrushAndStrokeWidthAndStrokeStyle(x, y, radius, get_abi(brush), strokeWidth, get_abi(strokeStyle)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawCircle(Windows::Foundation::Numerics::float2 const& centerPoint, float radius, Windows::UI::Color const& color, float strokeWidth, Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const& strokeStyle) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawCircleWithColorAndStrokeWidthAndStrokeStyle(get_abi(centerPoint), radius, get_abi(color), strokeWidth, get_abi(strokeStyle)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawCircle(float x, float y, float radius, Windows::UI::Color const& color, float strokeWidth, Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const& strokeStyle) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawCircleAtCoordsWithColorAndStrokeWidthAndStrokeStyle(x, y, radius, get_abi(color), strokeWidth, get_abi(strokeStyle)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::FillCircle(Windows::Foundation::Numerics::float2 const& centerPoint, float radius, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->FillCircleWithBrush(get_abi(centerPoint), radius, get_abi(brush)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::FillCircle(float x, float y, float radius, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->FillCircleAtCoordsWithBrush(x, y, radius, get_abi(brush)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::FillCircle(Windows::Foundation::Numerics::float2 const& centerPoint, float radius, Windows::UI::Color const& color) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->FillCircleWithColor(get_abi(centerPoint), radius, get_abi(color)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::FillCircle(float x, float y, float radius, Windows::UI::Color const& color) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->FillCircleAtCoordsWithColor(x, y, radius, get_abi(color)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawText(param::hstring const& text, Windows::Foundation::Numerics::float2 const& point, Windows::UI::Color const& color) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawTextAtPointWithColor(get_abi(text), get_abi(point), get_abi(color)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawText(param::hstring const& text, float x, float y, Windows::UI::Color const& color) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawTextAtPointCoordsWithColor(get_abi(text), x, y, get_abi(color)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawText(param::hstring const& text, Windows::Foundation::Numerics::float2 const& point, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush, Microsoft::Graphics::Canvas::Text::CanvasTextFormat const& format) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawTextAtPointWithBrushAndFormat(get_abi(text), get_abi(point), get_abi(brush), get_abi(format)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawText(param::hstring const& text, Windows::Foundation::Rect const& rectangle, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush, Microsoft::Graphics::Canvas::Text::CanvasTextFormat const& format) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawTextAtRectWithBrushAndFormat(get_abi(text), get_abi(rectangle), get_abi(brush), get_abi(format)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawText(param::hstring const& text, float x, float y, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush, Microsoft::Graphics::Canvas::Text::CanvasTextFormat const& format) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawTextAtPointCoordsWithBrushAndFormat(get_abi(text), x, y, get_abi(brush), get_abi(format)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawText(param::hstring const& text, float x, float y, float w, float h, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush, Microsoft::Graphics::Canvas::Text::CanvasTextFormat const& format) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawTextAtRectCoordsWithBrushAndFormat(get_abi(text), x, y, w, h, get_abi(brush), get_abi(format)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawText(param::hstring const& text, Windows::Foundation::Numerics::float2 const& point, Windows::UI::Color const& color, Microsoft::Graphics::Canvas::Text::CanvasTextFormat const& format) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawTextAtPointWithColorAndFormat(get_abi(text), get_abi(point), get_abi(color), get_abi(format)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawText(param::hstring const& text, Windows::Foundation::Rect const& rectangle, Windows::UI::Color const& color, Microsoft::Graphics::Canvas::Text::CanvasTextFormat const& format) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawTextAtRectWithColorAndFormat(get_abi(text), get_abi(rectangle), get_abi(color), get_abi(format)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawText(param::hstring const& text, float x, float y, Windows::UI::Color const& color, Microsoft::Graphics::Canvas::Text::CanvasTextFormat const& format) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawTextAtPointCoordsWithColorAndFormat(get_abi(text), x, y, get_abi(color), get_abi(format)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawText(param::hstring const& text, float x, float y, float w, float h, Windows::UI::Color const& color, Microsoft::Graphics::Canvas::Text::CanvasTextFormat const& format) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawTextAtRectCoordsWithColorAndFormat(get_abi(text), x, y, w, h, get_abi(color), get_abi(format)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawGeometry(Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& geometry, Windows::Foundation::Numerics::float2 const& offset, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawGeometryWithBrush(get_abi(geometry), get_abi(offset), get_abi(brush)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawGeometry(Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& geometry, Windows::Foundation::Numerics::float2 const& offset, Windows::UI::Color const& color) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawGeometryWithColor(get_abi(geometry), get_abi(offset), get_abi(color)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawGeometry(Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& geometry, float x, float y, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawGeometryAtCoordsWithBrush(get_abi(geometry), x, y, get_abi(brush)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawGeometry(Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& geometry, float x, float y, Windows::UI::Color const& color) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawGeometryAtCoordsWithColor(get_abi(geometry), x, y, get_abi(color)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawGeometry(Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& geometry, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawGeometryAtOriginWithBrush(get_abi(geometry), get_abi(brush)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawGeometry(Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& geometry, Windows::UI::Color const& color) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawGeometryAtOriginWithColor(get_abi(geometry), get_abi(color)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawGeometry(Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& geometry, Windows::Foundation::Numerics::float2 const& offset, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush, float strokeWidth) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawGeometryWithBrushAndStrokeWidth(get_abi(geometry), get_abi(offset), get_abi(brush), strokeWidth));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawGeometry(Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& geometry, Windows::Foundation::Numerics::float2 const& offset, Windows::UI::Color const& color, float strokeWidth) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawGeometryWithColorAndStrokeWidth(get_abi(geometry), get_abi(offset), get_abi(color), strokeWidth));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawGeometry(Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& geometry, float x, float y, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush, float strokeWidth) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawGeometryAtCoordsWithBrushAndStrokeWidth(get_abi(geometry), x, y, get_abi(brush), strokeWidth));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawGeometry(Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& geometry, float x, float y, Windows::UI::Color const& color, float strokeWidth) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawGeometryAtCoordsWithColorAndStrokeWidth(get_abi(geometry), x, y, get_abi(color), strokeWidth));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawGeometry(Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& geometry, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush, float strokeWidth) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawGeometryAtOriginWithBrushAndStrokeWidth(get_abi(geometry), get_abi(brush), strokeWidth));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawGeometry(Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& geometry, Windows::UI::Color const& color, float strokeWidth) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawGeometryAtOriginWithColorAndStrokeWidth(get_abi(geometry), get_abi(color), strokeWidth));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawGeometry(Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& geometry, Windows::Foundation::Numerics::float2 const& offset, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush, float strokeWidth, Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const& strokeStyle) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawGeometryWithBrushAndStrokeWidthAndStrokeStyle(get_abi(geometry), get_abi(offset), get_abi(brush), strokeWidth, get_abi(strokeStyle)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawGeometry(Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& geometry, Windows::Foundation::Numerics::float2 const& offset, Windows::UI::Color const& color, float strokeWidth, Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const& strokeStyle) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawGeometryWithColorAndStrokeWidthAndStrokeStyle(get_abi(geometry), get_abi(offset), get_abi(color), strokeWidth, get_abi(strokeStyle)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawGeometry(Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& geometry, float x, float y, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush, float strokeWidth, Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const& strokeStyle) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawGeometryAtCoordsWithBrushAndStrokeWidthAndStrokeStyle(get_abi(geometry), x, y, get_abi(brush), strokeWidth, get_abi(strokeStyle)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawGeometry(Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& geometry, float x, float y, Windows::UI::Color const& color, float strokeWidth, Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const& strokeStyle) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawGeometryAtCoordsWithColorAndStrokeWidthAndStrokeStyle(get_abi(geometry), x, y, get_abi(color), strokeWidth, get_abi(strokeStyle)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawGeometry(Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& geometry, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush, float strokeWidth, Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const& strokeStyle) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawGeometryAtOriginWithBrushAndStrokeWidthAndStrokeStyle(get_abi(geometry), get_abi(brush), strokeWidth, get_abi(strokeStyle)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawGeometry(Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& geometry, Windows::UI::Color const& color, float strokeWidth, Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const& strokeStyle) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawGeometryAtOriginWithColorAndStrokeWidthAndStrokeStyle(get_abi(geometry), get_abi(color), strokeWidth, get_abi(strokeStyle)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::FillGeometry(Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& geometry, Windows::Foundation::Numerics::float2 const& offset, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->FillGeometryWithBrush(get_abi(geometry), get_abi(offset), get_abi(brush)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::FillGeometry(Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& geometry, Windows::Foundation::Numerics::float2 const& offset, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& opacityBrush) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->FillGeometryWithBrushAndOpacityBrush(get_abi(geometry), get_abi(offset), get_abi(brush), get_abi(opacityBrush)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::FillGeometry(Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& geometry, Windows::Foundation::Numerics::float2 const& offset, Windows::UI::Color const& color) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->FillGeometryWithColor(get_abi(geometry), get_abi(offset), get_abi(color)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::FillGeometry(Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& geometry, float x, float y, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->FillGeometryAtCoordsWithBrush(get_abi(geometry), x, y, get_abi(brush)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::FillGeometry(Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& geometry, float x, float y, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& opacityBrush) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->FillGeometryAtCoordsWithBrushAndOpacityBrush(get_abi(geometry), x, y, get_abi(brush), get_abi(opacityBrush)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::FillGeometry(Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& geometry, float x, float y, Windows::UI::Color const& color) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->FillGeometryAtCoordsWithColor(get_abi(geometry), x, y, get_abi(color)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::FillGeometry(Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& geometry, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->FillGeometryAtOriginWithBrush(get_abi(geometry), get_abi(brush)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::FillGeometry(Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& geometry, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& opacityBrush) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->FillGeometryAtOriginWithBrushAndOpacityBrush(get_abi(geometry), get_abi(brush), get_abi(opacityBrush)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::FillGeometry(Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& geometry, Windows::UI::Color const& color) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->FillGeometryAtOriginWithColor(get_abi(geometry), get_abi(color)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawCachedGeometry(Microsoft::Graphics::Canvas::Geometry::CanvasCachedGeometry const& geometry, Windows::Foundation::Numerics::float2 const& offset, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawCachedGeometryWithBrush(get_abi(geometry), get_abi(offset), get_abi(brush)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawCachedGeometry(Microsoft::Graphics::Canvas::Geometry::CanvasCachedGeometry const& geometry, Windows::Foundation::Numerics::float2 const& offset, Windows::UI::Color const& color) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawCachedGeometryWithColor(get_abi(geometry), get_abi(offset), get_abi(color)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawCachedGeometry(Microsoft::Graphics::Canvas::Geometry::CanvasCachedGeometry const& geometry, float x, float y, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawCachedGeometryAtCoordsWithBrush(get_abi(geometry), x, y, get_abi(brush)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawCachedGeometry(Microsoft::Graphics::Canvas::Geometry::CanvasCachedGeometry const& geometry, float x, float y, Windows::UI::Color const& color) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawCachedGeometryAtCoordsWithColor(get_abi(geometry), x, y, get_abi(color)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawCachedGeometry(Microsoft::Graphics::Canvas::Geometry::CanvasCachedGeometry const& geometry, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawCachedGeometryAtOriginWithBrush(get_abi(geometry), get_abi(brush)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawCachedGeometry(Microsoft::Graphics::Canvas::Geometry::CanvasCachedGeometry const& geometry, Windows::UI::Color const& color) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawCachedGeometryAtOriginWithColor(get_abi(geometry), get_abi(color)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawTextLayout(Microsoft::Graphics::Canvas::Text::CanvasTextLayout const& textLayout, Windows::Foundation::Numerics::float2 const& point, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawTextLayoutWithBrush(get_abi(textLayout), get_abi(point), get_abi(brush)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawTextLayout(Microsoft::Graphics::Canvas::Text::CanvasTextLayout const& textLayout, float x, float y, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawTextLayoutAtCoordsWithBrush(get_abi(textLayout), x, y, get_abi(brush)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawTextLayout(Microsoft::Graphics::Canvas::Text::CanvasTextLayout const& textLayout, Windows::Foundation::Numerics::float2 const& point, Windows::UI::Color const& color) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawTextLayoutWithColor(get_abi(textLayout), get_abi(point), get_abi(color)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawTextLayout(Microsoft::Graphics::Canvas::Text::CanvasTextLayout const& textLayout, float x, float y, Windows::UI::Color const& color) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawTextLayoutAtCoordsWithColor(get_abi(textLayout), x, y, get_abi(color)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawInk(param::iterable<Windows::UI::Input::Inking::InkStroke> const& inkStrokes) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawInk(get_abi(inkStrokes)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawInk(param::iterable<Windows::UI::Input::Inking::InkStroke> const& inkStrokes, bool highContrast) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawInkWithHighContrast(get_abi(inkStrokes), highContrast));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawGradientMesh(Microsoft::Graphics::Canvas::Geometry::CanvasGradientMesh const& gradientMesh) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawGradientMeshAtOrigin(get_abi(gradientMesh)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawGradientMesh(Microsoft::Graphics::Canvas::Geometry::CanvasGradientMesh const& gradientMesh, Windows::Foundation::Numerics::float2 const& point) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawGradientMesh(get_abi(gradientMesh), get_abi(point)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawGradientMesh(Microsoft::Graphics::Canvas::Geometry::CanvasGradientMesh const& gradientMesh, float x, float y) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawGradientMeshAtCoords(get_abi(gradientMesh), x, y));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawSvg(Microsoft::Graphics::Canvas::Svg::CanvasSvgDocument const& svgDocument, Windows::Foundation::Size const& viewportSize) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawSvgAtOrigin(get_abi(svgDocument), get_abi(viewportSize)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawSvg(Microsoft::Graphics::Canvas::Svg::CanvasSvgDocument const& svgDocument, Windows::Foundation::Size const& viewportSize, Windows::Foundation::Numerics::float2 const& point) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawSvgAtPoint(get_abi(svgDocument), get_abi(viewportSize), get_abi(point)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawSvg(Microsoft::Graphics::Canvas::Svg::CanvasSvgDocument const& svgDocument, Windows::Foundation::Size const& viewportSize, float x, float y) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawSvgAtCoords(get_abi(svgDocument), get_abi(viewportSize), x, y));
}

template <typename D> Microsoft::Graphics::Canvas::CanvasAntialiasing consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::Antialiasing() const
{
    Microsoft::Graphics::Canvas::CanvasAntialiasing value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->get_Antialiasing(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::Antialiasing(Microsoft::Graphics::Canvas::CanvasAntialiasing const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->put_Antialiasing(get_abi(value)));
}

template <typename D> Microsoft::Graphics::Canvas::CanvasBlend consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::Blend() const
{
    Microsoft::Graphics::Canvas::CanvasBlend value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->get_Blend(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::Blend(Microsoft::Graphics::Canvas::CanvasBlend const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->put_Blend(get_abi(value)));
}

template <typename D> Microsoft::Graphics::Canvas::Text::CanvasTextAntialiasing consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::TextAntialiasing() const
{
    Microsoft::Graphics::Canvas::Text::CanvasTextAntialiasing value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->get_TextAntialiasing(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::TextAntialiasing(Microsoft::Graphics::Canvas::Text::CanvasTextAntialiasing const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->put_TextAntialiasing(get_abi(value)));
}

template <typename D> Microsoft::Graphics::Canvas::Text::CanvasTextRenderingParameters consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::TextRenderingParameters() const
{
    Microsoft::Graphics::Canvas::Text::CanvasTextRenderingParameters value{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->get_TextRenderingParameters(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::TextRenderingParameters(Microsoft::Graphics::Canvas::Text::CanvasTextRenderingParameters const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->put_TextRenderingParameters(get_abi(value)));
}

template <typename D> Windows::Foundation::Numerics::float3x2 consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::Transform() const
{
    Windows::Foundation::Numerics::float3x2 value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->get_Transform(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::Transform(Windows::Foundation::Numerics::float3x2 const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->put_Transform(get_abi(value)));
}

template <typename D> Microsoft::Graphics::Canvas::CanvasUnits consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::Units() const
{
    Microsoft::Graphics::Canvas::CanvasUnits value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->get_Units(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::Units(Microsoft::Graphics::Canvas::CanvasUnits const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->put_Units(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<Microsoft::Graphics::Canvas::CanvasBufferPrecision> consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::EffectBufferPrecision() const
{
    Windows::Foundation::IReference<Microsoft::Graphics::Canvas::CanvasBufferPrecision> value{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->get_EffectBufferPrecision(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::EffectBufferPrecision(optional<Microsoft::Graphics::Canvas::CanvasBufferPrecision> const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->put_EffectBufferPrecision(get_abi(value)));
}

template <typename D> Windows::Graphics::Imaging::BitmapSize consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::EffectTileSize() const
{
    Windows::Graphics::Imaging::BitmapSize value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->get_EffectTileSize(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::EffectTileSize(Windows::Graphics::Imaging::BitmapSize const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->put_EffectTileSize(get_abi(value)));
}

template <typename D> Microsoft::Graphics::Canvas::CanvasActiveLayer consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::CreateLayer(float opacity) const
{
    Microsoft::Graphics::Canvas::CanvasActiveLayer layer{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->CreateLayerWithOpacity(opacity, put_abi(layer)));
    return layer;
}

template <typename D> Microsoft::Graphics::Canvas::CanvasActiveLayer consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::CreateLayer(Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& opacityBrush) const
{
    Microsoft::Graphics::Canvas::CanvasActiveLayer layer{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->CreateLayerWithOpacityBrush(get_abi(opacityBrush), put_abi(layer)));
    return layer;
}

template <typename D> Microsoft::Graphics::Canvas::CanvasActiveLayer consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::CreateLayer(float opacity, Windows::Foundation::Rect const& clipRectangle) const
{
    Microsoft::Graphics::Canvas::CanvasActiveLayer layer{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->CreateLayerWithOpacityAndClipRectangle(opacity, get_abi(clipRectangle), put_abi(layer)));
    return layer;
}

template <typename D> Microsoft::Graphics::Canvas::CanvasActiveLayer consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::CreateLayer(Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& opacityBrush, Windows::Foundation::Rect const& clipRectangle) const
{
    Microsoft::Graphics::Canvas::CanvasActiveLayer layer{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->CreateLayerWithOpacityBrushAndClipRectangle(get_abi(opacityBrush), get_abi(clipRectangle), put_abi(layer)));
    return layer;
}

template <typename D> Microsoft::Graphics::Canvas::CanvasActiveLayer consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::CreateLayer(float opacity, Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& clipGeometry) const
{
    Microsoft::Graphics::Canvas::CanvasActiveLayer layer{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->CreateLayerWithOpacityAndClipGeometry(opacity, get_abi(clipGeometry), put_abi(layer)));
    return layer;
}

template <typename D> Microsoft::Graphics::Canvas::CanvasActiveLayer consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::CreateLayer(Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& opacityBrush, Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& clipGeometry) const
{
    Microsoft::Graphics::Canvas::CanvasActiveLayer layer{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->CreateLayerWithOpacityBrushAndClipGeometry(get_abi(opacityBrush), get_abi(clipGeometry), put_abi(layer)));
    return layer;
}

template <typename D> Microsoft::Graphics::Canvas::CanvasActiveLayer consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::CreateLayer(float opacity, Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& clipGeometry, Windows::Foundation::Numerics::float3x2 const& geometryTransform) const
{
    Microsoft::Graphics::Canvas::CanvasActiveLayer layer{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->CreateLayerWithOpacityAndClipGeometryAndTransform(opacity, get_abi(clipGeometry), get_abi(geometryTransform), put_abi(layer)));
    return layer;
}

template <typename D> Microsoft::Graphics::Canvas::CanvasActiveLayer consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::CreateLayer(Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& opacityBrush, Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& clipGeometry, Windows::Foundation::Numerics::float3x2 const& geometryTransform) const
{
    Microsoft::Graphics::Canvas::CanvasActiveLayer layer{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->CreateLayerWithOpacityBrushAndClipGeometryAndTransform(get_abi(opacityBrush), get_abi(clipGeometry), get_abi(geometryTransform), put_abi(layer)));
    return layer;
}

template <typename D> Microsoft::Graphics::Canvas::CanvasActiveLayer consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::CreateLayer(float opacity, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& opacityBrush, Windows::Foundation::Rect const& clipRectangle, Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& clipGeometry, Windows::Foundation::Numerics::float3x2 const& geometryTransform, Microsoft::Graphics::Canvas::CanvasLayerOptions const& options) const
{
    Microsoft::Graphics::Canvas::CanvasActiveLayer layer{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->CreateLayerWithAllOptions(opacity, get_abi(opacityBrush), get_abi(clipRectangle), get_abi(clipGeometry), get_abi(geometryTransform), get_abi(options), put_abi(layer)));
    return layer;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawGlyphRun(Windows::Foundation::Numerics::float2 const& point, Microsoft::Graphics::Canvas::Text::CanvasFontFace const& fontFace, float fontSize, array_view<Microsoft::Graphics::Canvas::Text::CanvasGlyph const> glyphs, bool isSideways, uint32_t bidiLevel, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawGlyphRun(get_abi(point), get_abi(fontFace), fontSize, glyphs.size(), get_abi(glyphs), isSideways, bidiLevel, get_abi(brush)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawGlyphRun(Windows::Foundation::Numerics::float2 const& point, Microsoft::Graphics::Canvas::Text::CanvasFontFace const& fontFace, float fontSize, array_view<Microsoft::Graphics::Canvas::Text::CanvasGlyph const> glyphs, bool isSideways, uint32_t bidiLevel, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush, Microsoft::Graphics::Canvas::Text::CanvasTextMeasuringMode const& measuringMode) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawGlyphRunWithMeasuringMode(get_abi(point), get_abi(fontFace), fontSize, glyphs.size(), get_abi(glyphs), isSideways, bidiLevel, get_abi(brush), get_abi(measuringMode)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::DrawGlyphRun(Windows::Foundation::Numerics::float2 const& point, Microsoft::Graphics::Canvas::Text::CanvasFontFace const& fontFace, float fontSize, array_view<Microsoft::Graphics::Canvas::Text::CanvasGlyph const> glyphs, bool isSideways, uint32_t bidiLevel, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush, Microsoft::Graphics::Canvas::Text::CanvasTextMeasuringMode const& measuringMode, param::hstring const& localeName, param::hstring const& textString, array_view<int32_t const> clusterMapIndices, uint32_t textPosition) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->DrawGlyphRunWithMeasuringModeAndDescription(get_abi(point), get_abi(fontFace), fontSize, glyphs.size(), get_abi(glyphs), isSideways, bidiLevel, get_abi(brush), get_abi(measuringMode), get_abi(localeName), get_abi(textString), clusterMapIndices.size(), get_abi(clusterMapIndices), textPosition));
}

template <typename D> Microsoft::Graphics::Canvas::CanvasSpriteBatch consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::CreateSpriteBatch() const
{
    Microsoft::Graphics::Canvas::CanvasSpriteBatch spriteBatch{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->CreateSpriteBatch(put_abi(spriteBatch)));
    return spriteBatch;
}

template <typename D> Microsoft::Graphics::Canvas::CanvasSpriteBatch consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::CreateSpriteBatch(Microsoft::Graphics::Canvas::CanvasSpriteSortMode const& sortMode) const
{
    Microsoft::Graphics::Canvas::CanvasSpriteBatch spriteBatch{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->CreateSpriteBatchWithSortMode(get_abi(sortMode), put_abi(spriteBatch)));
    return spriteBatch;
}

template <typename D> Microsoft::Graphics::Canvas::CanvasSpriteBatch consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::CreateSpriteBatch(Microsoft::Graphics::Canvas::CanvasSpriteSortMode const& sortMode, Microsoft::Graphics::Canvas::CanvasImageInterpolation const& interpolation) const
{
    Microsoft::Graphics::Canvas::CanvasSpriteBatch spriteBatch{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->CreateSpriteBatchWithSortModeAndInterpolation(get_abi(sortMode), get_abi(interpolation), put_abi(spriteBatch)));
    return spriteBatch;
}

template <typename D> Microsoft::Graphics::Canvas::CanvasSpriteBatch consume_Microsoft_Graphics_Canvas_ICanvasDrawingSession<D>::CreateSpriteBatch(Microsoft::Graphics::Canvas::CanvasSpriteSortMode const& sortMode, Microsoft::Graphics::Canvas::CanvasImageInterpolation const& interpolation, Microsoft::Graphics::Canvas::CanvasSpriteOptions const& options) const
{
    Microsoft::Graphics::Canvas::CanvasSpriteBatch spriteBatch{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasDrawingSession)->CreateSpriteBatchWithSortModeAndInterpolationAndOptions(get_abi(sortMode), get_abi(interpolation), get_abi(options), put_abi(spriteBatch)));
    return spriteBatch;
}

template <typename D> Windows::Foundation::Rect consume_Microsoft_Graphics_Canvas_ICanvasImage<D>::GetBounds(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator) const
{
    Windows::Foundation::Rect bounds{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasImage)->GetBounds(get_abi(resourceCreator), put_abi(bounds)));
    return bounds;
}

template <typename D> Windows::Foundation::Rect consume_Microsoft_Graphics_Canvas_ICanvasImage<D>::GetBounds(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Foundation::Numerics::float3x2 const& transform) const
{
    Windows::Foundation::Rect bounds{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasImage)->GetBoundsWithTransform(get_abi(resourceCreator), get_abi(transform), put_abi(bounds)));
    return bounds;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Microsoft_Graphics_Canvas_ICanvasImageStatics<D>::SaveAsync(Microsoft::Graphics::Canvas::ICanvasImage const& image, Windows::Foundation::Rect const& sourceRectangle, float dpi, Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Storage::Streams::IRandomAccessStream const& stream, Microsoft::Graphics::Canvas::CanvasBitmapFileFormat const& fileFormat) const
{
    Windows::Foundation::IAsyncAction action{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasImageStatics)->SaveAsync(get_abi(image), get_abi(sourceRectangle), dpi, get_abi(resourceCreator), get_abi(stream), get_abi(fileFormat), put_abi(action)));
    return action;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Microsoft_Graphics_Canvas_ICanvasImageStatics<D>::SaveAsync(Microsoft::Graphics::Canvas::ICanvasImage const& image, Windows::Foundation::Rect const& sourceRectangle, float dpi, Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Storage::Streams::IRandomAccessStream const& stream, Microsoft::Graphics::Canvas::CanvasBitmapFileFormat const& fileFormat, float quality) const
{
    Windows::Foundation::IAsyncAction action{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasImageStatics)->SaveWithQualityAsync(get_abi(image), get_abi(sourceRectangle), dpi, get_abi(resourceCreator), get_abi(stream), get_abi(fileFormat), quality, put_abi(action)));
    return action;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Microsoft_Graphics_Canvas_ICanvasImageStatics<D>::SaveAsync(Microsoft::Graphics::Canvas::ICanvasImage const& image, Windows::Foundation::Rect const& sourceRectangle, float dpi, Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Storage::Streams::IRandomAccessStream const& stream, Microsoft::Graphics::Canvas::CanvasBitmapFileFormat const& fileFormat, float quality, Microsoft::Graphics::Canvas::CanvasBufferPrecision const& bufferPrecision) const
{
    Windows::Foundation::IAsyncAction action{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasImageStatics)->SaveWithQualityAndBufferPrecisionAsync(get_abi(image), get_abi(sourceRectangle), dpi, get_abi(resourceCreator), get_abi(stream), get_abi(fileFormat), quality, get_abi(bufferPrecision), put_abi(action)));
    return action;
}

template <typename D> com_array<float> consume_Microsoft_Graphics_Canvas_ICanvasImageStatics<D>::ComputeHistogram(Microsoft::Graphics::Canvas::ICanvasImage const& image, Windows::Foundation::Rect const& sourceRectangle, Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Microsoft::Graphics::Canvas::Effects::EffectChannelSelect const& channelSelect, int32_t numberOfBins) const
{
    com_array<float> valueElements;
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasImageStatics)->ComputeHistogram(get_abi(image), get_abi(sourceRectangle), get_abi(resourceCreator), get_abi(channelSelect), numberOfBins, impl::put_size_abi(valueElements), put_abi(valueElements)));
    return valueElements;
}

template <typename D> bool consume_Microsoft_Graphics_Canvas_ICanvasImageStatics<D>::IsHistogramSupported(Microsoft::Graphics::Canvas::CanvasDevice const& device) const
{
    bool result{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasImageStatics)->IsHistogramSupported(get_abi(device), &result));
    return result;
}

template <typename D> Microsoft::Graphics::Canvas::CanvasDrawingSession consume_Microsoft_Graphics_Canvas_ICanvasRenderTarget<D>::CreateDrawingSession() const
{
    Microsoft::Graphics::Canvas::CanvasDrawingSession drawingSession{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasRenderTarget)->CreateDrawingSession(put_abi(drawingSession)));
    return drawingSession;
}

template <typename D> Microsoft::Graphics::Canvas::CanvasRenderTarget consume_Microsoft_Graphics_Canvas_ICanvasRenderTargetFactory<D>::CreateWithSize(Microsoft::Graphics::Canvas::ICanvasResourceCreatorWithDpi const& resourceCreator, Windows::Foundation::Size const& size) const
{
    Microsoft::Graphics::Canvas::CanvasRenderTarget renderTarget{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasRenderTargetFactory)->CreateWithSize(get_abi(resourceCreator), get_abi(size), put_abi(renderTarget)));
    return renderTarget;
}

template <typename D> Microsoft::Graphics::Canvas::CanvasRenderTarget consume_Microsoft_Graphics_Canvas_ICanvasRenderTargetFactory<D>::CreateWithWidthAndHeight(Microsoft::Graphics::Canvas::ICanvasResourceCreatorWithDpi const& resourceCreator, float width, float height) const
{
    Microsoft::Graphics::Canvas::CanvasRenderTarget renderTarget{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasRenderTargetFactory)->CreateWithWidthAndHeight(get_abi(resourceCreator), width, height, put_abi(renderTarget)));
    return renderTarget;
}

template <typename D> Microsoft::Graphics::Canvas::CanvasRenderTarget consume_Microsoft_Graphics_Canvas_ICanvasRenderTargetFactory<D>::CreateWithWidthAndHeightAndDpi(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, float width, float height, float dpi) const
{
    Microsoft::Graphics::Canvas::CanvasRenderTarget renderTarget{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasRenderTargetFactory)->CreateWithWidthAndHeightAndDpi(get_abi(resourceCreator), width, height, dpi, put_abi(renderTarget)));
    return renderTarget;
}

template <typename D> Microsoft::Graphics::Canvas::CanvasRenderTarget consume_Microsoft_Graphics_Canvas_ICanvasRenderTargetFactory<D>::CreateWithWidthAndHeightAndDpiAndFormatAndAlpha(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, float width, float height, float dpi, Windows::Graphics::DirectX::DirectXPixelFormat const& format, Microsoft::Graphics::Canvas::CanvasAlphaMode const& alpha) const
{
    Microsoft::Graphics::Canvas::CanvasRenderTarget renderTarget{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasRenderTargetFactory)->CreateWithWidthAndHeightAndDpiAndFormatAndAlpha(get_abi(resourceCreator), width, height, dpi, get_abi(format), get_abi(alpha), put_abi(renderTarget)));
    return renderTarget;
}

template <typename D> Microsoft::Graphics::Canvas::CanvasRenderTarget consume_Microsoft_Graphics_Canvas_ICanvasRenderTargetStatics<D>::CreateFromDirect3D11Surface(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const& surface) const
{
    Microsoft::Graphics::Canvas::CanvasRenderTarget bitmap{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasRenderTargetStatics)->CreateFromDirect3D11Surface(get_abi(resourceCreator), get_abi(surface), put_abi(bitmap)));
    return bitmap;
}

template <typename D> Microsoft::Graphics::Canvas::CanvasRenderTarget consume_Microsoft_Graphics_Canvas_ICanvasRenderTargetStatics<D>::CreateFromDirect3D11Surface(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const& surface, float dpi) const
{
    Microsoft::Graphics::Canvas::CanvasRenderTarget bitmap{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasRenderTargetStatics)->CreateFromDirect3D11SurfaceWithDpi(get_abi(resourceCreator), get_abi(surface), dpi, put_abi(bitmap)));
    return bitmap;
}

template <typename D> Microsoft::Graphics::Canvas::CanvasRenderTarget consume_Microsoft_Graphics_Canvas_ICanvasRenderTargetStatics<D>::CreateFromDirect3D11Surface(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const& surface, float dpi, Microsoft::Graphics::Canvas::CanvasAlphaMode const& alpha) const
{
    Microsoft::Graphics::Canvas::CanvasRenderTarget bitmap{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasRenderTargetStatics)->CreateFromDirect3D11SurfaceWithDpiAndAlpha(get_abi(resourceCreator), get_abi(surface), dpi, get_abi(alpha), put_abi(bitmap)));
    return bitmap;
}

template <typename D> Microsoft::Graphics::Canvas::CanvasDevice consume_Microsoft_Graphics_Canvas_ICanvasResourceCreator<D>::Device() const
{
    Microsoft::Graphics::Canvas::CanvasDevice value{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasResourceCreator)->get_Device(put_abi(value)));
    return value;
}

template <typename D> float consume_Microsoft_Graphics_Canvas_ICanvasResourceCreatorWithDpi<D>::Dpi() const
{
    float dpi{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasResourceCreatorWithDpi)->get_Dpi(&dpi));
    return dpi;
}

template <typename D> float consume_Microsoft_Graphics_Canvas_ICanvasResourceCreatorWithDpi<D>::ConvertPixelsToDips(int32_t pixels) const
{
    float dips{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasResourceCreatorWithDpi)->ConvertPixelsToDips(pixels, &dips));
    return dips;
}

template <typename D> int32_t consume_Microsoft_Graphics_Canvas_ICanvasResourceCreatorWithDpi<D>::ConvertDipsToPixels(float dips, Microsoft::Graphics::Canvas::CanvasDpiRounding const& dpiRounding) const
{
    int32_t pixels{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasResourceCreatorWithDpi)->ConvertDipsToPixels(dips, get_abi(dpiRounding), &pixels));
    return pixels;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasSpriteBatch<D>::Draw(Microsoft::Graphics::Canvas::CanvasBitmap const& bitmap, Windows::Foundation::Rect const& destRect) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasSpriteBatch)->DrawToRect(get_abi(bitmap), get_abi(destRect)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasSpriteBatch<D>::Draw(Microsoft::Graphics::Canvas::CanvasBitmap const& bitmap, Windows::Foundation::Numerics::float2 const& offset) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasSpriteBatch)->DrawAtOffset(get_abi(bitmap), get_abi(offset)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasSpriteBatch<D>::Draw(Microsoft::Graphics::Canvas::CanvasBitmap const& bitmap, Windows::Foundation::Numerics::float3x2 const& transform) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasSpriteBatch)->DrawWithTransform(get_abi(bitmap), get_abi(transform)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasSpriteBatch<D>::Draw(Microsoft::Graphics::Canvas::CanvasBitmap const& bitmap, Windows::Foundation::Rect const& destRect, Windows::Foundation::Numerics::float4 const& tint) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasSpriteBatch)->DrawToRectWithTint(get_abi(bitmap), get_abi(destRect), get_abi(tint)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasSpriteBatch<D>::Draw(Microsoft::Graphics::Canvas::CanvasBitmap const& bitmap, Windows::Foundation::Numerics::float2 const& offset, Windows::Foundation::Numerics::float4 const& tint) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasSpriteBatch)->DrawAtOffsetWithTint(get_abi(bitmap), get_abi(offset), get_abi(tint)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasSpriteBatch<D>::Draw(Microsoft::Graphics::Canvas::CanvasBitmap const& bitmap, Windows::Foundation::Numerics::float3x2 const& transform, Windows::Foundation::Numerics::float4 const& tint) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasSpriteBatch)->DrawWithTransformAndTint(get_abi(bitmap), get_abi(transform), get_abi(tint)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasSpriteBatch<D>::Draw(Microsoft::Graphics::Canvas::CanvasBitmap const& bitmap, Windows::Foundation::Rect const& destRect, Windows::Foundation::Numerics::float4 const& tint, Microsoft::Graphics::Canvas::CanvasSpriteFlip const& flip) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasSpriteBatch)->DrawToRectWithTintAndFlip(get_abi(bitmap), get_abi(destRect), get_abi(tint), get_abi(flip)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasSpriteBatch<D>::Draw(Microsoft::Graphics::Canvas::CanvasBitmap const& bitmap, Windows::Foundation::Numerics::float3x2 const& transform, Windows::Foundation::Numerics::float4 const& tint, Microsoft::Graphics::Canvas::CanvasSpriteFlip const& flip) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasSpriteBatch)->DrawWithTransformAndTintAndFlip(get_abi(bitmap), get_abi(transform), get_abi(tint), get_abi(flip)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasSpriteBatch<D>::Draw(Microsoft::Graphics::Canvas::CanvasBitmap const& bitmap, Windows::Foundation::Numerics::float2 const& offset, Windows::Foundation::Numerics::float4 const& tint, Windows::Foundation::Numerics::float2 const& origin, float rotation, Windows::Foundation::Numerics::float2 const& scale, Microsoft::Graphics::Canvas::CanvasSpriteFlip const& flip) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasSpriteBatch)->DrawAtOffsetWithTintAndTransform(get_abi(bitmap), get_abi(offset), get_abi(tint), get_abi(origin), rotation, get_abi(scale), get_abi(flip)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasSpriteBatch<D>::DrawFromSpriteSheet(Microsoft::Graphics::Canvas::CanvasBitmap const& bitmap, Windows::Foundation::Rect const& destRect, Windows::Foundation::Rect const& sourceRect) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasSpriteBatch)->DrawFromSpriteSheetToRect(get_abi(bitmap), get_abi(destRect), get_abi(sourceRect)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasSpriteBatch<D>::DrawFromSpriteSheet(Microsoft::Graphics::Canvas::CanvasBitmap const& bitmap, Windows::Foundation::Numerics::float2 const& offset, Windows::Foundation::Rect const& sourceRect) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasSpriteBatch)->DrawFromSpriteSheetAtOffset(get_abi(bitmap), get_abi(offset), get_abi(sourceRect)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasSpriteBatch<D>::DrawFromSpriteSheet(Microsoft::Graphics::Canvas::CanvasBitmap const& bitmap, Windows::Foundation::Numerics::float3x2 const& transform, Windows::Foundation::Rect const& sourceRect) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasSpriteBatch)->DrawFromSpriteSheetWithTransform(get_abi(bitmap), get_abi(transform), get_abi(sourceRect)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasSpriteBatch<D>::DrawFromSpriteSheet(Microsoft::Graphics::Canvas::CanvasBitmap const& bitmap, Windows::Foundation::Rect const& destRect, Windows::Foundation::Rect const& sourceRect, Windows::Foundation::Numerics::float4 const& tint) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasSpriteBatch)->DrawFromSpriteSheetToRectWithTint(get_abi(bitmap), get_abi(destRect), get_abi(sourceRect), get_abi(tint)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasSpriteBatch<D>::DrawFromSpriteSheet(Microsoft::Graphics::Canvas::CanvasBitmap const& bitmap, Windows::Foundation::Numerics::float2 const& offset, Windows::Foundation::Rect const& sourceRect, Windows::Foundation::Numerics::float4 const& tint) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasSpriteBatch)->DrawFromSpriteSheetAtOffsetWithTint(get_abi(bitmap), get_abi(offset), get_abi(sourceRect), get_abi(tint)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasSpriteBatch<D>::DrawFromSpriteSheet(Microsoft::Graphics::Canvas::CanvasBitmap const& bitmap, Windows::Foundation::Numerics::float3x2 const& transform, Windows::Foundation::Rect const& sourceRect, Windows::Foundation::Numerics::float4 const& tint) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasSpriteBatch)->DrawFromSpriteSheetWithTransformAndTint(get_abi(bitmap), get_abi(transform), get_abi(sourceRect), get_abi(tint)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasSpriteBatch<D>::DrawFromSpriteSheet(Microsoft::Graphics::Canvas::CanvasBitmap const& bitmap, Windows::Foundation::Rect const& destRect, Windows::Foundation::Rect const& sourceRect, Windows::Foundation::Numerics::float4 const& tint, Microsoft::Graphics::Canvas::CanvasSpriteFlip const& flip) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasSpriteBatch)->DrawFromSpriteSheetToRectWithTintAndFlip(get_abi(bitmap), get_abi(destRect), get_abi(sourceRect), get_abi(tint), get_abi(flip)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasSpriteBatch<D>::DrawFromSpriteSheet(Microsoft::Graphics::Canvas::CanvasBitmap const& bitmap, Windows::Foundation::Numerics::float3x2 const& transform, Windows::Foundation::Rect const& sourceRect, Windows::Foundation::Numerics::float4 const& tint, Microsoft::Graphics::Canvas::CanvasSpriteFlip const& flip) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasSpriteBatch)->DrawFromSpriteSheetWithTransformAndTintAndFlip(get_abi(bitmap), get_abi(transform), get_abi(sourceRect), get_abi(tint), get_abi(flip)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasSpriteBatch<D>::DrawFromSpriteSheet(Microsoft::Graphics::Canvas::CanvasBitmap const& bitmap, Windows::Foundation::Numerics::float2 const& offset, Windows::Foundation::Rect const& sourceRect, Windows::Foundation::Numerics::float4 const& tint, Windows::Foundation::Numerics::float2 const& origin, float rotation, Windows::Foundation::Numerics::float2 const& scale, Microsoft::Graphics::Canvas::CanvasSpriteFlip const& flip) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasSpriteBatch)->DrawFromSpriteSheetAtOffsetWithTintAndTransform(get_abi(bitmap), get_abi(offset), get_abi(sourceRect), get_abi(tint), get_abi(origin), rotation, get_abi(scale), get_abi(flip)));
}

template <typename D> bool consume_Microsoft_Graphics_Canvas_ICanvasSpriteBatchStatics<D>::IsSupported(Microsoft::Graphics::Canvas::CanvasDevice const& device) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasSpriteBatchStatics)->IsSupported(get_abi(device), &value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasSwapChain<D>::Present() const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasSwapChain)->Present());
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasSwapChain<D>::Present(int32_t syncInterval) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasSwapChain)->PresentWithSyncInterval(syncInterval));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasSwapChain<D>::ResizeBuffers(Windows::Foundation::Size const& newSize) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasSwapChain)->ResizeBuffersWithSize(get_abi(newSize)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasSwapChain<D>::ResizeBuffers(float newWidth, float newHeight) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasSwapChain)->ResizeBuffersWithWidthAndHeight(newWidth, newHeight));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasSwapChain<D>::ResizeBuffers(float newWidth, float newHeight, float newDpi) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasSwapChain)->ResizeBuffersWithWidthAndHeightAndDpi(newWidth, newHeight, newDpi));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasSwapChain<D>::ResizeBuffers(float newWidth, float newHeight, float newDpi, Windows::Graphics::DirectX::DirectXPixelFormat const& newFormat, int32_t bufferCount) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasSwapChain)->ResizeBuffersWithAllOptions(newWidth, newHeight, newDpi, get_abi(newFormat), bufferCount));
}

template <typename D> Windows::Foundation::Size consume_Microsoft_Graphics_Canvas_ICanvasSwapChain<D>::Size() const
{
    Windows::Foundation::Size size{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasSwapChain)->get_Size(put_abi(size)));
    return size;
}

template <typename D> Windows::Graphics::Imaging::BitmapSize consume_Microsoft_Graphics_Canvas_ICanvasSwapChain<D>::SizeInPixels() const
{
    Windows::Graphics::Imaging::BitmapSize size{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasSwapChain)->get_SizeInPixels(put_abi(size)));
    return size;
}

template <typename D> Windows::Graphics::DirectX::DirectXPixelFormat consume_Microsoft_Graphics_Canvas_ICanvasSwapChain<D>::Format() const
{
    Windows::Graphics::DirectX::DirectXPixelFormat value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasSwapChain)->get_Format(put_abi(value)));
    return value;
}

template <typename D> int32_t consume_Microsoft_Graphics_Canvas_ICanvasSwapChain<D>::BufferCount() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasSwapChain)->get_BufferCount(&value));
    return value;
}

template <typename D> Microsoft::Graphics::Canvas::CanvasAlphaMode consume_Microsoft_Graphics_Canvas_ICanvasSwapChain<D>::AlphaMode() const
{
    Microsoft::Graphics::Canvas::CanvasAlphaMode value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasSwapChain)->get_AlphaMode(put_abi(value)));
    return value;
}

template <typename D> Microsoft::Graphics::Canvas::CanvasSwapChainRotation consume_Microsoft_Graphics_Canvas_ICanvasSwapChain<D>::Rotation() const
{
    Microsoft::Graphics::Canvas::CanvasSwapChainRotation value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasSwapChain)->get_Rotation(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasSwapChain<D>::Rotation(Microsoft::Graphics::Canvas::CanvasSwapChainRotation const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasSwapChain)->put_Rotation(get_abi(value)));
}

template <typename D> Windows::Foundation::Size consume_Microsoft_Graphics_Canvas_ICanvasSwapChain<D>::SourceSize() const
{
    Windows::Foundation::Size value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasSwapChain)->get_SourceSize(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasSwapChain<D>::SourceSize(Windows::Foundation::Size const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasSwapChain)->put_SourceSize(get_abi(value)));
}

template <typename D> Windows::Foundation::Numerics::float3x2 consume_Microsoft_Graphics_Canvas_ICanvasSwapChain<D>::TransformMatrix() const
{
    Windows::Foundation::Numerics::float3x2 value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasSwapChain)->get_TransformMatrix(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasSwapChain<D>::TransformMatrix(Windows::Foundation::Numerics::float3x2 const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasSwapChain)->put_TransformMatrix(get_abi(value)));
}

template <typename D> Microsoft::Graphics::Canvas::CanvasDrawingSession consume_Microsoft_Graphics_Canvas_ICanvasSwapChain<D>::CreateDrawingSession(Windows::UI::Color const& clearColor) const
{
    Microsoft::Graphics::Canvas::CanvasDrawingSession drawingSession{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasSwapChain)->CreateDrawingSession(get_abi(clearColor), put_abi(drawingSession)));
    return drawingSession;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_ICanvasSwapChain<D>::WaitForVerticalBlank() const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasSwapChain)->WaitForVerticalBlank());
}

template <typename D> Microsoft::Graphics::Canvas::CanvasSwapChain consume_Microsoft_Graphics_Canvas_ICanvasSwapChainFactory<D>::CreateWithSize(Microsoft::Graphics::Canvas::ICanvasResourceCreatorWithDpi const& resourceCreator, Windows::Foundation::Size const& size) const
{
    Microsoft::Graphics::Canvas::CanvasSwapChain swapChain{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasSwapChainFactory)->CreateWithSize(get_abi(resourceCreator), get_abi(size), put_abi(swapChain)));
    return swapChain;
}

template <typename D> Microsoft::Graphics::Canvas::CanvasSwapChain consume_Microsoft_Graphics_Canvas_ICanvasSwapChainFactory<D>::CreateWithWidthAndHeight(Microsoft::Graphics::Canvas::ICanvasResourceCreatorWithDpi const& resourceCreator, float width, float height) const
{
    Microsoft::Graphics::Canvas::CanvasSwapChain swapChain{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasSwapChainFactory)->CreateWithWidthAndHeight(get_abi(resourceCreator), width, height, put_abi(swapChain)));
    return swapChain;
}

template <typename D> Microsoft::Graphics::Canvas::CanvasSwapChain consume_Microsoft_Graphics_Canvas_ICanvasSwapChainFactory<D>::CreateWithWidthAndHeightAndDpi(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, float width, float height, float dpi) const
{
    Microsoft::Graphics::Canvas::CanvasSwapChain swapChain{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasSwapChainFactory)->CreateWithWidthAndHeightAndDpi(get_abi(resourceCreator), width, height, dpi, put_abi(swapChain)));
    return swapChain;
}

template <typename D> Microsoft::Graphics::Canvas::CanvasSwapChain consume_Microsoft_Graphics_Canvas_ICanvasSwapChainFactory<D>::CreateWithAllOptions(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, float width, float height, float dpi, Windows::Graphics::DirectX::DirectXPixelFormat const& format, int32_t bufferCount, Microsoft::Graphics::Canvas::CanvasAlphaMode const& alphaMode) const
{
    Microsoft::Graphics::Canvas::CanvasSwapChain swapChain{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasSwapChainFactory)->CreateWithAllOptions(get_abi(resourceCreator), width, height, dpi, get_abi(format), bufferCount, get_abi(alphaMode), put_abi(swapChain)));
    return swapChain;
}

template <typename D> Microsoft::Graphics::Canvas::CanvasSwapChain consume_Microsoft_Graphics_Canvas_ICanvasSwapChainStatics<D>::CreateForCoreWindow(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::UI::Core::CoreWindow const& coreWindow, float dpi) const
{
    Microsoft::Graphics::Canvas::CanvasSwapChain swapChain{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasSwapChainStatics)->CreateForCoreWindowWithDpi(get_abi(resourceCreator), get_abi(coreWindow), dpi, put_abi(swapChain)));
    return swapChain;
}

template <typename D> Microsoft::Graphics::Canvas::CanvasSwapChain consume_Microsoft_Graphics_Canvas_ICanvasSwapChainStatics<D>::CreateForCoreWindow(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::UI::Core::CoreWindow const& coreWindow, float width, float height, float dpi, Windows::Graphics::DirectX::DirectXPixelFormat const& format, int32_t bufferCount) const
{
    Microsoft::Graphics::Canvas::CanvasSwapChain swapChain{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasSwapChainStatics)->CreateForCoreWindowWithAllOptions(get_abi(resourceCreator), get_abi(coreWindow), width, height, dpi, get_abi(format), bufferCount, put_abi(swapChain)));
    return swapChain;
}

template <typename D> Microsoft::Graphics::Canvas::CanvasDevice consume_Microsoft_Graphics_Canvas_ICanvasVirtualBitmap<D>::Device() const
{
    Microsoft::Graphics::Canvas::CanvasDevice value{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasVirtualBitmap)->get_Device(put_abi(value)));
    return value;
}

template <typename D> bool consume_Microsoft_Graphics_Canvas_ICanvasVirtualBitmap<D>::IsCachedOnDemand() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasVirtualBitmap)->get_IsCachedOnDemand(&value));
    return value;
}

template <typename D> Windows::Graphics::Imaging::BitmapSize consume_Microsoft_Graphics_Canvas_ICanvasVirtualBitmap<D>::SizeInPixels() const
{
    Windows::Graphics::Imaging::BitmapSize value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasVirtualBitmap)->get_SizeInPixels(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Size consume_Microsoft_Graphics_Canvas_ICanvasVirtualBitmap<D>::Size() const
{
    Windows::Foundation::Size value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasVirtualBitmap)->get_Size(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Rect consume_Microsoft_Graphics_Canvas_ICanvasVirtualBitmap<D>::Bounds() const
{
    Windows::Foundation::Rect value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasVirtualBitmap)->get_Bounds(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::CanvasVirtualBitmap> consume_Microsoft_Graphics_Canvas_ICanvasVirtualBitmapStatics<D>::LoadAsync(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, param::hstring const& fileName) const
{
    Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::CanvasVirtualBitmap> value{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasVirtualBitmapStatics)->LoadAsyncFromFileName(get_abi(resourceCreator), get_abi(fileName), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::CanvasVirtualBitmap> consume_Microsoft_Graphics_Canvas_ICanvasVirtualBitmapStatics<D>::LoadAsync(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, param::hstring const& fileName, Microsoft::Graphics::Canvas::CanvasVirtualBitmapOptions const& options) const
{
    Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::CanvasVirtualBitmap> value{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasVirtualBitmapStatics)->LoadAsyncFromFileNameWithOptions(get_abi(resourceCreator), get_abi(fileName), get_abi(options), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::CanvasVirtualBitmap> consume_Microsoft_Graphics_Canvas_ICanvasVirtualBitmapStatics<D>::LoadAsync(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, param::hstring const& fileName, Microsoft::Graphics::Canvas::CanvasVirtualBitmapOptions const& options, Microsoft::Graphics::Canvas::CanvasAlphaMode const& alpha) const
{
    Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::CanvasVirtualBitmap> value{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasVirtualBitmapStatics)->LoadAsyncFromFileNameWithOptionsAndAlpha(get_abi(resourceCreator), get_abi(fileName), get_abi(options), get_abi(alpha), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::CanvasVirtualBitmap> consume_Microsoft_Graphics_Canvas_ICanvasVirtualBitmapStatics<D>::LoadAsync(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Foundation::Uri const& uri) const
{
    Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::CanvasVirtualBitmap> value{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasVirtualBitmapStatics)->LoadAsyncFromUri(get_abi(resourceCreator), get_abi(uri), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::CanvasVirtualBitmap> consume_Microsoft_Graphics_Canvas_ICanvasVirtualBitmapStatics<D>::LoadAsync(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Foundation::Uri const& uri, Microsoft::Graphics::Canvas::CanvasVirtualBitmapOptions const& options) const
{
    Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::CanvasVirtualBitmap> value{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasVirtualBitmapStatics)->LoadAsyncFromUriWithOptions(get_abi(resourceCreator), get_abi(uri), get_abi(options), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::CanvasVirtualBitmap> consume_Microsoft_Graphics_Canvas_ICanvasVirtualBitmapStatics<D>::LoadAsync(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Foundation::Uri const& uri, Microsoft::Graphics::Canvas::CanvasVirtualBitmapOptions const& options, Microsoft::Graphics::Canvas::CanvasAlphaMode const& alpha) const
{
    Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::CanvasVirtualBitmap> value{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasVirtualBitmapStatics)->LoadAsyncFromUriWithOptionsAndAlpha(get_abi(resourceCreator), get_abi(uri), get_abi(options), get_abi(alpha), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::CanvasVirtualBitmap> consume_Microsoft_Graphics_Canvas_ICanvasVirtualBitmapStatics<D>::LoadAsync(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Storage::Streams::IRandomAccessStream const& stream) const
{
    Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::CanvasVirtualBitmap> value{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasVirtualBitmapStatics)->LoadAsyncFromStream(get_abi(resourceCreator), get_abi(stream), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::CanvasVirtualBitmap> consume_Microsoft_Graphics_Canvas_ICanvasVirtualBitmapStatics<D>::LoadAsync(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Storage::Streams::IRandomAccessStream const& stream, Microsoft::Graphics::Canvas::CanvasVirtualBitmapOptions const& options) const
{
    Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::CanvasVirtualBitmap> value{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasVirtualBitmapStatics)->LoadAsyncFromStreamWithOptions(get_abi(resourceCreator), get_abi(stream), get_abi(options), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::CanvasVirtualBitmap> consume_Microsoft_Graphics_Canvas_ICanvasVirtualBitmapStatics<D>::LoadAsync(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Storage::Streams::IRandomAccessStream const& stream, Microsoft::Graphics::Canvas::CanvasVirtualBitmapOptions const& options, Microsoft::Graphics::Canvas::CanvasAlphaMode const& alpha) const
{
    Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::CanvasVirtualBitmap> value{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::ICanvasVirtualBitmapStatics)->LoadAsyncFromStreamWithOptionsAndAlpha(get_abi(resourceCreator), get_abi(stream), get_abi(options), get_abi(alpha), put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::ICanvasActiveLayer> : produce_base<D, Microsoft::Graphics::Canvas::ICanvasActiveLayer>
{};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::ICanvasBitmap> : produce_base<D, Microsoft::Graphics::Canvas::ICanvasBitmap>
{
    HRESULT __stdcall get_SizeInPixels(struct_of<8>* size) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *size = detach_abi(this->shim().SizeInPixels());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Size(Windows::Foundation::Size* size) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *size = detach_abi(this->shim().Size());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Bounds(Windows::Foundation::Rect* bounds) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *bounds = detach_abi(this->shim().Bounds());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Format(Windows::Graphics::DirectX::DirectXPixelFormat* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Format());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AlphaMode(Microsoft::Graphics::Canvas::CanvasAlphaMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AlphaMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SaveToFileAsync(HSTRING fileName, ::IUnknown** asyncAction) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncAction = detach_abi(this->shim().SaveAsync(*reinterpret_cast<hstring const*>(&fileName)));
            return S_OK;
        }
        catch (...)
        {
            *asyncAction = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SaveToFileWithBitmapFileFormatAsync(HSTRING fileName, Microsoft::Graphics::Canvas::CanvasBitmapFileFormat fileFormat, ::IUnknown** asyncAction) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncAction = detach_abi(this->shim().SaveAsync(*reinterpret_cast<hstring const*>(&fileName), *reinterpret_cast<Microsoft::Graphics::Canvas::CanvasBitmapFileFormat const*>(&fileFormat)));
            return S_OK;
        }
        catch (...)
        {
            *asyncAction = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SaveToFileWithBitmapFileFormatAndQualityAsync(HSTRING fileName, Microsoft::Graphics::Canvas::CanvasBitmapFileFormat fileFormat, float quality, ::IUnknown** asyncAction) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncAction = detach_abi(this->shim().SaveAsync(*reinterpret_cast<hstring const*>(&fileName), *reinterpret_cast<Microsoft::Graphics::Canvas::CanvasBitmapFileFormat const*>(&fileFormat), quality));
            return S_OK;
        }
        catch (...)
        {
            *asyncAction = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SaveToStreamAsync(::IUnknown* stream, Microsoft::Graphics::Canvas::CanvasBitmapFileFormat fileFormat, ::IUnknown** asyncAction) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncAction = detach_abi(this->shim().SaveAsync(*reinterpret_cast<Windows::Storage::Streams::IRandomAccessStream const*>(&stream), *reinterpret_cast<Microsoft::Graphics::Canvas::CanvasBitmapFileFormat const*>(&fileFormat)));
            return S_OK;
        }
        catch (...)
        {
            *asyncAction = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SaveToStreamWithQualityAsync(::IUnknown* stream, Microsoft::Graphics::Canvas::CanvasBitmapFileFormat fileFormat, float quality, ::IUnknown** asyncAction) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncAction = detach_abi(this->shim().SaveAsync(*reinterpret_cast<Windows::Storage::Streams::IRandomAccessStream const*>(&stream), *reinterpret_cast<Microsoft::Graphics::Canvas::CanvasBitmapFileFormat const*>(&fileFormat), quality));
            return S_OK;
        }
        catch (...)
        {
            *asyncAction = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetPixelBytes(uint32_t* __valueElementsSize, uint8_t** valueElements) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            std::tie(*__valueElementsSize, *valueElements) = detach_abi(this->shim().GetPixelBytes());
            return S_OK;
        }
        catch (...)
        {
            *__valueElementsSize = 0;
            *valueElements = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetPixelBytesWithSubrectangle(int32_t left, int32_t top, int32_t width, int32_t height, uint32_t* __valueElementsSize, uint8_t** valueElements) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            std::tie(*__valueElementsSize, *valueElements) = detach_abi(this->shim().GetPixelBytes(left, top, width, height));
            return S_OK;
        }
        catch (...)
        {
            *__valueElementsSize = 0;
            *valueElements = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetPixelBytesWithBuffer(::IUnknown* buffer) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GetPixelBytes(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&buffer));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetPixelBytesWithBufferAndSubrectangle(::IUnknown* buffer, int32_t left, int32_t top, int32_t width, int32_t height) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GetPixelBytes(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&buffer), left, top, width, height);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetPixelColors(uint32_t* __valueElementsSize, struct_of<4>** valueElements) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            std::tie(*__valueElementsSize, *valueElements) = detach_abi(this->shim().GetPixelColors());
            return S_OK;
        }
        catch (...)
        {
            *__valueElementsSize = 0;
            *valueElements = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetPixelColorsWithSubrectangle(int32_t left, int32_t top, int32_t width, int32_t height, uint32_t* __valueElementsSize, struct_of<4>** valueElements) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            std::tie(*__valueElementsSize, *valueElements) = detach_abi(this->shim().GetPixelColors(left, top, width, height));
            return S_OK;
        }
        catch (...)
        {
            *__valueElementsSize = 0;
            *valueElements = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetPixelBytes(uint32_t __valueElementsSize, uint8_t* valueElements) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetPixelBytes(array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(valueElements), reinterpret_cast<uint8_t const *>(valueElements) + __valueElementsSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetPixelBytesWithSubrectangle(uint32_t __valueElementsSize, uint8_t* valueElements, int32_t left, int32_t top, int32_t width, int32_t height) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetPixelBytes(array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(valueElements), reinterpret_cast<uint8_t const *>(valueElements) + __valueElementsSize), left, top, width, height);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetPixelBytesWithBuffer(::IUnknown* buffer) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetPixelBytes(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&buffer));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetPixelBytesWithBufferAndSubrectangle(::IUnknown* buffer, int32_t left, int32_t top, int32_t width, int32_t height) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetPixelBytes(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&buffer), left, top, width, height);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetPixelColors(uint32_t __valueElementsSize, struct_of<4>* valueElements) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetPixelColors(array_view<Windows::UI::Color const>(reinterpret_cast<Windows::UI::Color const *>(valueElements), reinterpret_cast<Windows::UI::Color const *>(valueElements) + __valueElementsSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetPixelColorsWithSubrectangle(uint32_t __valueElementsSize, struct_of<4>* valueElements, int32_t left, int32_t top, int32_t width, int32_t height) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetPixelColors(array_view<Windows::UI::Color const>(reinterpret_cast<Windows::UI::Color const *>(valueElements), reinterpret_cast<Windows::UI::Color const *>(valueElements) + __valueElementsSize), left, top, width, height);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CopyPixelsFromBitmap(::IUnknown* otherBitmap) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CopyPixelsFromBitmap(*reinterpret_cast<Microsoft::Graphics::Canvas::CanvasBitmap const*>(&otherBitmap));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CopyPixelsFromBitmapWithDestPoint(::IUnknown* otherBitmap, int32_t destX, int32_t destY) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CopyPixelsFromBitmap(*reinterpret_cast<Microsoft::Graphics::Canvas::CanvasBitmap const*>(&otherBitmap), destX, destY);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CopyPixelsFromBitmapWithDestPointAndSourceRect(::IUnknown* otherBitmap, int32_t destX, int32_t destY, int32_t sourceRectLeft, int32_t sourceRectTop, int32_t sourceRectWidth, int32_t sourceRectHeight) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CopyPixelsFromBitmap(*reinterpret_cast<Microsoft::Graphics::Canvas::CanvasBitmap const*>(&otherBitmap), destX, destY, sourceRectLeft, sourceRectTop, sourceRectWidth, sourceRectHeight);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::ICanvasBitmapFactory> : produce_base<D, Microsoft::Graphics::Canvas::ICanvasBitmapFactory>
{};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::ICanvasBitmapStatics> : produce_base<D, Microsoft::Graphics::Canvas::ICanvasBitmapStatics>
{
    HRESULT __stdcall CreateFromDirect3D11Surface(::IUnknown* resourceCreator, ::IUnknown* surface, ::IUnknown** bitmap) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *bitmap = detach_abi(this->shim().CreateFromDirect3D11Surface(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator), *reinterpret_cast<Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const*>(&surface)));
            return S_OK;
        }
        catch (...)
        {
            *bitmap = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateFromDirect3D11SurfaceWithDpi(::IUnknown* resourceCreator, ::IUnknown* surface, float dpi, ::IUnknown** bitmap) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *bitmap = detach_abi(this->shim().CreateFromDirect3D11Surface(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator), *reinterpret_cast<Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const*>(&surface), dpi));
            return S_OK;
        }
        catch (...)
        {
            *bitmap = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateFromDirect3D11SurfaceWithDpiAndAlpha(::IUnknown* resourceCreator, ::IUnknown* surface, float dpi, Microsoft::Graphics::Canvas::CanvasAlphaMode alpha, ::IUnknown** bitmap) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *bitmap = detach_abi(this->shim().CreateFromDirect3D11Surface(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator), *reinterpret_cast<Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const*>(&surface), dpi, *reinterpret_cast<Microsoft::Graphics::Canvas::CanvasAlphaMode const*>(&alpha)));
            return S_OK;
        }
        catch (...)
        {
            *bitmap = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateFromBytes(::IUnknown* resourceCreator, uint32_t __bytesSize, uint8_t* bytes, int32_t widthInPixels, int32_t heightInPixels, Windows::Graphics::DirectX::DirectXPixelFormat format, ::IUnknown** bitmap) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *bitmap = detach_abi(this->shim().CreateFromBytes(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator), array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(bytes), reinterpret_cast<uint8_t const *>(bytes) + __bytesSize), widthInPixels, heightInPixels, *reinterpret_cast<Windows::Graphics::DirectX::DirectXPixelFormat const*>(&format)));
            return S_OK;
        }
        catch (...)
        {
            *bitmap = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateFromBytesWithDpi(::IUnknown* resourceCreator, uint32_t __bytesSize, uint8_t* bytes, int32_t widthInPixels, int32_t heightInPixels, Windows::Graphics::DirectX::DirectXPixelFormat format, float dpi, ::IUnknown** bitmap) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *bitmap = detach_abi(this->shim().CreateFromBytes(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator), array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(bytes), reinterpret_cast<uint8_t const *>(bytes) + __bytesSize), widthInPixels, heightInPixels, *reinterpret_cast<Windows::Graphics::DirectX::DirectXPixelFormat const*>(&format), dpi));
            return S_OK;
        }
        catch (...)
        {
            *bitmap = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateFromBytesWithDpiAndAlpha(::IUnknown* resourceCreator, uint32_t __bytesSize, uint8_t* bytes, int32_t widthInPixels, int32_t heightInPixels, Windows::Graphics::DirectX::DirectXPixelFormat format, float dpi, Microsoft::Graphics::Canvas::CanvasAlphaMode alpha, ::IUnknown** bitmap) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *bitmap = detach_abi(this->shim().CreateFromBytes(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator), array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(bytes), reinterpret_cast<uint8_t const *>(bytes) + __bytesSize), widthInPixels, heightInPixels, *reinterpret_cast<Windows::Graphics::DirectX::DirectXPixelFormat const*>(&format), dpi, *reinterpret_cast<Microsoft::Graphics::Canvas::CanvasAlphaMode const*>(&alpha)));
            return S_OK;
        }
        catch (...)
        {
            *bitmap = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateFromBytesWithBuffer(::IUnknown* resourceCreator, ::IUnknown* buffer, int32_t widthInPixels, int32_t heightInPixels, Windows::Graphics::DirectX::DirectXPixelFormat format, ::IUnknown** bitmap) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *bitmap = detach_abi(this->shim().CreateFromBytes(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator), *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&buffer), widthInPixels, heightInPixels, *reinterpret_cast<Windows::Graphics::DirectX::DirectXPixelFormat const*>(&format)));
            return S_OK;
        }
        catch (...)
        {
            *bitmap = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateFromBytesWithBufferAndDpi(::IUnknown* resourceCreator, ::IUnknown* buffer, int32_t widthInPixels, int32_t heightInPixels, Windows::Graphics::DirectX::DirectXPixelFormat format, float dpi, ::IUnknown** bitmap) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *bitmap = detach_abi(this->shim().CreateFromBytes(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator), *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&buffer), widthInPixels, heightInPixels, *reinterpret_cast<Windows::Graphics::DirectX::DirectXPixelFormat const*>(&format), dpi));
            return S_OK;
        }
        catch (...)
        {
            *bitmap = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateFromBytesWithBufferAndDpiAndAlpha(::IUnknown* resourceCreator, ::IUnknown* buffer, int32_t widthInPixels, int32_t heightInPixels, Windows::Graphics::DirectX::DirectXPixelFormat format, float dpi, Microsoft::Graphics::Canvas::CanvasAlphaMode alpha, ::IUnknown** bitmap) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *bitmap = detach_abi(this->shim().CreateFromBytes(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator), *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&buffer), widthInPixels, heightInPixels, *reinterpret_cast<Windows::Graphics::DirectX::DirectXPixelFormat const*>(&format), dpi, *reinterpret_cast<Microsoft::Graphics::Canvas::CanvasAlphaMode const*>(&alpha)));
            return S_OK;
        }
        catch (...)
        {
            *bitmap = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateFromColors(::IUnknown* resourceCreator, uint32_t __colorsSize, struct_of<4>* colors, int32_t widthInPixels, int32_t heightInPixels, ::IUnknown** bitmap) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *bitmap = detach_abi(this->shim().CreateFromColors(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator), array_view<Windows::UI::Color const>(reinterpret_cast<Windows::UI::Color const *>(colors), reinterpret_cast<Windows::UI::Color const *>(colors) + __colorsSize), widthInPixels, heightInPixels));
            return S_OK;
        }
        catch (...)
        {
            *bitmap = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateFromColorsWithDpi(::IUnknown* resourceCreator, uint32_t __colorsSize, struct_of<4>* colors, int32_t widthInPixels, int32_t heightInPixels, float dpi, ::IUnknown** bitmap) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *bitmap = detach_abi(this->shim().CreateFromColors(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator), array_view<Windows::UI::Color const>(reinterpret_cast<Windows::UI::Color const *>(colors), reinterpret_cast<Windows::UI::Color const *>(colors) + __colorsSize), widthInPixels, heightInPixels, dpi));
            return S_OK;
        }
        catch (...)
        {
            *bitmap = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateFromColorsWithDpiAndAlpha(::IUnknown* resourceCreator, uint32_t __colorsSize, struct_of<4>* colors, int32_t widthInPixels, int32_t heightInPixels, float dpi, Microsoft::Graphics::Canvas::CanvasAlphaMode alpha, ::IUnknown** bitmap) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *bitmap = detach_abi(this->shim().CreateFromColors(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator), array_view<Windows::UI::Color const>(reinterpret_cast<Windows::UI::Color const *>(colors), reinterpret_cast<Windows::UI::Color const *>(colors) + __colorsSize), widthInPixels, heightInPixels, dpi, *reinterpret_cast<Microsoft::Graphics::Canvas::CanvasAlphaMode const*>(&alpha)));
            return S_OK;
        }
        catch (...)
        {
            *bitmap = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateFromSoftwareBitmap(::IUnknown* resourceCreator, ::IUnknown* sourceBitmap, ::IUnknown** bitmap) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *bitmap = detach_abi(this->shim().CreateFromSoftwareBitmap(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator), *reinterpret_cast<Windows::Graphics::Imaging::SoftwareBitmap const*>(&sourceBitmap)));
            return S_OK;
        }
        catch (...)
        {
            *bitmap = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall LoadAsyncFromHstring(::IUnknown* resourceCreator, HSTRING fileName, ::IUnknown** canvasBitmap) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *canvasBitmap = detach_abi(this->shim().LoadAsync(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator), *reinterpret_cast<hstring const*>(&fileName)));
            return S_OK;
        }
        catch (...)
        {
            *canvasBitmap = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall LoadAsyncFromHstringWithDpi(::IUnknown* resourceCreator, HSTRING fileName, float dpi, ::IUnknown** canvasBitmap) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *canvasBitmap = detach_abi(this->shim().LoadAsync(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator), *reinterpret_cast<hstring const*>(&fileName), dpi));
            return S_OK;
        }
        catch (...)
        {
            *canvasBitmap = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall LoadAsyncFromHstringWithDpiAndAlpha(::IUnknown* resourceCreator, HSTRING fileName, float dpi, Microsoft::Graphics::Canvas::CanvasAlphaMode alpha, ::IUnknown** canvasBitmap) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *canvasBitmap = detach_abi(this->shim().LoadAsync(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator), *reinterpret_cast<hstring const*>(&fileName), dpi, *reinterpret_cast<Microsoft::Graphics::Canvas::CanvasAlphaMode const*>(&alpha)));
            return S_OK;
        }
        catch (...)
        {
            *canvasBitmap = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall LoadAsyncFromUri(::IUnknown* resourceCreator, ::IUnknown* uri, ::IUnknown** canvasBitmap) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *canvasBitmap = detach_abi(this->shim().LoadAsync(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator), *reinterpret_cast<Windows::Foundation::Uri const*>(&uri)));
            return S_OK;
        }
        catch (...)
        {
            *canvasBitmap = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall LoadAsyncFromUriWithDpi(::IUnknown* resourceCreator, ::IUnknown* uri, float dpi, ::IUnknown** canvasBitmap) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *canvasBitmap = detach_abi(this->shim().LoadAsync(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator), *reinterpret_cast<Windows::Foundation::Uri const*>(&uri), dpi));
            return S_OK;
        }
        catch (...)
        {
            *canvasBitmap = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall LoadAsyncFromUriWithDpiAndAlpha(::IUnknown* resourceCreator, ::IUnknown* uri, float dpi, Microsoft::Graphics::Canvas::CanvasAlphaMode alpha, ::IUnknown** canvasBitmap) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *canvasBitmap = detach_abi(this->shim().LoadAsync(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator), *reinterpret_cast<Windows::Foundation::Uri const*>(&uri), dpi, *reinterpret_cast<Microsoft::Graphics::Canvas::CanvasAlphaMode const*>(&alpha)));
            return S_OK;
        }
        catch (...)
        {
            *canvasBitmap = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall LoadAsyncFromStream(::IUnknown* resourceCreator, ::IUnknown* stream, ::IUnknown** canvasBitmap) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *canvasBitmap = detach_abi(this->shim().LoadAsync(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator), *reinterpret_cast<Windows::Storage::Streams::IRandomAccessStream const*>(&stream)));
            return S_OK;
        }
        catch (...)
        {
            *canvasBitmap = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall LoadAsyncFromStreamWithDpi(::IUnknown* resourceCreator, ::IUnknown* stream, float dpi, ::IUnknown** canvasBitmap) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *canvasBitmap = detach_abi(this->shim().LoadAsync(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator), *reinterpret_cast<Windows::Storage::Streams::IRandomAccessStream const*>(&stream), dpi));
            return S_OK;
        }
        catch (...)
        {
            *canvasBitmap = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall LoadAsyncFromStreamWithDpiAndAlpha(::IUnknown* resourceCreator, ::IUnknown* stream, float dpi, Microsoft::Graphics::Canvas::CanvasAlphaMode alpha, ::IUnknown** canvasBitmap) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *canvasBitmap = detach_abi(this->shim().LoadAsync(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator), *reinterpret_cast<Windows::Storage::Streams::IRandomAccessStream const*>(&stream), dpi, *reinterpret_cast<Microsoft::Graphics::Canvas::CanvasAlphaMode const*>(&alpha)));
            return S_OK;
        }
        catch (...)
        {
            *canvasBitmap = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::ICanvasCommandList> : produce_base<D, Microsoft::Graphics::Canvas::ICanvasCommandList>
{
    HRESULT __stdcall CreateDrawingSession(::IUnknown** drawingSession) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *drawingSession = detach_abi(this->shim().CreateDrawingSession());
            return S_OK;
        }
        catch (...)
        {
            *drawingSession = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Device(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Device());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::ICanvasCommandListFactory> : produce_base<D, Microsoft::Graphics::Canvas::ICanvasCommandListFactory>
{
    HRESULT __stdcall Create(::IUnknown* resourceCreator, ::IUnknown** commandList) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *commandList = detach_abi(this->shim().Create(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator)));
            return S_OK;
        }
        catch (...)
        {
            *commandList = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::ICanvasDevice> : produce_base<D, Microsoft::Graphics::Canvas::ICanvasDevice>
{
    HRESULT __stdcall get_ForceSoftwareRenderer(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ForceSoftwareRenderer());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaximumBitmapSizeInPixels(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaximumBitmapSizeInPixels());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IsPixelFormatSupported(Windows::Graphics::DirectX::DirectXPixelFormat pixelFormat, bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsPixelFormatSupported(*reinterpret_cast<Windows::Graphics::DirectX::DirectXPixelFormat const*>(&pixelFormat)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IsBufferPrecisionSupported(Microsoft::Graphics::Canvas::CanvasBufferPrecision bufferPrecision, bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsBufferPrecisionSupported(*reinterpret_cast<Microsoft::Graphics::Canvas::CanvasBufferPrecision const*>(&bufferPrecision)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaximumCacheSize(uint64_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaximumCacheSize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaximumCacheSize(uint64_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaximumCacheSize(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LowPriority(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LowPriority());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LowPriority(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LowPriority(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_DeviceLost(::IUnknown* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().DeviceLost(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Microsoft::Graphics::Canvas::CanvasDevice, Windows::Foundation::IInspectable> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_DeviceLost(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DeviceLost(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IsDeviceLost(int32_t hresult, bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsDeviceLost(hresult));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RaiseDeviceLost() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RaiseDeviceLost();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Lock(::IUnknown** lock) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *lock = detach_abi(this->shim().Lock());
            return S_OK;
        }
        catch (...)
        {
            *lock = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::ICanvasDeviceFactory> : produce_base<D, Microsoft::Graphics::Canvas::ICanvasDeviceFactory>
{
    HRESULT __stdcall CreateWithForceSoftwareRendererOption(bool forceSoftwareRenderer, ::IUnknown** canvasDevice) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *canvasDevice = detach_abi(this->shim().CreateWithForceSoftwareRendererOption(forceSoftwareRenderer));
            return S_OK;
        }
        catch (...)
        {
            *canvasDevice = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::ICanvasDeviceStatics> : produce_base<D, Microsoft::Graphics::Canvas::ICanvasDeviceStatics>
{
    HRESULT __stdcall CreateFromDirect3D11Device(::IUnknown* direct3DDevice, ::IUnknown** canvasDevice) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *canvasDevice = detach_abi(this->shim().CreateFromDirect3D11Device(*reinterpret_cast<Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice const*>(&direct3DDevice)));
            return S_OK;
        }
        catch (...)
        {
            *canvasDevice = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetSharedDevice(::IUnknown** canvasDevice) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *canvasDevice = detach_abi(this->shim().GetSharedDevice());
            return S_OK;
        }
        catch (...)
        {
            *canvasDevice = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetSharedDeviceWithForceSoftwareRenderer(bool forceSoftwareRenderer, ::IUnknown** canvasDevice) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *canvasDevice = detach_abi(this->shim().GetSharedDevice(forceSoftwareRenderer));
            return S_OK;
        }
        catch (...)
        {
            *canvasDevice = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DebugLevel(Microsoft::Graphics::Canvas::CanvasDebugLevel value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DebugLevel(*reinterpret_cast<Microsoft::Graphics::Canvas::CanvasDebugLevel const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DebugLevel(Microsoft::Graphics::Canvas::CanvasDebugLevel* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DebugLevel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::ICanvasDrawingSession> : produce_base<D, Microsoft::Graphics::Canvas::ICanvasDrawingSession>
{
    HRESULT __stdcall Clear(struct_of<4> color) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Clear(*reinterpret_cast<Windows::UI::Color const*>(&color));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ClearHdr(Windows::Foundation::Numerics::float4 color) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Clear(*reinterpret_cast<Windows::Foundation::Numerics::float4 const*>(&color));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Flush() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Flush();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawImageAtOrigin(::IUnknown* image) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawImage(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasImage const*>(&image));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawImageAtOffset(::IUnknown* image, Windows::Foundation::Numerics::float2 offset) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawImage(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasImage const*>(&image), *reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&offset));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawImageAtCoords(::IUnknown* image, float x, float y) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawImage(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasImage const*>(&image), x, y);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawImageToRect(::IUnknown* bitmap, Windows::Foundation::Rect destinationRectangle) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawImage(*reinterpret_cast<Microsoft::Graphics::Canvas::CanvasBitmap const*>(&bitmap), *reinterpret_cast<Windows::Foundation::Rect const*>(&destinationRectangle));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawImageAtOffsetWithSourceRect(::IUnknown* image, Windows::Foundation::Numerics::float2 offset, Windows::Foundation::Rect sourceRectangle) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawImage(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasImage const*>(&image), *reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&offset), *reinterpret_cast<Windows::Foundation::Rect const*>(&sourceRectangle));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawImageAtCoordsWithSourceRect(::IUnknown* image, float x, float y, Windows::Foundation::Rect sourceRectangle) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawImage(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasImage const*>(&image), x, y, *reinterpret_cast<Windows::Foundation::Rect const*>(&sourceRectangle));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawImageToRectWithSourceRect(::IUnknown* image, Windows::Foundation::Rect destinationRectangle, Windows::Foundation::Rect sourceRectangle) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawImage(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasImage const*>(&image), *reinterpret_cast<Windows::Foundation::Rect const*>(&destinationRectangle), *reinterpret_cast<Windows::Foundation::Rect const*>(&sourceRectangle));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawImageAtOffsetWithSourceRectAndOpacity(::IUnknown* image, Windows::Foundation::Numerics::float2 offset, Windows::Foundation::Rect sourceRectangle, float opacity) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawImage(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasImage const*>(&image), *reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&offset), *reinterpret_cast<Windows::Foundation::Rect const*>(&sourceRectangle), opacity);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawImageAtCoordsWithSourceRectAndOpacity(::IUnknown* image, float x, float y, Windows::Foundation::Rect sourceRectangle, float opacity) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawImage(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasImage const*>(&image), x, y, *reinterpret_cast<Windows::Foundation::Rect const*>(&sourceRectangle), opacity);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawImageToRectWithSourceRectAndOpacity(::IUnknown* image, Windows::Foundation::Rect destinationRectangle, Windows::Foundation::Rect sourceRectangle, float opacity) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawImage(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasImage const*>(&image), *reinterpret_cast<Windows::Foundation::Rect const*>(&destinationRectangle), *reinterpret_cast<Windows::Foundation::Rect const*>(&sourceRectangle), opacity);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawImageAtOffsetWithSourceRectAndOpacityAndInterpolation(::IUnknown* image, Windows::Foundation::Numerics::float2 offset, Windows::Foundation::Rect sourceRectangle, float opacity, Microsoft::Graphics::Canvas::CanvasImageInterpolation interpolation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawImage(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasImage const*>(&image), *reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&offset), *reinterpret_cast<Windows::Foundation::Rect const*>(&sourceRectangle), opacity, *reinterpret_cast<Microsoft::Graphics::Canvas::CanvasImageInterpolation const*>(&interpolation));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawImageAtCoordsWithSourceRectAndOpacityAndInterpolation(::IUnknown* image, float x, float y, Windows::Foundation::Rect sourceRectangle, float opacity, Microsoft::Graphics::Canvas::CanvasImageInterpolation interpolation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawImage(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasImage const*>(&image), x, y, *reinterpret_cast<Windows::Foundation::Rect const*>(&sourceRectangle), opacity, *reinterpret_cast<Microsoft::Graphics::Canvas::CanvasImageInterpolation const*>(&interpolation));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawImageToRectWithSourceRectAndOpacityAndInterpolation(::IUnknown* image, Windows::Foundation::Rect destinationRectangle, Windows::Foundation::Rect sourceRectangle, float opacity, Microsoft::Graphics::Canvas::CanvasImageInterpolation interpolation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawImage(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasImage const*>(&image), *reinterpret_cast<Windows::Foundation::Rect const*>(&destinationRectangle), *reinterpret_cast<Windows::Foundation::Rect const*>(&sourceRectangle), opacity, *reinterpret_cast<Microsoft::Graphics::Canvas::CanvasImageInterpolation const*>(&interpolation));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawImageAtOffsetWithSourceRectAndOpacityAndInterpolationAndComposite(::IUnknown* image, Windows::Foundation::Numerics::float2 offset, Windows::Foundation::Rect sourceRectangle, float opacity, Microsoft::Graphics::Canvas::CanvasImageInterpolation interpolation, Microsoft::Graphics::Canvas::CanvasComposite composite) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawImage(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasImage const*>(&image), *reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&offset), *reinterpret_cast<Windows::Foundation::Rect const*>(&sourceRectangle), opacity, *reinterpret_cast<Microsoft::Graphics::Canvas::CanvasImageInterpolation const*>(&interpolation), *reinterpret_cast<Microsoft::Graphics::Canvas::CanvasComposite const*>(&composite));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawImageAtCoordsWithSourceRectAndOpacityAndInterpolationAndComposite(::IUnknown* image, float x, float y, Windows::Foundation::Rect sourceRectangle, float opacity, Microsoft::Graphics::Canvas::CanvasImageInterpolation interpolation, Microsoft::Graphics::Canvas::CanvasComposite composite) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawImage(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasImage const*>(&image), x, y, *reinterpret_cast<Windows::Foundation::Rect const*>(&sourceRectangle), opacity, *reinterpret_cast<Microsoft::Graphics::Canvas::CanvasImageInterpolation const*>(&interpolation), *reinterpret_cast<Microsoft::Graphics::Canvas::CanvasComposite const*>(&composite));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawImageToRectWithSourceRectAndOpacityAndInterpolationAndComposite(::IUnknown* image, Windows::Foundation::Rect destinationRectangle, Windows::Foundation::Rect sourceRectangle, float opacity, Microsoft::Graphics::Canvas::CanvasImageInterpolation interpolation, Microsoft::Graphics::Canvas::CanvasComposite composite) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawImage(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasImage const*>(&image), *reinterpret_cast<Windows::Foundation::Rect const*>(&destinationRectangle), *reinterpret_cast<Windows::Foundation::Rect const*>(&sourceRectangle), opacity, *reinterpret_cast<Microsoft::Graphics::Canvas::CanvasImageInterpolation const*>(&interpolation), *reinterpret_cast<Microsoft::Graphics::Canvas::CanvasComposite const*>(&composite));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawImageAtOffsetWithSourceRectAndOpacityAndInterpolationAndPerspective(::IUnknown* bitmap, Windows::Foundation::Numerics::float2 offset, Windows::Foundation::Rect sourceRectangle, float opacity, Microsoft::Graphics::Canvas::CanvasImageInterpolation interpolation, Windows::Foundation::Numerics::float4x4 perspective) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawImage(*reinterpret_cast<Microsoft::Graphics::Canvas::CanvasBitmap const*>(&bitmap), *reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&offset), *reinterpret_cast<Windows::Foundation::Rect const*>(&sourceRectangle), opacity, *reinterpret_cast<Microsoft::Graphics::Canvas::CanvasImageInterpolation const*>(&interpolation), *reinterpret_cast<Windows::Foundation::Numerics::float4x4 const*>(&perspective));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawImageAtCoordsWithSourceRectAndOpacityAndInterpolationAndPerspective(::IUnknown* bitmap, float x, float y, Windows::Foundation::Rect sourceRectangle, float opacity, Microsoft::Graphics::Canvas::CanvasImageInterpolation interpolation, Windows::Foundation::Numerics::float4x4 perspective) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawImage(*reinterpret_cast<Microsoft::Graphics::Canvas::CanvasBitmap const*>(&bitmap), x, y, *reinterpret_cast<Windows::Foundation::Rect const*>(&sourceRectangle), opacity, *reinterpret_cast<Microsoft::Graphics::Canvas::CanvasImageInterpolation const*>(&interpolation), *reinterpret_cast<Windows::Foundation::Numerics::float4x4 const*>(&perspective));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawImageToRectWithSourceRectAndOpacityAndInterpolationAndPerspective(::IUnknown* bitmap, Windows::Foundation::Rect destinationRectangle, Windows::Foundation::Rect sourceRectangle, float opacity, Microsoft::Graphics::Canvas::CanvasImageInterpolation interpolation, Windows::Foundation::Numerics::float4x4 perspective) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawImage(*reinterpret_cast<Microsoft::Graphics::Canvas::CanvasBitmap const*>(&bitmap), *reinterpret_cast<Windows::Foundation::Rect const*>(&destinationRectangle), *reinterpret_cast<Windows::Foundation::Rect const*>(&sourceRectangle), opacity, *reinterpret_cast<Microsoft::Graphics::Canvas::CanvasImageInterpolation const*>(&interpolation), *reinterpret_cast<Windows::Foundation::Numerics::float4x4 const*>(&perspective));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawLineWithBrush(Windows::Foundation::Numerics::float2 point0, Windows::Foundation::Numerics::float2 point1, ::IUnknown* brush) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawLine(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&point0), *reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&point1), *reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const*>(&brush));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawLineAtCoordsWithBrush(float x0, float y0, float x1, float y1, ::IUnknown* brush) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawLine(x0, y0, x1, y1, *reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const*>(&brush));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawLineWithColor(Windows::Foundation::Numerics::float2 point0, Windows::Foundation::Numerics::float2 point1, struct_of<4> color) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawLine(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&point0), *reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&point1), *reinterpret_cast<Windows::UI::Color const*>(&color));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawLineAtCoordsWithColor(float x0, float y0, float x1, float y1, struct_of<4> color) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawLine(x0, y0, x1, y1, *reinterpret_cast<Windows::UI::Color const*>(&color));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawLineWithBrushAndStrokeWidth(Windows::Foundation::Numerics::float2 point0, Windows::Foundation::Numerics::float2 point1, ::IUnknown* brush, float strokeWidth) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawLine(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&point0), *reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&point1), *reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const*>(&brush), strokeWidth);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawLineAtCoordsWithBrushAndStrokeWidth(float x0, float y0, float x1, float y1, ::IUnknown* brush, float strokeWidth) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawLine(x0, y0, x1, y1, *reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const*>(&brush), strokeWidth);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawLineWithColorAndStrokeWidth(Windows::Foundation::Numerics::float2 point0, Windows::Foundation::Numerics::float2 point1, struct_of<4> color, float strokeWidth) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawLine(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&point0), *reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&point1), *reinterpret_cast<Windows::UI::Color const*>(&color), strokeWidth);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawLineAtCoordsWithColorAndStrokeWidth(float x0, float y0, float x1, float y1, struct_of<4> color, float strokeWidth) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawLine(x0, y0, x1, y1, *reinterpret_cast<Windows::UI::Color const*>(&color), strokeWidth);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawLineWithBrushAndStrokeWidthAndStrokeStyle(Windows::Foundation::Numerics::float2 point0, Windows::Foundation::Numerics::float2 point1, ::IUnknown* brush, float strokeWidth, ::IUnknown* strokeStyle) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawLine(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&point0), *reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&point1), *reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const*>(&brush), strokeWidth, *reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const*>(&strokeStyle));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawLineAtCoordsWithBrushAndStrokeWidthAndStrokeStyle(float x0, float y0, float x1, float y1, ::IUnknown* brush, float strokeWidth, ::IUnknown* strokeStyle) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawLine(x0, y0, x1, y1, *reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const*>(&brush), strokeWidth, *reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const*>(&strokeStyle));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawLineWithColorAndStrokeWidthAndStrokeStyle(Windows::Foundation::Numerics::float2 point0, Windows::Foundation::Numerics::float2 point1, struct_of<4> color, float strokeWidth, ::IUnknown* strokeStyle) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawLine(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&point0), *reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&point1), *reinterpret_cast<Windows::UI::Color const*>(&color), strokeWidth, *reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const*>(&strokeStyle));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawLineAtCoordsWithColorAndStrokeWidthAndStrokeStyle(float x0, float y0, float x1, float y1, struct_of<4> color, float strokeWidth, ::IUnknown* strokeStyle) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawLine(x0, y0, x1, y1, *reinterpret_cast<Windows::UI::Color const*>(&color), strokeWidth, *reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const*>(&strokeStyle));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawRectangleWithBrush(Windows::Foundation::Rect rect, ::IUnknown* brush) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawRectangle(*reinterpret_cast<Windows::Foundation::Rect const*>(&rect), *reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const*>(&brush));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawRectangleAtCoordsWithBrush(float x, float y, float w, float h, ::IUnknown* brush) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawRectangle(x, y, w, h, *reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const*>(&brush));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawRectangleWithColor(Windows::Foundation::Rect rect, struct_of<4> color) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawRectangle(*reinterpret_cast<Windows::Foundation::Rect const*>(&rect), *reinterpret_cast<Windows::UI::Color const*>(&color));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawRectangleAtCoordsWithColor(float x, float y, float w, float h, struct_of<4> color) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawRectangle(x, y, w, h, *reinterpret_cast<Windows::UI::Color const*>(&color));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawRectangleWithBrushAndStrokeWidth(Windows::Foundation::Rect rect, ::IUnknown* brush, float strokeWidth) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawRectangle(*reinterpret_cast<Windows::Foundation::Rect const*>(&rect), *reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const*>(&brush), strokeWidth);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawRectangleAtCoordsWithBrushAndStrokeWidth(float x, float y, float w, float h, ::IUnknown* brush, float strokeWidth) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawRectangle(x, y, w, h, *reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const*>(&brush), strokeWidth);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawRectangleWithColorAndStrokeWidth(Windows::Foundation::Rect rect, struct_of<4> color, float strokeWidth) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawRectangle(*reinterpret_cast<Windows::Foundation::Rect const*>(&rect), *reinterpret_cast<Windows::UI::Color const*>(&color), strokeWidth);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawRectangleAtCoordsWithColorAndStrokeWidth(float x, float y, float w, float h, struct_of<4> color, float strokeWidth) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawRectangle(x, y, w, h, *reinterpret_cast<Windows::UI::Color const*>(&color), strokeWidth);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawRectangleWithBrushAndStrokeWidthAndStrokeStyle(Windows::Foundation::Rect rect, ::IUnknown* brush, float strokeWidth, ::IUnknown* strokeStyle) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawRectangle(*reinterpret_cast<Windows::Foundation::Rect const*>(&rect), *reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const*>(&brush), strokeWidth, *reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const*>(&strokeStyle));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawRectangleAtCoordsWithBrushAndStrokeWidthAndStrokeStyle(float x, float y, float w, float h, ::IUnknown* brush, float strokeWidth, ::IUnknown* strokeStyle) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawRectangle(x, y, w, h, *reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const*>(&brush), strokeWidth, *reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const*>(&strokeStyle));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawRectangleWithColorAndStrokeWidthAndStrokeStyle(Windows::Foundation::Rect rect, struct_of<4> color, float strokeWidth, ::IUnknown* strokeStyle) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawRectangle(*reinterpret_cast<Windows::Foundation::Rect const*>(&rect), *reinterpret_cast<Windows::UI::Color const*>(&color), strokeWidth, *reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const*>(&strokeStyle));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawRectangleAtCoordsWithColorAndStrokeWidthAndStrokeStyle(float x, float y, float w, float h, struct_of<4> color, float strokeWidth, ::IUnknown* strokeStyle) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawRectangle(x, y, w, h, *reinterpret_cast<Windows::UI::Color const*>(&color), strokeWidth, *reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const*>(&strokeStyle));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FillRectangleWithBrush(Windows::Foundation::Rect rect, ::IUnknown* brush) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FillRectangle(*reinterpret_cast<Windows::Foundation::Rect const*>(&rect), *reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const*>(&brush));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FillRectangleAtCoordsWithBrush(float x, float y, float w, float h, ::IUnknown* brush) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FillRectangle(x, y, w, h, *reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const*>(&brush));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FillRectangleWithColor(Windows::Foundation::Rect rect, struct_of<4> color) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FillRectangle(*reinterpret_cast<Windows::Foundation::Rect const*>(&rect), *reinterpret_cast<Windows::UI::Color const*>(&color));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FillRectangleAtCoordsWithColor(float x, float y, float w, float h, struct_of<4> color) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FillRectangle(x, y, w, h, *reinterpret_cast<Windows::UI::Color const*>(&color));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FillRectangleWithBrushAndOpacityBrush(Windows::Foundation::Rect rect, ::IUnknown* brush, ::IUnknown* opacityBrush) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FillRectangle(*reinterpret_cast<Windows::Foundation::Rect const*>(&rect), *reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const*>(&brush), *reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const*>(&opacityBrush));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FillRectangleAtCoordsWithBrushAndOpacityBrush(float x, float y, float w, float h, ::IUnknown* brush, ::IUnknown* opacityBrush) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FillRectangle(x, y, w, h, *reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const*>(&brush), *reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const*>(&opacityBrush));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawRoundedRectangleWithBrush(Windows::Foundation::Rect rect, float radiusX, float radiusY, ::IUnknown* brush) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawRoundedRectangle(*reinterpret_cast<Windows::Foundation::Rect const*>(&rect), radiusX, radiusY, *reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const*>(&brush));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawRoundedRectangleAtCoordsWithBrush(float x, float y, float w, float h, float radiusX, float radiusY, ::IUnknown* brush) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawRoundedRectangle(x, y, w, h, radiusX, radiusY, *reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const*>(&brush));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawRoundedRectangleWithColor(Windows::Foundation::Rect rect, float radiusX, float radiusY, struct_of<4> color) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawRoundedRectangle(*reinterpret_cast<Windows::Foundation::Rect const*>(&rect), radiusX, radiusY, *reinterpret_cast<Windows::UI::Color const*>(&color));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawRoundedRectangleAtCoordsWithColor(float x, float y, float w, float h, float radiusX, float radiusY, struct_of<4> color) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawRoundedRectangle(x, y, w, h, radiusX, radiusY, *reinterpret_cast<Windows::UI::Color const*>(&color));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawRoundedRectangleWithBrushAndStrokeWidth(Windows::Foundation::Rect rect, float radiusX, float radiusY, ::IUnknown* brush, float strokeWidth) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawRoundedRectangle(*reinterpret_cast<Windows::Foundation::Rect const*>(&rect), radiusX, radiusY, *reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const*>(&brush), strokeWidth);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawRoundedRectangleAtCoordsWithBrushAndStrokeWidth(float x, float y, float w, float h, float radiusX, float radiusY, ::IUnknown* brush, float strokeWidth) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawRoundedRectangle(x, y, w, h, radiusX, radiusY, *reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const*>(&brush), strokeWidth);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawRoundedRectangleWithColorAndStrokeWidth(Windows::Foundation::Rect rect, float radiusX, float radiusY, struct_of<4> color, float strokeWidth) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawRoundedRectangle(*reinterpret_cast<Windows::Foundation::Rect const*>(&rect), radiusX, radiusY, *reinterpret_cast<Windows::UI::Color const*>(&color), strokeWidth);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawRoundedRectangleAtCoordsWithColorAndStrokeWidth(float x, float y, float w, float h, float radiusX, float radiusY, struct_of<4> color, float strokeWidth) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawRoundedRectangle(x, y, w, h, radiusX, radiusY, *reinterpret_cast<Windows::UI::Color const*>(&color), strokeWidth);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawRoundedRectangleWithBrushAndStrokeWidthAndStrokeStyle(Windows::Foundation::Rect rect, float radiusX, float radiusY, ::IUnknown* brush, float strokeWidth, ::IUnknown* strokeStyle) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawRoundedRectangle(*reinterpret_cast<Windows::Foundation::Rect const*>(&rect), radiusX, radiusY, *reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const*>(&brush), strokeWidth, *reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const*>(&strokeStyle));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawRoundedRectangleAtCoordsWithBrushAndStrokeWidthAndStrokeStyle(float x, float y, float w, float h, float radiusX, float radiusY, ::IUnknown* brush, float strokeWidth, ::IUnknown* strokeStyle) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawRoundedRectangle(x, y, w, h, radiusX, radiusY, *reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const*>(&brush), strokeWidth, *reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const*>(&strokeStyle));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawRoundedRectangleWithColorAndStrokeWidthAndStrokeStyle(Windows::Foundation::Rect rect, float radiusX, float radiusY, struct_of<4> color, float strokeWidth, ::IUnknown* strokeStyle) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawRoundedRectangle(*reinterpret_cast<Windows::Foundation::Rect const*>(&rect), radiusX, radiusY, *reinterpret_cast<Windows::UI::Color const*>(&color), strokeWidth, *reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const*>(&strokeStyle));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawRoundedRectangleAtCoordsWithColorAndStrokeWidthAndStrokeStyle(float x, float y, float w, float h, float radiusX, float radiusY, struct_of<4> color, float strokeWidth, ::IUnknown* strokeStyle) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawRoundedRectangle(x, y, w, h, radiusX, radiusY, *reinterpret_cast<Windows::UI::Color const*>(&color), strokeWidth, *reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const*>(&strokeStyle));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FillRoundedRectangleWithBrush(Windows::Foundation::Rect rect, float radiusX, float radiusY, ::IUnknown* brush) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FillRoundedRectangle(*reinterpret_cast<Windows::Foundation::Rect const*>(&rect), radiusX, radiusY, *reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const*>(&brush));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FillRoundedRectangleAtCoordsWithBrush(float x, float y, float w, float h, float radiusX, float radiusY, ::IUnknown* brush) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FillRoundedRectangle(x, y, w, h, radiusX, radiusY, *reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const*>(&brush));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FillRoundedRectangleWithColor(Windows::Foundation::Rect rect, float radiusX, float radiusY, struct_of<4> color) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FillRoundedRectangle(*reinterpret_cast<Windows::Foundation::Rect const*>(&rect), radiusX, radiusY, *reinterpret_cast<Windows::UI::Color const*>(&color));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FillRoundedRectangleAtCoordsWithColor(float x, float y, float w, float h, float radiusX, float radiusY, struct_of<4> color) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FillRoundedRectangle(x, y, w, h, radiusX, radiusY, *reinterpret_cast<Windows::UI::Color const*>(&color));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawEllipseWithBrush(Windows::Foundation::Numerics::float2 centerPoint, float radiusX, float radiusY, ::IUnknown* brush) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawEllipse(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&centerPoint), radiusX, radiusY, *reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const*>(&brush));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawEllipseAtCoordsWithBrush(float x, float y, float radiusX, float radiusY, ::IUnknown* brush) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawEllipse(x, y, radiusX, radiusY, *reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const*>(&brush));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawEllipseWithColor(Windows::Foundation::Numerics::float2 centerPoint, float radiusX, float radiusY, struct_of<4> color) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawEllipse(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&centerPoint), radiusX, radiusY, *reinterpret_cast<Windows::UI::Color const*>(&color));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawEllipseAtCoordsWithColor(float x, float y, float radiusX, float radiusY, struct_of<4> color) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawEllipse(x, y, radiusX, radiusY, *reinterpret_cast<Windows::UI::Color const*>(&color));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawEllipseWithBrushAndStrokeWidth(Windows::Foundation::Numerics::float2 centerPoint, float radiusX, float radiusY, ::IUnknown* brush, float strokeWidth) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawEllipse(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&centerPoint), radiusX, radiusY, *reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const*>(&brush), strokeWidth);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawEllipseAtCoordsWithBrushAndStrokeWidth(float x, float y, float radiusX, float radiusY, ::IUnknown* brush, float strokeWidth) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawEllipse(x, y, radiusX, radiusY, *reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const*>(&brush), strokeWidth);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawEllipseWithColorAndStrokeWidth(Windows::Foundation::Numerics::float2 centerPoint, float radiusX, float radiusY, struct_of<4> color, float strokeWidth) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawEllipse(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&centerPoint), radiusX, radiusY, *reinterpret_cast<Windows::UI::Color const*>(&color), strokeWidth);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawEllipseAtCoordsWithColorAndStrokeWidth(float x, float y, float radiusX, float radiusY, struct_of<4> color, float strokeWidth) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawEllipse(x, y, radiusX, radiusY, *reinterpret_cast<Windows::UI::Color const*>(&color), strokeWidth);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawEllipseWithBrushAndStrokeWidthAndStrokeStyle(Windows::Foundation::Numerics::float2 centerPoint, float radiusX, float radiusY, ::IUnknown* brush, float strokeWidth, ::IUnknown* strokeStyle) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawEllipse(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&centerPoint), radiusX, radiusY, *reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const*>(&brush), strokeWidth, *reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const*>(&strokeStyle));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawEllipseAtCoordsWithBrushAndStrokeWidthAndStrokeStyle(float x, float y, float radiusX, float radiusY, ::IUnknown* brush, float strokeWidth, ::IUnknown* strokeStyle) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawEllipse(x, y, radiusX, radiusY, *reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const*>(&brush), strokeWidth, *reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const*>(&strokeStyle));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawEllipseWithColorAndStrokeWidthAndStrokeStyle(Windows::Foundation::Numerics::float2 centerPoint, float radiusX, float radiusY, struct_of<4> color, float strokeWidth, ::IUnknown* strokeStyle) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawEllipse(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&centerPoint), radiusX, radiusY, *reinterpret_cast<Windows::UI::Color const*>(&color), strokeWidth, *reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const*>(&strokeStyle));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawEllipseAtCoordsWithColorAndStrokeWidthAndStrokeStyle(float x, float y, float radiusX, float radiusY, struct_of<4> color, float strokeWidth, ::IUnknown* strokeStyle) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawEllipse(x, y, radiusX, radiusY, *reinterpret_cast<Windows::UI::Color const*>(&color), strokeWidth, *reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const*>(&strokeStyle));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FillEllipseWithBrush(Windows::Foundation::Numerics::float2 centerPoint, float radiusX, float radiusY, ::IUnknown* brush) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FillEllipse(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&centerPoint), radiusX, radiusY, *reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const*>(&brush));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FillEllipseAtCoordsWithBrush(float x, float y, float radiusX, float radiusY, ::IUnknown* brush) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FillEllipse(x, y, radiusX, radiusY, *reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const*>(&brush));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FillEllipseWithColor(Windows::Foundation::Numerics::float2 centerPoint, float radiusX, float radiusY, struct_of<4> color) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FillEllipse(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&centerPoint), radiusX, radiusY, *reinterpret_cast<Windows::UI::Color const*>(&color));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FillEllipseAtCoordsWithColor(float x, float y, float radiusX, float radiusY, struct_of<4> color) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FillEllipse(x, y, radiusX, radiusY, *reinterpret_cast<Windows::UI::Color const*>(&color));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawCircleWithBrush(Windows::Foundation::Numerics::float2 centerPoint, float radius, ::IUnknown* brush) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawCircle(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&centerPoint), radius, *reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const*>(&brush));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawCircleAtCoordsWithBrush(float x, float y, float radius, ::IUnknown* brush) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawCircle(x, y, radius, *reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const*>(&brush));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawCircleWithColor(Windows::Foundation::Numerics::float2 centerPoint, float radius, struct_of<4> color) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawCircle(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&centerPoint), radius, *reinterpret_cast<Windows::UI::Color const*>(&color));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawCircleAtCoordsWithColor(float x, float y, float radius, struct_of<4> color) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawCircle(x, y, radius, *reinterpret_cast<Windows::UI::Color const*>(&color));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawCircleWithBrushAndStrokeWidth(Windows::Foundation::Numerics::float2 centerPoint, float radius, ::IUnknown* brush, float strokeWidth) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawCircle(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&centerPoint), radius, *reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const*>(&brush), strokeWidth);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawCircleAtCoordsWithBrushAndStrokeWidth(float x, float y, float radius, ::IUnknown* brush, float strokeWidth) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawCircle(x, y, radius, *reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const*>(&brush), strokeWidth);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawCircleWithColorAndStrokeWidth(Windows::Foundation::Numerics::float2 centerPoint, float radius, struct_of<4> color, float strokeWidth) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawCircle(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&centerPoint), radius, *reinterpret_cast<Windows::UI::Color const*>(&color), strokeWidth);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawCircleAtCoordsWithColorAndStrokeWidth(float x, float y, float radius, struct_of<4> color, float strokeWidth) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawCircle(x, y, radius, *reinterpret_cast<Windows::UI::Color const*>(&color), strokeWidth);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawCircleWithBrushAndStrokeWidthAndStrokeStyle(Windows::Foundation::Numerics::float2 centerPoint, float radius, ::IUnknown* brush, float strokeWidth, ::IUnknown* strokeStyle) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawCircle(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&centerPoint), radius, *reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const*>(&brush), strokeWidth, *reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const*>(&strokeStyle));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawCircleAtCoordsWithBrushAndStrokeWidthAndStrokeStyle(float x, float y, float radius, ::IUnknown* brush, float strokeWidth, ::IUnknown* strokeStyle) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawCircle(x, y, radius, *reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const*>(&brush), strokeWidth, *reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const*>(&strokeStyle));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawCircleWithColorAndStrokeWidthAndStrokeStyle(Windows::Foundation::Numerics::float2 centerPoint, float radius, struct_of<4> color, float strokeWidth, ::IUnknown* strokeStyle) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawCircle(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&centerPoint), radius, *reinterpret_cast<Windows::UI::Color const*>(&color), strokeWidth, *reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const*>(&strokeStyle));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawCircleAtCoordsWithColorAndStrokeWidthAndStrokeStyle(float x, float y, float radius, struct_of<4> color, float strokeWidth, ::IUnknown* strokeStyle) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawCircle(x, y, radius, *reinterpret_cast<Windows::UI::Color const*>(&color), strokeWidth, *reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const*>(&strokeStyle));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FillCircleWithBrush(Windows::Foundation::Numerics::float2 centerPoint, float radius, ::IUnknown* brush) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FillCircle(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&centerPoint), radius, *reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const*>(&brush));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FillCircleAtCoordsWithBrush(float x, float y, float radius, ::IUnknown* brush) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FillCircle(x, y, radius, *reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const*>(&brush));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FillCircleWithColor(Windows::Foundation::Numerics::float2 centerPoint, float radius, struct_of<4> color) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FillCircle(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&centerPoint), radius, *reinterpret_cast<Windows::UI::Color const*>(&color));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FillCircleAtCoordsWithColor(float x, float y, float radius, struct_of<4> color) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FillCircle(x, y, radius, *reinterpret_cast<Windows::UI::Color const*>(&color));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawTextAtPointWithColor(HSTRING text, Windows::Foundation::Numerics::float2 point, struct_of<4> color) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawText(*reinterpret_cast<hstring const*>(&text), *reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&point), *reinterpret_cast<Windows::UI::Color const*>(&color));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawTextAtPointCoordsWithColor(HSTRING text, float x, float y, struct_of<4> color) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawText(*reinterpret_cast<hstring const*>(&text), x, y, *reinterpret_cast<Windows::UI::Color const*>(&color));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawTextAtPointWithBrushAndFormat(HSTRING text, Windows::Foundation::Numerics::float2 point, ::IUnknown* brush, ::IUnknown* format) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawText(*reinterpret_cast<hstring const*>(&text), *reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&point), *reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const*>(&brush), *reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasTextFormat const*>(&format));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawTextAtRectWithBrushAndFormat(HSTRING text, Windows::Foundation::Rect rectangle, ::IUnknown* brush, ::IUnknown* format) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawText(*reinterpret_cast<hstring const*>(&text), *reinterpret_cast<Windows::Foundation::Rect const*>(&rectangle), *reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const*>(&brush), *reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasTextFormat const*>(&format));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawTextAtPointCoordsWithBrushAndFormat(HSTRING text, float x, float y, ::IUnknown* brush, ::IUnknown* format) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawText(*reinterpret_cast<hstring const*>(&text), x, y, *reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const*>(&brush), *reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasTextFormat const*>(&format));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawTextAtRectCoordsWithBrushAndFormat(HSTRING text, float x, float y, float w, float h, ::IUnknown* brush, ::IUnknown* format) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawText(*reinterpret_cast<hstring const*>(&text), x, y, w, h, *reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const*>(&brush), *reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasTextFormat const*>(&format));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawTextAtPointWithColorAndFormat(HSTRING text, Windows::Foundation::Numerics::float2 point, struct_of<4> color, ::IUnknown* format) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawText(*reinterpret_cast<hstring const*>(&text), *reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&point), *reinterpret_cast<Windows::UI::Color const*>(&color), *reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasTextFormat const*>(&format));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawTextAtRectWithColorAndFormat(HSTRING text, Windows::Foundation::Rect rectangle, struct_of<4> color, ::IUnknown* format) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawText(*reinterpret_cast<hstring const*>(&text), *reinterpret_cast<Windows::Foundation::Rect const*>(&rectangle), *reinterpret_cast<Windows::UI::Color const*>(&color), *reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasTextFormat const*>(&format));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawTextAtPointCoordsWithColorAndFormat(HSTRING text, float x, float y, struct_of<4> color, ::IUnknown* format) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawText(*reinterpret_cast<hstring const*>(&text), x, y, *reinterpret_cast<Windows::UI::Color const*>(&color), *reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasTextFormat const*>(&format));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawTextAtRectCoordsWithColorAndFormat(HSTRING text, float x, float y, float w, float h, struct_of<4> color, ::IUnknown* format) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawText(*reinterpret_cast<hstring const*>(&text), x, y, w, h, *reinterpret_cast<Windows::UI::Color const*>(&color), *reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasTextFormat const*>(&format));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawGeometryWithBrush(::IUnknown* geometry, Windows::Foundation::Numerics::float2 offset, ::IUnknown* brush) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawGeometry(*reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const*>(&geometry), *reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&offset), *reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const*>(&brush));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawGeometryWithColor(::IUnknown* geometry, Windows::Foundation::Numerics::float2 offset, struct_of<4> color) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawGeometry(*reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const*>(&geometry), *reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&offset), *reinterpret_cast<Windows::UI::Color const*>(&color));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawGeometryAtCoordsWithBrush(::IUnknown* geometry, float x, float y, ::IUnknown* brush) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawGeometry(*reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const*>(&geometry), x, y, *reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const*>(&brush));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawGeometryAtCoordsWithColor(::IUnknown* geometry, float x, float y, struct_of<4> color) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawGeometry(*reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const*>(&geometry), x, y, *reinterpret_cast<Windows::UI::Color const*>(&color));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawGeometryAtOriginWithBrush(::IUnknown* geometry, ::IUnknown* brush) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawGeometry(*reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const*>(&geometry), *reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const*>(&brush));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawGeometryAtOriginWithColor(::IUnknown* geometry, struct_of<4> color) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawGeometry(*reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const*>(&geometry), *reinterpret_cast<Windows::UI::Color const*>(&color));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawGeometryWithBrushAndStrokeWidth(::IUnknown* geometry, Windows::Foundation::Numerics::float2 offset, ::IUnknown* brush, float strokeWidth) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawGeometry(*reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const*>(&geometry), *reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&offset), *reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const*>(&brush), strokeWidth);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawGeometryWithColorAndStrokeWidth(::IUnknown* geometry, Windows::Foundation::Numerics::float2 offset, struct_of<4> color, float strokeWidth) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawGeometry(*reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const*>(&geometry), *reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&offset), *reinterpret_cast<Windows::UI::Color const*>(&color), strokeWidth);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawGeometryAtCoordsWithBrushAndStrokeWidth(::IUnknown* geometry, float x, float y, ::IUnknown* brush, float strokeWidth) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawGeometry(*reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const*>(&geometry), x, y, *reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const*>(&brush), strokeWidth);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawGeometryAtCoordsWithColorAndStrokeWidth(::IUnknown* geometry, float x, float y, struct_of<4> color, float strokeWidth) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawGeometry(*reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const*>(&geometry), x, y, *reinterpret_cast<Windows::UI::Color const*>(&color), strokeWidth);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawGeometryAtOriginWithBrushAndStrokeWidth(::IUnknown* geometry, ::IUnknown* brush, float strokeWidth) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawGeometry(*reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const*>(&geometry), *reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const*>(&brush), strokeWidth);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawGeometryAtOriginWithColorAndStrokeWidth(::IUnknown* geometry, struct_of<4> color, float strokeWidth) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawGeometry(*reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const*>(&geometry), *reinterpret_cast<Windows::UI::Color const*>(&color), strokeWidth);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawGeometryWithBrushAndStrokeWidthAndStrokeStyle(::IUnknown* geometry, Windows::Foundation::Numerics::float2 offset, ::IUnknown* brush, float strokeWidth, ::IUnknown* strokeStyle) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawGeometry(*reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const*>(&geometry), *reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&offset), *reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const*>(&brush), strokeWidth, *reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const*>(&strokeStyle));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawGeometryWithColorAndStrokeWidthAndStrokeStyle(::IUnknown* geometry, Windows::Foundation::Numerics::float2 offset, struct_of<4> color, float strokeWidth, ::IUnknown* strokeStyle) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawGeometry(*reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const*>(&geometry), *reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&offset), *reinterpret_cast<Windows::UI::Color const*>(&color), strokeWidth, *reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const*>(&strokeStyle));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawGeometryAtCoordsWithBrushAndStrokeWidthAndStrokeStyle(::IUnknown* geometry, float x, float y, ::IUnknown* brush, float strokeWidth, ::IUnknown* strokeStyle) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawGeometry(*reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const*>(&geometry), x, y, *reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const*>(&brush), strokeWidth, *reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const*>(&strokeStyle));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawGeometryAtCoordsWithColorAndStrokeWidthAndStrokeStyle(::IUnknown* geometry, float x, float y, struct_of<4> color, float strokeWidth, ::IUnknown* strokeStyle) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawGeometry(*reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const*>(&geometry), x, y, *reinterpret_cast<Windows::UI::Color const*>(&color), strokeWidth, *reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const*>(&strokeStyle));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawGeometryAtOriginWithBrushAndStrokeWidthAndStrokeStyle(::IUnknown* geometry, ::IUnknown* brush, float strokeWidth, ::IUnknown* strokeStyle) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawGeometry(*reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const*>(&geometry), *reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const*>(&brush), strokeWidth, *reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const*>(&strokeStyle));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawGeometryAtOriginWithColorAndStrokeWidthAndStrokeStyle(::IUnknown* geometry, struct_of<4> color, float strokeWidth, ::IUnknown* strokeStyle) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawGeometry(*reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const*>(&geometry), *reinterpret_cast<Windows::UI::Color const*>(&color), strokeWidth, *reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const*>(&strokeStyle));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FillGeometryWithBrush(::IUnknown* geometry, Windows::Foundation::Numerics::float2 offset, ::IUnknown* brush) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FillGeometry(*reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const*>(&geometry), *reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&offset), *reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const*>(&brush));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FillGeometryWithBrushAndOpacityBrush(::IUnknown* geometry, Windows::Foundation::Numerics::float2 offset, ::IUnknown* brush, ::IUnknown* opacityBrush) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FillGeometry(*reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const*>(&geometry), *reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&offset), *reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const*>(&brush), *reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const*>(&opacityBrush));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FillGeometryWithColor(::IUnknown* geometry, Windows::Foundation::Numerics::float2 offset, struct_of<4> color) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FillGeometry(*reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const*>(&geometry), *reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&offset), *reinterpret_cast<Windows::UI::Color const*>(&color));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FillGeometryAtCoordsWithBrush(::IUnknown* geometry, float x, float y, ::IUnknown* brush) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FillGeometry(*reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const*>(&geometry), x, y, *reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const*>(&brush));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FillGeometryAtCoordsWithBrushAndOpacityBrush(::IUnknown* geometry, float x, float y, ::IUnknown* brush, ::IUnknown* opacityBrush) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FillGeometry(*reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const*>(&geometry), x, y, *reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const*>(&brush), *reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const*>(&opacityBrush));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FillGeometryAtCoordsWithColor(::IUnknown* geometry, float x, float y, struct_of<4> color) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FillGeometry(*reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const*>(&geometry), x, y, *reinterpret_cast<Windows::UI::Color const*>(&color));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FillGeometryAtOriginWithBrush(::IUnknown* geometry, ::IUnknown* brush) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FillGeometry(*reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const*>(&geometry), *reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const*>(&brush));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FillGeometryAtOriginWithBrushAndOpacityBrush(::IUnknown* geometry, ::IUnknown* brush, ::IUnknown* opacityBrush) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FillGeometry(*reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const*>(&geometry), *reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const*>(&brush), *reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const*>(&opacityBrush));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FillGeometryAtOriginWithColor(::IUnknown* geometry, struct_of<4> color) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FillGeometry(*reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const*>(&geometry), *reinterpret_cast<Windows::UI::Color const*>(&color));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawCachedGeometryWithBrush(::IUnknown* geometry, Windows::Foundation::Numerics::float2 offset, ::IUnknown* brush) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawCachedGeometry(*reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasCachedGeometry const*>(&geometry), *reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&offset), *reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const*>(&brush));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawCachedGeometryWithColor(::IUnknown* geometry, Windows::Foundation::Numerics::float2 offset, struct_of<4> color) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawCachedGeometry(*reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasCachedGeometry const*>(&geometry), *reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&offset), *reinterpret_cast<Windows::UI::Color const*>(&color));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawCachedGeometryAtCoordsWithBrush(::IUnknown* geometry, float x, float y, ::IUnknown* brush) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawCachedGeometry(*reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasCachedGeometry const*>(&geometry), x, y, *reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const*>(&brush));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawCachedGeometryAtCoordsWithColor(::IUnknown* geometry, float x, float y, struct_of<4> color) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawCachedGeometry(*reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasCachedGeometry const*>(&geometry), x, y, *reinterpret_cast<Windows::UI::Color const*>(&color));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawCachedGeometryAtOriginWithBrush(::IUnknown* geometry, ::IUnknown* brush) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawCachedGeometry(*reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasCachedGeometry const*>(&geometry), *reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const*>(&brush));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawCachedGeometryAtOriginWithColor(::IUnknown* geometry, struct_of<4> color) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawCachedGeometry(*reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasCachedGeometry const*>(&geometry), *reinterpret_cast<Windows::UI::Color const*>(&color));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawTextLayoutWithBrush(::IUnknown* textLayout, Windows::Foundation::Numerics::float2 point, ::IUnknown* brush) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawTextLayout(*reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasTextLayout const*>(&textLayout), *reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&point), *reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const*>(&brush));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawTextLayoutAtCoordsWithBrush(::IUnknown* textLayout, float x, float y, ::IUnknown* brush) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawTextLayout(*reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasTextLayout const*>(&textLayout), x, y, *reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const*>(&brush));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawTextLayoutWithColor(::IUnknown* textLayout, Windows::Foundation::Numerics::float2 point, struct_of<4> color) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawTextLayout(*reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasTextLayout const*>(&textLayout), *reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&point), *reinterpret_cast<Windows::UI::Color const*>(&color));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawTextLayoutAtCoordsWithColor(::IUnknown* textLayout, float x, float y, struct_of<4> color) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawTextLayout(*reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasTextLayout const*>(&textLayout), x, y, *reinterpret_cast<Windows::UI::Color const*>(&color));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawInk(::IUnknown* inkStrokes) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawInk(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::UI::Input::Inking::InkStroke> const*>(&inkStrokes));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawInkWithHighContrast(::IUnknown* inkStrokes, bool highContrast) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawInk(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::UI::Input::Inking::InkStroke> const*>(&inkStrokes), highContrast);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawGradientMeshAtOrigin(::IUnknown* gradientMesh) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawGradientMesh(*reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasGradientMesh const*>(&gradientMesh));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawGradientMesh(::IUnknown* gradientMesh, Windows::Foundation::Numerics::float2 point) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawGradientMesh(*reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasGradientMesh const*>(&gradientMesh), *reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&point));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawGradientMeshAtCoords(::IUnknown* gradientMesh, float x, float y) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawGradientMesh(*reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasGradientMesh const*>(&gradientMesh), x, y);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawSvgAtOrigin(::IUnknown* svgDocument, Windows::Foundation::Size viewportSize) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawSvg(*reinterpret_cast<Microsoft::Graphics::Canvas::Svg::CanvasSvgDocument const*>(&svgDocument), *reinterpret_cast<Windows::Foundation::Size const*>(&viewportSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawSvgAtPoint(::IUnknown* svgDocument, Windows::Foundation::Size viewportSize, Windows::Foundation::Numerics::float2 point) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawSvg(*reinterpret_cast<Microsoft::Graphics::Canvas::Svg::CanvasSvgDocument const*>(&svgDocument), *reinterpret_cast<Windows::Foundation::Size const*>(&viewportSize), *reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&point));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawSvgAtCoords(::IUnknown* svgDocument, Windows::Foundation::Size viewportSize, float x, float y) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawSvg(*reinterpret_cast<Microsoft::Graphics::Canvas::Svg::CanvasSvgDocument const*>(&svgDocument), *reinterpret_cast<Windows::Foundation::Size const*>(&viewportSize), x, y);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Antialiasing(Microsoft::Graphics::Canvas::CanvasAntialiasing* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Antialiasing());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Antialiasing(Microsoft::Graphics::Canvas::CanvasAntialiasing value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Antialiasing(*reinterpret_cast<Microsoft::Graphics::Canvas::CanvasAntialiasing const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Blend(Microsoft::Graphics::Canvas::CanvasBlend* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Blend());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Blend(Microsoft::Graphics::Canvas::CanvasBlend value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Blend(*reinterpret_cast<Microsoft::Graphics::Canvas::CanvasBlend const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TextAntialiasing(Microsoft::Graphics::Canvas::Text::CanvasTextAntialiasing* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TextAntialiasing());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TextAntialiasing(Microsoft::Graphics::Canvas::Text::CanvasTextAntialiasing value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TextAntialiasing(*reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasTextAntialiasing const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TextRenderingParameters(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TextRenderingParameters());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TextRenderingParameters(::IUnknown* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TextRenderingParameters(*reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasTextRenderingParameters const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Transform(Windows::Foundation::Numerics::float3x2* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Transform());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Transform(Windows::Foundation::Numerics::float3x2 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Transform(*reinterpret_cast<Windows::Foundation::Numerics::float3x2 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Units(Microsoft::Graphics::Canvas::CanvasUnits* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Units());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Units(Microsoft::Graphics::Canvas::CanvasUnits value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Units(*reinterpret_cast<Microsoft::Graphics::Canvas::CanvasUnits const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EffectBufferPrecision(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EffectBufferPrecision());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_EffectBufferPrecision(::IUnknown* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EffectBufferPrecision(*reinterpret_cast<Windows::Foundation::IReference<Microsoft::Graphics::Canvas::CanvasBufferPrecision> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EffectTileSize(struct_of<8>* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EffectTileSize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_EffectTileSize(struct_of<8> value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EffectTileSize(*reinterpret_cast<Windows::Graphics::Imaging::BitmapSize const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateLayerWithOpacity(float opacity, ::IUnknown** layer) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *layer = detach_abi(this->shim().CreateLayer(opacity));
            return S_OK;
        }
        catch (...)
        {
            *layer = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateLayerWithOpacityBrush(::IUnknown* opacityBrush, ::IUnknown** layer) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *layer = detach_abi(this->shim().CreateLayer(*reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const*>(&opacityBrush)));
            return S_OK;
        }
        catch (...)
        {
            *layer = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateLayerWithOpacityAndClipRectangle(float opacity, Windows::Foundation::Rect clipRectangle, ::IUnknown** layer) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *layer = detach_abi(this->shim().CreateLayer(opacity, *reinterpret_cast<Windows::Foundation::Rect const*>(&clipRectangle)));
            return S_OK;
        }
        catch (...)
        {
            *layer = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateLayerWithOpacityBrushAndClipRectangle(::IUnknown* opacityBrush, Windows::Foundation::Rect clipRectangle, ::IUnknown** layer) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *layer = detach_abi(this->shim().CreateLayer(*reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const*>(&opacityBrush), *reinterpret_cast<Windows::Foundation::Rect const*>(&clipRectangle)));
            return S_OK;
        }
        catch (...)
        {
            *layer = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateLayerWithOpacityAndClipGeometry(float opacity, ::IUnknown* clipGeometry, ::IUnknown** layer) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *layer = detach_abi(this->shim().CreateLayer(opacity, *reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const*>(&clipGeometry)));
            return S_OK;
        }
        catch (...)
        {
            *layer = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateLayerWithOpacityBrushAndClipGeometry(::IUnknown* opacityBrush, ::IUnknown* clipGeometry, ::IUnknown** layer) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *layer = detach_abi(this->shim().CreateLayer(*reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const*>(&opacityBrush), *reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const*>(&clipGeometry)));
            return S_OK;
        }
        catch (...)
        {
            *layer = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateLayerWithOpacityAndClipGeometryAndTransform(float opacity, ::IUnknown* clipGeometry, Windows::Foundation::Numerics::float3x2 geometryTransform, ::IUnknown** layer) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *layer = detach_abi(this->shim().CreateLayer(opacity, *reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const*>(&clipGeometry), *reinterpret_cast<Windows::Foundation::Numerics::float3x2 const*>(&geometryTransform)));
            return S_OK;
        }
        catch (...)
        {
            *layer = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateLayerWithOpacityBrushAndClipGeometryAndTransform(::IUnknown* opacityBrush, ::IUnknown* clipGeometry, Windows::Foundation::Numerics::float3x2 geometryTransform, ::IUnknown** layer) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *layer = detach_abi(this->shim().CreateLayer(*reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const*>(&opacityBrush), *reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const*>(&clipGeometry), *reinterpret_cast<Windows::Foundation::Numerics::float3x2 const*>(&geometryTransform)));
            return S_OK;
        }
        catch (...)
        {
            *layer = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateLayerWithAllOptions(float opacity, ::IUnknown* opacityBrush, Windows::Foundation::Rect clipRectangle, ::IUnknown* clipGeometry, Windows::Foundation::Numerics::float3x2 geometryTransform, Microsoft::Graphics::Canvas::CanvasLayerOptions options, ::IUnknown** layer) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *layer = detach_abi(this->shim().CreateLayer(opacity, *reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const*>(&opacityBrush), *reinterpret_cast<Windows::Foundation::Rect const*>(&clipRectangle), *reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const*>(&clipGeometry), *reinterpret_cast<Windows::Foundation::Numerics::float3x2 const*>(&geometryTransform), *reinterpret_cast<Microsoft::Graphics::Canvas::CanvasLayerOptions const*>(&options)));
            return S_OK;
        }
        catch (...)
        {
            *layer = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawGlyphRun(Windows::Foundation::Numerics::float2 point, ::IUnknown* fontFace, float fontSize, uint32_t __glyphsSize, struct_of<16>* glyphs, bool isSideways, uint32_t bidiLevel, ::IUnknown* brush) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawGlyphRun(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&point), *reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasFontFace const*>(&fontFace), fontSize, array_view<Microsoft::Graphics::Canvas::Text::CanvasGlyph const>(reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasGlyph const *>(glyphs), reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasGlyph const *>(glyphs) + __glyphsSize), isSideways, bidiLevel, *reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const*>(&brush));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawGlyphRunWithMeasuringMode(Windows::Foundation::Numerics::float2 point, ::IUnknown* fontFace, float fontSize, uint32_t __glyphsSize, struct_of<16>* glyphs, bool isSideways, uint32_t bidiLevel, ::IUnknown* brush, Microsoft::Graphics::Canvas::Text::CanvasTextMeasuringMode measuringMode) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawGlyphRun(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&point), *reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasFontFace const*>(&fontFace), fontSize, array_view<Microsoft::Graphics::Canvas::Text::CanvasGlyph const>(reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasGlyph const *>(glyphs), reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasGlyph const *>(glyphs) + __glyphsSize), isSideways, bidiLevel, *reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const*>(&brush), *reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasTextMeasuringMode const*>(&measuringMode));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawGlyphRunWithMeasuringModeAndDescription(Windows::Foundation::Numerics::float2 point, ::IUnknown* fontFace, float fontSize, uint32_t __glyphsSize, struct_of<16>* glyphs, bool isSideways, uint32_t bidiLevel, ::IUnknown* brush, Microsoft::Graphics::Canvas::Text::CanvasTextMeasuringMode measuringMode, HSTRING localeName, HSTRING textString, uint32_t __clusterMapIndicesSize, int32_t* clusterMapIndices, uint32_t textPosition) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawGlyphRun(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&point), *reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasFontFace const*>(&fontFace), fontSize, array_view<Microsoft::Graphics::Canvas::Text::CanvasGlyph const>(reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasGlyph const *>(glyphs), reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasGlyph const *>(glyphs) + __glyphsSize), isSideways, bidiLevel, *reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const*>(&brush), *reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasTextMeasuringMode const*>(&measuringMode), *reinterpret_cast<hstring const*>(&localeName), *reinterpret_cast<hstring const*>(&textString), array_view<int32_t const>(reinterpret_cast<int32_t const *>(clusterMapIndices), reinterpret_cast<int32_t const *>(clusterMapIndices) + __clusterMapIndicesSize), textPosition);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateSpriteBatch(::IUnknown** spriteBatch) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *spriteBatch = detach_abi(this->shim().CreateSpriteBatch());
            return S_OK;
        }
        catch (...)
        {
            *spriteBatch = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateSpriteBatchWithSortMode(Microsoft::Graphics::Canvas::CanvasSpriteSortMode sortMode, ::IUnknown** spriteBatch) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *spriteBatch = detach_abi(this->shim().CreateSpriteBatch(*reinterpret_cast<Microsoft::Graphics::Canvas::CanvasSpriteSortMode const*>(&sortMode)));
            return S_OK;
        }
        catch (...)
        {
            *spriteBatch = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateSpriteBatchWithSortModeAndInterpolation(Microsoft::Graphics::Canvas::CanvasSpriteSortMode sortMode, Microsoft::Graphics::Canvas::CanvasImageInterpolation interpolation, ::IUnknown** spriteBatch) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *spriteBatch = detach_abi(this->shim().CreateSpriteBatch(*reinterpret_cast<Microsoft::Graphics::Canvas::CanvasSpriteSortMode const*>(&sortMode), *reinterpret_cast<Microsoft::Graphics::Canvas::CanvasImageInterpolation const*>(&interpolation)));
            return S_OK;
        }
        catch (...)
        {
            *spriteBatch = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateSpriteBatchWithSortModeAndInterpolationAndOptions(Microsoft::Graphics::Canvas::CanvasSpriteSortMode sortMode, Microsoft::Graphics::Canvas::CanvasImageInterpolation interpolation, Microsoft::Graphics::Canvas::CanvasSpriteOptions options, ::IUnknown** spriteBatch) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *spriteBatch = detach_abi(this->shim().CreateSpriteBatch(*reinterpret_cast<Microsoft::Graphics::Canvas::CanvasSpriteSortMode const*>(&sortMode), *reinterpret_cast<Microsoft::Graphics::Canvas::CanvasImageInterpolation const*>(&interpolation), *reinterpret_cast<Microsoft::Graphics::Canvas::CanvasSpriteOptions const*>(&options)));
            return S_OK;
        }
        catch (...)
        {
            *spriteBatch = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::ICanvasImage> : produce_base<D, Microsoft::Graphics::Canvas::ICanvasImage>
{
    HRESULT __stdcall GetBounds(::IUnknown* resourceCreator, Windows::Foundation::Rect* bounds) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *bounds = detach_abi(this->shim().GetBounds(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetBoundsWithTransform(::IUnknown* resourceCreator, Windows::Foundation::Numerics::float3x2 transform, Windows::Foundation::Rect* bounds) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *bounds = detach_abi(this->shim().GetBounds(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator), *reinterpret_cast<Windows::Foundation::Numerics::float3x2 const*>(&transform)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::ICanvasImageStatics> : produce_base<D, Microsoft::Graphics::Canvas::ICanvasImageStatics>
{
    HRESULT __stdcall SaveAsync(::IUnknown* image, Windows::Foundation::Rect sourceRectangle, float dpi, ::IUnknown* resourceCreator, ::IUnknown* stream, Microsoft::Graphics::Canvas::CanvasBitmapFileFormat fileFormat, ::IUnknown** action) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *action = detach_abi(this->shim().SaveAsync(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasImage const*>(&image), *reinterpret_cast<Windows::Foundation::Rect const*>(&sourceRectangle), dpi, *reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator), *reinterpret_cast<Windows::Storage::Streams::IRandomAccessStream const*>(&stream), *reinterpret_cast<Microsoft::Graphics::Canvas::CanvasBitmapFileFormat const*>(&fileFormat)));
            return S_OK;
        }
        catch (...)
        {
            *action = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SaveWithQualityAsync(::IUnknown* image, Windows::Foundation::Rect sourceRectangle, float dpi, ::IUnknown* resourceCreator, ::IUnknown* stream, Microsoft::Graphics::Canvas::CanvasBitmapFileFormat fileFormat, float quality, ::IUnknown** action) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *action = detach_abi(this->shim().SaveAsync(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasImage const*>(&image), *reinterpret_cast<Windows::Foundation::Rect const*>(&sourceRectangle), dpi, *reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator), *reinterpret_cast<Windows::Storage::Streams::IRandomAccessStream const*>(&stream), *reinterpret_cast<Microsoft::Graphics::Canvas::CanvasBitmapFileFormat const*>(&fileFormat), quality));
            return S_OK;
        }
        catch (...)
        {
            *action = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SaveWithQualityAndBufferPrecisionAsync(::IUnknown* image, Windows::Foundation::Rect sourceRectangle, float dpi, ::IUnknown* resourceCreator, ::IUnknown* stream, Microsoft::Graphics::Canvas::CanvasBitmapFileFormat fileFormat, float quality, Microsoft::Graphics::Canvas::CanvasBufferPrecision bufferPrecision, ::IUnknown** action) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *action = detach_abi(this->shim().SaveAsync(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasImage const*>(&image), *reinterpret_cast<Windows::Foundation::Rect const*>(&sourceRectangle), dpi, *reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator), *reinterpret_cast<Windows::Storage::Streams::IRandomAccessStream const*>(&stream), *reinterpret_cast<Microsoft::Graphics::Canvas::CanvasBitmapFileFormat const*>(&fileFormat), quality, *reinterpret_cast<Microsoft::Graphics::Canvas::CanvasBufferPrecision const*>(&bufferPrecision)));
            return S_OK;
        }
        catch (...)
        {
            *action = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ComputeHistogram(::IUnknown* image, Windows::Foundation::Rect sourceRectangle, ::IUnknown* resourceCreator, Microsoft::Graphics::Canvas::Effects::EffectChannelSelect channelSelect, int32_t numberOfBins, uint32_t* __valueElementsSize, float** valueElements) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            std::tie(*__valueElementsSize, *valueElements) = detach_abi(this->shim().ComputeHistogram(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasImage const*>(&image), *reinterpret_cast<Windows::Foundation::Rect const*>(&sourceRectangle), *reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator), *reinterpret_cast<Microsoft::Graphics::Canvas::Effects::EffectChannelSelect const*>(&channelSelect), numberOfBins));
            return S_OK;
        }
        catch (...)
        {
            *__valueElementsSize = 0;
            *valueElements = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IsHistogramSupported(::IUnknown* device, bool* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().IsHistogramSupported(*reinterpret_cast<Microsoft::Graphics::Canvas::CanvasDevice const*>(&device)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::ICanvasLock> : produce_base<D, Microsoft::Graphics::Canvas::ICanvasLock>
{};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::ICanvasRenderTarget> : produce_base<D, Microsoft::Graphics::Canvas::ICanvasRenderTarget>
{
    HRESULT __stdcall CreateDrawingSession(::IUnknown** drawingSession) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *drawingSession = detach_abi(this->shim().CreateDrawingSession());
            return S_OK;
        }
        catch (...)
        {
            *drawingSession = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::ICanvasRenderTargetFactory> : produce_base<D, Microsoft::Graphics::Canvas::ICanvasRenderTargetFactory>
{
    HRESULT __stdcall CreateWithSize(::IUnknown* resourceCreator, Windows::Foundation::Size size, ::IUnknown** renderTarget) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *renderTarget = detach_abi(this->shim().CreateWithSize(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreatorWithDpi const*>(&resourceCreator), *reinterpret_cast<Windows::Foundation::Size const*>(&size)));
            return S_OK;
        }
        catch (...)
        {
            *renderTarget = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateWithWidthAndHeight(::IUnknown* resourceCreator, float width, float height, ::IUnknown** renderTarget) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *renderTarget = detach_abi(this->shim().CreateWithWidthAndHeight(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreatorWithDpi const*>(&resourceCreator), width, height));
            return S_OK;
        }
        catch (...)
        {
            *renderTarget = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateWithWidthAndHeightAndDpi(::IUnknown* resourceCreator, float width, float height, float dpi, ::IUnknown** renderTarget) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *renderTarget = detach_abi(this->shim().CreateWithWidthAndHeightAndDpi(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator), width, height, dpi));
            return S_OK;
        }
        catch (...)
        {
            *renderTarget = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateWithWidthAndHeightAndDpiAndFormatAndAlpha(::IUnknown* resourceCreator, float width, float height, float dpi, Windows::Graphics::DirectX::DirectXPixelFormat format, Microsoft::Graphics::Canvas::CanvasAlphaMode alpha, ::IUnknown** renderTarget) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *renderTarget = detach_abi(this->shim().CreateWithWidthAndHeightAndDpiAndFormatAndAlpha(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator), width, height, dpi, *reinterpret_cast<Windows::Graphics::DirectX::DirectXPixelFormat const*>(&format), *reinterpret_cast<Microsoft::Graphics::Canvas::CanvasAlphaMode const*>(&alpha)));
            return S_OK;
        }
        catch (...)
        {
            *renderTarget = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::ICanvasRenderTargetStatics> : produce_base<D, Microsoft::Graphics::Canvas::ICanvasRenderTargetStatics>
{
    HRESULT __stdcall CreateFromDirect3D11Surface(::IUnknown* resourceCreator, ::IUnknown* surface, ::IUnknown** bitmap) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *bitmap = detach_abi(this->shim().CreateFromDirect3D11Surface(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator), *reinterpret_cast<Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const*>(&surface)));
            return S_OK;
        }
        catch (...)
        {
            *bitmap = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateFromDirect3D11SurfaceWithDpi(::IUnknown* resourceCreator, ::IUnknown* surface, float dpi, ::IUnknown** bitmap) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *bitmap = detach_abi(this->shim().CreateFromDirect3D11Surface(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator), *reinterpret_cast<Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const*>(&surface), dpi));
            return S_OK;
        }
        catch (...)
        {
            *bitmap = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateFromDirect3D11SurfaceWithDpiAndAlpha(::IUnknown* resourceCreator, ::IUnknown* surface, float dpi, Microsoft::Graphics::Canvas::CanvasAlphaMode alpha, ::IUnknown** bitmap) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *bitmap = detach_abi(this->shim().CreateFromDirect3D11Surface(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator), *reinterpret_cast<Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const*>(&surface), dpi, *reinterpret_cast<Microsoft::Graphics::Canvas::CanvasAlphaMode const*>(&alpha)));
            return S_OK;
        }
        catch (...)
        {
            *bitmap = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::ICanvasResourceCreator> : produce_base<D, Microsoft::Graphics::Canvas::ICanvasResourceCreator>
{
    HRESULT __stdcall get_Device(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Device());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::ICanvasResourceCreatorWithDpi> : produce_base<D, Microsoft::Graphics::Canvas::ICanvasResourceCreatorWithDpi>
{
    HRESULT __stdcall get_Dpi(float* dpi) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *dpi = detach_abi(this->shim().Dpi());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ConvertPixelsToDips(int32_t pixels, float* dips) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *dips = detach_abi(this->shim().ConvertPixelsToDips(pixels));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ConvertDipsToPixels(float dips, Microsoft::Graphics::Canvas::CanvasDpiRounding dpiRounding, int32_t* pixels) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *pixels = detach_abi(this->shim().ConvertDipsToPixels(dips, *reinterpret_cast<Microsoft::Graphics::Canvas::CanvasDpiRounding const*>(&dpiRounding)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::ICanvasSpriteBatch> : produce_base<D, Microsoft::Graphics::Canvas::ICanvasSpriteBatch>
{
    HRESULT __stdcall DrawToRect(::IUnknown* bitmap, Windows::Foundation::Rect destRect) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Draw(*reinterpret_cast<Microsoft::Graphics::Canvas::CanvasBitmap const*>(&bitmap), *reinterpret_cast<Windows::Foundation::Rect const*>(&destRect));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawAtOffset(::IUnknown* bitmap, Windows::Foundation::Numerics::float2 offset) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Draw(*reinterpret_cast<Microsoft::Graphics::Canvas::CanvasBitmap const*>(&bitmap), *reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&offset));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawWithTransform(::IUnknown* bitmap, Windows::Foundation::Numerics::float3x2 transform) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Draw(*reinterpret_cast<Microsoft::Graphics::Canvas::CanvasBitmap const*>(&bitmap), *reinterpret_cast<Windows::Foundation::Numerics::float3x2 const*>(&transform));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawToRectWithTint(::IUnknown* bitmap, Windows::Foundation::Rect destRect, Windows::Foundation::Numerics::float4 tint) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Draw(*reinterpret_cast<Microsoft::Graphics::Canvas::CanvasBitmap const*>(&bitmap), *reinterpret_cast<Windows::Foundation::Rect const*>(&destRect), *reinterpret_cast<Windows::Foundation::Numerics::float4 const*>(&tint));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawAtOffsetWithTint(::IUnknown* bitmap, Windows::Foundation::Numerics::float2 offset, Windows::Foundation::Numerics::float4 tint) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Draw(*reinterpret_cast<Microsoft::Graphics::Canvas::CanvasBitmap const*>(&bitmap), *reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&offset), *reinterpret_cast<Windows::Foundation::Numerics::float4 const*>(&tint));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawWithTransformAndTint(::IUnknown* bitmap, Windows::Foundation::Numerics::float3x2 transform, Windows::Foundation::Numerics::float4 tint) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Draw(*reinterpret_cast<Microsoft::Graphics::Canvas::CanvasBitmap const*>(&bitmap), *reinterpret_cast<Windows::Foundation::Numerics::float3x2 const*>(&transform), *reinterpret_cast<Windows::Foundation::Numerics::float4 const*>(&tint));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawToRectWithTintAndFlip(::IUnknown* bitmap, Windows::Foundation::Rect destRect, Windows::Foundation::Numerics::float4 tint, Microsoft::Graphics::Canvas::CanvasSpriteFlip flip) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Draw(*reinterpret_cast<Microsoft::Graphics::Canvas::CanvasBitmap const*>(&bitmap), *reinterpret_cast<Windows::Foundation::Rect const*>(&destRect), *reinterpret_cast<Windows::Foundation::Numerics::float4 const*>(&tint), *reinterpret_cast<Microsoft::Graphics::Canvas::CanvasSpriteFlip const*>(&flip));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawWithTransformAndTintAndFlip(::IUnknown* bitmap, Windows::Foundation::Numerics::float3x2 transform, Windows::Foundation::Numerics::float4 tint, Microsoft::Graphics::Canvas::CanvasSpriteFlip flip) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Draw(*reinterpret_cast<Microsoft::Graphics::Canvas::CanvasBitmap const*>(&bitmap), *reinterpret_cast<Windows::Foundation::Numerics::float3x2 const*>(&transform), *reinterpret_cast<Windows::Foundation::Numerics::float4 const*>(&tint), *reinterpret_cast<Microsoft::Graphics::Canvas::CanvasSpriteFlip const*>(&flip));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawAtOffsetWithTintAndTransform(::IUnknown* bitmap, Windows::Foundation::Numerics::float2 offset, Windows::Foundation::Numerics::float4 tint, Windows::Foundation::Numerics::float2 origin, float rotation, Windows::Foundation::Numerics::float2 scale, Microsoft::Graphics::Canvas::CanvasSpriteFlip flip) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Draw(*reinterpret_cast<Microsoft::Graphics::Canvas::CanvasBitmap const*>(&bitmap), *reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&offset), *reinterpret_cast<Windows::Foundation::Numerics::float4 const*>(&tint), *reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&origin), rotation, *reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&scale), *reinterpret_cast<Microsoft::Graphics::Canvas::CanvasSpriteFlip const*>(&flip));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawFromSpriteSheetToRect(::IUnknown* bitmap, Windows::Foundation::Rect destRect, Windows::Foundation::Rect sourceRect) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawFromSpriteSheet(*reinterpret_cast<Microsoft::Graphics::Canvas::CanvasBitmap const*>(&bitmap), *reinterpret_cast<Windows::Foundation::Rect const*>(&destRect), *reinterpret_cast<Windows::Foundation::Rect const*>(&sourceRect));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawFromSpriteSheetAtOffset(::IUnknown* bitmap, Windows::Foundation::Numerics::float2 offset, Windows::Foundation::Rect sourceRect) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawFromSpriteSheet(*reinterpret_cast<Microsoft::Graphics::Canvas::CanvasBitmap const*>(&bitmap), *reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&offset), *reinterpret_cast<Windows::Foundation::Rect const*>(&sourceRect));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawFromSpriteSheetWithTransform(::IUnknown* bitmap, Windows::Foundation::Numerics::float3x2 transform, Windows::Foundation::Rect sourceRect) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawFromSpriteSheet(*reinterpret_cast<Microsoft::Graphics::Canvas::CanvasBitmap const*>(&bitmap), *reinterpret_cast<Windows::Foundation::Numerics::float3x2 const*>(&transform), *reinterpret_cast<Windows::Foundation::Rect const*>(&sourceRect));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawFromSpriteSheetToRectWithTint(::IUnknown* bitmap, Windows::Foundation::Rect destRect, Windows::Foundation::Rect sourceRect, Windows::Foundation::Numerics::float4 tint) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawFromSpriteSheet(*reinterpret_cast<Microsoft::Graphics::Canvas::CanvasBitmap const*>(&bitmap), *reinterpret_cast<Windows::Foundation::Rect const*>(&destRect), *reinterpret_cast<Windows::Foundation::Rect const*>(&sourceRect), *reinterpret_cast<Windows::Foundation::Numerics::float4 const*>(&tint));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawFromSpriteSheetAtOffsetWithTint(::IUnknown* bitmap, Windows::Foundation::Numerics::float2 offset, Windows::Foundation::Rect sourceRect, Windows::Foundation::Numerics::float4 tint) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawFromSpriteSheet(*reinterpret_cast<Microsoft::Graphics::Canvas::CanvasBitmap const*>(&bitmap), *reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&offset), *reinterpret_cast<Windows::Foundation::Rect const*>(&sourceRect), *reinterpret_cast<Windows::Foundation::Numerics::float4 const*>(&tint));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawFromSpriteSheetWithTransformAndTint(::IUnknown* bitmap, Windows::Foundation::Numerics::float3x2 transform, Windows::Foundation::Rect sourceRect, Windows::Foundation::Numerics::float4 tint) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawFromSpriteSheet(*reinterpret_cast<Microsoft::Graphics::Canvas::CanvasBitmap const*>(&bitmap), *reinterpret_cast<Windows::Foundation::Numerics::float3x2 const*>(&transform), *reinterpret_cast<Windows::Foundation::Rect const*>(&sourceRect), *reinterpret_cast<Windows::Foundation::Numerics::float4 const*>(&tint));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawFromSpriteSheetToRectWithTintAndFlip(::IUnknown* bitmap, Windows::Foundation::Rect destRect, Windows::Foundation::Rect sourceRect, Windows::Foundation::Numerics::float4 tint, Microsoft::Graphics::Canvas::CanvasSpriteFlip flip) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawFromSpriteSheet(*reinterpret_cast<Microsoft::Graphics::Canvas::CanvasBitmap const*>(&bitmap), *reinterpret_cast<Windows::Foundation::Rect const*>(&destRect), *reinterpret_cast<Windows::Foundation::Rect const*>(&sourceRect), *reinterpret_cast<Windows::Foundation::Numerics::float4 const*>(&tint), *reinterpret_cast<Microsoft::Graphics::Canvas::CanvasSpriteFlip const*>(&flip));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawFromSpriteSheetWithTransformAndTintAndFlip(::IUnknown* bitmap, Windows::Foundation::Numerics::float3x2 transform, Windows::Foundation::Rect sourceRect, Windows::Foundation::Numerics::float4 tint, Microsoft::Graphics::Canvas::CanvasSpriteFlip flip) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawFromSpriteSheet(*reinterpret_cast<Microsoft::Graphics::Canvas::CanvasBitmap const*>(&bitmap), *reinterpret_cast<Windows::Foundation::Numerics::float3x2 const*>(&transform), *reinterpret_cast<Windows::Foundation::Rect const*>(&sourceRect), *reinterpret_cast<Windows::Foundation::Numerics::float4 const*>(&tint), *reinterpret_cast<Microsoft::Graphics::Canvas::CanvasSpriteFlip const*>(&flip));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawFromSpriteSheetAtOffsetWithTintAndTransform(::IUnknown* bitmap, Windows::Foundation::Numerics::float2 offset, Windows::Foundation::Rect sourceRect, Windows::Foundation::Numerics::float4 tint, Windows::Foundation::Numerics::float2 origin, float rotation, Windows::Foundation::Numerics::float2 scale, Microsoft::Graphics::Canvas::CanvasSpriteFlip flip) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawFromSpriteSheet(*reinterpret_cast<Microsoft::Graphics::Canvas::CanvasBitmap const*>(&bitmap), *reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&offset), *reinterpret_cast<Windows::Foundation::Rect const*>(&sourceRect), *reinterpret_cast<Windows::Foundation::Numerics::float4 const*>(&tint), *reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&origin), rotation, *reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&scale), *reinterpret_cast<Microsoft::Graphics::Canvas::CanvasSpriteFlip const*>(&flip));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::ICanvasSpriteBatchStatics> : produce_base<D, Microsoft::Graphics::Canvas::ICanvasSpriteBatchStatics>
{
    HRESULT __stdcall IsSupported(::IUnknown* device, bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsSupported(*reinterpret_cast<Microsoft::Graphics::Canvas::CanvasDevice const*>(&device)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::ICanvasSwapChain> : produce_base<D, Microsoft::Graphics::Canvas::ICanvasSwapChain>
{
    HRESULT __stdcall Present() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Present();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall PresentWithSyncInterval(int32_t syncInterval) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Present(syncInterval);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ResizeBuffersWithSize(Windows::Foundation::Size newSize) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ResizeBuffers(*reinterpret_cast<Windows::Foundation::Size const*>(&newSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ResizeBuffersWithWidthAndHeight(float newWidth, float newHeight) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ResizeBuffers(newWidth, newHeight);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ResizeBuffersWithWidthAndHeightAndDpi(float newWidth, float newHeight, float newDpi) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ResizeBuffers(newWidth, newHeight, newDpi);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ResizeBuffersWithAllOptions(float newWidth, float newHeight, float newDpi, Windows::Graphics::DirectX::DirectXPixelFormat newFormat, int32_t bufferCount) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ResizeBuffers(newWidth, newHeight, newDpi, *reinterpret_cast<Windows::Graphics::DirectX::DirectXPixelFormat const*>(&newFormat), bufferCount);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Size(Windows::Foundation::Size* size) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *size = detach_abi(this->shim().Size());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SizeInPixels(struct_of<8>* size) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *size = detach_abi(this->shim().SizeInPixels());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Format(Windows::Graphics::DirectX::DirectXPixelFormat* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Format());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BufferCount(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BufferCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AlphaMode(Microsoft::Graphics::Canvas::CanvasAlphaMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AlphaMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Rotation(Microsoft::Graphics::Canvas::CanvasSwapChainRotation* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Rotation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Rotation(Microsoft::Graphics::Canvas::CanvasSwapChainRotation value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Rotation(*reinterpret_cast<Microsoft::Graphics::Canvas::CanvasSwapChainRotation const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SourceSize(Windows::Foundation::Size* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SourceSize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SourceSize(Windows::Foundation::Size value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SourceSize(*reinterpret_cast<Windows::Foundation::Size const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TransformMatrix(Windows::Foundation::Numerics::float3x2* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TransformMatrix());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TransformMatrix(Windows::Foundation::Numerics::float3x2 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TransformMatrix(*reinterpret_cast<Windows::Foundation::Numerics::float3x2 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateDrawingSession(struct_of<4> clearColor, ::IUnknown** drawingSession) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *drawingSession = detach_abi(this->shim().CreateDrawingSession(*reinterpret_cast<Windows::UI::Color const*>(&clearColor)));
            return S_OK;
        }
        catch (...)
        {
            *drawingSession = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall WaitForVerticalBlank() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WaitForVerticalBlank();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::ICanvasSwapChainFactory> : produce_base<D, Microsoft::Graphics::Canvas::ICanvasSwapChainFactory>
{
    HRESULT __stdcall CreateWithSize(::IUnknown* resourceCreator, Windows::Foundation::Size size, ::IUnknown** swapChain) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *swapChain = detach_abi(this->shim().CreateWithSize(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreatorWithDpi const*>(&resourceCreator), *reinterpret_cast<Windows::Foundation::Size const*>(&size)));
            return S_OK;
        }
        catch (...)
        {
            *swapChain = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateWithWidthAndHeight(::IUnknown* resourceCreator, float width, float height, ::IUnknown** swapChain) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *swapChain = detach_abi(this->shim().CreateWithWidthAndHeight(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreatorWithDpi const*>(&resourceCreator), width, height));
            return S_OK;
        }
        catch (...)
        {
            *swapChain = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateWithWidthAndHeightAndDpi(::IUnknown* resourceCreator, float width, float height, float dpi, ::IUnknown** swapChain) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *swapChain = detach_abi(this->shim().CreateWithWidthAndHeightAndDpi(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator), width, height, dpi));
            return S_OK;
        }
        catch (...)
        {
            *swapChain = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateWithAllOptions(::IUnknown* resourceCreator, float width, float height, float dpi, Windows::Graphics::DirectX::DirectXPixelFormat format, int32_t bufferCount, Microsoft::Graphics::Canvas::CanvasAlphaMode alphaMode, ::IUnknown** swapChain) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *swapChain = detach_abi(this->shim().CreateWithAllOptions(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator), width, height, dpi, *reinterpret_cast<Windows::Graphics::DirectX::DirectXPixelFormat const*>(&format), bufferCount, *reinterpret_cast<Microsoft::Graphics::Canvas::CanvasAlphaMode const*>(&alphaMode)));
            return S_OK;
        }
        catch (...)
        {
            *swapChain = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::ICanvasSwapChainStatics> : produce_base<D, Microsoft::Graphics::Canvas::ICanvasSwapChainStatics>
{
    HRESULT __stdcall CreateForCoreWindowWithDpi(::IUnknown* resourceCreator, ::IUnknown* coreWindow, float dpi, ::IUnknown** swapChain) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *swapChain = detach_abi(this->shim().CreateForCoreWindow(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator), *reinterpret_cast<Windows::UI::Core::CoreWindow const*>(&coreWindow), dpi));
            return S_OK;
        }
        catch (...)
        {
            *swapChain = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateForCoreWindowWithAllOptions(::IUnknown* resourceCreator, ::IUnknown* coreWindow, float width, float height, float dpi, Windows::Graphics::DirectX::DirectXPixelFormat format, int32_t bufferCount, ::IUnknown** swapChain) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *swapChain = detach_abi(this->shim().CreateForCoreWindow(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator), *reinterpret_cast<Windows::UI::Core::CoreWindow const*>(&coreWindow), width, height, dpi, *reinterpret_cast<Windows::Graphics::DirectX::DirectXPixelFormat const*>(&format), bufferCount));
            return S_OK;
        }
        catch (...)
        {
            *swapChain = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::ICanvasVirtualBitmap> : produce_base<D, Microsoft::Graphics::Canvas::ICanvasVirtualBitmap>
{
    HRESULT __stdcall get_Device(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Device());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsCachedOnDemand(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsCachedOnDemand());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SizeInPixels(struct_of<8>* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SizeInPixels());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Size(Windows::Foundation::Size* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Size());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Bounds(Windows::Foundation::Rect* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Bounds());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::ICanvasVirtualBitmapStatics> : produce_base<D, Microsoft::Graphics::Canvas::ICanvasVirtualBitmapStatics>
{
    HRESULT __stdcall LoadAsyncFromFileName(::IUnknown* resourceCreator, HSTRING fileName, ::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LoadAsync(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator), *reinterpret_cast<hstring const*>(&fileName)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall LoadAsyncFromFileNameWithOptions(::IUnknown* resourceCreator, HSTRING fileName, Microsoft::Graphics::Canvas::CanvasVirtualBitmapOptions options, ::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LoadAsync(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator), *reinterpret_cast<hstring const*>(&fileName), *reinterpret_cast<Microsoft::Graphics::Canvas::CanvasVirtualBitmapOptions const*>(&options)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall LoadAsyncFromFileNameWithOptionsAndAlpha(::IUnknown* resourceCreator, HSTRING fileName, Microsoft::Graphics::Canvas::CanvasVirtualBitmapOptions options, Microsoft::Graphics::Canvas::CanvasAlphaMode alpha, ::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LoadAsync(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator), *reinterpret_cast<hstring const*>(&fileName), *reinterpret_cast<Microsoft::Graphics::Canvas::CanvasVirtualBitmapOptions const*>(&options), *reinterpret_cast<Microsoft::Graphics::Canvas::CanvasAlphaMode const*>(&alpha)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall LoadAsyncFromUri(::IUnknown* resourceCreator, ::IUnknown* uri, ::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LoadAsync(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator), *reinterpret_cast<Windows::Foundation::Uri const*>(&uri)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall LoadAsyncFromUriWithOptions(::IUnknown* resourceCreator, ::IUnknown* uri, Microsoft::Graphics::Canvas::CanvasVirtualBitmapOptions options, ::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LoadAsync(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator), *reinterpret_cast<Windows::Foundation::Uri const*>(&uri), *reinterpret_cast<Microsoft::Graphics::Canvas::CanvasVirtualBitmapOptions const*>(&options)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall LoadAsyncFromUriWithOptionsAndAlpha(::IUnknown* resourceCreator, ::IUnknown* uri, Microsoft::Graphics::Canvas::CanvasVirtualBitmapOptions options, Microsoft::Graphics::Canvas::CanvasAlphaMode alpha, ::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LoadAsync(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator), *reinterpret_cast<Windows::Foundation::Uri const*>(&uri), *reinterpret_cast<Microsoft::Graphics::Canvas::CanvasVirtualBitmapOptions const*>(&options), *reinterpret_cast<Microsoft::Graphics::Canvas::CanvasAlphaMode const*>(&alpha)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall LoadAsyncFromStream(::IUnknown* resourceCreator, ::IUnknown* stream, ::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LoadAsync(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator), *reinterpret_cast<Windows::Storage::Streams::IRandomAccessStream const*>(&stream)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall LoadAsyncFromStreamWithOptions(::IUnknown* resourceCreator, ::IUnknown* stream, Microsoft::Graphics::Canvas::CanvasVirtualBitmapOptions options, ::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LoadAsync(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator), *reinterpret_cast<Windows::Storage::Streams::IRandomAccessStream const*>(&stream), *reinterpret_cast<Microsoft::Graphics::Canvas::CanvasVirtualBitmapOptions const*>(&options)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall LoadAsyncFromStreamWithOptionsAndAlpha(::IUnknown* resourceCreator, ::IUnknown* stream, Microsoft::Graphics::Canvas::CanvasVirtualBitmapOptions options, Microsoft::Graphics::Canvas::CanvasAlphaMode alpha, ::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LoadAsync(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator), *reinterpret_cast<Windows::Storage::Streams::IRandomAccessStream const*>(&stream), *reinterpret_cast<Microsoft::Graphics::Canvas::CanvasVirtualBitmapOptions const*>(&options), *reinterpret_cast<Microsoft::Graphics::Canvas::CanvasAlphaMode const*>(&alpha)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Microsoft::Graphics::Canvas {

inline Microsoft::Graphics::Canvas::CanvasBitmap CanvasBitmap::CreateFromDirect3D11Surface(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const& surface)
{
    return get_activation_factory<CanvasBitmap, Microsoft::Graphics::Canvas::ICanvasBitmapStatics>().CreateFromDirect3D11Surface(resourceCreator, surface);
}

inline Microsoft::Graphics::Canvas::CanvasBitmap CanvasBitmap::CreateFromDirect3D11Surface(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const& surface, float dpi)
{
    return get_activation_factory<CanvasBitmap, Microsoft::Graphics::Canvas::ICanvasBitmapStatics>().CreateFromDirect3D11Surface(resourceCreator, surface, dpi);
}

inline Microsoft::Graphics::Canvas::CanvasBitmap CanvasBitmap::CreateFromDirect3D11Surface(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const& surface, float dpi, Microsoft::Graphics::Canvas::CanvasAlphaMode const& alpha)
{
    return get_activation_factory<CanvasBitmap, Microsoft::Graphics::Canvas::ICanvasBitmapStatics>().CreateFromDirect3D11Surface(resourceCreator, surface, dpi, alpha);
}

inline Microsoft::Graphics::Canvas::CanvasBitmap CanvasBitmap::CreateFromBytes(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<uint8_t const> bytes, int32_t widthInPixels, int32_t heightInPixels, Windows::Graphics::DirectX::DirectXPixelFormat const& format)
{
    return get_activation_factory<CanvasBitmap, Microsoft::Graphics::Canvas::ICanvasBitmapStatics>().CreateFromBytes(resourceCreator, bytes, widthInPixels, heightInPixels, format);
}

inline Microsoft::Graphics::Canvas::CanvasBitmap CanvasBitmap::CreateFromBytes(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<uint8_t const> bytes, int32_t widthInPixels, int32_t heightInPixels, Windows::Graphics::DirectX::DirectXPixelFormat const& format, float dpi)
{
    return get_activation_factory<CanvasBitmap, Microsoft::Graphics::Canvas::ICanvasBitmapStatics>().CreateFromBytes(resourceCreator, bytes, widthInPixels, heightInPixels, format, dpi);
}

inline Microsoft::Graphics::Canvas::CanvasBitmap CanvasBitmap::CreateFromBytes(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<uint8_t const> bytes, int32_t widthInPixels, int32_t heightInPixels, Windows::Graphics::DirectX::DirectXPixelFormat const& format, float dpi, Microsoft::Graphics::Canvas::CanvasAlphaMode const& alpha)
{
    return get_activation_factory<CanvasBitmap, Microsoft::Graphics::Canvas::ICanvasBitmapStatics>().CreateFromBytes(resourceCreator, bytes, widthInPixels, heightInPixels, format, dpi, alpha);
}

inline Microsoft::Graphics::Canvas::CanvasBitmap CanvasBitmap::CreateFromBytes(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Storage::Streams::IBuffer const& buffer, int32_t widthInPixels, int32_t heightInPixels, Windows::Graphics::DirectX::DirectXPixelFormat const& format)
{
    return get_activation_factory<CanvasBitmap, Microsoft::Graphics::Canvas::ICanvasBitmapStatics>().CreateFromBytes(resourceCreator, buffer, widthInPixels, heightInPixels, format);
}

inline Microsoft::Graphics::Canvas::CanvasBitmap CanvasBitmap::CreateFromBytes(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Storage::Streams::IBuffer const& buffer, int32_t widthInPixels, int32_t heightInPixels, Windows::Graphics::DirectX::DirectXPixelFormat const& format, float dpi)
{
    return get_activation_factory<CanvasBitmap, Microsoft::Graphics::Canvas::ICanvasBitmapStatics>().CreateFromBytes(resourceCreator, buffer, widthInPixels, heightInPixels, format, dpi);
}

inline Microsoft::Graphics::Canvas::CanvasBitmap CanvasBitmap::CreateFromBytes(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Storage::Streams::IBuffer const& buffer, int32_t widthInPixels, int32_t heightInPixels, Windows::Graphics::DirectX::DirectXPixelFormat const& format, float dpi, Microsoft::Graphics::Canvas::CanvasAlphaMode const& alpha)
{
    return get_activation_factory<CanvasBitmap, Microsoft::Graphics::Canvas::ICanvasBitmapStatics>().CreateFromBytes(resourceCreator, buffer, widthInPixels, heightInPixels, format, dpi, alpha);
}

inline Microsoft::Graphics::Canvas::CanvasBitmap CanvasBitmap::CreateFromColors(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<Windows::UI::Color const> colors, int32_t widthInPixels, int32_t heightInPixels)
{
    return get_activation_factory<CanvasBitmap, Microsoft::Graphics::Canvas::ICanvasBitmapStatics>().CreateFromColors(resourceCreator, colors, widthInPixels, heightInPixels);
}

inline Microsoft::Graphics::Canvas::CanvasBitmap CanvasBitmap::CreateFromColors(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<Windows::UI::Color const> colors, int32_t widthInPixels, int32_t heightInPixels, float dpi)
{
    return get_activation_factory<CanvasBitmap, Microsoft::Graphics::Canvas::ICanvasBitmapStatics>().CreateFromColors(resourceCreator, colors, widthInPixels, heightInPixels, dpi);
}

inline Microsoft::Graphics::Canvas::CanvasBitmap CanvasBitmap::CreateFromColors(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<Windows::UI::Color const> colors, int32_t widthInPixels, int32_t heightInPixels, float dpi, Microsoft::Graphics::Canvas::CanvasAlphaMode const& alpha)
{
    return get_activation_factory<CanvasBitmap, Microsoft::Graphics::Canvas::ICanvasBitmapStatics>().CreateFromColors(resourceCreator, colors, widthInPixels, heightInPixels, dpi, alpha);
}

inline Microsoft::Graphics::Canvas::CanvasBitmap CanvasBitmap::CreateFromSoftwareBitmap(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Graphics::Imaging::SoftwareBitmap const& sourceBitmap)
{
    return get_activation_factory<CanvasBitmap, Microsoft::Graphics::Canvas::ICanvasBitmapStatics>().CreateFromSoftwareBitmap(resourceCreator, sourceBitmap);
}

inline Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::CanvasBitmap> CanvasBitmap::LoadAsync(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, param::hstring const& fileName)
{
    return get_activation_factory<CanvasBitmap, Microsoft::Graphics::Canvas::ICanvasBitmapStatics>().LoadAsync(resourceCreator, fileName);
}

inline Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::CanvasBitmap> CanvasBitmap::LoadAsync(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, param::hstring const& fileName, float dpi)
{
    return get_activation_factory<CanvasBitmap, Microsoft::Graphics::Canvas::ICanvasBitmapStatics>().LoadAsync(resourceCreator, fileName, dpi);
}

inline Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::CanvasBitmap> CanvasBitmap::LoadAsync(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, param::hstring const& fileName, float dpi, Microsoft::Graphics::Canvas::CanvasAlphaMode const& alpha)
{
    return get_activation_factory<CanvasBitmap, Microsoft::Graphics::Canvas::ICanvasBitmapStatics>().LoadAsync(resourceCreator, fileName, dpi, alpha);
}

inline Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::CanvasBitmap> CanvasBitmap::LoadAsync(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Foundation::Uri const& uri)
{
    return get_activation_factory<CanvasBitmap, Microsoft::Graphics::Canvas::ICanvasBitmapStatics>().LoadAsync(resourceCreator, uri);
}

inline Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::CanvasBitmap> CanvasBitmap::LoadAsync(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Foundation::Uri const& uri, float dpi)
{
    return get_activation_factory<CanvasBitmap, Microsoft::Graphics::Canvas::ICanvasBitmapStatics>().LoadAsync(resourceCreator, uri, dpi);
}

inline Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::CanvasBitmap> CanvasBitmap::LoadAsync(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Foundation::Uri const& uri, float dpi, Microsoft::Graphics::Canvas::CanvasAlphaMode const& alpha)
{
    return get_activation_factory<CanvasBitmap, Microsoft::Graphics::Canvas::ICanvasBitmapStatics>().LoadAsync(resourceCreator, uri, dpi, alpha);
}

inline Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::CanvasBitmap> CanvasBitmap::LoadAsync(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Storage::Streams::IRandomAccessStream const& stream)
{
    return get_activation_factory<CanvasBitmap, Microsoft::Graphics::Canvas::ICanvasBitmapStatics>().LoadAsync(resourceCreator, stream);
}

inline Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::CanvasBitmap> CanvasBitmap::LoadAsync(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Storage::Streams::IRandomAccessStream const& stream, float dpi)
{
    return get_activation_factory<CanvasBitmap, Microsoft::Graphics::Canvas::ICanvasBitmapStatics>().LoadAsync(resourceCreator, stream, dpi);
}

inline Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::CanvasBitmap> CanvasBitmap::LoadAsync(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Storage::Streams::IRandomAccessStream const& stream, float dpi, Microsoft::Graphics::Canvas::CanvasAlphaMode const& alpha)
{
    return get_activation_factory<CanvasBitmap, Microsoft::Graphics::Canvas::ICanvasBitmapStatics>().LoadAsync(resourceCreator, stream, dpi, alpha);
}

inline CanvasCommandList::CanvasCommandList(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator) :
    CanvasCommandList(get_activation_factory<CanvasCommandList, Microsoft::Graphics::Canvas::ICanvasCommandListFactory>().Create(resourceCreator))
{}

inline CanvasDevice::CanvasDevice() :
    CanvasDevice(activate_instance<CanvasDevice>())
{}

inline CanvasDevice::CanvasDevice(bool forceSoftwareRenderer) :
    CanvasDevice(get_activation_factory<CanvasDevice, Microsoft::Graphics::Canvas::ICanvasDeviceFactory>().CreateWithForceSoftwareRendererOption(forceSoftwareRenderer))
{}

inline Microsoft::Graphics::Canvas::CanvasDevice CanvasDevice::CreateFromDirect3D11Device(Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice const& direct3DDevice)
{
    return get_activation_factory<CanvasDevice, Microsoft::Graphics::Canvas::ICanvasDeviceStatics>().CreateFromDirect3D11Device(direct3DDevice);
}

inline Microsoft::Graphics::Canvas::CanvasDevice CanvasDevice::GetSharedDevice()
{
    return get_activation_factory<CanvasDevice, Microsoft::Graphics::Canvas::ICanvasDeviceStatics>().GetSharedDevice();
}

inline Microsoft::Graphics::Canvas::CanvasDevice CanvasDevice::GetSharedDevice(bool forceSoftwareRenderer)
{
    return get_activation_factory<CanvasDevice, Microsoft::Graphics::Canvas::ICanvasDeviceStatics>().GetSharedDevice(forceSoftwareRenderer);
}

inline void CanvasDevice::DebugLevel(Microsoft::Graphics::Canvas::CanvasDebugLevel const& value)
{
    get_activation_factory<CanvasDevice, Microsoft::Graphics::Canvas::ICanvasDeviceStatics>().DebugLevel(value);
}

inline Microsoft::Graphics::Canvas::CanvasDebugLevel CanvasDevice::DebugLevel()
{
    return get_activation_factory<CanvasDevice, Microsoft::Graphics::Canvas::ICanvasDeviceStatics>().DebugLevel();
}

inline Windows::Foundation::IAsyncAction CanvasImage::SaveAsync(Microsoft::Graphics::Canvas::ICanvasImage const& image, Windows::Foundation::Rect const& sourceRectangle, float dpi, Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Storage::Streams::IRandomAccessStream const& stream, Microsoft::Graphics::Canvas::CanvasBitmapFileFormat const& fileFormat)
{
    return get_activation_factory<CanvasImage, Microsoft::Graphics::Canvas::ICanvasImageStatics>().SaveAsync(image, sourceRectangle, dpi, resourceCreator, stream, fileFormat);
}

inline Windows::Foundation::IAsyncAction CanvasImage::SaveAsync(Microsoft::Graphics::Canvas::ICanvasImage const& image, Windows::Foundation::Rect const& sourceRectangle, float dpi, Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Storage::Streams::IRandomAccessStream const& stream, Microsoft::Graphics::Canvas::CanvasBitmapFileFormat const& fileFormat, float quality)
{
    return get_activation_factory<CanvasImage, Microsoft::Graphics::Canvas::ICanvasImageStatics>().SaveAsync(image, sourceRectangle, dpi, resourceCreator, stream, fileFormat, quality);
}

inline Windows::Foundation::IAsyncAction CanvasImage::SaveAsync(Microsoft::Graphics::Canvas::ICanvasImage const& image, Windows::Foundation::Rect const& sourceRectangle, float dpi, Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Storage::Streams::IRandomAccessStream const& stream, Microsoft::Graphics::Canvas::CanvasBitmapFileFormat const& fileFormat, float quality, Microsoft::Graphics::Canvas::CanvasBufferPrecision const& bufferPrecision)
{
    return get_activation_factory<CanvasImage, Microsoft::Graphics::Canvas::ICanvasImageStatics>().SaveAsync(image, sourceRectangle, dpi, resourceCreator, stream, fileFormat, quality, bufferPrecision);
}

inline com_array<float> CanvasImage::ComputeHistogram(Microsoft::Graphics::Canvas::ICanvasImage const& image, Windows::Foundation::Rect const& sourceRectangle, Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Microsoft::Graphics::Canvas::Effects::EffectChannelSelect const& channelSelect, int32_t numberOfBins)
{
    return get_activation_factory<CanvasImage, Microsoft::Graphics::Canvas::ICanvasImageStatics>().ComputeHistogram(image, sourceRectangle, resourceCreator, channelSelect, numberOfBins);
}

inline bool CanvasImage::IsHistogramSupported(Microsoft::Graphics::Canvas::CanvasDevice const& device)
{
    return get_activation_factory<CanvasImage, Microsoft::Graphics::Canvas::ICanvasImageStatics>().IsHistogramSupported(device);
}

inline CanvasRenderTarget::CanvasRenderTarget(Microsoft::Graphics::Canvas::ICanvasResourceCreatorWithDpi const& resourceCreator, Windows::Foundation::Size const& size) :
    CanvasRenderTarget(get_activation_factory<CanvasRenderTarget, Microsoft::Graphics::Canvas::ICanvasRenderTargetFactory>().CreateWithSize(resourceCreator, size))
{}

inline CanvasRenderTarget::CanvasRenderTarget(Microsoft::Graphics::Canvas::ICanvasResourceCreatorWithDpi const& resourceCreator, float width, float height) :
    CanvasRenderTarget(get_activation_factory<CanvasRenderTarget, Microsoft::Graphics::Canvas::ICanvasRenderTargetFactory>().CreateWithWidthAndHeight(resourceCreator, width, height))
{}

inline CanvasRenderTarget::CanvasRenderTarget(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, float width, float height, float dpi) :
    CanvasRenderTarget(get_activation_factory<CanvasRenderTarget, Microsoft::Graphics::Canvas::ICanvasRenderTargetFactory>().CreateWithWidthAndHeightAndDpi(resourceCreator, width, height, dpi))
{}

inline CanvasRenderTarget::CanvasRenderTarget(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, float width, float height, float dpi, Windows::Graphics::DirectX::DirectXPixelFormat const& format, Microsoft::Graphics::Canvas::CanvasAlphaMode const& alpha) :
    CanvasRenderTarget(get_activation_factory<CanvasRenderTarget, Microsoft::Graphics::Canvas::ICanvasRenderTargetFactory>().CreateWithWidthAndHeightAndDpiAndFormatAndAlpha(resourceCreator, width, height, dpi, format, alpha))
{}

inline Microsoft::Graphics::Canvas::CanvasRenderTarget CanvasRenderTarget::CreateFromDirect3D11Surface(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const& surface)
{
    return get_activation_factory<CanvasRenderTarget, Microsoft::Graphics::Canvas::ICanvasRenderTargetStatics>().CreateFromDirect3D11Surface(resourceCreator, surface);
}

inline Microsoft::Graphics::Canvas::CanvasRenderTarget CanvasRenderTarget::CreateFromDirect3D11Surface(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const& surface, float dpi)
{
    return get_activation_factory<CanvasRenderTarget, Microsoft::Graphics::Canvas::ICanvasRenderTargetStatics>().CreateFromDirect3D11Surface(resourceCreator, surface, dpi);
}

inline Microsoft::Graphics::Canvas::CanvasRenderTarget CanvasRenderTarget::CreateFromDirect3D11Surface(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const& surface, float dpi, Microsoft::Graphics::Canvas::CanvasAlphaMode const& alpha)
{
    return get_activation_factory<CanvasRenderTarget, Microsoft::Graphics::Canvas::ICanvasRenderTargetStatics>().CreateFromDirect3D11Surface(resourceCreator, surface, dpi, alpha);
}

inline bool CanvasSpriteBatch::IsSupported(Microsoft::Graphics::Canvas::CanvasDevice const& device)
{
    return get_activation_factory<CanvasSpriteBatch, Microsoft::Graphics::Canvas::ICanvasSpriteBatchStatics>().IsSupported(device);
}

inline CanvasSwapChain::CanvasSwapChain(Microsoft::Graphics::Canvas::ICanvasResourceCreatorWithDpi const& resourceCreator, Windows::Foundation::Size const& size) :
    CanvasSwapChain(get_activation_factory<CanvasSwapChain, Microsoft::Graphics::Canvas::ICanvasSwapChainFactory>().CreateWithSize(resourceCreator, size))
{}

inline CanvasSwapChain::CanvasSwapChain(Microsoft::Graphics::Canvas::ICanvasResourceCreatorWithDpi const& resourceCreator, float width, float height) :
    CanvasSwapChain(get_activation_factory<CanvasSwapChain, Microsoft::Graphics::Canvas::ICanvasSwapChainFactory>().CreateWithWidthAndHeight(resourceCreator, width, height))
{}

inline CanvasSwapChain::CanvasSwapChain(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, float width, float height, float dpi) :
    CanvasSwapChain(get_activation_factory<CanvasSwapChain, Microsoft::Graphics::Canvas::ICanvasSwapChainFactory>().CreateWithWidthAndHeightAndDpi(resourceCreator, width, height, dpi))
{}

inline CanvasSwapChain::CanvasSwapChain(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, float width, float height, float dpi, Windows::Graphics::DirectX::DirectXPixelFormat const& format, int32_t bufferCount, Microsoft::Graphics::Canvas::CanvasAlphaMode const& alphaMode) :
    CanvasSwapChain(get_activation_factory<CanvasSwapChain, Microsoft::Graphics::Canvas::ICanvasSwapChainFactory>().CreateWithAllOptions(resourceCreator, width, height, dpi, format, bufferCount, alphaMode))
{}

inline Microsoft::Graphics::Canvas::CanvasSwapChain CanvasSwapChain::CreateForCoreWindow(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::UI::Core::CoreWindow const& coreWindow, float dpi)
{
    return get_activation_factory<CanvasSwapChain, Microsoft::Graphics::Canvas::ICanvasSwapChainStatics>().CreateForCoreWindow(resourceCreator, coreWindow, dpi);
}

inline Microsoft::Graphics::Canvas::CanvasSwapChain CanvasSwapChain::CreateForCoreWindow(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::UI::Core::CoreWindow const& coreWindow, float width, float height, float dpi, Windows::Graphics::DirectX::DirectXPixelFormat const& format, int32_t bufferCount)
{
    return get_activation_factory<CanvasSwapChain, Microsoft::Graphics::Canvas::ICanvasSwapChainStatics>().CreateForCoreWindow(resourceCreator, coreWindow, width, height, dpi, format, bufferCount);
}

inline Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::CanvasVirtualBitmap> CanvasVirtualBitmap::LoadAsync(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, param::hstring const& fileName)
{
    return get_activation_factory<CanvasVirtualBitmap, Microsoft::Graphics::Canvas::ICanvasVirtualBitmapStatics>().LoadAsync(resourceCreator, fileName);
}

inline Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::CanvasVirtualBitmap> CanvasVirtualBitmap::LoadAsync(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, param::hstring const& fileName, Microsoft::Graphics::Canvas::CanvasVirtualBitmapOptions const& options)
{
    return get_activation_factory<CanvasVirtualBitmap, Microsoft::Graphics::Canvas::ICanvasVirtualBitmapStatics>().LoadAsync(resourceCreator, fileName, options);
}

inline Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::CanvasVirtualBitmap> CanvasVirtualBitmap::LoadAsync(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, param::hstring const& fileName, Microsoft::Graphics::Canvas::CanvasVirtualBitmapOptions const& options, Microsoft::Graphics::Canvas::CanvasAlphaMode const& alpha)
{
    return get_activation_factory<CanvasVirtualBitmap, Microsoft::Graphics::Canvas::ICanvasVirtualBitmapStatics>().LoadAsync(resourceCreator, fileName, options, alpha);
}

inline Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::CanvasVirtualBitmap> CanvasVirtualBitmap::LoadAsync(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Foundation::Uri const& uri)
{
    return get_activation_factory<CanvasVirtualBitmap, Microsoft::Graphics::Canvas::ICanvasVirtualBitmapStatics>().LoadAsync(resourceCreator, uri);
}

inline Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::CanvasVirtualBitmap> CanvasVirtualBitmap::LoadAsync(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Foundation::Uri const& uri, Microsoft::Graphics::Canvas::CanvasVirtualBitmapOptions const& options)
{
    return get_activation_factory<CanvasVirtualBitmap, Microsoft::Graphics::Canvas::ICanvasVirtualBitmapStatics>().LoadAsync(resourceCreator, uri, options);
}

inline Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::CanvasVirtualBitmap> CanvasVirtualBitmap::LoadAsync(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Foundation::Uri const& uri, Microsoft::Graphics::Canvas::CanvasVirtualBitmapOptions const& options, Microsoft::Graphics::Canvas::CanvasAlphaMode const& alpha)
{
    return get_activation_factory<CanvasVirtualBitmap, Microsoft::Graphics::Canvas::ICanvasVirtualBitmapStatics>().LoadAsync(resourceCreator, uri, options, alpha);
}

inline Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::CanvasVirtualBitmap> CanvasVirtualBitmap::LoadAsync(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Storage::Streams::IRandomAccessStream const& stream)
{
    return get_activation_factory<CanvasVirtualBitmap, Microsoft::Graphics::Canvas::ICanvasVirtualBitmapStatics>().LoadAsync(resourceCreator, stream);
}

inline Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::CanvasVirtualBitmap> CanvasVirtualBitmap::LoadAsync(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Storage::Streams::IRandomAccessStream const& stream, Microsoft::Graphics::Canvas::CanvasVirtualBitmapOptions const& options)
{
    return get_activation_factory<CanvasVirtualBitmap, Microsoft::Graphics::Canvas::ICanvasVirtualBitmapStatics>().LoadAsync(resourceCreator, stream, options);
}

inline Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::CanvasVirtualBitmap> CanvasVirtualBitmap::LoadAsync(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Storage::Streams::IRandomAccessStream const& stream, Microsoft::Graphics::Canvas::CanvasVirtualBitmapOptions const& options, Microsoft::Graphics::Canvas::CanvasAlphaMode const& alpha)
{
    return get_activation_factory<CanvasVirtualBitmap, Microsoft::Graphics::Canvas::ICanvasVirtualBitmapStatics>().LoadAsync(resourceCreator, stream, options, alpha);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Microsoft::Graphics::Canvas::ICanvasActiveLayer> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::ICanvasActiveLayer> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::ICanvasBitmap> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::ICanvasBitmap> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::ICanvasBitmapFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::ICanvasBitmapFactory> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::ICanvasBitmapStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::ICanvasBitmapStatics> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::ICanvasCommandList> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::ICanvasCommandList> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::ICanvasCommandListFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::ICanvasCommandListFactory> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::ICanvasDevice> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::ICanvasDevice> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::ICanvasDeviceFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::ICanvasDeviceFactory> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::ICanvasDeviceStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::ICanvasDeviceStatics> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::ICanvasDrawingSession> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::ICanvasDrawingSession> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::ICanvasImage> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::ICanvasImage> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::ICanvasImageStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::ICanvasImageStatics> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::ICanvasLock> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::ICanvasLock> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::ICanvasRenderTarget> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::ICanvasRenderTarget> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::ICanvasRenderTargetFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::ICanvasRenderTargetFactory> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::ICanvasRenderTargetStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::ICanvasRenderTargetStatics> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::ICanvasResourceCreator> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::ICanvasResourceCreator> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::ICanvasResourceCreatorWithDpi> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::ICanvasResourceCreatorWithDpi> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::ICanvasSpriteBatch> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::ICanvasSpriteBatch> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::ICanvasSpriteBatchStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::ICanvasSpriteBatchStatics> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::ICanvasSwapChain> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::ICanvasSwapChain> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::ICanvasSwapChainFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::ICanvasSwapChainFactory> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::ICanvasSwapChainStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::ICanvasSwapChainStatics> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::ICanvasVirtualBitmap> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::ICanvasVirtualBitmap> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::ICanvasVirtualBitmapStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::ICanvasVirtualBitmapStatics> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::CanvasActiveLayer> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::CanvasActiveLayer> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::CanvasBitmap> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::CanvasBitmap> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::CanvasCommandList> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::CanvasCommandList> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::CanvasDevice> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::CanvasDevice> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::CanvasDrawingSession> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::CanvasDrawingSession> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::CanvasImage> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::CanvasImage> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::CanvasLock> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::CanvasLock> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::CanvasRenderTarget> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::CanvasRenderTarget> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::CanvasSpriteBatch> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::CanvasSpriteBatch> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::CanvasSwapChain> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::CanvasSwapChain> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::CanvasVirtualBitmap> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::CanvasVirtualBitmap> {};

}

WINRT_WARNING_POP
