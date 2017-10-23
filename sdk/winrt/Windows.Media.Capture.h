// C++/WinRT v1.0.170906.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Graphics.Imaging.2.h"
#include "winrt/impl/Windows.Media.2.h"
#include "winrt/impl/Windows.Media.Capture.Core.2.h"
#include "winrt/impl/Windows.Media.Capture.Frames.2.h"
#include "winrt/impl/Windows.Media.Core.2.h"
#include "winrt/impl/Windows.Media.Devices.2.h"
#include "winrt/impl/Windows.Media.Effects.2.h"
#include "winrt/impl/Windows.Media.MediaProperties.2.h"
#include "winrt/impl/Windows.Storage.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Media.Capture.2.h"
#include "winrt/Windows.Media.h"

namespace winrt::impl {

template <typename D> Windows::Media::Capture::CapturedFrame consume_Windows_Media_Capture_IAdvancedCapturedPhoto<D>::Frame() const
{
    Windows::Media::Capture::CapturedFrame value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAdvancedCapturedPhoto)->get_Frame(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Devices::AdvancedPhotoMode consume_Windows_Media_Capture_IAdvancedCapturedPhoto<D>::Mode() const
{
    Windows::Media::Devices::AdvancedPhotoMode value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAdvancedCapturedPhoto)->get_Mode(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_Media_Capture_IAdvancedCapturedPhoto<D>::Context() const
{
    Windows::Foundation::IInspectable value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAdvancedCapturedPhoto)->get_Context(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::Rect> consume_Windows_Media_Capture_IAdvancedCapturedPhoto2<D>::FrameBoundsRelativeToReferencePhoto() const
{
    Windows::Foundation::IReference<Windows::Foundation::Rect> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAdvancedCapturedPhoto2)->get_FrameBoundsRelativeToReferencePhoto(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Capture::AdvancedCapturedPhoto> consume_Windows_Media_Capture_IAdvancedPhotoCapture<D>::CaptureAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::AdvancedCapturedPhoto> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAdvancedPhotoCapture)->CaptureAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Capture::AdvancedCapturedPhoto> consume_Windows_Media_Capture_IAdvancedPhotoCapture<D>::CaptureAsync(Windows::Foundation::IInspectable const& context) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::AdvancedCapturedPhoto> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAdvancedPhotoCapture)->CaptureWithContextAsync(get_abi(context), put_abi(operation)));
    return operation;
}

template <typename D> event_token consume_Windows_Media_Capture_IAdvancedPhotoCapture<D>::OptionalReferencePhotoCaptured(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AdvancedPhotoCapture, Windows::Media::Capture::OptionalReferencePhotoCapturedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAdvancedPhotoCapture)->add_OptionalReferencePhotoCaptured(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Capture::IAdvancedPhotoCapture> consume_Windows_Media_Capture_IAdvancedPhotoCapture<D>::OptionalReferencePhotoCaptured(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AdvancedPhotoCapture, Windows::Media::Capture::OptionalReferencePhotoCapturedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Capture::IAdvancedPhotoCapture>(this, &abi_t<Windows::Media::Capture::IAdvancedPhotoCapture>::remove_OptionalReferencePhotoCaptured, OptionalReferencePhotoCaptured(handler));
}

template <typename D> void consume_Windows_Media_Capture_IAdvancedPhotoCapture<D>::OptionalReferencePhotoCaptured(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAdvancedPhotoCapture)->remove_OptionalReferencePhotoCaptured(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Capture_IAdvancedPhotoCapture<D>::AllPhotosCaptured(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AdvancedPhotoCapture, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAdvancedPhotoCapture)->add_AllPhotosCaptured(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Capture::IAdvancedPhotoCapture> consume_Windows_Media_Capture_IAdvancedPhotoCapture<D>::AllPhotosCaptured(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AdvancedPhotoCapture, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Capture::IAdvancedPhotoCapture>(this, &abi_t<Windows::Media::Capture::IAdvancedPhotoCapture>::remove_AllPhotosCaptured, AllPhotosCaptured(handler));
}

template <typename D> void consume_Windows_Media_Capture_IAdvancedPhotoCapture<D>::AllPhotosCaptured(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAdvancedPhotoCapture)->remove_AllPhotosCaptured(get_abi(token)));
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Capture_IAdvancedPhotoCapture<D>::FinishAsync() const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAdvancedPhotoCapture)->FinishAsync(put_abi(operation)));
    return operation;
}

template <typename D> bool consume_Windows_Media_Capture_IAppCapture<D>::IsCapturingAudio() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCapture)->get_IsCapturingAudio(&value));
    return value;
}

template <typename D> bool consume_Windows_Media_Capture_IAppCapture<D>::IsCapturingVideo() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCapture)->get_IsCapturingVideo(&value));
    return value;
}

template <typename D> event_token consume_Windows_Media_Capture_IAppCapture<D>::CapturingChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCapture, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCapture)->add_CapturingChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Capture::IAppCapture> consume_Windows_Media_Capture_IAppCapture<D>::CapturingChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCapture, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Capture::IAppCapture>(this, &abi_t<Windows::Media::Capture::IAppCapture>::remove_CapturingChanged, CapturingChanged(handler));
}

template <typename D> void consume_Windows_Media_Capture_IAppCapture<D>::CapturingChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCapture)->remove_CapturingChanged(get_abi(token)));
}

template <typename D> Windows::Media::Capture::AppCapture consume_Windows_Media_Capture_IAppCaptureStatics<D>::GetForCurrentView() const
{
    Windows::Media::Capture::AppCapture value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureStatics)->GetForCurrentView(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Capture_IAppCaptureStatics2<D>::SetAllowedAsync(bool allowed) const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureStatics2)->SetAllowedAsync(allowed, put_abi(operation)));
    return operation;
}

template <typename D> Windows::Media::Capture::CameraCaptureUIPhotoCaptureSettings consume_Windows_Media_Capture_ICameraCaptureUI<D>::PhotoSettings() const
{
    Windows::Media::Capture::CameraCaptureUIPhotoCaptureSettings value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ICameraCaptureUI)->get_PhotoSettings(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Capture::CameraCaptureUIVideoCaptureSettings consume_Windows_Media_Capture_ICameraCaptureUI<D>::VideoSettings() const
{
    Windows::Media::Capture::CameraCaptureUIVideoCaptureSettings value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ICameraCaptureUI)->get_VideoSettings(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> consume_Windows_Media_Capture_ICameraCaptureUI<D>::CaptureFileAsync(Windows::Media::Capture::CameraCaptureUIMode const& mode) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ICameraCaptureUI)->CaptureFileAsync(get_abi(mode), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Media::Capture::CameraCaptureUIPhotoFormat consume_Windows_Media_Capture_ICameraCaptureUIPhotoCaptureSettings<D>::Format() const
{
    Windows::Media::Capture::CameraCaptureUIPhotoFormat value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ICameraCaptureUIPhotoCaptureSettings)->get_Format(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_ICameraCaptureUIPhotoCaptureSettings<D>::Format(Windows::Media::Capture::CameraCaptureUIPhotoFormat const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ICameraCaptureUIPhotoCaptureSettings)->put_Format(get_abi(value)));
}

template <typename D> Windows::Media::Capture::CameraCaptureUIMaxPhotoResolution consume_Windows_Media_Capture_ICameraCaptureUIPhotoCaptureSettings<D>::MaxResolution() const
{
    Windows::Media::Capture::CameraCaptureUIMaxPhotoResolution value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ICameraCaptureUIPhotoCaptureSettings)->get_MaxResolution(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_ICameraCaptureUIPhotoCaptureSettings<D>::MaxResolution(Windows::Media::Capture::CameraCaptureUIMaxPhotoResolution const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ICameraCaptureUIPhotoCaptureSettings)->put_MaxResolution(get_abi(value)));
}

template <typename D> Windows::Foundation::Size consume_Windows_Media_Capture_ICameraCaptureUIPhotoCaptureSettings<D>::CroppedSizeInPixels() const
{
    Windows::Foundation::Size value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ICameraCaptureUIPhotoCaptureSettings)->get_CroppedSizeInPixels(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_ICameraCaptureUIPhotoCaptureSettings<D>::CroppedSizeInPixels(Windows::Foundation::Size const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ICameraCaptureUIPhotoCaptureSettings)->put_CroppedSizeInPixels(get_abi(value)));
}

template <typename D> Windows::Foundation::Size consume_Windows_Media_Capture_ICameraCaptureUIPhotoCaptureSettings<D>::CroppedAspectRatio() const
{
    Windows::Foundation::Size value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ICameraCaptureUIPhotoCaptureSettings)->get_CroppedAspectRatio(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_ICameraCaptureUIPhotoCaptureSettings<D>::CroppedAspectRatio(Windows::Foundation::Size const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ICameraCaptureUIPhotoCaptureSettings)->put_CroppedAspectRatio(get_abi(value)));
}

template <typename D> bool consume_Windows_Media_Capture_ICameraCaptureUIPhotoCaptureSettings<D>::AllowCropping() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ICameraCaptureUIPhotoCaptureSettings)->get_AllowCropping(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_ICameraCaptureUIPhotoCaptureSettings<D>::AllowCropping(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ICameraCaptureUIPhotoCaptureSettings)->put_AllowCropping(value));
}

template <typename D> Windows::Media::Capture::CameraCaptureUIVideoFormat consume_Windows_Media_Capture_ICameraCaptureUIVideoCaptureSettings<D>::Format() const
{
    Windows::Media::Capture::CameraCaptureUIVideoFormat value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ICameraCaptureUIVideoCaptureSettings)->get_Format(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_ICameraCaptureUIVideoCaptureSettings<D>::Format(Windows::Media::Capture::CameraCaptureUIVideoFormat const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ICameraCaptureUIVideoCaptureSettings)->put_Format(get_abi(value)));
}

template <typename D> Windows::Media::Capture::CameraCaptureUIMaxVideoResolution consume_Windows_Media_Capture_ICameraCaptureUIVideoCaptureSettings<D>::MaxResolution() const
{
    Windows::Media::Capture::CameraCaptureUIMaxVideoResolution value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ICameraCaptureUIVideoCaptureSettings)->get_MaxResolution(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_ICameraCaptureUIVideoCaptureSettings<D>::MaxResolution(Windows::Media::Capture::CameraCaptureUIMaxVideoResolution const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ICameraCaptureUIVideoCaptureSettings)->put_MaxResolution(get_abi(value)));
}

template <typename D> float consume_Windows_Media_Capture_ICameraCaptureUIVideoCaptureSettings<D>::MaxDurationInSeconds() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ICameraCaptureUIVideoCaptureSettings)->get_MaxDurationInSeconds(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_ICameraCaptureUIVideoCaptureSettings<D>::MaxDurationInSeconds(float value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ICameraCaptureUIVideoCaptureSettings)->put_MaxDurationInSeconds(value));
}

template <typename D> bool consume_Windows_Media_Capture_ICameraCaptureUIVideoCaptureSettings<D>::AllowTrimming() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ICameraCaptureUIVideoCaptureSettings)->get_AllowTrimming(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_ICameraCaptureUIVideoCaptureSettings<D>::AllowTrimming(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ICameraCaptureUIVideoCaptureSettings)->put_AllowTrimming(value));
}

