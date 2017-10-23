// C++/WinRT v1.0.170906.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH

static_assert(winrt::impl::make_constexpr_string(CPPWINRT_VERSION) == "1.0.170906.1", "Mismatched component and base headers.");
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Microsoft.Graphics.Canvas.2.h"
#include "winrt/impl/Microsoft.Graphics.Canvas.Brushes.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.UI.2.h"
#include "winrt/impl/Windows.UI.Text.2.h"
#include "winrt/impl/Microsoft.Graphics.Canvas.Text.2.h"
#include "winrt/Microsoft.Graphics.Canvas.h"

namespace winrt::impl {

template <typename D> Microsoft::Graphics::Canvas::Text::CanvasTextRenderingMode consume_Microsoft_Graphics_Canvas_Text_ICanvasFontFace<D>::GetRecommendedRenderingMode(float fontSize, float dpi, Microsoft::Graphics::Canvas::Text::CanvasTextMeasuringMode const& measuringMode, Microsoft::Graphics::Canvas::Text::CanvasTextRenderingParameters const& renderingParameters) const
{
    Microsoft::Graphics::Canvas::Text::CanvasTextRenderingMode renderingMode{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasFontFace)->GetRecommendedRenderingMode(fontSize, dpi, get_abi(measuringMode), get_abi(renderingParameters), put_abi(renderingMode)));
    return renderingMode;
}

template <typename D> Microsoft::Graphics::Canvas::Text::CanvasTextRenderingMode consume_Microsoft_Graphics_Canvas_Text_ICanvasFontFace<D>::GetRecommendedRenderingMode(float fontSize, float dpi, Microsoft::Graphics::Canvas::Text::CanvasTextMeasuringMode const& measuringMode, Microsoft::Graphics::Canvas::Text::CanvasTextRenderingParameters const& renderingParameters, Windows::Foundation::Numerics::float3x2 const& transform, bool isSideways, Microsoft::Graphics::Canvas::CanvasAntialiasing const& outlineThreshold) const
{
    Microsoft::Graphics::Canvas::Text::CanvasTextRenderingMode renderingMode{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasFontFace)->GetRecommendedRenderingModeWithAllOptions(fontSize, dpi, get_abi(measuringMode), get_abi(renderingParameters), get_abi(transform), isSideways, get_abi(outlineThreshold), put_abi(renderingMode)));
    return renderingMode;
}

template <typename D> Microsoft::Graphics::Canvas::Text::CanvasTextGridFit consume_Microsoft_Graphics_Canvas_Text_ICanvasFontFace<D>::GetRecommendedGridFit(float fontSize, float dpi, Microsoft::Graphics::Canvas::Text::CanvasTextMeasuringMode const& measuringMode, Microsoft::Graphics::Canvas::Text::CanvasTextRenderingParameters const& renderingParameters, Windows::Foundation::Numerics::float3x2 const& transform, bool isSideways, Microsoft::Graphics::Canvas::CanvasAntialiasing const& outlineThreshold) const
{
    Microsoft::Graphics::Canvas::Text::CanvasTextGridFit gridFit{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasFontFace)->GetRecommendedGridFit(fontSize, dpi, get_abi(measuringMode), get_abi(renderingParameters), get_abi(transform), isSideways, get_abi(outlineThreshold), put_abi(gridFit)));
    return gridFit;
}

template <typename D> Windows::Foundation::Rect consume_Microsoft_Graphics_Canvas_Text_ICanvasFontFace<D>::GlyphBox() const
{
    Windows::Foundation::Rect value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasFontFace)->get_GlyphBox(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Numerics::float2 consume_Microsoft_Graphics_Canvas_Text_ICanvasFontFace<D>::SubscriptPosition() const
{
    Windows::Foundation::Numerics::float2 value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasFontFace)->get_SubscriptPosition(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Size consume_Microsoft_Graphics_Canvas_Text_ICanvasFontFace<D>::SubscriptSize() const
{
    Windows::Foundation::Size value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasFontFace)->get_SubscriptSize(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Numerics::float2 consume_Microsoft_Graphics_Canvas_Text_ICanvasFontFace<D>::SuperscriptPosition() const
{
    Windows::Foundation::Numerics::float2 value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasFontFace)->get_SuperscriptPosition(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Size consume_Microsoft_Graphics_Canvas_Text_ICanvasFontFace<D>::SuperscriptSize() const
{
    Windows::Foundation::Size value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasFontFace)->get_SuperscriptSize(put_abi(value)));
    return value;
}

template <typename D> bool consume_Microsoft_Graphics_Canvas_Text_ICanvasFontFace<D>::HasTypographicMetrics() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasFontFace)->get_HasTypographicMetrics(&value));
    return value;
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Text_ICanvasFontFace<D>::Ascent() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasFontFace)->get_Ascent(&value));
    return value;
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Text_ICanvasFontFace<D>::Descent() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasFontFace)->get_Descent(&value));
    return value;
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Text_ICanvasFontFace<D>::LineGap() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasFontFace)->get_LineGap(&value));
    return value;
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Text_ICanvasFontFace<D>::CapHeight() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasFontFace)->get_CapHeight(&value));
    return value;
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Text_ICanvasFontFace<D>::LowercaseLetterHeight() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasFontFace)->get_LowercaseLetterHeight(&value));
    return value;
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Text_ICanvasFontFace<D>::UnderlinePosition() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasFontFace)->get_UnderlinePosition(&value));
    return value;
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Text_ICanvasFontFace<D>::UnderlineThickness() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasFontFace)->get_UnderlineThickness(&value));
    return value;
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Text_ICanvasFontFace<D>::StrikethroughPosition() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasFontFace)->get_StrikethroughPosition(&value));
    return value;
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Text_ICanvasFontFace<D>::StrikethroughThickness() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasFontFace)->get_StrikethroughThickness(&value));
    return value;
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Text_ICanvasFontFace<D>::CaretSlopeRise() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasFontFace)->get_CaretSlopeRise(&value));
    return value;
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Text_ICanvasFontFace<D>::CaretSlopeRun() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasFontFace)->get_CaretSlopeRun(&value));
    return value;
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Text_ICanvasFontFace<D>::CaretOffset() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasFontFace)->get_CaretOffset(&value));
    return value;
}

template <typename D> com_array<Microsoft::Graphics::Canvas::Text::CanvasUnicodeRange> consume_Microsoft_Graphics_Canvas_Text_ICanvasFontFace<D>::UnicodeRanges() const
{
    com_array<Microsoft::Graphics::Canvas::Text::CanvasUnicodeRange> valueElements;
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasFontFace)->get_UnicodeRanges(impl::put_size_abi(valueElements), put_abi(valueElements)));
    return valueElements;
}

template <typename D> bool consume_Microsoft_Graphics_Canvas_Text_ICanvasFontFace<D>::IsMonospaced() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasFontFace)->get_IsMonospaced(&value));
    return value;
}

template <typename D> com_array<int32_t> consume_Microsoft_Graphics_Canvas_Text_ICanvasFontFace<D>::GetVerticalGlyphVariants(array_view<int32_t const> inputElements) const
{
    com_array<int32_t> outputElements;
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasFontFace)->GetVerticalGlyphVariants(inputElements.size(), get_abi(inputElements), impl::put_size_abi(outputElements), put_abi(outputElements)));
    return outputElements;
}

template <typename D> bool consume_Microsoft_Graphics_Canvas_Text_ICanvasFontFace<D>::HasVerticalGlyphVariants() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasFontFace)->get_HasVerticalGlyphVariants(&value));
    return value;
}

template <typename D> Microsoft::Graphics::Canvas::Text::CanvasFontFileFormatType consume_Microsoft_Graphics_Canvas_Text_ICanvasFontFace<D>::FileFormatType() const
{
    Microsoft::Graphics::Canvas::Text::CanvasFontFileFormatType value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasFontFace)->get_FileFormatType(put_abi(value)));
    return value;
}

template <typename D> Microsoft::Graphics::Canvas::Text::CanvasFontSimulations consume_Microsoft_Graphics_Canvas_Text_ICanvasFontFace<D>::Simulations() const
{
    Microsoft::Graphics::Canvas::Text::CanvasFontSimulations value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasFontFace)->get_Simulations(put_abi(value)));
    return value;
}

template <typename D> bool consume_Microsoft_Graphics_Canvas_Text_ICanvasFontFace<D>::IsSymbolFont() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasFontFace)->get_IsSymbolFont(&value));
    return value;
}

template <typename D> uint32_t consume_Microsoft_Graphics_Canvas_Text_ICanvasFontFace<D>::GlyphCount() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasFontFace)->get_GlyphCount(&value));
    return value;
}

template <typename D> com_array<int32_t> consume_Microsoft_Graphics_Canvas_Text_ICanvasFontFace<D>::GetGlyphIndices(array_view<uint32_t const> inputElements) const
{
    com_array<int32_t> outputElements;
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasFontFace)->GetGlyphIndices(inputElements.size(), get_abi(inputElements), impl::put_size_abi(outputElements), put_abi(outputElements)));
    return outputElements;
}

template <typename D> com_array<Microsoft::Graphics::Canvas::Text::CanvasGlyphMetrics> consume_Microsoft_Graphics_Canvas_Text_ICanvasFontFace<D>::GetGlyphMetrics(array_view<int32_t const> inputElements, bool isSideways) const
{
    com_array<Microsoft::Graphics::Canvas::Text::CanvasGlyphMetrics> outputElements;
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasFontFace)->GetGlyphMetrics(inputElements.size(), get_abi(inputElements), isSideways, impl::put_size_abi(outputElements), put_abi(outputElements)));
    return outputElements;
}

template <typename D> com_array<Microsoft::Graphics::Canvas::Text::CanvasGlyphMetrics> consume_Microsoft_Graphics_Canvas_Text_ICanvasFontFace<D>::GetGdiCompatibleGlyphMetrics(float fontSize, float dpi, Windows::Foundation::Numerics::float3x2 const& transform, bool useGdiNatural, array_view<int32_t const> inputElements, bool isSideways) const
{
    com_array<Microsoft::Graphics::Canvas::Text::CanvasGlyphMetrics> outputElements;
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasFontFace)->GetGdiCompatibleGlyphMetrics(fontSize, dpi, get_abi(transform), useGdiNatural, inputElements.size(), get_abi(inputElements), isSideways, impl::put_size_abi(outputElements), put_abi(outputElements)));
    return outputElements;
}

template <typename D> Windows::UI::Text::FontWeight consume_Microsoft_Graphics_Canvas_Text_ICanvasFontFace<D>::Weight() const
{
    Windows::UI::Text::FontWeight value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasFontFace)->get_Weight(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Text::FontStretch consume_Microsoft_Graphics_Canvas_Text_ICanvasFontFace<D>::Stretch() const
{
    Windows::UI::Text::FontStretch value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasFontFace)->get_Stretch(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Text::FontStyle consume_Microsoft_Graphics_Canvas_Text_ICanvasFontFace<D>::Style() const
{
    Windows::UI::Text::FontStyle value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasFontFace)->get_Style(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, hstring> consume_Microsoft_Graphics_Canvas_Text_ICanvasFontFace<D>::FamilyNames() const
{
    Windows::Foundation::Collections::IMapView<hstring, hstring> values{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasFontFace)->get_FamilyNames(put_abi(values)));
    return values;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, hstring> consume_Microsoft_Graphics_Canvas_Text_ICanvasFontFace<D>::FaceNames() const
{
    Windows::Foundation::Collections::IMapView<hstring, hstring> values{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasFontFace)->get_FaceNames(put_abi(values)));
    return values;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, hstring> consume_Microsoft_Graphics_Canvas_Text_ICanvasFontFace<D>::GetInformationalStrings(Microsoft::Graphics::Canvas::Text::CanvasFontInformation const& fontInformation) const
{
    Windows::Foundation::Collections::IMapView<hstring, hstring> values{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasFontFace)->GetInformationalStrings(get_abi(fontInformation), put_abi(values)));
    return values;
}

template <typename D> bool consume_Microsoft_Graphics_Canvas_Text_ICanvasFontFace<D>::HasCharacter(uint32_t unicodeValue) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasFontFace)->HasCharacter(unicodeValue, &value));
    return value;
}

template <typename D> Windows::Foundation::Rect consume_Microsoft_Graphics_Canvas_Text_ICanvasFontFace<D>::GetGlyphRunBounds(Microsoft::Graphics::Canvas::CanvasDrawingSession const& drawingSession, Windows::Foundation::Numerics::float2 const& point, float fontSize, array_view<Microsoft::Graphics::Canvas::Text::CanvasGlyph const> glyphs, bool isSideways, uint32_t bidiLevel) const
{
    Windows::Foundation::Rect bounds{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasFontFace)->GetGlyphRunBounds(get_abi(drawingSession), get_abi(point), fontSize, glyphs.size(), get_abi(glyphs), isSideways, bidiLevel, put_abi(bounds)));
    return bounds;
}

template <typename D> Windows::Foundation::Rect consume_Microsoft_Graphics_Canvas_Text_ICanvasFontFace<D>::GetGlyphRunBounds(Microsoft::Graphics::Canvas::CanvasDrawingSession const& drawingSession, Windows::Foundation::Numerics::float2 const& point, float fontSize, array_view<Microsoft::Graphics::Canvas::Text::CanvasGlyph const> glyphs, bool isSideways, uint32_t bidiLevel, Microsoft::Graphics::Canvas::Text::CanvasTextMeasuringMode const& measuringMode) const
{
    Windows::Foundation::Rect bounds{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasFontFace)->GetGlyphRunBoundsWithMeasuringMode(get_abi(drawingSession), get_abi(point), fontSize, glyphs.size(), get_abi(glyphs), isSideways, bidiLevel, get_abi(measuringMode), put_abi(bounds)));
    return bounds;
}

template <typename D> com_array<uint8_t> consume_Microsoft_Graphics_Canvas_Text_ICanvasFontFace<D>::Panose() const
{
    com_array<uint8_t> valueElements;
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasFontFace)->get_Panose(impl::put_size_abi(valueElements), put_abi(valueElements)));
    return valueElements;
}

template <typename D> com_array<Microsoft::Graphics::Canvas::Text::CanvasTypographyFeatureName> consume_Microsoft_Graphics_Canvas_Text_ICanvasFontFace<D>::GetSupportedTypographicFeatureNames(Microsoft::Graphics::Canvas::Text::CanvasAnalyzedScript const& script) const
{
    com_array<Microsoft::Graphics::Canvas::Text::CanvasTypographyFeatureName> valueElements;
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasFontFace)->GetSupportedTypographicFeatureNames(get_abi(script), impl::put_size_abi(valueElements), put_abi(valueElements)));
    return valueElements;
}

template <typename D> com_array<Microsoft::Graphics::Canvas::Text::CanvasTypographyFeatureName> consume_Microsoft_Graphics_Canvas_Text_ICanvasFontFace<D>::GetSupportedTypographicFeatureNames(Microsoft::Graphics::Canvas::Text::CanvasAnalyzedScript const& script, param::hstring const& locale) const
{
    com_array<Microsoft::Graphics::Canvas::Text::CanvasTypographyFeatureName> valueElements;
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasFontFace)->GetSupportedTypographicFeatureNamesWithLocale(get_abi(script), get_abi(locale), impl::put_size_abi(valueElements), put_abi(valueElements)));
    return valueElements;
}

template <typename D> com_array<bool> consume_Microsoft_Graphics_Canvas_Text_ICanvasFontFace<D>::GetTypographicFeatureGlyphSupport(Microsoft::Graphics::Canvas::Text::CanvasAnalyzedScript const& script, Microsoft::Graphics::Canvas::Text::CanvasTypographyFeatureName const& typographicFeatureName, array_view<Microsoft::Graphics::Canvas::Text::CanvasGlyph const> glyphsElements) const
{
    com_array<bool> valueElements;
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasFontFace)->GetTypographicFeatureGlyphSupport(get_abi(script), get_abi(typographicFeatureName), glyphsElements.size(), get_abi(glyphsElements), impl::put_size_abi(valueElements), put_abi(valueElements)));
    return valueElements;
}

template <typename D> com_array<bool> consume_Microsoft_Graphics_Canvas_Text_ICanvasFontFace<D>::GetTypographicFeatureGlyphSupport(Microsoft::Graphics::Canvas::Text::CanvasAnalyzedScript const& script, Microsoft::Graphics::Canvas::Text::CanvasTypographyFeatureName const& typographicFeatureName, array_view<Microsoft::Graphics::Canvas::Text::CanvasGlyph const> glyphsElements, param::hstring const& locale) const
{
    com_array<bool> valueElements;
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasFontFace)->GetTypographicFeatureGlyphSupportWithLocale(get_abi(script), get_abi(typographicFeatureName), glyphsElements.size(), get_abi(glyphsElements), get_abi(locale), impl::put_size_abi(valueElements), put_abi(valueElements)));
    return valueElements;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Microsoft::Graphics::Canvas::Text::CanvasFontFace> consume_Microsoft_Graphics_Canvas_Text_ICanvasFontSet<D>::Fonts() const
{
    Windows::Foundation::Collections::IVectorView<Microsoft::Graphics::Canvas::Text::CanvasFontFace> value{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasFontSet)->get_Fonts(put_abi(value)));
    return value;
}

template <typename D> bool consume_Microsoft_Graphics_Canvas_Text_ICanvasFontSet<D>::TryFindFontFace(Microsoft::Graphics::Canvas::Text::CanvasFontFace const& fontFace, int32_t& index) const
{
    bool succeeded{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasFontSet)->TryFindFontFace(get_abi(fontFace), &index, &succeeded));
    return succeeded;
}

template <typename D> Microsoft::Graphics::Canvas::Text::CanvasFontSet consume_Microsoft_Graphics_Canvas_Text_ICanvasFontSet<D>::GetMatchingFonts(array_view<Microsoft::Graphics::Canvas::Text::CanvasFontProperty const> propertyElements) const
{
    Microsoft::Graphics::Canvas::Text::CanvasFontSet matchingFonts{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasFontSet)->GetMatchingFontsFromProperties(propertyElements.size(), get_abi(propertyElements), put_abi(matchingFonts)));
    return matchingFonts;
}

template <typename D> Microsoft::Graphics::Canvas::Text::CanvasFontSet consume_Microsoft_Graphics_Canvas_Text_ICanvasFontSet<D>::GetMatchingFonts(param::hstring const& familyName, Windows::UI::Text::FontWeight const& weight, Windows::UI::Text::FontStretch const& stretch, Windows::UI::Text::FontStyle const& style) const
{
    Microsoft::Graphics::Canvas::Text::CanvasFontSet matchingFonts{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasFontSet)->GetMatchingFontsFromWwsFamily(get_abi(familyName), get_abi(weight), get_abi(stretch), get_abi(style), put_abi(matchingFonts)));
    return matchingFonts;
}

