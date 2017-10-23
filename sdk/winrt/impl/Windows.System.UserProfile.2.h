// C++/WinRT v1.0.170906.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Globalization.1.h"
#include "winrt/impl/Windows.Storage.1.h"
#include "winrt/impl/Windows.System.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.System.UserProfile.1.h"

WINRT_EXPORT namespace winrt::Windows::System::UserProfile {

}

namespace winrt::impl {

}

WINRT_EXPORT namespace winrt::Windows::System::UserProfile {

struct AdvertisingManager
{
    AdvertisingManager() = delete;
    static hstring AdvertisingId();
    static Windows::System::UserProfile::AdvertisingManagerForUser GetForUser(Windows::System::User const& user);
};

struct WINRT_EBO AdvertisingManagerForUser :
    Windows::System::UserProfile::IAdvertisingManagerForUser
{
    AdvertisingManagerForUser(std::nullptr_t) noexcept {}
};

struct WINRT_EBO DiagnosticsSettings :
    Windows::System::UserProfile::IDiagnosticsSettings
{
    DiagnosticsSettings(std::nullptr_t) noexcept {}
    static Windows::System::UserProfile::DiagnosticsSettings GetDefault();
    static Windows::System::UserProfile::DiagnosticsSettings GetForUser(Windows::System::User const& user);
};

struct WINRT_EBO FirstSignInSettings :
    Windows::System::UserProfile::IFirstSignInSettings
{
    FirstSignInSettings(std::nullptr_t) noexcept {}
    static Windows::System::UserProfile::FirstSignInSettings GetDefault();
};

struct GlobalizationPreferences
{
    GlobalizationPreferences() = delete;
    static Windows::Foundation::Collections::IVectorView<hstring> Calendars();
    static Windows::Foundation::Collections::IVectorView<hstring> Clocks();
    static Windows::Foundation::Collections::IVectorView<hstring> Currencies();
    static Windows::Foundation::Collections::IVectorView<hstring> Languages();
    static hstring HomeGeographicRegion();
    static Windows::Globalization::DayOfWeek WeekStartsOn();
    static bool TrySetHomeGeographicRegion(param::hstring const& region);
    static bool TrySetLanguages(param::iterable<hstring> const& languageTags);
};

struct WINRT_EBO UserProfilePersonalizationSettings :
    Windows::System::UserProfile::IUserProfilePersonalizationSettings
{
    UserProfilePersonalizationSettings(std::nullptr_t) noexcept {}
    static Windows::System::UserProfile::UserProfilePersonalizationSettings Current();
    static bool IsSupported();
};

}
