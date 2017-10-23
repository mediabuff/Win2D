// C++/WinRT v1.0.170906.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Foundation::Collections {

struct IPropertySet;

}

WINRT_EXPORT namespace winrt::Windows::Graphics::Imaging {

struct BitmapSize;
struct SoftwareBitmap;

}

WINRT_EXPORT namespace winrt::Windows::Media {

enum class AudioProcessing;
struct IMediaExtension;
struct VideoFrame;

}

WINRT_EXPORT namespace winrt::Windows::Media::Capture::Core {

struct VariablePhotoSequenceCapture;

}

WINRT_EXPORT namespace winrt::Windows::Media::Capture::Frames {

struct MediaFrameReader;
struct MediaFrameSource;
struct MediaFrameSourceGroup;
struct MultiSourceMediaFrameReader;

}

WINRT_EXPORT namespace winrt::Windows::Media::Core {

struct IMediaSource;

}

WINRT_EXPORT namespace winrt::Windows::Media::Devices {

enum class AdvancedPhotoMode;
enum class CameraStreamState;
enum class CaptureSceneMode;
enum class MediaCaptureFocusState;
enum class MediaCapturePauseBehavior;
struct AudioDeviceController;
struct VideoDeviceController;

}

WINRT_EXPORT namespace winrt::Windows::Media::Effects {

struct IAudioEffectDefinition;
struct IVideoEffectDefinition;

}

WINRT_EXPORT namespace winrt::Windows::Media::MediaProperties {

struct IMediaEncodingProperties;
struct ImageEncodingProperties;
struct MediaEncodingProfile;
struct MediaPropertySet;
struct MediaRatio;
struct VideoEncodingProperties;

}

WINRT_EXPORT namespace winrt::Windows::Storage {

struct IStorageFile;
struct StorageFile;

}

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

enum class InputStreamOptions : unsigned;
struct IBuffer;
struct IInputStream;
struct IOutputStream;
struct IRandomAccessStream;

}

WINRT_EXPORT namespace winrt::Windows::Media::Capture {

enum class CameraCaptureUIMaxPhotoResolution : int32_t
{
    HighestAvailable = 0,
    VerySmallQvga = 1,
    SmallVga = 2,
    MediumXga = 3,
    Large3M = 4,
    VeryLarge5M = 5,
};

enum class CameraCaptureUIMaxVideoResolution : int32_t
{
    HighestAvailable = 0,
    LowDefinition = 1,
    StandardDefinition = 2,
    HighDefinition = 3,
};

enum class CameraCaptureUIMode : int32_t
{
    PhotoOrVideo = 0,
    Photo = 1,
    Video = 2,
};

enum class CameraCaptureUIPhotoFormat : int32_t
{
    Jpeg = 0,
    Png = 1,
    JpegXR = 2,
};

enum class CameraCaptureUIVideoFormat : int32_t
{
    Mp4 = 0,
    Wmv = 1,
};

enum class KnownVideoProfile : int32_t
{
    VideoRecording = 0,
    HighQualityPhoto = 1,
    BalancedVideoAndPhoto = 2,
    VideoConferencing = 3,
    PhotoSequence = 4,
};

enum class MediaCaptureDeviceExclusiveControlStatus : int32_t
{
    ExclusiveControlAvailable = 0,
    SharedReadOnlyAvailable = 1,
};

enum class MediaCaptureMemoryPreference : int32_t
{
    Auto = 0,
    Cpu = 1,
};

enum class MediaCaptureSharingMode : int32_t
{
    ExclusiveControl = 0,
    SharedReadOnly = 1,
};

enum class MediaCaptureThermalStatus : int32_t
{
    Normal = 0,
    Overheated = 1,
};

enum class MediaCategory : int32_t
{
    Other = 0,
    Communications = 1,
    Media = 2,
    GameChat = 3,
    Speech = 4,
};

enum class MediaStreamType : int32_t
{
    VideoPreview = 0,
    VideoRecord = 1,
    Audio = 2,
    Photo = 3,
};

enum class PhotoCaptureSource : int32_t
{
    Auto = 0,
    VideoPreview = 1,
    Photo = 2,
};

enum class PowerlineFrequency : int32_t
{
    Disabled = 0,
    FiftyHertz = 1,
    SixtyHertz = 2,
    Auto = 3,
};

enum class StreamingCaptureMode : int32_t
{
    AudioAndVideo = 0,
    Audio = 1,
    Video = 2,
};

enum class VideoDeviceCharacteristic : int32_t
{
    AllStreamsIndependent = 0,
    PreviewRecordStreamsIdentical = 1,
    PreviewPhotoStreamsIdentical = 2,
    RecordPhotoStreamsIdentical = 3,
    AllStreamsIdentical = 4,
};

enum class VideoRotation : int32_t
{
    None = 0,
    Clockwise90Degrees = 1,
    Clockwise180Degrees = 2,
    Clockwise270Degrees = 3,
};

struct IAdvancedCapturedPhoto;
struct IAdvancedCapturedPhoto2;
struct IAdvancedPhotoCapture;
struct IAppCapture;
struct IAppCaptureStatics;
struct IAppCaptureStatics2;
struct ICameraCaptureUI;
struct ICameraCaptureUIPhotoCaptureSettings;
struct ICameraCaptureUIVideoCaptureSettings;
struct ICapturedFrame;
struct ICapturedFrameControlValues;
struct ICapturedFrameControlValues2;
struct ICapturedFrameWithSoftwareBitmap;
struct ICapturedPhoto;
struct ILowLagMediaRecording;
struct ILowLagMediaRecording2;
struct ILowLagMediaRecording3;
struct ILowLagPhotoCapture;
struct ILowLagPhotoSequenceCapture;
struct IMediaCapture;
struct IMediaCapture2;
struct IMediaCapture3;
struct IMediaCapture4;
struct IMediaCapture5;
struct IMediaCapture6;
struct IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs;
struct IMediaCaptureFailedEventArgs;
struct IMediaCaptureFocusChangedEventArgs;
struct IMediaCaptureInitializationSettings;
struct IMediaCaptureInitializationSettings2;
struct IMediaCaptureInitializationSettings3;
struct IMediaCaptureInitializationSettings4;
struct IMediaCaptureInitializationSettings5;
struct IMediaCaptureInitializationSettings6;
struct IMediaCapturePauseResult;
struct IMediaCaptureSettings;
struct IMediaCaptureSettings2;
struct IMediaCaptureStatics;
struct IMediaCaptureStopResult;
struct IMediaCaptureVideoPreview;
struct IMediaCaptureVideoProfile;
struct IMediaCaptureVideoProfileMediaDescription;
struct IOptionalReferencePhotoCapturedEventArgs;
struct IPhotoCapturedEventArgs;
struct IPhotoConfirmationCapturedEventArgs;
struct IVideoStreamConfiguration;
struct AdvancedCapturedPhoto;
struct AdvancedPhotoCapture;
struct AppCapture;
struct CameraCaptureUI;
struct CameraCaptureUIPhotoCaptureSettings;
struct CameraCaptureUIVideoCaptureSettings;
struct CapturedFrame;
struct CapturedFrameControlValues;
struct CapturedPhoto;
struct LowLagMediaRecording;
struct LowLagPhotoCapture;
struct LowLagPhotoSequenceCapture;
struct MediaCapture;
struct MediaCaptureDeviceExclusiveControlStatusChangedEventArgs;
struct MediaCaptureFailedEventArgs;
struct MediaCaptureFocusChangedEventArgs;
struct MediaCaptureInitializationSettings;
struct MediaCapturePauseResult;
struct MediaCaptureSettings;
struct MediaCaptureStopResult;
struct MediaCaptureVideoProfile;
struct MediaCaptureVideoProfileMediaDescription;
struct OptionalReferencePhotoCapturedEventArgs;
struct PhotoCapturedEventArgs;
struct PhotoConfirmationCapturedEventArgs;
struct VideoStreamConfiguration;
struct WhiteBalanceGain;
struct MediaCaptureFailedEventHandler;
struct RecordLimitationExceededEventHandler;

}

