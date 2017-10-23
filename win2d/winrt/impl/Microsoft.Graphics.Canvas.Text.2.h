// C++/WinRT v1.0.170906.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Microsoft.Graphics.Canvas.1.h"
#include "winrt/impl/Microsoft.Graphics.Canvas.Brushes.1.h"
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.UI.1.h"
#include "winrt/impl/Windows.UI.Text.1.h"
#include "winrt/impl/Microsoft.Graphics.Canvas.Text.1.h"

WINRT_EXPORT namespace winrt::Microsoft::Graphics::Canvas::Text {

struct CanvasAnalyzedBidi
{
    uint32_t ExplicitLevel;
    uint32_t ResolvedLevel;
};

struct CanvasAnalyzedBreakpoint
{
    Microsoft::Graphics::Canvas::Text::CanvasLineBreakCondition BreakBefore;
    Microsoft::Graphics::Canvas::Text::CanvasLineBreakCondition BreakAfter;
    bool IsWhitespace;
    bool IsSoftHyphen;
};

struct CanvasAnalyzedGlyphOrientation
{
    Microsoft::Graphics::Canvas::Text::CanvasGlyphOrientation GlyphOrientation;
    uint32_t AdjustedBidiLevel;
    bool IsSideways;
    bool IsRightToLeft;
};

struct CanvasAnalyzedScript
{
    int32_t ScriptIdentifier;
    Microsoft::Graphics::Canvas::Text::CanvasScriptShape Shape;
};

struct CanvasCharacterRange
{
    int32_t CharacterIndex;
    int32_t CharacterCount;
};

struct CanvasClusterMetrics
{
    int32_t CharacterCount;
    float Width;
    Microsoft::Graphics::Canvas::Text::CanvasClusterProperties Properties;
};

struct CanvasFontProperty
{
    Microsoft::Graphics::Canvas::Text::CanvasFontPropertyIdentifier Identifier;
    hstring Value;
    hstring Locale;
};

struct CanvasGlyph
{
    int32_t Index;
    float Advance;
    float AdvanceOffset;
    float AscenderOffset;
};

struct CanvasGlyphMetrics
{
    float LeftSideBearing;
    float AdvanceWidth;
    float RightSideBearing;
    float TopSideBearing;
    float AdvanceHeight;
    float BottomSideBearing;
    float VerticalOrigin;
    Windows::Foundation::Rect DrawBounds;
};

struct CanvasGlyphShaping
{
    Microsoft::Graphics::Canvas::Text::CanvasGlyphJustification Justification;
    bool IsClusterStart;
    bool IsDiacritic;
    bool IsZeroWidthSpace;
};

struct CanvasJustificationOpportunity
{
    float ExpansionMinimum;
    float ExpansionMaximum;
    float CompressionMaximum;
    uint8_t ExpansionPriority;
    uint8_t CompressionPriority;
    bool AllowResidualExpansion;
    bool AllowResidualCompression;
    bool ApplyToLeadingEdge;
    bool ApplyToTrailingEdge;
};

struct CanvasLineMetrics
{
    int32_t CharacterCount;
    int32_t TrailingWhitespaceCount;
    int32_t TerminalNewlineCount;
    float Height;
    float Baseline;
    bool IsTrimmed;
    float LeadingWhitespaceBefore;
    float LeadingWhitespaceAfter;
};

struct CanvasScriptProperties
{
    hstring IsoScriptCode;
    int32_t IsoScriptNumber;
    int32_t ClusterLookahead;
    hstring JustificationCharacter;
    bool RestrictCaretToClusters;
    bool UsesWordDividers;
    bool IsDiscreteWriting;
    bool IsBlockWriting;
    bool IsDistributedWithinCluster;
    bool IsConnectedWriting;
    bool IsCursiveWriting;
};

struct CanvasTextLayoutRegion
{
    int32_t CharacterIndex;
    int32_t CharacterCount;
    Windows::Foundation::Rect LayoutBounds;
};

struct CanvasTypographyFeature
{
    Microsoft::Graphics::Canvas::Text::CanvasTypographyFeatureName Name;
    uint32_t Parameter;
};

struct CanvasUnicodeRange
{
    uint32_t First;
    uint32_t Last;
};

}

namespace winrt::impl {

template <> struct is_struct<Microsoft::Graphics::Canvas::Text::CanvasAnalyzedBidi>
{
    static constexpr bool value{ true };
};

template <> struct is_struct<Microsoft::Graphics::Canvas::Text::CanvasAnalyzedBreakpoint>
{
    static constexpr bool value{ true };
};

template <> struct is_struct<Microsoft::Graphics::Canvas::Text::CanvasAnalyzedGlyphOrientation>
{
    static constexpr bool value{ true };
};

template <> struct is_struct<Microsoft::Graphics::Canvas::Text::CanvasAnalyzedScript>
{
    static constexpr bool value{ true };
};

template <> struct is_struct<Microsoft::Graphics::Canvas::Text::CanvasCharacterRange>
{
    static constexpr bool value{ true };
};

template <> struct is_struct<Microsoft::Graphics::Canvas::Text::CanvasClusterMetrics>
{
    static constexpr bool value{ true };
};

template <> struct is_struct<Microsoft::Graphics::Canvas::Text::CanvasFontProperty>
{
    static constexpr bool value{ true };
};

template <> struct is_struct<Microsoft::Graphics::Canvas::Text::CanvasGlyph>
{
    static constexpr bool value{ true };
};

template <> struct is_struct<Microsoft::Graphics::Canvas::Text::CanvasGlyphMetrics>
{
    static constexpr bool value{ true };
};

template <> struct is_struct<Microsoft::Graphics::Canvas::Text::CanvasGlyphShaping>
{
    static constexpr bool value{ true };
};

template <> struct is_struct<Microsoft::Graphics::Canvas::Text::CanvasJustificationOpportunity>
{
    static constexpr bool value{ true };
};

template <> struct is_struct<Microsoft::Graphics::Canvas::Text::CanvasLineMetrics>
{
    static constexpr bool value{ true };
};

template <> struct is_struct<Microsoft::Graphics::Canvas::Text::CanvasScriptProperties>
{
    static constexpr bool value{ true };
};

template <> struct is_struct<Microsoft::Graphics::Canvas::Text::CanvasTextLayoutRegion>
{
    static constexpr bool value{ true };
};

template <> struct is_struct<Microsoft::Graphics::Canvas::Text::CanvasTypographyFeature>
{
    static constexpr bool value{ true };
};

template <> struct is_struct<Microsoft::Graphics::Canvas::Text::CanvasUnicodeRange>
{
    static constexpr bool value{ true };
};

}

