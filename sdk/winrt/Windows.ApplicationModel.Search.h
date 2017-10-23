// C++/WinRT v1.0.170906.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Storage.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.ApplicationModel.Search.2.h"
#include "winrt/Windows.ApplicationModel.h"

namespace winrt::impl {

template <typename D> void consume_Windows_ApplicationModel_Search_ILocalContentSuggestionSettings<D>::Enabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::ILocalContentSuggestionSettings)->put_Enabled(value));
}

template <typename D> bool consume_Windows_ApplicationModel_Search_ILocalContentSuggestionSettings<D>::Enabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::ILocalContentSuggestionSettings)->get_Enabled(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Storage::StorageFolder> consume_Windows_ApplicationModel_Search_ILocalContentSuggestionSettings<D>::Locations() const
{
    Windows::Foundation::Collections::IVector<Windows::Storage::StorageFolder> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::ILocalContentSuggestionSettings)->get_Locations(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Search_ILocalContentSuggestionSettings<D>::AqsFilter(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::ILocalContentSuggestionSettings)->put_AqsFilter(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Search_ILocalContentSuggestionSettings<D>::AqsFilter() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::ILocalContentSuggestionSettings)->get_AqsFilter(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> consume_Windows_ApplicationModel_Search_ILocalContentSuggestionSettings<D>::PropertiesToMatch() const
{
    Windows::Foundation::Collections::IVector<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::ILocalContentSuggestionSettings)->get_PropertiesToMatch(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> consume_Windows_ApplicationModel_Search_ISearchPaneQueryLinguisticDetails<D>::QueryTextAlternatives() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::ISearchPaneQueryLinguisticDetails)->get_QueryTextAlternatives(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_ApplicationModel_Search_ISearchPaneQueryLinguisticDetails<D>::QueryTextCompositionStart() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::ISearchPaneQueryLinguisticDetails)->get_QueryTextCompositionStart(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_ApplicationModel_Search_ISearchPaneQueryLinguisticDetails<D>::QueryTextCompositionLength() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::ISearchPaneQueryLinguisticDetails)->get_QueryTextCompositionLength(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> consume_Windows_ApplicationModel_Search_ISearchQueryLinguisticDetails<D>::QueryTextAlternatives() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::ISearchQueryLinguisticDetails)->get_QueryTextAlternatives(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_ApplicationModel_Search_ISearchQueryLinguisticDetails<D>::QueryTextCompositionStart() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::ISearchQueryLinguisticDetails)->get_QueryTextCompositionStart(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_ApplicationModel_Search_ISearchQueryLinguisticDetails<D>::QueryTextCompositionLength() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::ISearchQueryLinguisticDetails)->get_QueryTextCompositionLength(&value));
    return value;
}

template <typename D> Windows::ApplicationModel::Search::SearchQueryLinguisticDetails consume_Windows_ApplicationModel_Search_ISearchQueryLinguisticDetailsFactory<D>::CreateInstance(param::iterable<hstring> const& queryTextAlternatives, uint32_t queryTextCompositionStart, uint32_t queryTextCompositionLength) const
{
    Windows::ApplicationModel::Search::SearchQueryLinguisticDetails value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::ISearchQueryLinguisticDetailsFactory)->CreateInstance(get_abi(queryTextAlternatives), queryTextCompositionStart, queryTextCompositionLength, put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_ApplicationModel_Search_ISearchSuggestionCollection<D>::Size() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::ISearchSuggestionCollection)->get_Size(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Search_ISearchSuggestionCollection<D>::AppendQuerySuggestion(param::hstring const& text) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::ISearchSuggestionCollection)->AppendQuerySuggestion(get_abi(text)));
}

template <typename D> void consume_Windows_ApplicationModel_Search_ISearchSuggestionCollection<D>::AppendQuerySuggestions(param::iterable<hstring> const& suggestions) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::ISearchSuggestionCollection)->AppendQuerySuggestions(get_abi(suggestions)));
}

