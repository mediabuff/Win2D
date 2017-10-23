﻿// C++/WinRT v1.0.170906.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Microsoft::Graphics::Canvas {

enum class CanvasAntialiasing;
struct CanvasDevice;
struct CanvasDrawingSession;
struct ICanvasResourceCreator;

}

WINRT_EXPORT namespace winrt::Microsoft::Graphics::Canvas::Brushes {

struct ICanvasBrush;

}

WINRT_EXPORT namespace winrt::Windows::Foundation {

struct Uri;

}

WINRT_EXPORT namespace winrt::Windows::UI {

struct Color;

}

WINRT_EXPORT namespace winrt::Windows::UI::Text {

enum class FontStretch;
enum class FontStyle;
struct FontWeight;

}

WINRT_EXPORT namespace winrt::Microsoft::Graphics::Canvas::Text {

enum class CanvasClusterProperties : uint32_t
{
    None = 0x0,
    CanWrapLineAfter = 0x1,
    Whitespace = 0x2,
    Newline = 0x4,
    SoftHyphen = 0x8,
    RightToLeft = 0x10,
};

enum class CanvasDrawTextOptions : uint32_t
{
    Default = 0x0,
    NoPixelSnap = 0x1,
    Clip = 0x2,
    EnableColorFont = 0x4,
};

enum class CanvasFontFileFormatType : int32_t
{
    Cff = 0,
    TrueType = 1,
    TrueTypeCollection = 2,
    Type1 = 3,
    Vector = 4,
    Bitmap = 5,
    Unknown = 6,
    RawCff = 7,
};

enum class CanvasFontInformation : int32_t
{
    None = 0,
    CopyrightNotice = 1,
    VersionStrings = 2,
    Trademark = 3,
    Manufacturer = 4,
    Designer = 5,
    DesignerUrl = 6,
    Description = 7,
    FontVendorUrl = 8,
    LicenseDescription = 9,
    LicenseInfoUrl = 10,
    Win32FamilyNames = 11,
    Win32SubfamilyNames = 12,
    PreferredFamilyNames = 13,
    PreferredSubfamilyNames = 14,
    SampleText = 15,
    FullName = 16,
    PostscriptName = 17,
    PostscriptCidName = 18,
    WwsFamilyName = 19,
    DesignScriptLanguageTag = 20,
    SupportedScriptLanguageTag = 21,
};

enum class CanvasFontPropertyIdentifier : int32_t
{
    None = 0,
    FamilyName = 1,
    PreferredFamilyName = 2,
    FaceName = 3,
    FullName = 4,
    Win32FamilyName = 5,
    PostscriptName = 6,
    DesignScriptLanguageTag = 7,
    SupportedScriptLanguageTag = 8,
    SemanticTag = 9,
    Weight = 10,
    Stretch = 11,
    Style = 12,
    Total = 13,
};

enum class CanvasFontSimulations : uint32_t
{
    None = 0x0,
    Bold = 0x1,
    Oblique = 0x2,
};

enum class CanvasGlyphJustification : int32_t
{
    None = 0,
    ArabicBlank = 1,
    Character = 2,
    Blank = 4,
    ArabicNormal = 7,
    ArabicKashida = 8,
    ArabicAlef = 9,
    ArabicHa = 10,
    ArabicRa = 11,
    ArabicBa = 12,
    ArabicBara = 13,
    ArabicSeen = 14,
    ArabicSeenM = 15,
};

enum class CanvasGlyphOrientation : int32_t
{
    Upright = 0,
    Clockwise90Degrees = 1,
    Clockwise180Degrees = 2,
    Clockwise270Degrees = 3,
};

enum class CanvasHorizontalAlignment : int32_t
{
    Left = 0,
    Right = 1,
    Center = 2,
    Justified = 3,
};

enum class CanvasLineBreakCondition : int32_t
{
    Neutral = 0,
    CanBreak = 1,
    CannotBreak = 2,
    MustBreak = 3,
};

enum class CanvasLineSpacingMode : int32_t
{
    Default = 0,
    Uniform = 1,
    Proportional = 2,
};

enum class CanvasNumberSubstitutionMethod : int32_t
{
    FromCulture = 0,
    Contextual = 1,
    Disabled = 2,
    National = 3,
    Traditional = 4,
};

enum class CanvasOpticalAlignment : int32_t
{
    Default = 0,
    NoSideBearings = 1,
};

enum class CanvasScriptShape : int32_t
{
    Default = 0,
    NoVisual = 1,
};

enum class CanvasTextAntialiasing : int32_t
{
    Auto = 0,
    ClearType = 1,
    Grayscale = 2,
    Aliased = 3,
};

enum class CanvasTextDirection : int32_t
{
    LeftToRightThenTopToBottom = 0,
    RightToLeftThenTopToBottom = 1,
    LeftToRightThenBottomToTop = 2,
    RightToLeftThenBottomToTop = 3,
    TopToBottomThenLeftToRight = 4,
    BottomToTopThenLeftToRight = 5,
    TopToBottomThenRightToLeft = 6,
    BottomToTopThenRightToLeft = 7,
};

enum class CanvasTextGridFit : int32_t
{
    Default = 0,
    Disable = 1,
    Enable = 2,
};

enum class CanvasTextMeasuringMode : int32_t
{
    Natural = 0,
    GdiClassic = 1,
    GdiNatural = 2,
};

enum class CanvasTextRenderingMode : int32_t
{
    Default = 0,
    Aliased = 1,
    GdiClassic = 2,
    GdiNatural = 3,
    Natural = 4,
    NaturalSymmetric = 5,
    Outline = 6,
    NaturalSymmetricDownsampled = 7,
};

enum class CanvasTextTrimmingGranularity : int32_t
{
    None = 0,
    Character = 1,
    Word = 2,
};

enum class CanvasTrimmingSign : int32_t
{
    None = 0,
    Ellipsis = 1,
};

enum class CanvasTypographyFeatureName : int32_t
{
    None = 0,
    Default = 1953261156,
    VerticalWriting = 1953654134,
    VerticalAlternatesAndRotation = 846492278,
    AlternativeFractions = 1668441697,
    PetiteCapitalsFromCapitals = 1668297315,
    SmallCapitalsFromCapitals = 1668493923,
    ContextualAlternates = 1953259875,
    CaseSensitiveForms = 1702060387,
    GlyphCompositionDecomposition = 1886217059,
    ContextualLigatures = 1734962275,
    CapitalSpacing = 1886613603,
    ContextualSwash = 1752658787,
    CursivePositioning = 1936880995,
    DiscretionaryLigatures = 1734962276,
    ExpertForms = 1953527909,
    Fractions = 1667330662,
    FullWidth = 1684633446,
    HalfForms = 1718378856,
    HalantForms = 1852596584,
    AlternateHalfWidth = 1953259880,
    HistoricalForms = 1953720680,
    HorizontalKanaAlternates = 1634626408,
    HistoricalLigatures = 1734962280,
    HalfWidth = 1684633448,
    HojoKanjiForms = 1869246312,
    Jis04Forms = 875589738,
    Jis78Forms = 943157354,
    Jis83Forms = 859336810,
    Jis90Forms = 809070698,
    Kerning = 1852990827,
    StandardLigatures = 1634167148,
    LiningFigures = 1836412524,
    LocalizedForms = 1818455916,
    MarkPositioning = 1802658157,
    MathematicalGreek = 1802659693,
    MarkToMarkPositioning = 1802333037,
    AlternateAnnotationForms = 1953259886,
    NlcKanjiForms = 1801677934,
    OldStyleFigures = 1836412527,
    Ordinals = 1852076655,
    ProportionalAlternateWidth = 1953259888,
    PetiteCapitals = 1885430640,
    ProportionalFigures = 1836412528,
    ProportionalWidths = 1684633456,
    QuarterWidths = 1684633457,
    RequiredLigatures = 1734962290,
    RubyNotationForms = 2036495730,
    StylisticAlternates = 1953259891,
    ScientificInferiors = 1718511987,
    SmallCapitals = 1885564275,
    SimplifiedForms = 1819307379,
    StylisticSet1 = 825258867,
    StylisticSet2 = 842036083,
    StylisticSet3 = 858813299,
    StylisticSet4 = 875590515,
    StylisticSet5 = 892367731,
    StylisticSet6 = 909144947,
    StylisticSet7 = 925922163,
    StylisticSet8 = 942699379,
    StylisticSet9 = 959476595,
    StylisticSet10 = 808547187,
    StylisticSet11 = 825324403,
    StylisticSet12 = 842101619,
    StylisticSet13 = 858878835,
    StylisticSet14 = 875656051,
    StylisticSet15 = 892433267,
    StylisticSet16 = 909210483,
    StylisticSet17 = 925987699,
    StylisticSet18 = 942764915,
    StylisticSet19 = 959542131,
    StylisticSet20 = 808612723,
    Subscript = 1935832435,
    Superscript = 1936749939,
    Swash = 1752397683,
    Titling = 1819568500,
    TraditionalNameForms = 1835101812,
    TabularFigures = 1836412532,
    TraditionalForms = 1684107892,
    ThirdWidths = 1684633460,
    Unicase = 1667853941,
    SlashedZero = 1869768058,
};

enum class CanvasVerticalAlignment : int32_t
{
    Top = 0,
    Bottom = 1,
    Center = 2,
};

enum class CanvasVerticalGlyphOrientation : int32_t
{
    Default = 0,
    Stacked = 1,
};

enum class CanvasWordWrapping : int32_t
{
    Wrap = 0,
    NoWrap = 1,
    EmergencyBreak = 2,
    WholeWord = 3,
    Character = 4,
};

struct ICanvasFontFace;
struct ICanvasFontSet;
struct ICanvasFontSetFactory;
struct ICanvasFontSetStatics;
struct ICanvasNumberSubstitution;
struct ICanvasNumberSubstitutionFactory;
struct ICanvasScaledFont;
struct ICanvasTextAnalyzer;
struct ICanvasTextAnalyzerFactory;
struct ICanvasTextAnalyzerOptions;
struct ICanvasTextFormat;
struct ICanvasTextFormatStatics;
struct ICanvasTextInlineObject;
struct ICanvasTextLayout;
struct ICanvasTextLayoutFactory;
struct ICanvasTextLayoutStatics;
struct ICanvasTextRenderer;
struct ICanvasTextRenderingParameters;
struct ICanvasTextRenderingParametersFactory;
struct ICanvasTypography;
struct CanvasFontFace;
struct CanvasFontSet;
struct CanvasNumberSubstitution;
struct CanvasScaledFont;
struct CanvasTextAnalyzer;
struct CanvasTextFormat;
struct CanvasTextLayout;
struct CanvasTextRenderingParameters;
struct CanvasTypography;
struct CanvasAnalyzedBidi;
struct CanvasAnalyzedBreakpoint;
struct CanvasAnalyzedGlyphOrientation;
struct CanvasAnalyzedScript;
struct CanvasCharacterRange;
struct CanvasClusterMetrics;
struct CanvasFontProperty;
struct CanvasGlyph;
struct CanvasGlyphMetrics;
struct CanvasGlyphShaping;
struct CanvasJustificationOpportunity;
struct CanvasLineMetrics;
struct CanvasScriptProperties;
struct CanvasTextLayoutRegion;
struct CanvasTypographyFeature;
struct CanvasUnicodeRange;

}

