// C++/WinRT v1.0.170906.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Globalization.2.h"
#include "winrt/impl/Windows.Storage.2.h"
#include "winrt/impl/Windows.System.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.System.UserProfile.2.h"
#include "winrt/Windows.System.h"

namespace winrt::impl {

template <typename D> hstring consume_Windows_System_UserProfile_IAdvertisingManagerForUser<D>::AdvertisingId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::System::UserProfile::IAdvertisingManagerForUser)->get_AdvertisingId(put_abi(value)));
    return value;
}

template <typename D> Windows::System::User consume_Windows_System_UserProfile_IAdvertisingManagerForUser<D>::User() const
{
    Windows::System::User value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::UserProfile::IAdvertisingManagerForUser)->get_User(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_System_UserProfile_IAdvertisingManagerStatics<D>::AdvertisingId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::System::UserProfile::IAdvertisingManagerStatics)->get_AdvertisingId(put_abi(value)));
    return value;
}

template <typename D> Windows::System::UserProfile::AdvertisingManagerForUser consume_Windows_System_UserProfile_IAdvertisingManagerStatics2<D>::GetForUser(Windows::System::User const& user) const
{
    Windows::System::UserProfile::AdvertisingManagerForUser value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::UserProfile::IAdvertisingManagerStatics2)->GetForUser(get_abi(user), put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_System_UserProfile_IDiagnosticsSettings<D>::CanUseDiagnosticsToTailorExperiences() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::System::UserProfile::IDiagnosticsSettings)->get_CanUseDiagnosticsToTailorExperiences(&value));
    return value;
}

template <typename D> Windows::System::User consume_Windows_System_UserProfile_IDiagnosticsSettings<D>::User() const
{
    Windows::System::User value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::UserProfile::IDiagnosticsSettings)->get_User(put_abi(value)));
    return value;
}

template <typename D> Windows::System::UserProfile::DiagnosticsSettings consume_Windows_System_UserProfile_IDiagnosticsSettingsStatics<D>::GetDefault() const
{
    Windows::System::UserProfile::DiagnosticsSettings value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::UserProfile::IDiagnosticsSettingsStatics)->GetDefault(put_abi(value)));
    return value;
}

template <typename D> Windows::System::UserProfile::DiagnosticsSettings consume_Windows_System_UserProfile_IDiagnosticsSettingsStatics<D>::GetForUser(Windows::System::User const& user) const
{
    Windows::System::UserProfile::DiagnosticsSettings value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::UserProfile::IDiagnosticsSettingsStatics)->GetForUser(get_abi(user), put_abi(value)));
    return value;
}

template <typename D> Windows::System::UserProfile::FirstSignInSettings consume_Windows_System_UserProfile_IFirstSignInSettingsStatics<D>::GetDefault() const
{
    Windows::System::UserProfile::FirstSignInSettings result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::UserProfile::IFirstSignInSettingsStatics)->GetDefault(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> consume_Windows_System_UserProfile_IGlobalizationPreferencesStatics<D>::Calendars() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::UserProfile::IGlobalizationPreferencesStatics)->get_Calendars(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> consume_Windows_System_UserProfile_IGlobalizationPreferencesStatics<D>::Clocks() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::UserProfile::IGlobalizationPreferencesStatics)->get_Clocks(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> consume_Windows_System_UserProfile_IGlobalizationPreferencesStatics<D>::Currencies() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::UserProfile::IGlobalizationPreferencesStatics)->get_Currencies(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> consume_Windows_System_UserProfile_IGlobalizationPreferencesStatics<D>::Languages() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::UserProfile::IGlobalizationPreferencesStatics)->get_Languages(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_System_UserProfile_IGlobalizationPreferencesStatics<D>::HomeGeographicRegion() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::System::UserProfile::IGlobalizationPreferencesStatics)->get_HomeGeographicRegion(put_abi(value)));
    return value;
}