template <typename D> uint32_t consume_Microsoft_Graphics_Canvas_Text_ICanvasFontSet<D>::CountFontsMatchingProperty(Microsoft::Graphics::Canvas::Text::CanvasFontProperty const& property) const
{
    uint32_t count{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasFontSet)->CountFontsMatchingProperty(get_abi(property), &count));
    return count;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, hstring> consume_Microsoft_Graphics_Canvas_Text_ICanvasFontSet<D>::GetPropertyValues(uint32_t fontIndex, Microsoft::Graphics::Canvas::Text::CanvasFontPropertyIdentifier const& propertyIdentifier) const
{
    Windows::Foundation::Collections::IMapView<hstring, hstring> values{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasFontSet)->GetPropertyValuesFromIndex(fontIndex, get_abi(propertyIdentifier), put_abi(values)));
    return values;
}

template <typename D> com_array<Microsoft::Graphics::Canvas::Text::CanvasFontProperty> consume_Microsoft_Graphics_Canvas_Text_ICanvasFontSet<D>::GetPropertyValues(Microsoft::Graphics::Canvas::Text::CanvasFontPropertyIdentifier const& propertyIdentifier, param::hstring const& preferredLocaleNames) const
{
    com_array<Microsoft::Graphics::Canvas::Text::CanvasFontProperty> valueElements;
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasFontSet)->GetPropertyValuesFromIdentifier(get_abi(propertyIdentifier), get_abi(preferredLocaleNames), impl::put_size_abi(valueElements), put_abi(valueElements)));
    return valueElements;
}

template <typename D> com_array<Microsoft::Graphics::Canvas::Text::CanvasFontProperty> consume_Microsoft_Graphics_Canvas_Text_ICanvasFontSet<D>::GetPropertyValues(Microsoft::Graphics::Canvas::Text::CanvasFontPropertyIdentifier const& propertyIdentifier) const
{
    com_array<Microsoft::Graphics::Canvas::Text::CanvasFontProperty> valueElements;
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasFontSet)->GetPropertyValues(get_abi(propertyIdentifier), impl::put_size_abi(valueElements), put_abi(valueElements)));
    return valueElements;
}

template <typename D> Microsoft::Graphics::Canvas::Text::CanvasFontSet consume_Microsoft_Graphics_Canvas_Text_ICanvasFontSetFactory<D>::Create(Windows::Foundation::Uri const& uri) const
{
    Microsoft::Graphics::Canvas::Text::CanvasFontSet fontSet{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasFontSetFactory)->Create(get_abi(uri), put_abi(fontSet)));
    return fontSet;
}

template <typename D> Microsoft::Graphics::Canvas::Text::CanvasFontSet consume_Microsoft_Graphics_Canvas_Text_ICanvasFontSetStatics<D>::GetSystemFontSet() const
{
    Microsoft::Graphics::Canvas::Text::CanvasFontSet fontSet{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasFontSetStatics)->GetSystemFontSet(put_abi(fontSet)));
    return fontSet;
}

template <typename D> Microsoft::Graphics::Canvas::Text::CanvasNumberSubstitution consume_Microsoft_Graphics_Canvas_Text_ICanvasNumberSubstitutionFactory<D>::Create(Microsoft::Graphics::Canvas::Text::CanvasNumberSubstitutionMethod const& method) const
{
    Microsoft::Graphics::Canvas::Text::CanvasNumberSubstitution canvasNumberSubstitution{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasNumberSubstitutionFactory)->Create(get_abi(method), put_abi(canvasNumberSubstitution)));
    return canvasNumberSubstitution;
}

template <typename D> Microsoft::Graphics::Canvas::Text::CanvasNumberSubstitution consume_Microsoft_Graphics_Canvas_Text_ICanvasNumberSubstitutionFactory<D>::CreateWithLocaleAndIgnoreOverrides(Microsoft::Graphics::Canvas::Text::CanvasNumberSubstitutionMethod const& method, param::hstring const& localeName, bool ignoreEnvironmentOverrides) const
{
    Microsoft::Graphics::Canvas::Text::CanvasNumberSubstitution canvasNumberSubstitution{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasNumberSubstitutionFactory)->CreateWithLocaleAndIgnoreOverrides(get_abi(method), get_abi(localeName), ignoreEnvironmentOverrides, put_abi(canvasNumberSubstitution)));
    return canvasNumberSubstitution;
}

template <typename D> Microsoft::Graphics::Canvas::Text::CanvasFontFace consume_Microsoft_Graphics_Canvas_Text_ICanvasScaledFont<D>::FontFace() const
{
    Microsoft::Graphics::Canvas::Text::CanvasFontFace value{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasScaledFont)->get_FontFace(put_abi(value)));
    return value;
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Text_ICanvasScaledFont<D>::ScaleFactor() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasScaledFont)->get_ScaleFactor(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Foundation::Collections::IKeyValuePair<Microsoft::Graphics::Canvas::Text::CanvasCharacterRange, Microsoft::Graphics::Canvas::Text::CanvasScaledFont>> consume_Microsoft_Graphics_Canvas_Text_ICanvasTextAnalyzer<D>::GetFonts(Microsoft::Graphics::Canvas::Text::CanvasTextFormat const& textFormat) const
{
    Windows::Foundation::Collections::IVectorView<Windows::Foundation::Collections::IKeyValuePair<Microsoft::Graphics::Canvas::Text::CanvasCharacterRange, Microsoft::Graphics::Canvas::Text::CanvasScaledFont>> values{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextAnalyzer)->GetFontsUsingSystemFontSet(get_abi(textFormat), put_abi(values)));
    return values;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Foundation::Collections::IKeyValuePair<Microsoft::Graphics::Canvas::Text::CanvasCharacterRange, Microsoft::Graphics::Canvas::Text::CanvasScaledFont>> consume_Microsoft_Graphics_Canvas_Text_ICanvasTextAnalyzer<D>::GetFonts(Microsoft::Graphics::Canvas::Text::CanvasTextFormat const& textFormat, Microsoft::Graphics::Canvas::Text::CanvasFontSet const& fontSet) const
{
    Windows::Foundation::Collections::IVectorView<Windows::Foundation::Collections::IKeyValuePair<Microsoft::Graphics::Canvas::Text::CanvasCharacterRange, Microsoft::Graphics::Canvas::Text::CanvasScaledFont>> values{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextAnalyzer)->GetFonts(get_abi(textFormat), get_abi(fontSet), put_abi(values)));
    return values;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Foundation::Collections::IKeyValuePair<Microsoft::Graphics::Canvas::Text::CanvasCharacterRange, Microsoft::Graphics::Canvas::Text::CanvasAnalyzedBidi>> consume_Microsoft_Graphics_Canvas_Text_ICanvasTextAnalyzer<D>::GetBidi() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Foundation::Collections::IKeyValuePair<Microsoft::Graphics::Canvas::Text::CanvasCharacterRange, Microsoft::Graphics::Canvas::Text::CanvasAnalyzedBidi>> values{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextAnalyzer)->GetBidi(put_abi(values)));
    return values;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Foundation::Collections::IKeyValuePair<Microsoft::Graphics::Canvas::Text::CanvasCharacterRange, Microsoft::Graphics::Canvas::Text::CanvasAnalyzedBidi>> consume_Microsoft_Graphics_Canvas_Text_ICanvasTextAnalyzer<D>::GetBidi(param::hstring const& locale) const
{
    Windows::Foundation::Collections::IVectorView<Windows::Foundation::Collections::IKeyValuePair<Microsoft::Graphics::Canvas::Text::CanvasCharacterRange, Microsoft::Graphics::Canvas::Text::CanvasAnalyzedBidi>> values{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextAnalyzer)->GetBidiWithLocale(get_abi(locale), put_abi(values)));
    return values;
}

template <typename D> com_array<Microsoft::Graphics::Canvas::Text::CanvasAnalyzedBreakpoint> consume_Microsoft_Graphics_Canvas_Text_ICanvasTextAnalyzer<D>::GetBreakpoints() const
{
    com_array<Microsoft::Graphics::Canvas::Text::CanvasAnalyzedBreakpoint> valueElements;
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextAnalyzer)->GetBreakpoints(impl::put_size_abi(valueElements), put_abi(valueElements)));
    return valueElements;
}

template <typename D> com_array<Microsoft::Graphics::Canvas::Text::CanvasAnalyzedBreakpoint> consume_Microsoft_Graphics_Canvas_Text_ICanvasTextAnalyzer<D>::GetBreakpoints(param::hstring const& locale) const
{
    com_array<Microsoft::Graphics::Canvas::Text::CanvasAnalyzedBreakpoint> valueElements;
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextAnalyzer)->GetBreakpointsWithLocale(get_abi(locale), impl::put_size_abi(valueElements), put_abi(valueElements)));
    return valueElements;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Foundation::Collections::IKeyValuePair<Microsoft::Graphics::Canvas::Text::CanvasCharacterRange, Microsoft::Graphics::Canvas::Text::CanvasNumberSubstitution>> consume_Microsoft_Graphics_Canvas_Text_ICanvasTextAnalyzer<D>::GetNumberSubstitutions() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Foundation::Collections::IKeyValuePair<Microsoft::Graphics::Canvas::Text::CanvasCharacterRange, Microsoft::Graphics::Canvas::Text::CanvasNumberSubstitution>> values{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextAnalyzer)->GetNumberSubstitutions(put_abi(values)));
    return values;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Foundation::Collections::IKeyValuePair<Microsoft::Graphics::Canvas::Text::CanvasCharacterRange, Microsoft::Graphics::Canvas::Text::CanvasAnalyzedScript>> consume_Microsoft_Graphics_Canvas_Text_ICanvasTextAnalyzer<D>::GetScript() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Foundation::Collections::IKeyValuePair<Microsoft::Graphics::Canvas::Text::CanvasCharacterRange, Microsoft::Graphics::Canvas::Text::CanvasAnalyzedScript>> values{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextAnalyzer)->GetScript(put_abi(values)));
    return values;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Foundation::Collections::IKeyValuePair<Microsoft::Graphics::Canvas::Text::CanvasCharacterRange, Microsoft::Graphics::Canvas::Text::CanvasAnalyzedScript>> consume_Microsoft_Graphics_Canvas_Text_ICanvasTextAnalyzer<D>::GetScript(param::hstring const& locale) const
{
    Windows::Foundation::Collections::IVectorView<Windows::Foundation::Collections::IKeyValuePair<Microsoft::Graphics::Canvas::Text::CanvasCharacterRange, Microsoft::Graphics::Canvas::Text::CanvasAnalyzedScript>> values{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextAnalyzer)->GetScriptWithLocale(get_abi(locale), put_abi(values)));
    return values;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Foundation::Collections::IKeyValuePair<Microsoft::Graphics::Canvas::Text::CanvasCharacterRange, Microsoft::Graphics::Canvas::Text::CanvasAnalyzedGlyphOrientation>> consume_Microsoft_Graphics_Canvas_Text_ICanvasTextAnalyzer<D>::GetGlyphOrientations() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Foundation::Collections::IKeyValuePair<Microsoft::Graphics::Canvas::Text::CanvasCharacterRange, Microsoft::Graphics::Canvas::Text::CanvasAnalyzedGlyphOrientation>> values{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextAnalyzer)->GetGlyphOrientations(put_abi(values)));
    return values;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Foundation::Collections::IKeyValuePair<Microsoft::Graphics::Canvas::Text::CanvasCharacterRange, Microsoft::Graphics::Canvas::Text::CanvasAnalyzedGlyphOrientation>> consume_Microsoft_Graphics_Canvas_Text_ICanvasTextAnalyzer<D>::GetGlyphOrientations(param::hstring const& locale) const
{
    Windows::Foundation::Collections::IVectorView<Windows::Foundation::Collections::IKeyValuePair<Microsoft::Graphics::Canvas::Text::CanvasCharacterRange, Microsoft::Graphics::Canvas::Text::CanvasAnalyzedGlyphOrientation>> values{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextAnalyzer)->GetGlyphOrientationsWithLocale(get_abi(locale), put_abi(values)));
    return values;
}

template <typename D> Microsoft::Graphics::Canvas::Text::CanvasScriptProperties consume_Microsoft_Graphics_Canvas_Text_ICanvasTextAnalyzer<D>::GetScriptProperties(Microsoft::Graphics::Canvas::Text::CanvasAnalyzedScript const& analyzedScript) const
{
    Microsoft::Graphics::Canvas::Text::CanvasScriptProperties scriptProperties{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextAnalyzer)->GetScriptProperties(get_abi(analyzedScript), put_abi(scriptProperties)));
    return scriptProperties;
}

template <typename D> com_array<Microsoft::Graphics::Canvas::Text::CanvasGlyph> consume_Microsoft_Graphics_Canvas_Text_ICanvasTextAnalyzer<D>::GetGlyphs(Microsoft::Graphics::Canvas::Text::CanvasCharacterRange const& characterRange, Microsoft::Graphics::Canvas::Text::CanvasFontFace const& fontFace, float fontSize, bool isSideways, bool isRightToLeft, Microsoft::Graphics::Canvas::Text::CanvasAnalyzedScript const& script) const
{
    com_array<Microsoft::Graphics::Canvas::Text::CanvasGlyph> valueElements;
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextAnalyzer)->GetGlyphs(get_abi(characterRange), get_abi(fontFace), fontSize, isSideways, isRightToLeft, get_abi(script), impl::put_size_abi(valueElements), put_abi(valueElements)));
    return valueElements;
}

template <typename D> com_array<Microsoft::Graphics::Canvas::Text::CanvasGlyph> consume_Microsoft_Graphics_Canvas_Text_ICanvasTextAnalyzer<D>::GetGlyphs(Microsoft::Graphics::Canvas::Text::CanvasCharacterRange const& characterRange, Microsoft::Graphics::Canvas::Text::CanvasFontFace const& fontFace, float fontSize, bool isSideways, bool isRightToLeft, Microsoft::Graphics::Canvas::Text::CanvasAnalyzedScript const& script, param::hstring const& locale, Microsoft::Graphics::Canvas::Text::CanvasNumberSubstitution const& numberSubstitution, param::vector_view<Windows::Foundation::Collections::IKeyValuePair<Microsoft::Graphics::Canvas::Text::CanvasCharacterRange, Microsoft::Graphics::Canvas::Text::CanvasTypography>> const& typographyRanges, com_array<int32_t>& clusterMapIndicesElements, com_array<bool>& isShapedAloneGlyphsElements, com_array<Microsoft::Graphics::Canvas::Text::CanvasGlyphShaping>& glyphShapingResultsElements) const
{
    com_array<Microsoft::Graphics::Canvas::Text::CanvasGlyph> valueElements;
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextAnalyzer)->GetGlyphsWithAllOptions(get_abi(characterRange), get_abi(fontFace), fontSize, isSideways, isRightToLeft, get_abi(script), get_abi(locale), get_abi(numberSubstitution), get_abi(typographyRanges), impl::put_size_abi(clusterMapIndicesElements), put_abi(clusterMapIndicesElements), impl::put_size_abi(isShapedAloneGlyphsElements), put_abi(isShapedAloneGlyphsElements), impl::put_size_abi(glyphShapingResultsElements), put_abi(glyphShapingResultsElements), impl::put_size_abi(valueElements), put_abi(valueElements)));
    return valueElements;
}

template <typename D> com_array<Microsoft::Graphics::Canvas::Text::CanvasJustificationOpportunity> consume_Microsoft_Graphics_Canvas_Text_ICanvasTextAnalyzer<D>::GetJustificationOpportunities(Microsoft::Graphics::Canvas::Text::CanvasCharacterRange const& characterRange, Microsoft::Graphics::Canvas::Text::CanvasFontFace const& fontFace, float fontSize, Microsoft::Graphics::Canvas::Text::CanvasAnalyzedScript const& script, array_view<int32_t const> clusterMapIndicesElements, array_view<Microsoft::Graphics::Canvas::Text::CanvasGlyphShaping const> glyphShapingResultsElements) const
{
    com_array<Microsoft::Graphics::Canvas::Text::CanvasJustificationOpportunity> valueElements;
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextAnalyzer)->GetJustificationOpportunities(get_abi(characterRange), get_abi(fontFace), fontSize, get_abi(script), clusterMapIndicesElements.size(), get_abi(clusterMapIndicesElements), glyphShapingResultsElements.size(), get_abi(glyphShapingResultsElements), impl::put_size_abi(valueElements), put_abi(valueElements)));
    return valueElements;
}

template <typename D> com_array<Microsoft::Graphics::Canvas::Text::CanvasGlyph> consume_Microsoft_Graphics_Canvas_Text_ICanvasTextAnalyzer<D>::ApplyJustificationOpportunities(float lineWidth, array_view<Microsoft::Graphics::Canvas::Text::CanvasJustificationOpportunity const> justificationOpportunitiesElements, array_view<Microsoft::Graphics::Canvas::Text::CanvasGlyph const> sourceGlyphsElements) const
{
    com_array<Microsoft::Graphics::Canvas::Text::CanvasGlyph> valueElements;
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextAnalyzer)->ApplyJustificationOpportunities(lineWidth, justificationOpportunitiesElements.size(), get_abi(justificationOpportunitiesElements), sourceGlyphsElements.size(), get_abi(sourceGlyphsElements), impl::put_size_abi(valueElements), put_abi(valueElements)));
    return valueElements;
}

template <typename D> com_array<Microsoft::Graphics::Canvas::Text::CanvasGlyph> consume_Microsoft_Graphics_Canvas_Text_ICanvasTextAnalyzer<D>::AddGlyphsAfterJustification(Microsoft::Graphics::Canvas::Text::CanvasFontFace const& fontFace, float fontSize, Microsoft::Graphics::Canvas::Text::CanvasAnalyzedScript const& script, array_view<int32_t const> clusterMapIndicesElements, array_view<Microsoft::Graphics::Canvas::Text::CanvasGlyph const> originalGlyphsElements, array_view<Microsoft::Graphics::Canvas::Text::CanvasGlyph const> justifiedGlyphsElements, array_view<Microsoft::Graphics::Canvas::Text::CanvasGlyphShaping const> glyphShapingResultsElements) const
{
    com_array<Microsoft::Graphics::Canvas::Text::CanvasGlyph> valueElements;
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextAnalyzer)->AddGlyphsAfterJustification(get_abi(fontFace), fontSize, get_abi(script), clusterMapIndicesElements.size(), get_abi(clusterMapIndicesElements), originalGlyphsElements.size(), get_abi(originalGlyphsElements), justifiedGlyphsElements.size(), get_abi(justifiedGlyphsElements), glyphShapingResultsElements.size(), get_abi(glyphShapingResultsElements), impl::put_size_abi(valueElements), put_abi(valueElements)));
    return valueElements;
}