WINRT_EXPORT namespace winrt::Microsoft::Graphics::Canvas::Text {

struct WINRT_EBO CanvasFontFace :
    Microsoft::Graphics::Canvas::Text::ICanvasFontFace
{
    CanvasFontFace(std::nullptr_t) noexcept {}
};

struct WINRT_EBO CanvasFontSet :
    Microsoft::Graphics::Canvas::Text::ICanvasFontSet
{
    CanvasFontSet(std::nullptr_t) noexcept {}
    CanvasFontSet(Windows::Foundation::Uri const& uri);
    static Microsoft::Graphics::Canvas::Text::CanvasFontSet GetSystemFontSet();
};

struct WINRT_EBO CanvasNumberSubstitution :
    Microsoft::Graphics::Canvas::Text::ICanvasNumberSubstitution
{
    CanvasNumberSubstitution(std::nullptr_t) noexcept {}
    CanvasNumberSubstitution(Microsoft::Graphics::Canvas::Text::CanvasNumberSubstitutionMethod const& method);
    CanvasNumberSubstitution(Microsoft::Graphics::Canvas::Text::CanvasNumberSubstitutionMethod const& method, param::hstring const& localeName, bool ignoreEnvironmentOverrides);
};

struct WINRT_EBO CanvasScaledFont :
    Microsoft::Graphics::Canvas::Text::ICanvasScaledFont
{
    CanvasScaledFont(std::nullptr_t) noexcept {}
};

struct WINRT_EBO CanvasTextAnalyzer :
    Microsoft::Graphics::Canvas::Text::ICanvasTextAnalyzer
{
    CanvasTextAnalyzer(std::nullptr_t) noexcept {}
    CanvasTextAnalyzer(param::hstring const& text, Microsoft::Graphics::Canvas::Text::CanvasTextDirection const& textDirection);
    CanvasTextAnalyzer(param::hstring const& text, Microsoft::Graphics::Canvas::Text::CanvasTextDirection const& textDirection, Microsoft::Graphics::Canvas::Text::CanvasNumberSubstitution const& numberSubstitution, Microsoft::Graphics::Canvas::Text::CanvasVerticalGlyphOrientation const& verticalGlyphOrientation, uint32_t bidiLevel);
    CanvasTextAnalyzer(param::hstring const& text, Microsoft::Graphics::Canvas::Text::CanvasTextDirection const& textDirection, Microsoft::Graphics::Canvas::Text::ICanvasTextAnalyzerOptions const& options);
};

struct WINRT_EBO CanvasTextFormat :
    Microsoft::Graphics::Canvas::Text::ICanvasTextFormat
{
    CanvasTextFormat(std::nullptr_t) noexcept {}
    CanvasTextFormat();
    static com_array<hstring> GetSystemFontFamilies();
    static com_array<hstring> GetSystemFontFamilies(param::vector_view<hstring> const& localeList);
};

struct WINRT_EBO CanvasTextLayout :
    Microsoft::Graphics::Canvas::Text::ICanvasTextLayout
{
    CanvasTextLayout(std::nullptr_t) noexcept {}
    CanvasTextLayout(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, param::hstring const& textString, Microsoft::Graphics::Canvas::Text::CanvasTextFormat const& textFormat, float requestedWidth, float requestedHeight);
    static Windows::Foundation::Numerics::float3x2 GetGlyphOrientationTransform(Microsoft::Graphics::Canvas::Text::CanvasGlyphOrientation const& glyphOrientation, bool isSideways, Windows::Foundation::Numerics::float2 const& position);
};

struct WINRT_EBO CanvasTextRenderingParameters :
    Microsoft::Graphics::Canvas::Text::ICanvasTextRenderingParameters
{
    CanvasTextRenderingParameters(std::nullptr_t) noexcept {}
    CanvasTextRenderingParameters(Microsoft::Graphics::Canvas::Text::CanvasTextRenderingMode const& textRenderingMode, Microsoft::Graphics::Canvas::Text::CanvasTextGridFit const& gridFit);
};

struct WINRT_EBO CanvasTypography :
    Microsoft::Graphics::Canvas::Text::ICanvasTypography
{
    CanvasTypography(std::nullptr_t) noexcept {}
    CanvasTypography();
};

}