template <typename D> void consume_Windows_ApplicationModel_Search_ISearchSuggestionCollection<D>::AppendResultSuggestion(param::hstring const& text, param::hstring const& detailText, param::hstring const& tag, Windows::Storage::Streams::IRandomAccessStreamReference const& image, param::hstring const& imageAlternateText) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::ISearchSuggestionCollection)->AppendResultSuggestion(get_abi(text), get_abi(detailText), get_abi(tag), get_abi(image), get_abi(imageAlternateText)));
}

template <typename D> void consume_Windows_ApplicationModel_Search_ISearchSuggestionCollection<D>::AppendSearchSeparator(param::hstring const& label) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::ISearchSuggestionCollection)->AppendSearchSeparator(get_abi(label)));
}

template <typename D> bool consume_Windows_ApplicationModel_Search_ISearchSuggestionsRequest<D>::IsCanceled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::ISearchSuggestionsRequest)->get_IsCanceled(&value));
    return value;
}

template <typename D> Windows::ApplicationModel::Search::SearchSuggestionCollection consume_Windows_ApplicationModel_Search_ISearchSuggestionsRequest<D>::SearchSuggestionCollection() const
{
    Windows::ApplicationModel::Search::SearchSuggestionCollection collection{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::ISearchSuggestionsRequest)->get_SearchSuggestionCollection(put_abi(collection)));
    return collection;
}

template <typename D> Windows::ApplicationModel::Search::SearchSuggestionsRequestDeferral consume_Windows_ApplicationModel_Search_ISearchSuggestionsRequest<D>::GetDeferral() const
{
    Windows::ApplicationModel::Search::SearchSuggestionsRequestDeferral deferral{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::ISearchSuggestionsRequest)->GetDeferral(put_abi(deferral)));
    return deferral;
}

template <typename D> void consume_Windows_ApplicationModel_Search_ISearchSuggestionsRequestDeferral<D>::Complete() const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Search::ISearchSuggestionsRequestDeferral)->Complete());
}

