// C++/WinRT v1.0.170906.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Storage.0.h"
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.ApplicationModel.Search.0.h"

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Search {

struct WINRT_EBO ILocalContentSuggestionSettings :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILocalContentSuggestionSettings>
{
    ILocalContentSuggestionSettings(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISearchPaneQueryLinguisticDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISearchPaneQueryLinguisticDetails>
{
    ISearchPaneQueryLinguisticDetails(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISearchQueryLinguisticDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISearchQueryLinguisticDetails>
{
    ISearchQueryLinguisticDetails(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISearchQueryLinguisticDetailsFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISearchQueryLinguisticDetailsFactory>
{
    ISearchQueryLinguisticDetailsFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISearchSuggestionCollection :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISearchSuggestionCollection>
{
    ISearchSuggestionCollection(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISearchSuggestionsRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISearchSuggestionsRequest>
{
    ISearchSuggestionsRequest(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISearchSuggestionsRequestDeferral :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISearchSuggestionsRequestDeferral>
{
    ISearchSuggestionsRequestDeferral(std::nullptr_t = nullptr) noexcept {}
};

}