template <typename D> com_array<Microsoft::Graphics::Canvas::Text::CanvasGlyph> consume_Microsoft_Graphics_Canvas_Text_ICanvasTextAnalyzer<D>::AddGlyphsAfterJustification(Microsoft::Graphics::Canvas::Text::CanvasFontFace const& fontFace, float fontSize, Microsoft::Graphics::Canvas::Text::CanvasAnalyzedScript const& script, array_view<int32_t const> clusterMapIndicesElements, array_view<Microsoft::Graphics::Canvas::Text::CanvasGlyph const> originalGlyphsElements, array_view<Microsoft::Graphics::Canvas::Text::CanvasGlyph const> justifiedGlyphsElements, array_view<Microsoft::Graphics::Canvas::Text::CanvasGlyphShaping const> glyphShapingResultsElements, com_array<int32_t>& outputClusterMapIndicesElements) const
{
    com_array<Microsoft::Graphics::Canvas::Text::CanvasGlyph> valueElements;
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextAnalyzer)->AddGlyphsAfterJustificationWithClusterMap(get_abi(fontFace), fontSize, get_abi(script), clusterMapIndicesElements.size(), get_abi(clusterMapIndicesElements), originalGlyphsElements.size(), get_abi(originalGlyphsElements), justifiedGlyphsElements.size(), get_abi(justifiedGlyphsElements), glyphShapingResultsElements.size(), get_abi(glyphShapingResultsElements), impl::put_size_abi(outputClusterMapIndicesElements), put_abi(outputClusterMapIndicesElements), impl::put_size_abi(valueElements), put_abi(valueElements)));
    return valueElements;
}

template <typename D> Microsoft::Graphics::Canvas::Text::CanvasTextAnalyzer consume_Microsoft_Graphics_Canvas_Text_ICanvasTextAnalyzerFactory<D>::Create(param::hstring const& text, Microsoft::Graphics::Canvas::Text::CanvasTextDirection const& textDirection) const
{
    Microsoft::Graphics::Canvas::Text::CanvasTextAnalyzer canvasTextAnalyzer{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextAnalyzerFactory)->Create(get_abi(text), get_abi(textDirection), put_abi(canvasTextAnalyzer)));
    return canvasTextAnalyzer;
}

template <typename D> Microsoft::Graphics::Canvas::Text::CanvasTextAnalyzer consume_Microsoft_Graphics_Canvas_Text_ICanvasTextAnalyzerFactory<D>::CreateWithNumberSubstitutionAndVerticalGlyphOrientationAndBidiLevel(param::hstring const& text, Microsoft::Graphics::Canvas::Text::CanvasTextDirection const& textDirection, Microsoft::Graphics::Canvas::Text::CanvasNumberSubstitution const& numberSubstitution, Microsoft::Graphics::Canvas::Text::CanvasVerticalGlyphOrientation const& verticalGlyphOrientation, uint32_t bidiLevel) const
{
    Microsoft::Graphics::Canvas::Text::CanvasTextAnalyzer canvasTextAnalyzer{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextAnalyzerFactory)->CreateWithNumberSubstitutionAndVerticalGlyphOrientationAndBidiLevel(get_abi(text), get_abi(textDirection), get_abi(numberSubstitution), get_abi(verticalGlyphOrientation), bidiLevel, put_abi(canvasTextAnalyzer)));
    return canvasTextAnalyzer;
}

template <typename D> Microsoft::Graphics::Canvas::Text::CanvasTextAnalyzer consume_Microsoft_Graphics_Canvas_Text_ICanvasTextAnalyzerFactory<D>::CreateWithOptions(param::hstring const& text, Microsoft::Graphics::Canvas::Text::CanvasTextDirection const& textDirection, Microsoft::Graphics::Canvas::Text::ICanvasTextAnalyzerOptions const& options) const
{
    Microsoft::Graphics::Canvas::Text::CanvasTextAnalyzer canvasTextAnalyzer{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextAnalyzerFactory)->CreateWithOptions(get_abi(text), get_abi(textDirection), get_abi(options), put_abi(canvasTextAnalyzer)));
    return canvasTextAnalyzer;
}

template <typename D> hstring consume_Microsoft_Graphics_Canvas_Text_ICanvasTextAnalyzerOptions<D>::GetLocaleName(int32_t characterIndex, int32_t& characterCount) const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextAnalyzerOptions)->GetLocaleName(characterIndex, &characterCount, put_abi(value)));
    return value;
}

template <typename D> Microsoft::Graphics::Canvas::Text::CanvasNumberSubstitution consume_Microsoft_Graphics_Canvas_Text_ICanvasTextAnalyzerOptions<D>::GetNumberSubstitution(int32_t characterIndex, int32_t& characterCount) const
{
    Microsoft::Graphics::Canvas::Text::CanvasNumberSubstitution value{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextAnalyzerOptions)->GetNumberSubstitution(characterIndex, &characterCount, put_abi(value)));
    return value;
}

template <typename D> Microsoft::Graphics::Canvas::Text::CanvasVerticalGlyphOrientation consume_Microsoft_Graphics_Canvas_Text_ICanvasTextAnalyzerOptions<D>::GetVerticalGlyphOrientation(int32_t characterIndex, int32_t& characterCount) const
{
    Microsoft::Graphics::Canvas::Text::CanvasVerticalGlyphOrientation value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextAnalyzerOptions)->GetVerticalGlyphOrientation(characterIndex, &characterCount, put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Microsoft_Graphics_Canvas_Text_ICanvasTextAnalyzerOptions<D>::GetBidiLevel(int32_t characterIndex, int32_t& characterCount) const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextAnalyzerOptions)->GetBidiLevel(characterIndex, &characterCount, &value));
    return value;
}

template <typename D> Microsoft::Graphics::Canvas::Text::CanvasTextDirection consume_Microsoft_Graphics_Canvas_Text_ICanvasTextFormat<D>::Direction() const
{
    Microsoft::Graphics::Canvas::Text::CanvasTextDirection value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextFormat)->get_Direction(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Text_ICanvasTextFormat<D>::Direction(Microsoft::Graphics::Canvas::Text::CanvasTextDirection const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextFormat)->put_Direction(get_abi(value)));
}

template <typename D> hstring consume_Microsoft_Graphics_Canvas_Text_ICanvasTextFormat<D>::FontFamily() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextFormat)->get_FontFamily(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Text_ICanvasTextFormat<D>::FontFamily(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextFormat)->put_FontFamily(get_abi(value)));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Text_ICanvasTextFormat<D>::FontSize() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextFormat)->get_FontSize(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Text_ICanvasTextFormat<D>::FontSize(float value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextFormat)->put_FontSize(value));
}

template <typename D> Windows::UI::Text::FontStretch consume_Microsoft_Graphics_Canvas_Text_ICanvasTextFormat<D>::FontStretch() const
{
    Windows::UI::Text::FontStretch value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextFormat)->get_FontStretch(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Text_ICanvasTextFormat<D>::FontStretch(Windows::UI::Text::FontStretch const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextFormat)->put_FontStretch(get_abi(value)));
}

template <typename D> Windows::UI::Text::FontStyle consume_Microsoft_Graphics_Canvas_Text_ICanvasTextFormat<D>::FontStyle() const
{
    Windows::UI::Text::FontStyle value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextFormat)->get_FontStyle(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Text_ICanvasTextFormat<D>::FontStyle(Windows::UI::Text::FontStyle const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextFormat)->put_FontStyle(get_abi(value)));
}

template <typename D> Windows::UI::Text::FontWeight consume_Microsoft_Graphics_Canvas_Text_ICanvasTextFormat<D>::FontWeight() const
{
    Windows::UI::Text::FontWeight value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextFormat)->get_FontWeight(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Text_ICanvasTextFormat<D>::FontWeight(Windows::UI::Text::FontWeight const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextFormat)->put_FontWeight(get_abi(value)));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Text_ICanvasTextFormat<D>::IncrementalTabStop() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextFormat)->get_IncrementalTabStop(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Text_ICanvasTextFormat<D>::IncrementalTabStop(float value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextFormat)->put_IncrementalTabStop(value));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Text_ICanvasTextFormat<D>::LineSpacing() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextFormat)->get_LineSpacing(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Text_ICanvasTextFormat<D>::LineSpacing(float value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextFormat)->put_LineSpacing(value));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Text_ICanvasTextFormat<D>::LineSpacingBaseline() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextFormat)->get_LineSpacingBaseline(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Text_ICanvasTextFormat<D>::LineSpacingBaseline(float value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextFormat)->put_LineSpacingBaseline(value));
}

template <typename D> hstring consume_Microsoft_Graphics_Canvas_Text_ICanvasTextFormat<D>::LocaleName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextFormat)->get_LocaleName(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Text_ICanvasTextFormat<D>::LocaleName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextFormat)->put_LocaleName(get_abi(value)));
}

template <typename D> Microsoft::Graphics::Canvas::Text::CanvasVerticalAlignment consume_Microsoft_Graphics_Canvas_Text_ICanvasTextFormat<D>::VerticalAlignment() const
{
    Microsoft::Graphics::Canvas::Text::CanvasVerticalAlignment value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextFormat)->get_VerticalAlignment(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Text_ICanvasTextFormat<D>::VerticalAlignment(Microsoft::Graphics::Canvas::Text::CanvasVerticalAlignment const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextFormat)->put_VerticalAlignment(get_abi(value)));
}

template <typename D> Microsoft::Graphics::Canvas::Text::CanvasHorizontalAlignment consume_Microsoft_Graphics_Canvas_Text_ICanvasTextFormat<D>::HorizontalAlignment() const
{
    Microsoft::Graphics::Canvas::Text::CanvasHorizontalAlignment value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextFormat)->get_HorizontalAlignment(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Text_ICanvasTextFormat<D>::HorizontalAlignment(Microsoft::Graphics::Canvas::Text::CanvasHorizontalAlignment const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextFormat)->put_HorizontalAlignment(get_abi(value)));
}

template <typename D> Microsoft::Graphics::Canvas::Text::CanvasTextTrimmingGranularity consume_Microsoft_Graphics_Canvas_Text_ICanvasTextFormat<D>::TrimmingGranularity() const
{
    Microsoft::Graphics::Canvas::Text::CanvasTextTrimmingGranularity value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextFormat)->get_TrimmingGranularity(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Text_ICanvasTextFormat<D>::TrimmingGranularity(Microsoft::Graphics::Canvas::Text::CanvasTextTrimmingGranularity const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextFormat)->put_TrimmingGranularity(get_abi(value)));
}

template <typename D> hstring consume_Microsoft_Graphics_Canvas_Text_ICanvasTextFormat<D>::TrimmingDelimiter() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextFormat)->get_TrimmingDelimiter(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Text_ICanvasTextFormat<D>::TrimmingDelimiter(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextFormat)->put_TrimmingDelimiter(get_abi(value)));
}

template <typename D> int32_t consume_Microsoft_Graphics_Canvas_Text_ICanvasTextFormat<D>::TrimmingDelimiterCount() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextFormat)->get_TrimmingDelimiterCount(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Text_ICanvasTextFormat<D>::TrimmingDelimiterCount(int32_t value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextFormat)->put_TrimmingDelimiterCount(value));
}

template <typename D> Microsoft::Graphics::Canvas::Text::CanvasWordWrapping consume_Microsoft_Graphics_Canvas_Text_ICanvasTextFormat<D>::WordWrapping() const
{
    Microsoft::Graphics::Canvas::Text::CanvasWordWrapping value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextFormat)->get_WordWrapping(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Text_ICanvasTextFormat<D>::WordWrapping(Microsoft::Graphics::Canvas::Text::CanvasWordWrapping const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextFormat)->put_WordWrapping(get_abi(value)));
}

template <typename D> Microsoft::Graphics::Canvas::Text::CanvasDrawTextOptions consume_Microsoft_Graphics_Canvas_Text_ICanvasTextFormat<D>::Options() const
{
    Microsoft::Graphics::Canvas::Text::CanvasDrawTextOptions value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextFormat)->get_Options(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Text_ICanvasTextFormat<D>::Options(Microsoft::Graphics::Canvas::Text::CanvasDrawTextOptions const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextFormat)->put_Options(get_abi(value)));
}

template <typename D> Microsoft::Graphics::Canvas::Text::CanvasVerticalGlyphOrientation consume_Microsoft_Graphics_Canvas_Text_ICanvasTextFormat<D>::VerticalGlyphOrientation() const
{
    Microsoft::Graphics::Canvas::Text::CanvasVerticalGlyphOrientation value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextFormat)->get_VerticalGlyphOrientation(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Text_ICanvasTextFormat<D>::VerticalGlyphOrientation(Microsoft::Graphics::Canvas::Text::CanvasVerticalGlyphOrientation const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextFormat)->put_VerticalGlyphOrientation(get_abi(value)));
}

template <typename D> Microsoft::Graphics::Canvas::Text::CanvasOpticalAlignment consume_Microsoft_Graphics_Canvas_Text_ICanvasTextFormat<D>::OpticalAlignment() const
{
    Microsoft::Graphics::Canvas::Text::CanvasOpticalAlignment value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextFormat)->get_OpticalAlignment(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Text_ICanvasTextFormat<D>::OpticalAlignment(Microsoft::Graphics::Canvas::Text::CanvasOpticalAlignment const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextFormat)->put_OpticalAlignment(get_abi(value)));
}

template <typename D> bool consume_Microsoft_Graphics_Canvas_Text_ICanvasTextFormat<D>::LastLineWrapping() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextFormat)->get_LastLineWrapping(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Text_ICanvasTextFormat<D>::LastLineWrapping(bool value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextFormat)->put_LastLineWrapping(value));
}

template <typename D> Microsoft::Graphics::Canvas::Text::CanvasLineSpacingMode consume_Microsoft_Graphics_Canvas_Text_ICanvasTextFormat<D>::LineSpacingMode() const
{
    Microsoft::Graphics::Canvas::Text::CanvasLineSpacingMode value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextFormat)->get_LineSpacingMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Text_ICanvasTextFormat<D>::LineSpacingMode(Microsoft::Graphics::Canvas::Text::CanvasLineSpacingMode const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextFormat)->put_LineSpacingMode(get_abi(value)));
}

template <typename D> Microsoft::Graphics::Canvas::Text::CanvasTrimmingSign consume_Microsoft_Graphics_Canvas_Text_ICanvasTextFormat<D>::TrimmingSign() const
{
    Microsoft::Graphics::Canvas::Text::CanvasTrimmingSign value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextFormat)->get_TrimmingSign(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Text_ICanvasTextFormat<D>::TrimmingSign(Microsoft::Graphics::Canvas::Text::CanvasTrimmingSign const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextFormat)->put_TrimmingSign(get_abi(value)));
}

template <typename D> Microsoft::Graphics::Canvas::Text::ICanvasTextInlineObject consume_Microsoft_Graphics_Canvas_Text_ICanvasTextFormat<D>::CustomTrimmingSign() const
{
    Microsoft::Graphics::Canvas::Text::ICanvasTextInlineObject value{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextFormat)->get_CustomTrimmingSign(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Text_ICanvasTextFormat<D>::CustomTrimmingSign(Microsoft::Graphics::Canvas::Text::ICanvasTextInlineObject const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextFormat)->put_CustomTrimmingSign(get_abi(value)));
}

template <typename D> com_array<hstring> consume_Microsoft_Graphics_Canvas_Text_ICanvasTextFormatStatics<D>::GetSystemFontFamilies() const
{
    com_array<hstring> valueElements;
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextFormatStatics)->GetSystemFontFamilies(impl::put_size_abi(valueElements), put_abi(valueElements)));
    return valueElements;
}

template <typename D> com_array<hstring> consume_Microsoft_Graphics_Canvas_Text_ICanvasTextFormatStatics<D>::GetSystemFontFamilies(param::vector_view<hstring> const& localeList) const
{
    com_array<hstring> valueElements;
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextFormatStatics)->GetSystemFontFamiliesFromLocaleList(get_abi(localeList), impl::put_size_abi(valueElements), put_abi(valueElements)));
    return valueElements;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Text_ICanvasTextInlineObject<D>::Draw(Microsoft::Graphics::Canvas::Text::ICanvasTextRenderer const& textRenderer, Windows::Foundation::Numerics::float2 const& point, bool isSideways, bool isRightToLeft, Windows::Foundation::IInspectable const& brush) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextInlineObject)->Draw(get_abi(textRenderer), get_abi(point), isSideways, isRightToLeft, get_abi(brush)));
}

template <typename D> Windows::Foundation::Size consume_Microsoft_Graphics_Canvas_Text_ICanvasTextInlineObject<D>::Size() const
{
    Windows::Foundation::Size value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextInlineObject)->get_Size(put_abi(value)));
    return value;
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Text_ICanvasTextInlineObject<D>::Baseline() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextInlineObject)->get_Baseline(&value));
    return value;
}

template <typename D> bool consume_Microsoft_Graphics_Canvas_Text_ICanvasTextInlineObject<D>::SupportsSideways() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextInlineObject)->get_SupportsSideways(&value));
    return value;
}

template <typename D> Windows::Foundation::Rect consume_Microsoft_Graphics_Canvas_Text_ICanvasTextInlineObject<D>::DrawBounds() const
{
    Windows::Foundation::Rect bounds{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextInlineObject)->get_DrawBounds(put_abi(bounds)));
    return bounds;
}

template <typename D> Microsoft::Graphics::Canvas::Text::CanvasLineBreakCondition consume_Microsoft_Graphics_Canvas_Text_ICanvasTextInlineObject<D>::BreakBefore() const
{
    Microsoft::Graphics::Canvas::Text::CanvasLineBreakCondition value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextInlineObject)->get_BreakBefore(put_abi(value)));
    return value;
}

template <typename D> Microsoft::Graphics::Canvas::Text::CanvasLineBreakCondition consume_Microsoft_Graphics_Canvas_Text_ICanvasTextInlineObject<D>::BreakAfter() const
{
    Microsoft::Graphics::Canvas::Text::CanvasLineBreakCondition value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextInlineObject)->get_BreakAfter(put_abi(value)));
    return value;
}

template <typename D> com_array<int32_t> consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::GetFormatChangeIndices() const
{
    com_array<int32_t> stops;
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->GetFormatChangeIndices(impl::put_size_abi(stops), put_abi(stops)));
    return stops;
}

template <typename D> Microsoft::Graphics::Canvas::Text::CanvasTextDirection consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::Direction() const
{
    Microsoft::Graphics::Canvas::Text::CanvasTextDirection value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->get_Direction(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::Direction(Microsoft::Graphics::Canvas::Text::CanvasTextDirection const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->put_Direction(get_abi(value)));
}

template <typename D> hstring consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::DefaultFontFamily() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->get_DefaultFontFamily(put_abi(value)));
    return value;
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::DefaultFontSize() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->get_DefaultFontSize(&value));
    return value;
}

