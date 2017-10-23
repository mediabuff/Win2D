// C++/WinRT v1.0.170906.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH

static_assert(winrt::impl::make_constexpr_string(CPPWINRT_VERSION) == "1.0.170906.1", "Mismatched component and base headers.");
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Microsoft.Graphics.Canvas.2.h"
#include "winrt/impl/Microsoft.Graphics.Canvas.UI.2.h"
#include "winrt/impl/Windows.Graphics.Imaging.2.h"
#include "winrt/impl/Windows.UI.2.h"
#include "winrt/impl/Windows.UI.Core.2.h"
#include "winrt/impl/Windows.UI.Xaml.Media.Imaging.2.h"
#include "winrt/impl/Windows.UI.Xaml.2.h"
#include "winrt/impl/Windows.UI.Xaml.Controls.2.h"
#include "winrt/impl/Windows.UI.Xaml.Media.2.h"
#include "winrt/impl/Microsoft.Graphics.Canvas.UI.Xaml.2.h"
#include "winrt/Microsoft.Graphics.Canvas.UI.h"

namespace winrt::impl {

template <typename D> event_token consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasAnimatedControl<D>::CreateResources(Windows::Foundation::TypedEventHandler<Microsoft::Graphics::Canvas::UI::Xaml::CanvasAnimatedControl, Microsoft::Graphics::Canvas::UI::CanvasCreateResourcesEventArgs> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedControl)->add_CreateResources(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedControl> consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasAnimatedControl<D>::CreateResources(auto_revoke_t, Windows::Foundation::TypedEventHandler<Microsoft::Graphics::Canvas::UI::Xaml::CanvasAnimatedControl, Microsoft::Graphics::Canvas::UI::CanvasCreateResourcesEventArgs> const& value) const
{
    return impl::make_event_revoker<D, Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedControl>(this, &abi_t<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedControl>::remove_CreateResources, CreateResources(value));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasAnimatedControl<D>::CreateResources(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedControl)->remove_CreateResources(get_abi(token)));
}

template <typename D> event_token consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasAnimatedControl<D>::Update(Windows::Foundation::TypedEventHandler<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedControl, Microsoft::Graphics::Canvas::UI::Xaml::CanvasAnimatedUpdateEventArgs> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedControl)->add_Update(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedControl> consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasAnimatedControl<D>::Update(auto_revoke_t, Windows::Foundation::TypedEventHandler<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedControl, Microsoft::Graphics::Canvas::UI::Xaml::CanvasAnimatedUpdateEventArgs> const& value) const
{
    return impl::make_event_revoker<D, Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedControl>(this, &abi_t<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedControl>::remove_Update, Update(value));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasAnimatedControl<D>::Update(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedControl)->remove_Update(get_abi(token)));
}

template <typename D> event_token consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasAnimatedControl<D>::Draw(Windows::Foundation::TypedEventHandler<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedControl, Microsoft::Graphics::Canvas::UI::Xaml::CanvasAnimatedDrawEventArgs> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedControl)->add_Draw(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedControl> consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasAnimatedControl<D>::Draw(auto_revoke_t, Windows::Foundation::TypedEventHandler<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedControl, Microsoft::Graphics::Canvas::UI::Xaml::CanvasAnimatedDrawEventArgs> const& value) const
{
    return impl::make_event_revoker<D, Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedControl>(this, &abi_t<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedControl>::remove_Draw, Draw(value));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasAnimatedControl<D>::Draw(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedControl)->remove_Draw(get_abi(token)));
}

template <typename D> event_token consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasAnimatedControl<D>::GameLoopStarting(Windows::Foundation::TypedEventHandler<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedControl, Windows::Foundation::IInspectable> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedControl)->add_GameLoopStarting(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedControl> consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasAnimatedControl<D>::GameLoopStarting(auto_revoke_t, Windows::Foundation::TypedEventHandler<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedControl, Windows::Foundation::IInspectable> const& value) const
{
    return impl::make_event_revoker<D, Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedControl>(this, &abi_t<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedControl>::remove_GameLoopStarting, GameLoopStarting(value));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasAnimatedControl<D>::GameLoopStarting(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedControl)->remove_GameLoopStarting(get_abi(token)));
}

template <typename D> event_token consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasAnimatedControl<D>::GameLoopStopped(Windows::Foundation::TypedEventHandler<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedControl, Windows::Foundation::IInspectable> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedControl)->add_GameLoopStopped(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedControl> consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasAnimatedControl<D>::GameLoopStopped(auto_revoke_t, Windows::Foundation::TypedEventHandler<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedControl, Windows::Foundation::IInspectable> const& value) const
{
    return impl::make_event_revoker<D, Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedControl>(this, &abi_t<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedControl>::remove_GameLoopStopped, GameLoopStopped(value));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasAnimatedControl<D>::GameLoopStopped(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedControl)->remove_GameLoopStopped(get_abi(token)));
}

template <typename D> bool consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasAnimatedControl<D>::ReadyToDraw() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedControl)->get_ReadyToDraw(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasAnimatedControl<D>::IsFixedTimeStep(bool value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedControl)->put_IsFixedTimeStep(value));
}

template <typename D> bool consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasAnimatedControl<D>::IsFixedTimeStep() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedControl)->get_IsFixedTimeStep(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasAnimatedControl<D>::TargetElapsedTime(Windows::Foundation::TimeSpan const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedControl)->put_TargetElapsedTime(get_abi(value)));
}

template <typename D> Windows::Foundation::TimeSpan consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasAnimatedControl<D>::TargetElapsedTime() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedControl)->get_TargetElapsedTime(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasAnimatedControl<D>::Paused(bool value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedControl)->put_Paused(value));
}

template <typename D> bool consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasAnimatedControl<D>::Paused() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedControl)->get_Paused(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasAnimatedControl<D>::ClearColor(Windows::UI::Color const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedControl)->put_ClearColor(get_abi(value)));
}

template <typename D> Windows::UI::Color consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasAnimatedControl<D>::ClearColor() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedControl)->get_ClearColor(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Size consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasAnimatedControl<D>::Size() const
{
    Windows::Foundation::Size value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedControl)->get_Size(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasAnimatedControl<D>::Invalidate() const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedControl)->Invalidate());
}

template <typename D> void consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasAnimatedControl<D>::ResetElapsedTime() const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedControl)->ResetElapsedTime());
}

template <typename D> Windows::UI::Core::CoreIndependentInputSource consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasAnimatedControl<D>::CreateCoreIndependentInputSource(Windows::UI::Core::CoreInputDeviceTypes const& deviceTypes) const
{
    Windows::UI::Core::CoreIndependentInputSource returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedControl)->CreateCoreIndependentInputSource(get_abi(deviceTypes), put_abi(returnValue)));
    return returnValue;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasAnimatedControl<D>::RemoveFromVisualTree() const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedControl)->RemoveFromVisualTree());
}

