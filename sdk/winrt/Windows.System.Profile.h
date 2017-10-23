// C++/WinRT v1.0.170906.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.System.2.h"
#include "winrt/impl/Windows.System.Profile.2.h"
#include "winrt/Windows.System.h"

namespace winrt::impl {

template <typename D> Windows::System::Profile::AnalyticsVersionInfo consume_Windows_System_Profile_IAnalyticsInfoStatics<D>::VersionInfo() const
{
    Windows::System::Profile::AnalyticsVersionInfo value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::Profile::IAnalyticsInfoStatics)->get_VersionInfo(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_System_Profile_IAnalyticsInfoStatics<D>::DeviceForm() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::System::Profile::IAnalyticsInfoStatics)->get_DeviceForm(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_System_Profile_IAnalyticsVersionInfo<D>::DeviceFamily() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::System::Profile::IAnalyticsVersionInfo)->get_DeviceFamily(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_System_Profile_IAnalyticsVersionInfo<D>::DeviceFamilyVersion() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::System::Profile::IAnalyticsVersionInfo)->get_DeviceFamilyVersion(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_System_Profile_IEducationSettingsStatics<D>::IsEducationEnvironment() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::System::Profile::IEducationSettingsStatics)->get_IsEducationEnvironment(&value));
    return value;
}

template <typename D> Windows::System::Profile::HardwareToken consume_Windows_System_Profile_IHardwareIdentificationStatics<D>::GetPackageSpecificToken(Windows::Storage::Streams::IBuffer const& nonce) const
{
    Windows::System::Profile::HardwareToken packageSpecificHardwareToken{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::Profile::IHardwareIdentificationStatics)->GetPackageSpecificToken(get_abi(nonce), put_abi(packageSpecificHardwareToken)));
    return packageSpecificHardwareToken;
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_System_Profile_IHardwareToken<D>::Id() const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::Profile::IHardwareToken)->get_Id(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_System_Profile_IHardwareToken<D>::Signature() const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::Profile::IHardwareToken)->get_Signature(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_System_Profile_IHardwareToken<D>::Certificate() const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::Profile::IHardwareToken)->get_Certificate(put_abi(value)));
    return value;
}

template <typename D> Windows::System::Profile::PlatformDataCollectionLevel consume_Windows_System_Profile_IPlatformDiagnosticsAndUsageDataSettingsStatics<D>::CollectionLevel() const
{
    Windows::System::Profile::PlatformDataCollectionLevel value{};
    check_hresult(WINRT_SHIM(Windows::System::Profile::IPlatformDiagnosticsAndUsageDataSettingsStatics)->get_CollectionLevel(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_System_Profile_IPlatformDiagnosticsAndUsageDataSettingsStatics<D>::CollectionLevelChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::System::Profile::IPlatformDiagnosticsAndUsageDataSettingsStatics)->add_CollectionLevelChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::System::Profile::IPlatformDiagnosticsAndUsageDataSettingsStatics> consume_Windows_System_Profile_IPlatformDiagnosticsAndUsageDataSettingsStatics<D>::CollectionLevelChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::System::Profile::IPlatformDiagnosticsAndUsageDataSettingsStatics>(this, &abi_t<Windows::System::Profile::IPlatformDiagnosticsAndUsageDataSettingsStatics>::remove_CollectionLevelChanged, CollectionLevelChanged(handler));
}

template <typename D> void consume_Windows_System_Profile_IPlatformDiagnosticsAndUsageDataSettingsStatics<D>::CollectionLevelChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::System::Profile::IPlatformDiagnosticsAndUsageDataSettingsStatics)->remove_CollectionLevelChanged(get_abi(token)));
}

template <typename D> bool consume_Windows_System_Profile_IPlatformDiagnosticsAndUsageDataSettingsStatics<D>::CanCollectDiagnostics(Windows::System::Profile::PlatformDataCollectionLevel const& level) const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::System::Profile::IPlatformDiagnosticsAndUsageDataSettingsStatics)->CanCollectDiagnostics(get_abi(level), &result));
    return result;
}

