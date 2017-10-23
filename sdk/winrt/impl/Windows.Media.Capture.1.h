// C++/WinRT v1.0.170906.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.Collections.0.h"
#include "winrt/impl/Windows.Graphics.Imaging.0.h"
#include "winrt/impl/Windows.Media.0.h"
#include "winrt/impl/Windows.Media.Capture.Core.0.h"
#include "winrt/impl/Windows.Media.Capture.Frames.0.h"
#include "winrt/impl/Windows.Media.Core.0.h"
#include "winrt/impl/Windows.Media.Devices.0.h"
#include "winrt/impl/Windows.Media.Effects.0.h"
#include "winrt/impl/Windows.Media.MediaProperties.0.h"
#include "winrt/impl/Windows.Storage.0.h"
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Media.Capture.0.h"

WINRT_EXPORT namespace winrt::Windows::Media::Capture {

struct WINRT_EBO IAdvancedCapturedPhoto :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAdvancedCapturedPhoto>
{
    IAdvancedCapturedPhoto(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAdvancedCapturedPhoto2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAdvancedCapturedPhoto2>
{
    IAdvancedCapturedPhoto2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAdvancedPhotoCapture :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAdvancedPhotoCapture>
{
    IAdvancedPhotoCapture(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppCapture :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppCapture>
{
    IAppCapture(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppCaptureStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppCaptureStatics>
{
    IAppCaptureStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppCaptureStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppCaptureStatics2>
{
    IAppCaptureStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICameraCaptureUI :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICameraCaptureUI>
{
    ICameraCaptureUI(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICameraCaptureUIPhotoCaptureSettings :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICameraCaptureUIPhotoCaptureSettings>
{
    ICameraCaptureUIPhotoCaptureSettings(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICameraCaptureUIVideoCaptureSettings :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICameraCaptureUIVideoCaptureSettings>
{
    ICameraCaptureUIVideoCaptureSettings(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICapturedFrame :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICapturedFrame>,
    impl::require<ICapturedFrame, Windows::Foundation::IClosable, Windows::Storage::Streams::IContentTypeProvider, Windows::Storage::Streams::IInputStream, Windows::Storage::Streams::IOutputStream, Windows::Storage::Streams::IRandomAccessStream, Windows::Storage::Streams::IRandomAccessStreamWithContentType>
{
    ICapturedFrame(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICapturedFrameControlValues :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICapturedFrameControlValues>
{
    ICapturedFrameControlValues(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICapturedFrameControlValues2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICapturedFrameControlValues2>
{
    ICapturedFrameControlValues2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICapturedFrameWithSoftwareBitmap :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICapturedFrameWithSoftwareBitmap>
{
    ICapturedFrameWithSoftwareBitmap(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICapturedPhoto :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICapturedPhoto>
{
    ICapturedPhoto(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ILowLagMediaRecording :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILowLagMediaRecording>
{
    ILowLagMediaRecording(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ILowLagMediaRecording2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILowLagMediaRecording2>
{
    ILowLagMediaRecording2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ILowLagMediaRecording3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILowLagMediaRecording3>
{
    ILowLagMediaRecording3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ILowLagPhotoCapture :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILowLagPhotoCapture>
{
    ILowLagPhotoCapture(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ILowLagPhotoSequenceCapture :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILowLagPhotoSequenceCapture>
{
    ILowLagPhotoSequenceCapture(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaCapture :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaCapture>
{
    IMediaCapture(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaCapture2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaCapture2>
{
    IMediaCapture2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaCapture3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaCapture3>
{
    IMediaCapture3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaCapture4 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaCapture4>
{
    IMediaCapture4(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaCapture5 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaCapture5>
{
    IMediaCapture5(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaCapture6 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaCapture6>
{
    IMediaCapture6(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs>
{
    IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaCaptureFailedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaCaptureFailedEventArgs>
{
    IMediaCaptureFailedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaCaptureFocusChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaCaptureFocusChangedEventArgs>
{
    IMediaCaptureFocusChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaCaptureInitializationSettings :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaCaptureInitializationSettings>
{
    IMediaCaptureInitializationSettings(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaCaptureInitializationSettings2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaCaptureInitializationSettings2>
{
    IMediaCaptureInitializationSettings2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaCaptureInitializationSettings3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaCaptureInitializationSettings3>
{
    IMediaCaptureInitializationSettings3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaCaptureInitializationSettings4 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaCaptureInitializationSettings4>
{
    IMediaCaptureInitializationSettings4(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaCaptureInitializationSettings5 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaCaptureInitializationSettings5>
{
    IMediaCaptureInitializationSettings5(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaCaptureInitializationSettings6 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaCaptureInitializationSettings6>
{
    IMediaCaptureInitializationSettings6(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaCapturePauseResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaCapturePauseResult>
{
    IMediaCapturePauseResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaCaptureSettings :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaCaptureSettings>
{
    IMediaCaptureSettings(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaCaptureSettings2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaCaptureSettings2>
{
    IMediaCaptureSettings2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaCaptureStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaCaptureStatics>
{
    IMediaCaptureStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaCaptureStopResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaCaptureStopResult>
{
    IMediaCaptureStopResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaCaptureVideoPreview :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaCaptureVideoPreview>
{
    IMediaCaptureVideoPreview(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaCaptureVideoProfile :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaCaptureVideoProfile>
{
    IMediaCaptureVideoProfile(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaCaptureVideoProfileMediaDescription :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaCaptureVideoProfileMediaDescription>
{
    IMediaCaptureVideoProfileMediaDescription(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IOptionalReferencePhotoCapturedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IOptionalReferencePhotoCapturedEventArgs>
{
    IOptionalReferencePhotoCapturedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPhotoCapturedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhotoCapturedEventArgs>
{
    IPhotoCapturedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPhotoConfirmationCapturedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhotoConfirmationCapturedEventArgs>
{
    IPhotoConfirmationCapturedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVideoStreamConfiguration :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVideoStreamConfiguration>
{
    IVideoStreamConfiguration(std::nullptr_t = nullptr) noexcept {}
};

}