template <typename D> Windows::Globalization::DayOfWeek consume_Windows_System_UserProfile_IGlobalizationPreferencesStatics<D>::WeekStartsOn() const
{
    Windows::Globalization::DayOfWeek value{};
    check_hresult(WINRT_SHIM(Windows::System::UserProfile::IGlobalizationPreferencesStatics)->get_WeekStartsOn(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_System_UserProfile_IGlobalizationPreferencesStatics2<D>::TrySetHomeGeographicRegion(param::hstring const& region) const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::System::UserProfile::IGlobalizationPreferencesStatics2)->TrySetHomeGeographicRegion(get_abi(region), &result));
    return result;
}

template <typename D> bool consume_Windows_System_UserProfile_IGlobalizationPreferencesStatics2<D>::TrySetLanguages(param::iterable<hstring> const& languageTags) const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::System::UserProfile::IGlobalizationPreferencesStatics2)->TrySetLanguages(get_abi(languageTags), &result));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_System_UserProfile_IUserProfilePersonalizationSettings<D>::TrySetLockScreenImageAsync(Windows::Storage::StorageFile const& imageFile) const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::UserProfile::IUserProfilePersonalizationSettings)->TrySetLockScreenImageAsync(get_abi(imageFile), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_System_UserProfile_IUserProfilePersonalizationSettings<D>::TrySetWallpaperImageAsync(Windows::Storage::StorageFile const& imageFile) const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::UserProfile::IUserProfilePersonalizationSettings)->TrySetWallpaperImageAsync(get_abi(imageFile), put_abi(operation)));
    return operation;
}

template <typename D> Windows::System::UserProfile::UserProfilePersonalizationSettings consume_Windows_System_UserProfile_IUserProfilePersonalizationSettingsStatics<D>::Current() const
{
    Windows::System::UserProfile::UserProfilePersonalizationSettings value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::UserProfile::IUserProfilePersonalizationSettingsStatics)->get_Current(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_System_UserProfile_IUserProfilePersonalizationSettingsStatics<D>::IsSupported() const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::System::UserProfile::IUserProfilePersonalizationSettingsStatics)->IsSupported(&result));
    return result;
}