template <typename D> bool consume_Windows_System_Profile_ISharedModeSettingsStatics<D>::IsEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::System::Profile::ISharedModeSettingsStatics)->get_IsEnabled(&value));
    return value;
}

template <typename D> bool consume_Windows_System_Profile_ISharedModeSettingsStatics2<D>::ShouldAvoidLocalStorage() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::System::Profile::ISharedModeSettingsStatics2)->get_ShouldAvoidLocalStorage(&value));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_System_Profile_ISystemIdentificationInfo<D>::Id() const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::Profile::ISystemIdentificationInfo)->get_Id(put_abi(value)));
    return value;
}

template <typename D> Windows::System::Profile::SystemIdentificationSource consume_Windows_System_Profile_ISystemIdentificationInfo<D>::Source() const
{
    Windows::System::Profile::SystemIdentificationSource value{};
    check_hresult(WINRT_SHIM(Windows::System::Profile::ISystemIdentificationInfo)->get_Source(put_abi(value)));
    return value;
}

template <typename D> Windows::System::Profile::SystemIdentificationInfo consume_Windows_System_Profile_ISystemIdentificationStatics<D>::GetSystemIdForPublisher() const
{
    Windows::System::Profile::SystemIdentificationInfo result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::Profile::ISystemIdentificationStatics)->GetSystemIdForPublisher(put_abi(result)));
    return result;
}

template <typename D> Windows::System::Profile::SystemIdentificationInfo consume_Windows_System_Profile_ISystemIdentificationStatics<D>::GetSystemIdForUser(Windows::System::User const& user) const
{
    Windows::System::Profile::SystemIdentificationInfo result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::Profile::ISystemIdentificationStatics)->GetSystemIdForUser(get_abi(user), put_abi(result)));
    return result;
}