template <typename D> Windows::UI::Text::FontStretch consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::DefaultFontStretch() const
{
    Windows::UI::Text::FontStretch value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->get_DefaultFontStretch(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Text::FontStyle consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::DefaultFontStyle() const
{
    Windows::UI::Text::FontStyle value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->get_DefaultFontStyle(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Text::FontWeight consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::DefaultFontWeight() const
{
    Windows::UI::Text::FontWeight value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->get_DefaultFontWeight(put_abi(value)));
    return value;
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::IncrementalTabStop() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->get_IncrementalTabStop(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::IncrementalTabStop(float value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->put_IncrementalTabStop(value));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::LineSpacing() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->get_LineSpacing(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::LineSpacing(float value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->put_LineSpacing(value));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::LineSpacingBaseline() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->get_LineSpacingBaseline(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::LineSpacingBaseline(float value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->put_LineSpacingBaseline(value));
}

template <typename D> hstring consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::DefaultLocaleName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->get_DefaultLocaleName(put_abi(value)));
    return value;
}

template <typename D> Microsoft::Graphics::Canvas::Text::CanvasVerticalAlignment consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::VerticalAlignment() const
{
    Microsoft::Graphics::Canvas::Text::CanvasVerticalAlignment value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->get_VerticalAlignment(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::VerticalAlignment(Microsoft::Graphics::Canvas::Text::CanvasVerticalAlignment const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->put_VerticalAlignment(get_abi(value)));
}

template <typename D> Microsoft::Graphics::Canvas::Text::CanvasHorizontalAlignment consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::HorizontalAlignment() const
{
    Microsoft::Graphics::Canvas::Text::CanvasHorizontalAlignment value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->get_HorizontalAlignment(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::HorizontalAlignment(Microsoft::Graphics::Canvas::Text::CanvasHorizontalAlignment const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->put_HorizontalAlignment(get_abi(value)));
}

template <typename D> Microsoft::Graphics::Canvas::Text::CanvasTextTrimmingGranularity consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::TrimmingGranularity() const
{
    Microsoft::Graphics::Canvas::Text::CanvasTextTrimmingGranularity value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->get_TrimmingGranularity(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::TrimmingGranularity(Microsoft::Graphics::Canvas::Text::CanvasTextTrimmingGranularity const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->put_TrimmingGranularity(get_abi(value)));
}

template <typename D> hstring consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::TrimmingDelimiter() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->get_TrimmingDelimiter(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::TrimmingDelimiter(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->put_TrimmingDelimiter(get_abi(value)));
}

template <typename D> int32_t consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::TrimmingDelimiterCount() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->get_TrimmingDelimiterCount(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::TrimmingDelimiterCount(int32_t value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->put_TrimmingDelimiterCount(value));
}

template <typename D> Microsoft::Graphics::Canvas::Text::CanvasWordWrapping consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::WordWrapping() const
{
    Microsoft::Graphics::Canvas::Text::CanvasWordWrapping value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->get_WordWrapping(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::WordWrapping(Microsoft::Graphics::Canvas::Text::CanvasWordWrapping const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->put_WordWrapping(get_abi(value)));
}

template <typename D> Microsoft::Graphics::Canvas::Text::CanvasDrawTextOptions consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::Options() const
{
    Microsoft::Graphics::Canvas::Text::CanvasDrawTextOptions value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->get_Options(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::Options(Microsoft::Graphics::Canvas::Text::CanvasDrawTextOptions const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->put_Options(get_abi(value)));
}

template <typename D> Microsoft::Graphics::Canvas::Text::CanvasLineSpacingMode consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::LineSpacingMode() const
{
    Microsoft::Graphics::Canvas::Text::CanvasLineSpacingMode value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->get_LineSpacingMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::LineSpacingMode(Microsoft::Graphics::Canvas::Text::CanvasLineSpacingMode const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->put_LineSpacingMode(get_abi(value)));
}

template <typename D> Microsoft::Graphics::Canvas::Text::CanvasTrimmingSign consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::TrimmingSign() const
{
    Microsoft::Graphics::Canvas::Text::CanvasTrimmingSign value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->get_TrimmingSign(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::TrimmingSign(Microsoft::Graphics::Canvas::Text::CanvasTrimmingSign const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->put_TrimmingSign(get_abi(value)));
}

template <typename D> Microsoft::Graphics::Canvas::Text::ICanvasTextInlineObject consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::CustomTrimmingSign() const
{
    Microsoft::Graphics::Canvas::Text::ICanvasTextInlineObject value{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->get_CustomTrimmingSign(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::CustomTrimmingSign(Microsoft::Graphics::Canvas::Text::ICanvasTextInlineObject const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->put_CustomTrimmingSign(get_abi(value)));
}

template <typename D> Windows::Foundation::Size consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::RequestedSize() const
{
    Windows::Foundation::Size value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->get_RequestedSize(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::RequestedSize(Windows::Foundation::Size const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->put_RequestedSize(get_abi(value)));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::GetMinimumLineLength() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->GetMinimumLineLength(&value));
    return value;
}

template <typename D> Microsoft::Graphics::Canvas::Brushes::ICanvasBrush consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::GetBrush(int32_t characterIndex) const
{
    Microsoft::Graphics::Canvas::Brushes::ICanvasBrush brush{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->GetBrush(characterIndex, put_abi(brush)));
    return brush;
}

template <typename D> Windows::Foundation::IInspectable consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::GetCustomBrush(int32_t characterIndex) const
{
    Windows::Foundation::IInspectable brush{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->GetCustomBrush(characterIndex, put_abi(brush)));
    return brush;
}

template <typename D> hstring consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::GetFontFamily(int32_t characterIndex) const
{
    hstring fontFamily{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->GetFontFamily(characterIndex, put_abi(fontFamily)));
    return fontFamily;
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::GetFontSize(int32_t characterIndex) const
{
    float fontSize{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->GetFontSize(characterIndex, &fontSize));
    return fontSize;
}

template <typename D> Windows::UI::Text::FontStretch consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::GetFontStretch(int32_t characterIndex) const
{
    Windows::UI::Text::FontStretch fontStretch{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->GetFontStretch(characterIndex, put_abi(fontStretch)));
    return fontStretch;
}

template <typename D> Windows::UI::Text::FontStyle consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::GetFontStyle(int32_t characterIndex) const
{
    Windows::UI::Text::FontStyle fontStyle{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->GetFontStyle(characterIndex, put_abi(fontStyle)));
    return fontStyle;
}

template <typename D> Windows::UI::Text::FontWeight consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::GetFontWeight(int32_t characterIndex) const
{
    Windows::UI::Text::FontWeight fontWeight{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->GetFontWeight(characterIndex, put_abi(fontWeight)));
    return fontWeight;
}

template <typename D> hstring consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::GetLocaleName(int32_t characterIndex) const
{
    hstring localeName{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->GetLocaleName(characterIndex, put_abi(localeName)));
    return localeName;
}

template <typename D> bool consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::GetStrikethrough(int32_t characterIndex) const
{
    bool hasStrikethrough{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->GetStrikethrough(characterIndex, &hasStrikethrough));
    return hasStrikethrough;
}

template <typename D> bool consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::GetUnderline(int32_t characterIndex) const
{
    bool hasUnderline{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->GetUnderline(characterIndex, &hasUnderline));
    return hasUnderline;
}

template <typename D> Microsoft::Graphics::Canvas::Text::ICanvasTextInlineObject consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::GetInlineObject(int32_t characterIndex) const
{
    Microsoft::Graphics::Canvas::Text::ICanvasTextInlineObject inlineObject{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->GetInlineObject(characterIndex, put_abi(inlineObject)));
    return inlineObject;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::SetColor(int32_t characterIndex, int32_t characterCount, Windows::UI::Color const& color) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->SetColor(characterIndex, characterCount, get_abi(color)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::SetBrush(int32_t characterIndex, int32_t characterCount, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->SetBrush(characterIndex, characterCount, get_abi(brush)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::SetCustomBrush(int32_t characterIndex, int32_t characterCount, Windows::Foundation::IInspectable const& brush) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->SetCustomBrush(characterIndex, characterCount, get_abi(brush)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::SetFontFamily(int32_t characterIndex, int32_t characterCount, param::hstring const& fontFamily) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->SetFontFamily(characterIndex, characterCount, get_abi(fontFamily)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::SetFontSize(int32_t characterIndex, int32_t characterCount, float fontSize) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->SetFontSize(characterIndex, characterCount, fontSize));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::SetFontStretch(int32_t characterIndex, int32_t characterCount, Windows::UI::Text::FontStretch const& fontStretch) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->SetFontStretch(characterIndex, characterCount, get_abi(fontStretch)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::SetFontStyle(int32_t characterIndex, int32_t characterCount, Windows::UI::Text::FontStyle const& fontStyle) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->SetFontStyle(characterIndex, characterCount, get_abi(fontStyle)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::SetFontWeight(int32_t characterIndex, int32_t characterCount, Windows::UI::Text::FontWeight const& fontWeight) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->SetFontWeight(characterIndex, characterCount, get_abi(fontWeight)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::SetLocaleName(int32_t characterIndex, int32_t characterCount, param::hstring const& name) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->SetLocaleName(characterIndex, characterCount, get_abi(name)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::SetStrikethrough(int32_t characterIndex, int32_t characterCount, bool hasStrikethrough) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->SetStrikethrough(characterIndex, characterCount, hasStrikethrough));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::SetUnderline(int32_t characterIndex, int32_t characterCount, bool hasUnderline) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->SetUnderline(characterIndex, characterCount, hasUnderline));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::SetInlineObject(int32_t characterIndex, int32_t characterCount, Microsoft::Graphics::Canvas::Text::ICanvasTextInlineObject const& inlineObject) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->SetInlineObject(characterIndex, characterCount, get_abi(inlineObject)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::DrawToTextRenderer(Microsoft::Graphics::Canvas::Text::ICanvasTextRenderer const& textRenderer, Windows::Foundation::Numerics::float2 const& position) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->DrawToTextRenderer(get_abi(textRenderer), get_abi(position)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::DrawToTextRenderer(Microsoft::Graphics::Canvas::Text::ICanvasTextRenderer const& textRenderer, float x, float y) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->DrawToTextRendererWithCoords(get_abi(textRenderer), x, y));
}

template <typename D> com_array<Microsoft::Graphics::Canvas::Text::CanvasLineMetrics> consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::LineMetrics() const
{
    com_array<Microsoft::Graphics::Canvas::Text::CanvasLineMetrics> valueElements;
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->get_LineMetrics(impl::put_size_abi(valueElements), put_abi(valueElements)));
    return valueElements;
}

template <typename D> com_array<Microsoft::Graphics::Canvas::Text::CanvasClusterMetrics> consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::ClusterMetrics() const
{
    com_array<Microsoft::Graphics::Canvas::Text::CanvasClusterMetrics> valueElements;
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->get_ClusterMetrics(impl::put_size_abi(valueElements), put_abi(valueElements)));
    return valueElements;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::SetTypography(int32_t characterIndex, int32_t characterCount, Microsoft::Graphics::Canvas::Text::CanvasTypography const& typography) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->SetTypography(characterIndex, characterCount, get_abi(typography)));
}

template <typename D> Microsoft::Graphics::Canvas::Text::CanvasTypography consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::GetTypography(int32_t characterIndex) const
{
    Microsoft::Graphics::Canvas::Text::CanvasTypography typography{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->GetTypography(characterIndex, put_abi(typography)));
    return typography;
}

template <typename D> Windows::Foundation::Rect consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::LayoutBounds() const
{
    Windows::Foundation::Rect bounds{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->get_LayoutBounds(put_abi(bounds)));
    return bounds;
}

template <typename D> Windows::Foundation::Rect consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::LayoutBoundsIncludingTrailingWhitespace() const
{
    Windows::Foundation::Rect bounds{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->get_LayoutBoundsIncludingTrailingWhitespace(put_abi(bounds)));
    return bounds;
}

template <typename D> int32_t consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::LineCount() const
{
    int32_t lineCount{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->get_LineCount(&lineCount));
    return lineCount;
}

template <typename D> int32_t consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::MaximumBidiReorderingDepth() const
{
    int32_t depth{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->get_MaximumBidiReorderingDepth(&depth));
    return depth;
}

template <typename D> Windows::Foundation::Rect consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::DrawBounds() const
{
    Windows::Foundation::Rect bounds{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->get_DrawBounds(put_abi(bounds)));
    return bounds;
}

template <typename D> bool consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::HitTest(Windows::Foundation::Numerics::float2 const& point) const
{
    bool isHit{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->HitTest(get_abi(point), &isHit));
    return isHit;
}

template <typename D> bool consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::HitTest(float x, float y) const
{
    bool isHit{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->HitTestWithCoords(x, y, &isHit));
    return isHit;
}

template <typename D> bool consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::HitTest(Windows::Foundation::Numerics::float2 const& point, Microsoft::Graphics::Canvas::Text::CanvasTextLayoutRegion& textLayoutRegion) const
{
    bool isHit{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->HitTestWithDescription(get_abi(point), put_abi(textLayoutRegion), &isHit));
    return isHit;
}

template <typename D> bool consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::HitTest(float x, float y, Microsoft::Graphics::Canvas::Text::CanvasTextLayoutRegion& textLayoutRegion) const
{
    bool isHit{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->HitTestWithDescriptionAndCoords(x, y, put_abi(textLayoutRegion), &isHit));
    return isHit;
}

template <typename D> bool consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::HitTest(Windows::Foundation::Numerics::float2 const& point, Microsoft::Graphics::Canvas::Text::CanvasTextLayoutRegion& textLayoutRegion, bool& trailingSideOfCharacter) const
{
    bool isHit{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->HitTestWithDescriptionAndTrailingSide(get_abi(point), put_abi(textLayoutRegion), &trailingSideOfCharacter, &isHit));
    return isHit;
}

template <typename D> bool consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::HitTest(float x, float y, Microsoft::Graphics::Canvas::Text::CanvasTextLayoutRegion& textLayoutRegion, bool& trailingSideOfCharacter) const
{
    bool isHit{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->HitTestWithDescriptionAndCoordsAndTrailingSide(x, y, put_abi(textLayoutRegion), &trailingSideOfCharacter, &isHit));
    return isHit;
}

template <typename D> Windows::Foundation::Numerics::float2 consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::GetCaretPosition(int32_t characterIndex, bool trailingSideOfCharacter) const
{
    Windows::Foundation::Numerics::float2 location{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->GetCaretPosition(characterIndex, trailingSideOfCharacter, put_abi(location)));
    return location;
}

template <typename D> Windows::Foundation::Numerics::float2 consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::GetCaretPosition(int32_t characterIndex, bool trailingSideOfCharacter, Microsoft::Graphics::Canvas::Text::CanvasTextLayoutRegion& textLayoutRegion) const
{
    Windows::Foundation::Numerics::float2 location{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->GetCaretPositionWithDescription(characterIndex, trailingSideOfCharacter, put_abi(textLayoutRegion), put_abi(location)));
    return location;
}

template <typename D> com_array<Microsoft::Graphics::Canvas::Text::CanvasTextLayoutRegion> consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::GetCharacterRegions(int32_t characterIndex, int32_t characterCount) const
{
    com_array<Microsoft::Graphics::Canvas::Text::CanvasTextLayoutRegion> hitTestDescriptions;
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->GetCharacterRegions(characterIndex, characterCount, impl::put_size_abi(hitTestDescriptions), put_abi(hitTestDescriptions)));
    return hitTestDescriptions;
}

template <typename D> bool consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::GetPairKerning(int32_t characterIndex) const
{
    bool hasPairKerning{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->GetPairKerning(characterIndex, &hasPairKerning));
    return hasPairKerning;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::SetPairKerning(int32_t characterIndex, int32_t characterCount, bool hasPairKerning) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->SetPairKerning(characterIndex, characterCount, hasPairKerning));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::GetLeadingCharacterSpacing(int32_t characterIndex) const
{
    float leadingSpacing{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->GetLeadingCharacterSpacing(characterIndex, &leadingSpacing));
    return leadingSpacing;
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::GetTrailingCharacterSpacing(int32_t characterIndex) const
{
    float trailingSpacing{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->GetTrailingCharacterSpacing(characterIndex, &trailingSpacing));
    return trailingSpacing;
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::GetMinimumCharacterAdvance(int32_t characterIndex) const
{
    float minimumAdvance{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->GetMinimumCharacterAdvance(characterIndex, &minimumAdvance));
    return minimumAdvance;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::SetCharacterSpacing(int32_t characterIndex, int32_t characterCount, float leadingSpacing, float trailingSpacing, float minimumAdvance) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->SetCharacterSpacing(characterIndex, characterCount, leadingSpacing, trailingSpacing, minimumAdvance));
}

template <typename D> Microsoft::Graphics::Canvas::Text::CanvasVerticalGlyphOrientation consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::VerticalGlyphOrientation() const
{
    Microsoft::Graphics::Canvas::Text::CanvasVerticalGlyphOrientation value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->get_VerticalGlyphOrientation(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::VerticalGlyphOrientation(Microsoft::Graphics::Canvas::Text::CanvasVerticalGlyphOrientation const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->put_VerticalGlyphOrientation(get_abi(value)));
}

template <typename D> Microsoft::Graphics::Canvas::Text::CanvasOpticalAlignment consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::OpticalAlignment() const
{
    Microsoft::Graphics::Canvas::Text::CanvasOpticalAlignment value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->get_OpticalAlignment(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::OpticalAlignment(Microsoft::Graphics::Canvas::Text::CanvasOpticalAlignment const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->put_OpticalAlignment(get_abi(value)));
}

template <typename D> bool consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::LastLineWrapping() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->get_LastLineWrapping(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::LastLineWrapping(bool value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->put_LastLineWrapping(value));
}

template <typename D> Microsoft::Graphics::Canvas::CanvasDevice consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>::Device() const
{
    Microsoft::Graphics::Canvas::CanvasDevice value{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayout)->get_Device(put_abi(value)));
    return value;
}

template <typename D> Microsoft::Graphics::Canvas::Text::CanvasTextLayout consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayoutFactory<D>::Create(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, param::hstring const& textString, Microsoft::Graphics::Canvas::Text::CanvasTextFormat const& textFormat, float requestedWidth, float requestedHeight) const
{
    Microsoft::Graphics::Canvas::Text::CanvasTextLayout canvasTextLayout{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayoutFactory)->Create(get_abi(resourceCreator), get_abi(textString), get_abi(textFormat), requestedWidth, requestedHeight, put_abi(canvasTextLayout)));
    return canvasTextLayout;
}

template <typename D> Windows::Foundation::Numerics::float3x2 consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayoutStatics<D>::GetGlyphOrientationTransform(Microsoft::Graphics::Canvas::Text::CanvasGlyphOrientation const& glyphOrientation, bool isSideways, Windows::Foundation::Numerics::float2 const& position) const
{
    Windows::Foundation::Numerics::float3x2 transform{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextLayoutStatics)->GetGlyphOrientationTransform(get_abi(glyphOrientation), isSideways, get_abi(position), put_abi(transform)));
    return transform;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Text_ICanvasTextRenderer<D>::DrawGlyphRun(Windows::Foundation::Numerics::float2 const& point, Microsoft::Graphics::Canvas::Text::CanvasFontFace const& fontFace, float fontSize, array_view<Microsoft::Graphics::Canvas::Text::CanvasGlyph const> glyphs, bool isSideways, uint32_t bidiLevel, Windows::Foundation::IInspectable const& brush, Microsoft::Graphics::Canvas::Text::CanvasTextMeasuringMode const& measuringMode, param::hstring const& localeName, param::hstring const& textString, array_view<int32_t const> clusterMapIndices, uint32_t characterIndex, Microsoft::Graphics::Canvas::Text::CanvasGlyphOrientation const& glyphOrientation) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextRenderer)->DrawGlyphRun(get_abi(point), get_abi(fontFace), fontSize, glyphs.size(), get_abi(glyphs), isSideways, bidiLevel, get_abi(brush), get_abi(measuringMode), get_abi(localeName), get_abi(textString), clusterMapIndices.size(), get_abi(clusterMapIndices), characterIndex, get_abi(glyphOrientation)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Text_ICanvasTextRenderer<D>::DrawStrikethrough(Windows::Foundation::Numerics::float2 const& point, float strikethroughWidth, float strikethroughThickness, float strikethroughOffset, Microsoft::Graphics::Canvas::Text::CanvasTextDirection const& textDirection, Windows::Foundation::IInspectable const& brush, Microsoft::Graphics::Canvas::Text::CanvasTextMeasuringMode const& textMeasuringMode, param::hstring const& localeName, Microsoft::Graphics::Canvas::Text::CanvasGlyphOrientation const& glyphOrientation) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextRenderer)->DrawStrikethrough(get_abi(point), strikethroughWidth, strikethroughThickness, strikethroughOffset, get_abi(textDirection), get_abi(brush), get_abi(textMeasuringMode), get_abi(localeName), get_abi(glyphOrientation)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Text_ICanvasTextRenderer<D>::DrawUnderline(Windows::Foundation::Numerics::float2 const& point, float underlineWidth, float underlineThickness, float underlineOffset, float runHeight, Microsoft::Graphics::Canvas::Text::CanvasTextDirection const& textDirection, Windows::Foundation::IInspectable const& brush, Microsoft::Graphics::Canvas::Text::CanvasTextMeasuringMode const& textMeasuringMode, param::hstring const& localeName, Microsoft::Graphics::Canvas::Text::CanvasGlyphOrientation const& glyphOrientation) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextRenderer)->DrawUnderline(get_abi(point), underlineWidth, underlineThickness, underlineOffset, runHeight, get_abi(textDirection), get_abi(brush), get_abi(textMeasuringMode), get_abi(localeName), get_abi(glyphOrientation)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Text_ICanvasTextRenderer<D>::DrawInlineObject(Windows::Foundation::Numerics::float2 const& point, Microsoft::Graphics::Canvas::Text::ICanvasTextInlineObject const& inlineObject, bool isSideways, bool isRightToLeft, Windows::Foundation::IInspectable const& brush, Microsoft::Graphics::Canvas::Text::CanvasGlyphOrientation const& glyphOrientation) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextRenderer)->DrawInlineObject(get_abi(point), get_abi(inlineObject), isSideways, isRightToLeft, get_abi(brush), get_abi(glyphOrientation)));
}

template <typename D> bool consume_Microsoft_Graphics_Canvas_Text_ICanvasTextRenderer<D>::PixelSnappingDisabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextRenderer)->get_PixelSnappingDisabled(&value));
    return value;
}

template <typename D> Windows::Foundation::Numerics::float3x2 consume_Microsoft_Graphics_Canvas_Text_ICanvasTextRenderer<D>::Transform() const
{
    Windows::Foundation::Numerics::float3x2 value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextRenderer)->get_Transform(put_abi(value)));
    return value;
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Text_ICanvasTextRenderer<D>::Dpi() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextRenderer)->get_Dpi(&value));
    return value;
}

template <typename D> Microsoft::Graphics::Canvas::Text::CanvasTextRenderingMode consume_Microsoft_Graphics_Canvas_Text_ICanvasTextRenderingParameters<D>::RenderingMode() const
{
    Microsoft::Graphics::Canvas::Text::CanvasTextRenderingMode value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextRenderingParameters)->get_RenderingMode(put_abi(value)));
    return value;
}

template <typename D> Microsoft::Graphics::Canvas::Text::CanvasTextGridFit consume_Microsoft_Graphics_Canvas_Text_ICanvasTextRenderingParameters<D>::GridFit() const
{
    Microsoft::Graphics::Canvas::Text::CanvasTextGridFit value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextRenderingParameters)->get_GridFit(put_abi(value)));
    return value;
}

template <typename D> Microsoft::Graphics::Canvas::Text::CanvasTextRenderingParameters consume_Microsoft_Graphics_Canvas_Text_ICanvasTextRenderingParametersFactory<D>::Create(Microsoft::Graphics::Canvas::Text::CanvasTextRenderingMode const& textRenderingMode, Microsoft::Graphics::Canvas::Text::CanvasTextGridFit const& gridFit) const
{
    Microsoft::Graphics::Canvas::Text::CanvasTextRenderingParameters textRenderingParameters{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTextRenderingParametersFactory)->Create(get_abi(textRenderingMode), get_abi(gridFit), put_abi(textRenderingParameters)));
    return textRenderingParameters;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Text_ICanvasTypography<D>::AddFeature(Microsoft::Graphics::Canvas::Text::CanvasTypographyFeature const& feature) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTypography)->AddFeature(get_abi(feature)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Text_ICanvasTypography<D>::AddFeature(Microsoft::Graphics::Canvas::Text::CanvasTypographyFeatureName const& name, uint32_t parameter) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTypography)->AddFeatureWithNameAndParameter(get_abi(name), parameter));
}

