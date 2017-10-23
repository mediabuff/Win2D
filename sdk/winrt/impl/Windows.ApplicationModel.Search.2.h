// C++/WinRT v1.0.170906.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Storage.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.ApplicationModel.Search.1.h"

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Search {

}

namespace winrt::impl {

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Search {

struct WINRT_EBO LocalContentSuggestionSettings :
    Windows::ApplicationModel::Search::ILocalContentSuggestionSettings
{
    LocalContentSuggestionSettings(std::nullptr_t) noexcept {}
    LocalContentSuggestionSettings();
};

struct WINRT_EBO SearchPaneQueryLinguisticDetails :
    Windows::ApplicationModel::Search::ISearchPaneQueryLinguisticDetails
{
    SearchPaneQueryLinguisticDetails(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SearchQueryLinguisticDetails :
    Windows::ApplicationModel::Search::ISearchQueryLinguisticDetails
{
    SearchQueryLinguisticDetails(std::nullptr_t) noexcept {}
    SearchQueryLinguisticDetails(param::iterable<hstring> const& queryTextAlternatives, uint32_t queryTextCompositionStart, uint32_t queryTextCompositionLength);
};

struct WINRT_EBO SearchSuggestionCollection :
    Windows::ApplicationModel::Search::ISearchSuggestionCollection
{
    SearchSuggestionCollection(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SearchSuggestionsRequest :
    Windows::ApplicationModel::Search::ISearchSuggestionsRequest
{
    SearchSuggestionsRequest(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SearchSuggestionsRequestDeferral :
    Windows::ApplicationModel::Search::ISearchSuggestionsRequestDeferral
{
    SearchSuggestionsRequestDeferral(std::nullptr_t) noexcept {}
};

}