template <typename D>
struct produce<D, Windows::System::Profile::IAnalyticsInfoStatics> : produce_base<D, Windows::System::Profile::IAnalyticsInfoStatics>
{
    HRESULT __stdcall get_VersionInfo(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VersionInfo());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeviceForm(HSTRING* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DeviceForm());
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
struct produce<D, Windows::System::Profile::IAnalyticsVersionInfo> : produce_base<D, Windows::System::Profile::IAnalyticsVersionInfo>
{
    HRESULT __stdcall get_DeviceFamily(HSTRING* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DeviceFamily());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeviceFamilyVersion(HSTRING* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DeviceFamilyVersion());
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
struct produce<D, Windows::System::Profile::IEducationSettingsStatics> : produce_base<D, Windows::System::Profile::IEducationSettingsStatics>
{
    HRESULT __stdcall get_IsEducationEnvironment(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsEducationEnvironment());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::Profile::IHardwareIdentificationStatics> : produce_base<D, Windows::System::Profile::IHardwareIdentificationStatics>
{
    HRESULT __stdcall GetPackageSpecificToken(::IUnknown* nonce, ::IUnknown** packageSpecificHardwareToken) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *packageSpecificHardwareToken = detach_abi(this->shim().GetPackageSpecificToken(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&nonce)));
            return S_OK;
        }
        catch (...)
        {
            *packageSpecificHardwareToken = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::Profile::IHardwareToken> : produce_base<D, Windows::System::Profile::IHardwareToken>
{
    HRESULT __stdcall get_Id(::IUnknown** value) noexcept final
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

    HRESULT __stdcall get_Signature(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Signature());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Certificate(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Certificate());
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
struct produce<D, Windows::System::Profile::IPlatformDiagnosticsAndUsageDataSettingsStatics> : produce_base<D, Windows::System::Profile::IPlatformDiagnosticsAndUsageDataSettingsStatics>
{
    HRESULT __stdcall get_CollectionLevel(Windows::System::Profile::PlatformDataCollectionLevel* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CollectionLevel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_CollectionLevelChanged(::IUnknown* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().CollectionLevelChanged(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_CollectionLevelChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CollectionLevelChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CanCollectDiagnostics(Windows::System::Profile::PlatformDataCollectionLevel level, bool* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CanCollectDiagnostics(*reinterpret_cast<Windows::System::Profile::PlatformDataCollectionLevel const*>(&level)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::Profile::ISharedModeSettingsStatics> : produce_base<D, Windows::System::Profile::ISharedModeSettingsStatics>
{
    HRESULT __stdcall get_IsEnabled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::Profile::ISharedModeSettingsStatics2> : produce_base<D, Windows::System::Profile::ISharedModeSettingsStatics2>
{
    HRESULT __stdcall get_ShouldAvoidLocalStorage(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ShouldAvoidLocalStorage());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::Profile::ISystemIdentificationInfo> : produce_base<D, Windows::System::Profile::ISystemIdentificationInfo>
{
    HRESULT __stdcall get_Id(::IUnknown** value) noexcept final
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

    HRESULT __stdcall get_Source(Windows::System::Profile::SystemIdentificationSource* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::Profile::ISystemIdentificationStatics> : produce_base<D, Windows::System::Profile::ISystemIdentificationStatics>
{
    HRESULT __stdcall GetSystemIdForPublisher(::IUnknown** result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetSystemIdForPublisher());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetSystemIdForUser(::IUnknown* user, ::IUnknown** result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetSystemIdForUser(*reinterpret_cast<Windows::System::User const*>(&user)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::System::Profile {

inline Windows::System::Profile::AnalyticsVersionInfo AnalyticsInfo::VersionInfo()
{
    return get_activation_factory<AnalyticsInfo, Windows::System::Profile::IAnalyticsInfoStatics>().VersionInfo();
}

inline hstring AnalyticsInfo::DeviceForm()
{
    return get_activation_factory<AnalyticsInfo, Windows::System::Profile::IAnalyticsInfoStatics>().DeviceForm();
}

inline bool EducationSettings::IsEducationEnvironment()
{
    return get_activation_factory<EducationSettings, Windows::System::Profile::IEducationSettingsStatics>().IsEducationEnvironment();
}

inline Windows::System::Profile::HardwareToken HardwareIdentification::GetPackageSpecificToken(Windows::Storage::Streams::IBuffer const& nonce)
{
    return get_activation_factory<HardwareIdentification, Windows::System::Profile::IHardwareIdentificationStatics>().GetPackageSpecificToken(nonce);
}

inline Windows::System::Profile::PlatformDataCollectionLevel PlatformDiagnosticsAndUsageDataSettings::CollectionLevel()
{
    return get_activation_factory<PlatformDiagnosticsAndUsageDataSettings, Windows::System::Profile::IPlatformDiagnosticsAndUsageDataSettingsStatics>().CollectionLevel();
}

inline event_token PlatformDiagnosticsAndUsageDataSettings::CollectionLevelChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler)
{
    return get_activation_factory<PlatformDiagnosticsAndUsageDataSettings, Windows::System::Profile::IPlatformDiagnosticsAndUsageDataSettingsStatics>().CollectionLevelChanged(handler);
}

inline factory_event_revoker<Windows::System::Profile::IPlatformDiagnosticsAndUsageDataSettingsStatics> PlatformDiagnosticsAndUsageDataSettings::CollectionLevelChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler)
{
    auto factory = get_activation_factory<PlatformDiagnosticsAndUsageDataSettings, Windows::System::Profile::IPlatformDiagnosticsAndUsageDataSettingsStatics>();
    return { factory, &abi_t<Windows::System::Profile::IPlatformDiagnosticsAndUsageDataSettingsStatics>::remove_CollectionLevelChanged, factory.CollectionLevelChanged(handler) };
}

inline void PlatformDiagnosticsAndUsageDataSettings::CollectionLevelChanged(event_token const& token)
{
    get_activation_factory<PlatformDiagnosticsAndUsageDataSettings, Windows::System::Profile::IPlatformDiagnosticsAndUsageDataSettingsStatics>().CollectionLevelChanged(token);
}

inline bool PlatformDiagnosticsAndUsageDataSettings::CanCollectDiagnostics(Windows::System::Profile::PlatformDataCollectionLevel const& level)
{
    return get_activation_factory<PlatformDiagnosticsAndUsageDataSettings, Windows::System::Profile::IPlatformDiagnosticsAndUsageDataSettingsStatics>().CanCollectDiagnostics(level);
}

inline bool SharedModeSettings::IsEnabled()
{
    return get_activation_factory<SharedModeSettings, Windows::System::Profile::ISharedModeSettingsStatics>().IsEnabled();
}

inline bool SharedModeSettings::ShouldAvoidLocalStorage()
{
    return get_activation_factory<SharedModeSettings, Windows::System::Profile::ISharedModeSettingsStatics2>().ShouldAvoidLocalStorage();
}

inline Windows::System::Profile::SystemIdentificationInfo SystemIdentification::GetSystemIdForPublisher()
{
    return get_activation_factory<SystemIdentification, Windows::System::Profile::ISystemIdentificationStatics>().GetSystemIdForPublisher();
}

inline Windows::System::Profile::SystemIdentificationInfo SystemIdentification::GetSystemIdForUser(Windows::System::User const& user)
{
    return get_activation_factory<SystemIdentification, Windows::System::Profile::ISystemIdentificationStatics>().GetSystemIdForUser(user);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::System::Profile::IAnalyticsInfoStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Profile::IAnalyticsInfoStatics> {};

template<> struct hash<winrt::Windows::System::Profile::IAnalyticsVersionInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Profile::IAnalyticsVersionInfo> {};

template<> struct hash<winrt::Windows::System::Profile::IEducationSettingsStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Profile::IEducationSettingsStatics> {};

template<> struct hash<winrt::Windows::System::Profile::IHardwareIdentificationStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Profile::IHardwareIdentificationStatics> {};

template<> struct hash<winrt::Windows::System::Profile::IHardwareToken> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Profile::IHardwareToken> {};

template<> struct hash<winrt::Windows::System::Profile::IPlatformDiagnosticsAndUsageDataSettingsStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Profile::IPlatformDiagnosticsAndUsageDataSettingsStatics> {};

template<> struct hash<winrt::Windows::System::Profile::ISharedModeSettingsStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Profile::ISharedModeSettingsStatics> {};

template<> struct hash<winrt::Windows::System::Profile::ISharedModeSettingsStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Profile::ISharedModeSettingsStatics2> {};

template<> struct hash<winrt::Windows::System::Profile::ISystemIdentificationInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Profile::ISystemIdentificationInfo> {};

template<> struct hash<winrt::Windows::System::Profile::ISystemIdentificationStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Profile::ISystemIdentificationStatics> {};

template<> struct hash<winrt::Windows::System::Profile::AnalyticsInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Profile::AnalyticsInfo> {};

template<> struct hash<winrt::Windows::System::Profile::AnalyticsVersionInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Profile::AnalyticsVersionInfo> {};

template<> struct hash<winrt::Windows::System::Profile::EducationSettings> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Profile::EducationSettings> {};

template<> struct hash<winrt::Windows::System::Profile::HardwareIdentification> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Profile::HardwareIdentification> {};

template<> struct hash<winrt::Windows::System::Profile::HardwareToken> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Profile::HardwareToken> {};

template<> struct hash<winrt::Windows::System::Profile::PlatformDiagnosticsAndUsageDataSettings> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Profile::PlatformDiagnosticsAndUsageDataSettings> {};

template<> struct hash<winrt::Windows::System::Profile::SharedModeSettings> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Profile::SharedModeSettings> {};

template<> struct hash<winrt::Windows::System::Profile::SystemIdentification> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Profile::SystemIdentification> {};

template<> struct hash<winrt::Windows::System::Profile::SystemIdentificationInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Profile::SystemIdentificationInfo> {};

}

WINRT_WARNING_POP
