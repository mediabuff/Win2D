// C++/WinRT v1.0.170906.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Gaming.UI.2.h"

namespace winrt::impl {

template <typename D> event_token consume_Windows_Gaming_UI_IGameBarStatics<D>::VisibilityChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Gaming::UI::IGameBarStatics)->add_VisibilityChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Gaming::UI::IGameBarStatics> consume_Windows_Gaming_UI_IGameBarStatics<D>::VisibilityChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Gaming::UI::IGameBarStatics>(this, &abi_t<Windows::Gaming::UI::IGameBarStatics>::remove_VisibilityChanged, VisibilityChanged(handler));
}

template <typename D> void consume_Windows_Gaming_UI_IGameBarStatics<D>::VisibilityChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Gaming::UI::IGameBarStatics)->remove_VisibilityChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_Gaming_UI_IGameBarStatics<D>::IsInputRedirectedChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Gaming::UI::IGameBarStatics)->add_IsInputRedirectedChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Gaming::UI::IGameBarStatics> consume_Windows_Gaming_UI_IGameBarStatics<D>::IsInputRedirectedChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Gaming::UI::IGameBarStatics>(this, &abi_t<Windows::Gaming::UI::IGameBarStatics>::remove_IsInputRedirectedChanged, IsInputRedirectedChanged(handler));
}

template <typename D> void consume_Windows_Gaming_UI_IGameBarStatics<D>::IsInputRedirectedChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Gaming::UI::IGameBarStatics)->remove_IsInputRedirectedChanged(get_abi(token)));
}

template <typename D> bool consume_Windows_Gaming_UI_IGameBarStatics<D>::Visible() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Gaming::UI::IGameBarStatics)->get_Visible(&value));
    return value;
}

template <typename D> bool consume_Windows_Gaming_UI_IGameBarStatics<D>::IsInputRedirected() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Gaming::UI::IGameBarStatics)->get_IsInputRedirected(&value));
    return value;
}

template <typename D> Windows::Gaming::UI::GameChatOverlayPosition consume_Windows_Gaming_UI_IGameChatOverlay<D>::DesiredPosition() const
{
    Windows::Gaming::UI::GameChatOverlayPosition value{};
    check_hresult(WINRT_SHIM(Windows::Gaming::UI::IGameChatOverlay)->get_DesiredPosition(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Gaming_UI_IGameChatOverlay<D>::DesiredPosition(Windows::Gaming::UI::GameChatOverlayPosition const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Gaming::UI::IGameChatOverlay)->put_DesiredPosition(get_abi(value)));
}

template <typename D> void consume_Windows_Gaming_UI_IGameChatOverlay<D>::AddMessage(param::hstring const& sender, param::hstring const& message, Windows::Gaming::UI::GameChatMessageOrigin const& origin) const
{
    check_hresult(WINRT_SHIM(Windows::Gaming::UI::IGameChatOverlay)->AddMessage(get_abi(sender), get_abi(message), get_abi(origin)));
}

template <typename D> Windows::Gaming::UI::GameChatOverlay consume_Windows_Gaming_UI_IGameChatOverlayStatics<D>::GetDefault() const
{
    Windows::Gaming::UI::GameChatOverlay value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Gaming::UI::IGameChatOverlayStatics)->GetDefault(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Gaming::UI::GameMonitoringPermission> consume_Windows_Gaming_UI_IGameMonitor<D>::RequestPermissionAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Gaming::UI::GameMonitoringPermission> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Gaming::UI::IGameMonitor)->RequestPermissionAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Gaming::UI::GameMonitor consume_Windows_Gaming_UI_IGameMonitorStatics<D>::GetDefault() const
{
    Windows::Gaming::UI::GameMonitor gameMonitor{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Gaming::UI::IGameMonitorStatics)->GetDefault(put_abi(gameMonitor)));
    return gameMonitor;
}