namespace winrt::impl {

template<> struct is_enum_flag<Microsoft::Graphics::Canvas::Text::CanvasClusterProperties> : std::true_type {};
template<> struct is_enum_flag<Microsoft::Graphics::Canvas::Text::CanvasDrawTextOptions> : std::true_type {};
template<> struct is_enum_flag<Microsoft::Graphics::Canvas::Text::CanvasFontSimulations> : std::true_type {};
template <> struct category<Microsoft::Graphics::Canvas::Text::ICanvasFontFace>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Text::ICanvasFontSet>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Text::ICanvasFontSetFactory>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Text::ICanvasFontSetStatics>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Text::ICanvasNumberSubstitution>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Text::ICanvasNumberSubstitutionFactory>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Text::ICanvasScaledFont>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Text::ICanvasTextAnalyzer>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Text::ICanvasTextAnalyzerFactory>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Text::ICanvasTextAnalyzerOptions>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Text::ICanvasTextFormat>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Text::ICanvasTextFormatStatics>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Text::ICanvasTextInlineObject>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Text::ICanvasTextLayout>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Text::ICanvasTextLayoutFactory>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Text::ICanvasTextLayoutStatics>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Text::ICanvasTextRenderer>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Text::ICanvasTextRenderingParameters>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Text::ICanvasTextRenderingParametersFactory>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Text::ICanvasTypography>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Text::CanvasFontFace>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::Text::CanvasFontSet>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::Text::CanvasNumberSubstitution>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::Text::CanvasScaledFont>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::Text::CanvasTextAnalyzer>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::Text::CanvasTextFormat>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::Text::CanvasTextLayout>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::Text::CanvasTextRenderingParameters>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::Text::CanvasTypography>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::Text::CanvasClusterProperties>{ using type = enum_category; };
template <> struct category<Microsoft::Graphics::Canvas::Text::CanvasDrawTextOptions>{ using type = enum_category; };
template <> struct category<Microsoft::Graphics::Canvas::Text::CanvasFontFileFormatType>{ using type = enum_category; };
template <> struct category<Microsoft::Graphics::Canvas::Text::CanvasFontInformation>{ using type = enum_category; };
template <> struct category<Microsoft::Graphics::Canvas::Text::CanvasFontPropertyIdentifier>{ using type = enum_category; };
template <> struct category<Microsoft::Graphics::Canvas::Text::CanvasFontSimulations>{ using type = enum_category; };
template <> struct category<Microsoft::Graphics::Canvas::Text::CanvasGlyphJustification>{ using type = enum_category; };
template <> struct category<Microsoft::Graphics::Canvas::Text::CanvasGlyphOrientation>{ using type = enum_category; };
template <> struct category<Microsoft::Graphics::Canvas::Text::CanvasHorizontalAlignment>{ using type = enum_category; };
template <> struct category<Microsoft::Graphics::Canvas::Text::CanvasLineBreakCondition>{ using type = enum_category; };
template <> struct category<Microsoft::Graphics::Canvas::Text::CanvasLineSpacingMode>{ using type = enum_category; };
template <> struct category<Microsoft::Graphics::Canvas::Text::CanvasNumberSubstitutionMethod>{ using type = enum_category; };
template <> struct category<Microsoft::Graphics::Canvas::Text::CanvasOpticalAlignment>{ using type = enum_category; };
template <> struct category<Microsoft::Graphics::Canvas::Text::CanvasScriptShape>{ using type = enum_category; };
template <> struct category<Microsoft::Graphics::Canvas::Text::CanvasTextAntialiasing>{ using type = enum_category; };
template <> struct category<Microsoft::Graphics::Canvas::Text::CanvasTextDirection>{ using type = enum_category; };
template <> struct category<Microsoft::Graphics::Canvas::Text::CanvasTextGridFit>{ using type = enum_category; };
template <> struct category<Microsoft::Graphics::Canvas::Text::CanvasTextMeasuringMode>{ using type = enum_category; };
template <> struct category<Microsoft::Graphics::Canvas::Text::CanvasTextRenderingMode>{ using type = enum_category; };
template <> struct category<Microsoft::Graphics::Canvas::Text::CanvasTextTrimmingGranularity>{ using type = enum_category; };
template <> struct category<Microsoft::Graphics::Canvas::Text::CanvasTrimmingSign>{ using type = enum_category; };
template <> struct category<Microsoft::Graphics::Canvas::Text::CanvasTypographyFeatureName>{ using type = enum_category; };
template <> struct category<Microsoft::Graphics::Canvas::Text::CanvasVerticalAlignment>{ using type = enum_category; };
template <> struct category<Microsoft::Graphics::Canvas::Text::CanvasVerticalGlyphOrientation>{ using type = enum_category; };
template <> struct category<Microsoft::Graphics::Canvas::Text::CanvasWordWrapping>{ using type = enum_category; };
template <> struct category<Microsoft::Graphics::Canvas::Text::CanvasAnalyzedBidi>{ using type = struct_category<uint32_t,uint32_t>; };
template <> struct category<Microsoft::Graphics::Canvas::Text::CanvasAnalyzedBreakpoint>{ using type = struct_category<Microsoft::Graphics::Canvas::Text::CanvasLineBreakCondition,Microsoft::Graphics::Canvas::Text::CanvasLineBreakCondition,bool,bool>; };
template <> struct category<Microsoft::Graphics::Canvas::Text::CanvasAnalyzedGlyphOrientation>{ using type = struct_category<Microsoft::Graphics::Canvas::Text::CanvasGlyphOrientation,uint32_t,bool,bool>; };
template <> struct category<Microsoft::Graphics::Canvas::Text::CanvasAnalyzedScript>{ using type = struct_category<int32_t,Microsoft::Graphics::Canvas::Text::CanvasScriptShape>; };
template <> struct category<Microsoft::Graphics::Canvas::Text::CanvasCharacterRange>{ using type = struct_category<int32_t,int32_t>; };
template <> struct category<Microsoft::Graphics::Canvas::Text::CanvasClusterMetrics>{ using type = struct_category<int32_t,float,Microsoft::Graphics::Canvas::Text::CanvasClusterProperties>; };
template <> struct category<Microsoft::Graphics::Canvas::Text::CanvasFontProperty>{ using type = struct_category<Microsoft::Graphics::Canvas::Text::CanvasFontPropertyIdentifier,hstring,hstring>; };
template <> struct category<Microsoft::Graphics::Canvas::Text::CanvasGlyph>{ using type = struct_category<int32_t,float,float,float>; };
template <> struct category<Microsoft::Graphics::Canvas::Text::CanvasGlyphMetrics>{ using type = struct_category<float,float,float,float,float,float,float,Windows::Foundation::Rect>; };
template <> struct category<Microsoft::Graphics::Canvas::Text::CanvasGlyphShaping>{ using type = struct_category<Microsoft::Graphics::Canvas::Text::CanvasGlyphJustification,bool,bool,bool>; };
template <> struct category<Microsoft::Graphics::Canvas::Text::CanvasJustificationOpportunity>{ using type = struct_category<float,float,float,uint8_t,uint8_t,bool,bool,bool,bool>; };
template <> struct category<Microsoft::Graphics::Canvas::Text::CanvasLineMetrics>{ using type = struct_category<int32_t,int32_t,int32_t,float,float,bool,float,float>; };
template <> struct category<Microsoft::Graphics::Canvas::Text::CanvasScriptProperties>{ using type = struct_category<hstring,int32_t,int32_t,hstring,bool,bool,bool,bool,bool,bool,bool>; };
template <> struct category<Microsoft::Graphics::Canvas::Text::CanvasTextLayoutRegion>{ using type = struct_category<int32_t,int32_t,Windows::Foundation::Rect>; };
template <> struct category<Microsoft::Graphics::Canvas::Text::CanvasTypographyFeature>{ using type = struct_category<Microsoft::Graphics::Canvas::Text::CanvasTypographyFeatureName,uint32_t>; };
template <> struct category<Microsoft::Graphics::Canvas::Text::CanvasUnicodeRange>{ using type = struct_category<uint32_t,uint32_t>; };
template <> struct name<Microsoft::Graphics::Canvas::Text::ICanvasFontFace>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Text.ICanvasFontFace" }; };
template <> struct name<Microsoft::Graphics::Canvas::Text::ICanvasFontSet>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Text.ICanvasFontSet" }; };
template <> struct name<Microsoft::Graphics::Canvas::Text::ICanvasFontSetFactory>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Text.ICanvasFontSetFactory" }; };
template <> struct name<Microsoft::Graphics::Canvas::Text::ICanvasFontSetStatics>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Text.ICanvasFontSetStatics" }; };
template <> struct name<Microsoft::Graphics::Canvas::Text::ICanvasNumberSubstitution>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Text.ICanvasNumberSubstitution" }; };
template <> struct name<Microsoft::Graphics::Canvas::Text::ICanvasNumberSubstitutionFactory>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Text.ICanvasNumberSubstitutionFactory" }; };
template <> struct name<Microsoft::Graphics::Canvas::Text::ICanvasScaledFont>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Text.ICanvasScaledFont" }; };
template <> struct name<Microsoft::Graphics::Canvas::Text::ICanvasTextAnalyzer>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Text.ICanvasTextAnalyzer" }; };
template <> struct name<Microsoft::Graphics::Canvas::Text::ICanvasTextAnalyzerFactory>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Text.ICanvasTextAnalyzerFactory" }; };
template <> struct name<Microsoft::Graphics::Canvas::Text::ICanvasTextAnalyzerOptions>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Text.ICanvasTextAnalyzerOptions" }; };
template <> struct name<Microsoft::Graphics::Canvas::Text::ICanvasTextFormat>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Text.ICanvasTextFormat" }; };
template <> struct name<Microsoft::Graphics::Canvas::Text::ICanvasTextFormatStatics>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Text.ICanvasTextFormatStatics" }; };
template <> struct name<Microsoft::Graphics::Canvas::Text::ICanvasTextInlineObject>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Text.ICanvasTextInlineObject" }; };
template <> struct name<Microsoft::Graphics::Canvas::Text::ICanvasTextLayout>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Text.ICanvasTextLayout" }; };
template <> struct name<Microsoft::Graphics::Canvas::Text::ICanvasTextLayoutFactory>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Text.ICanvasTextLayoutFactory" }; };
template <> struct name<Microsoft::Graphics::Canvas::Text::ICanvasTextLayoutStatics>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Text.ICanvasTextLayoutStatics" }; };
template <> struct name<Microsoft::Graphics::Canvas::Text::ICanvasTextRenderer>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Text.ICanvasTextRenderer" }; };
template <> struct name<Microsoft::Graphics::Canvas::Text::ICanvasTextRenderingParameters>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Text.ICanvasTextRenderingParameters" }; };
template <> struct name<Microsoft::Graphics::Canvas::Text::ICanvasTextRenderingParametersFactory>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Text.ICanvasTextRenderingParametersFactory" }; };
template <> struct name<Microsoft::Graphics::Canvas::Text::ICanvasTypography>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Text.ICanvasTypography" }; };
template <> struct name<Microsoft::Graphics::Canvas::Text::CanvasFontFace>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Text.CanvasFontFace" }; };
template <> struct name<Microsoft::Graphics::Canvas::Text::CanvasFontSet>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Text.CanvasFontSet" }; };
template <> struct name<Microsoft::Graphics::Canvas::Text::CanvasNumberSubstitution>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Text.CanvasNumberSubstitution" }; };
template <> struct name<Microsoft::Graphics::Canvas::Text::CanvasScaledFont>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Text.CanvasScaledFont" }; };
template <> struct name<Microsoft::Graphics::Canvas::Text::CanvasTextAnalyzer>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Text.CanvasTextAnalyzer" }; };
template <> struct name<Microsoft::Graphics::Canvas::Text::CanvasTextFormat>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Text.CanvasTextFormat" }; };
template <> struct name<Microsoft::Graphics::Canvas::Text::CanvasTextLayout>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Text.CanvasTextLayout" }; };
template <> struct name<Microsoft::Graphics::Canvas::Text::CanvasTextRenderingParameters>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Text.CanvasTextRenderingParameters" }; };
template <> struct name<Microsoft::Graphics::Canvas::Text::CanvasTypography>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Text.CanvasTypography" }; };
template <> struct name<Microsoft::Graphics::Canvas::Text::CanvasClusterProperties>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Text.CanvasClusterProperties" }; };
template <> struct name<Microsoft::Graphics::Canvas::Text::CanvasDrawTextOptions>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Text.CanvasDrawTextOptions" }; };
template <> struct name<Microsoft::Graphics::Canvas::Text::CanvasFontFileFormatType>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Text.CanvasFontFileFormatType" }; };
template <> struct name<Microsoft::Graphics::Canvas::Text::CanvasFontInformation>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Text.CanvasFontInformation" }; };
template <> struct name<Microsoft::Graphics::Canvas::Text::CanvasFontPropertyIdentifier>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Text.CanvasFontPropertyIdentifier" }; };
template <> struct name<Microsoft::Graphics::Canvas::Text::CanvasFontSimulations>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Text.CanvasFontSimulations" }; };
template <> struct name<Microsoft::Graphics::Canvas::Text::CanvasGlyphJustification>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Text.CanvasGlyphJustification" }; };
template <> struct name<Microsoft::Graphics::Canvas::Text::CanvasGlyphOrientation>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Text.CanvasGlyphOrientation" }; };
template <> struct name<Microsoft::Graphics::Canvas::Text::CanvasHorizontalAlignment>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Text.CanvasHorizontalAlignment" }; };
template <> struct name<Microsoft::Graphics::Canvas::Text::CanvasLineBreakCondition>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Text.CanvasLineBreakCondition" }; };
template <> struct name<Microsoft::Graphics::Canvas::Text::CanvasLineSpacingMode>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Text.CanvasLineSpacingMode" }; };
template <> struct name<Microsoft::Graphics::Canvas::Text::CanvasNumberSubstitutionMethod>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Text.CanvasNumberSubstitutionMethod" }; };
template <> struct name<Microsoft::Graphics::Canvas::Text::CanvasOpticalAlignment>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Text.CanvasOpticalAlignment" }; };
template <> struct name<Microsoft::Graphics::Canvas::Text::CanvasScriptShape>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Text.CanvasScriptShape" }; };
template <> struct name<Microsoft::Graphics::Canvas::Text::CanvasTextAntialiasing>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Text.CanvasTextAntialiasing" }; };
template <> struct name<Microsoft::Graphics::Canvas::Text::CanvasTextDirection>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Text.CanvasTextDirection" }; };
template <> struct name<Microsoft::Graphics::Canvas::Text::CanvasTextGridFit>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Text.CanvasTextGridFit" }; };
template <> struct name<Microsoft::Graphics::Canvas::Text::CanvasTextMeasuringMode>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Text.CanvasTextMeasuringMode" }; };
template <> struct name<Microsoft::Graphics::Canvas::Text::CanvasTextRenderingMode>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Text.CanvasTextRenderingMode" }; };
template <> struct name<Microsoft::Graphics::Canvas::Text::CanvasTextTrimmingGranularity>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Text.CanvasTextTrimmingGranularity" }; };
template <> struct name<Microsoft::Graphics::Canvas::Text::CanvasTrimmingSign>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Text.CanvasTrimmingSign" }; };
template <> struct name<Microsoft::Graphics::Canvas::Text::CanvasTypographyFeatureName>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Text.CanvasTypographyFeatureName" }; };
template <> struct name<Microsoft::Graphics::Canvas::Text::CanvasVerticalAlignment>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Text.CanvasVerticalAlignment" }; };
template <> struct name<Microsoft::Graphics::Canvas::Text::CanvasVerticalGlyphOrientation>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Text.CanvasVerticalGlyphOrientation" }; };
template <> struct name<Microsoft::Graphics::Canvas::Text::CanvasWordWrapping>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Text.CanvasWordWrapping" }; };
template <> struct name<Microsoft::Graphics::Canvas::Text::CanvasAnalyzedBidi>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Text.CanvasAnalyzedBidi" }; };
template <> struct name<Microsoft::Graphics::Canvas::Text::CanvasAnalyzedBreakpoint>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Text.CanvasAnalyzedBreakpoint" }; };
template <> struct name<Microsoft::Graphics::Canvas::Text::CanvasAnalyzedGlyphOrientation>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Text.CanvasAnalyzedGlyphOrientation" }; };
template <> struct name<Microsoft::Graphics::Canvas::Text::CanvasAnalyzedScript>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Text.CanvasAnalyzedScript" }; };
template <> struct name<Microsoft::Graphics::Canvas::Text::CanvasCharacterRange>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Text.CanvasCharacterRange" }; };
template <> struct name<Microsoft::Graphics::Canvas::Text::CanvasClusterMetrics>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Text.CanvasClusterMetrics" }; };
template <> struct name<Microsoft::Graphics::Canvas::Text::CanvasFontProperty>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Text.CanvasFontProperty" }; };
template <> struct name<Microsoft::Graphics::Canvas::Text::CanvasGlyph>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Text.CanvasGlyph" }; };
template <> struct name<Microsoft::Graphics::Canvas::Text::CanvasGlyphMetrics>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Text.CanvasGlyphMetrics" }; };
template <> struct name<Microsoft::Graphics::Canvas::Text::CanvasGlyphShaping>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Text.CanvasGlyphShaping" }; };
template <> struct name<Microsoft::Graphics::Canvas::Text::CanvasJustificationOpportunity>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Text.CanvasJustificationOpportunity" }; };
template <> struct name<Microsoft::Graphics::Canvas::Text::CanvasLineMetrics>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Text.CanvasLineMetrics" }; };
template <> struct name<Microsoft::Graphics::Canvas::Text::CanvasScriptProperties>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Text.CanvasScriptProperties" }; };
template <> struct name<Microsoft::Graphics::Canvas::Text::CanvasTextLayoutRegion>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Text.CanvasTextLayoutRegion" }; };
template <> struct name<Microsoft::Graphics::Canvas::Text::CanvasTypographyFeature>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Text.CanvasTypographyFeature" }; };
template <> struct name<Microsoft::Graphics::Canvas::Text::CanvasUnicodeRange>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Text.CanvasUnicodeRange" }; };
template <> struct guid<Microsoft::Graphics::Canvas::Text::ICanvasFontFace>{ static constexpr GUID value{ 0x5199D129,0x4EF9,0x4DEE,{ 0xB7,0x4C,0x4D,0xC9,0x10,0x20,0x1A,0x7F } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Text::ICanvasFontSet>{ static constexpr GUID value{ 0x0A5BFB92,0x1F3C,0x459F,{ 0x9D,0x7E,0xA6,0x28,0x9D,0xD0,0x93,0xC0 } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Text::ICanvasFontSetFactory>{ static constexpr GUID value{ 0x3C9C9BDA,0x70F9,0x4FF9,{ 0xAA,0xB2,0x3B,0x42,0x92,0x32,0x86,0xEE } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Text::ICanvasFontSetStatics>{ static constexpr GUID value{ 0x5F4275CE,0xBCFA,0x48C5,{ 0x9E,0x67,0xFB,0xE9,0x86,0x6D,0x49,0x24 } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Text::ICanvasNumberSubstitution>{ static constexpr GUID value{ 0xC81A67AD,0x0639,0x4F8F,{ 0x87,0x8B,0xD9,0x37,0xF8,0xA1,0x42,0x93 } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Text::ICanvasNumberSubstitutionFactory>{ static constexpr GUID value{ 0x7496A822,0xC781,0x4EB0,{ 0xAA,0xFB,0xC0,0x78,0xE7,0xFA,0x8E,0x24 } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Text::ICanvasScaledFont>{ static constexpr GUID value{ 0xBBC4F8D2,0xEB2B,0x45F1,{ 0xAC,0x2A,0xCF,0xC1,0xF5,0x98,0xBA,0xE3 } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Text::ICanvasTextAnalyzer>{ static constexpr GUID value{ 0x4298F3D1,0x645B,0x40E3,{ 0xB9,0x1B,0x81,0x98,0x6D,0x76,0x7F,0xC0 } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Text::ICanvasTextAnalyzerFactory>{ static constexpr GUID value{ 0x521E433F,0xF698,0x44C0,{ 0x8D,0x7F,0xFE,0x37,0x4F,0xE5,0x39,0xE1 } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Text::ICanvasTextAnalyzerOptions>{ static constexpr GUID value{ 0x31F2406A,0x8C5F,0x4E12,{ 0x8B,0xD6,0xCF,0xBB,0xC7,0x21,0x4D,0x02 } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Text::ICanvasTextFormat>{ static constexpr GUID value{ 0xAF61BFDC,0xEABB,0x4D38,{ 0xBA,0x1B,0xAF,0xB3,0x40,0x61,0x2D,0x33 } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Text::ICanvasTextFormatStatics>{ static constexpr GUID value{ 0x8A927515,0x33FC,0x4C92,{ 0xA6,0xAA,0x94,0xA8,0xF2,0x9C,0x14,0x0B } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Text::ICanvasTextInlineObject>{ static constexpr GUID value{ 0x7A89EE99,0xCE2A,0x47FA,{ 0x9D,0xD2,0x0A,0x68,0x25,0xF6,0x05,0x3F } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Text::ICanvasTextLayout>{ static constexpr GUID value{ 0xBAE63E54,0x48AE,0x4446,{ 0xA2,0xC7,0xB6,0xEF,0x93,0x80,0x6C,0x20 } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Text::ICanvasTextLayoutFactory>{ static constexpr GUID value{ 0x9C1F7179,0xACD0,0x4680,{ 0x93,0xD5,0x95,0xA6,0x24,0x7E,0x8F,0x6B } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Text::ICanvasTextLayoutStatics>{ static constexpr GUID value{ 0x7F2B8FFD,0x6935,0x4F60,{ 0xB4,0x09,0x63,0x94,0xA1,0x9C,0x5E,0xBC } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Text::ICanvasTextRenderer>{ static constexpr GUID value{ 0x9AAEECE5,0x8D09,0x4A64,{ 0xB3,0x22,0xAF,0x03,0x04,0x21,0xB2,0xE4 } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Text::ICanvasTextRenderingParameters>{ static constexpr GUID value{ 0xB20BF738,0xEDB9,0x4EEC,{ 0xA1,0x2F,0xB6,0xAE,0x32,0xE8,0xAC,0xE6 } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Text::ICanvasTextRenderingParametersFactory>{ static constexpr GUID value{ 0xD240AC25,0x4D23,0x4964,{ 0x9D,0x9A,0xDB,0x2F,0xC8,0xAF,0x18,0x5D } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Text::ICanvasTypography>{ static constexpr GUID value{ 0xF15BC312,0x447F,0x44ED,{ 0x8B,0xEC,0x7E,0x40,0xF4,0xA4,0xDF,0xC8 } }; };
template <> struct default_interface<Microsoft::Graphics::Canvas::Text::CanvasFontFace>{ using type = Microsoft::Graphics::Canvas::Text::ICanvasFontFace; };
template <> struct default_interface<Microsoft::Graphics::Canvas::Text::CanvasFontSet>{ using type = Microsoft::Graphics::Canvas::Text::ICanvasFontSet; };
template <> struct default_interface<Microsoft::Graphics::Canvas::Text::CanvasNumberSubstitution>{ using type = Microsoft::Graphics::Canvas::Text::ICanvasNumberSubstitution; };
template <> struct default_interface<Microsoft::Graphics::Canvas::Text::CanvasScaledFont>{ using type = Microsoft::Graphics::Canvas::Text::ICanvasScaledFont; };
template <> struct default_interface<Microsoft::Graphics::Canvas::Text::CanvasTextAnalyzer>{ using type = Microsoft::Graphics::Canvas::Text::ICanvasTextAnalyzer; };
template <> struct default_interface<Microsoft::Graphics::Canvas::Text::CanvasTextFormat>{ using type = Microsoft::Graphics::Canvas::Text::ICanvasTextFormat; };
template <> struct default_interface<Microsoft::Graphics::Canvas::Text::CanvasTextLayout>{ using type = Microsoft::Graphics::Canvas::Text::ICanvasTextLayout; };
template <> struct default_interface<Microsoft::Graphics::Canvas::Text::CanvasTextRenderingParameters>{ using type = Microsoft::Graphics::Canvas::Text::ICanvasTextRenderingParameters; };
template <> struct default_interface<Microsoft::Graphics::Canvas::Text::CanvasTypography>{ using type = Microsoft::Graphics::Canvas::Text::ICanvasTypography; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Text_ICanvasFontFace
{
    Microsoft::Graphics::Canvas::Text::CanvasTextRenderingMode GetRecommendedRenderingMode(float fontSize, float dpi, Microsoft::Graphics::Canvas::Text::CanvasTextMeasuringMode const& measuringMode, Microsoft::Graphics::Canvas::Text::CanvasTextRenderingParameters const& renderingParameters) const;
    Microsoft::Graphics::Canvas::Text::CanvasTextRenderingMode GetRecommendedRenderingMode(float fontSize, float dpi, Microsoft::Graphics::Canvas::Text::CanvasTextMeasuringMode const& measuringMode, Microsoft::Graphics::Canvas::Text::CanvasTextRenderingParameters const& renderingParameters, Windows::Foundation::Numerics::float3x2 const& transform, bool isSideways, Microsoft::Graphics::Canvas::CanvasAntialiasing const& outlineThreshold) const;
    Microsoft::Graphics::Canvas::Text::CanvasTextGridFit GetRecommendedGridFit(float fontSize, float dpi, Microsoft::Graphics::Canvas::Text::CanvasTextMeasuringMode const& measuringMode, Microsoft::Graphics::Canvas::Text::CanvasTextRenderingParameters const& renderingParameters, Windows::Foundation::Numerics::float3x2 const& transform, bool isSideways, Microsoft::Graphics::Canvas::CanvasAntialiasing const& outlineThreshold) const;
    Windows::Foundation::Rect GlyphBox() const;
    Windows::Foundation::Numerics::float2 SubscriptPosition() const;
    Windows::Foundation::Size SubscriptSize() const;
    Windows::Foundation::Numerics::float2 SuperscriptPosition() const;
    Windows::Foundation::Size SuperscriptSize() const;
    bool HasTypographicMetrics() const;
    float Ascent() const;
    float Descent() const;
    float LineGap() const;
    float CapHeight() const;
    float LowercaseLetterHeight() const;
    float UnderlinePosition() const;
    float UnderlineThickness() const;
    float StrikethroughPosition() const;
    float StrikethroughThickness() const;
    float CaretSlopeRise() const;
    float CaretSlopeRun() const;
    float CaretOffset() const;
    com_array<Microsoft::Graphics::Canvas::Text::CanvasUnicodeRange> UnicodeRanges() const;
    bool IsMonospaced() const;
    com_array<int32_t> GetVerticalGlyphVariants(array_view<int32_t const> inputElements) const;
    bool HasVerticalGlyphVariants() const;
    Microsoft::Graphics::Canvas::Text::CanvasFontFileFormatType FileFormatType() const;
    Microsoft::Graphics::Canvas::Text::CanvasFontSimulations Simulations() const;
    bool IsSymbolFont() const;
    uint32_t GlyphCount() const;
    com_array<int32_t> GetGlyphIndices(array_view<uint32_t const> inputElements) const;
    com_array<Microsoft::Graphics::Canvas::Text::CanvasGlyphMetrics> GetGlyphMetrics(array_view<int32_t const> inputElements, bool isSideways) const;
    com_array<Microsoft::Graphics::Canvas::Text::CanvasGlyphMetrics> GetGdiCompatibleGlyphMetrics(float fontSize, float dpi, Windows::Foundation::Numerics::float3x2 const& transform, bool useGdiNatural, array_view<int32_t const> inputElements, bool isSideways) const;
    Windows::UI::Text::FontWeight Weight() const;
    Windows::UI::Text::FontStretch Stretch() const;
    Windows::UI::Text::FontStyle Style() const;
    Windows::Foundation::Collections::IMapView<hstring, hstring> FamilyNames() const;
    Windows::Foundation::Collections::IMapView<hstring, hstring> FaceNames() const;
    Windows::Foundation::Collections::IMapView<hstring, hstring> GetInformationalStrings(Microsoft::Graphics::Canvas::Text::CanvasFontInformation const& fontInformation) const;
    bool HasCharacter(uint32_t unicodeValue) const;
    Windows::Foundation::Rect GetGlyphRunBounds(Microsoft::Graphics::Canvas::CanvasDrawingSession const& drawingSession, Windows::Foundation::Numerics::float2 const& point, float fontSize, array_view<Microsoft::Graphics::Canvas::Text::CanvasGlyph const> glyphs, bool isSideways, uint32_t bidiLevel) const;
    Windows::Foundation::Rect GetGlyphRunBounds(Microsoft::Graphics::Canvas::CanvasDrawingSession const& drawingSession, Windows::Foundation::Numerics::float2 const& point, float fontSize, array_view<Microsoft::Graphics::Canvas::Text::CanvasGlyph const> glyphs, bool isSideways, uint32_t bidiLevel, Microsoft::Graphics::Canvas::Text::CanvasTextMeasuringMode const& measuringMode) const;
    com_array<uint8_t> Panose() const;
    com_array<Microsoft::Graphics::Canvas::Text::CanvasTypographyFeatureName> GetSupportedTypographicFeatureNames(Microsoft::Graphics::Canvas::Text::CanvasAnalyzedScript const& script) const;
    com_array<Microsoft::Graphics::Canvas::Text::CanvasTypographyFeatureName> GetSupportedTypographicFeatureNames(Microsoft::Graphics::Canvas::Text::CanvasAnalyzedScript const& script, param::hstring const& locale) const;
    com_array<bool> GetTypographicFeatureGlyphSupport(Microsoft::Graphics::Canvas::Text::CanvasAnalyzedScript const& script, Microsoft::Graphics::Canvas::Text::CanvasTypographyFeatureName const& typographicFeatureName, array_view<Microsoft::Graphics::Canvas::Text::CanvasGlyph const> glyphsElements) const;
    com_array<bool> GetTypographicFeatureGlyphSupport(Microsoft::Graphics::Canvas::Text::CanvasAnalyzedScript const& script, Microsoft::Graphics::Canvas::Text::CanvasTypographyFeatureName const& typographicFeatureName, array_view<Microsoft::Graphics::Canvas::Text::CanvasGlyph const> glyphsElements, param::hstring const& locale) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Text::ICanvasFontFace> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Text_ICanvasFontFace<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Text_ICanvasFontSet
{
    Windows::Foundation::Collections::IVectorView<Microsoft::Graphics::Canvas::Text::CanvasFontFace> Fonts() const;
    bool TryFindFontFace(Microsoft::Graphics::Canvas::Text::CanvasFontFace const& fontFace, int32_t& index) const;
    Microsoft::Graphics::Canvas::Text::CanvasFontSet GetMatchingFonts(array_view<Microsoft::Graphics::Canvas::Text::CanvasFontProperty const> propertyElements) const;
    Microsoft::Graphics::Canvas::Text::CanvasFontSet GetMatchingFonts(param::hstring const& familyName, Windows::UI::Text::FontWeight const& weight, Windows::UI::Text::FontStretch const& stretch, Windows::UI::Text::FontStyle const& style) const;
    uint32_t CountFontsMatchingProperty(Microsoft::Graphics::Canvas::Text::CanvasFontProperty const& property) const;
    Windows::Foundation::Collections::IMapView<hstring, hstring> GetPropertyValues(uint32_t fontIndex, Microsoft::Graphics::Canvas::Text::CanvasFontPropertyIdentifier const& propertyIdentifier) const;
    com_array<Microsoft::Graphics::Canvas::Text::CanvasFontProperty> GetPropertyValues(Microsoft::Graphics::Canvas::Text::CanvasFontPropertyIdentifier const& propertyIdentifier, param::hstring const& preferredLocaleNames) const;
    com_array<Microsoft::Graphics::Canvas::Text::CanvasFontProperty> GetPropertyValues(Microsoft::Graphics::Canvas::Text::CanvasFontPropertyIdentifier const& propertyIdentifier) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Text::ICanvasFontSet> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Text_ICanvasFontSet<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Text_ICanvasFontSetFactory
{
    Microsoft::Graphics::Canvas::Text::CanvasFontSet Create(Windows::Foundation::Uri const& uri) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Text::ICanvasFontSetFactory> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Text_ICanvasFontSetFactory<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Text_ICanvasFontSetStatics
{
    Microsoft::Graphics::Canvas::Text::CanvasFontSet GetSystemFontSet() const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Text::ICanvasFontSetStatics> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Text_ICanvasFontSetStatics<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Text_ICanvasNumberSubstitution
{
};
template <> struct consume<Microsoft::Graphics::Canvas::Text::ICanvasNumberSubstitution> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Text_ICanvasNumberSubstitution<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Text_ICanvasNumberSubstitutionFactory
{
    Microsoft::Graphics::Canvas::Text::CanvasNumberSubstitution Create(Microsoft::Graphics::Canvas::Text::CanvasNumberSubstitutionMethod const& method) const;
    Microsoft::Graphics::Canvas::Text::CanvasNumberSubstitution CreateWithLocaleAndIgnoreOverrides(Microsoft::Graphics::Canvas::Text::CanvasNumberSubstitutionMethod const& method, param::hstring const& localeName, bool ignoreEnvironmentOverrides) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Text::ICanvasNumberSubstitutionFactory> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Text_ICanvasNumberSubstitutionFactory<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Text_ICanvasScaledFont
{
    Microsoft::Graphics::Canvas::Text::CanvasFontFace FontFace() const;
    float ScaleFactor() const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Text::ICanvasScaledFont> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Text_ICanvasScaledFont<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Text_ICanvasTextAnalyzer
{
    Windows::Foundation::Collections::IVectorView<Windows::Foundation::Collections::IKeyValuePair<Microsoft::Graphics::Canvas::Text::CanvasCharacterRange, Microsoft::Graphics::Canvas::Text::CanvasScaledFont>> GetFonts(Microsoft::Graphics::Canvas::Text::CanvasTextFormat const& textFormat) const;
    Windows::Foundation::Collections::IVectorView<Windows::Foundation::Collections::IKeyValuePair<Microsoft::Graphics::Canvas::Text::CanvasCharacterRange, Microsoft::Graphics::Canvas::Text::CanvasScaledFont>> GetFonts(Microsoft::Graphics::Canvas::Text::CanvasTextFormat const& textFormat, Microsoft::Graphics::Canvas::Text::CanvasFontSet const& fontSet) const;
    Windows::Foundation::Collections::IVectorView<Windows::Foundation::Collections::IKeyValuePair<Microsoft::Graphics::Canvas::Text::CanvasCharacterRange, Microsoft::Graphics::Canvas::Text::CanvasAnalyzedBidi>> GetBidi() const;
    Windows::Foundation::Collections::IVectorView<Windows::Foundation::Collections::IKeyValuePair<Microsoft::Graphics::Canvas::Text::CanvasCharacterRange, Microsoft::Graphics::Canvas::Text::CanvasAnalyzedBidi>> GetBidi(param::hstring const& locale) const;
    com_array<Microsoft::Graphics::Canvas::Text::CanvasAnalyzedBreakpoint> GetBreakpoints() const;
    com_array<Microsoft::Graphics::Canvas::Text::CanvasAnalyzedBreakpoint> GetBreakpoints(param::hstring const& locale) const;
    Windows::Foundation::Collections::IVectorView<Windows::Foundation::Collections::IKeyValuePair<Microsoft::Graphics::Canvas::Text::CanvasCharacterRange, Microsoft::Graphics::Canvas::Text::CanvasNumberSubstitution>> GetNumberSubstitutions() const;
    Windows::Foundation::Collections::IVectorView<Windows::Foundation::Collections::IKeyValuePair<Microsoft::Graphics::Canvas::Text::CanvasCharacterRange, Microsoft::Graphics::Canvas::Text::CanvasAnalyzedScript>> GetScript() const;
    Windows::Foundation::Collections::IVectorView<Windows::Foundation::Collections::IKeyValuePair<Microsoft::Graphics::Canvas::Text::CanvasCharacterRange, Microsoft::Graphics::Canvas::Text::CanvasAnalyzedScript>> GetScript(param::hstring const& locale) const;
    Windows::Foundation::Collections::IVectorView<Windows::Foundation::Collections::IKeyValuePair<Microsoft::Graphics::Canvas::Text::CanvasCharacterRange, Microsoft::Graphics::Canvas::Text::CanvasAnalyzedGlyphOrientation>> GetGlyphOrientations() const;
    Windows::Foundation::Collections::IVectorView<Windows::Foundation::Collections::IKeyValuePair<Microsoft::Graphics::Canvas::Text::CanvasCharacterRange, Microsoft::Graphics::Canvas::Text::CanvasAnalyzedGlyphOrientation>> GetGlyphOrientations(param::hstring const& locale) const;
    Microsoft::Graphics::Canvas::Text::CanvasScriptProperties GetScriptProperties(Microsoft::Graphics::Canvas::Text::CanvasAnalyzedScript const& analyzedScript) const;
    com_array<Microsoft::Graphics::Canvas::Text::CanvasGlyph> GetGlyphs(Microsoft::Graphics::Canvas::Text::CanvasCharacterRange const& characterRange, Microsoft::Graphics::Canvas::Text::CanvasFontFace const& fontFace, float fontSize, bool isSideways, bool isRightToLeft, Microsoft::Graphics::Canvas::Text::CanvasAnalyzedScript const& script) const;
    com_array<Microsoft::Graphics::Canvas::Text::CanvasGlyph> GetGlyphs(Microsoft::Graphics::Canvas::Text::CanvasCharacterRange const& characterRange, Microsoft::Graphics::Canvas::Text::CanvasFontFace const& fontFace, float fontSize, bool isSideways, bool isRightToLeft, Microsoft::Graphics::Canvas::Text::CanvasAnalyzedScript const& script, param::hstring const& locale, Microsoft::Graphics::Canvas::Text::CanvasNumberSubstitution const& numberSubstitution, param::vector_view<Windows::Foundation::Collections::IKeyValuePair<Microsoft::Graphics::Canvas::Text::CanvasCharacterRange, Microsoft::Graphics::Canvas::Text::CanvasTypography>> const& typographyRanges, com_array<int32_t>& clusterMapIndicesElements, com_array<bool>& isShapedAloneGlyphsElements, com_array<Microsoft::Graphics::Canvas::Text::CanvasGlyphShaping>& glyphShapingResultsElements) const;
    com_array<Microsoft::Graphics::Canvas::Text::CanvasJustificationOpportunity> GetJustificationOpportunities(Microsoft::Graphics::Canvas::Text::CanvasCharacterRange const& characterRange, Microsoft::Graphics::Canvas::Text::CanvasFontFace const& fontFace, float fontSize, Microsoft::Graphics::Canvas::Text::CanvasAnalyzedScript const& script, array_view<int32_t const> clusterMapIndicesElements, array_view<Microsoft::Graphics::Canvas::Text::CanvasGlyphShaping const> glyphShapingResultsElements) const;
    com_array<Microsoft::Graphics::Canvas::Text::CanvasGlyph> ApplyJustificationOpportunities(float lineWidth, array_view<Microsoft::Graphics::Canvas::Text::CanvasJustificationOpportunity const> justificationOpportunitiesElements, array_view<Microsoft::Graphics::Canvas::Text::CanvasGlyph const> sourceGlyphsElements) const;
    com_array<Microsoft::Graphics::Canvas::Text::CanvasGlyph> AddGlyphsAfterJustification(Microsoft::Graphics::Canvas::Text::CanvasFontFace const& fontFace, float fontSize, Microsoft::Graphics::Canvas::Text::CanvasAnalyzedScript const& script, array_view<int32_t const> clusterMapIndicesElements, array_view<Microsoft::Graphics::Canvas::Text::CanvasGlyph const> originalGlyphsElements, array_view<Microsoft::Graphics::Canvas::Text::CanvasGlyph const> justifiedGlyphsElements, array_view<Microsoft::Graphics::Canvas::Text::CanvasGlyphShaping const> glyphShapingResultsElements) const;
    com_array<Microsoft::Graphics::Canvas::Text::CanvasGlyph> AddGlyphsAfterJustification(Microsoft::Graphics::Canvas::Text::CanvasFontFace const& fontFace, float fontSize, Microsoft::Graphics::Canvas::Text::CanvasAnalyzedScript const& script, array_view<int32_t const> clusterMapIndicesElements, array_view<Microsoft::Graphics::Canvas::Text::CanvasGlyph const> originalGlyphsElements, array_view<Microsoft::Graphics::Canvas::Text::CanvasGlyph const> justifiedGlyphsElements, array_view<Microsoft::Graphics::Canvas::Text::CanvasGlyphShaping const> glyphShapingResultsElements, com_array<int32_t>& outputClusterMapIndicesElements) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Text::ICanvasTextAnalyzer> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Text_ICanvasTextAnalyzer<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Text_ICanvasTextAnalyzerFactory
{
    Microsoft::Graphics::Canvas::Text::CanvasTextAnalyzer Create(param::hstring const& text, Microsoft::Graphics::Canvas::Text::CanvasTextDirection const& textDirection) const;
    Microsoft::Graphics::Canvas::Text::CanvasTextAnalyzer CreateWithNumberSubstitutionAndVerticalGlyphOrientationAndBidiLevel(param::hstring const& text, Microsoft::Graphics::Canvas::Text::CanvasTextDirection const& textDirection, Microsoft::Graphics::Canvas::Text::CanvasNumberSubstitution const& numberSubstitution, Microsoft::Graphics::Canvas::Text::CanvasVerticalGlyphOrientation const& verticalGlyphOrientation, uint32_t bidiLevel) const;
    Microsoft::Graphics::Canvas::Text::CanvasTextAnalyzer CreateWithOptions(param::hstring const& text, Microsoft::Graphics::Canvas::Text::CanvasTextDirection const& textDirection, Microsoft::Graphics::Canvas::Text::ICanvasTextAnalyzerOptions const& options) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Text::ICanvasTextAnalyzerFactory> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Text_ICanvasTextAnalyzerFactory<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Text_ICanvasTextAnalyzerOptions
{
    hstring GetLocaleName(int32_t characterIndex, int32_t& characterCount) const;
    Microsoft::Graphics::Canvas::Text::CanvasNumberSubstitution GetNumberSubstitution(int32_t characterIndex, int32_t& characterCount) const;
    Microsoft::Graphics::Canvas::Text::CanvasVerticalGlyphOrientation GetVerticalGlyphOrientation(int32_t characterIndex, int32_t& characterCount) const;
    uint32_t GetBidiLevel(int32_t characterIndex, int32_t& characterCount) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Text::ICanvasTextAnalyzerOptions> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Text_ICanvasTextAnalyzerOptions<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Text_ICanvasTextFormat
{
    Microsoft::Graphics::Canvas::Text::CanvasTextDirection Direction() const;
    void Direction(Microsoft::Graphics::Canvas::Text::CanvasTextDirection const& value) const;
    hstring FontFamily() const;
    void FontFamily(param::hstring const& value) const;
    float FontSize() const;
    void FontSize(float value) const;
    Windows::UI::Text::FontStretch FontStretch() const;
    void FontStretch(Windows::UI::Text::FontStretch const& value) const;
    Windows::UI::Text::FontStyle FontStyle() const;
    void FontStyle(Windows::UI::Text::FontStyle const& value) const;
    Windows::UI::Text::FontWeight FontWeight() const;
    void FontWeight(Windows::UI::Text::FontWeight const& value) const;
    float IncrementalTabStop() const;
    void IncrementalTabStop(float value) const;
    float LineSpacing() const;
    void LineSpacing(float value) const;
    float LineSpacingBaseline() const;
    void LineSpacingBaseline(float value) const;
    hstring LocaleName() const;
    void LocaleName(param::hstring const& value) const;
    Microsoft::Graphics::Canvas::Text::CanvasVerticalAlignment VerticalAlignment() const;
    void VerticalAlignment(Microsoft::Graphics::Canvas::Text::CanvasVerticalAlignment const& value) const;
    Microsoft::Graphics::Canvas::Text::CanvasHorizontalAlignment HorizontalAlignment() const;
    void HorizontalAlignment(Microsoft::Graphics::Canvas::Text::CanvasHorizontalAlignment const& value) const;
    Microsoft::Graphics::Canvas::Text::CanvasTextTrimmingGranularity TrimmingGranularity() const;
    void TrimmingGranularity(Microsoft::Graphics::Canvas::Text::CanvasTextTrimmingGranularity const& value) const;
    hstring TrimmingDelimiter() const;
    void TrimmingDelimiter(param::hstring const& value) const;
    int32_t TrimmingDelimiterCount() const;
    void TrimmingDelimiterCount(int32_t value) const;
    Microsoft::Graphics::Canvas::Text::CanvasWordWrapping WordWrapping() const;
    void WordWrapping(Microsoft::Graphics::Canvas::Text::CanvasWordWrapping const& value) const;
    Microsoft::Graphics::Canvas::Text::CanvasDrawTextOptions Options() const;
    void Options(Microsoft::Graphics::Canvas::Text::CanvasDrawTextOptions const& value) const;
    Microsoft::Graphics::Canvas::Text::CanvasVerticalGlyphOrientation VerticalGlyphOrientation() const;
    void VerticalGlyphOrientation(Microsoft::Graphics::Canvas::Text::CanvasVerticalGlyphOrientation const& value) const;
    Microsoft::Graphics::Canvas::Text::CanvasOpticalAlignment OpticalAlignment() const;
    void OpticalAlignment(Microsoft::Graphics::Canvas::Text::CanvasOpticalAlignment const& value) const;
    bool LastLineWrapping() const;
    void LastLineWrapping(bool value) const;
    Microsoft::Graphics::Canvas::Text::CanvasLineSpacingMode LineSpacingMode() const;
    void LineSpacingMode(Microsoft::Graphics::Canvas::Text::CanvasLineSpacingMode const& value) const;
    Microsoft::Graphics::Canvas::Text::CanvasTrimmingSign TrimmingSign() const;
    void TrimmingSign(Microsoft::Graphics::Canvas::Text::CanvasTrimmingSign const& value) const;
    Microsoft::Graphics::Canvas::Text::ICanvasTextInlineObject CustomTrimmingSign() const;
    void CustomTrimmingSign(Microsoft::Graphics::Canvas::Text::ICanvasTextInlineObject const& value) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Text::ICanvasTextFormat> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Text_ICanvasTextFormat<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Text_ICanvasTextFormatStatics
{
    com_array<hstring> GetSystemFontFamilies() const;
    com_array<hstring> GetSystemFontFamilies(param::vector_view<hstring> const& localeList) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Text::ICanvasTextFormatStatics> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Text_ICanvasTextFormatStatics<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Text_ICanvasTextInlineObject
{
    void Draw(Microsoft::Graphics::Canvas::Text::ICanvasTextRenderer const& textRenderer, Windows::Foundation::Numerics::float2 const& point, bool isSideways, bool isRightToLeft, Windows::Foundation::IInspectable const& brush) const;
    Windows::Foundation::Size Size() const;
    float Baseline() const;
    bool SupportsSideways() const;
    Windows::Foundation::Rect DrawBounds() const;
    Microsoft::Graphics::Canvas::Text::CanvasLineBreakCondition BreakBefore() const;
    Microsoft::Graphics::Canvas::Text::CanvasLineBreakCondition BreakAfter() const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Text::ICanvasTextInlineObject> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Text_ICanvasTextInlineObject<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout
{
    com_array<int32_t> GetFormatChangeIndices() const;
    Microsoft::Graphics::Canvas::Text::CanvasTextDirection Direction() const;
    void Direction(Microsoft::Graphics::Canvas::Text::CanvasTextDirection const& value) const;
    hstring DefaultFontFamily() const;
    float DefaultFontSize() const;
    Windows::UI::Text::FontStretch DefaultFontStretch() const;
    Windows::UI::Text::FontStyle DefaultFontStyle() const;
    Windows::UI::Text::FontWeight DefaultFontWeight() const;
    float IncrementalTabStop() const;
    void IncrementalTabStop(float value) const;
    float LineSpacing() const;
    void LineSpacing(float value) const;
    float LineSpacingBaseline() const;
    void LineSpacingBaseline(float value) const;
    hstring DefaultLocaleName() const;
    Microsoft::Graphics::Canvas::Text::CanvasVerticalAlignment VerticalAlignment() const;
    void VerticalAlignment(Microsoft::Graphics::Canvas::Text::CanvasVerticalAlignment const& value) const;
    Microsoft::Graphics::Canvas::Text::CanvasHorizontalAlignment HorizontalAlignment() const;
    void HorizontalAlignment(Microsoft::Graphics::Canvas::Text::CanvasHorizontalAlignment const& value) const;
    Microsoft::Graphics::Canvas::Text::CanvasTextTrimmingGranularity TrimmingGranularity() const;
    void TrimmingGranularity(Microsoft::Graphics::Canvas::Text::CanvasTextTrimmingGranularity const& value) const;
    hstring TrimmingDelimiter() const;
    void TrimmingDelimiter(param::hstring const& value) const;
    int32_t TrimmingDelimiterCount() const;
    void TrimmingDelimiterCount(int32_t value) const;
    Microsoft::Graphics::Canvas::Text::CanvasWordWrapping WordWrapping() const;
    void WordWrapping(Microsoft::Graphics::Canvas::Text::CanvasWordWrapping const& value) const;
    Microsoft::Graphics::Canvas::Text::CanvasDrawTextOptions Options() const;
    void Options(Microsoft::Graphics::Canvas::Text::CanvasDrawTextOptions const& value) const;
    Microsoft::Graphics::Canvas::Text::CanvasLineSpacingMode LineSpacingMode() const;
    void LineSpacingMode(Microsoft::Graphics::Canvas::Text::CanvasLineSpacingMode const& value) const;
    Microsoft::Graphics::Canvas::Text::CanvasTrimmingSign TrimmingSign() const;
    void TrimmingSign(Microsoft::Graphics::Canvas::Text::CanvasTrimmingSign const& value) const;
    Microsoft::Graphics::Canvas::Text::ICanvasTextInlineObject CustomTrimmingSign() const;
    void CustomTrimmingSign(Microsoft::Graphics::Canvas::Text::ICanvasTextInlineObject const& value) const;
    Windows::Foundation::Size RequestedSize() const;
    void RequestedSize(Windows::Foundation::Size const& value) const;
    float GetMinimumLineLength() const;
    Microsoft::Graphics::Canvas::Brushes::ICanvasBrush GetBrush(int32_t characterIndex) const;
    Windows::Foundation::IInspectable GetCustomBrush(int32_t characterIndex) const;
    hstring GetFontFamily(int32_t characterIndex) const;
    float GetFontSize(int32_t characterIndex) const;
    Windows::UI::Text::FontStretch GetFontStretch(int32_t characterIndex) const;
    Windows::UI::Text::FontStyle GetFontStyle(int32_t characterIndex) const;
    Windows::UI::Text::FontWeight GetFontWeight(int32_t characterIndex) const;
    hstring GetLocaleName(int32_t characterIndex) const;
    bool GetStrikethrough(int32_t characterIndex) const;
    bool GetUnderline(int32_t characterIndex) const;
    Microsoft::Graphics::Canvas::Text::ICanvasTextInlineObject GetInlineObject(int32_t characterIndex) const;
    void SetColor(int32_t characterIndex, int32_t characterCount, Windows::UI::Color const& color) const;
    void SetBrush(int32_t characterIndex, int32_t characterCount, Microsoft::Graphics::Canvas::Brushes::ICanvasBrush const& brush) const;
    void SetCustomBrush(int32_t characterIndex, int32_t characterCount, Windows::Foundation::IInspectable const& brush) const;
    void SetFontFamily(int32_t characterIndex, int32_t characterCount, param::hstring const& fontFamily) const;
    void SetFontSize(int32_t characterIndex, int32_t characterCount, float fontSize) const;
    void SetFontStretch(int32_t characterIndex, int32_t characterCount, Windows::UI::Text::FontStretch const& fontStretch) const;
    void SetFontStyle(int32_t characterIndex, int32_t characterCount, Windows::UI::Text::FontStyle const& fontStyle) const;
    void SetFontWeight(int32_t characterIndex, int32_t characterCount, Windows::UI::Text::FontWeight const& fontWeight) const;
    void SetLocaleName(int32_t characterIndex, int32_t characterCount, param::hstring const& name) const;
    void SetStrikethrough(int32_t characterIndex, int32_t characterCount, bool hasStrikethrough) const;
    void SetUnderline(int32_t characterIndex, int32_t characterCount, bool hasUnderline) const;
    void SetInlineObject(int32_t characterIndex, int32_t characterCount, Microsoft::Graphics::Canvas::Text::ICanvasTextInlineObject const& inlineObject) const;
    void DrawToTextRenderer(Microsoft::Graphics::Canvas::Text::ICanvasTextRenderer const& textRenderer, Windows::Foundation::Numerics::float2 const& position) const;
    void DrawToTextRenderer(Microsoft::Graphics::Canvas::Text::ICanvasTextRenderer const& textRenderer, float x, float y) const;
    com_array<Microsoft::Graphics::Canvas::Text::CanvasLineMetrics> LineMetrics() const;
    com_array<Microsoft::Graphics::Canvas::Text::CanvasClusterMetrics> ClusterMetrics() const;
    void SetTypography(int32_t characterIndex, int32_t characterCount, Microsoft::Graphics::Canvas::Text::CanvasTypography const& typography) const;
    Microsoft::Graphics::Canvas::Text::CanvasTypography GetTypography(int32_t characterIndex) const;
    Windows::Foundation::Rect LayoutBounds() const;
    Windows::Foundation::Rect LayoutBoundsIncludingTrailingWhitespace() const;
    int32_t LineCount() const;
    int32_t MaximumBidiReorderingDepth() const;
    Windows::Foundation::Rect DrawBounds() const;
    bool HitTest(Windows::Foundation::Numerics::float2 const& point) const;
    bool HitTest(float x, float y) const;
    bool HitTest(Windows::Foundation::Numerics::float2 const& point, Microsoft::Graphics::Canvas::Text::CanvasTextLayoutRegion& textLayoutRegion) const;
    bool HitTest(float x, float y, Microsoft::Graphics::Canvas::Text::CanvasTextLayoutRegion& textLayoutRegion) const;
    bool HitTest(Windows::Foundation::Numerics::float2 const& point, Microsoft::Graphics::Canvas::Text::CanvasTextLayoutRegion& textLayoutRegion, bool& trailingSideOfCharacter) const;
    bool HitTest(float x, float y, Microsoft::Graphics::Canvas::Text::CanvasTextLayoutRegion& textLayoutRegion, bool& trailingSideOfCharacter) const;
    Windows::Foundation::Numerics::float2 GetCaretPosition(int32_t characterIndex, bool trailingSideOfCharacter) const;
    Windows::Foundation::Numerics::float2 GetCaretPosition(int32_t characterIndex, bool trailingSideOfCharacter, Microsoft::Graphics::Canvas::Text::CanvasTextLayoutRegion& textLayoutRegion) const;
    com_array<Microsoft::Graphics::Canvas::Text::CanvasTextLayoutRegion> GetCharacterRegions(int32_t characterIndex, int32_t characterCount) const;
    bool GetPairKerning(int32_t characterIndex) const;
    void SetPairKerning(int32_t characterIndex, int32_t characterCount, bool hasPairKerning) const;
    float GetLeadingCharacterSpacing(int32_t characterIndex) const;
    float GetTrailingCharacterSpacing(int32_t characterIndex) const;
    float GetMinimumCharacterAdvance(int32_t characterIndex) const;
    void SetCharacterSpacing(int32_t characterIndex, int32_t characterCount, float leadingSpacing, float trailingSpacing, float minimumAdvance) const;
    Microsoft::Graphics::Canvas::Text::CanvasVerticalGlyphOrientation VerticalGlyphOrientation() const;
    void VerticalGlyphOrientation(Microsoft::Graphics::Canvas::Text::CanvasVerticalGlyphOrientation const& value) const;
    Microsoft::Graphics::Canvas::Text::CanvasOpticalAlignment OpticalAlignment() const;
    void OpticalAlignment(Microsoft::Graphics::Canvas::Text::CanvasOpticalAlignment const& value) const;
    bool LastLineWrapping() const;
    void LastLineWrapping(bool value) const;
    Microsoft::Graphics::Canvas::CanvasDevice Device() const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Text::ICanvasTextLayout> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayoutFactory
{
    Microsoft::Graphics::Canvas::Text::CanvasTextLayout Create(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, param::hstring const& textString, Microsoft::Graphics::Canvas::Text::CanvasTextFormat const& textFormat, float requestedWidth, float requestedHeight) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Text::ICanvasTextLayoutFactory> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayoutFactory<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayoutStatics
{
    Windows::Foundation::Numerics::float3x2 GetGlyphOrientationTransform(Microsoft::Graphics::Canvas::Text::CanvasGlyphOrientation const& glyphOrientation, bool isSideways, Windows::Foundation::Numerics::float2 const& position) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Text::ICanvasTextLayoutStatics> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Text_ICanvasTextLayoutStatics<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Text_ICanvasTextRenderer
{
    void DrawGlyphRun(Windows::Foundation::Numerics::float2 const& point, Microsoft::Graphics::Canvas::Text::CanvasFontFace const& fontFace, float fontSize, array_view<Microsoft::Graphics::Canvas::Text::CanvasGlyph const> glyphs, bool isSideways, uint32_t bidiLevel, Windows::Foundation::IInspectable const& brush, Microsoft::Graphics::Canvas::Text::CanvasTextMeasuringMode const& measuringMode, param::hstring const& localeName, param::hstring const& textString, array_view<int32_t const> clusterMapIndices, uint32_t characterIndex, Microsoft::Graphics::Canvas::Text::CanvasGlyphOrientation const& glyphOrientation) const;
    void DrawStrikethrough(Windows::Foundation::Numerics::float2 const& point, float strikethroughWidth, float strikethroughThickness, float strikethroughOffset, Microsoft::Graphics::Canvas::Text::CanvasTextDirection const& textDirection, Windows::Foundation::IInspectable const& brush, Microsoft::Graphics::Canvas::Text::CanvasTextMeasuringMode const& textMeasuringMode, param::hstring const& localeName, Microsoft::Graphics::Canvas::Text::CanvasGlyphOrientation const& glyphOrientation) const;
    void DrawUnderline(Windows::Foundation::Numerics::float2 const& point, float underlineWidth, float underlineThickness, float underlineOffset, float runHeight, Microsoft::Graphics::Canvas::Text::CanvasTextDirection const& textDirection, Windows::Foundation::IInspectable const& brush, Microsoft::Graphics::Canvas::Text::CanvasTextMeasuringMode const& textMeasuringMode, param::hstring const& localeName, Microsoft::Graphics::Canvas::Text::CanvasGlyphOrientation const& glyphOrientation) const;
    void DrawInlineObject(Windows::Foundation::Numerics::float2 const& point, Microsoft::Graphics::Canvas::Text::ICanvasTextInlineObject const& inlineObject, bool isSideways, bool isRightToLeft, Windows::Foundation::IInspectable const& brush, Microsoft::Graphics::Canvas::Text::CanvasGlyphOrientation const& glyphOrientation) const;
    bool PixelSnappingDisabled() const;
    Windows::Foundation::Numerics::float3x2 Transform() const;
    float Dpi() const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Text::ICanvasTextRenderer> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Text_ICanvasTextRenderer<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Text_ICanvasTextRenderingParameters
{
    Microsoft::Graphics::Canvas::Text::CanvasTextRenderingMode RenderingMode() const;
    Microsoft::Graphics::Canvas::Text::CanvasTextGridFit GridFit() const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Text::ICanvasTextRenderingParameters> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Text_ICanvasTextRenderingParameters<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Text_ICanvasTextRenderingParametersFactory
{
    Microsoft::Graphics::Canvas::Text::CanvasTextRenderingParameters Create(Microsoft::Graphics::Canvas::Text::CanvasTextRenderingMode const& textRenderingMode, Microsoft::Graphics::Canvas::Text::CanvasTextGridFit const& gridFit) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Text::ICanvasTextRenderingParametersFactory> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Text_ICanvasTextRenderingParametersFactory<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Text_ICanvasTypography
{
    void AddFeature(Microsoft::Graphics::Canvas::Text::CanvasTypographyFeature const& feature) const;
    void AddFeature(Microsoft::Graphics::Canvas::Text::CanvasTypographyFeatureName const& name, uint32_t parameter) const;
    com_array<Microsoft::Graphics::Canvas::Text::CanvasTypographyFeature> GetFeatures() const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Text::ICanvasTypography> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Text_ICanvasTypography<D>; };

template <> struct abi<Microsoft::Graphics::Canvas::Text::ICanvasFontFace>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetRecommendedRenderingMode(float fontSize, float dpi, Microsoft::Graphics::Canvas::Text::CanvasTextMeasuringMode measuringMode, ::IUnknown* renderingParameters, Microsoft::Graphics::Canvas::Text::CanvasTextRenderingMode* renderingMode) = 0;
    virtual HRESULT __stdcall GetRecommendedRenderingModeWithAllOptions(float fontSize, float dpi, Microsoft::Graphics::Canvas::Text::CanvasTextMeasuringMode measuringMode, ::IUnknown* renderingParameters, Windows::Foundation::Numerics::float3x2 transform, bool isSideways, Microsoft::Graphics::Canvas::CanvasAntialiasing outlineThreshold, Microsoft::Graphics::Canvas::Text::CanvasTextRenderingMode* renderingMode) = 0;
    virtual HRESULT __stdcall GetRecommendedGridFit(float fontSize, float dpi, Microsoft::Graphics::Canvas::Text::CanvasTextMeasuringMode measuringMode, ::IUnknown* renderingParameters, Windows::Foundation::Numerics::float3x2 transform, bool isSideways, Microsoft::Graphics::Canvas::CanvasAntialiasing outlineThreshold, Microsoft::Graphics::Canvas::Text::CanvasTextGridFit* gridFit) = 0;
    virtual HRESULT __stdcall get_GlyphBox(Windows::Foundation::Rect* value) = 0;
    virtual HRESULT __stdcall get_SubscriptPosition(Windows::Foundation::Numerics::float2* value) = 0;
    virtual HRESULT __stdcall get_SubscriptSize(Windows::Foundation::Size* value) = 0;
    virtual HRESULT __stdcall get_SuperscriptPosition(Windows::Foundation::Numerics::float2* value) = 0;
    virtual HRESULT __stdcall get_SuperscriptSize(Windows::Foundation::Size* value) = 0;
    virtual HRESULT __stdcall get_HasTypographicMetrics(bool* value) = 0;
    virtual HRESULT __stdcall get_Ascent(float* value) = 0;
    virtual HRESULT __stdcall get_Descent(float* value) = 0;
    virtual HRESULT __stdcall get_LineGap(float* value) = 0;
    virtual HRESULT __stdcall get_CapHeight(float* value) = 0;
    virtual HRESULT __stdcall get_LowercaseLetterHeight(float* value) = 0;
    virtual HRESULT __stdcall get_UnderlinePosition(float* value) = 0;
    virtual HRESULT __stdcall get_UnderlineThickness(float* value) = 0;
    virtual HRESULT __stdcall get_StrikethroughPosition(float* value) = 0;
    virtual HRESULT __stdcall get_StrikethroughThickness(float* value) = 0;
    virtual HRESULT __stdcall get_CaretSlopeRise(float* value) = 0;
    virtual HRESULT __stdcall get_CaretSlopeRun(float* value) = 0;
    virtual HRESULT __stdcall get_CaretOffset(float* value) = 0;
    virtual HRESULT __stdcall get_UnicodeRanges(uint32_t* __valueElementsSize, struct_of<8>** valueElements) = 0;
    virtual HRESULT __stdcall get_IsMonospaced(bool* value) = 0;
    virtual HRESULT __stdcall GetVerticalGlyphVariants(uint32_t __inputElementsSize, int32_t* inputElements, uint32_t* __outputElementsSize, int32_t** outputElements) = 0;
    virtual HRESULT __stdcall get_HasVerticalGlyphVariants(bool* value) = 0;
    virtual HRESULT __stdcall get_FileFormatType(Microsoft::Graphics::Canvas::Text::CanvasFontFileFormatType* value) = 0;
    virtual HRESULT __stdcall get_Simulations(Microsoft::Graphics::Canvas::Text::CanvasFontSimulations* value) = 0;
    virtual HRESULT __stdcall get_IsSymbolFont(bool* value) = 0;
    virtual HRESULT __stdcall get_GlyphCount(uint32_t* value) = 0;
    virtual HRESULT __stdcall GetGlyphIndices(uint32_t __inputElementsSize, uint32_t* inputElements, uint32_t* __outputElementsSize, int32_t** outputElements) = 0;
    virtual HRESULT __stdcall GetGlyphMetrics(uint32_t __inputElementsSize, int32_t* inputElements, bool isSideways, uint32_t* __outputElementsSize, struct_of<44>** outputElements) = 0;
    virtual HRESULT __stdcall GetGdiCompatibleGlyphMetrics(float fontSize, float dpi, Windows::Foundation::Numerics::float3x2 transform, bool useGdiNatural, uint32_t __inputElementsSize, int32_t* inputElements, bool isSideways, uint32_t* __outputElementsSize, struct_of<44>** outputElements) = 0;
    virtual HRESULT __stdcall get_Weight(struct_of<2>* value) = 0;
    virtual HRESULT __stdcall get_Stretch(Windows::UI::Text::FontStretch* value) = 0;
    virtual HRESULT __stdcall get_Style(Windows::UI::Text::FontStyle* value) = 0;
    virtual HRESULT __stdcall get_FamilyNames(::IUnknown** values) = 0;
    virtual HRESULT __stdcall get_FaceNames(::IUnknown** values) = 0;
    virtual HRESULT __stdcall GetInformationalStrings(Microsoft::Graphics::Canvas::Text::CanvasFontInformation fontInformation, ::IUnknown** values) = 0;
    virtual HRESULT __stdcall HasCharacter(uint32_t unicodeValue, bool* value) = 0;
    virtual HRESULT __stdcall GetGlyphRunBounds(::IUnknown* drawingSession, Windows::Foundation::Numerics::float2 point, float fontSize, uint32_t __glyphsSize, struct_of<16>* glyphs, bool isSideways, uint32_t bidiLevel, Windows::Foundation::Rect* bounds) = 0;
    virtual HRESULT __stdcall GetGlyphRunBoundsWithMeasuringMode(::IUnknown* drawingSession, Windows::Foundation::Numerics::float2 point, float fontSize, uint32_t __glyphsSize, struct_of<16>* glyphs, bool isSideways, uint32_t bidiLevel, Microsoft::Graphics::Canvas::Text::CanvasTextMeasuringMode measuringMode, Windows::Foundation::Rect* bounds) = 0;
    virtual HRESULT __stdcall get_Panose(uint32_t* __valueElementsSize, uint8_t** valueElements) = 0;
    virtual HRESULT __stdcall GetSupportedTypographicFeatureNames(struct_of<8> script, uint32_t* __valueElementsSize, Microsoft::Graphics::Canvas::Text::CanvasTypographyFeatureName** valueElements) = 0;
    virtual HRESULT __stdcall GetSupportedTypographicFeatureNamesWithLocale(struct_of<8> script, HSTRING locale, uint32_t* __valueElementsSize, Microsoft::Graphics::Canvas::Text::CanvasTypographyFeatureName** valueElements) = 0;
    virtual HRESULT __stdcall GetTypographicFeatureGlyphSupport(struct_of<8> script, Microsoft::Graphics::Canvas::Text::CanvasTypographyFeatureName typographicFeatureName, uint32_t __glyphsElementsSize, struct_of<16>* glyphsElements, uint32_t* __valueElementsSize, bool** valueElements) = 0;
    virtual HRESULT __stdcall GetTypographicFeatureGlyphSupportWithLocale(struct_of<8> script, Microsoft::Graphics::Canvas::Text::CanvasTypographyFeatureName typographicFeatureName, uint32_t __glyphsElementsSize, struct_of<16>* glyphsElements, HSTRING locale, uint32_t* __valueElementsSize, bool** valueElements) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Text::ICanvasFontSet>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Fonts(::IUnknown** value) = 0;
    virtual HRESULT __stdcall TryFindFontFace(::IUnknown* fontFace, int32_t* index, bool* succeeded) = 0;
    virtual HRESULT __stdcall GetMatchingFontsFromProperties(uint32_t __propertyElementsSize, struct_of<12,24>* propertyElements, ::IUnknown** matchingFonts) = 0;
    virtual HRESULT __stdcall GetMatchingFontsFromWwsFamily(HSTRING familyName, struct_of<2> weight, Windows::UI::Text::FontStretch stretch, Windows::UI::Text::FontStyle style, ::IUnknown** matchingFonts) = 0;
    virtual HRESULT __stdcall CountFontsMatchingProperty(struct_of<12,24> property, uint32_t* count) = 0;
    virtual HRESULT __stdcall GetPropertyValuesFromIndex(uint32_t fontIndex, Microsoft::Graphics::Canvas::Text::CanvasFontPropertyIdentifier propertyIdentifier, ::IUnknown** values) = 0;
    virtual HRESULT __stdcall GetPropertyValuesFromIdentifier(Microsoft::Graphics::Canvas::Text::CanvasFontPropertyIdentifier propertyIdentifier, HSTRING preferredLocaleNames, uint32_t* __valueElementsSize, struct_of<12,24>** valueElements) = 0;
    virtual HRESULT __stdcall GetPropertyValues(Microsoft::Graphics::Canvas::Text::CanvasFontPropertyIdentifier propertyIdentifier, uint32_t* __valueElementsSize, struct_of<12,24>** valueElements) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Text::ICanvasFontSetFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(::IUnknown* uri, ::IUnknown** fontSet) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Text::ICanvasFontSetStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetSystemFontSet(::IUnknown** fontSet) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Text::ICanvasNumberSubstitution>{ struct type : ::IInspectable
{
};};

template <> struct abi<Microsoft::Graphics::Canvas::Text::ICanvasNumberSubstitutionFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(Microsoft::Graphics::Canvas::Text::CanvasNumberSubstitutionMethod method, ::IUnknown** canvasNumberSubstitution) = 0;
    virtual HRESULT __stdcall CreateWithLocaleAndIgnoreOverrides(Microsoft::Graphics::Canvas::Text::CanvasNumberSubstitutionMethod method, HSTRING localeName, bool ignoreEnvironmentOverrides, ::IUnknown** canvasNumberSubstitution) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Text::ICanvasScaledFont>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_FontFace(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ScaleFactor(float* value) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Text::ICanvasTextAnalyzer>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetFontsUsingSystemFontSet(::IUnknown* textFormat, ::IUnknown** values) = 0;
    virtual HRESULT __stdcall GetFonts(::IUnknown* textFormat, ::IUnknown* fontSet, ::IUnknown** values) = 0;
    virtual HRESULT __stdcall GetBidi(::IUnknown** values) = 0;
    virtual HRESULT __stdcall GetBidiWithLocale(HSTRING locale, ::IUnknown** values) = 0;
    virtual HRESULT __stdcall GetBreakpoints(uint32_t* __valueElementsSize, struct_of<12>** valueElements) = 0;
    virtual HRESULT __stdcall GetBreakpointsWithLocale(HSTRING locale, uint32_t* __valueElementsSize, struct_of<12>** valueElements) = 0;
    virtual HRESULT __stdcall GetNumberSubstitutions(::IUnknown** values) = 0;
    virtual HRESULT __stdcall GetScript(::IUnknown** values) = 0;
    virtual HRESULT __stdcall GetScriptWithLocale(HSTRING locale, ::IUnknown** values) = 0;
    virtual HRESULT __stdcall GetGlyphOrientations(::IUnknown** values) = 0;
    virtual HRESULT __stdcall GetGlyphOrientationsWithLocale(HSTRING locale, ::IUnknown** values) = 0;
    virtual HRESULT __stdcall GetScriptProperties(struct_of<8> analyzedScript, struct_of<24,32>* scriptProperties) = 0;
    virtual HRESULT __stdcall GetGlyphs(struct_of<8> characterRange, ::IUnknown* fontFace, float fontSize, bool isSideways, bool isRightToLeft, struct_of<8> script, uint32_t* __valueElementsSize, struct_of<16>** valueElements) = 0;
    virtual HRESULT __stdcall GetGlyphsWithAllOptions(struct_of<8> characterRange, ::IUnknown* fontFace, float fontSize, bool isSideways, bool isRightToLeft, struct_of<8> script, HSTRING locale, ::IUnknown* numberSubstitution, ::IUnknown* typographyRanges, uint32_t* __clusterMapIndicesElementsSize, int32_t** clusterMapIndicesElements, uint32_t* __isShapedAloneGlyphsElementsSize, bool** isShapedAloneGlyphsElements, uint32_t* __glyphShapingResultsElementsSize, struct_of<8>** glyphShapingResultsElements, uint32_t* __valueElementsSize, struct_of<16>** valueElements) = 0;
    virtual HRESULT __stdcall GetJustificationOpportunities(struct_of<8> characterRange, ::IUnknown* fontFace, float fontSize, struct_of<8> script, uint32_t __clusterMapIndicesElementsSize, int32_t* clusterMapIndicesElements, uint32_t __glyphShapingResultsElementsSize, struct_of<8>* glyphShapingResultsElements, uint32_t* __valueElementsSize, struct_of<20>** valueElements) = 0;
    virtual HRESULT __stdcall ApplyJustificationOpportunities(float lineWidth, uint32_t __justificationOpportunitiesElementsSize, struct_of<20>* justificationOpportunitiesElements, uint32_t __sourceGlyphsElementsSize, struct_of<16>* sourceGlyphsElements, uint32_t* __valueElementsSize, struct_of<16>** valueElements) = 0;
    virtual HRESULT __stdcall AddGlyphsAfterJustification(::IUnknown* fontFace, float fontSize, struct_of<8> script, uint32_t __clusterMapIndicesElementsSize, int32_t* clusterMapIndicesElements, uint32_t __originalGlyphsElementsSize, struct_of<16>* originalGlyphsElements, uint32_t __justifiedGlyphsElementsSize, struct_of<16>* justifiedGlyphsElements, uint32_t __glyphShapingResultsElementsSize, struct_of<8>* glyphShapingResultsElements, uint32_t* __valueElementsSize, struct_of<16>** valueElements) = 0;
    virtual HRESULT __stdcall AddGlyphsAfterJustificationWithClusterMap(::IUnknown* fontFace, float fontSize, struct_of<8> script, uint32_t __clusterMapIndicesElementsSize, int32_t* clusterMapIndicesElements, uint32_t __originalGlyphsElementsSize, struct_of<16>* originalGlyphsElements, uint32_t __justifiedGlyphsElementsSize, struct_of<16>* justifiedGlyphsElements, uint32_t __glyphShapingResultsElementsSize, struct_of<8>* glyphShapingResultsElements, uint32_t* __outputClusterMapIndicesElementsSize, int32_t** outputClusterMapIndicesElements, uint32_t* __valueElementsSize, struct_of<16>** valueElements) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Text::ICanvasTextAnalyzerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(HSTRING text, Microsoft::Graphics::Canvas::Text::CanvasTextDirection textDirection, ::IUnknown** canvasTextAnalyzer) = 0;
    virtual HRESULT __stdcall CreateWithNumberSubstitutionAndVerticalGlyphOrientationAndBidiLevel(HSTRING text, Microsoft::Graphics::Canvas::Text::CanvasTextDirection textDirection, ::IUnknown* numberSubstitution, Microsoft::Graphics::Canvas::Text::CanvasVerticalGlyphOrientation verticalGlyphOrientation, uint32_t bidiLevel, ::IUnknown** canvasTextAnalyzer) = 0;
    virtual HRESULT __stdcall CreateWithOptions(HSTRING text, Microsoft::Graphics::Canvas::Text::CanvasTextDirection textDirection, ::IUnknown* options, ::IUnknown** canvasTextAnalyzer) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Text::ICanvasTextAnalyzerOptions>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetLocaleName(int32_t characterIndex, int32_t* characterCount, HSTRING* value) = 0;
    virtual HRESULT __stdcall GetNumberSubstitution(int32_t characterIndex, int32_t* characterCount, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetVerticalGlyphOrientation(int32_t characterIndex, int32_t* characterCount, Microsoft::Graphics::Canvas::Text::CanvasVerticalGlyphOrientation* value) = 0;
    virtual HRESULT __stdcall GetBidiLevel(int32_t characterIndex, int32_t* characterCount, uint32_t* value) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Text::ICanvasTextFormat>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Direction(Microsoft::Graphics::Canvas::Text::CanvasTextDirection* value) = 0;
    virtual HRESULT __stdcall put_Direction(Microsoft::Graphics::Canvas::Text::CanvasTextDirection value) = 0;
    virtual HRESULT __stdcall get_FontFamily(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_FontFamily(HSTRING value) = 0;
    virtual HRESULT __stdcall get_FontSize(float* value) = 0;
    virtual HRESULT __stdcall put_FontSize(float value) = 0;
    virtual HRESULT __stdcall get_FontStretch(Windows::UI::Text::FontStretch* value) = 0;
    virtual HRESULT __stdcall put_FontStretch(Windows::UI::Text::FontStretch value) = 0;
    virtual HRESULT __stdcall get_FontStyle(Windows::UI::Text::FontStyle* value) = 0;
    virtual HRESULT __stdcall put_FontStyle(Windows::UI::Text::FontStyle value) = 0;
    virtual HRESULT __stdcall get_FontWeight(struct_of<2>* value) = 0;
    virtual HRESULT __stdcall put_FontWeight(struct_of<2> value) = 0;
    virtual HRESULT __stdcall get_IncrementalTabStop(float* value) = 0;
    virtual HRESULT __stdcall put_IncrementalTabStop(float value) = 0;
    virtual HRESULT __stdcall get_LineSpacing(float* value) = 0;
    virtual HRESULT __stdcall put_LineSpacing(float value) = 0;
    virtual HRESULT __stdcall get_LineSpacingBaseline(float* value) = 0;
    virtual HRESULT __stdcall put_LineSpacingBaseline(float value) = 0;
    virtual HRESULT __stdcall get_LocaleName(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_LocaleName(HSTRING value) = 0;
    virtual HRESULT __stdcall get_VerticalAlignment(Microsoft::Graphics::Canvas::Text::CanvasVerticalAlignment* value) = 0;
    virtual HRESULT __stdcall put_VerticalAlignment(Microsoft::Graphics::Canvas::Text::CanvasVerticalAlignment value) = 0;
    virtual HRESULT __stdcall get_HorizontalAlignment(Microsoft::Graphics::Canvas::Text::CanvasHorizontalAlignment* value) = 0;
    virtual HRESULT __stdcall put_HorizontalAlignment(Microsoft::Graphics::Canvas::Text::CanvasHorizontalAlignment value) = 0;
    virtual HRESULT __stdcall get_TrimmingGranularity(Microsoft::Graphics::Canvas::Text::CanvasTextTrimmingGranularity* value) = 0;
    virtual HRESULT __stdcall put_TrimmingGranularity(Microsoft::Graphics::Canvas::Text::CanvasTextTrimmingGranularity value) = 0;
    virtual HRESULT __stdcall get_TrimmingDelimiter(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_TrimmingDelimiter(HSTRING value) = 0;
    virtual HRESULT __stdcall get_TrimmingDelimiterCount(int32_t* value) = 0;
    virtual HRESULT __stdcall put_TrimmingDelimiterCount(int32_t value) = 0;
    virtual HRESULT __stdcall get_WordWrapping(Microsoft::Graphics::Canvas::Text::CanvasWordWrapping* value) = 0;
    virtual HRESULT __stdcall put_WordWrapping(Microsoft::Graphics::Canvas::Text::CanvasWordWrapping value) = 0;
    virtual HRESULT __stdcall get_Options(Microsoft::Graphics::Canvas::Text::CanvasDrawTextOptions* value) = 0;
    virtual HRESULT __stdcall put_Options(Microsoft::Graphics::Canvas::Text::CanvasDrawTextOptions value) = 0;
    virtual HRESULT __stdcall get_VerticalGlyphOrientation(Microsoft::Graphics::Canvas::Text::CanvasVerticalGlyphOrientation* value) = 0;
    virtual HRESULT __stdcall put_VerticalGlyphOrientation(Microsoft::Graphics::Canvas::Text::CanvasVerticalGlyphOrientation value) = 0;
    virtual HRESULT __stdcall get_OpticalAlignment(Microsoft::Graphics::Canvas::Text::CanvasOpticalAlignment* value) = 0;
    virtual HRESULT __stdcall put_OpticalAlignment(Microsoft::Graphics::Canvas::Text::CanvasOpticalAlignment value) = 0;
    virtual HRESULT __stdcall get_LastLineWrapping(bool* value) = 0;
    virtual HRESULT __stdcall put_LastLineWrapping(bool value) = 0;
    virtual HRESULT __stdcall get_LineSpacingMode(Microsoft::Graphics::Canvas::Text::CanvasLineSpacingMode* value) = 0;
    virtual HRESULT __stdcall put_LineSpacingMode(Microsoft::Graphics::Canvas::Text::CanvasLineSpacingMode value) = 0;
    virtual HRESULT __stdcall get_TrimmingSign(Microsoft::Graphics::Canvas::Text::CanvasTrimmingSign* value) = 0;
    virtual HRESULT __stdcall put_TrimmingSign(Microsoft::Graphics::Canvas::Text::CanvasTrimmingSign value) = 0;
    virtual HRESULT __stdcall get_CustomTrimmingSign(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_CustomTrimmingSign(::IUnknown* value) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Text::ICanvasTextFormatStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetSystemFontFamilies(uint32_t* __valueElementsSize, HSTRING** valueElements) = 0;
    virtual HRESULT __stdcall GetSystemFontFamiliesFromLocaleList(::IUnknown* localeList, uint32_t* __valueElementsSize, HSTRING** valueElements) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Text::ICanvasTextInlineObject>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Draw(::IUnknown* textRenderer, Windows::Foundation::Numerics::float2 point, bool isSideways, bool isRightToLeft, ::IUnknown* brush) = 0;
    virtual HRESULT __stdcall get_Size(Windows::Foundation::Size* value) = 0;
    virtual HRESULT __stdcall get_Baseline(float* value) = 0;
    virtual HRESULT __stdcall get_SupportsSideways(bool* value) = 0;
    virtual HRESULT __stdcall get_DrawBounds(Windows::Foundation::Rect* bounds) = 0;
    virtual HRESULT __stdcall get_BreakBefore(Microsoft::Graphics::Canvas::Text::CanvasLineBreakCondition* value) = 0;
    virtual HRESULT __stdcall get_BreakAfter(Microsoft::Graphics::Canvas::Text::CanvasLineBreakCondition* value) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Text::ICanvasTextLayout>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetFormatChangeIndices(uint32_t* __stopsSize, int32_t** stops) = 0;
    virtual HRESULT __stdcall get_Direction(Microsoft::Graphics::Canvas::Text::CanvasTextDirection* value) = 0;
    virtual HRESULT __stdcall put_Direction(Microsoft::Graphics::Canvas::Text::CanvasTextDirection value) = 0;
    virtual HRESULT __stdcall get_DefaultFontFamily(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_DefaultFontSize(float* value) = 0;
    virtual HRESULT __stdcall get_DefaultFontStretch(Windows::UI::Text::FontStretch* value) = 0;
    virtual HRESULT __stdcall get_DefaultFontStyle(Windows::UI::Text::FontStyle* value) = 0;
    virtual HRESULT __stdcall get_DefaultFontWeight(struct_of<2>* value) = 0;
    virtual HRESULT __stdcall get_IncrementalTabStop(float* value) = 0;
    virtual HRESULT __stdcall put_IncrementalTabStop(float value) = 0;
    virtual HRESULT __stdcall get_LineSpacing(float* value) = 0;
    virtual HRESULT __stdcall put_LineSpacing(float value) = 0;
    virtual HRESULT __stdcall get_LineSpacingBaseline(float* value) = 0;
    virtual HRESULT __stdcall put_LineSpacingBaseline(float value) = 0;
    virtual HRESULT __stdcall get_DefaultLocaleName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_VerticalAlignment(Microsoft::Graphics::Canvas::Text::CanvasVerticalAlignment* value) = 0;
    virtual HRESULT __stdcall put_VerticalAlignment(Microsoft::Graphics::Canvas::Text::CanvasVerticalAlignment value) = 0;
    virtual HRESULT __stdcall get_HorizontalAlignment(Microsoft::Graphics::Canvas::Text::CanvasHorizontalAlignment* value) = 0;
    virtual HRESULT __stdcall put_HorizontalAlignment(Microsoft::Graphics::Canvas::Text::CanvasHorizontalAlignment value) = 0;
    virtual HRESULT __stdcall get_TrimmingGranularity(Microsoft::Graphics::Canvas::Text::CanvasTextTrimmingGranularity* value) = 0;
    virtual HRESULT __stdcall put_TrimmingGranularity(Microsoft::Graphics::Canvas::Text::CanvasTextTrimmingGranularity value) = 0;
    virtual HRESULT __stdcall get_TrimmingDelimiter(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_TrimmingDelimiter(HSTRING value) = 0;
    virtual HRESULT __stdcall get_TrimmingDelimiterCount(int32_t* value) = 0;
    virtual HRESULT __stdcall put_TrimmingDelimiterCount(int32_t value) = 0;
    virtual HRESULT __stdcall get_WordWrapping(Microsoft::Graphics::Canvas::Text::CanvasWordWrapping* value) = 0;
    virtual HRESULT __stdcall put_WordWrapping(Microsoft::Graphics::Canvas::Text::CanvasWordWrapping value) = 0;
    virtual HRESULT __stdcall get_Options(Microsoft::Graphics::Canvas::Text::CanvasDrawTextOptions* value) = 0;
    virtual HRESULT __stdcall put_Options(Microsoft::Graphics::Canvas::Text::CanvasDrawTextOptions value) = 0;
    virtual HRESULT __stdcall get_LineSpacingMode(Microsoft::Graphics::Canvas::Text::CanvasLineSpacingMode* value) = 0;
    virtual HRESULT __stdcall put_LineSpacingMode(Microsoft::Graphics::Canvas::Text::CanvasLineSpacingMode value) = 0;
    virtual HRESULT __stdcall get_TrimmingSign(Microsoft::Graphics::Canvas::Text::CanvasTrimmingSign* value) = 0;
    virtual HRESULT __stdcall put_TrimmingSign(Microsoft::Graphics::Canvas::Text::CanvasTrimmingSign value) = 0;
    virtual HRESULT __stdcall get_CustomTrimmingSign(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_CustomTrimmingSign(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_RequestedSize(Windows::Foundation::Size* value) = 0;
    virtual HRESULT __stdcall put_RequestedSize(Windows::Foundation::Size value) = 0;
    virtual HRESULT __stdcall GetMinimumLineLength(float* value) = 0;
    virtual HRESULT __stdcall GetBrush(int32_t characterIndex, ::IUnknown** brush) = 0;
    virtual HRESULT __stdcall GetCustomBrush(int32_t characterIndex, ::IUnknown** brush) = 0;
    virtual HRESULT __stdcall GetFontFamily(int32_t characterIndex, HSTRING* fontFamily) = 0;
    virtual HRESULT __stdcall GetFontSize(int32_t characterIndex, float* fontSize) = 0;
    virtual HRESULT __stdcall GetFontStretch(int32_t characterIndex, Windows::UI::Text::FontStretch* fontStretch) = 0;
    virtual HRESULT __stdcall GetFontStyle(int32_t characterIndex, Windows::UI::Text::FontStyle* fontStyle) = 0;
    virtual HRESULT __stdcall GetFontWeight(int32_t characterIndex, struct_of<2>* fontWeight) = 0;
    virtual HRESULT __stdcall GetLocaleName(int32_t characterIndex, HSTRING* localeName) = 0;
    virtual HRESULT __stdcall GetStrikethrough(int32_t characterIndex, bool* hasStrikethrough) = 0;
    virtual HRESULT __stdcall GetUnderline(int32_t characterIndex, bool* hasUnderline) = 0;
    virtual HRESULT __stdcall GetInlineObject(int32_t characterIndex, ::IUnknown** inlineObject) = 0;
    virtual HRESULT __stdcall SetColor(int32_t characterIndex, int32_t characterCount, struct_of<4> color) = 0;
    virtual HRESULT __stdcall SetBrush(int32_t characterIndex, int32_t characterCount, ::IUnknown* brush) = 0;
    virtual HRESULT __stdcall SetCustomBrush(int32_t characterIndex, int32_t characterCount, ::IUnknown* brush) = 0;
    virtual HRESULT __stdcall SetFontFamily(int32_t characterIndex, int32_t characterCount, HSTRING fontFamily) = 0;
    virtual HRESULT __stdcall SetFontSize(int32_t characterIndex, int32_t characterCount, float fontSize) = 0;
    virtual HRESULT __stdcall SetFontStretch(int32_t characterIndex, int32_t characterCount, Windows::UI::Text::FontStretch fontStretch) = 0;
    virtual HRESULT __stdcall SetFontStyle(int32_t characterIndex, int32_t characterCount, Windows::UI::Text::FontStyle fontStyle) = 0;
    virtual HRESULT __stdcall SetFontWeight(int32_t characterIndex, int32_t characterCount, struct_of<2> fontWeight) = 0;
    virtual HRESULT __stdcall SetLocaleName(int32_t characterIndex, int32_t characterCount, HSTRING name) = 0;
    virtual HRESULT __stdcall SetStrikethrough(int32_t characterIndex, int32_t characterCount, bool hasStrikethrough) = 0;
    virtual HRESULT __stdcall SetUnderline(int32_t characterIndex, int32_t characterCount, bool hasUnderline) = 0;
    virtual HRESULT __stdcall SetInlineObject(int32_t characterIndex, int32_t characterCount, ::IUnknown* inlineObject) = 0;
    virtual HRESULT __stdcall DrawToTextRenderer(::IUnknown* textRenderer, Windows::Foundation::Numerics::float2 position) = 0;
    virtual HRESULT __stdcall DrawToTextRendererWithCoords(::IUnknown* textRenderer, float x, float y) = 0;
    virtual HRESULT __stdcall get_LineMetrics(uint32_t* __valueElementsSize, struct_of<32>** valueElements) = 0;
    virtual HRESULT __stdcall get_ClusterMetrics(uint32_t* __valueElementsSize, struct_of<12>** valueElements) = 0;
    virtual HRESULT __stdcall SetTypography(int32_t characterIndex, int32_t characterCount, ::IUnknown* typography) = 0;
    virtual HRESULT __stdcall GetTypography(int32_t characterIndex, ::IUnknown** typography) = 0;
    virtual HRESULT __stdcall get_LayoutBounds(Windows::Foundation::Rect* bounds) = 0;
    virtual HRESULT __stdcall get_LayoutBoundsIncludingTrailingWhitespace(Windows::Foundation::Rect* bounds) = 0;
    virtual HRESULT __stdcall get_LineCount(int32_t* lineCount) = 0;
    virtual HRESULT __stdcall get_MaximumBidiReorderingDepth(int32_t* depth) = 0;
    virtual HRESULT __stdcall get_DrawBounds(Windows::Foundation::Rect* bounds) = 0;
    virtual HRESULT __stdcall HitTest(Windows::Foundation::Numerics::float2 point, bool* isHit) = 0;
    virtual HRESULT __stdcall HitTestWithCoords(float x, float y, bool* isHit) = 0;
    virtual HRESULT __stdcall HitTestWithDescription(Windows::Foundation::Numerics::float2 point, struct_of<24>* textLayoutRegion, bool* isHit) = 0;
    virtual HRESULT __stdcall HitTestWithDescriptionAndCoords(float x, float y, struct_of<24>* textLayoutRegion, bool* isHit) = 0;
    virtual HRESULT __stdcall HitTestWithDescriptionAndTrailingSide(Windows::Foundation::Numerics::float2 point, struct_of<24>* textLayoutRegion, bool* trailingSideOfCharacter, bool* isHit) = 0;
    virtual HRESULT __stdcall HitTestWithDescriptionAndCoordsAndTrailingSide(float x, float y, struct_of<24>* textLayoutRegion, bool* trailingSideOfCharacter, bool* isHit) = 0;
    virtual HRESULT __stdcall GetCaretPosition(int32_t characterIndex, bool trailingSideOfCharacter, Windows::Foundation::Numerics::float2* location) = 0;
    virtual HRESULT __stdcall GetCaretPositionWithDescription(int32_t characterIndex, bool trailingSideOfCharacter, struct_of<24>* textLayoutRegion, Windows::Foundation::Numerics::float2* location) = 0;
    virtual HRESULT __stdcall GetCharacterRegions(int32_t characterIndex, int32_t characterCount, uint32_t* __hitTestDescriptionsSize, struct_of<24>** hitTestDescriptions) = 0;
    virtual HRESULT __stdcall GetPairKerning(int32_t characterIndex, bool* hasPairKerning) = 0;
    virtual HRESULT __stdcall SetPairKerning(int32_t characterIndex, int32_t characterCount, bool hasPairKerning) = 0;
    virtual HRESULT __stdcall GetLeadingCharacterSpacing(int32_t characterIndex, float* leadingSpacing) = 0;
    virtual HRESULT __stdcall GetTrailingCharacterSpacing(int32_t characterIndex, float* trailingSpacing) = 0;
    virtual HRESULT __stdcall GetMinimumCharacterAdvance(int32_t characterIndex, float* minimumAdvance) = 0;
    virtual HRESULT __stdcall SetCharacterSpacing(int32_t characterIndex, int32_t characterCount, float leadingSpacing, float trailingSpacing, float minimumAdvance) = 0;
    virtual HRESULT __stdcall get_VerticalGlyphOrientation(Microsoft::Graphics::Canvas::Text::CanvasVerticalGlyphOrientation* value) = 0;
    virtual HRESULT __stdcall put_VerticalGlyphOrientation(Microsoft::Graphics::Canvas::Text::CanvasVerticalGlyphOrientation value) = 0;
    virtual HRESULT __stdcall get_OpticalAlignment(Microsoft::Graphics::Canvas::Text::CanvasOpticalAlignment* value) = 0;
    virtual HRESULT __stdcall put_OpticalAlignment(Microsoft::Graphics::Canvas::Text::CanvasOpticalAlignment value) = 0;
    virtual HRESULT __stdcall get_LastLineWrapping(bool* value) = 0;
    virtual HRESULT __stdcall put_LastLineWrapping(bool value) = 0;
    virtual HRESULT __stdcall get_Device(::IUnknown** value) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Text::ICanvasTextLayoutFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(::IUnknown* resourceCreator, HSTRING textString, ::IUnknown* textFormat, float requestedWidth, float requestedHeight, ::IUnknown** canvasTextLayout) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Text::ICanvasTextLayoutStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetGlyphOrientationTransform(Microsoft::Graphics::Canvas::Text::CanvasGlyphOrientation glyphOrientation, bool isSideways, Windows::Foundation::Numerics::float2 position, Windows::Foundation::Numerics::float3x2* transform) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Text::ICanvasTextRenderer>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall DrawGlyphRun(Windows::Foundation::Numerics::float2 point, ::IUnknown* fontFace, float fontSize, uint32_t __glyphsSize, struct_of<16>* glyphs, bool isSideways, uint32_t bidiLevel, ::IUnknown* brush, Microsoft::Graphics::Canvas::Text::CanvasTextMeasuringMode measuringMode, HSTRING localeName, HSTRING textString, uint32_t __clusterMapIndicesSize, int32_t* clusterMapIndices, uint32_t characterIndex, Microsoft::Graphics::Canvas::Text::CanvasGlyphOrientation glyphOrientation) = 0;
    virtual HRESULT __stdcall DrawStrikethrough(Windows::Foundation::Numerics::float2 point, float strikethroughWidth, float strikethroughThickness, float strikethroughOffset, Microsoft::Graphics::Canvas::Text::CanvasTextDirection textDirection, ::IUnknown* brush, Microsoft::Graphics::Canvas::Text::CanvasTextMeasuringMode textMeasuringMode, HSTRING localeName, Microsoft::Graphics::Canvas::Text::CanvasGlyphOrientation glyphOrientation) = 0;
    virtual HRESULT __stdcall DrawUnderline(Windows::Foundation::Numerics::float2 point, float underlineWidth, float underlineThickness, float underlineOffset, float runHeight, Microsoft::Graphics::Canvas::Text::CanvasTextDirection textDirection, ::IUnknown* brush, Microsoft::Graphics::Canvas::Text::CanvasTextMeasuringMode textMeasuringMode, HSTRING localeName, Microsoft::Graphics::Canvas::Text::CanvasGlyphOrientation glyphOrientation) = 0;
    virtual HRESULT __stdcall DrawInlineObject(Windows::Foundation::Numerics::float2 point, ::IUnknown* inlineObject, bool isSideways, bool isRightToLeft, ::IUnknown* brush, Microsoft::Graphics::Canvas::Text::CanvasGlyphOrientation glyphOrientation) = 0;
    virtual HRESULT __stdcall get_PixelSnappingDisabled(bool* value) = 0;
    virtual HRESULT __stdcall get_Transform(Windows::Foundation::Numerics::float3x2* value) = 0;
    virtual HRESULT __stdcall get_Dpi(float* value) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Text::ICanvasTextRenderingParameters>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_RenderingMode(Microsoft::Graphics::Canvas::Text::CanvasTextRenderingMode* value) = 0;
    virtual HRESULT __stdcall get_GridFit(Microsoft::Graphics::Canvas::Text::CanvasTextGridFit* value) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Text::ICanvasTextRenderingParametersFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(Microsoft::Graphics::Canvas::Text::CanvasTextRenderingMode textRenderingMode, Microsoft::Graphics::Canvas::Text::CanvasTextGridFit gridFit, ::IUnknown** textRenderingParameters) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Text::ICanvasTypography>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall AddFeature(struct_of<8> feature) = 0;
    virtual HRESULT __stdcall AddFeatureWithNameAndParameter(Microsoft::Graphics::Canvas::Text::CanvasTypographyFeatureName name, uint32_t parameter) = 0;
    virtual HRESULT __stdcall GetFeatures(uint32_t* __featuresSize, struct_of<8>** features) = 0;
};};

}
