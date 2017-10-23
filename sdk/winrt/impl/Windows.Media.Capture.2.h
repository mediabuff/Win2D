// C++/WinRT v1.0.170906.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Graphics.Imaging.1.h"
#include "winrt/impl/Windows.Media.1.h"
#include "winrt/impl/Windows.Media.Capture.Core.1.h"
#include "winrt/impl/Windows.Media.Capture.Frames.1.h"
#include "winrt/impl/Windows.Media.Core.1.h"
#include "winrt/impl/Windows.Media.Devices.1.h"
#include "winrt/impl/Windows.Media.Effects.1.h"
#include "winrt/impl/Windows.Media.MediaProperties.1.h"
#include "winrt/impl/Windows.Storage.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Media.Capture.1.h"

WINRT_EXPORT namespace winrt::Windows::Media::Capture {

struct MediaCaptureFailedEventHandler : Windows::Foundation::IUnknown
{
    MediaCaptureFailedEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> MediaCaptureFailedEventHandler(L lambda);
    template <typename F> MediaCaptureFailedEventHandler(F* function);
    template <typename O, typename M> MediaCaptureFailedEventHandler(O* object, M method);
    void operator()(Windows::Media::Capture::MediaCapture const& sender, Windows::Media::Capture::MediaCaptureFailedEventArgs const& errorEventArgs) const;
};

struct RecordLimitationExceededEventHandler : Windows::Foundation::IUnknown
{
    RecordLimitationExceededEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> RecordLimitationExceededEventHandler(L lambda);
    template <typename F> RecordLimitationExceededEventHandler(F* function);
    template <typename O, typename M> RecordLimitationExceededEventHandler(O* object, M method);
    void operator()(Windows::Media::Capture::MediaCapture const& sender) const;
};

struct WhiteBalanceGain
{
    double R;
    double G;
    double B;
};

}

namespace winrt::impl {

template <> struct is_struct<Windows::Media::Capture::WhiteBalanceGain>
{
    static constexpr bool value{ true };
};

}