template <typename D> bool consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasAnimatedControl<D>::HasGameLoopThreadAccess() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedControl)->get_HasGameLoopThreadAccess(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasAnimatedControl<D>::RunOnGameLoopThreadAsync(Windows::UI::Core::DispatchedHandler const& agileCallback) const
{
    Windows::Foundation::IAsyncAction asyncAction{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedControl)->RunOnGameLoopThreadAsync(get_abi(agileCallback), put_abi(asyncAction)));
    return asyncAction;
}

template <typename D> bool consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasAnimatedControl<D>::UseSharedDevice() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedControl)->get_UseSharedDevice(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasAnimatedControl<D>::UseSharedDevice(bool value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedControl)->put_UseSharedDevice(value));
}

template <typename D> bool consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasAnimatedControl<D>::ForceSoftwareRenderer() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedControl)->get_ForceSoftwareRenderer(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasAnimatedControl<D>::ForceSoftwareRenderer(bool value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedControl)->put_ForceSoftwareRenderer(value));
}

template <typename D> Microsoft::Graphics::Canvas::CanvasDevice consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasAnimatedControl<D>::CustomDevice() const
{
    Microsoft::Graphics::Canvas::CanvasDevice value{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedControl)->get_CustomDevice(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasAnimatedControl<D>::CustomDevice(Microsoft::Graphics::Canvas::CanvasDevice const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedControl)->put_CustomDevice(get_abi(value)));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasAnimatedControl<D>::DpiScale() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedControl)->get_DpiScale(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasAnimatedControl<D>::DpiScale(float ratio) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedControl)->put_DpiScale(ratio));
}

template <typename D> Microsoft::Graphics::Canvas::CanvasDrawingSession consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasAnimatedDrawEventArgs<D>::DrawingSession() const
{
    Microsoft::Graphics::Canvas::CanvasDrawingSession value{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedDrawEventArgs)->get_DrawingSession(put_abi(value)));
    return value;
}

template <typename D> Microsoft::Graphics::Canvas::UI::CanvasTimingInformation consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasAnimatedDrawEventArgs<D>::Timing() const
{
    Microsoft::Graphics::Canvas::UI::CanvasTimingInformation value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedDrawEventArgs)->get_Timing(put_abi(value)));
    return value;
}

template <typename D> Microsoft::Graphics::Canvas::UI::Xaml::CanvasAnimatedDrawEventArgs consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasAnimatedDrawEventArgsFactory<D>::Create(Microsoft::Graphics::Canvas::CanvasDrawingSession const& canvasDrawingSession, Microsoft::Graphics::Canvas::UI::CanvasTimingInformation const& timingInformation) const
{
    Microsoft::Graphics::Canvas::UI::Xaml::CanvasAnimatedDrawEventArgs animatedControlDrawEventArgs{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedDrawEventArgsFactory)->Create(get_abi(canvasDrawingSession), get_abi(timingInformation), put_abi(animatedControlDrawEventArgs)));
    return animatedControlDrawEventArgs;
}

template <typename D> Microsoft::Graphics::Canvas::UI::CanvasTimingInformation consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasAnimatedUpdateEventArgs<D>::Timing() const
{
    Microsoft::Graphics::Canvas::UI::CanvasTimingInformation value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedUpdateEventArgs)->get_Timing(put_abi(value)));
    return value;
}

template <typename D> Microsoft::Graphics::Canvas::UI::Xaml::CanvasAnimatedUpdateEventArgs consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasAnimatedUpdateEventArgsFactory<D>::Create(Microsoft::Graphics::Canvas::UI::CanvasTimingInformation const& timingInformation) const
{
    Microsoft::Graphics::Canvas::UI::Xaml::CanvasAnimatedUpdateEventArgs updateEventArgs{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedUpdateEventArgsFactory)->Create(get_abi(timingInformation), put_abi(updateEventArgs)));
    return updateEventArgs;
}

template <typename D> event_token consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasControl<D>::CreateResources(Windows::Foundation::TypedEventHandler<Microsoft::Graphics::Canvas::UI::Xaml::CanvasControl, Microsoft::Graphics::Canvas::UI::CanvasCreateResourcesEventArgs> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasControl)->add_CreateResources(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasControl> consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasControl<D>::CreateResources(auto_revoke_t, Windows::Foundation::TypedEventHandler<Microsoft::Graphics::Canvas::UI::Xaml::CanvasControl, Microsoft::Graphics::Canvas::UI::CanvasCreateResourcesEventArgs> const& value) const
{
    return impl::make_event_revoker<D, Microsoft::Graphics::Canvas::UI::Xaml::ICanvasControl>(this, &abi_t<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasControl>::remove_CreateResources, CreateResources(value));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasControl<D>::CreateResources(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasControl)->remove_CreateResources(get_abi(token)));
}

template <typename D> bool consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasControl<D>::ReadyToDraw() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasControl)->get_ReadyToDraw(&value));
    return value;
}

template <typename D> event_token consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasControl<D>::Draw(Windows::Foundation::TypedEventHandler<Microsoft::Graphics::Canvas::UI::Xaml::CanvasControl, Microsoft::Graphics::Canvas::UI::Xaml::CanvasDrawEventArgs> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasControl)->add_Draw(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasControl> consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasControl<D>::Draw(auto_revoke_t, Windows::Foundation::TypedEventHandler<Microsoft::Graphics::Canvas::UI::Xaml::CanvasControl, Microsoft::Graphics::Canvas::UI::Xaml::CanvasDrawEventArgs> const& value) const
{
    return impl::make_event_revoker<D, Microsoft::Graphics::Canvas::UI::Xaml::ICanvasControl>(this, &abi_t<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasControl>::remove_Draw, Draw(value));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasControl<D>::Draw(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasControl)->remove_Draw(get_abi(token)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasControl<D>::ClearColor(Windows::UI::Color const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasControl)->put_ClearColor(get_abi(value)));
}

template <typename D> Windows::UI::Color consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasControl<D>::ClearColor() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasControl)->get_ClearColor(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasControl<D>::Invalidate() const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasControl)->Invalidate());
}

template <typename D> Windows::Foundation::Size consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasControl<D>::Size() const
{
    Windows::Foundation::Size size{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasControl)->get_Size(put_abi(size)));
    return size;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasControl<D>::RemoveFromVisualTree() const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasControl)->RemoveFromVisualTree());
}

template <typename D> bool consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasControl<D>::UseSharedDevice() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasControl)->get_UseSharedDevice(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasControl<D>::UseSharedDevice(bool value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasControl)->put_UseSharedDevice(value));
}

template <typename D> bool consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasControl<D>::ForceSoftwareRenderer() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasControl)->get_ForceSoftwareRenderer(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasControl<D>::ForceSoftwareRenderer(bool value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasControl)->put_ForceSoftwareRenderer(value));
}

template <typename D> Microsoft::Graphics::Canvas::CanvasDevice consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasControl<D>::CustomDevice() const
{
    Microsoft::Graphics::Canvas::CanvasDevice value{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasControl)->get_CustomDevice(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasControl<D>::CustomDevice(Microsoft::Graphics::Canvas::CanvasDevice const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasControl)->put_CustomDevice(get_abi(value)));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasControl<D>::DpiScale() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasControl)->get_DpiScale(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasControl<D>::DpiScale(float ratio) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasControl)->put_DpiScale(ratio));
}