template <typename D> com_array<Microsoft::Graphics::Canvas::Text::CanvasTypographyFeature> consume_Microsoft_Graphics_Canvas_Text_ICanvasTypography<D>::GetFeatures() const
{
    com_array<Microsoft::Graphics::Canvas::Text::CanvasTypographyFeature> features;
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Text::ICanvasTypography)->GetFeatures(impl::put_size_abi(features), put_abi(features)));
    return features;
}

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Text::ICanvasFontFace> : produce_base<D, Microsoft::Graphics::Canvas::Text::ICanvasFontFace>
{
    HRESULT __stdcall GetRecommendedRenderingMode(float fontSize, float dpi, Microsoft::Graphics::Canvas::Text::CanvasTextMeasuringMode measuringMode, ::IUnknown* renderingParameters, Microsoft::Graphics::Canvas::Text::CanvasTextRenderingMode* renderingMode) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *renderingMode = detach_abi(this->shim().GetRecommendedRenderingMode(fontSize, dpi, *reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasTextMeasuringMode const*>(&measuringMode), *reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasTextRenderingParameters const*>(&renderingParameters)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetRecommendedRenderingModeWithAllOptions(float fontSize, float dpi, Microsoft::Graphics::Canvas::Text::CanvasTextMeasuringMode measuringMode, ::IUnknown* renderingParameters, Windows::Foundation::Numerics::float3x2 transform, bool isSideways, Microsoft::Graphics::Canvas::CanvasAntialiasing outlineThreshold, Microsoft::Graphics::Canvas::Text::CanvasTextRenderingMode* renderingMode) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *renderingMode = detach_abi(this->shim().GetRecommendedRenderingMode(fontSize, dpi, *reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasTextMeasuringMode const*>(&measuringMode), *reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasTextRenderingParameters const*>(&renderingParameters), *reinterpret_cast<Windows::Foundation::Numerics::float3x2 const*>(&transform), isSideways, *reinterpret_cast<Microsoft::Graphics::Canvas::CanvasAntialiasing const*>(&outlineThreshold)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetRecommendedGridFit(float fontSize, float dpi, Microsoft::Graphics::Canvas::Text::CanvasTextMeasuringMode measuringMode, ::IUnknown* renderingParameters, Windows::Foundation::Numerics::float3x2 transform, bool isSideways, Microsoft::Graphics::Canvas::CanvasAntialiasing outlineThreshold, Microsoft::Graphics::Canvas::Text::CanvasTextGridFit* gridFit) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *gridFit = detach_abi(this->shim().GetRecommendedGridFit(fontSize, dpi, *reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasTextMeasuringMode const*>(&measuringMode), *reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasTextRenderingParameters const*>(&renderingParameters), *reinterpret_cast<Windows::Foundation::Numerics::float3x2 const*>(&transform), isSideways, *reinterpret_cast<Microsoft::Graphics::Canvas::CanvasAntialiasing const*>(&outlineThreshold)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_GlyphBox(Windows::Foundation::Rect* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GlyphBox());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SubscriptPosition(Windows::Foundation::Numerics::float2* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SubscriptPosition());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SubscriptSize(Windows::Foundation::Size* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SubscriptSize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SuperscriptPosition(Windows::Foundation::Numerics::float2* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SuperscriptPosition());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SuperscriptSize(Windows::Foundation::Size* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SuperscriptSize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HasTypographicMetrics(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HasTypographicMetrics());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Ascent(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Ascent());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Descent(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Descent());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LineGap(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LineGap());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CapHeight(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CapHeight());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LowercaseLetterHeight(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LowercaseLetterHeight());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UnderlinePosition(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UnderlinePosition());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UnderlineThickness(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UnderlineThickness());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StrikethroughPosition(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StrikethroughPosition());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StrikethroughThickness(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StrikethroughThickness());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CaretSlopeRise(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CaretSlopeRise());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CaretSlopeRun(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CaretSlopeRun());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CaretOffset(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CaretOffset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UnicodeRanges(uint32_t* __valueElementsSize, struct_of<8>** valueElements) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            std::tie(*__valueElementsSize, *valueElements) = detach_abi(this->shim().UnicodeRanges());
            return S_OK;
        }
        catch (...)
        {
            *__valueElementsSize = 0;
            *valueElements = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsMonospaced(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsMonospaced());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetVerticalGlyphVariants(uint32_t __inputElementsSize, int32_t* inputElements, uint32_t* __outputElementsSize, int32_t** outputElements) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            std::tie(*__outputElementsSize, *outputElements) = detach_abi(this->shim().GetVerticalGlyphVariants(array_view<int32_t const>(reinterpret_cast<int32_t const *>(inputElements), reinterpret_cast<int32_t const *>(inputElements) + __inputElementsSize)));
            return S_OK;
        }
        catch (...)
        {
            *__outputElementsSize = 0;
            *outputElements = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HasVerticalGlyphVariants(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HasVerticalGlyphVariants());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FileFormatType(Microsoft::Graphics::Canvas::Text::CanvasFontFileFormatType* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FileFormatType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Simulations(Microsoft::Graphics::Canvas::Text::CanvasFontSimulations* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Simulations());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsSymbolFont(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsSymbolFont());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_GlyphCount(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GlyphCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetGlyphIndices(uint32_t __inputElementsSize, uint32_t* inputElements, uint32_t* __outputElementsSize, int32_t** outputElements) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            std::tie(*__outputElementsSize, *outputElements) = detach_abi(this->shim().GetGlyphIndices(array_view<uint32_t const>(reinterpret_cast<uint32_t const *>(inputElements), reinterpret_cast<uint32_t const *>(inputElements) + __inputElementsSize)));
            return S_OK;
        }
        catch (...)
        {
            *__outputElementsSize = 0;
            *outputElements = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetGlyphMetrics(uint32_t __inputElementsSize, int32_t* inputElements, bool isSideways, uint32_t* __outputElementsSize, struct_of<44>** outputElements) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            std::tie(*__outputElementsSize, *outputElements) = detach_abi(this->shim().GetGlyphMetrics(array_view<int32_t const>(reinterpret_cast<int32_t const *>(inputElements), reinterpret_cast<int32_t const *>(inputElements) + __inputElementsSize), isSideways));
            return S_OK;
        }
        catch (...)
        {
            *__outputElementsSize = 0;
            *outputElements = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetGdiCompatibleGlyphMetrics(float fontSize, float dpi, Windows::Foundation::Numerics::float3x2 transform, bool useGdiNatural, uint32_t __inputElementsSize, int32_t* inputElements, bool isSideways, uint32_t* __outputElementsSize, struct_of<44>** outputElements) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            std::tie(*__outputElementsSize, *outputElements) = detach_abi(this->shim().GetGdiCompatibleGlyphMetrics(fontSize, dpi, *reinterpret_cast<Windows::Foundation::Numerics::float3x2 const*>(&transform), useGdiNatural, array_view<int32_t const>(reinterpret_cast<int32_t const *>(inputElements), reinterpret_cast<int32_t const *>(inputElements) + __inputElementsSize), isSideways));
            return S_OK;
        }
        catch (...)
        {
            *__outputElementsSize = 0;
            *outputElements = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Weight(struct_of<2>* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Weight());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Stretch(Windows::UI::Text::FontStretch* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Stretch());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Style(Windows::UI::Text::FontStyle* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Style());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FamilyNames(::IUnknown** values) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *values = detach_abi(this->shim().FamilyNames());
            return S_OK;
        }
        catch (...)
        {
            *values = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FaceNames(::IUnknown** values) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *values = detach_abi(this->shim().FaceNames());
            return S_OK;
        }
        catch (...)
        {
            *values = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetInformationalStrings(Microsoft::Graphics::Canvas::Text::CanvasFontInformation fontInformation, ::IUnknown** values) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *values = detach_abi(this->shim().GetInformationalStrings(*reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasFontInformation const*>(&fontInformation)));
            return S_OK;
        }
        catch (...)
        {
            *values = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall HasCharacter(uint32_t unicodeValue, bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HasCharacter(unicodeValue));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetGlyphRunBounds(::IUnknown* drawingSession, Windows::Foundation::Numerics::float2 point, float fontSize, uint32_t __glyphsSize, struct_of<16>* glyphs, bool isSideways, uint32_t bidiLevel, Windows::Foundation::Rect* bounds) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *bounds = detach_abi(this->shim().GetGlyphRunBounds(*reinterpret_cast<Microsoft::Graphics::Canvas::CanvasDrawingSession const*>(&drawingSession), *reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&point), fontSize, array_view<Microsoft::Graphics::Canvas::Text::CanvasGlyph const>(reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasGlyph const *>(glyphs), reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasGlyph const *>(glyphs) + __glyphsSize), isSideways, bidiLevel));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetGlyphRunBoundsWithMeasuringMode(::IUnknown* drawingSession, Windows::Foundation::Numerics::float2 point, float fontSize, uint32_t __glyphsSize, struct_of<16>* glyphs, bool isSideways, uint32_t bidiLevel, Microsoft::Graphics::Canvas::Text::CanvasTextMeasuringMode measuringMode, Windows::Foundation::Rect* bounds) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *bounds = detach_abi(this->shim().GetGlyphRunBounds(*reinterpret_cast<Microsoft::Graphics::Canvas::CanvasDrawingSession const*>(&drawingSession), *reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&point), fontSize, array_view<Microsoft::Graphics::Canvas::Text::CanvasGlyph const>(reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasGlyph const *>(glyphs), reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasGlyph const *>(glyphs) + __glyphsSize), isSideways, bidiLevel, *reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasTextMeasuringMode const*>(&measuringMode)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Panose(uint32_t* __valueElementsSize, uint8_t** valueElements) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            std::tie(*__valueElementsSize, *valueElements) = detach_abi(this->shim().Panose());
            return S_OK;
        }
        catch (...)
        {
            *__valueElementsSize = 0;
            *valueElements = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetSupportedTypographicFeatureNames(struct_of<8> script, uint32_t* __valueElementsSize, Microsoft::Graphics::Canvas::Text::CanvasTypographyFeatureName** valueElements) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            std::tie(*__valueElementsSize, *valueElements) = detach_abi(this->shim().GetSupportedTypographicFeatureNames(*reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasAnalyzedScript const*>(&script)));
            return S_OK;
        }
        catch (...)
        {
            *__valueElementsSize = 0;
            *valueElements = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetSupportedTypographicFeatureNamesWithLocale(struct_of<8> script, HSTRING locale, uint32_t* __valueElementsSize, Microsoft::Graphics::Canvas::Text::CanvasTypographyFeatureName** valueElements) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            std::tie(*__valueElementsSize, *valueElements) = detach_abi(this->shim().GetSupportedTypographicFeatureNames(*reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasAnalyzedScript const*>(&script), *reinterpret_cast<hstring const*>(&locale)));
            return S_OK;
        }
        catch (...)
        {
            *__valueElementsSize = 0;
            *valueElements = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetTypographicFeatureGlyphSupport(struct_of<8> script, Microsoft::Graphics::Canvas::Text::CanvasTypographyFeatureName typographicFeatureName, uint32_t __glyphsElementsSize, struct_of<16>* glyphsElements, uint32_t* __valueElementsSize, bool** valueElements) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            std::tie(*__valueElementsSize, *valueElements) = detach_abi(this->shim().GetTypographicFeatureGlyphSupport(*reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasAnalyzedScript const*>(&script), *reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasTypographyFeatureName const*>(&typographicFeatureName), array_view<Microsoft::Graphics::Canvas::Text::CanvasGlyph const>(reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasGlyph const *>(glyphsElements), reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasGlyph const *>(glyphsElements) + __glyphsElementsSize)));
            return S_OK;
        }
        catch (...)
        {
            *__valueElementsSize = 0;
            *valueElements = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetTypographicFeatureGlyphSupportWithLocale(struct_of<8> script, Microsoft::Graphics::Canvas::Text::CanvasTypographyFeatureName typographicFeatureName, uint32_t __glyphsElementsSize, struct_of<16>* glyphsElements, HSTRING locale, uint32_t* __valueElementsSize, bool** valueElements) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            std::tie(*__valueElementsSize, *valueElements) = detach_abi(this->shim().GetTypographicFeatureGlyphSupport(*reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasAnalyzedScript const*>(&script), *reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasTypographyFeatureName const*>(&typographicFeatureName), array_view<Microsoft::Graphics::Canvas::Text::CanvasGlyph const>(reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasGlyph const *>(glyphsElements), reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasGlyph const *>(glyphsElements) + __glyphsElementsSize), *reinterpret_cast<hstring const*>(&locale)));
            return S_OK;
        }
        catch (...)
        {
            *__valueElementsSize = 0;
            *valueElements = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Text::ICanvasFontSet> : produce_base<D, Microsoft::Graphics::Canvas::Text::ICanvasFontSet>
{
    HRESULT __stdcall get_Fonts(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Fonts());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryFindFontFace(::IUnknown* fontFace, int32_t* index, bool* succeeded) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *succeeded = detach_abi(this->shim().TryFindFontFace(*reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasFontFace const*>(&fontFace), *index));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetMatchingFontsFromProperties(uint32_t __propertyElementsSize, struct_of<12,24>* propertyElements, ::IUnknown** matchingFonts) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *matchingFonts = detach_abi(this->shim().GetMatchingFonts(array_view<Microsoft::Graphics::Canvas::Text::CanvasFontProperty const>(reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasFontProperty const *>(propertyElements), reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasFontProperty const *>(propertyElements) + __propertyElementsSize)));
            return S_OK;
        }
        catch (...)
        {
            *matchingFonts = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetMatchingFontsFromWwsFamily(HSTRING familyName, struct_of<2> weight, Windows::UI::Text::FontStretch stretch, Windows::UI::Text::FontStyle style, ::IUnknown** matchingFonts) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *matchingFonts = detach_abi(this->shim().GetMatchingFonts(*reinterpret_cast<hstring const*>(&familyName), *reinterpret_cast<Windows::UI::Text::FontWeight const*>(&weight), *reinterpret_cast<Windows::UI::Text::FontStretch const*>(&stretch), *reinterpret_cast<Windows::UI::Text::FontStyle const*>(&style)));
            return S_OK;
        }
        catch (...)
        {
            *matchingFonts = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CountFontsMatchingProperty(struct_of<12,24> property, uint32_t* count) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *count = detach_abi(this->shim().CountFontsMatchingProperty(*reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasFontProperty const*>(&property)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetPropertyValuesFromIndex(uint32_t fontIndex, Microsoft::Graphics::Canvas::Text::CanvasFontPropertyIdentifier propertyIdentifier, ::IUnknown** values) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *values = detach_abi(this->shim().GetPropertyValues(fontIndex, *reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasFontPropertyIdentifier const*>(&propertyIdentifier)));
            return S_OK;
        }
        catch (...)
        {
            *values = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetPropertyValuesFromIdentifier(Microsoft::Graphics::Canvas::Text::CanvasFontPropertyIdentifier propertyIdentifier, HSTRING preferredLocaleNames, uint32_t* __valueElementsSize, struct_of<12,24>** valueElements) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            std::tie(*__valueElementsSize, *valueElements) = detach_abi(this->shim().GetPropertyValues(*reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasFontPropertyIdentifier const*>(&propertyIdentifier), *reinterpret_cast<hstring const*>(&preferredLocaleNames)));
            return S_OK;
        }
        catch (...)
        {
            *__valueElementsSize = 0;
            *valueElements = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetPropertyValues(Microsoft::Graphics::Canvas::Text::CanvasFontPropertyIdentifier propertyIdentifier, uint32_t* __valueElementsSize, struct_of<12,24>** valueElements) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            std::tie(*__valueElementsSize, *valueElements) = detach_abi(this->shim().GetPropertyValues(*reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasFontPropertyIdentifier const*>(&propertyIdentifier)));
            return S_OK;
        }
        catch (...)
        {
            *__valueElementsSize = 0;
            *valueElements = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Text::ICanvasFontSetFactory> : produce_base<D, Microsoft::Graphics::Canvas::Text::ICanvasFontSetFactory>
{
    HRESULT __stdcall Create(::IUnknown* uri, ::IUnknown** fontSet) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *fontSet = detach_abi(this->shim().Create(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri)));
            return S_OK;
        }
        catch (...)
        {
            *fontSet = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Text::ICanvasFontSetStatics> : produce_base<D, Microsoft::Graphics::Canvas::Text::ICanvasFontSetStatics>
{
    HRESULT __stdcall GetSystemFontSet(::IUnknown** fontSet) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *fontSet = detach_abi(this->shim().GetSystemFontSet());
            return S_OK;
        }
        catch (...)
        {
            *fontSet = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Text::ICanvasNumberSubstitution> : produce_base<D, Microsoft::Graphics::Canvas::Text::ICanvasNumberSubstitution>
{};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Text::ICanvasNumberSubstitutionFactory> : produce_base<D, Microsoft::Graphics::Canvas::Text::ICanvasNumberSubstitutionFactory>
{
    HRESULT __stdcall Create(Microsoft::Graphics::Canvas::Text::CanvasNumberSubstitutionMethod method, ::IUnknown** canvasNumberSubstitution) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *canvasNumberSubstitution = detach_abi(this->shim().Create(*reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasNumberSubstitutionMethod const*>(&method)));
            return S_OK;
        }
        catch (...)
        {
            *canvasNumberSubstitution = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateWithLocaleAndIgnoreOverrides(Microsoft::Graphics::Canvas::Text::CanvasNumberSubstitutionMethod method, HSTRING localeName, bool ignoreEnvironmentOverrides, ::IUnknown** canvasNumberSubstitution) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *canvasNumberSubstitution = detach_abi(this->shim().CreateWithLocaleAndIgnoreOverrides(*reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasNumberSubstitutionMethod const*>(&method), *reinterpret_cast<hstring const*>(&localeName), ignoreEnvironmentOverrides));
            return S_OK;
        }
        catch (...)
        {
            *canvasNumberSubstitution = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Text::ICanvasScaledFont> : produce_base<D, Microsoft::Graphics::Canvas::Text::ICanvasScaledFont>
{
    HRESULT __stdcall get_FontFace(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FontFace());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ScaleFactor(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ScaleFactor());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Text::ICanvasTextAnalyzer> : produce_base<D, Microsoft::Graphics::Canvas::Text::ICanvasTextAnalyzer>
{
    HRESULT __stdcall GetFontsUsingSystemFontSet(::IUnknown* textFormat, ::IUnknown** values) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *values = detach_abi(this->shim().GetFonts(*reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasTextFormat const*>(&textFormat)));
            return S_OK;
        }
        catch (...)
        {
            *values = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetFonts(::IUnknown* textFormat, ::IUnknown* fontSet, ::IUnknown** values) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *values = detach_abi(this->shim().GetFonts(*reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasTextFormat const*>(&textFormat), *reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasFontSet const*>(&fontSet)));
            return S_OK;
        }
        catch (...)
        {
            *values = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetBidi(::IUnknown** values) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *values = detach_abi(this->shim().GetBidi());
            return S_OK;
        }
        catch (...)
        {
            *values = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetBidiWithLocale(HSTRING locale, ::IUnknown** values) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *values = detach_abi(this->shim().GetBidi(*reinterpret_cast<hstring const*>(&locale)));
            return S_OK;
        }
        catch (...)
        {
            *values = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetBreakpoints(uint32_t* __valueElementsSize, struct_of<12>** valueElements) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            std::tie(*__valueElementsSize, *valueElements) = detach_abi(this->shim().GetBreakpoints());
            return S_OK;
        }
        catch (...)
        {
            *__valueElementsSize = 0;
            *valueElements = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetBreakpointsWithLocale(HSTRING locale, uint32_t* __valueElementsSize, struct_of<12>** valueElements) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            std::tie(*__valueElementsSize, *valueElements) = detach_abi(this->shim().GetBreakpoints(*reinterpret_cast<hstring const*>(&locale)));
            return S_OK;
        }
        catch (...)
        {
            *__valueElementsSize = 0;
            *valueElements = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetNumberSubstitutions(::IUnknown** values) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *values = detach_abi(this->shim().GetNumberSubstitutions());
            return S_OK;
        }
        catch (...)
        {
            *values = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetScript(::IUnknown** values) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *values = detach_abi(this->shim().GetScript());
            return S_OK;
        }
        catch (...)
        {
            *values = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetScriptWithLocale(HSTRING locale, ::IUnknown** values) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *values = detach_abi(this->shim().GetScript(*reinterpret_cast<hstring const*>(&locale)));
            return S_OK;
        }
        catch (...)
        {
            *values = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetGlyphOrientations(::IUnknown** values) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *values = detach_abi(this->shim().GetGlyphOrientations());
            return S_OK;
        }
        catch (...)
        {
            *values = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetGlyphOrientationsWithLocale(HSTRING locale, ::IUnknown** values) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *values = detach_abi(this->shim().GetGlyphOrientations(*reinterpret_cast<hstring const*>(&locale)));
            return S_OK;
        }
        catch (...)
        {
            *values = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetScriptProperties(struct_of<8> analyzedScript, struct_of<24,32>* scriptProperties) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *scriptProperties = detach_abi(this->shim().GetScriptProperties(*reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasAnalyzedScript const*>(&analyzedScript)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetGlyphs(struct_of<8> characterRange, ::IUnknown* fontFace, float fontSize, bool isSideways, bool isRightToLeft, struct_of<8> script, uint32_t* __valueElementsSize, struct_of<16>** valueElements) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            std::tie(*__valueElementsSize, *valueElements) = detach_abi(this->shim().GetGlyphs(*reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasCharacterRange const*>(&characterRange), *reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasFontFace const*>(&fontFace), fontSize, isSideways, isRightToLeft, *reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasAnalyzedScript const*>(&script)));
            return S_OK;
        }
        catch (...)
        {
            *__valueElementsSize = 0;
            *valueElements = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetGlyphsWithAllOptions(struct_of<8> characterRange, ::IUnknown* fontFace, float fontSize, bool isSideways, bool isRightToLeft, struct_of<8> script, HSTRING locale, ::IUnknown* numberSubstitution, ::IUnknown* typographyRanges, uint32_t* __clusterMapIndicesElementsSize, int32_t** clusterMapIndicesElements, uint32_t* __isShapedAloneGlyphsElementsSize, bool** isShapedAloneGlyphsElements, uint32_t* __glyphShapingResultsElementsSize, struct_of<8>** glyphShapingResultsElements, uint32_t* __valueElementsSize, struct_of<16>** valueElements) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            std::tie(*__valueElementsSize, *valueElements) = detach_abi(this->shim().GetGlyphs(*reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasCharacterRange const*>(&characterRange), *reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasFontFace const*>(&fontFace), fontSize, isSideways, isRightToLeft, *reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasAnalyzedScript const*>(&script), *reinterpret_cast<hstring const*>(&locale), *reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasNumberSubstitution const*>(&numberSubstitution), *reinterpret_cast<Windows::Foundation::Collections::IVectorView<Windows::Foundation::Collections::IKeyValuePair<Microsoft::Graphics::Canvas::Text::CanvasCharacterRange, Microsoft::Graphics::Canvas::Text::CanvasTypography>> const*>(&typographyRanges), detach_abi<int32_t>(__clusterMapIndicesElementsSize, clusterMapIndicesElements), detach_abi<bool>(__isShapedAloneGlyphsElementsSize, isShapedAloneGlyphsElements), detach_abi<Microsoft::Graphics::Canvas::Text::CanvasGlyphShaping>(__glyphShapingResultsElementsSize, glyphShapingResultsElements)));
            return S_OK;
        }
        catch (...)
        {
            *__clusterMapIndicesElementsSize = 0;
            *clusterMapIndicesElements = nullptr;
            *__isShapedAloneGlyphsElementsSize = 0;
            *isShapedAloneGlyphsElements = nullptr;
            *__glyphShapingResultsElementsSize = 0;
            *glyphShapingResultsElements = nullptr;
            *__valueElementsSize = 0;
            *valueElements = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetJustificationOpportunities(struct_of<8> characterRange, ::IUnknown* fontFace, float fontSize, struct_of<8> script, uint32_t __clusterMapIndicesElementsSize, int32_t* clusterMapIndicesElements, uint32_t __glyphShapingResultsElementsSize, struct_of<8>* glyphShapingResultsElements, uint32_t* __valueElementsSize, struct_of<20>** valueElements) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            std::tie(*__valueElementsSize, *valueElements) = detach_abi(this->shim().GetJustificationOpportunities(*reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasCharacterRange const*>(&characterRange), *reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasFontFace const*>(&fontFace), fontSize, *reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasAnalyzedScript const*>(&script), array_view<int32_t const>(reinterpret_cast<int32_t const *>(clusterMapIndicesElements), reinterpret_cast<int32_t const *>(clusterMapIndicesElements) + __clusterMapIndicesElementsSize), array_view<Microsoft::Graphics::Canvas::Text::CanvasGlyphShaping const>(reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasGlyphShaping const *>(glyphShapingResultsElements), reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasGlyphShaping const *>(glyphShapingResultsElements) + __glyphShapingResultsElementsSize)));
            return S_OK;
        }
        catch (...)
        {
            *__valueElementsSize = 0;
            *valueElements = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ApplyJustificationOpportunities(float lineWidth, uint32_t __justificationOpportunitiesElementsSize, struct_of<20>* justificationOpportunitiesElements, uint32_t __sourceGlyphsElementsSize, struct_of<16>* sourceGlyphsElements, uint32_t* __valueElementsSize, struct_of<16>** valueElements) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            std::tie(*__valueElementsSize, *valueElements) = detach_abi(this->shim().ApplyJustificationOpportunities(lineWidth, array_view<Microsoft::Graphics::Canvas::Text::CanvasJustificationOpportunity const>(reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasJustificationOpportunity const *>(justificationOpportunitiesElements), reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasJustificationOpportunity const *>(justificationOpportunitiesElements) + __justificationOpportunitiesElementsSize), array_view<Microsoft::Graphics::Canvas::Text::CanvasGlyph const>(reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasGlyph const *>(sourceGlyphsElements), reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasGlyph const *>(sourceGlyphsElements) + __sourceGlyphsElementsSize)));
            return S_OK;
        }
        catch (...)
        {
            *__valueElementsSize = 0;
            *valueElements = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddGlyphsAfterJustification(::IUnknown* fontFace, float fontSize, struct_of<8> script, uint32_t __clusterMapIndicesElementsSize, int32_t* clusterMapIndicesElements, uint32_t __originalGlyphsElementsSize, struct_of<16>* originalGlyphsElements, uint32_t __justifiedGlyphsElementsSize, struct_of<16>* justifiedGlyphsElements, uint32_t __glyphShapingResultsElementsSize, struct_of<8>* glyphShapingResultsElements, uint32_t* __valueElementsSize, struct_of<16>** valueElements) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            std::tie(*__valueElementsSize, *valueElements) = detach_abi(this->shim().AddGlyphsAfterJustification(*reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasFontFace const*>(&fontFace), fontSize, *reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasAnalyzedScript const*>(&script), array_view<int32_t const>(reinterpret_cast<int32_t const *>(clusterMapIndicesElements), reinterpret_cast<int32_t const *>(clusterMapIndicesElements) + __clusterMapIndicesElementsSize), array_view<Microsoft::Graphics::Canvas::Text::CanvasGlyph const>(reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasGlyph const *>(originalGlyphsElements), reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasGlyph const *>(originalGlyphsElements) + __originalGlyphsElementsSize), array_view<Microsoft::Graphics::Canvas::Text::CanvasGlyph const>(reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasGlyph const *>(justifiedGlyphsElements), reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasGlyph const *>(justifiedGlyphsElements) + __justifiedGlyphsElementsSize), array_view<Microsoft::Graphics::Canvas::Text::CanvasGlyphShaping const>(reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasGlyphShaping const *>(glyphShapingResultsElements), reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasGlyphShaping const *>(glyphShapingResultsElements) + __glyphShapingResultsElementsSize)));
            return S_OK;
        }
        catch (...)
        {
            *__valueElementsSize = 0;
            *valueElements = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddGlyphsAfterJustificationWithClusterMap(::IUnknown* fontFace, float fontSize, struct_of<8> script, uint32_t __clusterMapIndicesElementsSize, int32_t* clusterMapIndicesElements, uint32_t __originalGlyphsElementsSize, struct_of<16>* originalGlyphsElements, uint32_t __justifiedGlyphsElementsSize, struct_of<16>* justifiedGlyphsElements, uint32_t __glyphShapingResultsElementsSize, struct_of<8>* glyphShapingResultsElements, uint32_t* __outputClusterMapIndicesElementsSize, int32_t** outputClusterMapIndicesElements, uint32_t* __valueElementsSize, struct_of<16>** valueElements) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            std::tie(*__valueElementsSize, *valueElements) = detach_abi(this->shim().AddGlyphsAfterJustification(*reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasFontFace const*>(&fontFace), fontSize, *reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasAnalyzedScript const*>(&script), array_view<int32_t const>(reinterpret_cast<int32_t const *>(clusterMapIndicesElements), reinterpret_cast<int32_t const *>(clusterMapIndicesElements) + __clusterMapIndicesElementsSize), array_view<Microsoft::Graphics::Canvas::Text::CanvasGlyph const>(reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasGlyph const *>(originalGlyphsElements), reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasGlyph const *>(originalGlyphsElements) + __originalGlyphsElementsSize), array_view<Microsoft::Graphics::Canvas::Text::CanvasGlyph const>(reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasGlyph const *>(justifiedGlyphsElements), reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasGlyph const *>(justifiedGlyphsElements) + __justifiedGlyphsElementsSize), array_view<Microsoft::Graphics::Canvas::Text::CanvasGlyphShaping const>(reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasGlyphShaping const *>(glyphShapingResultsElements), reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasGlyphShaping const *>(glyphShapingResultsElements) + __glyphShapingResultsElementsSize), detach_abi<int32_t>(__outputClusterMapIndicesElementsSize, outputClusterMapIndicesElements)));
            return S_OK;
        }
        catch (...)
        {
            *__outputClusterMapIndicesElementsSize = 0;
            *outputClusterMapIndicesElements = nullptr;
            *__valueElementsSize = 0;
            *valueElements = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Text::ICanvasTextAnalyzerFactory> : produce_base<D, Microsoft::Graphics::Canvas::Text::ICanvasTextAnalyzerFactory>
{
    HRESULT __stdcall Create(HSTRING text, Microsoft::Graphics::Canvas::Text::CanvasTextDirection textDirection, ::IUnknown** canvasTextAnalyzer) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *canvasTextAnalyzer = detach_abi(this->shim().Create(*reinterpret_cast<hstring const*>(&text), *reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasTextDirection const*>(&textDirection)));
            return S_OK;
        }
        catch (...)
        {
            *canvasTextAnalyzer = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateWithNumberSubstitutionAndVerticalGlyphOrientationAndBidiLevel(HSTRING text, Microsoft::Graphics::Canvas::Text::CanvasTextDirection textDirection, ::IUnknown* numberSubstitution, Microsoft::Graphics::Canvas::Text::CanvasVerticalGlyphOrientation verticalGlyphOrientation, uint32_t bidiLevel, ::IUnknown** canvasTextAnalyzer) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *canvasTextAnalyzer = detach_abi(this->shim().CreateWithNumberSubstitutionAndVerticalGlyphOrientationAndBidiLevel(*reinterpret_cast<hstring const*>(&text), *reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasTextDirection const*>(&textDirection), *reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasNumberSubstitution const*>(&numberSubstitution), *reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasVerticalGlyphOrientation const*>(&verticalGlyphOrientation), bidiLevel));
            return S_OK;
        }
        catch (...)
        {
            *canvasTextAnalyzer = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateWithOptions(HSTRING text, Microsoft::Graphics::Canvas::Text::CanvasTextDirection textDirection, ::IUnknown* options, ::IUnknown** canvasTextAnalyzer) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *canvasTextAnalyzer = detach_abi(this->shim().CreateWithOptions(*reinterpret_cast<hstring const*>(&text), *reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasTextDirection const*>(&textDirection), *reinterpret_cast<Microsoft::Graphics::Canvas::Text::ICanvasTextAnalyzerOptions const*>(&options)));
            return S_OK;
        }
        catch (...)
        {
            *canvasTextAnalyzer = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Text::ICanvasTextAnalyzerOptions> : produce_base<D, Microsoft::Graphics::Canvas::Text::ICanvasTextAnalyzerOptions>
{
    HRESULT __stdcall GetLocaleName(int32_t characterIndex, int32_t* characterCount, HSTRING* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetLocaleName(characterIndex, *characterCount));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetNumberSubstitution(int32_t characterIndex, int32_t* characterCount, ::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetNumberSubstitution(characterIndex, *characterCount));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetVerticalGlyphOrientation(int32_t characterIndex, int32_t* characterCount, Microsoft::Graphics::Canvas::Text::CanvasVerticalGlyphOrientation* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetVerticalGlyphOrientation(characterIndex, *characterCount));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetBidiLevel(int32_t characterIndex, int32_t* characterCount, uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetBidiLevel(characterIndex, *characterCount));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Text::ICanvasTextFormat> : produce_base<D, Microsoft::Graphics::Canvas::Text::ICanvasTextFormat>
{
    HRESULT __stdcall get_Direction(Microsoft::Graphics::Canvas::Text::CanvasTextDirection* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Direction());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Direction(Microsoft::Graphics::Canvas::Text::CanvasTextDirection value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Direction(*reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasTextDirection const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FontFamily(HSTRING* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FontFamily());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_FontFamily(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FontFamily(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FontSize(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FontSize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_FontSize(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FontSize(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FontStretch(Windows::UI::Text::FontStretch* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FontStretch());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_FontStretch(Windows::UI::Text::FontStretch value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FontStretch(*reinterpret_cast<Windows::UI::Text::FontStretch const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FontStyle(Windows::UI::Text::FontStyle* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FontStyle());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_FontStyle(Windows::UI::Text::FontStyle value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FontStyle(*reinterpret_cast<Windows::UI::Text::FontStyle const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FontWeight(struct_of<2>* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FontWeight());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_FontWeight(struct_of<2> value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FontWeight(*reinterpret_cast<Windows::UI::Text::FontWeight const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IncrementalTabStop(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IncrementalTabStop());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IncrementalTabStop(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IncrementalTabStop(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LineSpacing(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LineSpacing());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LineSpacing(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LineSpacing(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LineSpacingBaseline(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LineSpacingBaseline());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LineSpacingBaseline(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LineSpacingBaseline(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LocaleName(HSTRING* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LocaleName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LocaleName(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LocaleName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VerticalAlignment(Microsoft::Graphics::Canvas::Text::CanvasVerticalAlignment* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VerticalAlignment());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_VerticalAlignment(Microsoft::Graphics::Canvas::Text::CanvasVerticalAlignment value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().VerticalAlignment(*reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasVerticalAlignment const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HorizontalAlignment(Microsoft::Graphics::Canvas::Text::CanvasHorizontalAlignment* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HorizontalAlignment());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_HorizontalAlignment(Microsoft::Graphics::Canvas::Text::CanvasHorizontalAlignment value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HorizontalAlignment(*reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasHorizontalAlignment const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TrimmingGranularity(Microsoft::Graphics::Canvas::Text::CanvasTextTrimmingGranularity* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TrimmingGranularity());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TrimmingGranularity(Microsoft::Graphics::Canvas::Text::CanvasTextTrimmingGranularity value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TrimmingGranularity(*reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasTextTrimmingGranularity const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TrimmingDelimiter(HSTRING* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TrimmingDelimiter());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TrimmingDelimiter(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TrimmingDelimiter(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TrimmingDelimiterCount(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TrimmingDelimiterCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TrimmingDelimiterCount(int32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TrimmingDelimiterCount(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WordWrapping(Microsoft::Graphics::Canvas::Text::CanvasWordWrapping* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().WordWrapping());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_WordWrapping(Microsoft::Graphics::Canvas::Text::CanvasWordWrapping value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WordWrapping(*reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasWordWrapping const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Options(Microsoft::Graphics::Canvas::Text::CanvasDrawTextOptions* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Options());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Options(Microsoft::Graphics::Canvas::Text::CanvasDrawTextOptions value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Options(*reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasDrawTextOptions const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VerticalGlyphOrientation(Microsoft::Graphics::Canvas::Text::CanvasVerticalGlyphOrientation* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VerticalGlyphOrientation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_VerticalGlyphOrientation(Microsoft::Graphics::Canvas::Text::CanvasVerticalGlyphOrientation value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().VerticalGlyphOrientation(*reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasVerticalGlyphOrientation const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OpticalAlignment(Microsoft::Graphics::Canvas::Text::CanvasOpticalAlignment* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OpticalAlignment());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_OpticalAlignment(Microsoft::Graphics::Canvas::Text::CanvasOpticalAlignment value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OpticalAlignment(*reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasOpticalAlignment const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LastLineWrapping(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LastLineWrapping());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LastLineWrapping(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LastLineWrapping(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LineSpacingMode(Microsoft::Graphics::Canvas::Text::CanvasLineSpacingMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LineSpacingMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LineSpacingMode(Microsoft::Graphics::Canvas::Text::CanvasLineSpacingMode value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LineSpacingMode(*reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasLineSpacingMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TrimmingSign(Microsoft::Graphics::Canvas::Text::CanvasTrimmingSign* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TrimmingSign());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TrimmingSign(Microsoft::Graphics::Canvas::Text::CanvasTrimmingSign value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TrimmingSign(*reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasTrimmingSign const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CustomTrimmingSign(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CustomTrimmingSign());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CustomTrimmingSign(::IUnknown* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CustomTrimmingSign(*reinterpret_cast<Microsoft::Graphics::Canvas::Text::ICanvasTextInlineObject const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Text::ICanvasTextFormatStatics> : produce_base<D, Microsoft::Graphics::Canvas::Text::ICanvasTextFormatStatics>
{
    HRESULT __stdcall GetSystemFontFamilies(uint32_t* __valueElementsSize, HSTRING** valueElements) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            std::tie(*__valueElementsSize, *valueElements) = detach_abi(this->shim().GetSystemFontFamilies());
            return S_OK;
        }
        catch (...)
        {
            *__valueElementsSize = 0;
            *valueElements = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetSystemFontFamiliesFromLocaleList(::IUnknown* localeList, uint32_t* __valueElementsSize, HSTRING** valueElements) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            std::tie(*__valueElementsSize, *valueElements) = detach_abi(this->shim().GetSystemFontFamilies(*reinterpret_cast<Windows::Foundation::Collections::IVectorView<hstring> const*>(&localeList)));
            return S_OK;
        }
        catch (...)
        {
            *__valueElementsSize = 0;
            *valueElements = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Text::ICanvasTextInlineObject> : produce_base<D, Microsoft::Graphics::Canvas::Text::ICanvasTextInlineObject>
{
    HRESULT __stdcall Draw(::IUnknown* textRenderer, Windows::Foundation::Numerics::float2 point, bool isSideways, bool isRightToLeft, ::IUnknown* brush) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Draw(*reinterpret_cast<Microsoft::Graphics::Canvas::Text::ICanvasTextRenderer const*>(&textRenderer), *reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&point), isSideways, isRightToLeft, *reinterpret_cast<Windows::Foundation::IInspectable const*>(&brush));
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

    HRESULT __stdcall get_Baseline(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Baseline());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportsSideways(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SupportsSideways());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DrawBounds(Windows::Foundation::Rect* bounds) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *bounds = detach_abi(this->shim().DrawBounds());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BreakBefore(Microsoft::Graphics::Canvas::Text::CanvasLineBreakCondition* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BreakBefore());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BreakAfter(Microsoft::Graphics::Canvas::Text::CanvasLineBreakCondition* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BreakAfter());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Text::ICanvasTextLayout> : produce_base<D, Microsoft::Graphics::Canvas::Text::ICanvasTextLayout>
{
    HRESULT __stdcall GetFormatChangeIndices(uint32_t* __stopsSize, int32_t** stops) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            std::tie(*__stopsSize, *stops) = detach_abi(this->shim().GetFormatChangeIndices());
            return S_OK;
        }
        catch (...)
        {
            *__stopsSize = 0;
            *stops = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Direction(Microsoft::Graphics::Canvas::Text::CanvasTextDirection* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Direction());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Direction(Microsoft::Graphics::Canvas::Text::CanvasTextDirection value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Direction(*reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasTextDirection const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DefaultFontFamily(HSTRING* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DefaultFontFamily());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DefaultFontSize(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DefaultFontSize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DefaultFontStretch(Windows::UI::Text::FontStretch* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DefaultFontStretch());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DefaultFontStyle(Windows::UI::Text::FontStyle* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DefaultFontStyle());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DefaultFontWeight(struct_of<2>* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DefaultFontWeight());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IncrementalTabStop(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IncrementalTabStop());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IncrementalTabStop(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IncrementalTabStop(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LineSpacing(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LineSpacing());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LineSpacing(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LineSpacing(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LineSpacingBaseline(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LineSpacingBaseline());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LineSpacingBaseline(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LineSpacingBaseline(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DefaultLocaleName(HSTRING* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DefaultLocaleName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VerticalAlignment(Microsoft::Graphics::Canvas::Text::CanvasVerticalAlignment* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VerticalAlignment());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_VerticalAlignment(Microsoft::Graphics::Canvas::Text::CanvasVerticalAlignment value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().VerticalAlignment(*reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasVerticalAlignment const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HorizontalAlignment(Microsoft::Graphics::Canvas::Text::CanvasHorizontalAlignment* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HorizontalAlignment());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_HorizontalAlignment(Microsoft::Graphics::Canvas::Text::CanvasHorizontalAlignment value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HorizontalAlignment(*reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasHorizontalAlignment const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TrimmingGranularity(Microsoft::Graphics::Canvas::Text::CanvasTextTrimmingGranularity* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TrimmingGranularity());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TrimmingGranularity(Microsoft::Graphics::Canvas::Text::CanvasTextTrimmingGranularity value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TrimmingGranularity(*reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasTextTrimmingGranularity const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TrimmingDelimiter(HSTRING* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TrimmingDelimiter());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TrimmingDelimiter(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TrimmingDelimiter(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TrimmingDelimiterCount(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TrimmingDelimiterCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TrimmingDelimiterCount(int32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TrimmingDelimiterCount(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WordWrapping(Microsoft::Graphics::Canvas::Text::CanvasWordWrapping* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().WordWrapping());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_WordWrapping(Microsoft::Graphics::Canvas::Text::CanvasWordWrapping value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WordWrapping(*reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasWordWrapping const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Options(Microsoft::Graphics::Canvas::Text::CanvasDrawTextOptions* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Options());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Options(Microsoft::Graphics::Canvas::Text::CanvasDrawTextOptions value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Options(*reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasDrawTextOptions const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LineSpacingMode(Microsoft::Graphics::Canvas::Text::CanvasLineSpacingMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LineSpacingMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LineSpacingMode(Microsoft::Graphics::Canvas::Text::CanvasLineSpacingMode value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LineSpacingMode(*reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasLineSpacingMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TrimmingSign(Microsoft::Graphics::Canvas::Text::CanvasTrimmingSign* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TrimmingSign());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TrimmingSign(Microsoft::Graphics::Canvas::Text::CanvasTrimmingSign value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TrimmingSign(*reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasTrimmingSign const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CustomTrimmingSign(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CustomTrimmingSign());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CustomTrimmingSign(::IUnknown* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CustomTrimmingSign(*reinterpret_cast<Microsoft::Graphics::Canvas::Text::ICanvasTextInlineObject const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RequestedSize(Windows::Foundation::Size* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RequestedSize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RequestedSize(Windows::Foundation::Size value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RequestedSize(*reinterpret_cast<Windows::Foundation::Size const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetMinimumLineLength(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetMinimumLineLength());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetBrush(int32_t characterIndex, ::IUnknown** brush) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *brush = detach_abi(this->shim().GetBrush(characterIndex));
            return S_OK;
        }
        catch (...)
        {
            *brush = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetCustomBrush(int32_t characterIndex, ::IUnknown** brush) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *brush = detach_abi(this->shim().GetCustomBrush(characterIndex));
            return S_OK;
        }
        catch (...)
        {
            *brush = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetFontFamily(int32_t characterIndex, HSTRING* fontFamily) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *fontFamily = detach_abi(this->shim().GetFontFamily(characterIndex));
            return S_OK;
        }
        catch (...)
        {
            *fontFamily = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetFontSize(int32_t characterIndex, float* fontSize) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *fontSize = detach_abi(this->shim().GetFontSize(characterIndex));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetFontStretch(int32_t characterIndex, Windows::UI::Text::FontStretch* fontStretch) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *fontStretch = detach_abi(this->shim().GetFontStretch(characterIndex));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetFontStyle(int32_t characterIndex, Windows::UI::Text::FontStyle* fontStyle) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *fontStyle = detach_abi(this->shim().GetFontStyle(characterIndex));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetFontWeight(int32_t characterIndex, struct_of<2>* fontWeight) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *fontWeight = detach_abi(this->shim().GetFontWeight(characterIndex));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetLocaleName(int32_t characterIndex, HSTRING* localeName) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *localeName = detach_abi(this->shim().GetLocaleName(characterIndex));
            return S_OK;
        }
        catch (...)
        {
            *localeName = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetStrikethrough(int32_t characterIndex, bool* hasStrikethrough) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *hasStrikethrough = detach_abi(this->shim().GetStrikethrough(characterIndex));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetUnderline(int32_t characterIndex, bool* hasUnderline) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *hasUnderline = detach_abi(this->shim().GetUnderline(characterIndex));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetInlineObject(int32_t characterIndex, ::IUnknown** inlineObject) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *inlineObject = detach_abi(this->shim().GetInlineObject(characterIndex));
            return S_OK;
        }
        catch (...)
        {
            *inlineObject = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetColor(int32_t characterIndex, int32_t characterCount, struct_of<4> color) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetColor(characterIndex, characterCount, *reinterpret_cast<Windows::UI::Color const*>(&color));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetBrush(int32_t characterIndex, int32_t characterCount, ::IUnknown* brush) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetBrush(characterIndex, characterCount, *reinterpret_cast<Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const*>(&brush));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetCustomBrush(int32_t characterIndex, int32_t characterCount, ::IUnknown* brush) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetCustomBrush(characterIndex, characterCount, *reinterpret_cast<Windows::Foundation::IInspectable const*>(&brush));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetFontFamily(int32_t characterIndex, int32_t characterCount, HSTRING fontFamily) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetFontFamily(characterIndex, characterCount, *reinterpret_cast<hstring const*>(&fontFamily));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetFontSize(int32_t characterIndex, int32_t characterCount, float fontSize) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetFontSize(characterIndex, characterCount, fontSize);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetFontStretch(int32_t characterIndex, int32_t characterCount, Windows::UI::Text::FontStretch fontStretch) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetFontStretch(characterIndex, characterCount, *reinterpret_cast<Windows::UI::Text::FontStretch const*>(&fontStretch));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetFontStyle(int32_t characterIndex, int32_t characterCount, Windows::UI::Text::FontStyle fontStyle) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetFontStyle(characterIndex, characterCount, *reinterpret_cast<Windows::UI::Text::FontStyle const*>(&fontStyle));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetFontWeight(int32_t characterIndex, int32_t characterCount, struct_of<2> fontWeight) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetFontWeight(characterIndex, characterCount, *reinterpret_cast<Windows::UI::Text::FontWeight const*>(&fontWeight));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetLocaleName(int32_t characterIndex, int32_t characterCount, HSTRING name) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetLocaleName(characterIndex, characterCount, *reinterpret_cast<hstring const*>(&name));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetStrikethrough(int32_t characterIndex, int32_t characterCount, bool hasStrikethrough) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetStrikethrough(characterIndex, characterCount, hasStrikethrough);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetUnderline(int32_t characterIndex, int32_t characterCount, bool hasUnderline) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetUnderline(characterIndex, characterCount, hasUnderline);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetInlineObject(int32_t characterIndex, int32_t characterCount, ::IUnknown* inlineObject) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetInlineObject(characterIndex, characterCount, *reinterpret_cast<Microsoft::Graphics::Canvas::Text::ICanvasTextInlineObject const*>(&inlineObject));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawToTextRenderer(::IUnknown* textRenderer, Windows::Foundation::Numerics::float2 position) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawToTextRenderer(*reinterpret_cast<Microsoft::Graphics::Canvas::Text::ICanvasTextRenderer const*>(&textRenderer), *reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&position));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawToTextRendererWithCoords(::IUnknown* textRenderer, float x, float y) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawToTextRenderer(*reinterpret_cast<Microsoft::Graphics::Canvas::Text::ICanvasTextRenderer const*>(&textRenderer), x, y);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LineMetrics(uint32_t* __valueElementsSize, struct_of<32>** valueElements) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            std::tie(*__valueElementsSize, *valueElements) = detach_abi(this->shim().LineMetrics());
            return S_OK;
        }
        catch (...)
        {
            *__valueElementsSize = 0;
            *valueElements = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ClusterMetrics(uint32_t* __valueElementsSize, struct_of<12>** valueElements) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            std::tie(*__valueElementsSize, *valueElements) = detach_abi(this->shim().ClusterMetrics());
            return S_OK;
        }
        catch (...)
        {
            *__valueElementsSize = 0;
            *valueElements = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetTypography(int32_t characterIndex, int32_t characterCount, ::IUnknown* typography) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetTypography(characterIndex, characterCount, *reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasTypography const*>(&typography));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetTypography(int32_t characterIndex, ::IUnknown** typography) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *typography = detach_abi(this->shim().GetTypography(characterIndex));
            return S_OK;
        }
        catch (...)
        {
            *typography = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LayoutBounds(Windows::Foundation::Rect* bounds) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *bounds = detach_abi(this->shim().LayoutBounds());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LayoutBoundsIncludingTrailingWhitespace(Windows::Foundation::Rect* bounds) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *bounds = detach_abi(this->shim().LayoutBoundsIncludingTrailingWhitespace());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LineCount(int32_t* lineCount) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *lineCount = detach_abi(this->shim().LineCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaximumBidiReorderingDepth(int32_t* depth) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *depth = detach_abi(this->shim().MaximumBidiReorderingDepth());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DrawBounds(Windows::Foundation::Rect* bounds) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *bounds = detach_abi(this->shim().DrawBounds());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall HitTest(Windows::Foundation::Numerics::float2 point, bool* isHit) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *isHit = detach_abi(this->shim().HitTest(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&point)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall HitTestWithCoords(float x, float y, bool* isHit) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *isHit = detach_abi(this->shim().HitTest(x, y));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall HitTestWithDescription(Windows::Foundation::Numerics::float2 point, struct_of<24>* textLayoutRegion, bool* isHit) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *isHit = detach_abi(this->shim().HitTest(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&point), *reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasTextLayoutRegion*>(textLayoutRegion)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall HitTestWithDescriptionAndCoords(float x, float y, struct_of<24>* textLayoutRegion, bool* isHit) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *isHit = detach_abi(this->shim().HitTest(x, y, *reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasTextLayoutRegion*>(textLayoutRegion)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall HitTestWithDescriptionAndTrailingSide(Windows::Foundation::Numerics::float2 point, struct_of<24>* textLayoutRegion, bool* trailingSideOfCharacter, bool* isHit) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *isHit = detach_abi(this->shim().HitTest(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&point), *reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasTextLayoutRegion*>(textLayoutRegion), *trailingSideOfCharacter));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall HitTestWithDescriptionAndCoordsAndTrailingSide(float x, float y, struct_of<24>* textLayoutRegion, bool* trailingSideOfCharacter, bool* isHit) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *isHit = detach_abi(this->shim().HitTest(x, y, *reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasTextLayoutRegion*>(textLayoutRegion), *trailingSideOfCharacter));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetCaretPosition(int32_t characterIndex, bool trailingSideOfCharacter, Windows::Foundation::Numerics::float2* location) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *location = detach_abi(this->shim().GetCaretPosition(characterIndex, trailingSideOfCharacter));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetCaretPositionWithDescription(int32_t characterIndex, bool trailingSideOfCharacter, struct_of<24>* textLayoutRegion, Windows::Foundation::Numerics::float2* location) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *location = detach_abi(this->shim().GetCaretPosition(characterIndex, trailingSideOfCharacter, *reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasTextLayoutRegion*>(textLayoutRegion)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetCharacterRegions(int32_t characterIndex, int32_t characterCount, uint32_t* __hitTestDescriptionsSize, struct_of<24>** hitTestDescriptions) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            std::tie(*__hitTestDescriptionsSize, *hitTestDescriptions) = detach_abi(this->shim().GetCharacterRegions(characterIndex, characterCount));
            return S_OK;
        }
        catch (...)
        {
            *__hitTestDescriptionsSize = 0;
            *hitTestDescriptions = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetPairKerning(int32_t characterIndex, bool* hasPairKerning) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *hasPairKerning = detach_abi(this->shim().GetPairKerning(characterIndex));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetPairKerning(int32_t characterIndex, int32_t characterCount, bool hasPairKerning) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetPairKerning(characterIndex, characterCount, hasPairKerning);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetLeadingCharacterSpacing(int32_t characterIndex, float* leadingSpacing) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *leadingSpacing = detach_abi(this->shim().GetLeadingCharacterSpacing(characterIndex));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetTrailingCharacterSpacing(int32_t characterIndex, float* trailingSpacing) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *trailingSpacing = detach_abi(this->shim().GetTrailingCharacterSpacing(characterIndex));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetMinimumCharacterAdvance(int32_t characterIndex, float* minimumAdvance) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *minimumAdvance = detach_abi(this->shim().GetMinimumCharacterAdvance(characterIndex));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetCharacterSpacing(int32_t characterIndex, int32_t characterCount, float leadingSpacing, float trailingSpacing, float minimumAdvance) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetCharacterSpacing(characterIndex, characterCount, leadingSpacing, trailingSpacing, minimumAdvance);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VerticalGlyphOrientation(Microsoft::Graphics::Canvas::Text::CanvasVerticalGlyphOrientation* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VerticalGlyphOrientation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_VerticalGlyphOrientation(Microsoft::Graphics::Canvas::Text::CanvasVerticalGlyphOrientation value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().VerticalGlyphOrientation(*reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasVerticalGlyphOrientation const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OpticalAlignment(Microsoft::Graphics::Canvas::Text::CanvasOpticalAlignment* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OpticalAlignment());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_OpticalAlignment(Microsoft::Graphics::Canvas::Text::CanvasOpticalAlignment value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OpticalAlignment(*reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasOpticalAlignment const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LastLineWrapping(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LastLineWrapping());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LastLineWrapping(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LastLineWrapping(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Device(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Device());
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
struct produce<D, Microsoft::Graphics::Canvas::Text::ICanvasTextLayoutFactory> : produce_base<D, Microsoft::Graphics::Canvas::Text::ICanvasTextLayoutFactory>
{
    HRESULT __stdcall Create(::IUnknown* resourceCreator, HSTRING textString, ::IUnknown* textFormat, float requestedWidth, float requestedHeight, ::IUnknown** canvasTextLayout) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *canvasTextLayout = detach_abi(this->shim().Create(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator), *reinterpret_cast<hstring const*>(&textString), *reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasTextFormat const*>(&textFormat), requestedWidth, requestedHeight));
            return S_OK;
        }
        catch (...)
        {
            *canvasTextLayout = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Text::ICanvasTextLayoutStatics> : produce_base<D, Microsoft::Graphics::Canvas::Text::ICanvasTextLayoutStatics>
{
    HRESULT __stdcall GetGlyphOrientationTransform(Microsoft::Graphics::Canvas::Text::CanvasGlyphOrientation glyphOrientation, bool isSideways, Windows::Foundation::Numerics::float2 position, Windows::Foundation::Numerics::float3x2* transform) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *transform = detach_abi(this->shim().GetGlyphOrientationTransform(*reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasGlyphOrientation const*>(&glyphOrientation), isSideways, *reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&position)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Text::ICanvasTextRenderer> : produce_base<D, Microsoft::Graphics::Canvas::Text::ICanvasTextRenderer>
{
    HRESULT __stdcall DrawGlyphRun(Windows::Foundation::Numerics::float2 point, ::IUnknown* fontFace, float fontSize, uint32_t __glyphsSize, struct_of<16>* glyphs, bool isSideways, uint32_t bidiLevel, ::IUnknown* brush, Microsoft::Graphics::Canvas::Text::CanvasTextMeasuringMode measuringMode, HSTRING localeName, HSTRING textString, uint32_t __clusterMapIndicesSize, int32_t* clusterMapIndices, uint32_t characterIndex, Microsoft::Graphics::Canvas::Text::CanvasGlyphOrientation glyphOrientation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawGlyphRun(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&point), *reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasFontFace const*>(&fontFace), fontSize, array_view<Microsoft::Graphics::Canvas::Text::CanvasGlyph const>(reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasGlyph const *>(glyphs), reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasGlyph const *>(glyphs) + __glyphsSize), isSideways, bidiLevel, *reinterpret_cast<Windows::Foundation::IInspectable const*>(&brush), *reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasTextMeasuringMode const*>(&measuringMode), *reinterpret_cast<hstring const*>(&localeName), *reinterpret_cast<hstring const*>(&textString), array_view<int32_t const>(reinterpret_cast<int32_t const *>(clusterMapIndices), reinterpret_cast<int32_t const *>(clusterMapIndices) + __clusterMapIndicesSize), characterIndex, *reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasGlyphOrientation const*>(&glyphOrientation));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawStrikethrough(Windows::Foundation::Numerics::float2 point, float strikethroughWidth, float strikethroughThickness, float strikethroughOffset, Microsoft::Graphics::Canvas::Text::CanvasTextDirection textDirection, ::IUnknown* brush, Microsoft::Graphics::Canvas::Text::CanvasTextMeasuringMode textMeasuringMode, HSTRING localeName, Microsoft::Graphics::Canvas::Text::CanvasGlyphOrientation glyphOrientation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawStrikethrough(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&point), strikethroughWidth, strikethroughThickness, strikethroughOffset, *reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasTextDirection const*>(&textDirection), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&brush), *reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasTextMeasuringMode const*>(&textMeasuringMode), *reinterpret_cast<hstring const*>(&localeName), *reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasGlyphOrientation const*>(&glyphOrientation));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawUnderline(Windows::Foundation::Numerics::float2 point, float underlineWidth, float underlineThickness, float underlineOffset, float runHeight, Microsoft::Graphics::Canvas::Text::CanvasTextDirection textDirection, ::IUnknown* brush, Microsoft::Graphics::Canvas::Text::CanvasTextMeasuringMode textMeasuringMode, HSTRING localeName, Microsoft::Graphics::Canvas::Text::CanvasGlyphOrientation glyphOrientation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawUnderline(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&point), underlineWidth, underlineThickness, underlineOffset, runHeight, *reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasTextDirection const*>(&textDirection), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&brush), *reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasTextMeasuringMode const*>(&textMeasuringMode), *reinterpret_cast<hstring const*>(&localeName), *reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasGlyphOrientation const*>(&glyphOrientation));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DrawInlineObject(Windows::Foundation::Numerics::float2 point, ::IUnknown* inlineObject, bool isSideways, bool isRightToLeft, ::IUnknown* brush, Microsoft::Graphics::Canvas::Text::CanvasGlyphOrientation glyphOrientation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawInlineObject(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&point), *reinterpret_cast<Microsoft::Graphics::Canvas::Text::ICanvasTextInlineObject const*>(&inlineObject), isSideways, isRightToLeft, *reinterpret_cast<Windows::Foundation::IInspectable const*>(&brush), *reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasGlyphOrientation const*>(&glyphOrientation));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PixelSnappingDisabled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PixelSnappingDisabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Transform(Windows::Foundation::Numerics::float3x2* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Transform());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Dpi(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Dpi());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Text::ICanvasTextRenderingParameters> : produce_base<D, Microsoft::Graphics::Canvas::Text::ICanvasTextRenderingParameters>
{
    HRESULT __stdcall get_RenderingMode(Microsoft::Graphics::Canvas::Text::CanvasTextRenderingMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RenderingMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_GridFit(Microsoft::Graphics::Canvas::Text::CanvasTextGridFit* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GridFit());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Text::ICanvasTextRenderingParametersFactory> : produce_base<D, Microsoft::Graphics::Canvas::Text::ICanvasTextRenderingParametersFactory>
{
    HRESULT __stdcall Create(Microsoft::Graphics::Canvas::Text::CanvasTextRenderingMode textRenderingMode, Microsoft::Graphics::Canvas::Text::CanvasTextGridFit gridFit, ::IUnknown** textRenderingParameters) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *textRenderingParameters = detach_abi(this->shim().Create(*reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasTextRenderingMode const*>(&textRenderingMode), *reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasTextGridFit const*>(&gridFit)));
            return S_OK;
        }
        catch (...)
        {
            *textRenderingParameters = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Text::ICanvasTypography> : produce_base<D, Microsoft::Graphics::Canvas::Text::ICanvasTypography>
{
    HRESULT __stdcall AddFeature(struct_of<8> feature) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddFeature(*reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasTypographyFeature const*>(&feature));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddFeatureWithNameAndParameter(Microsoft::Graphics::Canvas::Text::CanvasTypographyFeatureName name, uint32_t parameter) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddFeature(*reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasTypographyFeatureName const*>(&name), parameter);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetFeatures(uint32_t* __featuresSize, struct_of<8>** features) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            std::tie(*__featuresSize, *features) = detach_abi(this->shim().GetFeatures());
            return S_OK;
        }
        catch (...)
        {
            *__featuresSize = 0;
            *features = nullptr;
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Microsoft::Graphics::Canvas::Text {

inline CanvasFontSet::CanvasFontSet(Windows::Foundation::Uri const& uri) :
    CanvasFontSet(get_activation_factory<CanvasFontSet, Microsoft::Graphics::Canvas::Text::ICanvasFontSetFactory>().Create(uri))
{}

inline Microsoft::Graphics::Canvas::Text::CanvasFontSet CanvasFontSet::GetSystemFontSet()
{
    return get_activation_factory<CanvasFontSet, Microsoft::Graphics::Canvas::Text::ICanvasFontSetStatics>().GetSystemFontSet();
}

inline CanvasNumberSubstitution::CanvasNumberSubstitution(Microsoft::Graphics::Canvas::Text::CanvasNumberSubstitutionMethod const& method) :
    CanvasNumberSubstitution(get_activation_factory<CanvasNumberSubstitution, Microsoft::Graphics::Canvas::Text::ICanvasNumberSubstitutionFactory>().Create(method))
{}

inline CanvasNumberSubstitution::CanvasNumberSubstitution(Microsoft::Graphics::Canvas::Text::CanvasNumberSubstitutionMethod const& method, param::hstring const& localeName, bool ignoreEnvironmentOverrides) :
    CanvasNumberSubstitution(get_activation_factory<CanvasNumberSubstitution, Microsoft::Graphics::Canvas::Text::ICanvasNumberSubstitutionFactory>().CreateWithLocaleAndIgnoreOverrides(method, localeName, ignoreEnvironmentOverrides))
{}

inline CanvasTextAnalyzer::CanvasTextAnalyzer(param::hstring const& text, Microsoft::Graphics::Canvas::Text::CanvasTextDirection const& textDirection) :
    CanvasTextAnalyzer(get_activation_factory<CanvasTextAnalyzer, Microsoft::Graphics::Canvas::Text::ICanvasTextAnalyzerFactory>().Create(text, textDirection))
{}

inline CanvasTextAnalyzer::CanvasTextAnalyzer(param::hstring const& text, Microsoft::Graphics::Canvas::Text::CanvasTextDirection const& textDirection, Microsoft::Graphics::Canvas::Text::CanvasNumberSubstitution const& numberSubstitution, Microsoft::Graphics::Canvas::Text::CanvasVerticalGlyphOrientation const& verticalGlyphOrientation, uint32_t bidiLevel) :
    CanvasTextAnalyzer(get_activation_factory<CanvasTextAnalyzer, Microsoft::Graphics::Canvas::Text::ICanvasTextAnalyzerFactory>().CreateWithNumberSubstitutionAndVerticalGlyphOrientationAndBidiLevel(text, textDirection, numberSubstitution, verticalGlyphOrientation, bidiLevel))
{}

inline CanvasTextAnalyzer::CanvasTextAnalyzer(param::hstring const& text, Microsoft::Graphics::Canvas::Text::CanvasTextDirection const& textDirection, Microsoft::Graphics::Canvas::Text::ICanvasTextAnalyzerOptions const& options) :
    CanvasTextAnalyzer(get_activation_factory<CanvasTextAnalyzer, Microsoft::Graphics::Canvas::Text::ICanvasTextAnalyzerFactory>().CreateWithOptions(text, textDirection, options))
{}

inline CanvasTextFormat::CanvasTextFormat() :
    CanvasTextFormat(activate_instance<CanvasTextFormat>())
{}

inline com_array<hstring> CanvasTextFormat::GetSystemFontFamilies()
{
    return get_activation_factory<CanvasTextFormat, Microsoft::Graphics::Canvas::Text::ICanvasTextFormatStatics>().GetSystemFontFamilies();
}

inline com_array<hstring> CanvasTextFormat::GetSystemFontFamilies(param::vector_view<hstring> const& localeList)
{
    return get_activation_factory<CanvasTextFormat, Microsoft::Graphics::Canvas::Text::ICanvasTextFormatStatics>().GetSystemFontFamilies(localeList);
}

inline CanvasTextLayout::CanvasTextLayout(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, param::hstring const& textString, Microsoft::Graphics::Canvas::Text::CanvasTextFormat const& textFormat, float requestedWidth, float requestedHeight) :
    CanvasTextLayout(get_activation_factory<CanvasTextLayout, Microsoft::Graphics::Canvas::Text::ICanvasTextLayoutFactory>().Create(resourceCreator, textString, textFormat, requestedWidth, requestedHeight))
{}

inline Windows::Foundation::Numerics::float3x2 CanvasTextLayout::GetGlyphOrientationTransform(Microsoft::Graphics::Canvas::Text::CanvasGlyphOrientation const& glyphOrientation, bool isSideways, Windows::Foundation::Numerics::float2 const& position)
{
    return get_activation_factory<CanvasTextLayout, Microsoft::Graphics::Canvas::Text::ICanvasTextLayoutStatics>().GetGlyphOrientationTransform(glyphOrientation, isSideways, position);
}

inline CanvasTextRenderingParameters::CanvasTextRenderingParameters(Microsoft::Graphics::Canvas::Text::CanvasTextRenderingMode const& textRenderingMode, Microsoft::Graphics::Canvas::Text::CanvasTextGridFit const& gridFit) :
    CanvasTextRenderingParameters(get_activation_factory<CanvasTextRenderingParameters, Microsoft::Graphics::Canvas::Text::ICanvasTextRenderingParametersFactory>().Create(textRenderingMode, gridFit))
{}

inline CanvasTypography::CanvasTypography() :
    CanvasTypography(activate_instance<CanvasTypography>())
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Text::ICanvasFontFace> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Text::ICanvasFontFace> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Text::ICanvasFontSet> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Text::ICanvasFontSet> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Text::ICanvasFontSetFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Text::ICanvasFontSetFactory> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Text::ICanvasFontSetStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Text::ICanvasFontSetStatics> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Text::ICanvasNumberSubstitution> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Text::ICanvasNumberSubstitution> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Text::ICanvasNumberSubstitutionFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Text::ICanvasNumberSubstitutionFactory> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Text::ICanvasScaledFont> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Text::ICanvasScaledFont> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Text::ICanvasTextAnalyzer> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Text::ICanvasTextAnalyzer> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Text::ICanvasTextAnalyzerFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Text::ICanvasTextAnalyzerFactory> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Text::ICanvasTextAnalyzerOptions> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Text::ICanvasTextAnalyzerOptions> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Text::ICanvasTextFormat> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Text::ICanvasTextFormat> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Text::ICanvasTextFormatStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Text::ICanvasTextFormatStatics> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Text::ICanvasTextInlineObject> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Text::ICanvasTextInlineObject> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Text::ICanvasTextLayout> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Text::ICanvasTextLayout> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Text::ICanvasTextLayoutFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Text::ICanvasTextLayoutFactory> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Text::ICanvasTextLayoutStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Text::ICanvasTextLayoutStatics> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Text::ICanvasTextRenderer> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Text::ICanvasTextRenderer> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Text::ICanvasTextRenderingParameters> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Text::ICanvasTextRenderingParameters> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Text::ICanvasTextRenderingParametersFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Text::ICanvasTextRenderingParametersFactory> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Text::ICanvasTypography> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Text::ICanvasTypography> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Text::CanvasFontFace> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Text::CanvasFontFace> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Text::CanvasFontSet> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Text::CanvasFontSet> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Text::CanvasNumberSubstitution> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Text::CanvasNumberSubstitution> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Text::CanvasScaledFont> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Text::CanvasScaledFont> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Text::CanvasTextAnalyzer> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Text::CanvasTextAnalyzer> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Text::CanvasTextFormat> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Text::CanvasTextFormat> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Text::CanvasTextLayout> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Text::CanvasTextLayout> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Text::CanvasTextRenderingParameters> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Text::CanvasTextRenderingParameters> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Text::CanvasTypography> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Text::CanvasTypography> {};

}

WINRT_WARNING_POP