template <typename D> uint32_t consume_Windows_Media_Capture_ICapturedFrame<D>::Width() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ICapturedFrame)->get_Width(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Media_Capture_ICapturedFrame<D>::Height() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ICapturedFrame)->get_Height(&value));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::TimeSpan> consume_Windows_Media_Capture_ICapturedFrameControlValues<D>::Exposure() const
{
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ICapturedFrameControlValues)->get_Exposure(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<float> consume_Windows_Media_Capture_ICapturedFrameControlValues<D>::ExposureCompensation() const
{
    Windows::Foundation::IReference<float> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ICapturedFrameControlValues)->get_ExposureCompensation(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint32_t> consume_Windows_Media_Capture_ICapturedFrameControlValues<D>::IsoSpeed() const
{
    Windows::Foundation::IReference<uint32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ICapturedFrameControlValues)->get_IsoSpeed(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint32_t> consume_Windows_Media_Capture_ICapturedFrameControlValues<D>::Focus() const
{
    Windows::Foundation::IReference<uint32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ICapturedFrameControlValues)->get_Focus(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Media::Devices::CaptureSceneMode> consume_Windows_Media_Capture_ICapturedFrameControlValues<D>::SceneMode() const
{
    Windows::Foundation::IReference<Windows::Media::Devices::CaptureSceneMode> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ICapturedFrameControlValues)->get_SceneMode(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<bool> consume_Windows_Media_Capture_ICapturedFrameControlValues<D>::Flashed() const
{
    Windows::Foundation::IReference<bool> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ICapturedFrameControlValues)->get_Flashed(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<float> consume_Windows_Media_Capture_ICapturedFrameControlValues<D>::FlashPowerPercent() const
{
    Windows::Foundation::IReference<float> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ICapturedFrameControlValues)->get_FlashPowerPercent(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint32_t> consume_Windows_Media_Capture_ICapturedFrameControlValues<D>::WhiteBalance() const
{
    Windows::Foundation::IReference<uint32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ICapturedFrameControlValues)->get_WhiteBalance(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<float> consume_Windows_Media_Capture_ICapturedFrameControlValues<D>::ZoomFactor() const
{
    Windows::Foundation::IReference<float> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ICapturedFrameControlValues)->get_ZoomFactor(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Media::Devices::MediaCaptureFocusState> consume_Windows_Media_Capture_ICapturedFrameControlValues2<D>::FocusState() const
{
    Windows::Foundation::IReference<Windows::Media::Devices::MediaCaptureFocusState> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ICapturedFrameControlValues2)->get_FocusState(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<double> consume_Windows_Media_Capture_ICapturedFrameControlValues2<D>::IsoDigitalGain() const
{
    Windows::Foundation::IReference<double> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ICapturedFrameControlValues2)->get_IsoDigitalGain(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<double> consume_Windows_Media_Capture_ICapturedFrameControlValues2<D>::IsoAnalogGain() const
{
    Windows::Foundation::IReference<double> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ICapturedFrameControlValues2)->get_IsoAnalogGain(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::MediaProperties::MediaRatio consume_Windows_Media_Capture_ICapturedFrameControlValues2<D>::SensorFrameRate() const
{
    Windows::Media::MediaProperties::MediaRatio value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ICapturedFrameControlValues2)->get_SensorFrameRate(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Media::Capture::WhiteBalanceGain> consume_Windows_Media_Capture_ICapturedFrameControlValues2<D>::WhiteBalanceGain() const
{
    Windows::Foundation::IReference<Windows::Media::Capture::WhiteBalanceGain> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ICapturedFrameControlValues2)->get_WhiteBalanceGain(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Imaging::SoftwareBitmap consume_Windows_Media_Capture_ICapturedFrameWithSoftwareBitmap<D>::SoftwareBitmap() const
{
    Windows::Graphics::Imaging::SoftwareBitmap value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ICapturedFrameWithSoftwareBitmap)->get_SoftwareBitmap(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Capture::CapturedFrame consume_Windows_Media_Capture_ICapturedPhoto<D>::Frame() const
{
    Windows::Media::Capture::CapturedFrame value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ICapturedPhoto)->get_Frame(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Capture::CapturedFrame consume_Windows_Media_Capture_ICapturedPhoto<D>::Thumbnail() const
{
    Windows::Media::Capture::CapturedFrame value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ICapturedPhoto)->get_Thumbnail(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Capture_ILowLagMediaRecording<D>::StartAsync() const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ILowLagMediaRecording)->StartAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Capture_ILowLagMediaRecording<D>::StopAsync() const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ILowLagMediaRecording)->StopAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Capture_ILowLagMediaRecording<D>::FinishAsync() const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ILowLagMediaRecording)->FinishAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Capture_ILowLagMediaRecording2<D>::PauseAsync(Windows::Media::Devices::MediaCapturePauseBehavior const& behavior) const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ILowLagMediaRecording2)->PauseAsync(get_abi(behavior), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Capture_ILowLagMediaRecording2<D>::ResumeAsync() const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ILowLagMediaRecording2)->ResumeAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Capture::MediaCapturePauseResult> consume_Windows_Media_Capture_ILowLagMediaRecording3<D>::PauseWithResultAsync(Windows::Media::Devices::MediaCapturePauseBehavior const& behavior) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::MediaCapturePauseResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ILowLagMediaRecording3)->PauseWithResultAsync(get_abi(behavior), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Capture::MediaCaptureStopResult> consume_Windows_Media_Capture_ILowLagMediaRecording3<D>::StopWithResultAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::MediaCaptureStopResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ILowLagMediaRecording3)->StopWithResultAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Capture::CapturedPhoto> consume_Windows_Media_Capture_ILowLagPhotoCapture<D>::CaptureAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::CapturedPhoto> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ILowLagPhotoCapture)->CaptureAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Capture_ILowLagPhotoCapture<D>::FinishAsync() const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ILowLagPhotoCapture)->FinishAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Capture_ILowLagPhotoSequenceCapture<D>::StartAsync() const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ILowLagPhotoSequenceCapture)->StartAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Capture_ILowLagPhotoSequenceCapture<D>::StopAsync() const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ILowLagPhotoSequenceCapture)->StopAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Capture_ILowLagPhotoSequenceCapture<D>::FinishAsync() const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ILowLagPhotoSequenceCapture)->FinishAsync(put_abi(operation)));
    return operation;
}

template <typename D> event_token consume_Windows_Media_Capture_ILowLagPhotoSequenceCapture<D>::PhotoCaptured(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::LowLagPhotoSequenceCapture, Windows::Media::Capture::PhotoCapturedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ILowLagPhotoSequenceCapture)->add_PhotoCaptured(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Capture::ILowLagPhotoSequenceCapture> consume_Windows_Media_Capture_ILowLagPhotoSequenceCapture<D>::PhotoCaptured(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::LowLagPhotoSequenceCapture, Windows::Media::Capture::PhotoCapturedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Capture::ILowLagPhotoSequenceCapture>(this, &abi_t<Windows::Media::Capture::ILowLagPhotoSequenceCapture>::remove_PhotoCaptured, PhotoCaptured(handler));
}

template <typename D> void consume_Windows_Media_Capture_ILowLagPhotoSequenceCapture<D>::PhotoCaptured(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ILowLagPhotoSequenceCapture)->remove_PhotoCaptured(get_abi(token)));
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Capture_IMediaCapture<D>::InitializeAsync() const
{
    Windows::Foundation::IAsyncAction asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture)->InitializeAsync(put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Capture_IMediaCapture<D>::InitializeAsync(Windows::Media::Capture::MediaCaptureInitializationSettings const& mediaCaptureInitializationSettings) const
{
    Windows::Foundation::IAsyncAction asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture)->InitializeWithSettingsAsync(get_abi(mediaCaptureInitializationSettings), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Capture_IMediaCapture<D>::StartRecordToStorageFileAsync(Windows::Media::MediaProperties::MediaEncodingProfile const& encodingProfile, Windows::Storage::IStorageFile const& file) const
{
    Windows::Foundation::IAsyncAction asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture)->StartRecordToStorageFileAsync(get_abi(encodingProfile), get_abi(file), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Capture_IMediaCapture<D>::StartRecordToStreamAsync(Windows::Media::MediaProperties::MediaEncodingProfile const& encodingProfile, Windows::Storage::Streams::IRandomAccessStream const& stream) const
{
    Windows::Foundation::IAsyncAction asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture)->StartRecordToStreamAsync(get_abi(encodingProfile), get_abi(stream), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Capture_IMediaCapture<D>::StartRecordToCustomSinkAsync(Windows::Media::MediaProperties::MediaEncodingProfile const& encodingProfile, Windows::Media::IMediaExtension const& customMediaSink) const
{
    Windows::Foundation::IAsyncAction asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture)->StartRecordToCustomSinkAsync(get_abi(encodingProfile), get_abi(customMediaSink), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Capture_IMediaCapture<D>::StartRecordToCustomSinkAsync(Windows::Media::MediaProperties::MediaEncodingProfile const& encodingProfile, param::hstring const& customSinkActivationId, Windows::Foundation::Collections::IPropertySet const& customSinkSettings) const
{
    Windows::Foundation::IAsyncAction asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture)->StartRecordToCustomSinkIdAsync(get_abi(encodingProfile), get_abi(customSinkActivationId), get_abi(customSinkSettings), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Capture_IMediaCapture<D>::StopRecordAsync() const
{
    Windows::Foundation::IAsyncAction asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture)->StopRecordAsync(put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Capture_IMediaCapture<D>::CapturePhotoToStorageFileAsync(Windows::Media::MediaProperties::ImageEncodingProperties const& type, Windows::Storage::IStorageFile const& file) const
{
    Windows::Foundation::IAsyncAction asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture)->CapturePhotoToStorageFileAsync(get_abi(type), get_abi(file), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Capture_IMediaCapture<D>::CapturePhotoToStreamAsync(Windows::Media::MediaProperties::ImageEncodingProperties const& type, Windows::Storage::Streams::IRandomAccessStream const& stream) const
{
    Windows::Foundation::IAsyncAction asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture)->CapturePhotoToStreamAsync(get_abi(type), get_abi(stream), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Capture_IMediaCapture<D>::AddEffectAsync(Windows::Media::Capture::MediaStreamType const& mediaStreamType, param::hstring const& effectActivationID, Windows::Foundation::Collections::IPropertySet const& effectSettings) const
{
    Windows::Foundation::IAsyncAction asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture)->AddEffectAsync(get_abi(mediaStreamType), get_abi(effectActivationID), get_abi(effectSettings), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Capture_IMediaCapture<D>::ClearEffectsAsync(Windows::Media::Capture::MediaStreamType const& mediaStreamType) const
{
    Windows::Foundation::IAsyncAction asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture)->ClearEffectsAsync(get_abi(mediaStreamType), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> void consume_Windows_Media_Capture_IMediaCapture<D>::SetEncoderProperty(Windows::Media::Capture::MediaStreamType const& mediaStreamType, GUID const& propertyId, Windows::Foundation::IInspectable const& propertyValue) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture)->SetEncoderProperty(get_abi(mediaStreamType), get_abi(propertyId), get_abi(propertyValue)));
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_Media_Capture_IMediaCapture<D>::GetEncoderProperty(Windows::Media::Capture::MediaStreamType const& mediaStreamType, GUID const& propertyId) const
{
    Windows::Foundation::IInspectable propertyValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture)->GetEncoderProperty(get_abi(mediaStreamType), get_abi(propertyId), put_abi(propertyValue)));
    return propertyValue;
}

template <typename D> event_token consume_Windows_Media_Capture_IMediaCapture<D>::Failed(Windows::Media::Capture::MediaCaptureFailedEventHandler const& errorEventHandler) const
{
    event_token eventCookie{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture)->add_Failed(get_abi(errorEventHandler), put_abi(eventCookie)));
    return eventCookie;
}

template <typename D> event_revoker<Windows::Media::Capture::IMediaCapture> consume_Windows_Media_Capture_IMediaCapture<D>::Failed(auto_revoke_t, Windows::Media::Capture::MediaCaptureFailedEventHandler const& errorEventHandler) const
{
    return impl::make_event_revoker<D, Windows::Media::Capture::IMediaCapture>(this, &abi_t<Windows::Media::Capture::IMediaCapture>::remove_Failed, Failed(errorEventHandler));
}

template <typename D> void consume_Windows_Media_Capture_IMediaCapture<D>::Failed(event_token const& eventCookie) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture)->remove_Failed(get_abi(eventCookie)));
}

template <typename D> event_token consume_Windows_Media_Capture_IMediaCapture<D>::RecordLimitationExceeded(Windows::Media::Capture::RecordLimitationExceededEventHandler const& recordLimitationExceededEventHandler) const
{
    event_token eventCookie{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture)->add_RecordLimitationExceeded(get_abi(recordLimitationExceededEventHandler), put_abi(eventCookie)));
    return eventCookie;
}

template <typename D> event_revoker<Windows::Media::Capture::IMediaCapture> consume_Windows_Media_Capture_IMediaCapture<D>::RecordLimitationExceeded(auto_revoke_t, Windows::Media::Capture::RecordLimitationExceededEventHandler const& recordLimitationExceededEventHandler) const
{
    return impl::make_event_revoker<D, Windows::Media::Capture::IMediaCapture>(this, &abi_t<Windows::Media::Capture::IMediaCapture>::remove_RecordLimitationExceeded, RecordLimitationExceeded(recordLimitationExceededEventHandler));
}

template <typename D> void consume_Windows_Media_Capture_IMediaCapture<D>::RecordLimitationExceeded(event_token const& eventCookie) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture)->remove_RecordLimitationExceeded(get_abi(eventCookie)));
}

template <typename D> Windows::Media::Capture::MediaCaptureSettings consume_Windows_Media_Capture_IMediaCapture<D>::MediaCaptureSettings() const
{
    Windows::Media::Capture::MediaCaptureSettings value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture)->get_MediaCaptureSettings(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Devices::AudioDeviceController consume_Windows_Media_Capture_IMediaCapture<D>::AudioDeviceController() const
{
    Windows::Media::Devices::AudioDeviceController value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture)->get_AudioDeviceController(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Devices::VideoDeviceController consume_Windows_Media_Capture_IMediaCapture<D>::VideoDeviceController() const
{
    Windows::Media::Devices::VideoDeviceController value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture)->get_VideoDeviceController(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IMediaCapture<D>::SetPreviewMirroring(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture)->SetPreviewMirroring(value));
}

template <typename D> bool consume_Windows_Media_Capture_IMediaCapture<D>::GetPreviewMirroring() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture)->GetPreviewMirroring(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IMediaCapture<D>::SetPreviewRotation(Windows::Media::Capture::VideoRotation const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture)->SetPreviewRotation(get_abi(value)));
}

template <typename D> Windows::Media::Capture::VideoRotation consume_Windows_Media_Capture_IMediaCapture<D>::GetPreviewRotation() const
{
    Windows::Media::Capture::VideoRotation value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture)->GetPreviewRotation(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IMediaCapture<D>::SetRecordRotation(Windows::Media::Capture::VideoRotation const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture)->SetRecordRotation(get_abi(value)));
}

template <typename D> Windows::Media::Capture::VideoRotation consume_Windows_Media_Capture_IMediaCapture<D>::GetRecordRotation() const
{
    Windows::Media::Capture::VideoRotation value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture)->GetRecordRotation(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagMediaRecording> consume_Windows_Media_Capture_IMediaCapture2<D>::PrepareLowLagRecordToStorageFileAsync(Windows::Media::MediaProperties::MediaEncodingProfile const& encodingProfile, Windows::Storage::IStorageFile const& file) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagMediaRecording> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture2)->PrepareLowLagRecordToStorageFileAsync(get_abi(encodingProfile), get_abi(file), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagMediaRecording> consume_Windows_Media_Capture_IMediaCapture2<D>::PrepareLowLagRecordToStreamAsync(Windows::Media::MediaProperties::MediaEncodingProfile const& encodingProfile, Windows::Storage::Streams::IRandomAccessStream const& stream) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagMediaRecording> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture2)->PrepareLowLagRecordToStreamAsync(get_abi(encodingProfile), get_abi(stream), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagMediaRecording> consume_Windows_Media_Capture_IMediaCapture2<D>::PrepareLowLagRecordToCustomSinkAsync(Windows::Media::MediaProperties::MediaEncodingProfile const& encodingProfile, Windows::Media::IMediaExtension const& customMediaSink) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagMediaRecording> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture2)->PrepareLowLagRecordToCustomSinkAsync(get_abi(encodingProfile), get_abi(customMediaSink), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagMediaRecording> consume_Windows_Media_Capture_IMediaCapture2<D>::PrepareLowLagRecordToCustomSinkAsync(Windows::Media::MediaProperties::MediaEncodingProfile const& encodingProfile, param::hstring const& customSinkActivationId, Windows::Foundation::Collections::IPropertySet const& customSinkSettings) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagMediaRecording> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture2)->PrepareLowLagRecordToCustomSinkIdAsync(get_abi(encodingProfile), get_abi(customSinkActivationId), get_abi(customSinkSettings), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagPhotoCapture> consume_Windows_Media_Capture_IMediaCapture2<D>::PrepareLowLagPhotoCaptureAsync(Windows::Media::MediaProperties::ImageEncodingProperties const& type) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagPhotoCapture> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture2)->PrepareLowLagPhotoCaptureAsync(get_abi(type), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagPhotoSequenceCapture> consume_Windows_Media_Capture_IMediaCapture2<D>::PrepareLowLagPhotoSequenceCaptureAsync(Windows::Media::MediaProperties::ImageEncodingProperties const& type) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagPhotoSequenceCapture> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture2)->PrepareLowLagPhotoSequenceCaptureAsync(get_abi(type), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Capture_IMediaCapture2<D>::SetEncodingPropertiesAsync(Windows::Media::Capture::MediaStreamType const& mediaStreamType, Windows::Media::MediaProperties::IMediaEncodingProperties const& mediaEncodingProperties, Windows::Media::MediaProperties::MediaPropertySet const& encoderProperties) const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture2)->SetEncodingPropertiesAsync(get_abi(mediaStreamType), get_abi(mediaEncodingProperties), get_abi(encoderProperties), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Core::VariablePhotoSequenceCapture> consume_Windows_Media_Capture_IMediaCapture3<D>::PrepareVariablePhotoSequenceCaptureAsync(Windows::Media::MediaProperties::ImageEncodingProperties const& type) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Core::VariablePhotoSequenceCapture> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture3)->PrepareVariablePhotoSequenceCaptureAsync(get_abi(type), put_abi(operation)));
    return operation;
}