template <typename D> Microsoft::Graphics::Canvas::CanvasDrawingSession consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasDrawEventArgs<D>::DrawingSession() const
{
    Microsoft::Graphics::Canvas::CanvasDrawingSession value{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasDrawEventArgs)->get_DrawingSession(put_abi(value)));
    return value;
}

template <typename D> Microsoft::Graphics::Canvas::UI::Xaml::CanvasDrawEventArgs consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasDrawEventArgsFactory<D>::Create(Microsoft::Graphics::Canvas::CanvasDrawingSession const& canvasDrawingSession) const
{
    Microsoft::Graphics::Canvas::UI::Xaml::CanvasDrawEventArgs drawEventArgs{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasDrawEventArgsFactory)->Create(get_abi(canvasDrawingSession), put_abi(drawEventArgs)));
    return drawEventArgs;
}

template <typename D> Microsoft::Graphics::Canvas::CanvasDrawingSession consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasImageSource<D>::CreateDrawingSession(Windows::UI::Color const& clearColor) const
{
    Microsoft::Graphics::Canvas::CanvasDrawingSession drawingSession{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasImageSource)->CreateDrawingSession(get_abi(clearColor), put_abi(drawingSession)));
    return drawingSession;
}

template <typename D> Microsoft::Graphics::Canvas::CanvasDrawingSession consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasImageSource<D>::CreateDrawingSession(Windows::UI::Color const& clearColor, Windows::Foundation::Rect const& updateRectangle) const
{
    Microsoft::Graphics::Canvas::CanvasDrawingSession drawingSession{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasImageSource)->CreateDrawingSessionWithUpdateRectangle(get_abi(clearColor), get_abi(updateRectangle), put_abi(drawingSession)));
    return drawingSession;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasImageSource<D>::Recreate(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasImageSource)->Recreate(get_abi(value)));
}

template <typename D> Windows::Foundation::Size consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasImageSource<D>::Size() const
{
    Windows::Foundation::Size size{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasImageSource)->get_Size(put_abi(size)));
    return size;
}

template <typename D> Windows::Graphics::Imaging::BitmapSize consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasImageSource<D>::SizeInPixels() const
{
    Windows::Graphics::Imaging::BitmapSize size{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasImageSource)->get_SizeInPixels(put_abi(size)));
    return size;
}

template <typename D> Microsoft::Graphics::Canvas::CanvasAlphaMode consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasImageSource<D>::AlphaMode() const
{
    Microsoft::Graphics::Canvas::CanvasAlphaMode value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasImageSource)->get_AlphaMode(put_abi(value)));
    return value;
}

template <typename D> Microsoft::Graphics::Canvas::UI::Xaml::CanvasImageSource consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasImageSourceFactory<D>::CreateWithSize(Microsoft::Graphics::Canvas::ICanvasResourceCreatorWithDpi const& resourceCreator, Windows::Foundation::Size const& size) const
{
    Microsoft::Graphics::Canvas::UI::Xaml::CanvasImageSource imageSource{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasImageSourceFactory)->CreateWithSize(get_abi(resourceCreator), get_abi(size), put_abi(imageSource)));
    return imageSource;
}

template <typename D> Microsoft::Graphics::Canvas::UI::Xaml::CanvasImageSource consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasImageSourceFactory<D>::CreateWithWidthAndHeight(Microsoft::Graphics::Canvas::ICanvasResourceCreatorWithDpi const& resourceCreator, float width, float height) const
{
    Microsoft::Graphics::Canvas::UI::Xaml::CanvasImageSource imageSource{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasImageSourceFactory)->CreateWithWidthAndHeight(get_abi(resourceCreator), width, height, put_abi(imageSource)));
    return imageSource;
}

template <typename D> Microsoft::Graphics::Canvas::UI::Xaml::CanvasImageSource consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasImageSourceFactory<D>::CreateWithWidthAndHeightAndDpi(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, float width, float height, float dpi) const
{
    Microsoft::Graphics::Canvas::UI::Xaml::CanvasImageSource imageSource{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasImageSourceFactory)->CreateWithWidthAndHeightAndDpi(get_abi(resourceCreator), width, height, dpi, put_abi(imageSource)));
    return imageSource;
}

template <typename D> Microsoft::Graphics::Canvas::UI::Xaml::CanvasImageSource consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasImageSourceFactory<D>::CreateWithWidthAndHeightAndDpiAndAlphaMode(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, float width, float height, float dpi, Microsoft::Graphics::Canvas::CanvasAlphaMode const& alphaMode) const
{
    Microsoft::Graphics::Canvas::UI::Xaml::CanvasImageSource imageSource{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasImageSourceFactory)->CreateWithWidthAndHeightAndDpiAndAlphaMode(get_abi(resourceCreator), width, height, dpi, get_abi(alphaMode), put_abi(imageSource)));
    return imageSource;
}

template <typename D> com_array<Windows::Foundation::Rect> consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasRegionsInvalidatedEventArgs<D>::InvalidatedRegions() const
{
    com_array<Windows::Foundation::Rect> value;
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasRegionsInvalidatedEventArgs)->get_InvalidatedRegions(impl::put_size_abi(value), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Rect consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasRegionsInvalidatedEventArgs<D>::VisibleRegion() const
{
    Windows::Foundation::Rect value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasRegionsInvalidatedEventArgs)->get_VisibleRegion(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasSwapChainPanel<D>::SwapChain(Microsoft::Graphics::Canvas::CanvasSwapChain const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasSwapChainPanel)->put_SwapChain(get_abi(value)));
}

template <typename D> Microsoft::Graphics::Canvas::CanvasSwapChain consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasSwapChainPanel<D>::SwapChain() const
{
    Microsoft::Graphics::Canvas::CanvasSwapChain value{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasSwapChainPanel)->get_SwapChain(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasSwapChainPanel<D>::RemoveFromVisualTree() const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasSwapChainPanel)->RemoveFromVisualTree());
}

template <typename D> event_token consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasVirtualControl<D>::CreateResources(Windows::Foundation::TypedEventHandler<Microsoft::Graphics::Canvas::UI::Xaml::CanvasVirtualControl, Microsoft::Graphics::Canvas::UI::CanvasCreateResourcesEventArgs> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualControl)->add_CreateResources(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualControl> consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasVirtualControl<D>::CreateResources(auto_revoke_t, Windows::Foundation::TypedEventHandler<Microsoft::Graphics::Canvas::UI::Xaml::CanvasVirtualControl, Microsoft::Graphics::Canvas::UI::CanvasCreateResourcesEventArgs> const& value) const
{
    return impl::make_event_revoker<D, Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualControl>(this, &abi_t<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualControl>::remove_CreateResources, CreateResources(value));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasVirtualControl<D>::CreateResources(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualControl)->remove_CreateResources(get_abi(token)));
}

template <typename D> bool consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasVirtualControl<D>::ReadyToDraw() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualControl)->get_ReadyToDraw(&value));
    return value;
}