template <typename D>
struct produce<D, Windows::System::UserProfile::IAdvertisingManagerForUser> : produce_base<D, Windows::System::UserProfile::IAdvertisingManagerForUser>
{
    HRESULT __stdcall get_AdvertisingId(HSTRING* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AdvertisingId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_User(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().User());
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
struct produce<D, Windows::System::UserProfile::IAdvertisingManagerStatics> : produce_base<D, Windows::System::UserProfile::IAdvertisingManagerStatics>
{
    HRESULT __stdcall get_AdvertisingId(HSTRING* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AdvertisingId());
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
struct produce<D, Windows::System::UserProfile::IAdvertisingManagerStatics2> : produce_base<D, Windows::System::UserProfile::IAdvertisingManagerStatics2>
{
    HRESULT __stdcall GetForUser(::IUnknown* user, ::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetForUser(*reinterpret_cast<Windows::System::User const*>(&user)));
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
struct produce<D, Windows::System::UserProfile::IDiagnosticsSettings> : produce_base<D, Windows::System::UserProfile::IDiagnosticsSettings>
{
    HRESULT __stdcall get_CanUseDiagnosticsToTailorExperiences(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CanUseDiagnosticsToTailorExperiences());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_User(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().User());
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
struct produce<D, Windows::System::UserProfile::IDiagnosticsSettingsStatics> : produce_base<D, Windows::System::UserProfile::IDiagnosticsSettingsStatics>
{
    HRESULT __stdcall GetDefault(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDefault());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetForUser(::IUnknown* user, ::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetForUser(*reinterpret_cast<Windows::System::User const*>(&user)));
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
struct produce<D, Windows::System::UserProfile::IFirstSignInSettings> : produce_base<D, Windows::System::UserProfile::IFirstSignInSettings>
{};

template <typename D>
struct produce<D, Windows::System::UserProfile::IFirstSignInSettingsStatics> : produce_base<D, Windows::System::UserProfile::IFirstSignInSettingsStatics>
{
    HRESULT __stdcall GetDefault(::IUnknown** result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetDefault());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::UserProfile::IGlobalizationPreferencesStatics> : produce_base<D, Windows::System::UserProfile::IGlobalizationPreferencesStatics>
{
    HRESULT __stdcall get_Calendars(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Calendars());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Clocks(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Clocks());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Currencies(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Currencies());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Languages(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Languages());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HomeGeographicRegion(HSTRING* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HomeGeographicRegion());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WeekStartsOn(Windows::Globalization::DayOfWeek* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().WeekStartsOn());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::UserProfile::IGlobalizationPreferencesStatics2> : produce_base<D, Windows::System::UserProfile::IGlobalizationPreferencesStatics2>
{
    HRESULT __stdcall TrySetHomeGeographicRegion(HSTRING region, bool* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().TrySetHomeGeographicRegion(*reinterpret_cast<hstring const*>(&region)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TrySetLanguages(::IUnknown* languageTags, bool* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().TrySetLanguages(*reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&languageTags)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::UserProfile::IUserProfilePersonalizationSettings> : produce_base<D, Windows::System::UserProfile::IUserProfilePersonalizationSettings>
{
    HRESULT __stdcall TrySetLockScreenImageAsync(::IUnknown* imageFile, ::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().TrySetLockScreenImageAsync(*reinterpret_cast<Windows::Storage::StorageFile const*>(&imageFile)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TrySetWallpaperImageAsync(::IUnknown* imageFile, ::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().TrySetWallpaperImageAsync(*reinterpret_cast<Windows::Storage::StorageFile const*>(&imageFile)));
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
struct produce<D, Windows::System::UserProfile::IUserProfilePersonalizationSettingsStatics> : produce_base<D, Windows::System::UserProfile::IUserProfilePersonalizationSettingsStatics>
{
    HRESULT __stdcall get_Current(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Current());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IsSupported(bool* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().IsSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::System::UserProfile {

inline hstring AdvertisingManager::AdvertisingId()
{
    return get_activation_factory<AdvertisingManager, Windows::System::UserProfile::IAdvertisingManagerStatics>().AdvertisingId();
}

inline Windows::System::UserProfile::AdvertisingManagerForUser AdvertisingManager::GetForUser(Windows::System::User const& user)
{
    return get_activation_factory<AdvertisingManager, Windows::System::UserProfile::IAdvertisingManagerStatics2>().GetForUser(user);
}

inline Windows::System::UserProfile::DiagnosticsSettings DiagnosticsSettings::GetDefault()
{
    return get_activation_factory<DiagnosticsSettings, Windows::System::UserProfile::IDiagnosticsSettingsStatics>().GetDefault();
}

inline Windows::System::UserProfile::DiagnosticsSettings DiagnosticsSettings::GetForUser(Windows::System::User const& user)
{
    return get_activation_factory<DiagnosticsSettings, Windows::System::UserProfile::IDiagnosticsSettingsStatics>().GetForUser(user);
}

inline Windows::System::UserProfile::FirstSignInSettings FirstSignInSettings::GetDefault()
{
    return get_activation_factory<FirstSignInSettings, Windows::System::UserProfile::IFirstSignInSettingsStatics>().GetDefault();
}

inline Windows::Foundation::Collections::IVectorView<hstring> GlobalizationPreferences::Calendars()
{
    return get_activation_factory<GlobalizationPreferences, Windows::System::UserProfile::IGlobalizationPreferencesStatics>().Calendars();
}

inline Windows::Foundation::Collections::IVectorView<hstring> GlobalizationPreferences::Clocks()
{
    return get_activation_factory<GlobalizationPreferences, Windows::System::UserProfile::IGlobalizationPreferencesStatics>().Clocks();
}

inline Windows::Foundation::Collections::IVectorView<hstring> GlobalizationPreferences::Currencies()
{
    return get_activation_factory<GlobalizationPreferences, Windows::System::UserProfile::IGlobalizationPreferencesStatics>().Currencies();
}

inline Windows::Foundation::Collections::IVectorView<hstring> GlobalizationPreferences::Languages()
{
    return get_activation_factory<GlobalizationPreferences, Windows::System::UserProfile::IGlobalizationPreferencesStatics>().Languages();
}

inline hstring GlobalizationPreferences::HomeGeographicRegion()
{
    return get_activation_factory<GlobalizationPreferences, Windows::System::UserProfile::IGlobalizationPreferencesStatics>().HomeGeographicRegion();
}

inline Windows::Globalization::DayOfWeek GlobalizationPreferences::WeekStartsOn()
{
    return get_activation_factory<GlobalizationPreferences, Windows::System::UserProfile::IGlobalizationPreferencesStatics>().WeekStartsOn();
}

inline bool GlobalizationPreferences::TrySetHomeGeographicRegion(param::hstring const& region)
{
    return get_activation_factory<GlobalizationPreferences, Windows::System::UserProfile::IGlobalizationPreferencesStatics2>().TrySetHomeGeographicRegion(region);
}

inline bool GlobalizationPreferences::TrySetLanguages(param::iterable<hstring> const& languageTags)
{
    return get_activation_factory<GlobalizationPreferences, Windows::System::UserProfile::IGlobalizationPreferencesStatics2>().TrySetLanguages(languageTags);
}

inline Windows::System::UserProfile::UserProfilePersonalizationSettings UserProfilePersonalizationSettings::Current()
{
    return get_activation_factory<UserProfilePersonalizationSettings, Windows::System::UserProfile::IUserProfilePersonalizationSettingsStatics>().Current();
}

inline bool UserProfilePersonalizationSettings::IsSupported()
{
    return get_activation_factory<UserProfilePersonalizationSettings, Windows::System::UserProfile::IUserProfilePersonalizationSettingsStatics>().IsSupported();
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::System::UserProfile::IAdvertisingManagerForUser> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::UserProfile::IAdvertisingManagerForUser> {};

template<> struct hash<winrt::Windows::System::UserProfile::IAdvertisingManagerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::UserProfile::IAdvertisingManagerStatics> {};

template<> struct hash<winrt::Windows::System::UserProfile::IAdvertisingManagerStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::UserProfile::IAdvertisingManagerStatics2> {};

template<> struct hash<winrt::Windows::System::UserProfile::IDiagnosticsSettings> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::UserProfile::IDiagnosticsSettings> {};

template<> struct hash<winrt::Windows::System::UserProfile::IDiagnosticsSettingsStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::UserProfile::IDiagnosticsSettingsStatics> {};

template<> struct hash<winrt::Windows::System::UserProfile::IFirstSignInSettings> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::UserProfile::IFirstSignInSettings> {};

template<> struct hash<winrt::Windows::System::UserProfile::IFirstSignInSettingsStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::UserProfile::IFirstSignInSettingsStatics> {};

template<> struct hash<winrt::Windows::System::UserProfile::IGlobalizationPreferencesStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::UserProfile::IGlobalizationPreferencesStatics> {};

template<> struct hash<winrt::Windows::System::UserProfile::IGlobalizationPreferencesStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::UserProfile::IGlobalizationPreferencesStatics2> {};

template<> struct hash<winrt::Windows::System::UserProfile::IUserProfilePersonalizationSettings> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::UserProfile::IUserProfilePersonalizationSettings> {};

template<> struct hash<winrt::Windows::System::UserProfile::IUserProfilePersonalizationSettingsStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::UserProfile::IUserProfilePersonalizationSettingsStatics> {};

template<> struct hash<winrt::Windows::System::UserProfile::AdvertisingManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::UserProfile::AdvertisingManager> {};

template<> struct hash<winrt::Windows::System::UserProfile::AdvertisingManagerForUser> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::UserProfile::AdvertisingManagerForUser> {};

template<> struct hash<winrt::Windows::System::UserProfile::DiagnosticsSettings> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::UserProfile::DiagnosticsSettings> {};

template<> struct hash<winrt::Windows::System::UserProfile::FirstSignInSettings> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::UserProfile::FirstSignInSettings> {};

template<> struct hash<winrt::Windows::System::UserProfile::GlobalizationPreferences> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::UserProfile::GlobalizationPreferences> {};

template<> struct hash<winrt::Windows::System::UserProfile::UserProfilePersonalizationSettings> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::UserProfile::UserProfilePersonalizationSettings> {};

}

WINRT_WARNING_POP