template <typename D> event_token consume_Windows_Media_Capture_IMediaCapture3<D>::FocusChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Media::Capture::MediaCaptureFocusChangedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture3)->add_FocusChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Capture::IMediaCapture3> consume_Windows_Media_Capture_IMediaCapture3<D>::FocusChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Media::Capture::MediaCaptureFocusChangedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Capture::IMediaCapture3>(this, &abi_t<Windows::Media::Capture::IMediaCapture3>::remove_FocusChanged, FocusChanged(handler));
}

template <typename D> void consume_Windows_Media_Capture_IMediaCapture3<D>::FocusChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture3)->remove_FocusChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Capture_IMediaCapture3<D>::PhotoConfirmationCaptured(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Media::Capture::PhotoConfirmationCapturedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture3)->add_PhotoConfirmationCaptured(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Capture::IMediaCapture3> consume_Windows_Media_Capture_IMediaCapture3<D>::PhotoConfirmationCaptured(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Media::Capture::PhotoConfirmationCapturedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Capture::IMediaCapture3>(this, &abi_t<Windows::Media::Capture::IMediaCapture3>::remove_PhotoConfirmationCaptured, PhotoConfirmationCaptured(handler));
}

template <typename D> void consume_Windows_Media_Capture_IMediaCapture3<D>::PhotoConfirmationCaptured(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture3)->remove_PhotoConfirmationCaptured(get_abi(token)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::IMediaExtension> consume_Windows_Media_Capture_IMediaCapture4<D>::AddAudioEffectAsync(Windows::Media::Effects::IAudioEffectDefinition const& definition) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::IMediaExtension> op{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture4)->AddAudioEffectAsync(get_abi(definition), put_abi(op)));
    return op;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::IMediaExtension> consume_Windows_Media_Capture_IMediaCapture4<D>::AddVideoEffectAsync(Windows::Media::Effects::IVideoEffectDefinition const& definition, Windows::Media::Capture::MediaStreamType const& mediaStreamType) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::IMediaExtension> op{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture4)->AddVideoEffectAsync(get_abi(definition), get_abi(mediaStreamType), put_abi(op)));
    return op;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Capture_IMediaCapture4<D>::PauseRecordAsync(Windows::Media::Devices::MediaCapturePauseBehavior const& behavior) const
{
    Windows::Foundation::IAsyncAction asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture4)->PauseRecordAsync(get_abi(behavior), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Capture_IMediaCapture4<D>::ResumeRecordAsync() const
{
    Windows::Foundation::IAsyncAction asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture4)->ResumeRecordAsync(put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> event_token consume_Windows_Media_Capture_IMediaCapture4<D>::CameraStreamStateChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture4)->add_CameraStreamStateChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Capture::IMediaCapture4> consume_Windows_Media_Capture_IMediaCapture4<D>::CameraStreamStateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Capture::IMediaCapture4>(this, &abi_t<Windows::Media::Capture::IMediaCapture4>::remove_CameraStreamStateChanged, CameraStreamStateChanged(handler));
}

template <typename D> void consume_Windows_Media_Capture_IMediaCapture4<D>::CameraStreamStateChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture4)->remove_CameraStreamStateChanged(get_abi(token)));
}

template <typename D> Windows::Media::Devices::CameraStreamState consume_Windows_Media_Capture_IMediaCapture4<D>::CameraStreamState() const
{
    Windows::Media::Devices::CameraStreamState streamState{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture4)->get_CameraStreamState(put_abi(streamState)));
    return streamState;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::VideoFrame> consume_Windows_Media_Capture_IMediaCapture4<D>::GetPreviewFrameAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::VideoFrame> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture4)->GetPreviewFrameAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::VideoFrame> consume_Windows_Media_Capture_IMediaCapture4<D>::GetPreviewFrameAsync(Windows::Media::VideoFrame const& destination) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::VideoFrame> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture4)->GetPreviewFrameCopyAsync(get_abi(destination), put_abi(operation)));
    return operation;
}

template <typename D> event_token consume_Windows_Media_Capture_IMediaCapture4<D>::ThermalStatusChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture4)->add_ThermalStatusChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Capture::IMediaCapture4> consume_Windows_Media_Capture_IMediaCapture4<D>::ThermalStatusChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Capture::IMediaCapture4>(this, &abi_t<Windows::Media::Capture::IMediaCapture4>::remove_ThermalStatusChanged, ThermalStatusChanged(handler));
}

template <typename D> void consume_Windows_Media_Capture_IMediaCapture4<D>::ThermalStatusChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture4)->remove_ThermalStatusChanged(get_abi(token)));
}

template <typename D> Windows::Media::Capture::MediaCaptureThermalStatus consume_Windows_Media_Capture_IMediaCapture4<D>::ThermalStatus() const
{
    Windows::Media::Capture::MediaCaptureThermalStatus value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture4)->get_ThermalStatus(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Capture::AdvancedPhotoCapture> consume_Windows_Media_Capture_IMediaCapture4<D>::PrepareAdvancedPhotoCaptureAsync(Windows::Media::MediaProperties::ImageEncodingProperties const& encodingProperties) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::AdvancedPhotoCapture> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture4)->PrepareAdvancedPhotoCaptureAsync(get_abi(encodingProperties), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Capture_IMediaCapture5<D>::RemoveEffectAsync(Windows::Media::IMediaExtension const& effect) const
{
    Windows::Foundation::IAsyncAction asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture5)->RemoveEffectAsync(get_abi(effect), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Capture::MediaCapturePauseResult> consume_Windows_Media_Capture_IMediaCapture5<D>::PauseRecordWithResultAsync(Windows::Media::Devices::MediaCapturePauseBehavior const& behavior) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::MediaCapturePauseResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture5)->PauseRecordWithResultAsync(get_abi(behavior), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Capture::MediaCaptureStopResult> consume_Windows_Media_Capture_IMediaCapture5<D>::StopRecordWithResultAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::MediaCaptureStopResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture5)->StopRecordWithResultAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, Windows::Media::Capture::Frames::MediaFrameSource> consume_Windows_Media_Capture_IMediaCapture5<D>::FrameSources() const
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::Media::Capture::Frames::MediaFrameSource> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture5)->get_FrameSources(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MediaFrameReader> consume_Windows_Media_Capture_IMediaCapture5<D>::CreateFrameReaderAsync(Windows::Media::Capture::Frames::MediaFrameSource const& inputSource) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MediaFrameReader> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture5)->CreateFrameReaderAsync(get_abi(inputSource), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MediaFrameReader> consume_Windows_Media_Capture_IMediaCapture5<D>::CreateFrameReaderAsync(Windows::Media::Capture::Frames::MediaFrameSource const& inputSource, param::hstring const& outputSubtype) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MediaFrameReader> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture5)->CreateFrameReaderWithSubtypeAsync(get_abi(inputSource), get_abi(outputSubtype), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MediaFrameReader> consume_Windows_Media_Capture_IMediaCapture5<D>::CreateFrameReaderAsync(Windows::Media::Capture::Frames::MediaFrameSource const& inputSource, param::hstring const& outputSubtype, Windows::Graphics::Imaging::BitmapSize const& outputSize) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MediaFrameReader> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture5)->CreateFrameReaderWithSubtypeAndSizeAsync(get_abi(inputSource), get_abi(outputSubtype), get_abi(outputSize), put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Media_Capture_IMediaCapture6<D>::CaptureDeviceExclusiveControlStatusChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Media::Capture::MediaCaptureDeviceExclusiveControlStatusChangedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture6)->add_CaptureDeviceExclusiveControlStatusChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Capture::IMediaCapture6> consume_Windows_Media_Capture_IMediaCapture6<D>::CaptureDeviceExclusiveControlStatusChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Media::Capture::MediaCaptureDeviceExclusiveControlStatusChangedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Capture::IMediaCapture6>(this, &abi_t<Windows::Media::Capture::IMediaCapture6>::remove_CaptureDeviceExclusiveControlStatusChanged, CaptureDeviceExclusiveControlStatusChanged(handler));
}

template <typename D> void consume_Windows_Media_Capture_IMediaCapture6<D>::CaptureDeviceExclusiveControlStatusChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture6)->remove_CaptureDeviceExclusiveControlStatusChanged(get_abi(token)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MultiSourceMediaFrameReader> consume_Windows_Media_Capture_IMediaCapture6<D>::CreateMultiSourceFrameReaderAsync(param::async_iterable<Windows::Media::Capture::Frames::MediaFrameSource> const& inputSources) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MultiSourceMediaFrameReader> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture6)->CreateMultiSourceFrameReaderAsync(get_abi(inputSources), put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Capture_IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs<D>::DeviceId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs)->get_DeviceId(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Capture::MediaCaptureDeviceExclusiveControlStatus consume_Windows_Media_Capture_IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs<D>::Status() const
{
    Windows::Media::Capture::MediaCaptureDeviceExclusiveControlStatus value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs)->get_Status(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Capture_IMediaCaptureFailedEventArgs<D>::Message() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureFailedEventArgs)->get_Message(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Media_Capture_IMediaCaptureFailedEventArgs<D>::Code() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureFailedEventArgs)->get_Code(&value));
    return value;
}

template <typename D> Windows::Media::Devices::MediaCaptureFocusState consume_Windows_Media_Capture_IMediaCaptureFocusChangedEventArgs<D>::FocusState() const
{
    Windows::Media::Devices::MediaCaptureFocusState value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureFocusChangedEventArgs)->get_FocusState(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IMediaCaptureInitializationSettings<D>::AudioDeviceId(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureInitializationSettings)->put_AudioDeviceId(get_abi(value)));
}

