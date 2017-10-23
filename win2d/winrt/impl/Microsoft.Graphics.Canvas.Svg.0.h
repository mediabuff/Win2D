// C++/WinRT v1.0.170906.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Microsoft::Graphics::Canvas {

enum class CanvasEdgeBehavior;
struct CanvasDevice;
struct ICanvasResourceCreator;

}

WINRT_EXPORT namespace winrt::Microsoft::Graphics::Canvas::Geometry {

enum class CanvasCapStyle;
enum class CanvasFilledRegionDetermination;
enum class CanvasLineJoin;
struct CanvasGeometry;

}

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

struct IRandomAccessStream;

}

WINRT_EXPORT namespace winrt::Windows::UI {

struct Color;

}

WINRT_EXPORT namespace winrt::Microsoft::Graphics::Canvas::Svg {

enum class CanvasSvgAspectAlignment : int32_t
{
    None = 0,
    XMinYMin = 1,
    XMidYMin = 2,
    XMaxYMin = 3,
    XMinYMid = 4,
    XMidYMid = 5,
    XMaxYMid = 6,
    XMinYMax = 7,
    XMidYMax = 8,
    XMaxYMax = 9,
};

enum class CanvasSvgAspectScaling : int32_t
{
    Meet = 0,
    Slice = 1,
};

enum class CanvasSvgDisplay : int32_t
{
    Inline = 0,
    None = 1,
};

enum class CanvasSvgLengthUnits : int32_t
{
    Number = 0,
    Percentage = 1,
};

enum class CanvasSvgOverflow : int32_t
{
    DoNotClipToViewport = 0,
    ClipToViewport = 1,
};

enum class CanvasSvgPaintType : int32_t
{
    None = 0,
    Color = 1,
    CurrentColor = 2,
    Uri = 3,
    UriThenNone = 4,
    UriThenColor = 5,
    UriThenCurrentColor = 6,
};

enum class CanvasSvgPathCommand : int32_t
{
    ClosePath = 0,
    MoveAbsolute = 1,
    MoveRelative = 2,
    LineAbsolute = 3,
    LineRelative = 4,
    CubicAbsolute = 5,
    CubicRelative = 6,
    QuadraticAbsolute = 7,
    QuadraticRelative = 8,
    ArcAbsolute = 9,
    ArcRelative = 10,
    HorizontalAbsolute = 11,
    HorizontalRelative = 12,
    VerticalAbsolute = 13,
    VerticalRelative = 14,
    CubicSmoothAbsolute = 15,
    CubicSmoothRelative = 16,
    QuadraticSmoothAbsolute = 17,
    QuadraticSmoothRelative = 18,
};

enum class CanvasSvgUnits : int32_t
{
    UserSpaceOnUse = 0,
    ObjectBoundingBox = 1,
};

enum class CanvasSvgVisibility : int32_t
{
    Visible = 0,
    Hidden = 1,
};

struct ICanvasSvgAttribute;
struct ICanvasSvgDocument;
struct ICanvasSvgDocumentFactory;
struct ICanvasSvgDocumentStatics;
struct ICanvasSvgElement;
struct ICanvasSvgNamedElement;
struct ICanvasSvgPaintAttribute;
struct ICanvasSvgPathAttribute;
struct ICanvasSvgPointsAttribute;
struct ICanvasSvgStrokeDashArrayAttribute;
struct ICanvasSvgTextElement;
struct CanvasSvgDocument;
struct CanvasSvgNamedElement;
struct CanvasSvgPaintAttribute;
struct CanvasSvgPathAttribute;
struct CanvasSvgPointsAttribute;
struct CanvasSvgStrokeDashArrayAttribute;
struct CanvasSvgTextElement;

}