namespace winrt::impl {

template <> struct category<Windows::Media::Capture::IAdvancedCapturedPhoto>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IAdvancedCapturedPhoto2>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IAdvancedPhotoCapture>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IAppCapture>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IAppCaptureStatics>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IAppCaptureStatics2>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::ICameraCaptureUI>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::ICameraCaptureUIPhotoCaptureSettings>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::ICameraCaptureUIVideoCaptureSettings>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::ICapturedFrame>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::ICapturedFrameControlValues>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::ICapturedFrameControlValues2>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::ICapturedFrameWithSoftwareBitmap>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::ICapturedPhoto>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::ILowLagMediaRecording>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::ILowLagMediaRecording2>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::ILowLagMediaRecording3>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::ILowLagPhotoCapture>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::ILowLagPhotoSequenceCapture>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IMediaCapture>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IMediaCapture2>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IMediaCapture3>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IMediaCapture4>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IMediaCapture5>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IMediaCapture6>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IMediaCaptureFailedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IMediaCaptureFocusChangedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IMediaCaptureInitializationSettings>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IMediaCaptureInitializationSettings2>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IMediaCaptureInitializationSettings3>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IMediaCaptureInitializationSettings4>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IMediaCaptureInitializationSettings5>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IMediaCaptureInitializationSettings6>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IMediaCapturePauseResult>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IMediaCaptureSettings>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IMediaCaptureSettings2>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IMediaCaptureStatics>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IMediaCaptureStopResult>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IMediaCaptureVideoPreview>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IMediaCaptureVideoProfile>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IMediaCaptureVideoProfileMediaDescription>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IOptionalReferencePhotoCapturedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IPhotoCapturedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IPhotoConfirmationCapturedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IVideoStreamConfiguration>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::AdvancedCapturedPhoto>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::AdvancedPhotoCapture>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::AppCapture>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::CameraCaptureUI>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::CameraCaptureUIPhotoCaptureSettings>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::CameraCaptureUIVideoCaptureSettings>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::CapturedFrame>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::CapturedFrameControlValues>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::CapturedPhoto>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::LowLagMediaRecording>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::LowLagPhotoCapture>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::LowLagPhotoSequenceCapture>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::MediaCapture>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::MediaCaptureDeviceExclusiveControlStatusChangedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::MediaCaptureFailedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::MediaCaptureFocusChangedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::MediaCaptureInitializationSettings>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::MediaCapturePauseResult>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::MediaCaptureSettings>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::MediaCaptureStopResult>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::MediaCaptureVideoProfile>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::OptionalReferencePhotoCapturedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::PhotoCapturedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::PhotoConfirmationCapturedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::VideoStreamConfiguration>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::CameraCaptureUIMaxPhotoResolution>{ using type = enum_category; };
template <> struct category<Windows::Media::Capture::CameraCaptureUIMaxVideoResolution>{ using type = enum_category; };
template <> struct category<Windows::Media::Capture::CameraCaptureUIMode>{ using type = enum_category; };
template <> struct category<Windows::Media::Capture::CameraCaptureUIPhotoFormat>{ using type = enum_category; };
template <> struct category<Windows::Media::Capture::CameraCaptureUIVideoFormat>{ using type = enum_category; };
template <> struct category<Windows::Media::Capture::KnownVideoProfile>{ using type = enum_category; };
template <> struct category<Windows::Media::Capture::MediaCaptureDeviceExclusiveControlStatus>{ using type = enum_category; };
template <> struct category<Windows::Media::Capture::MediaCaptureMemoryPreference>{ using type = enum_category; };
template <> struct category<Windows::Media::Capture::MediaCaptureSharingMode>{ using type = enum_category; };
template <> struct category<Windows::Media::Capture::MediaCaptureThermalStatus>{ using type = enum_category; };
template <> struct category<Windows::Media::Capture::MediaCategory>{ using type = enum_category; };
template <> struct category<Windows::Media::Capture::MediaStreamType>{ using type = enum_category; };
template <> struct category<Windows::Media::Capture::PhotoCaptureSource>{ using type = enum_category; };
template <> struct category<Windows::Media::Capture::PowerlineFrequency>{ using type = enum_category; };
template <> struct category<Windows::Media::Capture::StreamingCaptureMode>{ using type = enum_category; };
template <> struct category<Windows::Media::Capture::VideoDeviceCharacteristic>{ using type = enum_category; };
template <> struct category<Windows::Media::Capture::VideoRotation>{ using type = enum_category; };
template <> struct category<Windows::Media::Capture::WhiteBalanceGain>{ using type = struct_category<double,double,double>; };
template <> struct category<Windows::Media::Capture::MediaCaptureFailedEventHandler>{ using type = delegate_category; };
template <> struct category<Windows::Media::Capture::RecordLimitationExceededEventHandler>{ using type = delegate_category; };
template <> struct name<Windows::Media::Capture::IAdvancedCapturedPhoto>{ static constexpr auto & value{ L"Windows.Media.Capture.IAdvancedCapturedPhoto" }; };
template <> struct name<Windows::Media::Capture::IAdvancedCapturedPhoto2>{ static constexpr auto & value{ L"Windows.Media.Capture.IAdvancedCapturedPhoto2" }; };
template <> struct name<Windows::Media::Capture::IAdvancedPhotoCapture>{ static constexpr auto & value{ L"Windows.Media.Capture.IAdvancedPhotoCapture" }; };
template <> struct name<Windows::Media::Capture::IAppCapture>{ static constexpr auto & value{ L"Windows.Media.Capture.IAppCapture" }; };
template <> struct name<Windows::Media::Capture::IAppCaptureStatics>{ static constexpr auto & value{ L"Windows.Media.Capture.IAppCaptureStatics" }; };
template <> struct name<Windows::Media::Capture::IAppCaptureStatics2>{ static constexpr auto & value{ L"Windows.Media.Capture.IAppCaptureStatics2" }; };
template <> struct name<Windows::Media::Capture::ICameraCaptureUI>{ static constexpr auto & value{ L"Windows.Media.Capture.ICameraCaptureUI" }; };
template <> struct name<Windows::Media::Capture::ICameraCaptureUIPhotoCaptureSettings>{ static constexpr auto & value{ L"Windows.Media.Capture.ICameraCaptureUIPhotoCaptureSettings" }; };
template <> struct name<Windows::Media::Capture::ICameraCaptureUIVideoCaptureSettings>{ static constexpr auto & value{ L"Windows.Media.Capture.ICameraCaptureUIVideoCaptureSettings" }; };
template <> struct name<Windows::Media::Capture::ICapturedFrame>{ static constexpr auto & value{ L"Windows.Media.Capture.ICapturedFrame" }; };
template <> struct name<Windows::Media::Capture::ICapturedFrameControlValues>{ static constexpr auto & value{ L"Windows.Media.Capture.ICapturedFrameControlValues" }; };
template <> struct name<Windows::Media::Capture::ICapturedFrameControlValues2>{ static constexpr auto & value{ L"Windows.Media.Capture.ICapturedFrameControlValues2" }; };
template <> struct name<Windows::Media::Capture::ICapturedFrameWithSoftwareBitmap>{ static constexpr auto & value{ L"Windows.Media.Capture.ICapturedFrameWithSoftwareBitmap" }; };
template <> struct name<Windows::Media::Capture::ICapturedPhoto>{ static constexpr auto & value{ L"Windows.Media.Capture.ICapturedPhoto" }; };
template <> struct name<Windows::Media::Capture::ILowLagMediaRecording>{ static constexpr auto & value{ L"Windows.Media.Capture.ILowLagMediaRecording" }; };
template <> struct name<Windows::Media::Capture::ILowLagMediaRecording2>{ static constexpr auto & value{ L"Windows.Media.Capture.ILowLagMediaRecording2" }; };
template <> struct name<Windows::Media::Capture::ILowLagMediaRecording3>{ static constexpr auto & value{ L"Windows.Media.Capture.ILowLagMediaRecording3" }; };
template <> struct name<Windows::Media::Capture::ILowLagPhotoCapture>{ static constexpr auto & value{ L"Windows.Media.Capture.ILowLagPhotoCapture" }; };
template <> struct name<Windows::Media::Capture::ILowLagPhotoSequenceCapture>{ static constexpr auto & value{ L"Windows.Media.Capture.ILowLagPhotoSequenceCapture" }; };
template <> struct name<Windows::Media::Capture::IMediaCapture>{ static constexpr auto & value{ L"Windows.Media.Capture.IMediaCapture" }; };
template <> struct name<Windows::Media::Capture::IMediaCapture2>{ static constexpr auto & value{ L"Windows.Media.Capture.IMediaCapture2" }; };
template <> struct name<Windows::Media::Capture::IMediaCapture3>{ static constexpr auto & value{ L"Windows.Media.Capture.IMediaCapture3" }; };
template <> struct name<Windows::Media::Capture::IMediaCapture4>{ static constexpr auto & value{ L"Windows.Media.Capture.IMediaCapture4" }; };
template <> struct name<Windows::Media::Capture::IMediaCapture5>{ static constexpr auto & value{ L"Windows.Media.Capture.IMediaCapture5" }; };
template <> struct name<Windows::Media::Capture::IMediaCapture6>{ static constexpr auto & value{ L"Windows.Media.Capture.IMediaCapture6" }; };
template <> struct name<Windows::Media::Capture::IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Capture.IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs" }; };
template <> struct name<Windows::Media::Capture::IMediaCaptureFailedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Capture.IMediaCaptureFailedEventArgs" }; };
template <> struct name<Windows::Media::Capture::IMediaCaptureFocusChangedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Capture.IMediaCaptureFocusChangedEventArgs" }; };
template <> struct name<Windows::Media::Capture::IMediaCaptureInitializationSettings>{ static constexpr auto & value{ L"Windows.Media.Capture.IMediaCaptureInitializationSettings" }; };
template <> struct name<Windows::Media::Capture::IMediaCaptureInitializationSettings2>{ static constexpr auto & value{ L"Windows.Media.Capture.IMediaCaptureInitializationSettings2" }; };
template <> struct name<Windows::Media::Capture::IMediaCaptureInitializationSettings3>{ static constexpr auto & value{ L"Windows.Media.Capture.IMediaCaptureInitializationSettings3" }; };
template <> struct name<Windows::Media::Capture::IMediaCaptureInitializationSettings4>{ static constexpr auto & value{ L"Windows.Media.Capture.IMediaCaptureInitializationSettings4" }; };
template <> struct name<Windows::Media::Capture::IMediaCaptureInitializationSettings5>{ static constexpr auto & value{ L"Windows.Media.Capture.IMediaCaptureInitializationSettings5" }; };
template <> struct name<Windows::Media::Capture::IMediaCaptureInitializationSettings6>{ static constexpr auto & value{ L"Windows.Media.Capture.IMediaCaptureInitializationSettings6" }; };
template <> struct name<Windows::Media::Capture::IMediaCapturePauseResult>{ static constexpr auto & value{ L"Windows.Media.Capture.IMediaCapturePauseResult" }; };
template <> struct name<Windows::Media::Capture::IMediaCaptureSettings>{ static constexpr auto & value{ L"Windows.Media.Capture.IMediaCaptureSettings" }; };
template <> struct name<Windows::Media::Capture::IMediaCaptureSettings2>{ static constexpr auto & value{ L"Windows.Media.Capture.IMediaCaptureSettings2" }; };
template <> struct name<Windows::Media::Capture::IMediaCaptureStatics>{ static constexpr auto & value{ L"Windows.Media.Capture.IMediaCaptureStatics" }; };
template <> struct name<Windows::Media::Capture::IMediaCaptureStopResult>{ static constexpr auto & value{ L"Windows.Media.Capture.IMediaCaptureStopResult" }; };
template <> struct name<Windows::Media::Capture::IMediaCaptureVideoPreview>{ static constexpr auto & value{ L"Windows.Media.Capture.IMediaCaptureVideoPreview" }; };
template <> struct name<Windows::Media::Capture::IMediaCaptureVideoProfile>{ static constexpr auto & value{ L"Windows.Media.Capture.IMediaCaptureVideoProfile" }; };
template <> struct name<Windows::Media::Capture::IMediaCaptureVideoProfileMediaDescription>{ static constexpr auto & value{ L"Windows.Media.Capture.IMediaCaptureVideoProfileMediaDescription" }; };
template <> struct name<Windows::Media::Capture::IOptionalReferencePhotoCapturedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Capture.IOptionalReferencePhotoCapturedEventArgs" }; };
template <> struct name<Windows::Media::Capture::IPhotoCapturedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Capture.IPhotoCapturedEventArgs" }; };
template <> struct name<Windows::Media::Capture::IPhotoConfirmationCapturedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Capture.IPhotoConfirmationCapturedEventArgs" }; };
template <> struct name<Windows::Media::Capture::IVideoStreamConfiguration>{ static constexpr auto & value{ L"Windows.Media.Capture.IVideoStreamConfiguration" }; };
template <> struct name<Windows::Media::Capture::AdvancedCapturedPhoto>{ static constexpr auto & value{ L"Windows.Media.Capture.AdvancedCapturedPhoto" }; };
template <> struct name<Windows::Media::Capture::AdvancedPhotoCapture>{ static constexpr auto & value{ L"Windows.Media.Capture.AdvancedPhotoCapture" }; };
template <> struct name<Windows::Media::Capture::AppCapture>{ static constexpr auto & value{ L"Windows.Media.Capture.AppCapture" }; };
template <> struct name<Windows::Media::Capture::CameraCaptureUI>{ static constexpr auto & value{ L"Windows.Media.Capture.CameraCaptureUI" }; };
template <> struct name<Windows::Media::Capture::CameraCaptureUIPhotoCaptureSettings>{ static constexpr auto & value{ L"Windows.Media.Capture.CameraCaptureUIPhotoCaptureSettings" }; };
template <> struct name<Windows::Media::Capture::CameraCaptureUIVideoCaptureSettings>{ static constexpr auto & value{ L"Windows.Media.Capture.CameraCaptureUIVideoCaptureSettings" }; };
template <> struct name<Windows::Media::Capture::CapturedFrame>{ static constexpr auto & value{ L"Windows.Media.Capture.CapturedFrame" }; };
template <> struct name<Windows::Media::Capture::CapturedFrameControlValues>{ static constexpr auto & value{ L"Windows.Media.Capture.CapturedFrameControlValues" }; };
template <> struct name<Windows::Media::Capture::CapturedPhoto>{ static constexpr auto & value{ L"Windows.Media.Capture.CapturedPhoto" }; };
template <> struct name<Windows::Media::Capture::LowLagMediaRecording>{ static constexpr auto & value{ L"Windows.Media.Capture.LowLagMediaRecording" }; };
template <> struct name<Windows::Media::Capture::LowLagPhotoCapture>{ static constexpr auto & value{ L"Windows.Media.Capture.LowLagPhotoCapture" }; };
template <> struct name<Windows::Media::Capture::LowLagPhotoSequenceCapture>{ static constexpr auto & value{ L"Windows.Media.Capture.LowLagPhotoSequenceCapture" }; };
template <> struct name<Windows::Media::Capture::MediaCapture>{ static constexpr auto & value{ L"Windows.Media.Capture.MediaCapture" }; };
template <> struct name<Windows::Media::Capture::MediaCaptureDeviceExclusiveControlStatusChangedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Capture.MediaCaptureDeviceExclusiveControlStatusChangedEventArgs" }; };
template <> struct name<Windows::Media::Capture::MediaCaptureFailedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Capture.MediaCaptureFailedEventArgs" }; };
template <> struct name<Windows::Media::Capture::MediaCaptureFocusChangedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Capture.MediaCaptureFocusChangedEventArgs" }; };
template <> struct name<Windows::Media::Capture::MediaCaptureInitializationSettings>{ static constexpr auto & value{ L"Windows.Media.Capture.MediaCaptureInitializationSettings" }; };
template <> struct name<Windows::Media::Capture::MediaCapturePauseResult>{ static constexpr auto & value{ L"Windows.Media.Capture.MediaCapturePauseResult" }; };
template <> struct name<Windows::Media::Capture::MediaCaptureSettings>{ static constexpr auto & value{ L"Windows.Media.Capture.MediaCaptureSettings" }; };
template <> struct name<Windows::Media::Capture::MediaCaptureStopResult>{ static constexpr auto & value{ L"Windows.Media.Capture.MediaCaptureStopResult" }; };
template <> struct name<Windows::Media::Capture::MediaCaptureVideoProfile>{ static constexpr auto & value{ L"Windows.Media.Capture.MediaCaptureVideoProfile" }; };
template <> struct name<Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription>{ static constexpr auto & value{ L"Windows.Media.Capture.MediaCaptureVideoProfileMediaDescription" }; };
template <> struct name<Windows::Media::Capture::OptionalReferencePhotoCapturedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Capture.OptionalReferencePhotoCapturedEventArgs" }; };
template <> struct name<Windows::Media::Capture::PhotoCapturedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Capture.PhotoCapturedEventArgs" }; };
template <> struct name<Windows::Media::Capture::PhotoConfirmationCapturedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Capture.PhotoConfirmationCapturedEventArgs" }; };
template <> struct name<Windows::Media::Capture::VideoStreamConfiguration>{ static constexpr auto & value{ L"Windows.Media.Capture.VideoStreamConfiguration" }; };
template <> struct name<Windows::Media::Capture::CameraCaptureUIMaxPhotoResolution>{ static constexpr auto & value{ L"Windows.Media.Capture.CameraCaptureUIMaxPhotoResolution" }; };
template <> struct name<Windows::Media::Capture::CameraCaptureUIMaxVideoResolution>{ static constexpr auto & value{ L"Windows.Media.Capture.CameraCaptureUIMaxVideoResolution" }; };
template <> struct name<Windows::Media::Capture::CameraCaptureUIMode>{ static constexpr auto & value{ L"Windows.Media.Capture.CameraCaptureUIMode" }; };
template <> struct name<Windows::Media::Capture::CameraCaptureUIPhotoFormat>{ static constexpr auto & value{ L"Windows.Media.Capture.CameraCaptureUIPhotoFormat" }; };
template <> struct name<Windows::Media::Capture::CameraCaptureUIVideoFormat>{ static constexpr auto & value{ L"Windows.Media.Capture.CameraCaptureUIVideoFormat" }; };
template <> struct name<Windows::Media::Capture::KnownVideoProfile>{ static constexpr auto & value{ L"Windows.Media.Capture.KnownVideoProfile" }; };
template <> struct name<Windows::Media::Capture::MediaCaptureDeviceExclusiveControlStatus>{ static constexpr auto & value{ L"Windows.Media.Capture.MediaCaptureDeviceExclusiveControlStatus" }; };
template <> struct name<Windows::Media::Capture::MediaCaptureMemoryPreference>{ static constexpr auto & value{ L"Windows.Media.Capture.MediaCaptureMemoryPreference" }; };
template <> struct name<Windows::Media::Capture::MediaCaptureSharingMode>{ static constexpr auto & value{ L"Windows.Media.Capture.MediaCaptureSharingMode" }; };
template <> struct name<Windows::Media::Capture::MediaCaptureThermalStatus>{ static constexpr auto & value{ L"Windows.Media.Capture.MediaCaptureThermalStatus" }; };
template <> struct name<Windows::Media::Capture::MediaCategory>{ static constexpr auto & value{ L"Windows.Media.Capture.MediaCategory" }; };
template <> struct name<Windows::Media::Capture::MediaStreamType>{ static constexpr auto & value{ L"Windows.Media.Capture.MediaStreamType" }; };
template <> struct name<Windows::Media::Capture::PhotoCaptureSource>{ static constexpr auto & value{ L"Windows.Media.Capture.PhotoCaptureSource" }; };
template <> struct name<Windows::Media::Capture::PowerlineFrequency>{ static constexpr auto & value{ L"Windows.Media.Capture.PowerlineFrequency" }; };
template <> struct name<Windows::Media::Capture::StreamingCaptureMode>{ static constexpr auto & value{ L"Windows.Media.Capture.StreamingCaptureMode" }; };
template <> struct name<Windows::Media::Capture::VideoDeviceCharacteristic>{ static constexpr auto & value{ L"Windows.Media.Capture.VideoDeviceCharacteristic" }; };
template <> struct name<Windows::Media::Capture::VideoRotation>{ static constexpr auto & value{ L"Windows.Media.Capture.VideoRotation" }; };
template <> struct name<Windows::Media::Capture::WhiteBalanceGain>{ static constexpr auto & value{ L"Windows.Media.Capture.WhiteBalanceGain" }; };
template <> struct name<Windows::Media::Capture::MediaCaptureFailedEventHandler>{ static constexpr auto & value{ L"Windows.Media.Capture.MediaCaptureFailedEventHandler" }; };
template <> struct name<Windows::Media::Capture::RecordLimitationExceededEventHandler>{ static constexpr auto & value{ L"Windows.Media.Capture.RecordLimitationExceededEventHandler" }; };
template <> struct guid<Windows::Media::Capture::IAdvancedCapturedPhoto>{ static constexpr GUID value{ 0xF072728B,0xB292,0x4491,{ 0x9D,0x41,0x99,0x80,0x7A,0x55,0x0B,0xBF } }; };
template <> struct guid<Windows::Media::Capture::IAdvancedCapturedPhoto2>{ static constexpr GUID value{ 0x18CF6CD8,0xCFFE,0x42D8,{ 0x81,0x04,0x01,0x7B,0xB3,0x18,0xF4,0xA1 } }; };
template <> struct guid<Windows::Media::Capture::IAdvancedPhotoCapture>{ static constexpr GUID value{ 0x83FFAAFA,0x6667,0x44DC,{ 0x97,0x3C,0xA6,0xBC,0xE5,0x96,0xAA,0x0F } }; };
template <> struct guid<Windows::Media::Capture::IAppCapture>{ static constexpr GUID value{ 0x9749D453,0xA29A,0x45ED,{ 0x8F,0x29,0x22,0xD0,0x99,0x42,0xCF,0xF7 } }; };
template <> struct guid<Windows::Media::Capture::IAppCaptureStatics>{ static constexpr GUID value{ 0xF922DD6C,0x0A7E,0x4E74,{ 0x8B,0x20,0x9C,0x1F,0x90,0x2D,0x08,0xA1 } }; };
template <> struct guid<Windows::Media::Capture::IAppCaptureStatics2>{ static constexpr GUID value{ 0xB2D881D4,0x836C,0x4DA4,{ 0xAF,0xD7,0xFA,0xCC,0x04,0x1E,0x1C,0xF3 } }; };
template <> struct guid<Windows::Media::Capture::ICameraCaptureUI>{ static constexpr GUID value{ 0x48587540,0x6F93,0x4BB4,{ 0xB8,0xF3,0xE8,0x9E,0x48,0x94,0x8C,0x91 } }; };
template <> struct guid<Windows::Media::Capture::ICameraCaptureUIPhotoCaptureSettings>{ static constexpr GUID value{ 0xB9F5BE97,0x3472,0x46A8,{ 0x8A,0x9E,0x04,0xCE,0x42,0xCC,0xC9,0x7D } }; };
template <> struct guid<Windows::Media::Capture::ICameraCaptureUIVideoCaptureSettings>{ static constexpr GUID value{ 0x64E92D1F,0xA28D,0x425A,{ 0xB8,0x4F,0xE5,0x68,0x33,0x5F,0xF2,0x4E } }; };
template <> struct guid<Windows::Media::Capture::ICapturedFrame>{ static constexpr GUID value{ 0x1DD2DE1F,0x571B,0x44D8,{ 0x8E,0x80,0xA0,0x8A,0x15,0x78,0x76,0x6E } }; };
template <> struct guid<Windows::Media::Capture::ICapturedFrameControlValues>{ static constexpr GUID value{ 0x90C65B7F,0x4E0D,0x4CA4,{ 0x88,0x2D,0x7A,0x14,0x4F,0xED,0x0A,0x90 } }; };
template <> struct guid<Windows::Media::Capture::ICapturedFrameControlValues2>{ static constexpr GUID value{ 0x500B2B88,0x06D2,0x4AA7,{ 0xA7,0xDB,0xD3,0x7A,0xF7,0x33,0x21,0xD8 } }; };
template <> struct guid<Windows::Media::Capture::ICapturedFrameWithSoftwareBitmap>{ static constexpr GUID value{ 0xB58E8B6E,0x8503,0x49B5,{ 0x9E,0x86,0x89,0x7D,0x26,0xA3,0xFF,0x3D } }; };
template <> struct guid<Windows::Media::Capture::ICapturedPhoto>{ static constexpr GUID value{ 0xB0CE7E5A,0xCFCC,0x4D6C,{ 0x8A,0xD1,0x08,0x69,0x20,0x8A,0xCA,0x16 } }; };
template <> struct guid<Windows::Media::Capture::ILowLagMediaRecording>{ static constexpr GUID value{ 0x41C8BAF7,0xFF3F,0x49F0,{ 0xA4,0x77,0xF1,0x95,0xE3,0xCE,0x51,0x08 } }; };
template <> struct guid<Windows::Media::Capture::ILowLagMediaRecording2>{ static constexpr GUID value{ 0x6369C758,0x5644,0x41E2,{ 0x97,0xAF,0x8E,0xF5,0x6A,0x25,0xE2,0x25 } }; };
template <> struct guid<Windows::Media::Capture::ILowLagMediaRecording3>{ static constexpr GUID value{ 0x5C33AB12,0x48F7,0x47DA,{ 0xB4,0x1E,0x90,0x88,0x0A,0x5F,0xE0,0xEC } }; };
template <> struct guid<Windows::Media::Capture::ILowLagPhotoCapture>{ static constexpr GUID value{ 0xA37251B7,0x6B44,0x473D,{ 0x8F,0x24,0xF7,0x03,0xD6,0xC0,0xEC,0x44 } }; };
template <> struct guid<Windows::Media::Capture::ILowLagPhotoSequenceCapture>{ static constexpr GUID value{ 0x7CC346BB,0xB9A9,0x4C91,{ 0x8F,0xFA,0x28,0x7E,0x9C,0x66,0x86,0x69 } }; };
template <> struct guid<Windows::Media::Capture::IMediaCapture>{ static constexpr GUID value{ 0xC61AFBB4,0xFB10,0x4A34,{ 0xAC,0x18,0xCA,0x80,0xD9,0xC8,0xE7,0xEE } }; };
template <> struct guid<Windows::Media::Capture::IMediaCapture2>{ static constexpr GUID value{ 0x9CC68260,0x7DA1,0x4043,{ 0xB6,0x52,0x21,0xB8,0x87,0x8D,0xAF,0xF9 } }; };
template <> struct guid<Windows::Media::Capture::IMediaCapture3>{ static constexpr GUID value{ 0xD4136F30,0x1564,0x466E,{ 0xBC,0x0A,0xAF,0x94,0xE0,0x2A,0xB0,0x16 } }; };
template <> struct guid<Windows::Media::Capture::IMediaCapture4>{ static constexpr GUID value{ 0xBACD6FD6,0xFB08,0x4947,{ 0xAE,0xA2,0xCE,0x14,0xEF,0xF0,0xCE,0x13 } }; };
template <> struct guid<Windows::Media::Capture::IMediaCapture5>{ static constexpr GUID value{ 0xDA787C22,0x3A9B,0x4720,{ 0xA7,0x1E,0x97,0x90,0x0A,0x31,0x6E,0x5A } }; };
template <> struct guid<Windows::Media::Capture::IMediaCapture6>{ static constexpr GUID value{ 0x228948BD,0x4B20,0x4BB1,{ 0x9F,0xD6,0xA5,0x83,0x21,0x2A,0x10,0x12 } }; };
template <> struct guid<Windows::Media::Capture::IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs>{ static constexpr GUID value{ 0x9D2F920D,0xA588,0x43C6,{ 0x89,0xD6,0x5A,0xD3,0x22,0xAF,0x00,0x6A } }; };
template <> struct guid<Windows::Media::Capture::IMediaCaptureFailedEventArgs>{ static constexpr GUID value{ 0x80FDE3F4,0x54C4,0x42C0,{ 0x8D,0x19,0xCE,0xA1,0xA8,0x7C,0xA1,0x8B } }; };
template <> struct guid<Windows::Media::Capture::IMediaCaptureFocusChangedEventArgs>{ static constexpr GUID value{ 0x81E1BC7F,0x2277,0x493E,{ 0xAB,0xEE,0xD3,0xF4,0x4F,0xF9,0x8C,0x04 } }; };
template <> struct guid<Windows::Media::Capture::IMediaCaptureInitializationSettings>{ static constexpr GUID value{ 0x9782BA70,0xEA65,0x4900,{ 0x93,0x56,0x8C,0xA8,0x87,0x72,0x68,0x84 } }; };
template <> struct guid<Windows::Media::Capture::IMediaCaptureInitializationSettings2>{ static constexpr GUID value{ 0x404E0626,0xC9DC,0x43E9,{ 0xAE,0xE4,0xE6,0xBF,0x1B,0x57,0xB4,0x4C } }; };
template <> struct guid<Windows::Media::Capture::IMediaCaptureInitializationSettings3>{ static constexpr GUID value{ 0x4160519D,0xBE48,0x4730,{ 0x81,0x04,0x0C,0xF6,0xE9,0xE9,0x79,0x48 } }; };
template <> struct guid<Windows::Media::Capture::IMediaCaptureInitializationSettings4>{ static constexpr GUID value{ 0xF502A537,0x4CB7,0x4D28,{ 0x95,0xED,0x4F,0x9F,0x01,0x2E,0x05,0x18 } }; };
template <> struct guid<Windows::Media::Capture::IMediaCaptureInitializationSettings5>{ static constexpr GUID value{ 0xD5A2E3B8,0x2626,0x4E94,{ 0xB7,0xB3,0x53,0x08,0xA0,0xF6,0x4B,0x1A } }; };
template <> struct guid<Windows::Media::Capture::IMediaCaptureInitializationSettings6>{ static constexpr GUID value{ 0xB2E26B47,0x3DB1,0x4D33,{ 0xAB,0x63,0x0F,0xFA,0x09,0x05,0x65,0x85 } }; };
template <> struct guid<Windows::Media::Capture::IMediaCapturePauseResult>{ static constexpr GUID value{ 0xAEC47CA3,0x4477,0x4B04,{ 0xA0,0x6F,0x2C,0x1C,0x51,0x82,0xFE,0x9D } }; };
template <> struct guid<Windows::Media::Capture::IMediaCaptureSettings>{ static constexpr GUID value{ 0x1D83AAFE,0x6D45,0x4477,{ 0x8D,0xC4,0xAC,0x5B,0xC0,0x1C,0x40,0x91 } }; };
template <> struct guid<Windows::Media::Capture::IMediaCaptureSettings2>{ static constexpr GUID value{ 0x6F9E7CFB,0xFA9F,0x4B13,{ 0x9C,0xBE,0x5A,0xB9,0x4F,0x1F,0x34,0x93 } }; };
template <> struct guid<Windows::Media::Capture::IMediaCaptureStatics>{ static constexpr GUID value{ 0xACEF81FF,0x99ED,0x4645,{ 0x96,0x5E,0x19,0x25,0xCF,0xC6,0x38,0x34 } }; };
template <> struct guid<Windows::Media::Capture::IMediaCaptureStopResult>{ static constexpr GUID value{ 0xF9DB6A2A,0xA092,0x4AD1,{ 0x97,0xD4,0xF2,0x01,0xF9,0xD0,0x82,0xDB } }; };
template <> struct guid<Windows::Media::Capture::IMediaCaptureVideoPreview>{ static constexpr GUID value{ 0x27727073,0x549E,0x447F,{ 0xA2,0x0A,0x4F,0x03,0xC4,0x79,0xD8,0xC0 } }; };
template <> struct guid<Windows::Media::Capture::IMediaCaptureVideoProfile>{ static constexpr GUID value{ 0x21A073BF,0xA3EE,0x4ECF,{ 0x9E,0xF6,0x50,0xB0,0xBC,0x4E,0x13,0x05 } }; };
template <> struct guid<Windows::Media::Capture::IMediaCaptureVideoProfileMediaDescription>{ static constexpr GUID value{ 0x8012AFEF,0xB691,0x49FF,{ 0x83,0xF2,0xC1,0xE7,0x6E,0xAA,0xEA,0x1B } }; };
template <> struct guid<Windows::Media::Capture::IOptionalReferencePhotoCapturedEventArgs>{ static constexpr GUID value{ 0x470F88B3,0x1E6D,0x4051,{ 0x9C,0x8B,0xF1,0xD8,0x5A,0xF0,0x47,0xB7 } }; };
template <> struct guid<Windows::Media::Capture::IPhotoCapturedEventArgs>{ static constexpr GUID value{ 0x373BFBC1,0x984E,0x4FF0,{ 0xBF,0x85,0x1C,0x00,0xAA,0xBC,0x5A,0x45 } }; };
template <> struct guid<Windows::Media::Capture::IPhotoConfirmationCapturedEventArgs>{ static constexpr GUID value{ 0xAB473672,0xC28A,0x4827,{ 0x8F,0x8D,0x36,0x36,0xD3,0xBE,0xB5,0x1E } }; };
template <> struct guid<Windows::Media::Capture::IVideoStreamConfiguration>{ static constexpr GUID value{ 0xD8770A6F,0x4390,0x4B5E,{ 0xAD,0x3E,0x0F,0x8A,0xF0,0x96,0x34,0x90 } }; };
template <> struct guid<Windows::Media::Capture::MediaCaptureFailedEventHandler>{ static constexpr GUID value{ 0x2014EFFB,0x5CD8,0x4F08,{ 0xA3,0x14,0x0D,0x36,0x0D,0xA5,0x9F,0x14 } }; };
template <> struct guid<Windows::Media::Capture::RecordLimitationExceededEventHandler>{ static constexpr GUID value{ 0x3FAE8F2E,0x4FE1,0x4FFD,{ 0xAA,0xBA,0xE1,0xF1,0x33,0x7D,0x4E,0x53 } }; };
template <> struct default_interface<Windows::Media::Capture::AdvancedCapturedPhoto>{ using type = Windows::Media::Capture::IAdvancedCapturedPhoto; };
template <> struct default_interface<Windows::Media::Capture::AdvancedPhotoCapture>{ using type = Windows::Media::Capture::IAdvancedPhotoCapture; };
template <> struct default_interface<Windows::Media::Capture::AppCapture>{ using type = Windows::Media::Capture::IAppCapture; };
template <> struct default_interface<Windows::Media::Capture::CameraCaptureUI>{ using type = Windows::Media::Capture::ICameraCaptureUI; };
template <> struct default_interface<Windows::Media::Capture::CameraCaptureUIPhotoCaptureSettings>{ using type = Windows::Media::Capture::ICameraCaptureUIPhotoCaptureSettings; };
template <> struct default_interface<Windows::Media::Capture::CameraCaptureUIVideoCaptureSettings>{ using type = Windows::Media::Capture::ICameraCaptureUIVideoCaptureSettings; };
template <> struct default_interface<Windows::Media::Capture::CapturedFrame>{ using type = Windows::Media::Capture::ICapturedFrame; };
template <> struct default_interface<Windows::Media::Capture::CapturedFrameControlValues>{ using type = Windows::Media::Capture::ICapturedFrameControlValues; };
template <> struct default_interface<Windows::Media::Capture::CapturedPhoto>{ using type = Windows::Media::Capture::ICapturedPhoto; };
template <> struct default_interface<Windows::Media::Capture::LowLagMediaRecording>{ using type = Windows::Media::Capture::ILowLagMediaRecording; };
template <> struct default_interface<Windows::Media::Capture::LowLagPhotoCapture>{ using type = Windows::Media::Capture::ILowLagPhotoCapture; };
template <> struct default_interface<Windows::Media::Capture::LowLagPhotoSequenceCapture>{ using type = Windows::Media::Capture::ILowLagPhotoSequenceCapture; };
template <> struct default_interface<Windows::Media::Capture::MediaCapture>{ using type = Windows::Media::Capture::IMediaCapture; };
template <> struct default_interface<Windows::Media::Capture::MediaCaptureDeviceExclusiveControlStatusChangedEventArgs>{ using type = Windows::Media::Capture::IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs; };
template <> struct default_interface<Windows::Media::Capture::MediaCaptureFailedEventArgs>{ using type = Windows::Media::Capture::IMediaCaptureFailedEventArgs; };
template <> struct default_interface<Windows::Media::Capture::MediaCaptureFocusChangedEventArgs>{ using type = Windows::Media::Capture::IMediaCaptureFocusChangedEventArgs; };
template <> struct default_interface<Windows::Media::Capture::MediaCaptureInitializationSettings>{ using type = Windows::Media::Capture::IMediaCaptureInitializationSettings; };
template <> struct default_interface<Windows::Media::Capture::MediaCapturePauseResult>{ using type = Windows::Media::Capture::IMediaCapturePauseResult; };
template <> struct default_interface<Windows::Media::Capture::MediaCaptureSettings>{ using type = Windows::Media::Capture::IMediaCaptureSettings; };
template <> struct default_interface<Windows::Media::Capture::MediaCaptureStopResult>{ using type = Windows::Media::Capture::IMediaCaptureStopResult; };
template <> struct default_interface<Windows::Media::Capture::MediaCaptureVideoProfile>{ using type = Windows::Media::Capture::IMediaCaptureVideoProfile; };
template <> struct default_interface<Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription>{ using type = Windows::Media::Capture::IMediaCaptureVideoProfileMediaDescription; };
template <> struct default_interface<Windows::Media::Capture::OptionalReferencePhotoCapturedEventArgs>{ using type = Windows::Media::Capture::IOptionalReferencePhotoCapturedEventArgs; };
template <> struct default_interface<Windows::Media::Capture::PhotoCapturedEventArgs>{ using type = Windows::Media::Capture::IPhotoCapturedEventArgs; };
template <> struct default_interface<Windows::Media::Capture::PhotoConfirmationCapturedEventArgs>{ using type = Windows::Media::Capture::IPhotoConfirmationCapturedEventArgs; };
template <> struct default_interface<Windows::Media::Capture::VideoStreamConfiguration>{ using type = Windows::Media::Capture::IVideoStreamConfiguration; };

template <typename D>
struct consume_Windows_Media_Capture_IAdvancedCapturedPhoto
{
    Windows::Media::Capture::CapturedFrame Frame() const;
    Windows::Media::Devices::AdvancedPhotoMode Mode() const;
    Windows::Foundation::IInspectable Context() const;
};
template <> struct consume<Windows::Media::Capture::IAdvancedCapturedPhoto> { template <typename D> using type = consume_Windows_Media_Capture_IAdvancedCapturedPhoto<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IAdvancedCapturedPhoto2
{
    Windows::Foundation::IReference<Windows::Foundation::Rect> FrameBoundsRelativeToReferencePhoto() const;
};
template <> struct consume<Windows::Media::Capture::IAdvancedCapturedPhoto2> { template <typename D> using type = consume_Windows_Media_Capture_IAdvancedCapturedPhoto2<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IAdvancedPhotoCapture
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::AdvancedCapturedPhoto> CaptureAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::AdvancedCapturedPhoto> CaptureAsync(Windows::Foundation::IInspectable const& context) const;
    event_token OptionalReferencePhotoCaptured(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AdvancedPhotoCapture, Windows::Media::Capture::OptionalReferencePhotoCapturedEventArgs> const& handler) const;
    using OptionalReferencePhotoCaptured_revoker = event_revoker<Windows::Media::Capture::IAdvancedPhotoCapture>;
    OptionalReferencePhotoCaptured_revoker OptionalReferencePhotoCaptured(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AdvancedPhotoCapture, Windows::Media::Capture::OptionalReferencePhotoCapturedEventArgs> const& handler) const;
    void OptionalReferencePhotoCaptured(event_token const& token) const;
    event_token AllPhotosCaptured(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AdvancedPhotoCapture, Windows::Foundation::IInspectable> const& handler) const;
    using AllPhotosCaptured_revoker = event_revoker<Windows::Media::Capture::IAdvancedPhotoCapture>;
    AllPhotosCaptured_revoker AllPhotosCaptured(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AdvancedPhotoCapture, Windows::Foundation::IInspectable> const& handler) const;
    void AllPhotosCaptured(event_token const& token) const;
    Windows::Foundation::IAsyncAction FinishAsync() const;
};
template <> struct consume<Windows::Media::Capture::IAdvancedPhotoCapture> { template <typename D> using type = consume_Windows_Media_Capture_IAdvancedPhotoCapture<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IAppCapture
{
    bool IsCapturingAudio() const;
    bool IsCapturingVideo() const;
    event_token CapturingChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCapture, Windows::Foundation::IInspectable> const& handler) const;
    using CapturingChanged_revoker = event_revoker<Windows::Media::Capture::IAppCapture>;
    CapturingChanged_revoker CapturingChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCapture, Windows::Foundation::IInspectable> const& handler) const;
    void CapturingChanged(event_token const& token) const;
};
template <> struct consume<Windows::Media::Capture::IAppCapture> { template <typename D> using type = consume_Windows_Media_Capture_IAppCapture<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IAppCaptureStatics
{
    Windows::Media::Capture::AppCapture GetForCurrentView() const;
};
template <> struct consume<Windows::Media::Capture::IAppCaptureStatics> { template <typename D> using type = consume_Windows_Media_Capture_IAppCaptureStatics<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IAppCaptureStatics2
{
    Windows::Foundation::IAsyncAction SetAllowedAsync(bool allowed) const;
};
template <> struct consume<Windows::Media::Capture::IAppCaptureStatics2> { template <typename D> using type = consume_Windows_Media_Capture_IAppCaptureStatics2<D>; };

template <typename D>
struct consume_Windows_Media_Capture_ICameraCaptureUI
{
    Windows::Media::Capture::CameraCaptureUIPhotoCaptureSettings PhotoSettings() const;
    Windows::Media::Capture::CameraCaptureUIVideoCaptureSettings VideoSettings() const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> CaptureFileAsync(Windows::Media::Capture::CameraCaptureUIMode const& mode) const;
};
template <> struct consume<Windows::Media::Capture::ICameraCaptureUI> { template <typename D> using type = consume_Windows_Media_Capture_ICameraCaptureUI<D>; };

template <typename D>
struct consume_Windows_Media_Capture_ICameraCaptureUIPhotoCaptureSettings
{
    Windows::Media::Capture::CameraCaptureUIPhotoFormat Format() const;
    void Format(Windows::Media::Capture::CameraCaptureUIPhotoFormat const& value) const;
    Windows::Media::Capture::CameraCaptureUIMaxPhotoResolution MaxResolution() const;
    void MaxResolution(Windows::Media::Capture::CameraCaptureUIMaxPhotoResolution const& value) const;
    Windows::Foundation::Size CroppedSizeInPixels() const;
    void CroppedSizeInPixels(Windows::Foundation::Size const& value) const;
    Windows::Foundation::Size CroppedAspectRatio() const;
    void CroppedAspectRatio(Windows::Foundation::Size const& value) const;
    bool AllowCropping() const;
    void AllowCropping(bool value) const;
};
template <> struct consume<Windows::Media::Capture::ICameraCaptureUIPhotoCaptureSettings> { template <typename D> using type = consume_Windows_Media_Capture_ICameraCaptureUIPhotoCaptureSettings<D>; };

template <typename D>
struct consume_Windows_Media_Capture_ICameraCaptureUIVideoCaptureSettings
{
    Windows::Media::Capture::CameraCaptureUIVideoFormat Format() const;
    void Format(Windows::Media::Capture::CameraCaptureUIVideoFormat const& value) const;
    Windows::Media::Capture::CameraCaptureUIMaxVideoResolution MaxResolution() const;
    void MaxResolution(Windows::Media::Capture::CameraCaptureUIMaxVideoResolution const& value) const;
    float MaxDurationInSeconds() const;
    void MaxDurationInSeconds(float value) const;
    bool AllowTrimming() const;
    void AllowTrimming(bool value) const;
};
template <> struct consume<Windows::Media::Capture::ICameraCaptureUIVideoCaptureSettings> { template <typename D> using type = consume_Windows_Media_Capture_ICameraCaptureUIVideoCaptureSettings<D>; };

template <typename D>
struct consume_Windows_Media_Capture_ICapturedFrame
{
    uint32_t Width() const;
    uint32_t Height() const;
};
template <> struct consume<Windows::Media::Capture::ICapturedFrame> { template <typename D> using type = consume_Windows_Media_Capture_ICapturedFrame<D>; };

template <typename D>
struct consume_Windows_Media_Capture_ICapturedFrameControlValues
{
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> Exposure() const;
    Windows::Foundation::IReference<float> ExposureCompensation() const;
    Windows::Foundation::IReference<uint32_t> IsoSpeed() const;
    Windows::Foundation::IReference<uint32_t> Focus() const;
    Windows::Foundation::IReference<Windows::Media::Devices::CaptureSceneMode> SceneMode() const;
    Windows::Foundation::IReference<bool> Flashed() const;
    Windows::Foundation::IReference<float> FlashPowerPercent() const;
    Windows::Foundation::IReference<uint32_t> WhiteBalance() const;
    Windows::Foundation::IReference<float> ZoomFactor() const;
};
template <> struct consume<Windows::Media::Capture::ICapturedFrameControlValues> { template <typename D> using type = consume_Windows_Media_Capture_ICapturedFrameControlValues<D>; };

template <typename D>
struct consume_Windows_Media_Capture_ICapturedFrameControlValues2
{
    Windows::Foundation::IReference<Windows::Media::Devices::MediaCaptureFocusState> FocusState() const;
    Windows::Foundation::IReference<double> IsoDigitalGain() const;
    Windows::Foundation::IReference<double> IsoAnalogGain() const;
    Windows::Media::MediaProperties::MediaRatio SensorFrameRate() const;
    Windows::Foundation::IReference<Windows::Media::Capture::WhiteBalanceGain> WhiteBalanceGain() const;
};
template <> struct consume<Windows::Media::Capture::ICapturedFrameControlValues2> { template <typename D> using type = consume_Windows_Media_Capture_ICapturedFrameControlValues2<D>; };

template <typename D>
struct consume_Windows_Media_Capture_ICapturedFrameWithSoftwareBitmap
{
    Windows::Graphics::Imaging::SoftwareBitmap SoftwareBitmap() const;
};
template <> struct consume<Windows::Media::Capture::ICapturedFrameWithSoftwareBitmap> { template <typename D> using type = consume_Windows_Media_Capture_ICapturedFrameWithSoftwareBitmap<D>; };

template <typename D>
struct consume_Windows_Media_Capture_ICapturedPhoto
{
    Windows::Media::Capture::CapturedFrame Frame() const;
    Windows::Media::Capture::CapturedFrame Thumbnail() const;
};
template <> struct consume<Windows::Media::Capture::ICapturedPhoto> { template <typename D> using type = consume_Windows_Media_Capture_ICapturedPhoto<D>; };

template <typename D>
struct consume_Windows_Media_Capture_ILowLagMediaRecording
{
    Windows::Foundation::IAsyncAction StartAsync() const;
    Windows::Foundation::IAsyncAction StopAsync() const;
    Windows::Foundation::IAsyncAction FinishAsync() const;
};
template <> struct consume<Windows::Media::Capture::ILowLagMediaRecording> { template <typename D> using type = consume_Windows_Media_Capture_ILowLagMediaRecording<D>; };

template <typename D>
struct consume_Windows_Media_Capture_ILowLagMediaRecording2
{
    Windows::Foundation::IAsyncAction PauseAsync(Windows::Media::Devices::MediaCapturePauseBehavior const& behavior) const;
    Windows::Foundation::IAsyncAction ResumeAsync() const;
};
template <> struct consume<Windows::Media::Capture::ILowLagMediaRecording2> { template <typename D> using type = consume_Windows_Media_Capture_ILowLagMediaRecording2<D>; };

template <typename D>
struct consume_Windows_Media_Capture_ILowLagMediaRecording3
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::MediaCapturePauseResult> PauseWithResultAsync(Windows::Media::Devices::MediaCapturePauseBehavior const& behavior) const;
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::MediaCaptureStopResult> StopWithResultAsync() const;
};
template <> struct consume<Windows::Media::Capture::ILowLagMediaRecording3> { template <typename D> using type = consume_Windows_Media_Capture_ILowLagMediaRecording3<D>; };

template <typename D>
struct consume_Windows_Media_Capture_ILowLagPhotoCapture
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::CapturedPhoto> CaptureAsync() const;
    Windows::Foundation::IAsyncAction FinishAsync() const;
};
template <> struct consume<Windows::Media::Capture::ILowLagPhotoCapture> { template <typename D> using type = consume_Windows_Media_Capture_ILowLagPhotoCapture<D>; };

template <typename D>
struct consume_Windows_Media_Capture_ILowLagPhotoSequenceCapture
{
    Windows::Foundation::IAsyncAction StartAsync() const;
    Windows::Foundation::IAsyncAction StopAsync() const;
    Windows::Foundation::IAsyncAction FinishAsync() const;
    event_token PhotoCaptured(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::LowLagPhotoSequenceCapture, Windows::Media::Capture::PhotoCapturedEventArgs> const& handler) const;
    using PhotoCaptured_revoker = event_revoker<Windows::Media::Capture::ILowLagPhotoSequenceCapture>;
    PhotoCaptured_revoker PhotoCaptured(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::LowLagPhotoSequenceCapture, Windows::Media::Capture::PhotoCapturedEventArgs> const& handler) const;
    void PhotoCaptured(event_token const& token) const;
};
template <> struct consume<Windows::Media::Capture::ILowLagPhotoSequenceCapture> { template <typename D> using type = consume_Windows_Media_Capture_ILowLagPhotoSequenceCapture<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IMediaCapture
{
    Windows::Foundation::IAsyncAction InitializeAsync() const;
    Windows::Foundation::IAsyncAction InitializeAsync(Windows::Media::Capture::MediaCaptureInitializationSettings const& mediaCaptureInitializationSettings) const;
    Windows::Foundation::IAsyncAction StartRecordToStorageFileAsync(Windows::Media::MediaProperties::MediaEncodingProfile const& encodingProfile, Windows::Storage::IStorageFile const& file) const;
    Windows::Foundation::IAsyncAction StartRecordToStreamAsync(Windows::Media::MediaProperties::MediaEncodingProfile const& encodingProfile, Windows::Storage::Streams::IRandomAccessStream const& stream) const;
    Windows::Foundation::IAsyncAction StartRecordToCustomSinkAsync(Windows::Media::MediaProperties::MediaEncodingProfile const& encodingProfile, Windows::Media::IMediaExtension const& customMediaSink) const;
    Windows::Foundation::IAsyncAction StartRecordToCustomSinkAsync(Windows::Media::MediaProperties::MediaEncodingProfile const& encodingProfile, param::hstring const& customSinkActivationId, Windows::Foundation::Collections::IPropertySet const& customSinkSettings) const;
    Windows::Foundation::IAsyncAction StopRecordAsync() const;
    Windows::Foundation::IAsyncAction CapturePhotoToStorageFileAsync(Windows::Media::MediaProperties::ImageEncodingProperties const& type, Windows::Storage::IStorageFile const& file) const;
    Windows::Foundation::IAsyncAction CapturePhotoToStreamAsync(Windows::Media::MediaProperties::ImageEncodingProperties const& type, Windows::Storage::Streams::IRandomAccessStream const& stream) const;
    [[deprecated("AddEffectAsync might not be available in future versions of Windows. Starting with Windows Threshold, use AddAudioEffectAsync and AddVideoEffectAsync instead")]] Windows::Foundation::IAsyncAction AddEffectAsync(Windows::Media::Capture::MediaStreamType const& mediaStreamType, param::hstring const& effectActivationID, Windows::Foundation::Collections::IPropertySet const& effectSettings) const;
    Windows::Foundation::IAsyncAction ClearEffectsAsync(Windows::Media::Capture::MediaStreamType const& mediaStreamType) const;
    void SetEncoderProperty(Windows::Media::Capture::MediaStreamType const& mediaStreamType, GUID const& propertyId, Windows::Foundation::IInspectable const& propertyValue) const;
    Windows::Foundation::IInspectable GetEncoderProperty(Windows::Media::Capture::MediaStreamType const& mediaStreamType, GUID const& propertyId) const;
    event_token Failed(Windows::Media::Capture::MediaCaptureFailedEventHandler const& errorEventHandler) const;
    using Failed_revoker = event_revoker<Windows::Media::Capture::IMediaCapture>;
    Failed_revoker Failed(auto_revoke_t, Windows::Media::Capture::MediaCaptureFailedEventHandler const& errorEventHandler) const;
    void Failed(event_token const& eventCookie) const;
    event_token RecordLimitationExceeded(Windows::Media::Capture::RecordLimitationExceededEventHandler const& recordLimitationExceededEventHandler) const;
    using RecordLimitationExceeded_revoker = event_revoker<Windows::Media::Capture::IMediaCapture>;
    RecordLimitationExceeded_revoker RecordLimitationExceeded(auto_revoke_t, Windows::Media::Capture::RecordLimitationExceededEventHandler const& recordLimitationExceededEventHandler) const;
    void RecordLimitationExceeded(event_token const& eventCookie) const;
    Windows::Media::Capture::MediaCaptureSettings MediaCaptureSettings() const;
    Windows::Media::Devices::AudioDeviceController AudioDeviceController() const;
    Windows::Media::Devices::VideoDeviceController VideoDeviceController() const;
    void SetPreviewMirroring(bool value) const;
    bool GetPreviewMirroring() const;
    void SetPreviewRotation(Windows::Media::Capture::VideoRotation const& value) const;
    Windows::Media::Capture::VideoRotation GetPreviewRotation() const;
    void SetRecordRotation(Windows::Media::Capture::VideoRotation const& value) const;
    Windows::Media::Capture::VideoRotation GetRecordRotation() const;
};
template <> struct consume<Windows::Media::Capture::IMediaCapture> { template <typename D> using type = consume_Windows_Media_Capture_IMediaCapture<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IMediaCapture2
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagMediaRecording> PrepareLowLagRecordToStorageFileAsync(Windows::Media::MediaProperties::MediaEncodingProfile const& encodingProfile, Windows::Storage::IStorageFile const& file) const;
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagMediaRecording> PrepareLowLagRecordToStreamAsync(Windows::Media::MediaProperties::MediaEncodingProfile const& encodingProfile, Windows::Storage::Streams::IRandomAccessStream const& stream) const;
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagMediaRecording> PrepareLowLagRecordToCustomSinkAsync(Windows::Media::MediaProperties::MediaEncodingProfile const& encodingProfile, Windows::Media::IMediaExtension const& customMediaSink) const;
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagMediaRecording> PrepareLowLagRecordToCustomSinkAsync(Windows::Media::MediaProperties::MediaEncodingProfile const& encodingProfile, param::hstring const& customSinkActivationId, Windows::Foundation::Collections::IPropertySet const& customSinkSettings) const;
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagPhotoCapture> PrepareLowLagPhotoCaptureAsync(Windows::Media::MediaProperties::ImageEncodingProperties const& type) const;
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagPhotoSequenceCapture> PrepareLowLagPhotoSequenceCaptureAsync(Windows::Media::MediaProperties::ImageEncodingProperties const& type) const;
    Windows::Foundation::IAsyncAction SetEncodingPropertiesAsync(Windows::Media::Capture::MediaStreamType const& mediaStreamType, Windows::Media::MediaProperties::IMediaEncodingProperties const& mediaEncodingProperties, Windows::Media::MediaProperties::MediaPropertySet const& encoderProperties) const;
};
template <> struct consume<Windows::Media::Capture::IMediaCapture2> { template <typename D> using type = consume_Windows_Media_Capture_IMediaCapture2<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IMediaCapture3
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Core::VariablePhotoSequenceCapture> PrepareVariablePhotoSequenceCaptureAsync(Windows::Media::MediaProperties::ImageEncodingProperties const& type) const;
    event_token FocusChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Media::Capture::MediaCaptureFocusChangedEventArgs> const& handler) const;
    using FocusChanged_revoker = event_revoker<Windows::Media::Capture::IMediaCapture3>;
    FocusChanged_revoker FocusChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Media::Capture::MediaCaptureFocusChangedEventArgs> const& handler) const;
    void FocusChanged(event_token const& token) const;
    event_token PhotoConfirmationCaptured(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Media::Capture::PhotoConfirmationCapturedEventArgs> const& handler) const;
    using PhotoConfirmationCaptured_revoker = event_revoker<Windows::Media::Capture::IMediaCapture3>;
    PhotoConfirmationCaptured_revoker PhotoConfirmationCaptured(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Media::Capture::PhotoConfirmationCapturedEventArgs> const& handler) const;
    void PhotoConfirmationCaptured(event_token const& token) const;
};
template <> struct consume<Windows::Media::Capture::IMediaCapture3> { template <typename D> using type = consume_Windows_Media_Capture_IMediaCapture3<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IMediaCapture4
{
    Windows::Foundation::IAsyncOperation<Windows::Media::IMediaExtension> AddAudioEffectAsync(Windows::Media::Effects::IAudioEffectDefinition const& definition) const;
    Windows::Foundation::IAsyncOperation<Windows::Media::IMediaExtension> AddVideoEffectAsync(Windows::Media::Effects::IVideoEffectDefinition const& definition, Windows::Media::Capture::MediaStreamType const& mediaStreamType) const;
    Windows::Foundation::IAsyncAction PauseRecordAsync(Windows::Media::Devices::MediaCapturePauseBehavior const& behavior) const;
    Windows::Foundation::IAsyncAction ResumeRecordAsync() const;
    event_token CameraStreamStateChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Foundation::IInspectable> const& handler) const;
    using CameraStreamStateChanged_revoker = event_revoker<Windows::Media::Capture::IMediaCapture4>;
    CameraStreamStateChanged_revoker CameraStreamStateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Foundation::IInspectable> const& handler) const;
    void CameraStreamStateChanged(event_token const& token) const;
    Windows::Media::Devices::CameraStreamState CameraStreamState() const;
    Windows::Foundation::IAsyncOperation<Windows::Media::VideoFrame> GetPreviewFrameAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Media::VideoFrame> GetPreviewFrameAsync(Windows::Media::VideoFrame const& destination) const;
    event_token ThermalStatusChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Foundation::IInspectable> const& handler) const;
    using ThermalStatusChanged_revoker = event_revoker<Windows::Media::Capture::IMediaCapture4>;
    ThermalStatusChanged_revoker ThermalStatusChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Foundation::IInspectable> const& handler) const;
    void ThermalStatusChanged(event_token const& token) const;
    Windows::Media::Capture::MediaCaptureThermalStatus ThermalStatus() const;
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::AdvancedPhotoCapture> PrepareAdvancedPhotoCaptureAsync(Windows::Media::MediaProperties::ImageEncodingProperties const& encodingProperties) const;
};
template <> struct consume<Windows::Media::Capture::IMediaCapture4> { template <typename D> using type = consume_Windows_Media_Capture_IMediaCapture4<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IMediaCapture5
{
    Windows::Foundation::IAsyncAction RemoveEffectAsync(Windows::Media::IMediaExtension const& effect) const;
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::MediaCapturePauseResult> PauseRecordWithResultAsync(Windows::Media::Devices::MediaCapturePauseBehavior const& behavior) const;
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::MediaCaptureStopResult> StopRecordWithResultAsync() const;
    Windows::Foundation::Collections::IMapView<hstring, Windows::Media::Capture::Frames::MediaFrameSource> FrameSources() const;
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MediaFrameReader> CreateFrameReaderAsync(Windows::Media::Capture::Frames::MediaFrameSource const& inputSource) const;
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MediaFrameReader> CreateFrameReaderAsync(Windows::Media::Capture::Frames::MediaFrameSource const& inputSource, param::hstring const& outputSubtype) const;
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MediaFrameReader> CreateFrameReaderAsync(Windows::Media::Capture::Frames::MediaFrameSource const& inputSource, param::hstring const& outputSubtype, Windows::Graphics::Imaging::BitmapSize const& outputSize) const;
};
template <> struct consume<Windows::Media::Capture::IMediaCapture5> { template <typename D> using type = consume_Windows_Media_Capture_IMediaCapture5<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IMediaCapture6
{
    event_token CaptureDeviceExclusiveControlStatusChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Media::Capture::MediaCaptureDeviceExclusiveControlStatusChangedEventArgs> const& handler) const;
    using CaptureDeviceExclusiveControlStatusChanged_revoker = event_revoker<Windows::Media::Capture::IMediaCapture6>;
    CaptureDeviceExclusiveControlStatusChanged_revoker CaptureDeviceExclusiveControlStatusChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Media::Capture::MediaCaptureDeviceExclusiveControlStatusChangedEventArgs> const& handler) const;
    void CaptureDeviceExclusiveControlStatusChanged(event_token const& token) const;
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MultiSourceMediaFrameReader> CreateMultiSourceFrameReaderAsync(param::async_iterable<Windows::Media::Capture::Frames::MediaFrameSource> const& inputSources) const;
};
template <> struct consume<Windows::Media::Capture::IMediaCapture6> { template <typename D> using type = consume_Windows_Media_Capture_IMediaCapture6<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs
{
    hstring DeviceId() const;
    Windows::Media::Capture::MediaCaptureDeviceExclusiveControlStatus Status() const;
};
template <> struct consume<Windows::Media::Capture::IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs> { template <typename D> using type = consume_Windows_Media_Capture_IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IMediaCaptureFailedEventArgs
{
    hstring Message() const;
    uint32_t Code() const;
};
template <> struct consume<Windows::Media::Capture::IMediaCaptureFailedEventArgs> { template <typename D> using type = consume_Windows_Media_Capture_IMediaCaptureFailedEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IMediaCaptureFocusChangedEventArgs
{
    Windows::Media::Devices::MediaCaptureFocusState FocusState() const;
};
template <> struct consume<Windows::Media::Capture::IMediaCaptureFocusChangedEventArgs> { template <typename D> using type = consume_Windows_Media_Capture_IMediaCaptureFocusChangedEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IMediaCaptureInitializationSettings
{
    void AudioDeviceId(param::hstring const& value) const;
    hstring AudioDeviceId() const;
    void VideoDeviceId(param::hstring const& value) const;
    hstring VideoDeviceId() const;
    void StreamingCaptureMode(Windows::Media::Capture::StreamingCaptureMode const& value) const;
    Windows::Media::Capture::StreamingCaptureMode StreamingCaptureMode() const;
    void PhotoCaptureSource(Windows::Media::Capture::PhotoCaptureSource const& value) const;
    Windows::Media::Capture::PhotoCaptureSource PhotoCaptureSource() const;
};
template <> struct consume<Windows::Media::Capture::IMediaCaptureInitializationSettings> { template <typename D> using type = consume_Windows_Media_Capture_IMediaCaptureInitializationSettings<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IMediaCaptureInitializationSettings2
{
    void MediaCategory(Windows::Media::Capture::MediaCategory const& value) const;
    Windows::Media::Capture::MediaCategory MediaCategory() const;
    void AudioProcessing(Windows::Media::AudioProcessing const& value) const;
    Windows::Media::AudioProcessing AudioProcessing() const;
};
template <> struct consume<Windows::Media::Capture::IMediaCaptureInitializationSettings2> { template <typename D> using type = consume_Windows_Media_Capture_IMediaCaptureInitializationSettings2<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IMediaCaptureInitializationSettings3
{
    void AudioSource(Windows::Media::Core::IMediaSource const& value) const;
    Windows::Media::Core::IMediaSource AudioSource() const;
    void VideoSource(Windows::Media::Core::IMediaSource const& value) const;
    Windows::Media::Core::IMediaSource VideoSource() const;
};
template <> struct consume<Windows::Media::Capture::IMediaCaptureInitializationSettings3> { template <typename D> using type = consume_Windows_Media_Capture_IMediaCaptureInitializationSettings3<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IMediaCaptureInitializationSettings4
{
    Windows::Media::Capture::MediaCaptureVideoProfile VideoProfile() const;
    void VideoProfile(Windows::Media::Capture::MediaCaptureVideoProfile const& value) const;
    Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription PreviewMediaDescription() const;
    void PreviewMediaDescription(Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription const& value) const;
    Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription RecordMediaDescription() const;
    void RecordMediaDescription(Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription const& value) const;
    Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription PhotoMediaDescription() const;
    void PhotoMediaDescription(Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription const& value) const;
};
template <> struct consume<Windows::Media::Capture::IMediaCaptureInitializationSettings4> { template <typename D> using type = consume_Windows_Media_Capture_IMediaCaptureInitializationSettings4<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IMediaCaptureInitializationSettings5
{
    Windows::Media::Capture::Frames::MediaFrameSourceGroup SourceGroup() const;
    void SourceGroup(Windows::Media::Capture::Frames::MediaFrameSourceGroup const& value) const;
    Windows::Media::Capture::MediaCaptureSharingMode SharingMode() const;
    void SharingMode(Windows::Media::Capture::MediaCaptureSharingMode const& value) const;
    Windows::Media::Capture::MediaCaptureMemoryPreference MemoryPreference() const;
    void MemoryPreference(Windows::Media::Capture::MediaCaptureMemoryPreference const& value) const;
};
template <> struct consume<Windows::Media::Capture::IMediaCaptureInitializationSettings5> { template <typename D> using type = consume_Windows_Media_Capture_IMediaCaptureInitializationSettings5<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IMediaCaptureInitializationSettings6
{
    bool AlwaysPlaySystemShutterSound() const;
    void AlwaysPlaySystemShutterSound(bool value) const;
};
template <> struct consume<Windows::Media::Capture::IMediaCaptureInitializationSettings6> { template <typename D> using type = consume_Windows_Media_Capture_IMediaCaptureInitializationSettings6<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IMediaCapturePauseResult
{
    Windows::Media::VideoFrame LastFrame() const;
    Windows::Foundation::TimeSpan RecordDuration() const;
};
template <> struct consume<Windows::Media::Capture::IMediaCapturePauseResult> { template <typename D> using type = consume_Windows_Media_Capture_IMediaCapturePauseResult<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IMediaCaptureSettings
{
    hstring AudioDeviceId() const;
    hstring VideoDeviceId() const;
    Windows::Media::Capture::StreamingCaptureMode StreamingCaptureMode() const;
    Windows::Media::Capture::PhotoCaptureSource PhotoCaptureSource() const;
    Windows::Media::Capture::VideoDeviceCharacteristic VideoDeviceCharacteristic() const;
};
template <> struct consume<Windows::Media::Capture::IMediaCaptureSettings> { template <typename D> using type = consume_Windows_Media_Capture_IMediaCaptureSettings<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IMediaCaptureSettings2
{
    bool ConcurrentRecordAndPhotoSupported() const;
    bool ConcurrentRecordAndPhotoSequenceSupported() const;
    bool CameraSoundRequiredForRegion() const;
    Windows::Foundation::IReference<uint32_t> Horizontal35mmEquivalentFocalLength() const;
    Windows::Foundation::IReference<int32_t> PitchOffsetDegrees() const;
    Windows::Foundation::IReference<uint32_t> Vertical35mmEquivalentFocalLength() const;
    Windows::Media::Capture::MediaCategory MediaCategory() const;
    Windows::Media::AudioProcessing AudioProcessing() const;
};
template <> struct consume<Windows::Media::Capture::IMediaCaptureSettings2> { template <typename D> using type = consume_Windows_Media_Capture_IMediaCaptureSettings2<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IMediaCaptureStatics
{
    bool IsVideoProfileSupported(param::hstring const& videoDeviceId) const;
    Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfile> FindAllVideoProfiles(param::hstring const& videoDeviceId) const;
    Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfile> FindConcurrentProfiles(param::hstring const& videoDeviceId) const;
    Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfile> FindKnownVideoProfiles(param::hstring const& videoDeviceId, Windows::Media::Capture::KnownVideoProfile const& name) const;
};
template <> struct consume<Windows::Media::Capture::IMediaCaptureStatics> { template <typename D> using type = consume_Windows_Media_Capture_IMediaCaptureStatics<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IMediaCaptureStopResult
{
    Windows::Media::VideoFrame LastFrame() const;
    Windows::Foundation::TimeSpan RecordDuration() const;
};
template <> struct consume<Windows::Media::Capture::IMediaCaptureStopResult> { template <typename D> using type = consume_Windows_Media_Capture_IMediaCaptureStopResult<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IMediaCaptureVideoPreview
{
    Windows::Foundation::IAsyncAction StartPreviewAsync() const;
    Windows::Foundation::IAsyncAction StartPreviewToCustomSinkAsync(Windows::Media::MediaProperties::MediaEncodingProfile const& encodingProfile, Windows::Media::IMediaExtension const& customMediaSink) const;
    Windows::Foundation::IAsyncAction StartPreviewToCustomSinkAsync(Windows::Media::MediaProperties::MediaEncodingProfile const& encodingProfile, param::hstring const& customSinkActivationId, Windows::Foundation::Collections::IPropertySet const& customSinkSettings) const;
    Windows::Foundation::IAsyncAction StopPreviewAsync() const;
};
template <> struct consume<Windows::Media::Capture::IMediaCaptureVideoPreview> { template <typename D> using type = consume_Windows_Media_Capture_IMediaCaptureVideoPreview<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IMediaCaptureVideoProfile
{
    hstring Id() const;
    hstring VideoDeviceId() const;
    Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription> SupportedPreviewMediaDescription() const;
    Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription> SupportedRecordMediaDescription() const;
    Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription> SupportedPhotoMediaDescription() const;
    Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfile> GetConcurrency() const;
};
template <> struct consume<Windows::Media::Capture::IMediaCaptureVideoProfile> { template <typename D> using type = consume_Windows_Media_Capture_IMediaCaptureVideoProfile<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IMediaCaptureVideoProfileMediaDescription
{
    uint32_t Width() const;
    uint32_t Height() const;
    double FrameRate() const;
    bool IsVariablePhotoSequenceSupported() const;
    bool IsHdrVideoSupported() const;
};
template <> struct consume<Windows::Media::Capture::IMediaCaptureVideoProfileMediaDescription> { template <typename D> using type = consume_Windows_Media_Capture_IMediaCaptureVideoProfileMediaDescription<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IOptionalReferencePhotoCapturedEventArgs
{
    Windows::Media::Capture::CapturedFrame Frame() const;
    Windows::Foundation::IInspectable Context() const;
};
template <> struct consume<Windows::Media::Capture::IOptionalReferencePhotoCapturedEventArgs> { template <typename D> using type = consume_Windows_Media_Capture_IOptionalReferencePhotoCapturedEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IPhotoCapturedEventArgs
{
    Windows::Media::Capture::CapturedFrame Frame() const;
    Windows::Media::Capture::CapturedFrame Thumbnail() const;
    Windows::Foundation::TimeSpan CaptureTimeOffset() const;
};
template <> struct consume<Windows::Media::Capture::IPhotoCapturedEventArgs> { template <typename D> using type = consume_Windows_Media_Capture_IPhotoCapturedEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IPhotoConfirmationCapturedEventArgs
{
    Windows::Media::Capture::CapturedFrame Frame() const;
    Windows::Foundation::TimeSpan CaptureTimeOffset() const;
};
template <> struct consume<Windows::Media::Capture::IPhotoConfirmationCapturedEventArgs> { template <typename D> using type = consume_Windows_Media_Capture_IPhotoConfirmationCapturedEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IVideoStreamConfiguration
{
    Windows::Media::MediaProperties::VideoEncodingProperties InputProperties() const;
    Windows::Media::MediaProperties::VideoEncodingProperties OutputProperties() const;
};
template <> struct consume<Windows::Media::Capture::IVideoStreamConfiguration> { template <typename D> using type = consume_Windows_Media_Capture_IVideoStreamConfiguration<D>; };

template <> struct abi<Windows::Media::Capture::IAdvancedCapturedPhoto>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Frame(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Mode(Windows::Media::Devices::AdvancedPhotoMode* value) = 0;
    virtual HRESULT __stdcall get_Context(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::Capture::IAdvancedCapturedPhoto2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_FrameBoundsRelativeToReferencePhoto(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::Capture::IAdvancedPhotoCapture>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CaptureAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall CaptureWithContextAsync(::IUnknown* context, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall add_OptionalReferencePhotoCaptured(::IUnknown* handler, event_token* token) = 0;
    virtual HRESULT __stdcall remove_OptionalReferencePhotoCaptured(event_token token) = 0;
    virtual HRESULT __stdcall add_AllPhotosCaptured(::IUnknown* handler, event_token* token) = 0;
    virtual HRESULT __stdcall remove_AllPhotosCaptured(event_token token) = 0;
    virtual HRESULT __stdcall FinishAsync(::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Media::Capture::IAppCapture>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsCapturingAudio(bool* value) = 0;
    virtual HRESULT __stdcall get_IsCapturingVideo(bool* value) = 0;
    virtual HRESULT __stdcall add_CapturingChanged(::IUnknown* handler, event_token* token) = 0;
    virtual HRESULT __stdcall remove_CapturingChanged(event_token token) = 0;
};};

template <> struct abi<Windows::Media::Capture::IAppCaptureStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetForCurrentView(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::Capture::IAppCaptureStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall SetAllowedAsync(bool allowed, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Media::Capture::ICameraCaptureUI>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_PhotoSettings(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_VideoSettings(::IUnknown** value) = 0;
    virtual HRESULT __stdcall CaptureFileAsync(Windows::Media::Capture::CameraCaptureUIMode mode, ::IUnknown** asyncInfo) = 0;
};};

template <> struct abi<Windows::Media::Capture::ICameraCaptureUIPhotoCaptureSettings>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Format(Windows::Media::Capture::CameraCaptureUIPhotoFormat* value) = 0;
    virtual HRESULT __stdcall put_Format(Windows::Media::Capture::CameraCaptureUIPhotoFormat value) = 0;
    virtual HRESULT __stdcall get_MaxResolution(Windows::Media::Capture::CameraCaptureUIMaxPhotoResolution* value) = 0;
    virtual HRESULT __stdcall put_MaxResolution(Windows::Media::Capture::CameraCaptureUIMaxPhotoResolution value) = 0;
    virtual HRESULT __stdcall get_CroppedSizeInPixels(Windows::Foundation::Size* value) = 0;
    virtual HRESULT __stdcall put_CroppedSizeInPixels(Windows::Foundation::Size value) = 0;
    virtual HRESULT __stdcall get_CroppedAspectRatio(Windows::Foundation::Size* value) = 0;
    virtual HRESULT __stdcall put_CroppedAspectRatio(Windows::Foundation::Size value) = 0;
    virtual HRESULT __stdcall get_AllowCropping(bool* value) = 0;
    virtual HRESULT __stdcall put_AllowCropping(bool value) = 0;
};};

template <> struct abi<Windows::Media::Capture::ICameraCaptureUIVideoCaptureSettings>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Format(Windows::Media::Capture::CameraCaptureUIVideoFormat* value) = 0;
    virtual HRESULT __stdcall put_Format(Windows::Media::Capture::CameraCaptureUIVideoFormat value) = 0;
    virtual HRESULT __stdcall get_MaxResolution(Windows::Media::Capture::CameraCaptureUIMaxVideoResolution* value) = 0;
    virtual HRESULT __stdcall put_MaxResolution(Windows::Media::Capture::CameraCaptureUIMaxVideoResolution value) = 0;
    virtual HRESULT __stdcall get_MaxDurationInSeconds(float* value) = 0;
    virtual HRESULT __stdcall put_MaxDurationInSeconds(float value) = 0;
    virtual HRESULT __stdcall get_AllowTrimming(bool* value) = 0;
    virtual HRESULT __stdcall put_AllowTrimming(bool value) = 0;
};};

template <> struct abi<Windows::Media::Capture::ICapturedFrame>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Width(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_Height(uint32_t* value) = 0;
};};

template <> struct abi<Windows::Media::Capture::ICapturedFrameControlValues>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Exposure(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ExposureCompensation(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_IsoSpeed(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Focus(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_SceneMode(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Flashed(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_FlashPowerPercent(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_WhiteBalance(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ZoomFactor(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::Capture::ICapturedFrameControlValues2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_FocusState(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_IsoDigitalGain(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_IsoAnalogGain(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_SensorFrameRate(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_WhiteBalanceGain(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::Capture::ICapturedFrameWithSoftwareBitmap>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_SoftwareBitmap(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::Capture::ICapturedPhoto>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Frame(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Thumbnail(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::Capture::ILowLagMediaRecording>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall StartAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall StopAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall FinishAsync(::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Media::Capture::ILowLagMediaRecording2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall PauseAsync(Windows::Media::Devices::MediaCapturePauseBehavior behavior, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall ResumeAsync(::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Media::Capture::ILowLagMediaRecording3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall PauseWithResultAsync(Windows::Media::Devices::MediaCapturePauseBehavior behavior, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall StopWithResultAsync(::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Media::Capture::ILowLagPhotoCapture>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CaptureAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall FinishAsync(::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Media::Capture::ILowLagPhotoSequenceCapture>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall StartAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall StopAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall FinishAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall add_PhotoCaptured(::IUnknown* handler, event_token* token) = 0;
    virtual HRESULT __stdcall remove_PhotoCaptured(event_token token) = 0;
};};

template <> struct abi<Windows::Media::Capture::IMediaCapture>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall InitializeAsync(::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall InitializeWithSettingsAsync(::IUnknown* mediaCaptureInitializationSettings, ::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall StartRecordToStorageFileAsync(::IUnknown* encodingProfile, ::IUnknown* file, ::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall StartRecordToStreamAsync(::IUnknown* encodingProfile, ::IUnknown* stream, ::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall StartRecordToCustomSinkAsync(::IUnknown* encodingProfile, ::IUnknown* customMediaSink, ::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall StartRecordToCustomSinkIdAsync(::IUnknown* encodingProfile, HSTRING customSinkActivationId, ::IUnknown* customSinkSettings, ::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall StopRecordAsync(::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall CapturePhotoToStorageFileAsync(::IUnknown* type, ::IUnknown* file, ::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall CapturePhotoToStreamAsync(::IUnknown* type, ::IUnknown* stream, ::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall AddEffectAsync(Windows::Media::Capture::MediaStreamType mediaStreamType, HSTRING effectActivationID, ::IUnknown* effectSettings, ::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall ClearEffectsAsync(Windows::Media::Capture::MediaStreamType mediaStreamType, ::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall SetEncoderProperty(Windows::Media::Capture::MediaStreamType mediaStreamType, GUID propertyId, ::IUnknown* propertyValue) = 0;
    virtual HRESULT __stdcall GetEncoderProperty(Windows::Media::Capture::MediaStreamType mediaStreamType, GUID propertyId, ::IUnknown** propertyValue) = 0;
    virtual HRESULT __stdcall add_Failed(::IUnknown* errorEventHandler, event_token* eventCookie) = 0;
    virtual HRESULT __stdcall remove_Failed(event_token eventCookie) = 0;
    virtual HRESULT __stdcall add_RecordLimitationExceeded(::IUnknown* recordLimitationExceededEventHandler, event_token* eventCookie) = 0;
    virtual HRESULT __stdcall remove_RecordLimitationExceeded(event_token eventCookie) = 0;
    virtual HRESULT __stdcall get_MediaCaptureSettings(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_AudioDeviceController(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_VideoDeviceController(::IUnknown** value) = 0;
    virtual HRESULT __stdcall SetPreviewMirroring(bool value) = 0;
    virtual HRESULT __stdcall GetPreviewMirroring(bool* value) = 0;
    virtual HRESULT __stdcall SetPreviewRotation(Windows::Media::Capture::VideoRotation value) = 0;
    virtual HRESULT __stdcall GetPreviewRotation(Windows::Media::Capture::VideoRotation* value) = 0;
    virtual HRESULT __stdcall SetRecordRotation(Windows::Media::Capture::VideoRotation value) = 0;
    virtual HRESULT __stdcall GetRecordRotation(Windows::Media::Capture::VideoRotation* value) = 0;
};};

template <> struct abi<Windows::Media::Capture::IMediaCapture2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall PrepareLowLagRecordToStorageFileAsync(::IUnknown* encodingProfile, ::IUnknown* file, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall PrepareLowLagRecordToStreamAsync(::IUnknown* encodingProfile, ::IUnknown* stream, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall PrepareLowLagRecordToCustomSinkAsync(::IUnknown* encodingProfile, ::IUnknown* customMediaSink, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall PrepareLowLagRecordToCustomSinkIdAsync(::IUnknown* encodingProfile, HSTRING customSinkActivationId, ::IUnknown* customSinkSettings, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall PrepareLowLagPhotoCaptureAsync(::IUnknown* type, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall PrepareLowLagPhotoSequenceCaptureAsync(::IUnknown* type, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall SetEncodingPropertiesAsync(Windows::Media::Capture::MediaStreamType mediaStreamType, ::IUnknown* mediaEncodingProperties, ::IUnknown* encoderProperties, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Media::Capture::IMediaCapture3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall PrepareVariablePhotoSequenceCaptureAsync(::IUnknown* type, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall add_FocusChanged(::IUnknown* handler, event_token* token) = 0;
    virtual HRESULT __stdcall remove_FocusChanged(event_token token) = 0;
    virtual HRESULT __stdcall add_PhotoConfirmationCaptured(::IUnknown* handler, event_token* token) = 0;
    virtual HRESULT __stdcall remove_PhotoConfirmationCaptured(event_token token) = 0;
};};

template <> struct abi<Windows::Media::Capture::IMediaCapture4>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall AddAudioEffectAsync(::IUnknown* definition, ::IUnknown** op) = 0;
    virtual HRESULT __stdcall AddVideoEffectAsync(::IUnknown* definition, Windows::Media::Capture::MediaStreamType mediaStreamType, ::IUnknown** op) = 0;
    virtual HRESULT __stdcall PauseRecordAsync(Windows::Media::Devices::MediaCapturePauseBehavior behavior, ::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall ResumeRecordAsync(::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall add_CameraStreamStateChanged(::IUnknown* handler, event_token* token) = 0;
    virtual HRESULT __stdcall remove_CameraStreamStateChanged(event_token token) = 0;
    virtual HRESULT __stdcall get_CameraStreamState(Windows::Media::Devices::CameraStreamState* streamState) = 0;
    virtual HRESULT __stdcall GetPreviewFrameAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetPreviewFrameCopyAsync(::IUnknown* destination, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall add_ThermalStatusChanged(::IUnknown* handler, event_token* token) = 0;
    virtual HRESULT __stdcall remove_ThermalStatusChanged(event_token token) = 0;
    virtual HRESULT __stdcall get_ThermalStatus(Windows::Media::Capture::MediaCaptureThermalStatus* value) = 0;
    virtual HRESULT __stdcall PrepareAdvancedPhotoCaptureAsync(::IUnknown* encodingProperties, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Media::Capture::IMediaCapture5>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall RemoveEffectAsync(::IUnknown* effect, ::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall PauseRecordWithResultAsync(Windows::Media::Devices::MediaCapturePauseBehavior behavior, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall StopRecordWithResultAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall get_FrameSources(::IUnknown** value) = 0;
    virtual HRESULT __stdcall CreateFrameReaderAsync(::IUnknown* inputSource, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall CreateFrameReaderWithSubtypeAsync(::IUnknown* inputSource, HSTRING outputSubtype, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall CreateFrameReaderWithSubtypeAndSizeAsync(::IUnknown* inputSource, HSTRING outputSubtype, struct_of<8> outputSize, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::Capture::IMediaCapture6>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_CaptureDeviceExclusiveControlStatusChanged(::IUnknown* handler, event_token* token) = 0;
    virtual HRESULT __stdcall remove_CaptureDeviceExclusiveControlStatusChanged(event_token token) = 0;
    virtual HRESULT __stdcall CreateMultiSourceFrameReaderAsync(::IUnknown* inputSources, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::Capture::IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DeviceId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Status(Windows::Media::Capture::MediaCaptureDeviceExclusiveControlStatus* value) = 0;
};};

template <> struct abi<Windows::Media::Capture::IMediaCaptureFailedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Message(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Code(uint32_t* value) = 0;
};};

template <> struct abi<Windows::Media::Capture::IMediaCaptureFocusChangedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_FocusState(Windows::Media::Devices::MediaCaptureFocusState* value) = 0;
};};

template <> struct abi<Windows::Media::Capture::IMediaCaptureInitializationSettings>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall put_AudioDeviceId(HSTRING value) = 0;
    virtual HRESULT __stdcall get_AudioDeviceId(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_VideoDeviceId(HSTRING value) = 0;
    virtual HRESULT __stdcall get_VideoDeviceId(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_StreamingCaptureMode(Windows::Media::Capture::StreamingCaptureMode value) = 0;
    virtual HRESULT __stdcall get_StreamingCaptureMode(Windows::Media::Capture::StreamingCaptureMode* value) = 0;
    virtual HRESULT __stdcall put_PhotoCaptureSource(Windows::Media::Capture::PhotoCaptureSource value) = 0;
    virtual HRESULT __stdcall get_PhotoCaptureSource(Windows::Media::Capture::PhotoCaptureSource* value) = 0;
};};

template <> struct abi<Windows::Media::Capture::IMediaCaptureInitializationSettings2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall put_MediaCategory(Windows::Media::Capture::MediaCategory value) = 0;
    virtual HRESULT __stdcall get_MediaCategory(Windows::Media::Capture::MediaCategory* value) = 0;
    virtual HRESULT __stdcall put_AudioProcessing(Windows::Media::AudioProcessing value) = 0;
    virtual HRESULT __stdcall get_AudioProcessing(Windows::Media::AudioProcessing* value) = 0;
};};

template <> struct abi<Windows::Media::Capture::IMediaCaptureInitializationSettings3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall put_AudioSource(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_AudioSource(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_VideoSource(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_VideoSource(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::Capture::IMediaCaptureInitializationSettings4>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_VideoProfile(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_VideoProfile(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_PreviewMediaDescription(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_PreviewMediaDescription(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_RecordMediaDescription(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_RecordMediaDescription(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_PhotoMediaDescription(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_PhotoMediaDescription(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::Media::Capture::IMediaCaptureInitializationSettings5>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_SourceGroup(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_SourceGroup(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_SharingMode(Windows::Media::Capture::MediaCaptureSharingMode* value) = 0;
    virtual HRESULT __stdcall put_SharingMode(Windows::Media::Capture::MediaCaptureSharingMode value) = 0;
    virtual HRESULT __stdcall get_MemoryPreference(Windows::Media::Capture::MediaCaptureMemoryPreference* value) = 0;
    virtual HRESULT __stdcall put_MemoryPreference(Windows::Media::Capture::MediaCaptureMemoryPreference value) = 0;
};};

template <> struct abi<Windows::Media::Capture::IMediaCaptureInitializationSettings6>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AlwaysPlaySystemShutterSound(bool* value) = 0;
    virtual HRESULT __stdcall put_AlwaysPlaySystemShutterSound(bool value) = 0;
};};

template <> struct abi<Windows::Media::Capture::IMediaCapturePauseResult>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_LastFrame(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_RecordDuration(Windows::Foundation::TimeSpan* value) = 0;
};};

template <> struct abi<Windows::Media::Capture::IMediaCaptureSettings>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AudioDeviceId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_VideoDeviceId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_StreamingCaptureMode(Windows::Media::Capture::StreamingCaptureMode* value) = 0;
    virtual HRESULT __stdcall get_PhotoCaptureSource(Windows::Media::Capture::PhotoCaptureSource* value) = 0;
    virtual HRESULT __stdcall get_VideoDeviceCharacteristic(Windows::Media::Capture::VideoDeviceCharacteristic* value) = 0;
};};

template <> struct abi<Windows::Media::Capture::IMediaCaptureSettings2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ConcurrentRecordAndPhotoSupported(bool* value) = 0;
    virtual HRESULT __stdcall get_ConcurrentRecordAndPhotoSequenceSupported(bool* value) = 0;
    virtual HRESULT __stdcall get_CameraSoundRequiredForRegion(bool* value) = 0;
    virtual HRESULT __stdcall get_Horizontal35mmEquivalentFocalLength(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_PitchOffsetDegrees(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Vertical35mmEquivalentFocalLength(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_MediaCategory(Windows::Media::Capture::MediaCategory* value) = 0;
    virtual HRESULT __stdcall get_AudioProcessing(Windows::Media::AudioProcessing* value) = 0;
};};

template <> struct abi<Windows::Media::Capture::IMediaCaptureStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall IsVideoProfileSupported(HSTRING videoDeviceId, bool* value) = 0;
    virtual HRESULT __stdcall FindAllVideoProfiles(HSTRING videoDeviceId, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall FindConcurrentProfiles(HSTRING videoDeviceId, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall FindKnownVideoProfiles(HSTRING videoDeviceId, Windows::Media::Capture::KnownVideoProfile name, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::Capture::IMediaCaptureStopResult>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_LastFrame(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_RecordDuration(Windows::Foundation::TimeSpan* value) = 0;
};};

template <> struct abi<Windows::Media::Capture::IMediaCaptureVideoPreview>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall StartPreviewAsync(::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall StartPreviewToCustomSinkAsync(::IUnknown* encodingProfile, ::IUnknown* customMediaSink, ::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall StartPreviewToCustomSinkIdAsync(::IUnknown* encodingProfile, HSTRING customSinkActivationId, ::IUnknown* customSinkSettings, ::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall StopPreviewAsync(::IUnknown** asyncInfo) = 0;
};};

template <> struct abi<Windows::Media::Capture::IMediaCaptureVideoProfile>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Id(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_VideoDeviceId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_SupportedPreviewMediaDescription(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_SupportedRecordMediaDescription(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_SupportedPhotoMediaDescription(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetConcurrency(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::Capture::IMediaCaptureVideoProfileMediaDescription>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Width(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_Height(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_FrameRate(double* value) = 0;
    virtual HRESULT __stdcall get_IsVariablePhotoSequenceSupported(bool* value) = 0;
    virtual HRESULT __stdcall get_IsHdrVideoSupported(bool* value) = 0;
};};

template <> struct abi<Windows::Media::Capture::IOptionalReferencePhotoCapturedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Frame(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Context(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::Capture::IPhotoCapturedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Frame(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Thumbnail(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_CaptureTimeOffset(Windows::Foundation::TimeSpan* value) = 0;
};};

template <> struct abi<Windows::Media::Capture::IPhotoConfirmationCapturedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Frame(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_CaptureTimeOffset(Windows::Foundation::TimeSpan* value) = 0;
};};

template <> struct abi<Windows::Media::Capture::IVideoStreamConfiguration>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_InputProperties(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_OutputProperties(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::Capture::MediaCaptureFailedEventHandler>{ struct type : ::IUnknown
{
    virtual HRESULT __stdcall Invoke(::IUnknown* sender, ::IUnknown* errorEventArgs) = 0;
};};

template <> struct abi<Windows::Media::Capture::RecordLimitationExceededEventHandler>{ struct type : ::IUnknown
{
    virtual HRESULT __stdcall Invoke(::IUnknown* sender) = 0;
};};

}