template <typename D> hstring consume_Windows_Media_Capture_IMediaCaptureInitializationSettings<D>::AudioDeviceId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureInitializationSettings)->get_AudioDeviceId(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IMediaCaptureInitializationSettings<D>::VideoDeviceId(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureInitializationSettings)->put_VideoDeviceId(get_abi(value)));
}

template <typename D> hstring consume_Windows_Media_Capture_IMediaCaptureInitializationSettings<D>::VideoDeviceId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureInitializationSettings)->get_VideoDeviceId(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IMediaCaptureInitializationSettings<D>::StreamingCaptureMode(Windows::Media::Capture::StreamingCaptureMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureInitializationSettings)->put_StreamingCaptureMode(get_abi(value)));
}

template <typename D> Windows::Media::Capture::StreamingCaptureMode consume_Windows_Media_Capture_IMediaCaptureInitializationSettings<D>::StreamingCaptureMode() const
{
    Windows::Media::Capture::StreamingCaptureMode value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureInitializationSettings)->get_StreamingCaptureMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IMediaCaptureInitializationSettings<D>::PhotoCaptureSource(Windows::Media::Capture::PhotoCaptureSource const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureInitializationSettings)->put_PhotoCaptureSource(get_abi(value)));
}

template <typename D> Windows::Media::Capture::PhotoCaptureSource consume_Windows_Media_Capture_IMediaCaptureInitializationSettings<D>::PhotoCaptureSource() const
{
    Windows::Media::Capture::PhotoCaptureSource value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureInitializationSettings)->get_PhotoCaptureSource(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IMediaCaptureInitializationSettings2<D>::MediaCategory(Windows::Media::Capture::MediaCategory const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureInitializationSettings2)->put_MediaCategory(get_abi(value)));
}

template <typename D> Windows::Media::Capture::MediaCategory consume_Windows_Media_Capture_IMediaCaptureInitializationSettings2<D>::MediaCategory() const
{
    Windows::Media::Capture::MediaCategory value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureInitializationSettings2)->get_MediaCategory(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IMediaCaptureInitializationSettings2<D>::AudioProcessing(Windows::Media::AudioProcessing const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureInitializationSettings2)->put_AudioProcessing(get_abi(value)));
}

template <typename D> Windows::Media::AudioProcessing consume_Windows_Media_Capture_IMediaCaptureInitializationSettings2<D>::AudioProcessing() const
{
    Windows::Media::AudioProcessing value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureInitializationSettings2)->get_AudioProcessing(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IMediaCaptureInitializationSettings3<D>::AudioSource(Windows::Media::Core::IMediaSource const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureInitializationSettings3)->put_AudioSource(get_abi(value)));
}

template <typename D> Windows::Media::Core::IMediaSource consume_Windows_Media_Capture_IMediaCaptureInitializationSettings3<D>::AudioSource() const
{
    Windows::Media::Core::IMediaSource value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureInitializationSettings3)->get_AudioSource(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IMediaCaptureInitializationSettings3<D>::VideoSource(Windows::Media::Core::IMediaSource const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureInitializationSettings3)->put_VideoSource(get_abi(value)));
}

template <typename D> Windows::Media::Core::IMediaSource consume_Windows_Media_Capture_IMediaCaptureInitializationSettings3<D>::VideoSource() const
{
    Windows::Media::Core::IMediaSource value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureInitializationSettings3)->get_VideoSource(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Capture::MediaCaptureVideoProfile consume_Windows_Media_Capture_IMediaCaptureInitializationSettings4<D>::VideoProfile() const
{
    Windows::Media::Capture::MediaCaptureVideoProfile value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureInitializationSettings4)->get_VideoProfile(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IMediaCaptureInitializationSettings4<D>::VideoProfile(Windows::Media::Capture::MediaCaptureVideoProfile const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureInitializationSettings4)->put_VideoProfile(get_abi(value)));
}

template <typename D> Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription consume_Windows_Media_Capture_IMediaCaptureInitializationSettings4<D>::PreviewMediaDescription() const
{
    Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureInitializationSettings4)->get_PreviewMediaDescription(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IMediaCaptureInitializationSettings4<D>::PreviewMediaDescription(Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureInitializationSettings4)->put_PreviewMediaDescription(get_abi(value)));
}

template <typename D> Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription consume_Windows_Media_Capture_IMediaCaptureInitializationSettings4<D>::RecordMediaDescription() const
{
    Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureInitializationSettings4)->get_RecordMediaDescription(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IMediaCaptureInitializationSettings4<D>::RecordMediaDescription(Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureInitializationSettings4)->put_RecordMediaDescription(get_abi(value)));
}

template <typename D> Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription consume_Windows_Media_Capture_IMediaCaptureInitializationSettings4<D>::PhotoMediaDescription() const
{
    Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureInitializationSettings4)->get_PhotoMediaDescription(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IMediaCaptureInitializationSettings4<D>::PhotoMediaDescription(Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureInitializationSettings4)->put_PhotoMediaDescription(get_abi(value)));
}

template <typename D> Windows::Media::Capture::Frames::MediaFrameSourceGroup consume_Windows_Media_Capture_IMediaCaptureInitializationSettings5<D>::SourceGroup() const
{
    Windows::Media::Capture::Frames::MediaFrameSourceGroup value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureInitializationSettings5)->get_SourceGroup(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IMediaCaptureInitializationSettings5<D>::SourceGroup(Windows::Media::Capture::Frames::MediaFrameSourceGroup const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureInitializationSettings5)->put_SourceGroup(get_abi(value)));
}

template <typename D> Windows::Media::Capture::MediaCaptureSharingMode consume_Windows_Media_Capture_IMediaCaptureInitializationSettings5<D>::SharingMode() const
{
    Windows::Media::Capture::MediaCaptureSharingMode value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureInitializationSettings5)->get_SharingMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IMediaCaptureInitializationSettings5<D>::SharingMode(Windows::Media::Capture::MediaCaptureSharingMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureInitializationSettings5)->put_SharingMode(get_abi(value)));
}

template <typename D> Windows::Media::Capture::MediaCaptureMemoryPreference consume_Windows_Media_Capture_IMediaCaptureInitializationSettings5<D>::MemoryPreference() const
{
    Windows::Media::Capture::MediaCaptureMemoryPreference value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureInitializationSettings5)->get_MemoryPreference(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IMediaCaptureInitializationSettings5<D>::MemoryPreference(Windows::Media::Capture::MediaCaptureMemoryPreference const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureInitializationSettings5)->put_MemoryPreference(get_abi(value)));
}

template <typename D> bool consume_Windows_Media_Capture_IMediaCaptureInitializationSettings6<D>::AlwaysPlaySystemShutterSound() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureInitializationSettings6)->get_AlwaysPlaySystemShutterSound(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IMediaCaptureInitializationSettings6<D>::AlwaysPlaySystemShutterSound(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureInitializationSettings6)->put_AlwaysPlaySystemShutterSound(value));
}

template <typename D> Windows::Media::VideoFrame consume_Windows_Media_Capture_IMediaCapturePauseResult<D>::LastFrame() const
{
    Windows::Media::VideoFrame value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapturePauseResult)->get_LastFrame(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Media_Capture_IMediaCapturePauseResult<D>::RecordDuration() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapturePauseResult)->get_RecordDuration(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Capture_IMediaCaptureSettings<D>::AudioDeviceId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureSettings)->get_AudioDeviceId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Capture_IMediaCaptureSettings<D>::VideoDeviceId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureSettings)->get_VideoDeviceId(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Capture::StreamingCaptureMode consume_Windows_Media_Capture_IMediaCaptureSettings<D>::StreamingCaptureMode() const
{
    Windows::Media::Capture::StreamingCaptureMode value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureSettings)->get_StreamingCaptureMode(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Capture::PhotoCaptureSource consume_Windows_Media_Capture_IMediaCaptureSettings<D>::PhotoCaptureSource() const
{
    Windows::Media::Capture::PhotoCaptureSource value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureSettings)->get_PhotoCaptureSource(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Capture::VideoDeviceCharacteristic consume_Windows_Media_Capture_IMediaCaptureSettings<D>::VideoDeviceCharacteristic() const
{
    Windows::Media::Capture::VideoDeviceCharacteristic value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureSettings)->get_VideoDeviceCharacteristic(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Media_Capture_IMediaCaptureSettings2<D>::ConcurrentRecordAndPhotoSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureSettings2)->get_ConcurrentRecordAndPhotoSupported(&value));
    return value;
}

template <typename D> bool consume_Windows_Media_Capture_IMediaCaptureSettings2<D>::ConcurrentRecordAndPhotoSequenceSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureSettings2)->get_ConcurrentRecordAndPhotoSequenceSupported(&value));
    return value;
}

template <typename D> bool consume_Windows_Media_Capture_IMediaCaptureSettings2<D>::CameraSoundRequiredForRegion() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureSettings2)->get_CameraSoundRequiredForRegion(&value));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint32_t> consume_Windows_Media_Capture_IMediaCaptureSettings2<D>::Horizontal35mmEquivalentFocalLength() const
{
    Windows::Foundation::IReference<uint32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureSettings2)->get_Horizontal35mmEquivalentFocalLength(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<int32_t> consume_Windows_Media_Capture_IMediaCaptureSettings2<D>::PitchOffsetDegrees() const
{
    Windows::Foundation::IReference<int32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureSettings2)->get_PitchOffsetDegrees(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint32_t> consume_Windows_Media_Capture_IMediaCaptureSettings2<D>::Vertical35mmEquivalentFocalLength() const
{
    Windows::Foundation::IReference<uint32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureSettings2)->get_Vertical35mmEquivalentFocalLength(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Capture::MediaCategory consume_Windows_Media_Capture_IMediaCaptureSettings2<D>::MediaCategory() const
{
    Windows::Media::Capture::MediaCategory value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureSettings2)->get_MediaCategory(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::AudioProcessing consume_Windows_Media_Capture_IMediaCaptureSettings2<D>::AudioProcessing() const
{
    Windows::Media::AudioProcessing value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureSettings2)->get_AudioProcessing(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Media_Capture_IMediaCaptureStatics<D>::IsVideoProfileSupported(param::hstring const& videoDeviceId) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureStatics)->IsVideoProfileSupported(get_abi(videoDeviceId), &value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfile> consume_Windows_Media_Capture_IMediaCaptureStatics<D>::FindAllVideoProfiles(param::hstring const& videoDeviceId) const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfile> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureStatics)->FindAllVideoProfiles(get_abi(videoDeviceId), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfile> consume_Windows_Media_Capture_IMediaCaptureStatics<D>::FindConcurrentProfiles(param::hstring const& videoDeviceId) const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfile> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureStatics)->FindConcurrentProfiles(get_abi(videoDeviceId), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfile> consume_Windows_Media_Capture_IMediaCaptureStatics<D>::FindKnownVideoProfiles(param::hstring const& videoDeviceId, Windows::Media::Capture::KnownVideoProfile const& name) const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfile> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureStatics)->FindKnownVideoProfiles(get_abi(videoDeviceId), get_abi(name), put_abi(value)));
    return value;
}

template <typename D> Windows::Media::VideoFrame consume_Windows_Media_Capture_IMediaCaptureStopResult<D>::LastFrame() const
{
    Windows::Media::VideoFrame value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureStopResult)->get_LastFrame(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Media_Capture_IMediaCaptureStopResult<D>::RecordDuration() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureStopResult)->get_RecordDuration(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Capture_IMediaCaptureVideoPreview<D>::StartPreviewAsync() const
{
    Windows::Foundation::IAsyncAction asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureVideoPreview)->StartPreviewAsync(put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Capture_IMediaCaptureVideoPreview<D>::StartPreviewToCustomSinkAsync(Windows::Media::MediaProperties::MediaEncodingProfile const& encodingProfile, Windows::Media::IMediaExtension const& customMediaSink) const
{
    Windows::Foundation::IAsyncAction asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureVideoPreview)->StartPreviewToCustomSinkAsync(get_abi(encodingProfile), get_abi(customMediaSink), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Capture_IMediaCaptureVideoPreview<D>::StartPreviewToCustomSinkAsync(Windows::Media::MediaProperties::MediaEncodingProfile const& encodingProfile, param::hstring const& customSinkActivationId, Windows::Foundation::Collections::IPropertySet const& customSinkSettings) const
{
    Windows::Foundation::IAsyncAction asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureVideoPreview)->StartPreviewToCustomSinkIdAsync(get_abi(encodingProfile), get_abi(customSinkActivationId), get_abi(customSinkSettings), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Capture_IMediaCaptureVideoPreview<D>::StopPreviewAsync() const
{
    Windows::Foundation::IAsyncAction asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureVideoPreview)->StopPreviewAsync(put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> hstring consume_Windows_Media_Capture_IMediaCaptureVideoProfile<D>::Id() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureVideoProfile)->get_Id(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Capture_IMediaCaptureVideoProfile<D>::VideoDeviceId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureVideoProfile)->get_VideoDeviceId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription> consume_Windows_Media_Capture_IMediaCaptureVideoProfile<D>::SupportedPreviewMediaDescription() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureVideoProfile)->get_SupportedPreviewMediaDescription(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription> consume_Windows_Media_Capture_IMediaCaptureVideoProfile<D>::SupportedRecordMediaDescription() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureVideoProfile)->get_SupportedRecordMediaDescription(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription> consume_Windows_Media_Capture_IMediaCaptureVideoProfile<D>::SupportedPhotoMediaDescription() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureVideoProfile)->get_SupportedPhotoMediaDescription(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfile> consume_Windows_Media_Capture_IMediaCaptureVideoProfile<D>::GetConcurrency() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfile> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureVideoProfile)->GetConcurrency(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Media_Capture_IMediaCaptureVideoProfileMediaDescription<D>::Width() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureVideoProfileMediaDescription)->get_Width(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Media_Capture_IMediaCaptureVideoProfileMediaDescription<D>::Height() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureVideoProfileMediaDescription)->get_Height(&value));
    return value;
}

template <typename D> double consume_Windows_Media_Capture_IMediaCaptureVideoProfileMediaDescription<D>::FrameRate() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureVideoProfileMediaDescription)->get_FrameRate(&value));
    return value;
}

