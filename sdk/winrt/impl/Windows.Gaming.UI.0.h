// C++/WinRT v1.0.170906.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Gaming::UI {

enum class GameChatMessageOrigin : int32_t
{
    Voice = 0,
    Text = 1,
};

enum class GameChatOverlayPosition : int32_t
{
    BottomCenter = 0,
    BottomLeft = 1,
    BottomRight = 2,
    MiddleRight = 3,
    MiddleLeft = 4,
    TopCenter = 5,
    TopLeft = 6,
    TopRight = 7,
};

enum class GameMonitoringPermission : int32_t
{
    Allowed = 0,
    DeniedByUser = 1,
    DeniedBySystem = 2,
};

struct IGameBarStatics;
struct IGameChatOverlay;
struct IGameChatOverlayStatics;
struct IGameMonitor;
struct IGameMonitorStatics;
struct GameBar;
struct GameChatOverlay;
struct GameMonitor;

}

namespace winrt::impl {

template <> struct category<Windows::Gaming::UI::IGameBarStatics>{ using type = interface_category; };
template <> struct category<Windows::Gaming::UI::IGameChatOverlay>{ using type = interface_category; };
template <> struct category<Windows::Gaming::UI::IGameChatOverlayStatics>{ using type = interface_category; };
template <> struct category<Windows::Gaming::UI::IGameMonitor>{ using type = interface_category; };
template <> struct category<Windows::Gaming::UI::IGameMonitorStatics>{ using type = interface_category; };
template <> struct category<Windows::Gaming::UI::GameBar>{ using type = class_category; };
template <> struct category<Windows::Gaming::UI::GameChatOverlay>{ using type = class_category; };
template <> struct category<Windows::Gaming::UI::GameMonitor>{ using type = class_category; };
template <> struct category<Windows::Gaming::UI::GameChatMessageOrigin>{ using type = enum_category; };
template <> struct category<Windows::Gaming::UI::GameChatOverlayPosition>{ using type = enum_category; };
template <> struct category<Windows::Gaming::UI::GameMonitoringPermission>{ using type = enum_category; };
template <> struct name<Windows::Gaming::UI::IGameBarStatics>{ static constexpr auto & value{ L"Windows.Gaming.UI.IGameBarStatics" }; };
template <> struct name<Windows::Gaming::UI::IGameChatOverlay>{ static constexpr auto & value{ L"Windows.Gaming.UI.IGameChatOverlay" }; };
template <> struct name<Windows::Gaming::UI::IGameChatOverlayStatics>{ static constexpr auto & value{ L"Windows.Gaming.UI.IGameChatOverlayStatics" }; };
template <> struct name<Windows::Gaming::UI::IGameMonitor>{ static constexpr auto & value{ L"Windows.Gaming.UI.IGameMonitor" }; };
template <> struct name<Windows::Gaming::UI::IGameMonitorStatics>{ static constexpr auto & value{ L"Windows.Gaming.UI.IGameMonitorStatics" }; };
template <> struct name<Windows::Gaming::UI::GameBar>{ static constexpr auto & value{ L"Windows.Gaming.UI.GameBar" }; };
template <> struct name<Windows::Gaming::UI::GameChatOverlay>{ static constexpr auto & value{ L"Windows.Gaming.UI.GameChatOverlay" }; };
template <> struct name<Windows::Gaming::UI::GameMonitor>{ static constexpr auto & value{ L"Windows.Gaming.UI.GameMonitor" }; };
template <> struct name<Windows::Gaming::UI::GameChatMessageOrigin>{ static constexpr auto & value{ L"Windows.Gaming.UI.GameChatMessageOrigin" }; };
template <> struct name<Windows::Gaming::UI::GameChatOverlayPosition>{ static constexpr auto & value{ L"Windows.Gaming.UI.GameChatOverlayPosition" }; };
template <> struct name<Windows::Gaming::UI::GameMonitoringPermission>{ static constexpr auto & value{ L"Windows.Gaming.UI.GameMonitoringPermission" }; };
template <> struct guid<Windows::Gaming::UI::IGameBarStatics>{ static constexpr GUID value{ 0x1DB9A292,0xCC78,0x4173,{ 0xBE,0x45,0xB6,0x1E,0x67,0x28,0x3E,0xA7 } }; };
template <> struct guid<Windows::Gaming::UI::IGameChatOverlay>{ static constexpr GUID value{ 0xFBC64865,0xF6FC,0x4A48,{ 0xAE,0x07,0x03,0xAC,0x6E,0xD4,0x37,0x04 } }; };
template <> struct guid<Windows::Gaming::UI::IGameChatOverlayStatics>{ static constexpr GUID value{ 0x89ACF614,0x7867,0x49F7,{ 0x96,0x87,0x25,0xD9,0xDB,0xF4,0x44,0xD1 } }; };
template <> struct guid<Windows::Gaming::UI::IGameMonitor>{ static constexpr GUID value{ 0x12234358,0xDD09,0x4511,{ 0xAD,0xCD,0x8D,0x59,0x75,0xD8,0x10,0x28 } }; };
template <> struct guid<Windows::Gaming::UI::IGameMonitorStatics>{ static constexpr GUID value{ 0x11674B34,0x5AE0,0x4BB4,{ 0xB9,0x1F,0x8A,0xCB,0x48,0x15,0x9A,0x71 } }; };
template <> struct default_interface<Windows::Gaming::UI::GameChatOverlay>{ using type = Windows::Gaming::UI::IGameChatOverlay; };
template <> struct default_interface<Windows::Gaming::UI::GameMonitor>{ using type = Windows::Gaming::UI::IGameMonitor; };

template <typename D>
struct consume_Windows_Gaming_UI_IGameBarStatics
{
    event_token VisibilityChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    using VisibilityChanged_revoker = event_revoker<Windows::Gaming::UI::IGameBarStatics>;
    VisibilityChanged_revoker VisibilityChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    void VisibilityChanged(event_token const& token) const;
    event_token IsInputRedirectedChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    using IsInputRedirectedChanged_revoker = event_revoker<Windows::Gaming::UI::IGameBarStatics>;
    IsInputRedirectedChanged_revoker IsInputRedirectedChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    void IsInputRedirectedChanged(event_token const& token) const;
    bool Visible() const;
    bool IsInputRedirected() const;
};
template <> struct consume<Windows::Gaming::UI::IGameBarStatics> { template <typename D> using type = consume_Windows_Gaming_UI_IGameBarStatics<D>; };

template <typename D>
struct consume_Windows_Gaming_UI_IGameChatOverlay
{
    Windows::Gaming::UI::GameChatOverlayPosition DesiredPosition() const;
    void DesiredPosition(Windows::Gaming::UI::GameChatOverlayPosition const& value) const;
    void AddMessage(param::hstring const& sender, param::hstring const& message, Windows::Gaming::UI::GameChatMessageOrigin const& origin) const;
};
template <> struct consume<Windows::Gaming::UI::IGameChatOverlay> { template <typename D> using type = consume_Windows_Gaming_UI_IGameChatOverlay<D>; };

template <typename D>
struct consume_Windows_Gaming_UI_IGameChatOverlayStatics
{
    Windows::Gaming::UI::GameChatOverlay GetDefault() const;
};
template <> struct consume<Windows::Gaming::UI::IGameChatOverlayStatics> { template <typename D> using type = consume_Windows_Gaming_UI_IGameChatOverlayStatics<D>; };

template <typename D>
struct consume_Windows_Gaming_UI_IGameMonitor
{
    Windows::Foundation::IAsyncOperation<Windows::Gaming::UI::GameMonitoringPermission> RequestPermissionAsync() const;
};
template <> struct consume<Windows::Gaming::UI::IGameMonitor> { template <typename D> using type = consume_Windows_Gaming_UI_IGameMonitor<D>; };

template <typename D>
struct consume_Windows_Gaming_UI_IGameMonitorStatics
{
    Windows::Gaming::UI::GameMonitor GetDefault() const;
};
template <> struct consume<Windows::Gaming::UI::IGameMonitorStatics> { template <typename D> using type = consume_Windows_Gaming_UI_IGameMonitorStatics<D>; };

template <> struct abi<Windows::Gaming::UI::IGameBarStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_VisibilityChanged(::IUnknown* handler, event_token* token) = 0;
    virtual HRESULT __stdcall remove_VisibilityChanged(event_token token) = 0;
    virtual HRESULT __stdcall add_IsInputRedirectedChanged(::IUnknown* handler, event_token* token) = 0;
    virtual HRESULT __stdcall remove_IsInputRedirectedChanged(event_token token) = 0;
    virtual HRESULT __stdcall get_Visible(bool* value) = 0;
    virtual HRESULT __stdcall get_IsInputRedirected(bool* value) = 0;
};};

template <> struct abi<Windows::Gaming::UI::IGameChatOverlay>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DesiredPosition(Windows::Gaming::UI::GameChatOverlayPosition* value) = 0;
    virtual HRESULT __stdcall put_DesiredPosition(Windows::Gaming::UI::GameChatOverlayPosition value) = 0;
    virtual HRESULT __stdcall AddMessage(HSTRING sender, HSTRING message, Windows::Gaming::UI::GameChatMessageOrigin origin) = 0;
};};

template <> struct abi<Windows::Gaming::UI::IGameChatOverlayStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDefault(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Gaming::UI::IGameMonitor>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall RequestPermissionAsync(::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Gaming::UI::IGameMonitorStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDefault(::IUnknown** gameMonitor) = 0;
};};

}
