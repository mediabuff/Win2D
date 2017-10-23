// C++/WinRT v1.0.170906.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.System.1.h"
#include "winrt/impl/Windows.System.Profile.1.h"

WINRT_EXPORT namespace winrt::Windows::System::Profile {

}

namespace winrt::impl {

}

WINRT_EXPORT namespace winrt::Windows::System::Profile {

struct AnalyticsInfo
{
    AnalyticsInfo() = delete;
    static Windows::System::Profile::AnalyticsVersionInfo VersionInfo();
    static hstring DeviceForm();
};

struct WINRT_EBO AnalyticsVersionInfo :
    Windows::System::Profile::IAnalyticsVersionInfo
{
    AnalyticsVersionInfo(std::nullptr_t) noexcept {}
};

struct EducationSettings
{
    EducationSettings() = delete;
    static bool IsEducationEnvironment();
};

struct HardwareIdentification
{
    HardwareIdentification() = delete;
    static Windows::System::Profile::HardwareToken GetPackageSpecificToken(Windows::Storage::Streams::IBuffer const& nonce);
};

struct WINRT_EBO HardwareToken :
    Windows::System::Profile::IHardwareToken
{
    HardwareToken(std::nullptr_t) noexcept {}
};

struct PlatformDiagnosticsAndUsageDataSettings
{
    PlatformDiagnosticsAndUsageDataSettings() = delete;
    static Windows::System::Profile::PlatformDataCollectionLevel CollectionLevel();
    static event_token CollectionLevelChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
    using CollectionLevelChanged_revoker = factory_event_revoker<Windows::System::Profile::IPlatformDiagnosticsAndUsageDataSettingsStatics>;
    static CollectionLevelChanged_revoker CollectionLevelChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
    static void CollectionLevelChanged(event_token const& token);
    static bool CanCollectDiagnostics(Windows::System::Profile::PlatformDataCollectionLevel const& level);
};

struct SharedModeSettings
{
    SharedModeSettings() = delete;
    static bool IsEnabled();
    static bool ShouldAvoidLocalStorage();
};

struct SystemIdentification
{
    SystemIdentification() = delete;
    static Windows::System::Profile::SystemIdentificationInfo GetSystemIdForPublisher();
    static Windows::System::Profile::SystemIdentificationInfo GetSystemIdForUser(Windows::System::User const& user);
};

struct WINRT_EBO SystemIdentificationInfo :
    Windows::System::Profile::ISystemIdentificationInfo
{
    SystemIdentificationInfo(std::nullptr_t) noexcept {}
};

}