namespace winrt::impl {

template <> struct category<Microsoft::Graphics::Canvas::Svg::ICanvasSvgAttribute>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Svg::ICanvasSvgDocument>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Svg::ICanvasSvgDocumentFactory>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Svg::ICanvasSvgDocumentStatics>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Svg::ICanvasSvgElement>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Svg::ICanvasSvgNamedElement>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Svg::ICanvasSvgPaintAttribute>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Svg::ICanvasSvgPathAttribute>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Svg::ICanvasSvgPointsAttribute>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Svg::ICanvasSvgStrokeDashArrayAttribute>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Svg::ICanvasSvgTextElement>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Svg::CanvasSvgDocument>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::Svg::CanvasSvgNamedElement>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::Svg::CanvasSvgPaintAttribute>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::Svg::CanvasSvgPathAttribute>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::Svg::CanvasSvgPointsAttribute>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::Svg::CanvasSvgStrokeDashArrayAttribute>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::Svg::CanvasSvgTextElement>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::Svg::CanvasSvgAspectAlignment>{ using type = enum_category; };
template <> struct category<Microsoft::Graphics::Canvas::Svg::CanvasSvgAspectScaling>{ using type = enum_category; };
template <> struct category<Microsoft::Graphics::Canvas::Svg::CanvasSvgDisplay>{ using type = enum_category; };
template <> struct category<Microsoft::Graphics::Canvas::Svg::CanvasSvgLengthUnits>{ using type = enum_category; };
template <> struct category<Microsoft::Graphics::Canvas::Svg::CanvasSvgOverflow>{ using type = enum_category; };
template <> struct category<Microsoft::Graphics::Canvas::Svg::CanvasSvgPaintType>{ using type = enum_category; };
template <> struct category<Microsoft::Graphics::Canvas::Svg::CanvasSvgPathCommand>{ using type = enum_category; };
template <> struct category<Microsoft::Graphics::Canvas::Svg::CanvasSvgUnits>{ using type = enum_category; };
template <> struct category<Microsoft::Graphics::Canvas::Svg::CanvasSvgVisibility>{ using type = enum_category; };
template <> struct name<Microsoft::Graphics::Canvas::Svg::ICanvasSvgAttribute>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Svg.ICanvasSvgAttribute" }; };
template <> struct name<Microsoft::Graphics::Canvas::Svg::ICanvasSvgDocument>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Svg.ICanvasSvgDocument" }; };
template <> struct name<Microsoft::Graphics::Canvas::Svg::ICanvasSvgDocumentFactory>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Svg.ICanvasSvgDocumentFactory" }; };
template <> struct name<Microsoft::Graphics::Canvas::Svg::ICanvasSvgDocumentStatics>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Svg.ICanvasSvgDocumentStatics" }; };
template <> struct name<Microsoft::Graphics::Canvas::Svg::ICanvasSvgElement>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Svg.ICanvasSvgElement" }; };
template <> struct name<Microsoft::Graphics::Canvas::Svg::ICanvasSvgNamedElement>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Svg.ICanvasSvgNamedElement" }; };
template <> struct name<Microsoft::Graphics::Canvas::Svg::ICanvasSvgPaintAttribute>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Svg.ICanvasSvgPaintAttribute" }; };
template <> struct name<Microsoft::Graphics::Canvas::Svg::ICanvasSvgPathAttribute>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Svg.ICanvasSvgPathAttribute" }; };
template <> struct name<Microsoft::Graphics::Canvas::Svg::ICanvasSvgPointsAttribute>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Svg.ICanvasSvgPointsAttribute" }; };
template <> struct name<Microsoft::Graphics::Canvas::Svg::ICanvasSvgStrokeDashArrayAttribute>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Svg.ICanvasSvgStrokeDashArrayAttribute" }; };
template <> struct name<Microsoft::Graphics::Canvas::Svg::ICanvasSvgTextElement>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Svg.ICanvasSvgTextElement" }; };
template <> struct name<Microsoft::Graphics::Canvas::Svg::CanvasSvgDocument>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Svg.CanvasSvgDocument" }; };
template <> struct name<Microsoft::Graphics::Canvas::Svg::CanvasSvgNamedElement>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Svg.CanvasSvgNamedElement" }; };
template <> struct name<Microsoft::Graphics::Canvas::Svg::CanvasSvgPaintAttribute>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Svg.CanvasSvgPaintAttribute" }; };
template <> struct name<Microsoft::Graphics::Canvas::Svg::CanvasSvgPathAttribute>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Svg.CanvasSvgPathAttribute" }; };
template <> struct name<Microsoft::Graphics::Canvas::Svg::CanvasSvgPointsAttribute>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Svg.CanvasSvgPointsAttribute" }; };
template <> struct name<Microsoft::Graphics::Canvas::Svg::CanvasSvgStrokeDashArrayAttribute>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Svg.CanvasSvgStrokeDashArrayAttribute" }; };
template <> struct name<Microsoft::Graphics::Canvas::Svg::CanvasSvgTextElement>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Svg.CanvasSvgTextElement" }; };
template <> struct name<Microsoft::Graphics::Canvas::Svg::CanvasSvgAspectAlignment>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Svg.CanvasSvgAspectAlignment" }; };
template <> struct name<Microsoft::Graphics::Canvas::Svg::CanvasSvgAspectScaling>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Svg.CanvasSvgAspectScaling" }; };
template <> struct name<Microsoft::Graphics::Canvas::Svg::CanvasSvgDisplay>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Svg.CanvasSvgDisplay" }; };
template <> struct name<Microsoft::Graphics::Canvas::Svg::CanvasSvgLengthUnits>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Svg.CanvasSvgLengthUnits" }; };
template <> struct name<Microsoft::Graphics::Canvas::Svg::CanvasSvgOverflow>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Svg.CanvasSvgOverflow" }; };
template <> struct name<Microsoft::Graphics::Canvas::Svg::CanvasSvgPaintType>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Svg.CanvasSvgPaintType" }; };
template <> struct name<Microsoft::Graphics::Canvas::Svg::CanvasSvgPathCommand>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Svg.CanvasSvgPathCommand" }; };
template <> struct name<Microsoft::Graphics::Canvas::Svg::CanvasSvgUnits>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Svg.CanvasSvgUnits" }; };
template <> struct name<Microsoft::Graphics::Canvas::Svg::CanvasSvgVisibility>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Svg.CanvasSvgVisibility" }; };
template <> struct guid<Microsoft::Graphics::Canvas::Svg::ICanvasSvgAttribute>{ static constexpr GUID value{ 0x652786A8,0xF3AB,0x4083,{ 0x99,0x1D,0x97,0x48,0xAA,0x86,0xBD,0x6E } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Svg::ICanvasSvgDocument>{ static constexpr GUID value{ 0xA0E34929,0x3551,0x44FE,{ 0xA6,0x70,0xD9,0xB3,0xFD,0x80,0x05,0x16 } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Svg::ICanvasSvgDocumentFactory>{ static constexpr GUID value{ 0xBAB0F16D,0x4050,0x4EF6,{ 0x80,0x22,0x8A,0x07,0xE9,0xE7,0x4A,0x9D } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Svg::ICanvasSvgDocumentStatics>{ static constexpr GUID value{ 0x7740E748,0xCB9A,0x453F,{ 0xA6,0x78,0x8B,0x3B,0x3A,0x72,0x54,0xD3 } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Svg::ICanvasSvgElement>{ static constexpr GUID value{ 0x0775CB81,0xC555,0x45BF,{ 0x97,0x95,0x0F,0xF5,0x91,0x51,0xC3,0xBE } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Svg::ICanvasSvgNamedElement>{ static constexpr GUID value{ 0xD8B7CB94,0x8167,0x495D,{ 0x9C,0x71,0x5E,0x97,0xE5,0xD0,0x8D,0x2B } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Svg::ICanvasSvgPaintAttribute>{ static constexpr GUID value{ 0x653786A8,0xF3AB,0x4083,{ 0x99,0x1D,0x97,0x48,0xAA,0x86,0xBD,0x6E } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Svg::ICanvasSvgPathAttribute>{ static constexpr GUID value{ 0x652786A8,0xF3AB,0x4083,{ 0x99,0x1D,0x97,0x48,0xAB,0x86,0xBD,0x6E } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Svg::ICanvasSvgPointsAttribute>{ static constexpr GUID value{ 0x652786A8,0xF3AB,0x4083,{ 0x99,0x1D,0x97,0x48,0xAA,0x86,0xBD,0x6F } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Svg::ICanvasSvgStrokeDashArrayAttribute>{ static constexpr GUID value{ 0x652786A8,0xF3AB,0x4083,{ 0x99,0x1D,0x97,0x48,0xAA,0x86,0xBD,0x70 } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Svg::ICanvasSvgTextElement>{ static constexpr GUID value{ 0x652786A8,0xF3AB,0x4083,{ 0x99,0x1D,0x97,0x48,0xAA,0x86,0xBD,0x6D } }; };
template <> struct default_interface<Microsoft::Graphics::Canvas::Svg::CanvasSvgDocument>{ using type = Microsoft::Graphics::Canvas::Svg::ICanvasSvgDocument; };
template <> struct default_interface<Microsoft::Graphics::Canvas::Svg::CanvasSvgNamedElement>{ using type = Microsoft::Graphics::Canvas::Svg::ICanvasSvgNamedElement; };
template <> struct default_interface<Microsoft::Graphics::Canvas::Svg::CanvasSvgPaintAttribute>{ using type = Microsoft::Graphics::Canvas::Svg::ICanvasSvgPaintAttribute; };
template <> struct default_interface<Microsoft::Graphics::Canvas::Svg::CanvasSvgPathAttribute>{ using type = Microsoft::Graphics::Canvas::Svg::ICanvasSvgPathAttribute; };
template <> struct default_interface<Microsoft::Graphics::Canvas::Svg::CanvasSvgPointsAttribute>{ using type = Microsoft::Graphics::Canvas::Svg::ICanvasSvgPointsAttribute; };
template <> struct default_interface<Microsoft::Graphics::Canvas::Svg::CanvasSvgStrokeDashArrayAttribute>{ using type = Microsoft::Graphics::Canvas::Svg::ICanvasSvgStrokeDashArrayAttribute; };
template <> struct default_interface<Microsoft::Graphics::Canvas::Svg::CanvasSvgTextElement>{ using type = Microsoft::Graphics::Canvas::Svg::ICanvasSvgTextElement; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgAttribute
{
    Microsoft::Graphics::Canvas::Svg::ICanvasSvgAttribute Clone() const;
    Microsoft::Graphics::Canvas::Svg::CanvasSvgNamedElement GetElement() const;
    Microsoft::Graphics::Canvas::CanvasDevice Device() const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Svg::ICanvasSvgAttribute> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgAttribute<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgDocument
{
    Microsoft::Graphics::Canvas::CanvasDevice Device() const;
    hstring GetXml() const;
    Windows::Foundation::IAsyncAction SaveAsync(Windows::Storage::Streams::IRandomAccessStream const& stream) const;
    void Root(Microsoft::Graphics::Canvas::Svg::CanvasSvgNamedElement const& value) const;
    Microsoft::Graphics::Canvas::Svg::CanvasSvgNamedElement Root() const;
    Microsoft::Graphics::Canvas::Svg::CanvasSvgNamedElement FindElementById(param::hstring const& id) const;
    Microsoft::Graphics::Canvas::Svg::CanvasSvgPaintAttribute CreatePaintAttribute() const;
    Microsoft::Graphics::Canvas::Svg::CanvasSvgPaintAttribute CreatePaintAttribute(Microsoft::Graphics::Canvas::Svg::CanvasSvgPaintType const& paintType, Windows::UI::Color const& color, param::hstring const& id) const;
    Microsoft::Graphics::Canvas::Svg::CanvasSvgPathAttribute CreatePathAttribute() const;
    Microsoft::Graphics::Canvas::Svg::CanvasSvgPathAttribute CreatePathAttribute(array_view<float const> segmentData, array_view<Microsoft::Graphics::Canvas::Svg::CanvasSvgPathCommand const> commands) const;
    Microsoft::Graphics::Canvas::Svg::CanvasSvgPointsAttribute CreatePointsAttribute() const;
    Microsoft::Graphics::Canvas::Svg::CanvasSvgPointsAttribute CreatePointsAttribute(array_view<Windows::Foundation::Numerics::float2 const> points) const;
    Microsoft::Graphics::Canvas::Svg::CanvasSvgStrokeDashArrayAttribute CreateStrokeDashArrayAttribute() const;
    Microsoft::Graphics::Canvas::Svg::CanvasSvgStrokeDashArrayAttribute CreateStrokeDashArrayAttribute(array_view<float const> dashValues, array_view<Microsoft::Graphics::Canvas::Svg::CanvasSvgLengthUnits const> unitValues) const;
    Microsoft::Graphics::Canvas::Svg::CanvasSvgNamedElement LoadElementFromXml(param::hstring const& xmlString) const;
    Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::Svg::CanvasSvgNamedElement> LoadElementAsync(Windows::Storage::Streams::IRandomAccessStream const& stream) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Svg::ICanvasSvgDocument> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgDocument<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgDocumentFactory
{
    Microsoft::Graphics::Canvas::Svg::CanvasSvgDocument CreateEmpty(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Svg::ICanvasSvgDocumentFactory> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgDocumentFactory<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgDocumentStatics
{
    Microsoft::Graphics::Canvas::Svg::CanvasSvgDocument LoadFromXml(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, param::hstring const& xmlString) const;
    Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::Svg::CanvasSvgDocument> LoadAsync(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Storage::Streams::IRandomAccessStream const& stream) const;
    bool IsSupported(Microsoft::Graphics::Canvas::CanvasDevice const& device) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Svg::ICanvasSvgDocumentStatics> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgDocumentStatics<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgElement
{
    Microsoft::Graphics::Canvas::Svg::CanvasSvgDocument ContainingDocument() const;
    Microsoft::Graphics::Canvas::Svg::CanvasSvgNamedElement Parent() const;
    Microsoft::Graphics::Canvas::CanvasDevice Device() const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Svg::ICanvasSvgElement> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgElement<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgNamedElement
{
    void AppendChild(Microsoft::Graphics::Canvas::Svg::ICanvasSvgElement const& child) const;
    Microsoft::Graphics::Canvas::Svg::CanvasSvgNamedElement CreateAndAppendNamedChildElement(param::hstring const& childName) const;
    Microsoft::Graphics::Canvas::Svg::CanvasSvgTextElement CreateAndAppendTextChildElement(param::hstring const& textContent) const;
    Microsoft::Graphics::Canvas::Svg::ICanvasSvgElement FirstChild() const;
    Microsoft::Graphics::Canvas::Svg::ICanvasSvgElement LastChild() const;
    Microsoft::Graphics::Canvas::Svg::ICanvasSvgElement GetPreviousSibling(Microsoft::Graphics::Canvas::Svg::ICanvasSvgElement const& child) const;
    Microsoft::Graphics::Canvas::Svg::ICanvasSvgElement GetNextSibling(Microsoft::Graphics::Canvas::Svg::ICanvasSvgElement const& child) const;
    com_array<hstring> SpecifiedAttributes() const;
    hstring Tag() const;
    bool HasChildren() const;
    void InsertChildBefore(Microsoft::Graphics::Canvas::Svg::ICanvasSvgElement const& child, Microsoft::Graphics::Canvas::Svg::ICanvasSvgElement const& referenceChild) const;
    bool IsAttributeSpecified(param::hstring const& attributeName) const;
    bool IsAttributeSpecified(param::hstring const& attributeName, bool inherited) const;
    void RemoveAttribute(param::hstring const& attributeName) const;
    void RemoveChild(Microsoft::Graphics::Canvas::Svg::ICanvasSvgElement const& child) const;
    void ReplaceChild(Microsoft::Graphics::Canvas::Svg::ICanvasSvgElement const& newChild, Microsoft::Graphics::Canvas::Svg::ICanvasSvgElement const& oldChild) const;
    void SetStringAttribute(param::hstring const& attributeName, param::hstring const& attributeValue) const;
    hstring GetStringAttribute(param::hstring const& attributeName) const;
    void SetAttribute(param::hstring const& attributeName, Microsoft::Graphics::Canvas::Svg::ICanvasSvgAttribute const& attributeValue) const;
    Microsoft::Graphics::Canvas::Svg::ICanvasSvgAttribute GetAttribute(param::hstring const& attributeName) const;
    void SetIdAttribute(param::hstring const& attributeName, param::hstring const& attributeValue) const;
    hstring GetIdAttribute(param::hstring const& attributeName) const;
    void SetFloatAttribute(param::hstring const& attributeName, float attributeValue) const;
    float GetFloatAttribute(param::hstring const& attributeName) const;
    void SetColorAttribute(param::hstring const& attributeName, Windows::UI::Color const& attributeValue) const;
    Windows::UI::Color GetColorAttribute(param::hstring const& attributeName) const;
    void SetFilledRegionDeterminationAttribute(param::hstring const& attributeName, Microsoft::Graphics::Canvas::Geometry::CanvasFilledRegionDetermination const& attributeValue) const;
    Microsoft::Graphics::Canvas::Geometry::CanvasFilledRegionDetermination GetFilledRegionDeterminationAttribute(param::hstring const& attributeName) const;
    void SetDisplayAttribute(param::hstring const& attributeName, Microsoft::Graphics::Canvas::Svg::CanvasSvgDisplay const& attributeValue) const;
    Microsoft::Graphics::Canvas::Svg::CanvasSvgDisplay GetDisplayAttribute(param::hstring const& attributeName) const;
    void SetOverflowAttribute(param::hstring const& attributeName, Microsoft::Graphics::Canvas::Svg::CanvasSvgOverflow const& attributeValue) const;
    Microsoft::Graphics::Canvas::Svg::CanvasSvgOverflow GetOverflowAttribute(param::hstring const& attributeName) const;
    void SetCapStyleAttribute(param::hstring const& attributeName, Microsoft::Graphics::Canvas::Geometry::CanvasCapStyle const& attributeValue) const;
    Microsoft::Graphics::Canvas::Geometry::CanvasCapStyle GetCapStyleAttribute(param::hstring const& attributeName) const;
    void SetLineJoinAttribute(param::hstring const& attributeName, Microsoft::Graphics::Canvas::Geometry::CanvasLineJoin const& attributeValue) const;
    Microsoft::Graphics::Canvas::Geometry::CanvasLineJoin GetLineJoinAttribute(param::hstring const& attributeName) const;
    void SetVisibilityAttribute(param::hstring const& attributeName, Microsoft::Graphics::Canvas::Svg::CanvasSvgVisibility const& attributeValue) const;
    Microsoft::Graphics::Canvas::Svg::CanvasSvgVisibility GetVisibilityAttribute(param::hstring const& attributeName) const;
    void SetTransformAttribute(param::hstring const& attributeName, Windows::Foundation::Numerics::float3x2 const& attributeValue) const;
    Windows::Foundation::Numerics::float3x2 GetTransformAttribute(param::hstring const& attributeName) const;
    void SetUnitsAttribute(param::hstring const& attributeName, Microsoft::Graphics::Canvas::Svg::CanvasSvgUnits const& attributeValue) const;
    Microsoft::Graphics::Canvas::Svg::CanvasSvgUnits GetUnitsAttribute(param::hstring const& attributeName) const;
    void SetEdgeBehaviorAttribute(param::hstring const& attributeName, Microsoft::Graphics::Canvas::CanvasEdgeBehavior const& attributeValue) const;
    Microsoft::Graphics::Canvas::CanvasEdgeBehavior GetEdgeBehaviorAttribute(param::hstring const& attributeName) const;
    void SetRectangleAttribute(param::hstring const& attributeName, Windows::Foundation::Rect const& attributeValue) const;
    Windows::Foundation::Rect GetRectangleAttribute(param::hstring const& attributeName) const;
    void SetLengthAttribute(param::hstring const& attributeName, float value, Microsoft::Graphics::Canvas::Svg::CanvasSvgLengthUnits const& units) const;
    float GetLengthAttribute(param::hstring const& attributeName, Microsoft::Graphics::Canvas::Svg::CanvasSvgLengthUnits& units) const;
    void SetAspectRatioAttribute(param::hstring const& attributeName, Microsoft::Graphics::Canvas::Svg::CanvasSvgAspectAlignment const& alignment, Microsoft::Graphics::Canvas::Svg::CanvasSvgAspectScaling const& meetOrSlice) const;
    Microsoft::Graphics::Canvas::Svg::CanvasSvgAspectAlignment GetAspectRatioAttribute(param::hstring const& attributeName, Microsoft::Graphics::Canvas::Svg::CanvasSvgAspectScaling& meetOrSlice) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Svg::ICanvasSvgNamedElement> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgNamedElement<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgPaintAttribute
{
    void PaintType(Microsoft::Graphics::Canvas::Svg::CanvasSvgPaintType const& value) const;
    Microsoft::Graphics::Canvas::Svg::CanvasSvgPaintType PaintType() const;
    void Color(Windows::UI::Color const& value) const;
    Windows::UI::Color Color() const;
    void Id(param::hstring const& value) const;
    hstring Id() const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Svg::ICanvasSvgPaintAttribute> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgPaintAttribute<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgPathAttribute
{
    Microsoft::Graphics::Canvas::Geometry::CanvasGeometry CreatePathGeometry() const;
    Microsoft::Graphics::Canvas::Geometry::CanvasGeometry CreatePathGeometry(Microsoft::Graphics::Canvas::Geometry::CanvasFilledRegionDetermination const& fill) const;
    com_array<Microsoft::Graphics::Canvas::Svg::CanvasSvgPathCommand> Commands() const;
    com_array<Microsoft::Graphics::Canvas::Svg::CanvasSvgPathCommand> GetCommands(int32_t startIndex, int32_t elementCount) const;
    com_array<float> SegmentData() const;
    com_array<float> GetSegmentData(int32_t startIndex, int32_t elementCount) const;
    void RemoveCommandsAtEnd(int32_t commandsCount) const;
    void RemoveSegmentDataAtEnd(int32_t commandsCount) const;
    void SetCommands(int32_t startIndex, array_view<Microsoft::Graphics::Canvas::Svg::CanvasSvgPathCommand const> commands) const;
    void SetSegmentData(int32_t startIndex, array_view<float const> segmentData) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Svg::ICanvasSvgPathAttribute> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgPathAttribute<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgPointsAttribute
{
    com_array<Windows::Foundation::Numerics::float2> Points() const;
    com_array<Windows::Foundation::Numerics::float2> GetPoints(int32_t startIndex, int32_t elementCount) const;
    void RemovePointsAtEnd(int32_t pointCount) const;
    void SetPoints(int32_t startIndex, array_view<Windows::Foundation::Numerics::float2 const> points) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Svg::ICanvasSvgPointsAttribute> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgPointsAttribute<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgStrokeDashArrayAttribute
{
    com_array<float> GetDashes() const;
    com_array<float> GetDashes(int32_t startIndex, int32_t elementCount, com_array<Microsoft::Graphics::Canvas::Svg::CanvasSvgLengthUnits>& outputUnitsElements) const;
    void RemoveDashesAtEnd(int32_t dashCount) const;
    void SetDashes(int32_t startIndex, array_view<float const> dashes) const;
    void SetDashes(int32_t startIndex, array_view<float const> dashes, Microsoft::Graphics::Canvas::Svg::CanvasSvgLengthUnits const& units) const;
    void SetDashes(int32_t startIndex, array_view<float const> dashValues, array_view<Microsoft::Graphics::Canvas::Svg::CanvasSvgLengthUnits const> unitValues) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Svg::ICanvasSvgStrokeDashArrayAttribute> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgStrokeDashArrayAttribute<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgTextElement
{
    void Text(param::hstring const& value) const;
    hstring Text() const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Svg::ICanvasSvgTextElement> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgTextElement<D>; };

template <> struct abi<Microsoft::Graphics::Canvas::Svg::ICanvasSvgAttribute>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Clone(::IUnknown** result) = 0;
    virtual HRESULT __stdcall GetElement(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Device(::IUnknown** value) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Svg::ICanvasSvgDocument>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Device(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetXml(HSTRING* xmlString) = 0;
    virtual HRESULT __stdcall SaveAsync(::IUnknown* stream, ::IUnknown** asyncAction) = 0;
    virtual HRESULT __stdcall put_Root(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Root(::IUnknown** value) = 0;
    virtual HRESULT __stdcall FindElementById(HSTRING id, ::IUnknown** element) = 0;
    virtual HRESULT __stdcall CreatePaintAttributeWithDefaults(::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreatePaintAttribute(Microsoft::Graphics::Canvas::Svg::CanvasSvgPaintType paintType, struct_of<4> color, HSTRING id, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreatePathAttributeWithDefaults(::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreatePathAttribute(uint32_t __segmentDataSize, float* segmentData, uint32_t __commandsSize, Microsoft::Graphics::Canvas::Svg::CanvasSvgPathCommand* commands, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreatePointsAttributeWithDefaults(::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreatePointsAttribute(uint32_t __pointsSize, Windows::Foundation::Numerics::float2* points, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateStrokeDashArrayAttributeWithDefaults(::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateStrokeDashArrayAttribute(uint32_t __dashValuesSize, float* dashValues, uint32_t __unitValuesSize, Microsoft::Graphics::Canvas::Svg::CanvasSvgLengthUnits* unitValues, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall LoadElementFromXml(HSTRING xmlString, ::IUnknown** svgElement) = 0;
    virtual HRESULT __stdcall LoadElementAsync(::IUnknown* stream, ::IUnknown** svgElement) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Svg::ICanvasSvgDocumentFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateEmpty(::IUnknown* resourceCreator, ::IUnknown** canvasSvgDocument) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Svg::ICanvasSvgDocumentStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall LoadFromXml(::IUnknown* resourceCreator, HSTRING xmlString, ::IUnknown** svgDocument) = 0;
    virtual HRESULT __stdcall LoadAsync(::IUnknown* resourceCreator, ::IUnknown* stream, ::IUnknown** svgDocument) = 0;
    virtual HRESULT __stdcall IsSupported(::IUnknown* device, bool* value) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Svg::ICanvasSvgElement>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ContainingDocument(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Parent(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Device(::IUnknown** value) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Svg::ICanvasSvgNamedElement>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall AppendChild(::IUnknown* child) = 0;
    virtual HRESULT __stdcall CreateAndAppendNamedChildElement(HSTRING childName, ::IUnknown** childElement) = 0;
    virtual HRESULT __stdcall CreateAndAppendTextChildElement(HSTRING textContent, ::IUnknown** childElement) = 0;
    virtual HRESULT __stdcall get_FirstChild(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_LastChild(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetPreviousSibling(::IUnknown* child, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetNextSibling(::IUnknown* child, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_SpecifiedAttributes(uint32_t* __valueElementsSize, HSTRING** valueElements) = 0;
    virtual HRESULT __stdcall get_Tag(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_HasChildren(bool* value) = 0;
    virtual HRESULT __stdcall InsertChildBefore(::IUnknown* child, ::IUnknown* referenceChild) = 0;
    virtual HRESULT __stdcall IsAttributeSpecified(HSTRING attributeName, bool* value) = 0;
    virtual HRESULT __stdcall IsAttributeSpecifiedWithInherhited(HSTRING attributeName, bool inherited, bool* value) = 0;
    virtual HRESULT __stdcall RemoveAttribute(HSTRING attributeName) = 0;
    virtual HRESULT __stdcall RemoveChild(::IUnknown* child) = 0;
    virtual HRESULT __stdcall ReplaceChild(::IUnknown* newChild, ::IUnknown* oldChild) = 0;
    virtual HRESULT __stdcall SetStringAttribute(HSTRING attributeName, HSTRING attributeValue) = 0;
    virtual HRESULT __stdcall GetStringAttribute(HSTRING attributeName, HSTRING* attributeValue) = 0;
    virtual HRESULT __stdcall SetAttribute(HSTRING attributeName, ::IUnknown* attributeValue) = 0;
    virtual HRESULT __stdcall GetAttribute(HSTRING attributeName, ::IUnknown** attributeValue) = 0;
    virtual HRESULT __stdcall SetIdAttribute(HSTRING attributeName, HSTRING attributeValue) = 0;
    virtual HRESULT __stdcall GetIdAttribute(HSTRING attributeName, HSTRING* attributeValue) = 0;
    virtual HRESULT __stdcall SetFloatAttribute(HSTRING attributeName, float attributeValue) = 0;
    virtual HRESULT __stdcall GetFloatAttribute(HSTRING attributeName, float* attributeValue) = 0;
    virtual HRESULT __stdcall SetColorAttribute(HSTRING attributeName, struct_of<4> attributeValue) = 0;
    virtual HRESULT __stdcall GetColorAttribute(HSTRING attributeName, struct_of<4>* attributeValue) = 0;
    virtual HRESULT __stdcall SetFilledRegionDeterminationAttribute(HSTRING attributeName, Microsoft::Graphics::Canvas::Geometry::CanvasFilledRegionDetermination attributeValue) = 0;
    virtual HRESULT __stdcall GetFilledRegionDeterminationAttribute(HSTRING attributeName, Microsoft::Graphics::Canvas::Geometry::CanvasFilledRegionDetermination* attributeValue) = 0;
    virtual HRESULT __stdcall SetDisplayAttribute(HSTRING attributeName, Microsoft::Graphics::Canvas::Svg::CanvasSvgDisplay attributeValue) = 0;
    virtual HRESULT __stdcall GetDisplayAttribute(HSTRING attributeName, Microsoft::Graphics::Canvas::Svg::CanvasSvgDisplay* attributeValue) = 0;
    virtual HRESULT __stdcall SetOverflowAttribute(HSTRING attributeName, Microsoft::Graphics::Canvas::Svg::CanvasSvgOverflow attributeValue) = 0;
    virtual HRESULT __stdcall GetOverflowAttribute(HSTRING attributeName, Microsoft::Graphics::Canvas::Svg::CanvasSvgOverflow* attributeValue) = 0;
    virtual HRESULT __stdcall SetCapStyleAttribute(HSTRING attributeName, Microsoft::Graphics::Canvas::Geometry::CanvasCapStyle attributeValue) = 0;
    virtual HRESULT __stdcall GetCapStyleAttribute(HSTRING attributeName, Microsoft::Graphics::Canvas::Geometry::CanvasCapStyle* attributeValue) = 0;
    virtual HRESULT __stdcall SetLineJoinAttribute(HSTRING attributeName, Microsoft::Graphics::Canvas::Geometry::CanvasLineJoin attributeValue) = 0;
    virtual HRESULT __stdcall GetLineJoinAttribute(HSTRING attributeName, Microsoft::Graphics::Canvas::Geometry::CanvasLineJoin* attributeValue) = 0;
    virtual HRESULT __stdcall SetVisibilityAttribute(HSTRING attributeName, Microsoft::Graphics::Canvas::Svg::CanvasSvgVisibility attributeValue) = 0;
    virtual HRESULT __stdcall GetVisibilityAttribute(HSTRING attributeName, Microsoft::Graphics::Canvas::Svg::CanvasSvgVisibility* attributeValue) = 0;
    virtual HRESULT __stdcall SetTransformAttribute(HSTRING attributeName, Windows::Foundation::Numerics::float3x2 attributeValue) = 0;
    virtual HRESULT __stdcall GetTransformAttribute(HSTRING attributeName, Windows::Foundation::Numerics::float3x2* attributeValue) = 0;
    virtual HRESULT __stdcall SetUnitsAttribute(HSTRING attributeName, Microsoft::Graphics::Canvas::Svg::CanvasSvgUnits attributeValue) = 0;
    virtual HRESULT __stdcall GetUnitsAttribute(HSTRING attributeName, Microsoft::Graphics::Canvas::Svg::CanvasSvgUnits* attributeValue) = 0;
    virtual HRESULT __stdcall SetEdgeBehaviorAttribute(HSTRING attributeName, Microsoft::Graphics::Canvas::CanvasEdgeBehavior attributeValue) = 0;
    virtual HRESULT __stdcall GetEdgeBehaviorAttribute(HSTRING attributeName, Microsoft::Graphics::Canvas::CanvasEdgeBehavior* attributeValue) = 0;
    virtual HRESULT __stdcall SetRectangleAttribute(HSTRING attributeName, Windows::Foundation::Rect attributeValue) = 0;
    virtual HRESULT __stdcall GetRectangleAttribute(HSTRING attributeName, Windows::Foundation::Rect* attributeValue) = 0;
    virtual HRESULT __stdcall SetLengthAttribute(HSTRING attributeName, float value, Microsoft::Graphics::Canvas::Svg::CanvasSvgLengthUnits units) = 0;
    virtual HRESULT __stdcall GetLengthAttribute(HSTRING attributeName, Microsoft::Graphics::Canvas::Svg::CanvasSvgLengthUnits* units, float* value) = 0;
    virtual HRESULT __stdcall SetAspectRatioAttribute(HSTRING attributeName, Microsoft::Graphics::Canvas::Svg::CanvasSvgAspectAlignment alignment, Microsoft::Graphics::Canvas::Svg::CanvasSvgAspectScaling meetOrSlice) = 0;
    virtual HRESULT __stdcall GetAspectRatioAttribute(HSTRING attributeName, Microsoft::Graphics::Canvas::Svg::CanvasSvgAspectScaling* meetOrSlice, Microsoft::Graphics::Canvas::Svg::CanvasSvgAspectAlignment* alignment) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Svg::ICanvasSvgPaintAttribute>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall put_PaintType(Microsoft::Graphics::Canvas::Svg::CanvasSvgPaintType value) = 0;
    virtual HRESULT __stdcall get_PaintType(Microsoft::Graphics::Canvas::Svg::CanvasSvgPaintType* value) = 0;
    virtual HRESULT __stdcall put_Color(struct_of<4> value) = 0;
    virtual HRESULT __stdcall get_Color(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall put_Id(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Id(HSTRING* value) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Svg::ICanvasSvgPathAttribute>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreatePathGeometry(::IUnknown** outputGeometry) = 0;
    virtual HRESULT __stdcall CreatePathGeometryWithFill(Microsoft::Graphics::Canvas::Geometry::CanvasFilledRegionDetermination fill, ::IUnknown** outputGeometry) = 0;
    virtual HRESULT __stdcall get_Commands(uint32_t* __valueElementsSize, Microsoft::Graphics::Canvas::Svg::CanvasSvgPathCommand** valueElements) = 0;
    virtual HRESULT __stdcall GetCommands(int32_t startIndex, int32_t elementCount, uint32_t* __outputValueElementsSize, Microsoft::Graphics::Canvas::Svg::CanvasSvgPathCommand** outputValueElements) = 0;
    virtual HRESULT __stdcall get_SegmentData(uint32_t* __valueElementsSize, float** valueElements) = 0;
    virtual HRESULT __stdcall GetSegmentData(int32_t startIndex, int32_t elementCount, uint32_t* __outputValueElementsSize, float** outputValueElements) = 0;
    virtual HRESULT __stdcall RemoveCommandsAtEnd(int32_t commandsCount) = 0;
    virtual HRESULT __stdcall RemoveSegmentDataAtEnd(int32_t commandsCount) = 0;
    virtual HRESULT __stdcall SetCommands(int32_t startIndex, uint32_t __commandsSize, Microsoft::Graphics::Canvas::Svg::CanvasSvgPathCommand* commands) = 0;
    virtual HRESULT __stdcall SetSegmentData(int32_t startIndex, uint32_t __segmentDataSize, float* segmentData) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Svg::ICanvasSvgPointsAttribute>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Points(uint32_t* __valueElementsSize, Windows::Foundation::Numerics::float2** valueElements) = 0;
    virtual HRESULT __stdcall GetPoints(int32_t startIndex, int32_t elementCount, uint32_t* __outputValueElementsSize, Windows::Foundation::Numerics::float2** outputValueElements) = 0;
    virtual HRESULT __stdcall RemovePointsAtEnd(int32_t pointCount) = 0;
    virtual HRESULT __stdcall SetPoints(int32_t startIndex, uint32_t __pointsSize, Windows::Foundation::Numerics::float2* points) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Svg::ICanvasSvgStrokeDashArrayAttribute>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDashes(uint32_t* __valueElementsSize, float** valueElements) = 0;
    virtual HRESULT __stdcall GetDashesWithUnits(int32_t startIndex, int32_t elementCount, uint32_t* __outputUnitsElementsSize, Microsoft::Graphics::Canvas::Svg::CanvasSvgLengthUnits** outputUnitsElements, uint32_t* __outputValueElementsSize, float** outputValueElements) = 0;
    virtual HRESULT __stdcall RemoveDashesAtEnd(int32_t dashCount) = 0;
    virtual HRESULT __stdcall SetDashes(int32_t startIndex, uint32_t __dashesSize, float* dashes) = 0;
    virtual HRESULT __stdcall SetDashesWithUnit(int32_t startIndex, uint32_t __dashesSize, float* dashes, Microsoft::Graphics::Canvas::Svg::CanvasSvgLengthUnits units) = 0;
    virtual HRESULT __stdcall SetDashesWithUnits(int32_t startIndex, uint32_t __dashValuesSize, float* dashValues, uint32_t __unitValuesSize, Microsoft::Graphics::Canvas::Svg::CanvasSvgLengthUnits* unitValues) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Svg::ICanvasSvgTextElement>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall put_Text(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Text(HSTRING* value) = 0;
};};

}