template <typename D> event_token consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasVirtualControl<D>::RegionsInvalidated(Windows::Foundation::TypedEventHandler<Microsoft::Graphics::Canvas::UI::Xaml::CanvasVirtualControl, Microsoft::Graphics::Canvas::UI::Xaml::CanvasRegionsInvalidatedEventArgs> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualControl)->add_RegionsInvalidated(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualControl> consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasVirtualControl<D>::RegionsInvalidated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Microsoft::Graphics::Canvas::UI::Xaml::CanvasVirtualControl, Microsoft::Graphics::Canvas::UI::Xaml::CanvasRegionsInvalidatedEventArgs> const& value) const
{
    return impl::make_event_revoker<D, Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualControl>(this, &abi_t<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualControl>::remove_RegionsInvalidated, RegionsInvalidated(value));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasVirtualControl<D>::RegionsInvalidated(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualControl)->remove_RegionsInvalidated(get_abi(token)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasVirtualControl<D>::ClearColor(Windows::UI::Color const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualControl)->put_ClearColor(get_abi(value)));
}

template <typename D> Windows::UI::Color consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasVirtualControl<D>::ClearColor() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualControl)->get_ClearColor(put_abi(value)));
    return value;
}

template <typename D> Microsoft::Graphics::Canvas::CanvasDrawingSession consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasVirtualControl<D>::CreateDrawingSession(Windows::Foundation::Rect const& updateRectangle) const
{
    Microsoft::Graphics::Canvas::CanvasDrawingSession drawingSession{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualControl)->CreateDrawingSession(get_abi(updateRectangle), put_abi(drawingSession)));
    return drawingSession;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasVirtualControl<D>::SuspendDrawingSession(Microsoft::Graphics::Canvas::CanvasDrawingSession const& drawingSession) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualControl)->SuspendDrawingSession(get_abi(drawingSession)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasVirtualControl<D>::ResumeDrawingSession(Microsoft::Graphics::Canvas::CanvasDrawingSession const& drawingSession) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualControl)->ResumeDrawingSession(get_abi(drawingSession)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasVirtualControl<D>::Invalidate() const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualControl)->Invalidate());
}

template <typename D> void consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasVirtualControl<D>::Invalidate(Windows::Foundation::Rect const& region) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualControl)->InvalidateRegion(get_abi(region)));
}

template <typename D> Windows::Foundation::Size consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasVirtualControl<D>::Size() const
{
    Windows::Foundation::Size size{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualControl)->get_Size(put_abi(size)));
    return size;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasVirtualControl<D>::RemoveFromVisualTree() const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualControl)->RemoveFromVisualTree());
}

template <typename D> bool consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasVirtualControl<D>::UseSharedDevice() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualControl)->get_UseSharedDevice(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasVirtualControl<D>::UseSharedDevice(bool value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualControl)->put_UseSharedDevice(value));
}

template <typename D> bool consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasVirtualControl<D>::ForceSoftwareRenderer() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualControl)->get_ForceSoftwareRenderer(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasVirtualControl<D>::ForceSoftwareRenderer(bool value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualControl)->put_ForceSoftwareRenderer(value));
}

template <typename D> Microsoft::Graphics::Canvas::CanvasDevice consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasVirtualControl<D>::CustomDevice() const
{
    Microsoft::Graphics::Canvas::CanvasDevice value{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualControl)->get_CustomDevice(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasVirtualControl<D>::CustomDevice(Microsoft::Graphics::Canvas::CanvasDevice const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualControl)->put_CustomDevice(get_abi(value)));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasVirtualControl<D>::DpiScale() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualControl)->get_DpiScale(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasVirtualControl<D>::DpiScale(float ratio) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualControl)->put_DpiScale(ratio));
}

template <typename D> Windows::UI::Xaml::Media::Imaging::VirtualSurfaceImageSource consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasVirtualImageSource<D>::Source() const
{
    Windows::UI::Xaml::Media::Imaging::VirtualSurfaceImageSource value{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualImageSource)->get_Source(put_abi(value)));
    return value;
}

template <typename D> Microsoft::Graphics::Canvas::CanvasDrawingSession consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasVirtualImageSource<D>::CreateDrawingSession(Windows::UI::Color const& clearColor, Windows::Foundation::Rect const& updateRectangle) const
{
    Microsoft::Graphics::Canvas::CanvasDrawingSession drawingSession{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualImageSource)->CreateDrawingSession(get_abi(clearColor), get_abi(updateRectangle), put_abi(drawingSession)));
    return drawingSession;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasVirtualImageSource<D>::SuspendDrawingSession(Microsoft::Graphics::Canvas::CanvasDrawingSession const& drawingSession) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualImageSource)->SuspendDrawingSession(get_abi(drawingSession)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasVirtualImageSource<D>::ResumeDrawingSession(Microsoft::Graphics::Canvas::CanvasDrawingSession const& drawingSession) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualImageSource)->ResumeDrawingSession(get_abi(drawingSession)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasVirtualImageSource<D>::Invalidate() const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualImageSource)->Invalidate());
}

template <typename D> void consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasVirtualImageSource<D>::Invalidate(Windows::Foundation::Rect const& region) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualImageSource)->InvalidateRegion(get_abi(region)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasVirtualImageSource<D>::RaiseRegionsInvalidatedIfAny() const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualImageSource)->RaiseRegionsInvalidatedIfAny());
}

template <typename D> event_token consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasVirtualImageSource<D>::RegionsInvalidated(Windows::Foundation::TypedEventHandler<Microsoft::Graphics::Canvas::UI::Xaml::CanvasVirtualImageSource, Microsoft::Graphics::Canvas::UI::Xaml::CanvasRegionsInvalidatedEventArgs> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualImageSource)->add_RegionsInvalidated(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualImageSource> consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasVirtualImageSource<D>::RegionsInvalidated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Microsoft::Graphics::Canvas::UI::Xaml::CanvasVirtualImageSource, Microsoft::Graphics::Canvas::UI::Xaml::CanvasRegionsInvalidatedEventArgs> const& value) const
{
    return impl::make_event_revoker<D, Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualImageSource>(this, &abi_t<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualImageSource>::remove_RegionsInvalidated, RegionsInvalidated(value));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasVirtualImageSource<D>::RegionsInvalidated(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualImageSource)->remove_RegionsInvalidated(get_abi(token)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasVirtualImageSource<D>::Resize(Windows::Foundation::Size const& size) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualImageSource)->ResizeWithSize(get_abi(size)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasVirtualImageSource<D>::Resize(float width, float height) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualImageSource)->ResizeWithWidthAndHeight(width, height));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasVirtualImageSource<D>::Resize(float width, float height, float dpi) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualImageSource)->ResizeWithWidthAndHeightAndDpi(width, height, dpi));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasVirtualImageSource<D>::Recreate(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualImageSource)->Recreate(get_abi(resourceCreator)));
}