template <typename D>
struct produce<D, Windows::ApplicationModel::Search::ILocalContentSuggestionSettings> : produce_base<D, Windows::ApplicationModel::Search::ILocalContentSuggestionSettings>
{
    HRESULT __stdcall put_Enabled(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Enabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Enabled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Enabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Locations(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Locations());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AqsFilter(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AqsFilter(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AqsFilter(HSTRING* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AqsFilter());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PropertiesToMatch(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PropertiesToMatch());
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
struct produce<D, Windows::ApplicationModel::Search::ISearchPaneQueryLinguisticDetails> : produce_base<D, Windows::ApplicationModel::Search::ISearchPaneQueryLinguisticDetails>
{
    HRESULT __stdcall get_QueryTextAlternatives(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().QueryTextAlternatives());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_QueryTextCompositionStart(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().QueryTextCompositionStart());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_QueryTextCompositionLength(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().QueryTextCompositionLength());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Search::ISearchQueryLinguisticDetails> : produce_base<D, Windows::ApplicationModel::Search::ISearchQueryLinguisticDetails>
{
    HRESULT __stdcall get_QueryTextAlternatives(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().QueryTextAlternatives());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_QueryTextCompositionStart(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().QueryTextCompositionStart());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_QueryTextCompositionLength(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().QueryTextCompositionLength());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Search::ISearchQueryLinguisticDetailsFactory> : produce_base<D, Windows::ApplicationModel::Search::ISearchQueryLinguisticDetailsFactory>
{
    HRESULT __stdcall CreateInstance(::IUnknown* queryTextAlternatives, uint32_t queryTextCompositionStart, uint32_t queryTextCompositionLength, ::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateInstance(*reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&queryTextAlternatives), queryTextCompositionStart, queryTextCompositionLength));
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
struct produce<D, Windows::ApplicationModel::Search::ISearchSuggestionCollection> : produce_base<D, Windows::ApplicationModel::Search::ISearchSuggestionCollection>
{
    HRESULT __stdcall get_Size(uint32_t* value) noexcept final
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

    HRESULT __stdcall AppendQuerySuggestion(HSTRING text) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AppendQuerySuggestion(*reinterpret_cast<hstring const*>(&text));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AppendQuerySuggestions(::IUnknown* suggestions) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AppendQuerySuggestions(*reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&suggestions));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AppendResultSuggestion(HSTRING text, HSTRING detailText, HSTRING tag, ::IUnknown* image, HSTRING imageAlternateText) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AppendResultSuggestion(*reinterpret_cast<hstring const*>(&text), *reinterpret_cast<hstring const*>(&detailText), *reinterpret_cast<hstring const*>(&tag), *reinterpret_cast<Windows::Storage::Streams::IRandomAccessStreamReference const*>(&image), *reinterpret_cast<hstring const*>(&imageAlternateText));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AppendSearchSeparator(HSTRING label) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AppendSearchSeparator(*reinterpret_cast<hstring const*>(&label));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Search::ISearchSuggestionsRequest> : produce_base<D, Windows::ApplicationModel::Search::ISearchSuggestionsRequest>
{
    HRESULT __stdcall get_IsCanceled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsCanceled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SearchSuggestionCollection(::IUnknown** collection) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *collection = detach_abi(this->shim().SearchSuggestionCollection());
            return S_OK;
        }
        catch (...)
        {
            *collection = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDeferral(::IUnknown** deferral) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *deferral = detach_abi(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            *deferral = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Search::ISearchSuggestionsRequestDeferral> : produce_base<D, Windows::ApplicationModel::Search::ISearchSuggestionsRequestDeferral>
{
    HRESULT __stdcall Complete() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Complete();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Search {

inline LocalContentSuggestionSettings::LocalContentSuggestionSettings() :
    LocalContentSuggestionSettings(activate_instance<LocalContentSuggestionSettings>())
{}

inline SearchQueryLinguisticDetails::SearchQueryLinguisticDetails(param::iterable<hstring> const& queryTextAlternatives, uint32_t queryTextCompositionStart, uint32_t queryTextCompositionLength) :
    SearchQueryLinguisticDetails(get_activation_factory<SearchQueryLinguisticDetails, Windows::ApplicationModel::Search::ISearchQueryLinguisticDetailsFactory>().CreateInstance(queryTextAlternatives, queryTextCompositionStart, queryTextCompositionLength))
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::ApplicationModel::Search::ILocalContentSuggestionSettings> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Search::ILocalContentSuggestionSettings> {};

template<> struct hash<winrt::Windows::ApplicationModel::Search::ISearchPaneQueryLinguisticDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Search::ISearchPaneQueryLinguisticDetails> {};

template<> struct hash<winrt::Windows::ApplicationModel::Search::ISearchQueryLinguisticDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Search::ISearchQueryLinguisticDetails> {};

template<> struct hash<winrt::Windows::ApplicationModel::Search::ISearchQueryLinguisticDetailsFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Search::ISearchQueryLinguisticDetailsFactory> {};

template<> struct hash<winrt::Windows::ApplicationModel::Search::ISearchSuggestionCollection> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Search::ISearchSuggestionCollection> {};

template<> struct hash<winrt::Windows::ApplicationModel::Search::ISearchSuggestionsRequest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Search::ISearchSuggestionsRequest> {};

template<> struct hash<winrt::Windows::ApplicationModel::Search::ISearchSuggestionsRequestDeferral> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Search::ISearchSuggestionsRequestDeferral> {};

template<> struct hash<winrt::Windows::ApplicationModel::Search::LocalContentSuggestionSettings> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Search::LocalContentSuggestionSettings> {};

template<> struct hash<winrt::Windows::ApplicationModel::Search::SearchPaneQueryLinguisticDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Search::SearchPaneQueryLinguisticDetails> {};

template<> struct hash<winrt::Windows::ApplicationModel::Search::SearchQueryLinguisticDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Search::SearchQueryLinguisticDetails> {};

template<> struct hash<winrt::Windows::ApplicationModel::Search::SearchSuggestionCollection> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Search::SearchSuggestionCollection> {};

template<> struct hash<winrt::Windows::ApplicationModel::Search::SearchSuggestionsRequest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Search::SearchSuggestionsRequest> {};

template<> struct hash<winrt::Windows::ApplicationModel::Search::SearchSuggestionsRequestDeferral> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Search::SearchSuggestionsRequestDeferral> {};

}

WINRT_WARNING_POP