WINRT_EXPORT namespace winrt::Windows::Media::Capture {

struct WINRT_EBO AdvancedCapturedPhoto :
    Windows::Media::Capture::IAdvancedCapturedPhoto,
    impl::require<AdvancedCapturedPhoto, Windows::Media::Capture::IAdvancedCapturedPhoto2>
{
    AdvancedCapturedPhoto(std::nullptr_t) noexcept {}
};

struct WINRT_EBO AdvancedPhotoCapture :
    Windows::Media::Capture::IAdvancedPhotoCapture
{
    AdvancedPhotoCapture(std::nullptr_t) noexcept {}
};

struct WINRT_EBO AppCapture :
    Windows::Media::Capture::IAppCapture
{
    AppCapture(std::nullptr_t) noexcept {}
    static Windows::Media::Capture::AppCapture GetForCurrentView();
    static Windows::Foundation::IAsyncAction SetAllowedAsync(bool allowed);
};

struct WINRT_EBO CameraCaptureUI :
    Windows::Media::Capture::ICameraCaptureUI
{
    CameraCaptureUI(std::nullptr_t) noexcept {}
    CameraCaptureUI();
};

struct WINRT_EBO CameraCaptureUIPhotoCaptureSettings :
    Windows::Media::Capture::ICameraCaptureUIPhotoCaptureSettings
{
    CameraCaptureUIPhotoCaptureSettings(std::nullptr_t) noexcept {}
};

struct WINRT_EBO CameraCaptureUIVideoCaptureSettings :
    Windows::Media::Capture::ICameraCaptureUIVideoCaptureSettings
{
    CameraCaptureUIVideoCaptureSettings(std::nullptr_t) noexcept {}
};

struct WINRT_EBO CapturedFrame :
    Windows::Media::Capture::ICapturedFrame,
    impl::require<CapturedFrame, Windows::Media::Capture::ICapturedFrameWithSoftwareBitmap>
{
    CapturedFrame(std::nullptr_t) noexcept {}
};

struct WINRT_EBO CapturedFrameControlValues :
    Windows::Media::Capture::ICapturedFrameControlValues,
    impl::require<CapturedFrameControlValues, Windows::Media::Capture::ICapturedFrameControlValues2>
{
    CapturedFrameControlValues(std::nullptr_t) noexcept {}
};

struct WINRT_EBO CapturedPhoto :
    Windows::Media::Capture::ICapturedPhoto
{
    CapturedPhoto(std::nullptr_t) noexcept {}
};

struct WINRT_EBO LowLagMediaRecording :
    Windows::Media::Capture::ILowLagMediaRecording,
    impl::require<LowLagMediaRecording, Windows::Media::Capture::ILowLagMediaRecording2, Windows::Media::Capture::ILowLagMediaRecording3>
{
    LowLagMediaRecording(std::nullptr_t) noexcept {}
};

struct WINRT_EBO LowLagPhotoCapture :
    Windows::Media::Capture::ILowLagPhotoCapture
{
    LowLagPhotoCapture(std::nullptr_t) noexcept {}
};

struct WINRT_EBO LowLagPhotoSequenceCapture :
    Windows::Media::Capture::ILowLagPhotoSequenceCapture
{
    LowLagPhotoSequenceCapture(std::nullptr_t) noexcept {}
};

struct WINRT_EBO MediaCapture :
    Windows::Media::Capture::IMediaCapture,
    impl::require<MediaCapture, Windows::Foundation::IClosable, Windows::Media::Capture::IMediaCapture2, Windows::Media::Capture::IMediaCapture3, Windows::Media::Capture::IMediaCapture4, Windows::Media::Capture::IMediaCapture5, Windows::Media::Capture::IMediaCapture6, Windows::Media::Capture::IMediaCaptureVideoPreview>
{
    MediaCapture(std::nullptr_t) noexcept {}
    MediaCapture();
    static bool IsVideoProfileSupported(param::hstring const& videoDeviceId);
    static Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfile> FindAllVideoProfiles(param::hstring const& videoDeviceId);
    static Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfile> FindConcurrentProfiles(param::hstring const& videoDeviceId);
    static Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfile> FindKnownVideoProfiles(param::hstring const& videoDeviceId, Windows::Media::Capture::KnownVideoProfile const& name);
};

struct WINRT_EBO MediaCaptureDeviceExclusiveControlStatusChangedEventArgs :
    Windows::Media::Capture::IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs
{
    MediaCaptureDeviceExclusiveControlStatusChangedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO MediaCaptureFailedEventArgs :
    Windows::Media::Capture::IMediaCaptureFailedEventArgs
{
    MediaCaptureFailedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO MediaCaptureFocusChangedEventArgs :
    Windows::Media::Capture::IMediaCaptureFocusChangedEventArgs
{
    MediaCaptureFocusChangedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO MediaCaptureInitializationSettings :
    Windows::Media::Capture::IMediaCaptureInitializationSettings,
    impl::require<MediaCaptureInitializationSettings, Windows::Media::Capture::IMediaCaptureInitializationSettings2, Windows::Media::Capture::IMediaCaptureInitializationSettings3, Windows::Media::Capture::IMediaCaptureInitializationSettings4, Windows::Media::Capture::IMediaCaptureInitializationSettings5, Windows::Media::Capture::IMediaCaptureInitializationSettings6>
{
    MediaCaptureInitializationSettings(std::nullptr_t) noexcept {}
    MediaCaptureInitializationSettings();
};

struct WINRT_EBO MediaCapturePauseResult :
    Windows::Media::Capture::IMediaCapturePauseResult,
    impl::require<MediaCapturePauseResult, Windows::Foundation::IClosable>
{
    MediaCapturePauseResult(std::nullptr_t) noexcept {}
};

struct WINRT_EBO MediaCaptureSettings :
    Windows::Media::Capture::IMediaCaptureSettings,
    impl::require<MediaCaptureSettings, Windows::Media::Capture::IMediaCaptureSettings2>
{
    MediaCaptureSettings(std::nullptr_t) noexcept {}
};

struct WINRT_EBO MediaCaptureStopResult :
    Windows::Media::Capture::IMediaCaptureStopResult,
    impl::require<MediaCaptureStopResult, Windows::Foundation::IClosable>
{
    MediaCaptureStopResult(std::nullptr_t) noexcept {}
};

struct WINRT_EBO MediaCaptureVideoProfile :
    Windows::Media::Capture::IMediaCaptureVideoProfile
{
    MediaCaptureVideoProfile(std::nullptr_t) noexcept {}
};

struct WINRT_EBO MediaCaptureVideoProfileMediaDescription :
    Windows::Media::Capture::IMediaCaptureVideoProfileMediaDescription
{
    MediaCaptureVideoProfileMediaDescription(std::nullptr_t) noexcept {}
};

struct WINRT_EBO OptionalReferencePhotoCapturedEventArgs :
    Windows::Media::Capture::IOptionalReferencePhotoCapturedEventArgs
{
    OptionalReferencePhotoCapturedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO PhotoCapturedEventArgs :
    Windows::Media::Capture::IPhotoCapturedEventArgs
{
    PhotoCapturedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO PhotoConfirmationCapturedEventArgs :
    Windows::Media::Capture::IPhotoConfirmationCapturedEventArgs
{
    PhotoConfirmationCapturedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO VideoStreamConfiguration :
    Windows::Media::Capture::IVideoStreamConfiguration
{
    VideoStreamConfiguration(std::nullptr_t) noexcept {}
};

}