template <typename D> Windows::Foundation::Size consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasVirtualImageSource<D>::Size() const
{
    Windows::Foundation::Size size{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualImageSource)->get_Size(put_abi(size)));
    return size;
}

template <typename D> Windows::Graphics::Imaging::BitmapSize consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasVirtualImageSource<D>::SizeInPixels() const
{
    Windows::Graphics::Imaging::BitmapSize size{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualImageSource)->get_SizeInPixels(put_abi(size)));
    return size;
}

template <typename D> Microsoft::Graphics::Canvas::CanvasAlphaMode consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasVirtualImageSource<D>::AlphaMode() const
{
    Microsoft::Graphics::Canvas::CanvasAlphaMode value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualImageSource)->get_AlphaMode(put_abi(value)));
    return value;
}

template <typename D> Microsoft::Graphics::Canvas::UI::Xaml::CanvasVirtualImageSource consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasVirtualImageSourceFactory<D>::CreateWithSize(Microsoft::Graphics::Canvas::ICanvasResourceCreatorWithDpi const& resourceCreator, Windows::Foundation::Size const& size) const
{
    Microsoft::Graphics::Canvas::UI::Xaml::CanvasVirtualImageSource imageSource{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualImageSourceFactory)->CreateWithSize(get_abi(resourceCreator), get_abi(size), put_abi(imageSource)));
    return imageSource;
}

template <typename D> Microsoft::Graphics::Canvas::UI::Xaml::CanvasVirtualImageSource consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasVirtualImageSourceFactory<D>::CreateWithWidthAndHeight(Microsoft::Graphics::Canvas::ICanvasResourceCreatorWithDpi const& resourceCreator, float width, float height) const
{
    Microsoft::Graphics::Canvas::UI::Xaml::CanvasVirtualImageSource imageSource{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualImageSourceFactory)->CreateWithWidthAndHeight(get_abi(resourceCreator), width, height, put_abi(imageSource)));
    return imageSource;
}

template <typename D> Microsoft::Graphics::Canvas::UI::Xaml::CanvasVirtualImageSource consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasVirtualImageSourceFactory<D>::CreateWithWidthAndHeightAndDpi(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, float width, float height, float dpi) const
{
    Microsoft::Graphics::Canvas::UI::Xaml::CanvasVirtualImageSource imageSource{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualImageSourceFactory)->CreateWithWidthAndHeightAndDpi(get_abi(resourceCreator), width, height, dpi, put_abi(imageSource)));
    return imageSource;
}

