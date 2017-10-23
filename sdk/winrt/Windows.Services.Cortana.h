// C++/WinRT v1.0.170906.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Services.Cortana.2.h"

namespace winrt::impl {

template <typename D> bool consume_Windows_Services_Cortana_ICortanaPermissionsManager<D>::IsSupported() const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::Services::Cortana::ICortanaPermissionsManager)->IsSupported(&result));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_Services_Cortana_ICortanaPermissionsManager<D>::ArePermissionsGrantedAsync(param::async_iterable<Windows::Services::Cortana::CortanaPermission> const& permissions) const
{
    Windows::Foundation::IAsyncOperation<bool> getGrantedPermissionsOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Cortana::ICortanaPermissionsManager)->ArePermissionsGrantedAsync(get_abi(permissions), put_abi(getGrantedPermissionsOperation)));
    return getGrantedPermissionsOperation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::Cortana::CortanaPermissionsChangeResult> consume_Windows_Services_Cortana_ICortanaPermissionsManager<D>::GrantPermissionsAsync(param::async_iterable<Windows::Services::Cortana::CortanaPermission> const& permissions) const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Cortana::CortanaPermissionsChangeResult> grantOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Cortana::ICortanaPermissionsManager)->GrantPermissionsAsync(get_abi(permissions), put_abi(grantOperation)));
    return grantOperation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::Cortana::CortanaPermissionsChangeResult> consume_Windows_Services_Cortana_ICortanaPermissionsManager<D>::RevokePermissionsAsync(param::async_iterable<Windows::Services::Cortana::CortanaPermission> const& permissions) const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Cortana::CortanaPermissionsChangeResult> revokeOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Cortana::ICortanaPermissionsManager)->RevokePermissionsAsync(get_abi(permissions), put_abi(revokeOperation)));
    return revokeOperation;
}

template <typename D> Windows::Services::Cortana::CortanaPermissionsManager consume_Windows_Services_Cortana_ICortanaPermissionsManagerStatics<D>::GetDefault() const
{
    Windows::Services::Cortana::CortanaPermissionsManager result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Cortana::ICortanaPermissionsManagerStatics)->GetDefault(put_abi(result)));
    return result;
}

template <typename D>
struct produce<D, Windows::Services::Cortana::ICortanaPermissionsManager> : produce_base<D, Windows::Services::Cortana::ICortanaPermissionsManager>
{
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

    HRESULT __stdcall ArePermissionsGrantedAsync(::IUnknown* permissions, ::IUnknown** getGrantedPermissionsOperation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *getGrantedPermissionsOperation = detach_abi(this->shim().ArePermissionsGrantedAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Services::Cortana::CortanaPermission> const*>(&permissions)));
            return S_OK;
        }
        catch (...)
        {
            *getGrantedPermissionsOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GrantPermissionsAsync(::IUnknown* permissions, ::IUnknown** grantOperation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *grantOperation = detach_abi(this->shim().GrantPermissionsAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Services::Cortana::CortanaPermission> const*>(&permissions)));
            return S_OK;
        }
        catch (...)
        {
            *grantOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RevokePermissionsAsync(::IUnknown* permissions, ::IUnknown** revokeOperation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *revokeOperation = detach_abi(this->shim().RevokePermissionsAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Services::Cortana::CortanaPermission> const*>(&permissions)));
            return S_OK;
        }
        catch (...)
        {
            *revokeOperation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Services::Cortana::ICortanaPermissionsManagerStatics> : produce_base<D, Windows::Services::Cortana::ICortanaPermissionsManagerStatics>
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

}

WINRT_EXPORT namespace winrt::Windows::Services::Cortana {

inline Windows::Services::Cortana::CortanaPermissionsManager CortanaPermissionsManager::GetDefault()
{
    return get_activation_factory<CortanaPermissionsManager, Windows::Services::Cortana::ICortanaPermissionsManagerStatics>().GetDefault();
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Services::Cortana::ICortanaPermissionsManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Cortana::ICortanaPermissionsManager> {};

template<> struct hash<winrt::Windows::Services::Cortana::ICortanaPermissionsManagerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Cortana::ICortanaPermissionsManagerStatics> {};

template<> struct hash<winrt::Windows::Services::Cortana::CortanaPermissionsManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Cortana::CortanaPermissionsManager> {};

}

WINRT_WARNING_POP
