// C++/WinRT v1.0.170906.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Security::EnterpriseData {

enum class ProtectionPolicyEvaluationResult : int32_t
{
    Allowed = 0,
    Blocked = 1,
    ConsentRequired = 2,
};

}

namespace winrt::impl {

template <> struct category<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult>{ using type = enum_category; };
template <> struct name<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult>{ static constexpr auto & value{ L"Windows.Security.EnterpriseData.ProtectionPolicyEvaluationResult" }; };

}