template <typename D> Microsoft::Graphics::Canvas::UI::Xaml::CanvasVirtualImageSource consume_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasVirtualImageSourceFactory<D>::CreateWithWidthAndHeightAndDpiAndAlphaMode(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, float width, float height, float dpi, Microsoft::Graphics::Canvas::CanvasAlphaMode const& alphaMode) const
{
    Microsoft::Graphics::Canvas::UI::Xaml::CanvasVirtualImageSource imageSource{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualImageSourceFactory)->CreateWithWidthAndHeightAndDpiAndAlphaMode(get_abi(resourceCreator), width, height, dpi, get_abi(alphaMode), put_abi(imageSource)));
    return imageSource;
}

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedControl> : produce_base<D, Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedControl>
{
    HRESULT __stdcall add_CreateResources(::IUnknown* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().CreateResources(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Microsoft::Graphics::Canvas::UI::Xaml::CanvasAnimatedControl, Microsoft::Graphics::Canvas::UI::CanvasCreateResourcesEventArgs> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_CreateResources(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CreateResources(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Update(::IUnknown* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().Update(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedControl, Microsoft::Graphics::Canvas::UI::Xaml::CanvasAnimatedUpdateEventArgs> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Update(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Update(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Draw(::IUnknown* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().Draw(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedControl, Microsoft::Graphics::Canvas::UI::Xaml::CanvasAnimatedDrawEventArgs> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Draw(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Draw(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_GameLoopStarting(::IUnknown* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().GameLoopStarting(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedControl, Windows::Foundation::IInspectable> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_GameLoopStarting(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GameLoopStarting(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_GameLoopStopped(::IUnknown* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().GameLoopStopped(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedControl, Windows::Foundation::IInspectable> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_GameLoopStopped(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GameLoopStopped(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ReadyToDraw(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ReadyToDraw());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsFixedTimeStep(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsFixedTimeStep(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsFixedTimeStep(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsFixedTimeStep());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TargetElapsedTime(Windows::Foundation::TimeSpan value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TargetElapsedTime(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TargetElapsedTime(Windows::Foundation::TimeSpan* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TargetElapsedTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Paused(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Paused(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Paused(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Paused());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ClearColor(struct_of<4> value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ClearColor(*reinterpret_cast<Windows::UI::Color const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ClearColor(struct_of<4>* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ClearColor());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Size(Windows::Foundation::Size* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Size());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Invalidate() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Invalidate();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ResetElapsedTime() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ResetElapsedTime();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateCoreIndependentInputSource(Windows::UI::Core::CoreInputDeviceTypes deviceTypes, ::IUnknown** returnValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().CreateCoreIndependentInputSource(*reinterpret_cast<Windows::UI::Core::CoreInputDeviceTypes const*>(&deviceTypes)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RemoveFromVisualTree() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoveFromVisualTree();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HasGameLoopThreadAccess(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HasGameLoopThreadAccess());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RunOnGameLoopThreadAsync(::IUnknown* agileCallback, ::IUnknown** asyncAction) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncAction = detach_abi(this->shim().RunOnGameLoopThreadAsync(*reinterpret_cast<Windows::UI::Core::DispatchedHandler const*>(&agileCallback)));
            return S_OK;
        }
        catch (...)
        {
            *asyncAction = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UseSharedDevice(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UseSharedDevice());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_UseSharedDevice(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UseSharedDevice(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ForceSoftwareRenderer(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ForceSoftwareRenderer());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ForceSoftwareRenderer(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ForceSoftwareRenderer(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CustomDevice(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CustomDevice());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CustomDevice(::IUnknown* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CustomDevice(*reinterpret_cast<Microsoft::Graphics::Canvas::CanvasDevice const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DpiScale(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DpiScale());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DpiScale(float ratio) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DpiScale(ratio);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedDrawEventArgs> : produce_base<D, Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedDrawEventArgs>
{
    HRESULT __stdcall get_DrawingSession(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DrawingSession());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Timing(struct_of<32>* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Timing());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedDrawEventArgsFactory> : produce_base<D, Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedDrawEventArgsFactory>
{
    HRESULT __stdcall Create(::IUnknown* canvasDrawingSession, struct_of<32> timingInformation, ::IUnknown** animatedControlDrawEventArgs) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *animatedControlDrawEventArgs = detach_abi(this->shim().Create(*reinterpret_cast<Microsoft::Graphics::Canvas::CanvasDrawingSession const*>(&canvasDrawingSession), *reinterpret_cast<Microsoft::Graphics::Canvas::UI::CanvasTimingInformation const*>(&timingInformation)));
            return S_OK;
        }
        catch (...)
        {
            *animatedControlDrawEventArgs = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedUpdateEventArgs> : produce_base<D, Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedUpdateEventArgs>
{
    HRESULT __stdcall get_Timing(struct_of<32>* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Timing());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedUpdateEventArgsFactory> : produce_base<D, Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedUpdateEventArgsFactory>
{
    HRESULT __stdcall Create(struct_of<32> timingInformation, ::IUnknown** updateEventArgs) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *updateEventArgs = detach_abi(this->shim().Create(*reinterpret_cast<Microsoft::Graphics::Canvas::UI::CanvasTimingInformation const*>(&timingInformation)));
            return S_OK;
        }
        catch (...)
        {
            *updateEventArgs = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::UI::Xaml::ICanvasControl> : produce_base<D, Microsoft::Graphics::Canvas::UI::Xaml::ICanvasControl>
{
    HRESULT __stdcall add_CreateResources(::IUnknown* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().CreateResources(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Microsoft::Graphics::Canvas::UI::Xaml::CanvasControl, Microsoft::Graphics::Canvas::UI::CanvasCreateResourcesEventArgs> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_CreateResources(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CreateResources(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ReadyToDraw(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ReadyToDraw());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Draw(::IUnknown* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().Draw(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Microsoft::Graphics::Canvas::UI::Xaml::CanvasControl, Microsoft::Graphics::Canvas::UI::Xaml::CanvasDrawEventArgs> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Draw(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Draw(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ClearColor(struct_of<4> value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ClearColor(*reinterpret_cast<Windows::UI::Color const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ClearColor(struct_of<4>* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ClearColor());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Invalidate() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Invalidate();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Size(Windows::Foundation::Size* size) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *size = detach_abi(this->shim().Size());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RemoveFromVisualTree() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoveFromVisualTree();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UseSharedDevice(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UseSharedDevice());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_UseSharedDevice(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UseSharedDevice(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ForceSoftwareRenderer(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ForceSoftwareRenderer());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ForceSoftwareRenderer(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ForceSoftwareRenderer(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CustomDevice(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CustomDevice());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CustomDevice(::IUnknown* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CustomDevice(*reinterpret_cast<Microsoft::Graphics::Canvas::CanvasDevice const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DpiScale(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DpiScale());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DpiScale(float ratio) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DpiScale(ratio);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::UI::Xaml::ICanvasDrawEventArgs> : produce_base<D, Microsoft::Graphics::Canvas::UI::Xaml::ICanvasDrawEventArgs>
{
    HRESULT __stdcall get_DrawingSession(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DrawingSession());
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
struct produce<D, Microsoft::Graphics::Canvas::UI::Xaml::ICanvasDrawEventArgsFactory> : produce_base<D, Microsoft::Graphics::Canvas::UI::Xaml::ICanvasDrawEventArgsFactory>
{
    HRESULT __stdcall Create(::IUnknown* canvasDrawingSession, ::IUnknown** drawEventArgs) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *drawEventArgs = detach_abi(this->shim().Create(*reinterpret_cast<Microsoft::Graphics::Canvas::CanvasDrawingSession const*>(&canvasDrawingSession)));
            return S_OK;
        }
        catch (...)
        {
            *drawEventArgs = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::UI::Xaml::ICanvasImageSource> : produce_base<D, Microsoft::Graphics::Canvas::UI::Xaml::ICanvasImageSource>
{
    HRESULT __stdcall CreateDrawingSession(struct_of<4> clearColor, ::IUnknown** drawingSession) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *drawingSession = detach_abi(this->shim().CreateDrawingSession(*reinterpret_cast<Windows::UI::Color const*>(&clearColor)));
            return S_OK;
        }
        catch (...)
        {
            *drawingSession = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateDrawingSessionWithUpdateRectangle(struct_of<4> clearColor, Windows::Foundation::Rect updateRectangle, ::IUnknown** drawingSession) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *drawingSession = detach_abi(this->shim().CreateDrawingSession(*reinterpret_cast<Windows::UI::Color const*>(&clearColor), *reinterpret_cast<Windows::Foundation::Rect const*>(&updateRectangle)));
            return S_OK;
        }
        catch (...)
        {
            *drawingSession = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Recreate(::IUnknown* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Recreate(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Size(Windows::Foundation::Size* size) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *size = detach_abi(this->shim().Size());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SizeInPixels(struct_of<8>* size) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *size = detach_abi(this->shim().SizeInPixels());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AlphaMode(Microsoft::Graphics::Canvas::CanvasAlphaMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AlphaMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::UI::Xaml::ICanvasImageSourceFactory> : produce_base<D, Microsoft::Graphics::Canvas::UI::Xaml::ICanvasImageSourceFactory>
{
    HRESULT __stdcall CreateWithSize(::IUnknown* resourceCreator, Windows::Foundation::Size size, ::IUnknown** imageSource) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *imageSource = detach_abi(this->shim().CreateWithSize(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreatorWithDpi const*>(&resourceCreator), *reinterpret_cast<Windows::Foundation::Size const*>(&size)));
            return S_OK;
        }
        catch (...)
        {
            *imageSource = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateWithWidthAndHeight(::IUnknown* resourceCreator, float width, float height, ::IUnknown** imageSource) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *imageSource = detach_abi(this->shim().CreateWithWidthAndHeight(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreatorWithDpi const*>(&resourceCreator), width, height));
            return S_OK;
        }
        catch (...)
        {
            *imageSource = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateWithWidthAndHeightAndDpi(::IUnknown* resourceCreator, float width, float height, float dpi, ::IUnknown** imageSource) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *imageSource = detach_abi(this->shim().CreateWithWidthAndHeightAndDpi(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator), width, height, dpi));
            return S_OK;
        }
        catch (...)
        {
            *imageSource = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateWithWidthAndHeightAndDpiAndAlphaMode(::IUnknown* resourceCreator, float width, float height, float dpi, Microsoft::Graphics::Canvas::CanvasAlphaMode alphaMode, ::IUnknown** imageSource) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *imageSource = detach_abi(this->shim().CreateWithWidthAndHeightAndDpiAndAlphaMode(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator), width, height, dpi, *reinterpret_cast<Microsoft::Graphics::Canvas::CanvasAlphaMode const*>(&alphaMode)));
            return S_OK;
        }
        catch (...)
        {
            *imageSource = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::UI::Xaml::ICanvasRegionsInvalidatedEventArgs> : produce_base<D, Microsoft::Graphics::Canvas::UI::Xaml::ICanvasRegionsInvalidatedEventArgs>
{
    HRESULT __stdcall get_InvalidatedRegions(uint32_t* __valueSize, Windows::Foundation::Rect** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            std::tie(*__valueSize, *value) = detach_abi(this->shim().InvalidatedRegions());
            return S_OK;
        }
        catch (...)
        {
            *__valueSize = 0;
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VisibleRegion(Windows::Foundation::Rect* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VisibleRegion());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::UI::Xaml::ICanvasSwapChainPanel> : produce_base<D, Microsoft::Graphics::Canvas::UI::Xaml::ICanvasSwapChainPanel>
{
    HRESULT __stdcall put_SwapChain(::IUnknown* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SwapChain(*reinterpret_cast<Microsoft::Graphics::Canvas::CanvasSwapChain const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SwapChain(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SwapChain());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RemoveFromVisualTree() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoveFromVisualTree();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualControl> : produce_base<D, Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualControl>
{
    HRESULT __stdcall add_CreateResources(::IUnknown* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().CreateResources(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Microsoft::Graphics::Canvas::UI::Xaml::CanvasVirtualControl, Microsoft::Graphics::Canvas::UI::CanvasCreateResourcesEventArgs> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_CreateResources(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CreateResources(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ReadyToDraw(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ReadyToDraw());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_RegionsInvalidated(::IUnknown* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().RegionsInvalidated(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Microsoft::Graphics::Canvas::UI::Xaml::CanvasVirtualControl, Microsoft::Graphics::Canvas::UI::Xaml::CanvasRegionsInvalidatedEventArgs> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_RegionsInvalidated(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RegionsInvalidated(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ClearColor(struct_of<4> value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ClearColor(*reinterpret_cast<Windows::UI::Color const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ClearColor(struct_of<4>* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ClearColor());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateDrawingSession(Windows::Foundation::Rect updateRectangle, ::IUnknown** drawingSession) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *drawingSession = detach_abi(this->shim().CreateDrawingSession(*reinterpret_cast<Windows::Foundation::Rect const*>(&updateRectangle)));
            return S_OK;
        }
        catch (...)
        {
            *drawingSession = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SuspendDrawingSession(::IUnknown* drawingSession) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SuspendDrawingSession(*reinterpret_cast<Microsoft::Graphics::Canvas::CanvasDrawingSession const*>(&drawingSession));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ResumeDrawingSession(::IUnknown* drawingSession) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ResumeDrawingSession(*reinterpret_cast<Microsoft::Graphics::Canvas::CanvasDrawingSession const*>(&drawingSession));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Invalidate() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Invalidate();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall InvalidateRegion(Windows::Foundation::Rect region) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Invalidate(*reinterpret_cast<Windows::Foundation::Rect const*>(&region));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Size(Windows::Foundation::Size* size) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *size = detach_abi(this->shim().Size());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RemoveFromVisualTree() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoveFromVisualTree();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UseSharedDevice(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UseSharedDevice());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_UseSharedDevice(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UseSharedDevice(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ForceSoftwareRenderer(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ForceSoftwareRenderer());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ForceSoftwareRenderer(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ForceSoftwareRenderer(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CustomDevice(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CustomDevice());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CustomDevice(::IUnknown* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CustomDevice(*reinterpret_cast<Microsoft::Graphics::Canvas::CanvasDevice const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DpiScale(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DpiScale());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DpiScale(float ratio) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DpiScale(ratio);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualImageSource> : produce_base<D, Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualImageSource>
{
    HRESULT __stdcall get_Source(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateDrawingSession(struct_of<4> clearColor, Windows::Foundation::Rect updateRectangle, ::IUnknown** drawingSession) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *drawingSession = detach_abi(this->shim().CreateDrawingSession(*reinterpret_cast<Windows::UI::Color const*>(&clearColor), *reinterpret_cast<Windows::Foundation::Rect const*>(&updateRectangle)));
            return S_OK;
        }
        catch (...)
        {
            *drawingSession = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SuspendDrawingSession(::IUnknown* drawingSession) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SuspendDrawingSession(*reinterpret_cast<Microsoft::Graphics::Canvas::CanvasDrawingSession const*>(&drawingSession));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ResumeDrawingSession(::IUnknown* drawingSession) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ResumeDrawingSession(*reinterpret_cast<Microsoft::Graphics::Canvas::CanvasDrawingSession const*>(&drawingSession));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Invalidate() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Invalidate();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall InvalidateRegion(Windows::Foundation::Rect region) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Invalidate(*reinterpret_cast<Windows::Foundation::Rect const*>(&region));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RaiseRegionsInvalidatedIfAny() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RaiseRegionsInvalidatedIfAny();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_RegionsInvalidated(::IUnknown* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().RegionsInvalidated(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Microsoft::Graphics::Canvas::UI::Xaml::CanvasVirtualImageSource, Microsoft::Graphics::Canvas::UI::Xaml::CanvasRegionsInvalidatedEventArgs> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_RegionsInvalidated(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RegionsInvalidated(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ResizeWithSize(Windows::Foundation::Size size) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Resize(*reinterpret_cast<Windows::Foundation::Size const*>(&size));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ResizeWithWidthAndHeight(float width, float height) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Resize(width, height);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ResizeWithWidthAndHeightAndDpi(float width, float height, float dpi) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Resize(width, height, dpi);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Recreate(::IUnknown* resourceCreator) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Recreate(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Size(Windows::Foundation::Size* size) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *size = detach_abi(this->shim().Size());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SizeInPixels(struct_of<8>* size) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *size = detach_abi(this->shim().SizeInPixels());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AlphaMode(Microsoft::Graphics::Canvas::CanvasAlphaMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AlphaMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualImageSourceFactory> : produce_base<D, Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualImageSourceFactory>
{
    HRESULT __stdcall CreateWithSize(::IUnknown* resourceCreator, Windows::Foundation::Size size, ::IUnknown** imageSource) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *imageSource = detach_abi(this->shim().CreateWithSize(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreatorWithDpi const*>(&resourceCreator), *reinterpret_cast<Windows::Foundation::Size const*>(&size)));
            return S_OK;
        }
        catch (...)
        {
            *imageSource = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateWithWidthAndHeight(::IUnknown* resourceCreator, float width, float height, ::IUnknown** imageSource) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *imageSource = detach_abi(this->shim().CreateWithWidthAndHeight(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreatorWithDpi const*>(&resourceCreator), width, height));
            return S_OK;
        }
        catch (...)
        {
            *imageSource = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateWithWidthAndHeightAndDpi(::IUnknown* resourceCreator, float width, float height, float dpi, ::IUnknown** imageSource) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *imageSource = detach_abi(this->shim().CreateWithWidthAndHeightAndDpi(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator), width, height, dpi));
            return S_OK;
        }
        catch (...)
        {
            *imageSource = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateWithWidthAndHeightAndDpiAndAlphaMode(::IUnknown* resourceCreator, float width, float height, float dpi, Microsoft::Graphics::Canvas::CanvasAlphaMode alphaMode, ::IUnknown** imageSource) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *imageSource = detach_abi(this->shim().CreateWithWidthAndHeightAndDpiAndAlphaMode(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator), width, height, dpi, *reinterpret_cast<Microsoft::Graphics::Canvas::CanvasAlphaMode const*>(&alphaMode)));
            return S_OK;
        }
        catch (...)
        {
            *imageSource = nullptr;
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Microsoft::Graphics::Canvas::UI::Xaml {

inline CanvasAnimatedControl::CanvasAnimatedControl() :
    CanvasAnimatedControl(activate_instance<CanvasAnimatedControl>())
{}

inline CanvasAnimatedDrawEventArgs::CanvasAnimatedDrawEventArgs(Microsoft::Graphics::Canvas::CanvasDrawingSession const& canvasDrawingSession, Microsoft::Graphics::Canvas::UI::CanvasTimingInformation const& timingInformation) :
    CanvasAnimatedDrawEventArgs(get_activation_factory<CanvasAnimatedDrawEventArgs, Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedDrawEventArgsFactory>().Create(canvasDrawingSession, timingInformation))
{}

inline CanvasAnimatedUpdateEventArgs::CanvasAnimatedUpdateEventArgs(Microsoft::Graphics::Canvas::UI::CanvasTimingInformation const& timingInformation) :
    CanvasAnimatedUpdateEventArgs(get_activation_factory<CanvasAnimatedUpdateEventArgs, Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedUpdateEventArgsFactory>().Create(timingInformation))
{}

inline CanvasControl::CanvasControl() :
    CanvasControl(activate_instance<CanvasControl>())
{}

inline CanvasDrawEventArgs::CanvasDrawEventArgs(Microsoft::Graphics::Canvas::CanvasDrawingSession const& canvasDrawingSession) :
    CanvasDrawEventArgs(get_activation_factory<CanvasDrawEventArgs, Microsoft::Graphics::Canvas::UI::Xaml::ICanvasDrawEventArgsFactory>().Create(canvasDrawingSession))
{}

inline CanvasImageSource::CanvasImageSource(Microsoft::Graphics::Canvas::ICanvasResourceCreatorWithDpi const& resourceCreator, Windows::Foundation::Size const& size) :
    CanvasImageSource(get_activation_factory<CanvasImageSource, Microsoft::Graphics::Canvas::UI::Xaml::ICanvasImageSourceFactory>().CreateWithSize(resourceCreator, size))
{}

inline CanvasImageSource::CanvasImageSource(Microsoft::Graphics::Canvas::ICanvasResourceCreatorWithDpi const& resourceCreator, float width, float height) :
    CanvasImageSource(get_activation_factory<CanvasImageSource, Microsoft::Graphics::Canvas::UI::Xaml::ICanvasImageSourceFactory>().CreateWithWidthAndHeight(resourceCreator, width, height))
{}

inline CanvasImageSource::CanvasImageSource(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, float width, float height, float dpi) :
    CanvasImageSource(get_activation_factory<CanvasImageSource, Microsoft::Graphics::Canvas::UI::Xaml::ICanvasImageSourceFactory>().CreateWithWidthAndHeightAndDpi(resourceCreator, width, height, dpi))
{}

inline CanvasImageSource::CanvasImageSource(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, float width, float height, float dpi, Microsoft::Graphics::Canvas::CanvasAlphaMode const& alphaMode) :
    CanvasImageSource(get_activation_factory<CanvasImageSource, Microsoft::Graphics::Canvas::UI::Xaml::ICanvasImageSourceFactory>().CreateWithWidthAndHeightAndDpiAndAlphaMode(resourceCreator, width, height, dpi, alphaMode))
{}

inline CanvasSwapChainPanel::CanvasSwapChainPanel() :
    CanvasSwapChainPanel(activate_instance<CanvasSwapChainPanel>())
{}

inline CanvasVirtualControl::CanvasVirtualControl() :
    CanvasVirtualControl(activate_instance<CanvasVirtualControl>())
{}

inline CanvasVirtualImageSource::CanvasVirtualImageSource(Microsoft::Graphics::Canvas::ICanvasResourceCreatorWithDpi const& resourceCreator, Windows::Foundation::Size const& size) :
    CanvasVirtualImageSource(get_activation_factory<CanvasVirtualImageSource, Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualImageSourceFactory>().CreateWithSize(resourceCreator, size))
{}

inline CanvasVirtualImageSource::CanvasVirtualImageSource(Microsoft::Graphics::Canvas::ICanvasResourceCreatorWithDpi const& resourceCreator, float width, float height) :
    CanvasVirtualImageSource(get_activation_factory<CanvasVirtualImageSource, Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualImageSourceFactory>().CreateWithWidthAndHeight(resourceCreator, width, height))
{}

inline CanvasVirtualImageSource::CanvasVirtualImageSource(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, float width, float height, float dpi) :
    CanvasVirtualImageSource(get_activation_factory<CanvasVirtualImageSource, Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualImageSourceFactory>().CreateWithWidthAndHeightAndDpi(resourceCreator, width, height, dpi))
{}

inline CanvasVirtualImageSource::CanvasVirtualImageSource(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, float width, float height, float dpi, Microsoft::Graphics::Canvas::CanvasAlphaMode const& alphaMode) :
    CanvasVirtualImageSource(get_activation_factory<CanvasVirtualImageSource, Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualImageSourceFactory>().CreateWithWidthAndHeightAndDpiAndAlphaMode(resourceCreator, width, height, dpi, alphaMode))
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedControl> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedControl> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedDrawEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedDrawEventArgs> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedDrawEventArgsFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedDrawEventArgsFactory> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedUpdateEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedUpdateEventArgs> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedUpdateEventArgsFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::UI::Xaml::ICanvasAnimatedUpdateEventArgsFactory> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::UI::Xaml::ICanvasControl> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::UI::Xaml::ICanvasControl> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::UI::Xaml::ICanvasDrawEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::UI::Xaml::ICanvasDrawEventArgs> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::UI::Xaml::ICanvasDrawEventArgsFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::UI::Xaml::ICanvasDrawEventArgsFactory> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::UI::Xaml::ICanvasImageSource> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::UI::Xaml::ICanvasImageSource> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::UI::Xaml::ICanvasImageSourceFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::UI::Xaml::ICanvasImageSourceFactory> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::UI::Xaml::ICanvasRegionsInvalidatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::UI::Xaml::ICanvasRegionsInvalidatedEventArgs> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::UI::Xaml::ICanvasSwapChainPanel> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::UI::Xaml::ICanvasSwapChainPanel> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualControl> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualControl> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualImageSource> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualImageSource> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualImageSourceFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualImageSourceFactory> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::UI::Xaml::CanvasAnimatedControl> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::UI::Xaml::CanvasAnimatedControl> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::UI::Xaml::CanvasAnimatedDrawEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::UI::Xaml::CanvasAnimatedDrawEventArgs> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::UI::Xaml::CanvasAnimatedUpdateEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::UI::Xaml::CanvasAnimatedUpdateEventArgs> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::UI::Xaml::CanvasControl> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::UI::Xaml::CanvasControl> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::UI::Xaml::CanvasDrawEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::UI::Xaml::CanvasDrawEventArgs> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::UI::Xaml::CanvasImageSource> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::UI::Xaml::CanvasImageSource> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::UI::Xaml::CanvasRegionsInvalidatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::UI::Xaml::CanvasRegionsInvalidatedEventArgs> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::UI::Xaml::CanvasSwapChainPanel> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::UI::Xaml::CanvasSwapChainPanel> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::UI::Xaml::CanvasVirtualControl> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::UI::Xaml::CanvasVirtualControl> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::UI::Xaml::CanvasVirtualImageSource> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::UI::Xaml::CanvasVirtualImageSource> {};

}

WINRT_WARNING_POP