template <typename D> bool consume_Windows_Media_Capture_IMediaCaptureVideoProfileMediaDescription<D>::IsVariablePhotoSequenceSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureVideoProfileMediaDescription)->get_IsVariablePhotoSequenceSupported(&value));
    return value;
}

template <typename D> bool consume_Windows_Media_Capture_IMediaCaptureVideoProfileMediaDescription<D>::IsHdrVideoSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureVideoProfileMediaDescription)->get_IsHdrVideoSupported(&value));
    return value;
}

template <typename D> Windows::Media::Capture::CapturedFrame consume_Windows_Media_Capture_IOptionalReferencePhotoCapturedEventArgs<D>::Frame() const
{
    Windows::Media::Capture::CapturedFrame value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IOptionalReferencePhotoCapturedEventArgs)->get_Frame(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_Media_Capture_IOptionalReferencePhotoCapturedEventArgs<D>::Context() const
{
    Windows::Foundation::IInspectable value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IOptionalReferencePhotoCapturedEventArgs)->get_Context(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Capture::CapturedFrame consume_Windows_Media_Capture_IPhotoCapturedEventArgs<D>::Frame() const
{
    Windows::Media::Capture::CapturedFrame value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IPhotoCapturedEventArgs)->get_Frame(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Capture::CapturedFrame consume_Windows_Media_Capture_IPhotoCapturedEventArgs<D>::Thumbnail() const
{
    Windows::Media::Capture::CapturedFrame value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IPhotoCapturedEventArgs)->get_Thumbnail(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Media_Capture_IPhotoCapturedEventArgs<D>::CaptureTimeOffset() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IPhotoCapturedEventArgs)->get_CaptureTimeOffset(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Capture::CapturedFrame consume_Windows_Media_Capture_IPhotoConfirmationCapturedEventArgs<D>::Frame() const
{
    Windows::Media::Capture::CapturedFrame value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IPhotoConfirmationCapturedEventArgs)->get_Frame(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Media_Capture_IPhotoConfirmationCapturedEventArgs<D>::CaptureTimeOffset() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IPhotoConfirmationCapturedEventArgs)->get_CaptureTimeOffset(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::MediaProperties::VideoEncodingProperties consume_Windows_Media_Capture_IVideoStreamConfiguration<D>::InputProperties() const
{
    Windows::Media::MediaProperties::VideoEncodingProperties value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IVideoStreamConfiguration)->get_InputProperties(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::MediaProperties::VideoEncodingProperties consume_Windows_Media_Capture_IVideoStreamConfiguration<D>::OutputProperties() const
{
    Windows::Media::MediaProperties::VideoEncodingProperties value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IVideoStreamConfiguration)->get_OutputProperties(put_abi(value)));
    return value;
}

template <> struct delegate<Windows::Media::Capture::MediaCaptureFailedEventHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::Media::Capture::MediaCaptureFailedEventHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::Media::Capture::MediaCaptureFailedEventHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(::IUnknown* sender, ::IUnknown* errorEventArgs) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::Media::Capture::MediaCapture const*>(&sender), *reinterpret_cast<Windows::Media::Capture::MediaCaptureFailedEventArgs const*>(&errorEventArgs));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <> struct delegate<Windows::Media::Capture::RecordLimitationExceededEventHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::Media::Capture::RecordLimitationExceededEventHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::Media::Capture::RecordLimitationExceededEventHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(::IUnknown* sender) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::Media::Capture::MediaCapture const*>(&sender));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAdvancedCapturedPhoto> : produce_base<D, Windows::Media::Capture::IAdvancedCapturedPhoto>
{
    HRESULT __stdcall get_Frame(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Frame());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Mode(Windows::Media::Devices::AdvancedPhotoMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Mode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Context(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Context());
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
struct produce<D, Windows::Media::Capture::IAdvancedCapturedPhoto2> : produce_base<D, Windows::Media::Capture::IAdvancedCapturedPhoto2>
{
    HRESULT __stdcall get_FrameBoundsRelativeToReferencePhoto(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FrameBoundsRelativeToReferencePhoto());
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
struct produce<D, Windows::Media::Capture::IAdvancedPhotoCapture> : produce_base<D, Windows::Media::Capture::IAdvancedPhotoCapture>
{
    HRESULT __stdcall CaptureAsync(::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().CaptureAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CaptureWithContextAsync(::IUnknown* context, ::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().CaptureAsync(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&context)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_OptionalReferencePhotoCaptured(::IUnknown* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().OptionalReferencePhotoCaptured(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AdvancedPhotoCapture, Windows::Media::Capture::OptionalReferencePhotoCapturedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_OptionalReferencePhotoCaptured(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OptionalReferencePhotoCaptured(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_AllPhotosCaptured(::IUnknown* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().AllPhotosCaptured(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AdvancedPhotoCapture, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_AllPhotosCaptured(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AllPhotosCaptured(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FinishAsync(::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().FinishAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppCapture> : produce_base<D, Windows::Media::Capture::IAppCapture>
{
    HRESULT __stdcall get_IsCapturingAudio(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsCapturingAudio());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsCapturingVideo(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsCapturingVideo());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_CapturingChanged(::IUnknown* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().CapturingChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCapture, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_CapturingChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CapturingChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppCaptureStatics> : produce_base<D, Windows::Media::Capture::IAppCaptureStatics>
{
    HRESULT __stdcall GetForCurrentView(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetForCurrentView());
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
struct produce<D, Windows::Media::Capture::IAppCaptureStatics2> : produce_base<D, Windows::Media::Capture::IAppCaptureStatics2>
{
    HRESULT __stdcall SetAllowedAsync(bool allowed, ::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().SetAllowedAsync(allowed));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::ICameraCaptureUI> : produce_base<D, Windows::Media::Capture::ICameraCaptureUI>
{
    HRESULT __stdcall get_PhotoSettings(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PhotoSettings());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VideoSettings(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VideoSettings());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CaptureFileAsync(Windows::Media::Capture::CameraCaptureUIMode mode, ::IUnknown** asyncInfo) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().CaptureFileAsync(*reinterpret_cast<Windows::Media::Capture::CameraCaptureUIMode const*>(&mode)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::ICameraCaptureUIPhotoCaptureSettings> : produce_base<D, Windows::Media::Capture::ICameraCaptureUIPhotoCaptureSettings>
{
    HRESULT __stdcall get_Format(Windows::Media::Capture::CameraCaptureUIPhotoFormat* value) noexcept final
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

    HRESULT __stdcall put_Format(Windows::Media::Capture::CameraCaptureUIPhotoFormat value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Format(*reinterpret_cast<Windows::Media::Capture::CameraCaptureUIPhotoFormat const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxResolution(Windows::Media::Capture::CameraCaptureUIMaxPhotoResolution* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaxResolution());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaxResolution(Windows::Media::Capture::CameraCaptureUIMaxPhotoResolution value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxResolution(*reinterpret_cast<Windows::Media::Capture::CameraCaptureUIMaxPhotoResolution const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CroppedSizeInPixels(Windows::Foundation::Size* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CroppedSizeInPixels());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CroppedSizeInPixels(Windows::Foundation::Size value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CroppedSizeInPixels(*reinterpret_cast<Windows::Foundation::Size const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CroppedAspectRatio(Windows::Foundation::Size* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CroppedAspectRatio());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CroppedAspectRatio(Windows::Foundation::Size value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CroppedAspectRatio(*reinterpret_cast<Windows::Foundation::Size const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AllowCropping(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AllowCropping());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AllowCropping(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AllowCropping(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::ICameraCaptureUIVideoCaptureSettings> : produce_base<D, Windows::Media::Capture::ICameraCaptureUIVideoCaptureSettings>
{
    HRESULT __stdcall get_Format(Windows::Media::Capture::CameraCaptureUIVideoFormat* value) noexcept final
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

    HRESULT __stdcall put_Format(Windows::Media::Capture::CameraCaptureUIVideoFormat value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Format(*reinterpret_cast<Windows::Media::Capture::CameraCaptureUIVideoFormat const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxResolution(Windows::Media::Capture::CameraCaptureUIMaxVideoResolution* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaxResolution());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaxResolution(Windows::Media::Capture::CameraCaptureUIMaxVideoResolution value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxResolution(*reinterpret_cast<Windows::Media::Capture::CameraCaptureUIMaxVideoResolution const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxDurationInSeconds(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaxDurationInSeconds());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaxDurationInSeconds(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxDurationInSeconds(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AllowTrimming(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AllowTrimming());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AllowTrimming(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AllowTrimming(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::ICapturedFrame> : produce_base<D, Windows::Media::Capture::ICapturedFrame>
{
    HRESULT __stdcall get_Width(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Width());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Height(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Height());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::ICapturedFrameControlValues> : produce_base<D, Windows::Media::Capture::ICapturedFrameControlValues>
{
    HRESULT __stdcall get_Exposure(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Exposure());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExposureCompensation(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ExposureCompensation());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsoSpeed(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsoSpeed());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Focus(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Focus());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SceneMode(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SceneMode());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Flashed(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Flashed());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FlashPowerPercent(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FlashPowerPercent());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WhiteBalance(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().WhiteBalance());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ZoomFactor(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ZoomFactor());
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
struct produce<D, Windows::Media::Capture::ICapturedFrameControlValues2> : produce_base<D, Windows::Media::Capture::ICapturedFrameControlValues2>
{
    HRESULT __stdcall get_FocusState(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FocusState());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsoDigitalGain(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsoDigitalGain());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsoAnalogGain(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsoAnalogGain());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SensorFrameRate(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SensorFrameRate());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WhiteBalanceGain(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().WhiteBalanceGain());
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
struct produce<D, Windows::Media::Capture::ICapturedFrameWithSoftwareBitmap> : produce_base<D, Windows::Media::Capture::ICapturedFrameWithSoftwareBitmap>
{
    HRESULT __stdcall get_SoftwareBitmap(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SoftwareBitmap());
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
struct produce<D, Windows::Media::Capture::ICapturedPhoto> : produce_base<D, Windows::Media::Capture::ICapturedPhoto>
{
    HRESULT __stdcall get_Frame(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Frame());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Thumbnail(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Thumbnail());
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
struct produce<D, Windows::Media::Capture::ILowLagMediaRecording> : produce_base<D, Windows::Media::Capture::ILowLagMediaRecording>
{
    HRESULT __stdcall StartAsync(::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().StartAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall StopAsync(::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().StopAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FinishAsync(::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().FinishAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::ILowLagMediaRecording2> : produce_base<D, Windows::Media::Capture::ILowLagMediaRecording2>
{
    HRESULT __stdcall PauseAsync(Windows::Media::Devices::MediaCapturePauseBehavior behavior, ::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().PauseAsync(*reinterpret_cast<Windows::Media::Devices::MediaCapturePauseBehavior const*>(&behavior)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ResumeAsync(::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().ResumeAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::ILowLagMediaRecording3> : produce_base<D, Windows::Media::Capture::ILowLagMediaRecording3>
{
    HRESULT __stdcall PauseWithResultAsync(Windows::Media::Devices::MediaCapturePauseBehavior behavior, ::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().PauseWithResultAsync(*reinterpret_cast<Windows::Media::Devices::MediaCapturePauseBehavior const*>(&behavior)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall StopWithResultAsync(::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().StopWithResultAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::ILowLagPhotoCapture> : produce_base<D, Windows::Media::Capture::ILowLagPhotoCapture>
{
    HRESULT __stdcall CaptureAsync(::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().CaptureAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FinishAsync(::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().FinishAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::ILowLagPhotoSequenceCapture> : produce_base<D, Windows::Media::Capture::ILowLagPhotoSequenceCapture>
{
    HRESULT __stdcall StartAsync(::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().StartAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall StopAsync(::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().StopAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FinishAsync(::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().FinishAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PhotoCaptured(::IUnknown* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().PhotoCaptured(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::LowLagPhotoSequenceCapture, Windows::Media::Capture::PhotoCapturedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PhotoCaptured(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PhotoCaptured(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IMediaCapture> : produce_base<D, Windows::Media::Capture::IMediaCapture>
{
    HRESULT __stdcall InitializeAsync(::IUnknown** asyncInfo) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().InitializeAsync());
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall InitializeWithSettingsAsync(::IUnknown* mediaCaptureInitializationSettings, ::IUnknown** asyncInfo) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().InitializeAsync(*reinterpret_cast<Windows::Media::Capture::MediaCaptureInitializationSettings const*>(&mediaCaptureInitializationSettings)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall StartRecordToStorageFileAsync(::IUnknown* encodingProfile, ::IUnknown* file, ::IUnknown** asyncInfo) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().StartRecordToStorageFileAsync(*reinterpret_cast<Windows::Media::MediaProperties::MediaEncodingProfile const*>(&encodingProfile), *reinterpret_cast<Windows::Storage::IStorageFile const*>(&file)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall StartRecordToStreamAsync(::IUnknown* encodingProfile, ::IUnknown* stream, ::IUnknown** asyncInfo) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().StartRecordToStreamAsync(*reinterpret_cast<Windows::Media::MediaProperties::MediaEncodingProfile const*>(&encodingProfile), *reinterpret_cast<Windows::Storage::Streams::IRandomAccessStream const*>(&stream)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall StartRecordToCustomSinkAsync(::IUnknown* encodingProfile, ::IUnknown* customMediaSink, ::IUnknown** asyncInfo) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().StartRecordToCustomSinkAsync(*reinterpret_cast<Windows::Media::MediaProperties::MediaEncodingProfile const*>(&encodingProfile), *reinterpret_cast<Windows::Media::IMediaExtension const*>(&customMediaSink)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall StartRecordToCustomSinkIdAsync(::IUnknown* encodingProfile, HSTRING customSinkActivationId, ::IUnknown* customSinkSettings, ::IUnknown** asyncInfo) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().StartRecordToCustomSinkAsync(*reinterpret_cast<Windows::Media::MediaProperties::MediaEncodingProfile const*>(&encodingProfile), *reinterpret_cast<hstring const*>(&customSinkActivationId), *reinterpret_cast<Windows::Foundation::Collections::IPropertySet const*>(&customSinkSettings)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall StopRecordAsync(::IUnknown** asyncInfo) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().StopRecordAsync());
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CapturePhotoToStorageFileAsync(::IUnknown* type, ::IUnknown* file, ::IUnknown** asyncInfo) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().CapturePhotoToStorageFileAsync(*reinterpret_cast<Windows::Media::MediaProperties::ImageEncodingProperties const*>(&type), *reinterpret_cast<Windows::Storage::IStorageFile const*>(&file)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CapturePhotoToStreamAsync(::IUnknown* type, ::IUnknown* stream, ::IUnknown** asyncInfo) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().CapturePhotoToStreamAsync(*reinterpret_cast<Windows::Media::MediaProperties::ImageEncodingProperties const*>(&type), *reinterpret_cast<Windows::Storage::Streams::IRandomAccessStream const*>(&stream)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddEffectAsync(Windows::Media::Capture::MediaStreamType mediaStreamType, HSTRING effectActivationID, ::IUnknown* effectSettings, ::IUnknown** asyncInfo) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().AddEffectAsync(*reinterpret_cast<Windows::Media::Capture::MediaStreamType const*>(&mediaStreamType), *reinterpret_cast<hstring const*>(&effectActivationID), *reinterpret_cast<Windows::Foundation::Collections::IPropertySet const*>(&effectSettings)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ClearEffectsAsync(Windows::Media::Capture::MediaStreamType mediaStreamType, ::IUnknown** asyncInfo) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().ClearEffectsAsync(*reinterpret_cast<Windows::Media::Capture::MediaStreamType const*>(&mediaStreamType)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetEncoderProperty(Windows::Media::Capture::MediaStreamType mediaStreamType, GUID propertyId, ::IUnknown* propertyValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetEncoderProperty(*reinterpret_cast<Windows::Media::Capture::MediaStreamType const*>(&mediaStreamType), *reinterpret_cast<GUID const*>(&propertyId), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&propertyValue));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetEncoderProperty(Windows::Media::Capture::MediaStreamType mediaStreamType, GUID propertyId, ::IUnknown** propertyValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *propertyValue = detach_abi(this->shim().GetEncoderProperty(*reinterpret_cast<Windows::Media::Capture::MediaStreamType const*>(&mediaStreamType), *reinterpret_cast<GUID const*>(&propertyId)));
            return S_OK;
        }
        catch (...)
        {
            *propertyValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Failed(::IUnknown* errorEventHandler, event_token* eventCookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *eventCookie = detach_abi(this->shim().Failed(*reinterpret_cast<Windows::Media::Capture::MediaCaptureFailedEventHandler const*>(&errorEventHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Failed(event_token eventCookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Failed(*reinterpret_cast<event_token const*>(&eventCookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_RecordLimitationExceeded(::IUnknown* recordLimitationExceededEventHandler, event_token* eventCookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *eventCookie = detach_abi(this->shim().RecordLimitationExceeded(*reinterpret_cast<Windows::Media::Capture::RecordLimitationExceededEventHandler const*>(&recordLimitationExceededEventHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_RecordLimitationExceeded(event_token eventCookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RecordLimitationExceeded(*reinterpret_cast<event_token const*>(&eventCookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MediaCaptureSettings(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MediaCaptureSettings());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AudioDeviceController(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AudioDeviceController());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VideoDeviceController(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VideoDeviceController());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetPreviewMirroring(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetPreviewMirroring(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetPreviewMirroring(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetPreviewMirroring());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetPreviewRotation(Windows::Media::Capture::VideoRotation value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetPreviewRotation(*reinterpret_cast<Windows::Media::Capture::VideoRotation const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetPreviewRotation(Windows::Media::Capture::VideoRotation* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetPreviewRotation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetRecordRotation(Windows::Media::Capture::VideoRotation value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetRecordRotation(*reinterpret_cast<Windows::Media::Capture::VideoRotation const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetRecordRotation(Windows::Media::Capture::VideoRotation* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetRecordRotation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IMediaCapture2> : produce_base<D, Windows::Media::Capture::IMediaCapture2>
{
    HRESULT __stdcall PrepareLowLagRecordToStorageFileAsync(::IUnknown* encodingProfile, ::IUnknown* file, ::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().PrepareLowLagRecordToStorageFileAsync(*reinterpret_cast<Windows::Media::MediaProperties::MediaEncodingProfile const*>(&encodingProfile), *reinterpret_cast<Windows::Storage::IStorageFile const*>(&file)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall PrepareLowLagRecordToStreamAsync(::IUnknown* encodingProfile, ::IUnknown* stream, ::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().PrepareLowLagRecordToStreamAsync(*reinterpret_cast<Windows::Media::MediaProperties::MediaEncodingProfile const*>(&encodingProfile), *reinterpret_cast<Windows::Storage::Streams::IRandomAccessStream const*>(&stream)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall PrepareLowLagRecordToCustomSinkAsync(::IUnknown* encodingProfile, ::IUnknown* customMediaSink, ::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().PrepareLowLagRecordToCustomSinkAsync(*reinterpret_cast<Windows::Media::MediaProperties::MediaEncodingProfile const*>(&encodingProfile), *reinterpret_cast<Windows::Media::IMediaExtension const*>(&customMediaSink)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall PrepareLowLagRecordToCustomSinkIdAsync(::IUnknown* encodingProfile, HSTRING customSinkActivationId, ::IUnknown* customSinkSettings, ::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().PrepareLowLagRecordToCustomSinkAsync(*reinterpret_cast<Windows::Media::MediaProperties::MediaEncodingProfile const*>(&encodingProfile), *reinterpret_cast<hstring const*>(&customSinkActivationId), *reinterpret_cast<Windows::Foundation::Collections::IPropertySet const*>(&customSinkSettings)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall PrepareLowLagPhotoCaptureAsync(::IUnknown* type, ::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().PrepareLowLagPhotoCaptureAsync(*reinterpret_cast<Windows::Media::MediaProperties::ImageEncodingProperties const*>(&type)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall PrepareLowLagPhotoSequenceCaptureAsync(::IUnknown* type, ::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().PrepareLowLagPhotoSequenceCaptureAsync(*reinterpret_cast<Windows::Media::MediaProperties::ImageEncodingProperties const*>(&type)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetEncodingPropertiesAsync(Windows::Media::Capture::MediaStreamType mediaStreamType, ::IUnknown* mediaEncodingProperties, ::IUnknown* encoderProperties, ::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().SetEncodingPropertiesAsync(*reinterpret_cast<Windows::Media::Capture::MediaStreamType const*>(&mediaStreamType), *reinterpret_cast<Windows::Media::MediaProperties::IMediaEncodingProperties const*>(&mediaEncodingProperties), *reinterpret_cast<Windows::Media::MediaProperties::MediaPropertySet const*>(&encoderProperties)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IMediaCapture3> : produce_base<D, Windows::Media::Capture::IMediaCapture3>
{
    HRESULT __stdcall PrepareVariablePhotoSequenceCaptureAsync(::IUnknown* type, ::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().PrepareVariablePhotoSequenceCaptureAsync(*reinterpret_cast<Windows::Media::MediaProperties::ImageEncodingProperties const*>(&type)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_FocusChanged(::IUnknown* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().FocusChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Media::Capture::MediaCaptureFocusChangedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_FocusChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FocusChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PhotoConfirmationCaptured(::IUnknown* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().PhotoConfirmationCaptured(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Media::Capture::PhotoConfirmationCapturedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PhotoConfirmationCaptured(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PhotoConfirmationCaptured(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IMediaCapture4> : produce_base<D, Windows::Media::Capture::IMediaCapture4>
{
    HRESULT __stdcall AddAudioEffectAsync(::IUnknown* definition, ::IUnknown** op) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *op = detach_abi(this->shim().AddAudioEffectAsync(*reinterpret_cast<Windows::Media::Effects::IAudioEffectDefinition const*>(&definition)));
            return S_OK;
        }
        catch (...)
        {
            *op = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddVideoEffectAsync(::IUnknown* definition, Windows::Media::Capture::MediaStreamType mediaStreamType, ::IUnknown** op) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *op = detach_abi(this->shim().AddVideoEffectAsync(*reinterpret_cast<Windows::Media::Effects::IVideoEffectDefinition const*>(&definition), *reinterpret_cast<Windows::Media::Capture::MediaStreamType const*>(&mediaStreamType)));
            return S_OK;
        }
        catch (...)
        {
            *op = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall PauseRecordAsync(Windows::Media::Devices::MediaCapturePauseBehavior behavior, ::IUnknown** asyncInfo) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().PauseRecordAsync(*reinterpret_cast<Windows::Media::Devices::MediaCapturePauseBehavior const*>(&behavior)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ResumeRecordAsync(::IUnknown** asyncInfo) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().ResumeRecordAsync());
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_CameraStreamStateChanged(::IUnknown* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().CameraStreamStateChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_CameraStreamStateChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CameraStreamStateChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CameraStreamState(Windows::Media::Devices::CameraStreamState* streamState) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *streamState = detach_abi(this->shim().CameraStreamState());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetPreviewFrameAsync(::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetPreviewFrameAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetPreviewFrameCopyAsync(::IUnknown* destination, ::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetPreviewFrameAsync(*reinterpret_cast<Windows::Media::VideoFrame const*>(&destination)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ThermalStatusChanged(::IUnknown* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().ThermalStatusChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ThermalStatusChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ThermalStatusChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ThermalStatus(Windows::Media::Capture::MediaCaptureThermalStatus* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ThermalStatus());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall PrepareAdvancedPhotoCaptureAsync(::IUnknown* encodingProperties, ::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().PrepareAdvancedPhotoCaptureAsync(*reinterpret_cast<Windows::Media::MediaProperties::ImageEncodingProperties const*>(&encodingProperties)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IMediaCapture5> : produce_base<D, Windows::Media::Capture::IMediaCapture5>
{
    HRESULT __stdcall RemoveEffectAsync(::IUnknown* effect, ::IUnknown** asyncInfo) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().RemoveEffectAsync(*reinterpret_cast<Windows::Media::IMediaExtension const*>(&effect)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall PauseRecordWithResultAsync(Windows::Media::Devices::MediaCapturePauseBehavior behavior, ::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().PauseRecordWithResultAsync(*reinterpret_cast<Windows::Media::Devices::MediaCapturePauseBehavior const*>(&behavior)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall StopRecordWithResultAsync(::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().StopRecordWithResultAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FrameSources(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FrameSources());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateFrameReaderAsync(::IUnknown* inputSource, ::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateFrameReaderAsync(*reinterpret_cast<Windows::Media::Capture::Frames::MediaFrameSource const*>(&inputSource)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateFrameReaderWithSubtypeAsync(::IUnknown* inputSource, HSTRING outputSubtype, ::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateFrameReaderAsync(*reinterpret_cast<Windows::Media::Capture::Frames::MediaFrameSource const*>(&inputSource), *reinterpret_cast<hstring const*>(&outputSubtype)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateFrameReaderWithSubtypeAndSizeAsync(::IUnknown* inputSource, HSTRING outputSubtype, struct_of<8> outputSize, ::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateFrameReaderAsync(*reinterpret_cast<Windows::Media::Capture::Frames::MediaFrameSource const*>(&inputSource), *reinterpret_cast<hstring const*>(&outputSubtype), *reinterpret_cast<Windows::Graphics::Imaging::BitmapSize const*>(&outputSize)));
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
struct produce<D, Windows::Media::Capture::IMediaCapture6> : produce_base<D, Windows::Media::Capture::IMediaCapture6>
{
    HRESULT __stdcall add_CaptureDeviceExclusiveControlStatusChanged(::IUnknown* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().CaptureDeviceExclusiveControlStatusChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Media::Capture::MediaCaptureDeviceExclusiveControlStatusChangedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_CaptureDeviceExclusiveControlStatusChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CaptureDeviceExclusiveControlStatusChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateMultiSourceFrameReaderAsync(::IUnknown* inputSources, ::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateMultiSourceFrameReaderAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Media::Capture::Frames::MediaFrameSource> const*>(&inputSources)));
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
struct produce<D, Windows::Media::Capture::IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs> : produce_base<D, Windows::Media::Capture::IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs>
{
    HRESULT __stdcall get_DeviceId(HSTRING* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DeviceId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Status(Windows::Media::Capture::MediaCaptureDeviceExclusiveControlStatus* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IMediaCaptureFailedEventArgs> : produce_base<D, Windows::Media::Capture::IMediaCaptureFailedEventArgs>
{
    HRESULT __stdcall get_Message(HSTRING* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Message());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Code(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Code());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IMediaCaptureFocusChangedEventArgs> : produce_base<D, Windows::Media::Capture::IMediaCaptureFocusChangedEventArgs>
{
    HRESULT __stdcall get_FocusState(Windows::Media::Devices::MediaCaptureFocusState* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FocusState());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IMediaCaptureInitializationSettings> : produce_base<D, Windows::Media::Capture::IMediaCaptureInitializationSettings>
{
    HRESULT __stdcall put_AudioDeviceId(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AudioDeviceId(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AudioDeviceId(HSTRING* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AudioDeviceId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_VideoDeviceId(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().VideoDeviceId(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VideoDeviceId(HSTRING* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VideoDeviceId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_StreamingCaptureMode(Windows::Media::Capture::StreamingCaptureMode value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StreamingCaptureMode(*reinterpret_cast<Windows::Media::Capture::StreamingCaptureMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StreamingCaptureMode(Windows::Media::Capture::StreamingCaptureMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StreamingCaptureMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PhotoCaptureSource(Windows::Media::Capture::PhotoCaptureSource value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PhotoCaptureSource(*reinterpret_cast<Windows::Media::Capture::PhotoCaptureSource const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PhotoCaptureSource(Windows::Media::Capture::PhotoCaptureSource* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PhotoCaptureSource());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IMediaCaptureInitializationSettings2> : produce_base<D, Windows::Media::Capture::IMediaCaptureInitializationSettings2>
{
    HRESULT __stdcall put_MediaCategory(Windows::Media::Capture::MediaCategory value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MediaCategory(*reinterpret_cast<Windows::Media::Capture::MediaCategory const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MediaCategory(Windows::Media::Capture::MediaCategory* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MediaCategory());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AudioProcessing(Windows::Media::AudioProcessing value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AudioProcessing(*reinterpret_cast<Windows::Media::AudioProcessing const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AudioProcessing(Windows::Media::AudioProcessing* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AudioProcessing());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IMediaCaptureInitializationSettings3> : produce_base<D, Windows::Media::Capture::IMediaCaptureInitializationSettings3>
{
    HRESULT __stdcall put_AudioSource(::IUnknown* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AudioSource(*reinterpret_cast<Windows::Media::Core::IMediaSource const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AudioSource(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AudioSource());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_VideoSource(::IUnknown* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().VideoSource(*reinterpret_cast<Windows::Media::Core::IMediaSource const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VideoSource(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VideoSource());
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
struct produce<D, Windows::Media::Capture::IMediaCaptureInitializationSettings4> : produce_base<D, Windows::Media::Capture::IMediaCaptureInitializationSettings4>
{
    HRESULT __stdcall get_VideoProfile(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VideoProfile());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_VideoProfile(::IUnknown* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().VideoProfile(*reinterpret_cast<Windows::Media::Capture::MediaCaptureVideoProfile const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PreviewMediaDescription(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PreviewMediaDescription());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PreviewMediaDescription(::IUnknown* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PreviewMediaDescription(*reinterpret_cast<Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RecordMediaDescription(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RecordMediaDescription());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RecordMediaDescription(::IUnknown* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RecordMediaDescription(*reinterpret_cast<Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PhotoMediaDescription(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PhotoMediaDescription());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PhotoMediaDescription(::IUnknown* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PhotoMediaDescription(*reinterpret_cast<Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IMediaCaptureInitializationSettings5> : produce_base<D, Windows::Media::Capture::IMediaCaptureInitializationSettings5>
{
    HRESULT __stdcall get_SourceGroup(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SourceGroup());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SourceGroup(::IUnknown* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SourceGroup(*reinterpret_cast<Windows::Media::Capture::Frames::MediaFrameSourceGroup const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SharingMode(Windows::Media::Capture::MediaCaptureSharingMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SharingMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SharingMode(Windows::Media::Capture::MediaCaptureSharingMode value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SharingMode(*reinterpret_cast<Windows::Media::Capture::MediaCaptureSharingMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MemoryPreference(Windows::Media::Capture::MediaCaptureMemoryPreference* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MemoryPreference());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MemoryPreference(Windows::Media::Capture::MediaCaptureMemoryPreference value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MemoryPreference(*reinterpret_cast<Windows::Media::Capture::MediaCaptureMemoryPreference const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IMediaCaptureInitializationSettings6> : produce_base<D, Windows::Media::Capture::IMediaCaptureInitializationSettings6>
{
    HRESULT __stdcall get_AlwaysPlaySystemShutterSound(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AlwaysPlaySystemShutterSound());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AlwaysPlaySystemShutterSound(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AlwaysPlaySystemShutterSound(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IMediaCapturePauseResult> : produce_base<D, Windows::Media::Capture::IMediaCapturePauseResult>
{
    HRESULT __stdcall get_LastFrame(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LastFrame());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RecordDuration(Windows::Foundation::TimeSpan* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RecordDuration());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IMediaCaptureSettings> : produce_base<D, Windows::Media::Capture::IMediaCaptureSettings>
{
    HRESULT __stdcall get_AudioDeviceId(HSTRING* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AudioDeviceId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VideoDeviceId(HSTRING* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VideoDeviceId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StreamingCaptureMode(Windows::Media::Capture::StreamingCaptureMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StreamingCaptureMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PhotoCaptureSource(Windows::Media::Capture::PhotoCaptureSource* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PhotoCaptureSource());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VideoDeviceCharacteristic(Windows::Media::Capture::VideoDeviceCharacteristic* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VideoDeviceCharacteristic());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IMediaCaptureSettings2> : produce_base<D, Windows::Media::Capture::IMediaCaptureSettings2>
{
    HRESULT __stdcall get_ConcurrentRecordAndPhotoSupported(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ConcurrentRecordAndPhotoSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ConcurrentRecordAndPhotoSequenceSupported(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ConcurrentRecordAndPhotoSequenceSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CameraSoundRequiredForRegion(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CameraSoundRequiredForRegion());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Horizontal35mmEquivalentFocalLength(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Horizontal35mmEquivalentFocalLength());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PitchOffsetDegrees(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PitchOffsetDegrees());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Vertical35mmEquivalentFocalLength(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Vertical35mmEquivalentFocalLength());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MediaCategory(Windows::Media::Capture::MediaCategory* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MediaCategory());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AudioProcessing(Windows::Media::AudioProcessing* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AudioProcessing());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IMediaCaptureStatics> : produce_base<D, Windows::Media::Capture::IMediaCaptureStatics>
{
    HRESULT __stdcall IsVideoProfileSupported(HSTRING videoDeviceId, bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsVideoProfileSupported(*reinterpret_cast<hstring const*>(&videoDeviceId)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindAllVideoProfiles(HSTRING videoDeviceId, ::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FindAllVideoProfiles(*reinterpret_cast<hstring const*>(&videoDeviceId)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindConcurrentProfiles(HSTRING videoDeviceId, ::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FindConcurrentProfiles(*reinterpret_cast<hstring const*>(&videoDeviceId)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindKnownVideoProfiles(HSTRING videoDeviceId, Windows::Media::Capture::KnownVideoProfile name, ::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FindKnownVideoProfiles(*reinterpret_cast<hstring const*>(&videoDeviceId), *reinterpret_cast<Windows::Media::Capture::KnownVideoProfile const*>(&name)));
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
struct produce<D, Windows::Media::Capture::IMediaCaptureStopResult> : produce_base<D, Windows::Media::Capture::IMediaCaptureStopResult>
{
    HRESULT __stdcall get_LastFrame(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LastFrame());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RecordDuration(Windows::Foundation::TimeSpan* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RecordDuration());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IMediaCaptureVideoPreview> : produce_base<D, Windows::Media::Capture::IMediaCaptureVideoPreview>
{
    HRESULT __stdcall StartPreviewAsync(::IUnknown** asyncInfo) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().StartPreviewAsync());
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall StartPreviewToCustomSinkAsync(::IUnknown* encodingProfile, ::IUnknown* customMediaSink, ::IUnknown** asyncInfo) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().StartPreviewToCustomSinkAsync(*reinterpret_cast<Windows::Media::MediaProperties::MediaEncodingProfile const*>(&encodingProfile), *reinterpret_cast<Windows::Media::IMediaExtension const*>(&customMediaSink)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall StartPreviewToCustomSinkIdAsync(::IUnknown* encodingProfile, HSTRING customSinkActivationId, ::IUnknown* customSinkSettings, ::IUnknown** asyncInfo) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().StartPreviewToCustomSinkAsync(*reinterpret_cast<Windows::Media::MediaProperties::MediaEncodingProfile const*>(&encodingProfile), *reinterpret_cast<hstring const*>(&customSinkActivationId), *reinterpret_cast<Windows::Foundation::Collections::IPropertySet const*>(&customSinkSettings)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall StopPreviewAsync(::IUnknown** asyncInfo) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().StopPreviewAsync());
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IMediaCaptureVideoProfile> : produce_base<D, Windows::Media::Capture::IMediaCaptureVideoProfile>
{
    HRESULT __stdcall get_Id(HSTRING* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VideoDeviceId(HSTRING* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VideoDeviceId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedPreviewMediaDescription(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SupportedPreviewMediaDescription());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedRecordMediaDescription(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SupportedRecordMediaDescription());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedPhotoMediaDescription(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SupportedPhotoMediaDescription());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetConcurrency(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetConcurrency());
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
struct produce<D, Windows::Media::Capture::IMediaCaptureVideoProfileMediaDescription> : produce_base<D, Windows::Media::Capture::IMediaCaptureVideoProfileMediaDescription>
{
    HRESULT __stdcall get_Width(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Width());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Height(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Height());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FrameRate(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FrameRate());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsVariablePhotoSequenceSupported(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsVariablePhotoSequenceSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsHdrVideoSupported(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsHdrVideoSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IOptionalReferencePhotoCapturedEventArgs> : produce_base<D, Windows::Media::Capture::IOptionalReferencePhotoCapturedEventArgs>
{
    HRESULT __stdcall get_Frame(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Frame());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Context(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Context());
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
struct produce<D, Windows::Media::Capture::IPhotoCapturedEventArgs> : produce_base<D, Windows::Media::Capture::IPhotoCapturedEventArgs>
{
    HRESULT __stdcall get_Frame(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Frame());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Thumbnail(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Thumbnail());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CaptureTimeOffset(Windows::Foundation::TimeSpan* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CaptureTimeOffset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IPhotoConfirmationCapturedEventArgs> : produce_base<D, Windows::Media::Capture::IPhotoConfirmationCapturedEventArgs>
{
    HRESULT __stdcall get_Frame(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Frame());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CaptureTimeOffset(Windows::Foundation::TimeSpan* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CaptureTimeOffset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IVideoStreamConfiguration> : produce_base<D, Windows::Media::Capture::IVideoStreamConfiguration>
{
    HRESULT __stdcall get_InputProperties(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InputProperties());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OutputProperties(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OutputProperties());
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

WINRT_EXPORT namespace winrt::Windows::Media::Capture {

inline Windows::Media::Capture::AppCapture AppCapture::GetForCurrentView()
{
    return get_activation_factory<AppCapture, Windows::Media::Capture::IAppCaptureStatics>().GetForCurrentView();
}

inline Windows::Foundation::IAsyncAction AppCapture::SetAllowedAsync(bool allowed)
{
    return get_activation_factory<AppCapture, Windows::Media::Capture::IAppCaptureStatics2>().SetAllowedAsync(allowed);
}

inline CameraCaptureUI::CameraCaptureUI() :
    CameraCaptureUI(activate_instance<CameraCaptureUI>())
{}

inline MediaCapture::MediaCapture() :
    MediaCapture(activate_instance<MediaCapture>())
{}

inline bool MediaCapture::IsVideoProfileSupported(param::hstring const& videoDeviceId)
{
    return get_activation_factory<MediaCapture, Windows::Media::Capture::IMediaCaptureStatics>().IsVideoProfileSupported(videoDeviceId);
}

inline Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfile> MediaCapture::FindAllVideoProfiles(param::hstring const& videoDeviceId)
{
    return get_activation_factory<MediaCapture, Windows::Media::Capture::IMediaCaptureStatics>().FindAllVideoProfiles(videoDeviceId);
}

inline Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfile> MediaCapture::FindConcurrentProfiles(param::hstring const& videoDeviceId)
{
    return get_activation_factory<MediaCapture, Windows::Media::Capture::IMediaCaptureStatics>().FindConcurrentProfiles(videoDeviceId);
}

inline Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfile> MediaCapture::FindKnownVideoProfiles(param::hstring const& videoDeviceId, Windows::Media::Capture::KnownVideoProfile const& name)
{
    return get_activation_factory<MediaCapture, Windows::Media::Capture::IMediaCaptureStatics>().FindKnownVideoProfiles(videoDeviceId, name);
}

inline MediaCaptureInitializationSettings::MediaCaptureInitializationSettings() :
    MediaCaptureInitializationSettings(activate_instance<MediaCaptureInitializationSettings>())
{}

template <typename L> MediaCaptureFailedEventHandler::MediaCaptureFailedEventHandler(L handler) :
    MediaCaptureFailedEventHandler(impl::make_delegate<MediaCaptureFailedEventHandler>(std::forward<L>(handler)))
{}

template <typename F> MediaCaptureFailedEventHandler::MediaCaptureFailedEventHandler(F* handler) :
    MediaCaptureFailedEventHandler([=](auto&& ... args) { handler(args ...); })
{}

template <typename O, typename M> MediaCaptureFailedEventHandler::MediaCaptureFailedEventHandler(O* object, M method) :
    MediaCaptureFailedEventHandler([=](auto&& ... args) { ((*object).*(method))(args ...); })
{}

inline void MediaCaptureFailedEventHandler::operator()(Windows::Media::Capture::MediaCapture const& sender, Windows::Media::Capture::MediaCaptureFailedEventArgs const& errorEventArgs) const
{
    check_hresult((*(abi_t<MediaCaptureFailedEventHandler>**)this)->Invoke(get_abi(sender), get_abi(errorEventArgs)));
}

template <typename L> RecordLimitationExceededEventHandler::RecordLimitationExceededEventHandler(L handler) :
    RecordLimitationExceededEventHandler(impl::make_delegate<RecordLimitationExceededEventHandler>(std::forward<L>(handler)))
{}

template <typename F> RecordLimitationExceededEventHandler::RecordLimitationExceededEventHandler(F* handler) :
    RecordLimitationExceededEventHandler([=](auto&& ... args) { handler(args ...); })
{}

template <typename O, typename M> RecordLimitationExceededEventHandler::RecordLimitationExceededEventHandler(O* object, M method) :
    RecordLimitationExceededEventHandler([=](auto&& ... args) { ((*object).*(method))(args ...); })
{}

inline void RecordLimitationExceededEventHandler::operator()(Windows::Media::Capture::MediaCapture const& sender) const
{
    check_hresult((*(abi_t<RecordLimitationExceededEventHandler>**)this)->Invoke(get_abi(sender)));
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Media::Capture::IAdvancedCapturedPhoto> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::IAdvancedCapturedPhoto> {};

template<> struct hash<winrt::Windows::Media::Capture::IAdvancedCapturedPhoto2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::IAdvancedCapturedPhoto2> {};

template<> struct hash<winrt::Windows::Media::Capture::IAdvancedPhotoCapture> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::IAdvancedPhotoCapture> {};

template<> struct hash<winrt::Windows::Media::Capture::IAppCapture> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::IAppCapture> {};

template<> struct hash<winrt::Windows::Media::Capture::IAppCaptureStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::IAppCaptureStatics> {};

template<> struct hash<winrt::Windows::Media::Capture::IAppCaptureStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::IAppCaptureStatics2> {};

template<> struct hash<winrt::Windows::Media::Capture::ICameraCaptureUI> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::ICameraCaptureUI> {};

template<> struct hash<winrt::Windows::Media::Capture::ICameraCaptureUIPhotoCaptureSettings> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::ICameraCaptureUIPhotoCaptureSettings> {};

template<> struct hash<winrt::Windows::Media::Capture::ICameraCaptureUIVideoCaptureSettings> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::ICameraCaptureUIVideoCaptureSettings> {};

template<> struct hash<winrt::Windows::Media::Capture::ICapturedFrame> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::ICapturedFrame> {};

template<> struct hash<winrt::Windows::Media::Capture::ICapturedFrameControlValues> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::ICapturedFrameControlValues> {};

template<> struct hash<winrt::Windows::Media::Capture::ICapturedFrameControlValues2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::ICapturedFrameControlValues2> {};

template<> struct hash<winrt::Windows::Media::Capture::ICapturedFrameWithSoftwareBitmap> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::ICapturedFrameWithSoftwareBitmap> {};

template<> struct hash<winrt::Windows::Media::Capture::ICapturedPhoto> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::ICapturedPhoto> {};

template<> struct hash<winrt::Windows::Media::Capture::ILowLagMediaRecording> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::ILowLagMediaRecording> {};

template<> struct hash<winrt::Windows::Media::Capture::ILowLagMediaRecording2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::ILowLagMediaRecording2> {};

template<> struct hash<winrt::Windows::Media::Capture::ILowLagMediaRecording3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::ILowLagMediaRecording3> {};

template<> struct hash<winrt::Windows::Media::Capture::ILowLagPhotoCapture> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::ILowLagPhotoCapture> {};

template<> struct hash<winrt::Windows::Media::Capture::ILowLagPhotoSequenceCapture> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::ILowLagPhotoSequenceCapture> {};

template<> struct hash<winrt::Windows::Media::Capture::IMediaCapture> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::IMediaCapture> {};

template<> struct hash<winrt::Windows::Media::Capture::IMediaCapture2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::IMediaCapture2> {};

template<> struct hash<winrt::Windows::Media::Capture::IMediaCapture3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::IMediaCapture3> {};

template<> struct hash<winrt::Windows::Media::Capture::IMediaCapture4> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::IMediaCapture4> {};

template<> struct hash<winrt::Windows::Media::Capture::IMediaCapture5> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::IMediaCapture5> {};

template<> struct hash<winrt::Windows::Media::Capture::IMediaCapture6> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::IMediaCapture6> {};

template<> struct hash<winrt::Windows::Media::Capture::IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs> {};

template<> struct hash<winrt::Windows::Media::Capture::IMediaCaptureFailedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::IMediaCaptureFailedEventArgs> {};

template<> struct hash<winrt::Windows::Media::Capture::IMediaCaptureFocusChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::IMediaCaptureFocusChangedEventArgs> {};

template<> struct hash<winrt::Windows::Media::Capture::IMediaCaptureInitializationSettings> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::IMediaCaptureInitializationSettings> {};

template<> struct hash<winrt::Windows::Media::Capture::IMediaCaptureInitializationSettings2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::IMediaCaptureInitializationSettings2> {};

template<> struct hash<winrt::Windows::Media::Capture::IMediaCaptureInitializationSettings3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::IMediaCaptureInitializationSettings3> {};

template<> struct hash<winrt::Windows::Media::Capture::IMediaCaptureInitializationSettings4> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::IMediaCaptureInitializationSettings4> {};

template<> struct hash<winrt::Windows::Media::Capture::IMediaCaptureInitializationSettings5> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::IMediaCaptureInitializationSettings5> {};

template<> struct hash<winrt::Windows::Media::Capture::IMediaCaptureInitializationSettings6> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::IMediaCaptureInitializationSettings6> {};

template<> struct hash<winrt::Windows::Media::Capture::IMediaCapturePauseResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::IMediaCapturePauseResult> {};

template<> struct hash<winrt::Windows::Media::Capture::IMediaCaptureSettings> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::IMediaCaptureSettings> {};

template<> struct hash<winrt::Windows::Media::Capture::IMediaCaptureSettings2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::IMediaCaptureSettings2> {};

template<> struct hash<winrt::Windows::Media::Capture::IMediaCaptureStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::IMediaCaptureStatics> {};

template<> struct hash<winrt::Windows::Media::Capture::IMediaCaptureStopResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::IMediaCaptureStopResult> {};

template<> struct hash<winrt::Windows::Media::Capture::IMediaCaptureVideoPreview> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::IMediaCaptureVideoPreview> {};

template<> struct hash<winrt::Windows::Media::Capture::IMediaCaptureVideoProfile> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::IMediaCaptureVideoProfile> {};

template<> struct hash<winrt::Windows::Media::Capture::IMediaCaptureVideoProfileMediaDescription> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::IMediaCaptureVideoProfileMediaDescription> {};

template<> struct hash<winrt::Windows::Media::Capture::IOptionalReferencePhotoCapturedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::IOptionalReferencePhotoCapturedEventArgs> {};

template<> struct hash<winrt::Windows::Media::Capture::IPhotoCapturedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::IPhotoCapturedEventArgs> {};

template<> struct hash<winrt::Windows::Media::Capture::IPhotoConfirmationCapturedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::IPhotoConfirmationCapturedEventArgs> {};

template<> struct hash<winrt::Windows::Media::Capture::IVideoStreamConfiguration> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::IVideoStreamConfiguration> {};

template<> struct hash<winrt::Windows::Media::Capture::AdvancedCapturedPhoto> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::AdvancedCapturedPhoto> {};

template<> struct hash<winrt::Windows::Media::Capture::AdvancedPhotoCapture> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::AdvancedPhotoCapture> {};

template<> struct hash<winrt::Windows::Media::Capture::AppCapture> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::AppCapture> {};

template<> struct hash<winrt::Windows::Media::Capture::CameraCaptureUI> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::CameraCaptureUI> {};

template<> struct hash<winrt::Windows::Media::Capture::CameraCaptureUIPhotoCaptureSettings> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::CameraCaptureUIPhotoCaptureSettings> {};

template<> struct hash<winrt::Windows::Media::Capture::CameraCaptureUIVideoCaptureSettings> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::CameraCaptureUIVideoCaptureSettings> {};

template<> struct hash<winrt::Windows::Media::Capture::CapturedFrame> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::CapturedFrame> {};

template<> struct hash<winrt::Windows::Media::Capture::CapturedFrameControlValues> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::CapturedFrameControlValues> {};

template<> struct hash<winrt::Windows::Media::Capture::CapturedPhoto> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::CapturedPhoto> {};

template<> struct hash<winrt::Windows::Media::Capture::LowLagMediaRecording> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::LowLagMediaRecording> {};

template<> struct hash<winrt::Windows::Media::Capture::LowLagPhotoCapture> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::LowLagPhotoCapture> {};

template<> struct hash<winrt::Windows::Media::Capture::LowLagPhotoSequenceCapture> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::LowLagPhotoSequenceCapture> {};

template<> struct hash<winrt::Windows::Media::Capture::MediaCapture> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::MediaCapture> {};

template<> struct hash<winrt::Windows::Media::Capture::MediaCaptureDeviceExclusiveControlStatusChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::MediaCaptureDeviceExclusiveControlStatusChangedEventArgs> {};

template<> struct hash<winrt::Windows::Media::Capture::MediaCaptureFailedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::MediaCaptureFailedEventArgs> {};

template<> struct hash<winrt::Windows::Media::Capture::MediaCaptureFocusChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::MediaCaptureFocusChangedEventArgs> {};

template<> struct hash<winrt::Windows::Media::Capture::MediaCaptureInitializationSettings> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::MediaCaptureInitializationSettings> {};

template<> struct hash<winrt::Windows::Media::Capture::MediaCapturePauseResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::MediaCapturePauseResult> {};

template<> struct hash<winrt::Windows::Media::Capture::MediaCaptureSettings> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::MediaCaptureSettings> {};

template<> struct hash<winrt::Windows::Media::Capture::MediaCaptureStopResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::MediaCaptureStopResult> {};

template<> struct hash<winrt::Windows::Media::Capture::MediaCaptureVideoProfile> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::MediaCaptureVideoProfile> {};

template<> struct hash<winrt::Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription> {};

template<> struct hash<winrt::Windows::Media::Capture::OptionalReferencePhotoCapturedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::OptionalReferencePhotoCapturedEventArgs> {};

template<> struct hash<winrt::Windows::Media::Capture::PhotoCapturedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::PhotoCapturedEventArgs> {};

template<> struct hash<winrt::Windows::Media::Capture::PhotoConfirmationCapturedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::PhotoConfirmationCapturedEventArgs> {};

template<> struct hash<winrt::Windows::Media::Capture::VideoStreamConfiguration> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::VideoStreamConfiguration> {};

}

WINRT_WARNING_POP
