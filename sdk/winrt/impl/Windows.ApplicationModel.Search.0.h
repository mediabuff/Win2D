// C++/WinRT v1.0.170906.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Storage {

struct StorageFolder;

}

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

struct IRandomAccessStreamReference;

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Search {

struct ILocalContentSuggestionSettings;
struct ISearchPaneQueryLinguisticDetails;
struct ISearchQueryLinguisticDetails;
struct ISearchQueryLinguisticDetailsFactory;
struct ISearchSuggestionCollection;
struct ISearchSuggestionsRequest;
struct ISearchSuggestionsRequestDeferral;
struct LocalContentSuggestionSettings;
struct SearchPaneQueryLinguisticDetails;
struct SearchQueryLinguisticDetails;
struct SearchSuggestionCollection;
struct SearchSuggestionsRequest;
struct SearchSuggestionsRequestDeferral;

}

namespace winrt::impl {

template <> struct category<Windows::ApplicationModel::Search::ILocalContentSuggestionSettings>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Search::ISearchPaneQueryLinguisticDetails>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Search::ISearchQueryLinguisticDetails>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Search::ISearchQueryLinguisticDetailsFactory>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Search::ISearchSuggestionCollection>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Search::ISearchSuggestionsRequest>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Search::ISearchSuggestionsRequestDeferral>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Search::LocalContentSuggestionSettings>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Search::SearchPaneQueryLinguisticDetails>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Search::SearchQueryLinguisticDetails>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Search::SearchSuggestionCollection>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Search::SearchSuggestionsRequest>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Search::SearchSuggestionsRequestDeferral>{ using type = class_category; };
template <> struct name<Windows::ApplicationModel::Search::ILocalContentSuggestionSettings>{ static constexpr auto & value{ L"Windows.ApplicationModel.Search.ILocalContentSuggestionSettings" }; };
template <> struct name<Windows::ApplicationModel::Search::ISearchPaneQueryLinguisticDetails>{ static constexpr auto & value{ L"Windows.ApplicationModel.Search.ISearchPaneQueryLinguisticDetails" }; };
template <> struct name<Windows::ApplicationModel::Search::ISearchQueryLinguisticDetails>{ static constexpr auto & value{ L"Windows.ApplicationModel.Search.ISearchQueryLinguisticDetails" }; };
template <> struct name<Windows::ApplicationModel::Search::ISearchQueryLinguisticDetailsFactory>{ static constexpr auto & value{ L"Windows.ApplicationModel.Search.ISearchQueryLinguisticDetailsFactory" }; };
template <> struct name<Windows::ApplicationModel::Search::ISearchSuggestionCollection>{ static constexpr auto & value{ L"Windows.ApplicationModel.Search.ISearchSuggestionCollection" }; };
template <> struct name<Windows::ApplicationModel::Search::ISearchSuggestionsRequest>{ static constexpr auto & value{ L"Windows.ApplicationModel.Search.ISearchSuggestionsRequest" }; };
template <> struct name<Windows::ApplicationModel::Search::ISearchSuggestionsRequestDeferral>{ static constexpr auto & value{ L"Windows.ApplicationModel.Search.ISearchSuggestionsRequestDeferral" }; };
template <> struct name<Windows::ApplicationModel::Search::LocalContentSuggestionSettings>{ static constexpr auto & value{ L"Windows.ApplicationModel.Search.LocalContentSuggestionSettings" }; };
template <> struct name<Windows::ApplicationModel::Search::SearchPaneQueryLinguisticDetails>{ static constexpr auto & value{ L"Windows.ApplicationModel.Search.SearchPaneQueryLinguisticDetails" }; };
template <> struct name<Windows::ApplicationModel::Search::SearchQueryLinguisticDetails>{ static constexpr auto & value{ L"Windows.ApplicationModel.Search.SearchQueryLinguisticDetails" }; };
template <> struct name<Windows::ApplicationModel::Search::SearchSuggestionCollection>{ static constexpr auto & value{ L"Windows.ApplicationModel.Search.SearchSuggestionCollection" }; };
template <> struct name<Windows::ApplicationModel::Search::SearchSuggestionsRequest>{ static constexpr auto & value{ L"Windows.ApplicationModel.Search.SearchSuggestionsRequest" }; };
template <> struct name<Windows::ApplicationModel::Search::SearchSuggestionsRequestDeferral>{ static constexpr auto & value{ L"Windows.ApplicationModel.Search.SearchSuggestionsRequestDeferral" }; };
template <> struct guid<Windows::ApplicationModel::Search::ILocalContentSuggestionSettings>{ static constexpr GUID value{ 0xEEAEB062,0x743D,0x456E,{ 0x84,0xA3,0x23,0xF0,0x6F,0x2D,0x15,0xD7 } }; };
template <> struct guid<Windows::ApplicationModel::Search::ISearchPaneQueryLinguisticDetails>{ static constexpr GUID value{ 0x82FB460E,0x0940,0x4B6D,{ 0xB8,0xD0,0x64,0x2B,0x30,0x98,0x9E,0x15 } }; };
template <> struct guid<Windows::ApplicationModel::Search::ISearchQueryLinguisticDetails>{ static constexpr GUID value{ 0x46A1205B,0x69C9,0x4745,{ 0xB7,0x2F,0xA8,0xA4,0xFC,0x8F,0x24,0xAE } }; };
template <> struct guid<Windows::ApplicationModel::Search::ISearchQueryLinguisticDetailsFactory>{ static constexpr GUID value{ 0xCAC6C3B8,0x3C64,0x4DFD,{ 0xAD,0x9F,0x47,0x9E,0x4D,0x40,0x65,0xA4 } }; };
template <> struct guid<Windows::ApplicationModel::Search::ISearchSuggestionCollection>{ static constexpr GUID value{ 0x323A8A4B,0xFBEA,0x4446,{ 0xAB,0xBC,0x3D,0xA7,0x91,0x5F,0xDD,0x3A } }; };
template <> struct guid<Windows::ApplicationModel::Search::ISearchSuggestionsRequest>{ static constexpr GUID value{ 0x4E4E26A7,0x44E5,0x4039,{ 0x90,0x99,0x60,0x00,0xEA,0xD1,0xF0,0xC6 } }; };
template <> struct guid<Windows::ApplicationModel::Search::ISearchSuggestionsRequestDeferral>{ static constexpr GUID value{ 0xB71598A9,0xC065,0x456D,{ 0xA8,0x45,0x1E,0xCC,0xEC,0x5D,0xC2,0x8B } }; };
template <> struct default_interface<Windows::ApplicationModel::Search::LocalContentSuggestionSettings>{ using type = Windows::ApplicationModel::Search::ILocalContentSuggestionSettings; };
template <> struct default_interface<Windows::ApplicationModel::Search::SearchPaneQueryLinguisticDetails>{ using type = Windows::ApplicationModel::Search::ISearchPaneQueryLinguisticDetails; };
template <> struct default_interface<Windows::ApplicationModel::Search::SearchQueryLinguisticDetails>{ using type = Windows::ApplicationModel::Search::ISearchQueryLinguisticDetails; };
template <> struct default_interface<Windows::ApplicationModel::Search::SearchSuggestionCollection>{ using type = Windows::ApplicationModel::Search::ISearchSuggestionCollection; };
template <> struct default_interface<Windows::ApplicationModel::Search::SearchSuggestionsRequest>{ using type = Windows::ApplicationModel::Search::ISearchSuggestionsRequest; };
template <> struct default_interface<Windows::ApplicationModel::Search::SearchSuggestionsRequestDeferral>{ using type = Windows::ApplicationModel::Search::ISearchSuggestionsRequestDeferral; };

template <typename D>
struct consume_Windows_ApplicationModel_Search_ILocalContentSuggestionSettings
{
    void Enabled(bool value) const;
    bool Enabled() const;
    Windows::Foundation::Collections::IVector<Windows::Storage::StorageFolder> Locations() const;
    void AqsFilter(param::hstring const& value) const;
    hstring AqsFilter() const;
    Windows::Foundation::Collections::IVector<hstring> PropertiesToMatch() const;
};
template <> struct consume<Windows::ApplicationModel::Search::ILocalContentSuggestionSettings> { template <typename D> using type = consume_Windows_ApplicationModel_Search_ILocalContentSuggestionSettings<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Search_ISearchPaneQueryLinguisticDetails
{
    Windows::Foundation::Collections::IVectorView<hstring> QueryTextAlternatives() const;
    uint32_t QueryTextCompositionStart() const;
    uint32_t QueryTextCompositionLength() const;
};
template <> struct consume<Windows::ApplicationModel::Search::ISearchPaneQueryLinguisticDetails> { template <typename D> using type = consume_Windows_ApplicationModel_Search_ISearchPaneQueryLinguisticDetails<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Search_ISearchQueryLinguisticDetails
{
    Windows::Foundation::Collections::IVectorView<hstring> QueryTextAlternatives() const;
    uint32_t QueryTextCompositionStart() const;
    uint32_t QueryTextCompositionLength() const;
};
template <> struct consume<Windows::ApplicationModel::Search::ISearchQueryLinguisticDetails> { template <typename D> using type = consume_Windows_ApplicationModel_Search_ISearchQueryLinguisticDetails<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Search_ISearchQueryLinguisticDetailsFactory
{
    Windows::ApplicationModel::Search::SearchQueryLinguisticDetails CreateInstance(param::iterable<hstring> const& queryTextAlternatives, uint32_t queryTextCompositionStart, uint32_t queryTextCompositionLength) const;
};
template <> struct consume<Windows::ApplicationModel::Search::ISearchQueryLinguisticDetailsFactory> { template <typename D> using type = consume_Windows_ApplicationModel_Search_ISearchQueryLinguisticDetailsFactory<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Search_ISearchSuggestionCollection
{
    uint32_t Size() const;
    void AppendQuerySuggestion(param::hstring const& text) const;
    void AppendQuerySuggestions(param::iterable<hstring> const& suggestions) const;
    void AppendResultSuggestion(param::hstring const& text, param::hstring const& detailText, param::hstring const& tag, Windows::Storage::Streams::IRandomAccessStreamReference const& image, param::hstring const& imageAlternateText) const;
    void AppendSearchSeparator(param::hstring const& label) const;
};
template <> struct consume<Windows::ApplicationModel::Search::ISearchSuggestionCollection> { template <typename D> using type = consume_Windows_ApplicationModel_Search_ISearchSuggestionCollection<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Search_ISearchSuggestionsRequest
{
    bool IsCanceled() const;
    Windows::ApplicationModel::Search::SearchSuggestionCollection SearchSuggestionCollection() const;
    Windows::ApplicationModel::Search::SearchSuggestionsRequestDeferral GetDeferral() const;
};
template <> struct consume<Windows::ApplicationModel::Search::ISearchSuggestionsRequest> { template <typename D> using type = consume_Windows_ApplicationModel_Search_ISearchSuggestionsRequest<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Search_ISearchSuggestionsRequestDeferral
{
    void Complete() const;
};
template <> struct consume<Windows::ApplicationModel::Search::ISearchSuggestionsRequestDeferral> { template <typename D> using type = consume_Windows_ApplicationModel_Search_ISearchSuggestionsRequestDeferral<D>; };

template <> struct abi<Windows::ApplicationModel::Search::ILocalContentSuggestionSettings>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall put_Enabled(bool value) = 0;
    virtual HRESULT __stdcall get_Enabled(bool* value) = 0;
    virtual HRESULT __stdcall get_Locations(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_AqsFilter(HSTRING value) = 0;
    virtual HRESULT __stdcall get_AqsFilter(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_PropertiesToMatch(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Search::ISearchPaneQueryLinguisticDetails>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_QueryTextAlternatives(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_QueryTextCompositionStart(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_QueryTextCompositionLength(uint32_t* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Search::ISearchQueryLinguisticDetails>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_QueryTextAlternatives(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_QueryTextCompositionStart(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_QueryTextCompositionLength(uint32_t* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Search::ISearchQueryLinguisticDetailsFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstance(::IUnknown* queryTextAlternatives, uint32_t queryTextCompositionStart, uint32_t queryTextCompositionLength, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Search::ISearchSuggestionCollection>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Size(uint32_t* value) = 0;
    virtual HRESULT __stdcall AppendQuerySuggestion(HSTRING text) = 0;
    virtual HRESULT __stdcall AppendQuerySuggestions(::IUnknown* suggestions) = 0;
    virtual HRESULT __stdcall AppendResultSuggestion(HSTRING text, HSTRING detailText, HSTRING tag, ::IUnknown* image, HSTRING imageAlternateText) = 0;
    virtual HRESULT __stdcall AppendSearchSeparator(HSTRING label) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Search::ISearchSuggestionsRequest>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsCanceled(bool* value) = 0;
    virtual HRESULT __stdcall get_SearchSuggestionCollection(::IUnknown** collection) = 0;
    virtual HRESULT __stdcall GetDeferral(::IUnknown** deferral) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Search::ISearchSuggestionsRequestDeferral>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Complete() = 0;
};};

}