template <typename D>
struct produce<D, Windows::Gaming::UI::IGameBarStatics> : produce_base<D, Windows::Gaming::UI::IGameBarStatics>
{
    HRESULT __stdcall add_VisibilityChanged(::IUnknown* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().VisibilityChanged(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_VisibilityChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().VisibilityChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_IsInputRedirectedChanged(::IUnknown* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().IsInputRedirectedChanged(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_IsInputRedirectedChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsInputRedirectedChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Visible(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Visible());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsInputRedirected(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsInputRedirected());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Gaming::UI::IGameChatOverlay> : produce_base<D, Windows::Gaming::UI::IGameChatOverlay>
{
    HRESULT __stdcall get_DesiredPosition(Windows::Gaming::UI::GameChatOverlayPosition* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DesiredPosition());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DesiredPosition(Windows::Gaming::UI::GameChatOverlayPosition value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DesiredPosition(*reinterpret_cast<Windows::Gaming::UI::GameChatOverlayPosition const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddMessage(HSTRING sender, HSTRING message, Windows::Gaming::UI::GameChatMessageOrigin origin) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddMessage(*reinterpret_cast<hstring const*>(&sender), *reinterpret_cast<hstring const*>(&message), *reinterpret_cast<Windows::Gaming::UI::GameChatMessageOrigin const*>(&origin));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Gaming::UI::IGameChatOverlayStatics> : produce_base<D, Windows::Gaming::UI::IGameChatOverlayStatics>
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
};

template <typename D>
struct produce<D, Windows::Gaming::UI::IGameMonitor> : produce_base<D, Windows::Gaming::UI::IGameMonitor>
{
    HRESULT __stdcall RequestPermissionAsync(::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().RequestPermissionAsync());
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
struct produce<D, Windows::Gaming::UI::IGameMonitorStatics> : produce_base<D, Windows::Gaming::UI::IGameMonitorStatics>
{
    HRESULT __stdcall GetDefault(::IUnknown** gameMonitor) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *gameMonitor = detach_abi(this->shim().GetDefault());
            return S_OK;
        }
        catch (...)
        {
            *gameMonitor = nullptr;
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Gaming::UI {

inline event_token GameBar::VisibilityChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler)
{
    return get_activation_factory<GameBar, Windows::Gaming::UI::IGameBarStatics>().VisibilityChanged(handler);
}

inline factory_event_revoker<Windows::Gaming::UI::IGameBarStatics> GameBar::VisibilityChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler)
{
    auto factory = get_activation_factory<GameBar, Windows::Gaming::UI::IGameBarStatics>();
    return { factory, &abi_t<Windows::Gaming::UI::IGameBarStatics>::remove_VisibilityChanged, factory.VisibilityChanged(handler) };
}

inline void GameBar::VisibilityChanged(event_token const& token)
{
    get_activation_factory<GameBar, Windows::Gaming::UI::IGameBarStatics>().VisibilityChanged(token);
}

inline event_token GameBar::IsInputRedirectedChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler)
{
    return get_activation_factory<GameBar, Windows::Gaming::UI::IGameBarStatics>().IsInputRedirectedChanged(handler);
}

inline factory_event_revoker<Windows::Gaming::UI::IGameBarStatics> GameBar::IsInputRedirectedChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler)
{
    auto factory = get_activation_factory<GameBar, Windows::Gaming::UI::IGameBarStatics>();
    return { factory, &abi_t<Windows::Gaming::UI::IGameBarStatics>::remove_IsInputRedirectedChanged, factory.IsInputRedirectedChanged(handler) };
}

inline void GameBar::IsInputRedirectedChanged(event_token const& token)
{
    get_activation_factory<GameBar, Windows::Gaming::UI::IGameBarStatics>().IsInputRedirectedChanged(token);
}

inline bool GameBar::Visible()
{
    return get_activation_factory<GameBar, Windows::Gaming::UI::IGameBarStatics>().Visible();
}

inline bool GameBar::IsInputRedirected()
{
    return get_activation_factory<GameBar, Windows::Gaming::UI::IGameBarStatics>().IsInputRedirected();
}

inline Windows::Gaming::UI::GameChatOverlay GameChatOverlay::GetDefault()
{
    return get_activation_factory<GameChatOverlay, Windows::Gaming::UI::IGameChatOverlayStatics>().GetDefault();
}

inline Windows::Gaming::UI::GameMonitor GameMonitor::GetDefault()
{
    return get_activation_factory<GameMonitor, Windows::Gaming::UI::IGameMonitorStatics>().GetDefault();
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Gaming::UI::IGameBarStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Gaming::UI::IGameBarStatics> {};

template<> struct hash<winrt::Windows::Gaming::UI::IGameChatOverlay> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Gaming::UI::IGameChatOverlay> {};

template<> struct hash<winrt::Windows::Gaming::UI::IGameChatOverlayStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Gaming::UI::IGameChatOverlayStatics> {};

template<> struct hash<winrt::Windows::Gaming::UI::IGameMonitor> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Gaming::UI::IGameMonitor> {};

template<> struct hash<winrt::Windows::Gaming::UI::IGameMonitorStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Gaming::UI::IGameMonitorStatics> {};

template<> struct hash<winrt::Windows::Gaming::UI::GameBar> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Gaming::UI::GameBar> {};

template<> struct hash<winrt::Windows::Gaming::UI::GameChatOverlay> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Gaming::UI::GameChatOverlay> {};

template<> struct hash<winrt::Windows::Gaming::UI::GameMonitor> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Gaming::UI::GameMonitor> {};

}

WINRT_WARNING_POP
