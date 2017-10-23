// C++/WinRT v1.0.170906.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Microsoft::Graphics::Canvas {

struct CanvasDevice;
struct ICanvasResourceCreator;

}

WINRT_EXPORT namespace winrt::Microsoft::Graphics::Canvas::Text {

enum class CanvasGlyphOrientation;
enum class CanvasTextMeasuringMode;
struct CanvasFontFace;
struct CanvasGlyph;
struct CanvasTextLayout;

}

WINRT_EXPORT namespace winrt::Windows::UI::Input::Inking {

struct InkStroke;

}

WINRT_EXPORT namespace winrt::Microsoft::Graphics::Canvas::Geometry {

enum class CanvasArcSize : int32_t
{
    Small = 0,
    Large = 1,
};

enum class CanvasCapStyle : int32_t
{
    Flat = 0,
    Square = 1,
    Round = 2,
    Triangle = 3,
};

enum class CanvasDashStyle : int32_t
{
    Solid = 0,
    Dash = 1,
    Dot = 2,
    DashDot = 3,
    DashDotDot = 4,
};

enum class CanvasFigureFill : int32_t
{
    Default = 0,
    DoesNotAffectFills = 1,
};

enum class CanvasFigureLoop : int32_t
{
    Open = 0,
    Closed = 1,
};

enum class CanvasFigureSegmentOptions : uint32_t
{
    None = 0x0,
    ForceUnstroked = 0x1,
    ForceRoundLineJoin = 0x2,
};

enum class CanvasFilledRegionDetermination : int32_t
{
    Alternate = 0,
    Winding = 1,
};

enum class CanvasGeometryCombine : int32_t
{
    Union = 0,
    Intersect = 1,
    Xor = 2,
    Exclude = 3,
};

enum class CanvasGeometryRelation : int32_t
{
    Disjoint = 0,
    Contained = 1,
    Contains = 2,
    Overlap = 3,
};

enum class CanvasGeometrySimplification : int32_t
{
    CubicsAndLines = 0,
    Lines = 1,
};

enum class CanvasGradientMeshPatchEdge : int32_t
{
    Aliased = 0,
    Antialiased = 1,
    AliasedAndInflated = 2,
};

enum class CanvasLineJoin : int32_t
{
    Miter = 0,
    Bevel = 1,
    Round = 2,
    MiterOrBevel = 3,
};

enum class CanvasStrokeTransformBehavior : int32_t
{
    Normal = 0,
    Fixed = 1,
    Hairline = 2,
};

enum class CanvasSweepDirection : int32_t
{
    CounterClockwise = 0,
    Clockwise = 1,
};

struct ICanvasCachedGeometry;
struct ICanvasCachedGeometryStatics;
struct ICanvasGeometry;
struct ICanvasGeometryStatics;
struct ICanvasGradientMesh;
struct ICanvasGradientMeshFactory;
struct ICanvasGradientMeshStatics;
struct ICanvasPathBuilder;
struct ICanvasPathBuilderFactory;
struct ICanvasPathReceiver;
struct ICanvasStrokeStyle;
struct CanvasCachedGeometry;
struct CanvasGeometry;
struct CanvasGradientMesh;
struct CanvasPathBuilder;
struct CanvasStrokeStyle;
struct CanvasGradientMeshPatch;
struct CanvasTriangleVertices;

}

namespace winrt::impl {

template<> struct is_enum_flag<Microsoft::Graphics::Canvas::Geometry::CanvasFigureSegmentOptions> : std::true_type {};
template <> struct category<Microsoft::Graphics::Canvas::Geometry::ICanvasCachedGeometry>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Geometry::ICanvasCachedGeometryStatics>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Geometry::ICanvasGeometryStatics>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Geometry::ICanvasGradientMesh>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Geometry::ICanvasGradientMeshFactory>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Geometry::ICanvasGradientMeshStatics>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Geometry::ICanvasPathBuilder>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Geometry::ICanvasPathBuilderFactory>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Geometry::ICanvasPathReceiver>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Geometry::ICanvasStrokeStyle>{ using type = interface_category; };
template <> struct category<Microsoft::Graphics::Canvas::Geometry::CanvasCachedGeometry>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::Geometry::CanvasGeometry>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::Geometry::CanvasGradientMesh>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::Geometry::CanvasPathBuilder>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle>{ using type = class_category; };
template <> struct category<Microsoft::Graphics::Canvas::Geometry::CanvasArcSize>{ using type = enum_category; };
template <> struct category<Microsoft::Graphics::Canvas::Geometry::CanvasCapStyle>{ using type = enum_category; };
template <> struct category<Microsoft::Graphics::Canvas::Geometry::CanvasDashStyle>{ using type = enum_category; };
template <> struct category<Microsoft::Graphics::Canvas::Geometry::CanvasFigureFill>{ using type = enum_category; };
template <> struct category<Microsoft::Graphics::Canvas::Geometry::CanvasFigureLoop>{ using type = enum_category; };
template <> struct category<Microsoft::Graphics::Canvas::Geometry::CanvasFigureSegmentOptions>{ using type = enum_category; };
template <> struct category<Microsoft::Graphics::Canvas::Geometry::CanvasFilledRegionDetermination>{ using type = enum_category; };
template <> struct category<Microsoft::Graphics::Canvas::Geometry::CanvasGeometryCombine>{ using type = enum_category; };
template <> struct category<Microsoft::Graphics::Canvas::Geometry::CanvasGeometryRelation>{ using type = enum_category; };
template <> struct category<Microsoft::Graphics::Canvas::Geometry::CanvasGeometrySimplification>{ using type = enum_category; };
template <> struct category<Microsoft::Graphics::Canvas::Geometry::CanvasGradientMeshPatchEdge>{ using type = enum_category; };
template <> struct category<Microsoft::Graphics::Canvas::Geometry::CanvasLineJoin>{ using type = enum_category; };
template <> struct category<Microsoft::Graphics::Canvas::Geometry::CanvasStrokeTransformBehavior>{ using type = enum_category; };
template <> struct category<Microsoft::Graphics::Canvas::Geometry::CanvasSweepDirection>{ using type = enum_category; };
template <> struct category<Microsoft::Graphics::Canvas::Geometry::CanvasGradientMeshPatch>{ using type = struct_category<Windows::Foundation::Numerics::float2,Windows::Foundation::Numerics::float2,Windows::Foundation::Numerics::float2,Windows::Foundation::Numerics::float2,Windows::Foundation::Numerics::float2,Windows::Foundation::Numerics::float2,Windows::Foundation::Numerics::float2,Windows::Foundation::Numerics::float2,Windows::Foundation::Numerics::float2,Windows::Foundation::Numerics::float2,Windows::Foundation::Numerics::float2,Windows::Foundation::Numerics::float2,Windows::Foundation::Numerics::float2,Windows::Foundation::Numerics::float2,Windows::Foundation::Numerics::float2,Windows::Foundation::Numerics::float2,Windows::Foundation::Numerics::float4,Windows::Foundation::Numerics::float4,Windows::Foundation::Numerics::float4,Windows::Foundation::Numerics::float4,Microsoft::Graphics::Canvas::Geometry::CanvasGradientMeshPatchEdge,Microsoft::Graphics::Canvas::Geometry::CanvasGradientMeshPatchEdge,Microsoft::Graphics::Canvas::Geometry::CanvasGradientMeshPatchEdge,Microsoft::Graphics::Canvas::Geometry::CanvasGradientMeshPatchEdge>; };
template <> struct category<Microsoft::Graphics::Canvas::Geometry::CanvasTriangleVertices>{ using type = struct_category<Windows::Foundation::Numerics::float2,Windows::Foundation::Numerics::float2,Windows::Foundation::Numerics::float2>; };
template <> struct name<Microsoft::Graphics::Canvas::Geometry::ICanvasCachedGeometry>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Geometry.ICanvasCachedGeometry" }; };
template <> struct name<Microsoft::Graphics::Canvas::Geometry::ICanvasCachedGeometryStatics>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Geometry.ICanvasCachedGeometryStatics" }; };
template <> struct name<Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Geometry.ICanvasGeometry" }; };
template <> struct name<Microsoft::Graphics::Canvas::Geometry::ICanvasGeometryStatics>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Geometry.ICanvasGeometryStatics" }; };
template <> struct name<Microsoft::Graphics::Canvas::Geometry::ICanvasGradientMesh>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Geometry.ICanvasGradientMesh" }; };
template <> struct name<Microsoft::Graphics::Canvas::Geometry::ICanvasGradientMeshFactory>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Geometry.ICanvasGradientMeshFactory" }; };
template <> struct name<Microsoft::Graphics::Canvas::Geometry::ICanvasGradientMeshStatics>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Geometry.ICanvasGradientMeshStatics" }; };
template <> struct name<Microsoft::Graphics::Canvas::Geometry::ICanvasPathBuilder>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Geometry.ICanvasPathBuilder" }; };
template <> struct name<Microsoft::Graphics::Canvas::Geometry::ICanvasPathBuilderFactory>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Geometry.ICanvasPathBuilderFactory" }; };
template <> struct name<Microsoft::Graphics::Canvas::Geometry::ICanvasPathReceiver>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Geometry.ICanvasPathReceiver" }; };
template <> struct name<Microsoft::Graphics::Canvas::Geometry::ICanvasStrokeStyle>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Geometry.ICanvasStrokeStyle" }; };
template <> struct name<Microsoft::Graphics::Canvas::Geometry::CanvasCachedGeometry>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Geometry.CanvasCachedGeometry" }; };
template <> struct name<Microsoft::Graphics::Canvas::Geometry::CanvasGeometry>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Geometry.CanvasGeometry" }; };
template <> struct name<Microsoft::Graphics::Canvas::Geometry::CanvasGradientMesh>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Geometry.CanvasGradientMesh" }; };
template <> struct name<Microsoft::Graphics::Canvas::Geometry::CanvasPathBuilder>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Geometry.CanvasPathBuilder" }; };
template <> struct name<Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Geometry.CanvasStrokeStyle" }; };
template <> struct name<Microsoft::Graphics::Canvas::Geometry::CanvasArcSize>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Geometry.CanvasArcSize" }; };
template <> struct name<Microsoft::Graphics::Canvas::Geometry::CanvasCapStyle>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Geometry.CanvasCapStyle" }; };
template <> struct name<Microsoft::Graphics::Canvas::Geometry::CanvasDashStyle>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Geometry.CanvasDashStyle" }; };
template <> struct name<Microsoft::Graphics::Canvas::Geometry::CanvasFigureFill>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Geometry.CanvasFigureFill" }; };
template <> struct name<Microsoft::Graphics::Canvas::Geometry::CanvasFigureLoop>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Geometry.CanvasFigureLoop" }; };
template <> struct name<Microsoft::Graphics::Canvas::Geometry::CanvasFigureSegmentOptions>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Geometry.CanvasFigureSegmentOptions" }; };
template <> struct name<Microsoft::Graphics::Canvas::Geometry::CanvasFilledRegionDetermination>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Geometry.CanvasFilledRegionDetermination" }; };
template <> struct name<Microsoft::Graphics::Canvas::Geometry::CanvasGeometryCombine>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Geometry.CanvasGeometryCombine" }; };
template <> struct name<Microsoft::Graphics::Canvas::Geometry::CanvasGeometryRelation>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Geometry.CanvasGeometryRelation" }; };
template <> struct name<Microsoft::Graphics::Canvas::Geometry::CanvasGeometrySimplification>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Geometry.CanvasGeometrySimplification" }; };
template <> struct name<Microsoft::Graphics::Canvas::Geometry::CanvasGradientMeshPatchEdge>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Geometry.CanvasGradientMeshPatchEdge" }; };
template <> struct name<Microsoft::Graphics::Canvas::Geometry::CanvasLineJoin>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Geometry.CanvasLineJoin" }; };
template <> struct name<Microsoft::Graphics::Canvas::Geometry::CanvasStrokeTransformBehavior>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Geometry.CanvasStrokeTransformBehavior" }; };
template <> struct name<Microsoft::Graphics::Canvas::Geometry::CanvasSweepDirection>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Geometry.CanvasSweepDirection" }; };
template <> struct name<Microsoft::Graphics::Canvas::Geometry::CanvasGradientMeshPatch>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Geometry.CanvasGradientMeshPatch" }; };
template <> struct name<Microsoft::Graphics::Canvas::Geometry::CanvasTriangleVertices>{ static constexpr auto & value{ L"Microsoft.Graphics.Canvas.Geometry.CanvasTriangleVertices" }; };
template <> struct guid<Microsoft::Graphics::Canvas::Geometry::ICanvasCachedGeometry>{ static constexpr GUID value{ 0xBA6CB114,0xE1A1,0x448D,{ 0xAB,0x7C,0x8D,0x2B,0x92,0x67,0x41,0x19 } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Geometry::ICanvasCachedGeometryStatics>{ static constexpr GUID value{ 0x80BA1060,0xA9D7,0x41BA,{ 0x93,0x72,0xEC,0x3F,0xC1,0x74,0x4E,0x5D } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry>{ static constexpr GUID value{ 0x74EA89FA,0xC87C,0x4D0D,{ 0x90,0x57,0x27,0x43,0xB8,0xDB,0x67,0xEE } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Geometry::ICanvasGeometryStatics>{ static constexpr GUID value{ 0xD94E33CF,0xCD59,0x46F2,{ 0x8D,0xF4,0x55,0x06,0x6A,0xAB,0xFD,0x56 } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Geometry::ICanvasGradientMesh>{ static constexpr GUID value{ 0x6BFC2BF1,0x0A7A,0x449C,{ 0xA7,0xEF,0x67,0x06,0x32,0x1B,0x0C,0x1A } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Geometry::ICanvasGradientMeshFactory>{ static constexpr GUID value{ 0x4756492D,0x251E,0x421D,{ 0x83,0x4D,0x87,0xEC,0x26,0x0D,0x5E,0x4D } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Geometry::ICanvasGradientMeshStatics>{ static constexpr GUID value{ 0x44027640,0x3EAB,0x4199,{ 0xAA,0x3B,0x64,0x48,0x90,0xD0,0x12,0x3D } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Geometry::ICanvasPathBuilder>{ static constexpr GUID value{ 0xBCF5822F,0x8127,0x4E5C,{ 0x96,0xB8,0x29,0x98,0x3B,0x91,0x55,0x41 } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Geometry::ICanvasPathBuilderFactory>{ static constexpr GUID value{ 0xAC2BEE14,0xEFD1,0x4343,{ 0x8E,0x53,0xBA,0x62,0x15,0x3D,0x89,0x66 } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Geometry::ICanvasPathReceiver>{ static constexpr GUID value{ 0x70E65373,0x7FB3,0x4645,{ 0x8B,0x6D,0xF6,0x16,0xD1,0xB9,0xA9,0xD7 } }; };
template <> struct guid<Microsoft::Graphics::Canvas::Geometry::ICanvasStrokeStyle>{ static constexpr GUID value{ 0xFD3E1CD2,0x6019,0x40A1,{ 0xB3,0x15,0x26,0x7E,0xEF,0x6C,0x2A,0xEB } }; };
template <> struct default_interface<Microsoft::Graphics::Canvas::Geometry::CanvasCachedGeometry>{ using type = Microsoft::Graphics::Canvas::Geometry::ICanvasCachedGeometry; };
template <> struct default_interface<Microsoft::Graphics::Canvas::Geometry::CanvasGeometry>{ using type = Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry; };
template <> struct default_interface<Microsoft::Graphics::Canvas::Geometry::CanvasGradientMesh>{ using type = Microsoft::Graphics::Canvas::Geometry::ICanvasGradientMesh; };
template <> struct default_interface<Microsoft::Graphics::Canvas::Geometry::CanvasPathBuilder>{ using type = Microsoft::Graphics::Canvas::Geometry::ICanvasPathBuilder; };
template <> struct default_interface<Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle>{ using type = Microsoft::Graphics::Canvas::Geometry::ICanvasStrokeStyle; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Geometry_ICanvasCachedGeometry
{
    Microsoft::Graphics::Canvas::CanvasDevice Device() const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Geometry::ICanvasCachedGeometry> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Geometry_ICanvasCachedGeometry<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Geometry_ICanvasCachedGeometryStatics
{
    Microsoft::Graphics::Canvas::Geometry::CanvasCachedGeometry CreateFill(Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& geometry) const;
    Microsoft::Graphics::Canvas::Geometry::CanvasCachedGeometry CreateFill(Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& geometry, float flatteningTolerance) const;
    Microsoft::Graphics::Canvas::Geometry::CanvasCachedGeometry CreateStroke(Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& geometry, float strokeWidth) const;
    Microsoft::Graphics::Canvas::Geometry::CanvasCachedGeometry CreateStroke(Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& geometry, float strokeWidth, Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const& strokeStyle) const;
    Microsoft::Graphics::Canvas::Geometry::CanvasCachedGeometry CreateStroke(Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& geometry, float strokeWidth, Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const& strokeStyle, float flatteningTolerance) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Geometry::ICanvasCachedGeometryStatics> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Geometry_ICanvasCachedGeometryStatics<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Geometry_ICanvasGeometry
{
    Microsoft::Graphics::Canvas::Geometry::CanvasGeometry CombineWith(Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& otherGeometry, Windows::Foundation::Numerics::float3x2 const& otherGeometryTransform, Microsoft::Graphics::Canvas::Geometry::CanvasGeometryCombine const& combine) const;
    Microsoft::Graphics::Canvas::Geometry::CanvasGeometry CombineWith(Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& otherGeometry, Windows::Foundation::Numerics::float3x2 const& otherGeometryTransform, Microsoft::Graphics::Canvas::Geometry::CanvasGeometryCombine const& combine, float flatteningTolerance) const;
    Microsoft::Graphics::Canvas::Geometry::CanvasGeometry Stroke(float strokeWidth) const;
    Microsoft::Graphics::Canvas::Geometry::CanvasGeometry Stroke(float strokeWidth, Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const& strokeStyle) const;
    Microsoft::Graphics::Canvas::Geometry::CanvasGeometry Stroke(float strokeWidth, Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const& strokeStyle, Windows::Foundation::Numerics::float3x2 const& transform, float flatteningTolerance) const;
    Microsoft::Graphics::Canvas::Geometry::CanvasGeometry Outline() const;
    Microsoft::Graphics::Canvas::Geometry::CanvasGeometry Outline(Windows::Foundation::Numerics::float3x2 const& transform, float flatteningTolerance) const;
    Microsoft::Graphics::Canvas::Geometry::CanvasGeometry Simplify(Microsoft::Graphics::Canvas::Geometry::CanvasGeometrySimplification const& simplification) const;
    Microsoft::Graphics::Canvas::Geometry::CanvasGeometry Simplify(Microsoft::Graphics::Canvas::Geometry::CanvasGeometrySimplification const& simplification, Windows::Foundation::Numerics::float3x2 const& transform, float flatteningTolerance) const;
    Microsoft::Graphics::Canvas::Geometry::CanvasGeometry Transform(Windows::Foundation::Numerics::float3x2 const& transform) const;
    Microsoft::Graphics::Canvas::Geometry::CanvasGeometryRelation CompareWith(Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& otherGeometry) const;
    Microsoft::Graphics::Canvas::Geometry::CanvasGeometryRelation CompareWith(Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& otherGeometry, Windows::Foundation::Numerics::float3x2 const& otherGeometryTransform, float flatteningTolerance) const;
    float ComputeArea() const;
    float ComputeArea(Windows::Foundation::Numerics::float3x2 const& transform, float flatteningTolerance) const;
    float ComputePathLength() const;
    float ComputePathLength(Windows::Foundation::Numerics::float3x2 const& transform, float flatteningTolerance) const;
    Windows::Foundation::Numerics::float2 ComputePointOnPath(float distance) const;
    Windows::Foundation::Numerics::float2 ComputePointOnPath(float distance, Windows::Foundation::Numerics::float2& tangent) const;
    Windows::Foundation::Numerics::float2 ComputePointOnPath(float length, Windows::Foundation::Numerics::float3x2 const& transform, float flatteningTolerance, Windows::Foundation::Numerics::float2& tangent) const;
    bool FillContainsPoint(Windows::Foundation::Numerics::float2 const& point) const;
    bool FillContainsPoint(Windows::Foundation::Numerics::float2 const& point, Windows::Foundation::Numerics::float3x2 const& transform, float flatteningTolerance) const;
    Windows::Foundation::Rect ComputeBounds() const;
    Windows::Foundation::Rect ComputeBounds(Windows::Foundation::Numerics::float3x2 const& transform) const;
    Windows::Foundation::Rect ComputeStrokeBounds(float strokeWidth) const;
    Windows::Foundation::Rect ComputeStrokeBounds(float strokeWidth, Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const& strokeStyle) const;
    Windows::Foundation::Rect ComputeStrokeBounds(float strokeWidth, Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const& strokeStyle, Windows::Foundation::Numerics::float3x2 const& transform, float flatteningTolerance) const;
    bool StrokeContainsPoint(Windows::Foundation::Numerics::float2 const& point, float strokeWidth) const;
    bool StrokeContainsPoint(Windows::Foundation::Numerics::float2 const& point, float strokeWidth, Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const& strokeStyle) const;
    bool StrokeContainsPoint(Windows::Foundation::Numerics::float2 const& point, float strokeWidth, Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const& strokeStyle, Windows::Foundation::Numerics::float3x2 const& transform, float flatteningTolerance) const;
    com_array<Microsoft::Graphics::Canvas::Geometry::CanvasTriangleVertices> Tessellate() const;
    com_array<Microsoft::Graphics::Canvas::Geometry::CanvasTriangleVertices> Tessellate(Windows::Foundation::Numerics::float3x2 const& transform, float flatteningTolerance) const;
    void SendPathTo(Microsoft::Graphics::Canvas::Geometry::ICanvasPathReceiver const& streamReader) const;
    Microsoft::Graphics::Canvas::CanvasDevice Device() const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Geometry_ICanvasGeometry<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Geometry_ICanvasGeometryStatics
{
    Microsoft::Graphics::Canvas::Geometry::CanvasGeometry CreateRectangle(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Foundation::Rect const& rect) const;
    Microsoft::Graphics::Canvas::Geometry::CanvasGeometry CreateRectangle(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, float x, float y, float w, float h) const;
    Microsoft::Graphics::Canvas::Geometry::CanvasGeometry CreateRoundedRectangle(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Foundation::Rect const& rect, float radiusX, float radiusY) const;
    Microsoft::Graphics::Canvas::Geometry::CanvasGeometry CreateRoundedRectangle(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, float x, float y, float w, float h, float radiusX, float radiusY) const;
    Microsoft::Graphics::Canvas::Geometry::CanvasGeometry CreateEllipse(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Foundation::Numerics::float2 const& centerPoint, float radiusX, float radiusY) const;
    Microsoft::Graphics::Canvas::Geometry::CanvasGeometry CreateEllipse(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, float x, float y, float radiusX, float radiusY) const;
    Microsoft::Graphics::Canvas::Geometry::CanvasGeometry CreateCircle(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Foundation::Numerics::float2 const& centerPoint, float radius) const;
    Microsoft::Graphics::Canvas::Geometry::CanvasGeometry CreateCircle(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, float x, float y, float radius) const;
    Microsoft::Graphics::Canvas::Geometry::CanvasGeometry CreatePath(Microsoft::Graphics::Canvas::Geometry::CanvasPathBuilder const& pathBuilder) const;
    Microsoft::Graphics::Canvas::Geometry::CanvasGeometry CreatePolygon(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<Windows::Foundation::Numerics::float2 const> points) const;
    Microsoft::Graphics::Canvas::Geometry::CanvasGeometry CreateGroup(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const> geometries) const;
    Microsoft::Graphics::Canvas::Geometry::CanvasGeometry CreateGroup(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const> geometries, Microsoft::Graphics::Canvas::Geometry::CanvasFilledRegionDetermination const& filledRegionDetermination) const;
    Microsoft::Graphics::Canvas::Geometry::CanvasGeometry CreateText(Microsoft::Graphics::Canvas::Text::CanvasTextLayout const& textLayout) const;
    Microsoft::Graphics::Canvas::Geometry::CanvasGeometry CreateGlyphRun(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Foundation::Numerics::float2 const& point, Microsoft::Graphics::Canvas::Text::CanvasFontFace const& fontFace, float fontSize, array_view<Microsoft::Graphics::Canvas::Text::CanvasGlyph const> glyphs, bool isSideways, uint32_t bidiLevel, Microsoft::Graphics::Canvas::Text::CanvasTextMeasuringMode const& measuringMode, Microsoft::Graphics::Canvas::Text::CanvasGlyphOrientation const& glyphOrientation) const;
    Microsoft::Graphics::Canvas::Geometry::CanvasGeometry CreateInk(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, param::iterable<Windows::UI::Input::Inking::InkStroke> const& inkStrokes) const;
    Microsoft::Graphics::Canvas::Geometry::CanvasGeometry CreateInk(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, param::iterable<Windows::UI::Input::Inking::InkStroke> const& inkStrokes, Windows::Foundation::Numerics::float3x2 const& transform, float flatteningTolerance) const;
    float ComputeFlatteningTolerance(float dpi, float maximumZoomFactor) const;
    float ComputeFlatteningTolerance(float dpi, float maximumZoomFactor, Windows::Foundation::Numerics::float3x2 const& expectedGeometryTransform) const;
    float DefaultFlatteningTolerance() const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Geometry::ICanvasGeometryStatics> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Geometry_ICanvasGeometryStatics<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Geometry_ICanvasGradientMesh
{
    com_array<Microsoft::Graphics::Canvas::Geometry::CanvasGradientMeshPatch> Patches() const;
    Windows::Foundation::Rect GetBounds(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator) const;
    Windows::Foundation::Rect GetBounds(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Foundation::Numerics::float3x2 const& transform) const;
    Microsoft::Graphics::Canvas::CanvasDevice Device() const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Geometry::ICanvasGradientMesh> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Geometry_ICanvasGradientMesh<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Geometry_ICanvasGradientMeshFactory
{
    Microsoft::Graphics::Canvas::Geometry::CanvasGradientMesh Create(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<Microsoft::Graphics::Canvas::Geometry::CanvasGradientMeshPatch const> patchElements) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Geometry::ICanvasGradientMeshFactory> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Geometry_ICanvasGradientMeshFactory<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Geometry_ICanvasGradientMeshStatics
{
    Microsoft::Graphics::Canvas::Geometry::CanvasGradientMeshPatch CreateCoonsPatch(array_view<Windows::Foundation::Numerics::float2 const> points, array_view<Windows::Foundation::Numerics::float4 const> colors, array_view<Microsoft::Graphics::Canvas::Geometry::CanvasGradientMeshPatchEdge const> edges) const;
    Microsoft::Graphics::Canvas::Geometry::CanvasGradientMeshPatch CreateTensorPatch(array_view<Windows::Foundation::Numerics::float2 const> points, array_view<Windows::Foundation::Numerics::float4 const> colors, array_view<Microsoft::Graphics::Canvas::Geometry::CanvasGradientMeshPatchEdge const> edges) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Geometry::ICanvasGradientMeshStatics> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Geometry_ICanvasGradientMeshStatics<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Geometry_ICanvasPathBuilder
{
    void BeginFigure(Windows::Foundation::Numerics::float2 const& startPoint, Microsoft::Graphics::Canvas::Geometry::CanvasFigureFill const& figureFill) const;
    void BeginFigure(Windows::Foundation::Numerics::float2 const& startPoint) const;
    void BeginFigure(float startX, float startY, Microsoft::Graphics::Canvas::Geometry::CanvasFigureFill const& figureFill) const;
    void BeginFigure(float startX, float startY) const;
    void AddArc(Windows::Foundation::Numerics::float2 const& endPoint, float radiusX, float radiusY, float rotationAngle, Microsoft::Graphics::Canvas::Geometry::CanvasSweepDirection const& sweepDirection, Microsoft::Graphics::Canvas::Geometry::CanvasArcSize const& arcSize) const;
    void AddArc(Windows::Foundation::Numerics::float2 const& centerPoint, float radiusX, float radiusY, float startAngle, float sweepAngle) const;
    void AddCubicBezier(Windows::Foundation::Numerics::float2 const& controlPoint1, Windows::Foundation::Numerics::float2 const& controlPoint2, Windows::Foundation::Numerics::float2 const& endPoint) const;
    void AddLine(Windows::Foundation::Numerics::float2 const& endPoint) const;
    void AddLine(float x, float y) const;
    void AddQuadraticBezier(Windows::Foundation::Numerics::float2 const& controlPoint, Windows::Foundation::Numerics::float2 const& endPoint) const;
    void SetFilledRegionDetermination(Microsoft::Graphics::Canvas::Geometry::CanvasFilledRegionDetermination const& filledRegionDetermination) const;
    void SetSegmentOptions(Microsoft::Graphics::Canvas::Geometry::CanvasFigureSegmentOptions const& figureSegmentOptions) const;
    void EndFigure(Microsoft::Graphics::Canvas::Geometry::CanvasFigureLoop const& figureLoop) const;
    void AddGeometry(Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& geometry) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Geometry::ICanvasPathBuilder> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Geometry_ICanvasPathBuilder<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Geometry_ICanvasPathBuilderFactory
{
    Microsoft::Graphics::Canvas::Geometry::CanvasPathBuilder Create(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Geometry::ICanvasPathBuilderFactory> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Geometry_ICanvasPathBuilderFactory<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Geometry_ICanvasPathReceiver
{
    void BeginFigure(Windows::Foundation::Numerics::float2 const& startPoint, Microsoft::Graphics::Canvas::Geometry::CanvasFigureFill const& figureFill) const;
    void AddArc(Windows::Foundation::Numerics::float2 const& endPoint, float radiusX, float radiusY, float rotationAngle, Microsoft::Graphics::Canvas::Geometry::CanvasSweepDirection const& sweepDirection, Microsoft::Graphics::Canvas::Geometry::CanvasArcSize const& arcSize) const;
    void AddCubicBezier(Windows::Foundation::Numerics::float2 const& controlPoint1, Windows::Foundation::Numerics::float2 const& controlPoint2, Windows::Foundation::Numerics::float2 const& endPoint) const;
    void AddLine(Windows::Foundation::Numerics::float2 const& endPoint) const;
    void AddQuadraticBezier(Windows::Foundation::Numerics::float2 const& controlPoint, Windows::Foundation::Numerics::float2 const& endPoint) const;
    void SetFilledRegionDetermination(Microsoft::Graphics::Canvas::Geometry::CanvasFilledRegionDetermination const& filledRegionDetermination) const;
    void SetSegmentOptions(Microsoft::Graphics::Canvas::Geometry::CanvasFigureSegmentOptions const& figureSegmentOptions) const;
    void EndFigure(Microsoft::Graphics::Canvas::Geometry::CanvasFigureLoop const& figureLoop) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Geometry::ICanvasPathReceiver> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Geometry_ICanvasPathReceiver<D>; };

template <typename D>
struct consume_Microsoft_Graphics_Canvas_Geometry_ICanvasStrokeStyle
{
    Microsoft::Graphics::Canvas::Geometry::CanvasCapStyle StartCap() const;
    void StartCap(Microsoft::Graphics::Canvas::Geometry::CanvasCapStyle const& value) const;
    Microsoft::Graphics::Canvas::Geometry::CanvasCapStyle EndCap() const;
    void EndCap(Microsoft::Graphics::Canvas::Geometry::CanvasCapStyle const& value) const;
    Microsoft::Graphics::Canvas::Geometry::CanvasCapStyle DashCap() const;
    void DashCap(Microsoft::Graphics::Canvas::Geometry::CanvasCapStyle const& value) const;
    Microsoft::Graphics::Canvas::Geometry::CanvasLineJoin LineJoin() const;
    void LineJoin(Microsoft::Graphics::Canvas::Geometry::CanvasLineJoin const& value) const;
    float MiterLimit() const;
    void MiterLimit(float value) const;
    Microsoft::Graphics::Canvas::Geometry::CanvasDashStyle DashStyle() const;
    void DashStyle(Microsoft::Graphics::Canvas::Geometry::CanvasDashStyle const& value) const;
    float DashOffset() const;
    void DashOffset(float value) const;
    com_array<float> CustomDashStyle() const;
    void CustomDashStyle(array_view<float const> valueElements) const;
    Microsoft::Graphics::Canvas::Geometry::CanvasStrokeTransformBehavior TransformBehavior() const;
    void TransformBehavior(Microsoft::Graphics::Canvas::Geometry::CanvasStrokeTransformBehavior const& value) const;
};
template <> struct consume<Microsoft::Graphics::Canvas::Geometry::ICanvasStrokeStyle> { template <typename D> using type = consume_Microsoft_Graphics_Canvas_Geometry_ICanvasStrokeStyle<D>; };

template <> struct abi<Microsoft::Graphics::Canvas::Geometry::ICanvasCachedGeometry>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Device(::IUnknown** value) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Geometry::ICanvasCachedGeometryStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateFill(::IUnknown* geometry, ::IUnknown** cachedGeometry) = 0;
    virtual HRESULT __stdcall CreateFillWithFlatteningTolerance(::IUnknown* geometry, float flatteningTolerance, ::IUnknown** cachedGeometry) = 0;
    virtual HRESULT __stdcall CreateStroke(::IUnknown* geometry, float strokeWidth, ::IUnknown** cachedGeometry) = 0;
    virtual HRESULT __stdcall CreateStrokeWithStrokeStyle(::IUnknown* geometry, float strokeWidth, ::IUnknown* strokeStyle, ::IUnknown** cachedGeometry) = 0;
    virtual HRESULT __stdcall CreateStrokeWithStrokeStyleAndFlatteningTolerance(::IUnknown* geometry, float strokeWidth, ::IUnknown* strokeStyle, float flatteningTolerance, ::IUnknown** cachedGeometry) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CombineWith(::IUnknown* otherGeometry, Windows::Foundation::Numerics::float3x2 otherGeometryTransform, Microsoft::Graphics::Canvas::Geometry::CanvasGeometryCombine combine, ::IUnknown** geometry) = 0;
    virtual HRESULT __stdcall CombineWithUsingFlatteningTolerance(::IUnknown* otherGeometry, Windows::Foundation::Numerics::float3x2 otherGeometryTransform, Microsoft::Graphics::Canvas::Geometry::CanvasGeometryCombine combine, float flatteningTolerance, ::IUnknown** geometry) = 0;
    virtual HRESULT __stdcall Stroke(float strokeWidth, ::IUnknown** geometry) = 0;
    virtual HRESULT __stdcall StrokeWithStrokeStyle(float strokeWidth, ::IUnknown* strokeStyle, ::IUnknown** geometry) = 0;
    virtual HRESULT __stdcall StrokeWithAllOptions(float strokeWidth, ::IUnknown* strokeStyle, Windows::Foundation::Numerics::float3x2 transform, float flatteningTolerance, ::IUnknown** geometry) = 0;
    virtual HRESULT __stdcall Outline(::IUnknown** geometry) = 0;
    virtual HRESULT __stdcall OutlineWithTransformAndFlatteningTolerance(Windows::Foundation::Numerics::float3x2 transform, float flatteningTolerance, ::IUnknown** geometry) = 0;
    virtual HRESULT __stdcall Simplify(Microsoft::Graphics::Canvas::Geometry::CanvasGeometrySimplification simplification, ::IUnknown** geometry) = 0;
    virtual HRESULT __stdcall SimplifyWithTransformAndFlatteningTolerance(Microsoft::Graphics::Canvas::Geometry::CanvasGeometrySimplification simplification, Windows::Foundation::Numerics::float3x2 transform, float flatteningTolerance, ::IUnknown** geometry) = 0;
    virtual HRESULT __stdcall Transform(Windows::Foundation::Numerics::float3x2 transform, ::IUnknown** geometry) = 0;
    virtual HRESULT __stdcall CompareWith(::IUnknown* otherGeometry, Microsoft::Graphics::Canvas::Geometry::CanvasGeometryRelation* relation) = 0;
    virtual HRESULT __stdcall CompareWithUsingTransformAndFlatteningTolerance(::IUnknown* otherGeometry, Windows::Foundation::Numerics::float3x2 otherGeometryTransform, float flatteningTolerance, Microsoft::Graphics::Canvas::Geometry::CanvasGeometryRelation* relation) = 0;
    virtual HRESULT __stdcall ComputeArea(float* area) = 0;
    virtual HRESULT __stdcall ComputeAreaWithTransformAndFlatteningTolerance(Windows::Foundation::Numerics::float3x2 transform, float flatteningTolerance, float* area) = 0;
    virtual HRESULT __stdcall ComputePathLength(float* length) = 0;
    virtual HRESULT __stdcall ComputePathLengthWithTransformAndFlatteningTolerance(Windows::Foundation::Numerics::float3x2 transform, float flatteningTolerance, float* length) = 0;
    virtual HRESULT __stdcall ComputePointOnPath(float distance, Windows::Foundation::Numerics::float2* point) = 0;
    virtual HRESULT __stdcall ComputePointOnPathWithTangent(float distance, Windows::Foundation::Numerics::float2* tangent, Windows::Foundation::Numerics::float2* point) = 0;
    virtual HRESULT __stdcall ComputePointOnPathWithTransformAndFlatteningToleranceAndTangent(float length, Windows::Foundation::Numerics::float3x2 transform, float flatteningTolerance, Windows::Foundation::Numerics::float2* tangent, Windows::Foundation::Numerics::float2* point) = 0;
    virtual HRESULT __stdcall FillContainsPoint(Windows::Foundation::Numerics::float2 point, bool* containsPoint) = 0;
    virtual HRESULT __stdcall FillContainsPointWithTransformAndFlatteningTolerance(Windows::Foundation::Numerics::float2 point, Windows::Foundation::Numerics::float3x2 transform, float flatteningTolerance, bool* containsPoint) = 0;
    virtual HRESULT __stdcall ComputeBounds(Windows::Foundation::Rect* bounds) = 0;
    virtual HRESULT __stdcall ComputeBoundsWithTransform(Windows::Foundation::Numerics::float3x2 transform, Windows::Foundation::Rect* bounds) = 0;
    virtual HRESULT __stdcall ComputeStrokeBounds(float strokeWidth, Windows::Foundation::Rect* bounds) = 0;
    virtual HRESULT __stdcall ComputeStrokeBoundsWithStrokeStyle(float strokeWidth, ::IUnknown* strokeStyle, Windows::Foundation::Rect* bounds) = 0;
    virtual HRESULT __stdcall ComputeStrokeBoundsWithAllOptions(float strokeWidth, ::IUnknown* strokeStyle, Windows::Foundation::Numerics::float3x2 transform, float flatteningTolerance, Windows::Foundation::Rect* bounds) = 0;
    virtual HRESULT __stdcall StrokeContainsPoint(Windows::Foundation::Numerics::float2 point, float strokeWidth, bool* containsPoint) = 0;
    virtual HRESULT __stdcall StrokeContainsPointWithStrokeStyle(Windows::Foundation::Numerics::float2 point, float strokeWidth, ::IUnknown* strokeStyle, bool* containsPoint) = 0;
    virtual HRESULT __stdcall StrokeContainsPointWithAllOptions(Windows::Foundation::Numerics::float2 point, float strokeWidth, ::IUnknown* strokeStyle, Windows::Foundation::Numerics::float3x2 transform, float flatteningTolerance, bool* containsPoint) = 0;
    virtual HRESULT __stdcall Tessellate(uint32_t* __trianglesSize, struct_of<24>** triangles) = 0;
    virtual HRESULT __stdcall TessellateWithTransformAndFlatteningTolerance(Windows::Foundation::Numerics::float3x2 transform, float flatteningTolerance, uint32_t* __trianglesSize, struct_of<24>** triangles) = 0;
    virtual HRESULT __stdcall SendPathTo(::IUnknown* streamReader) = 0;
    virtual HRESULT __stdcall get_Device(::IUnknown** value) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Geometry::ICanvasGeometryStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateRectangle(::IUnknown* resourceCreator, Windows::Foundation::Rect rect, ::IUnknown** geometry) = 0;
    virtual HRESULT __stdcall CreateRectangleAtCoords(::IUnknown* resourceCreator, float x, float y, float w, float h, ::IUnknown** geometry) = 0;
    virtual HRESULT __stdcall CreateRoundedRectangle(::IUnknown* resourceCreator, Windows::Foundation::Rect rect, float radiusX, float radiusY, ::IUnknown** geometry) = 0;
    virtual HRESULT __stdcall CreateRoundedRectangleAtCoords(::IUnknown* resourceCreator, float x, float y, float w, float h, float radiusX, float radiusY, ::IUnknown** geometry) = 0;
    virtual HRESULT __stdcall CreateEllipse(::IUnknown* resourceCreator, Windows::Foundation::Numerics::float2 centerPoint, float radiusX, float radiusY, ::IUnknown** geometry) = 0;
    virtual HRESULT __stdcall CreateEllipseAtCoords(::IUnknown* resourceCreator, float x, float y, float radiusX, float radiusY, ::IUnknown** geometry) = 0;
    virtual HRESULT __stdcall CreateCircle(::IUnknown* resourceCreator, Windows::Foundation::Numerics::float2 centerPoint, float radius, ::IUnknown** geometry) = 0;
    virtual HRESULT __stdcall CreateCircleAtCoords(::IUnknown* resourceCreator, float x, float y, float radius, ::IUnknown** geometry) = 0;
    virtual HRESULT __stdcall CreatePath(::IUnknown* pathBuilder, ::IUnknown** geometry) = 0;
    virtual HRESULT __stdcall CreatePolygon(::IUnknown* resourceCreator, uint32_t __pointsSize, Windows::Foundation::Numerics::float2* points, ::IUnknown** geometry) = 0;
    virtual HRESULT __stdcall CreateGroup(::IUnknown* resourceCreator, uint32_t __geometriesSize, ::IUnknown** geometries, ::IUnknown** geometry) = 0;
    virtual HRESULT __stdcall CreateGroupWithFilledRegionDetermination(::IUnknown* resourceCreator, uint32_t __geometriesSize, ::IUnknown** geometries, Microsoft::Graphics::Canvas::Geometry::CanvasFilledRegionDetermination filledRegionDetermination, ::IUnknown** geometry) = 0;
    virtual HRESULT __stdcall CreateText(::IUnknown* textLayout, ::IUnknown** geometry) = 0;
    virtual HRESULT __stdcall CreateGlyphRun(::IUnknown* resourceCreator, Windows::Foundation::Numerics::float2 point, ::IUnknown* fontFace, float fontSize, uint32_t __glyphsSize, struct_of<16>* glyphs, bool isSideways, uint32_t bidiLevel, Microsoft::Graphics::Canvas::Text::CanvasTextMeasuringMode measuringMode, Microsoft::Graphics::Canvas::Text::CanvasGlyphOrientation glyphOrientation, ::IUnknown** geometry) = 0;
    virtual HRESULT __stdcall CreateInk(::IUnknown* resourceCreator, ::IUnknown* inkStrokes, ::IUnknown** geometry) = 0;
    virtual HRESULT __stdcall CreateInkWithTransformAndFlatteningTolerance(::IUnknown* resourceCreator, ::IUnknown* inkStrokes, Windows::Foundation::Numerics::float3x2 transform, float flatteningTolerance, ::IUnknown** geometry) = 0;
    virtual HRESULT __stdcall ComputeFlatteningTolerance(float dpi, float maximumZoomFactor, float* flatteningTolerance) = 0;
    virtual HRESULT __stdcall ComputeFlatteningToleranceWithTransform(float dpi, float maximumZoomFactor, Windows::Foundation::Numerics::float3x2 expectedGeometryTransform, float* flatteningTolerance) = 0;
    virtual HRESULT __stdcall get_DefaultFlatteningTolerance(float* value) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Geometry::ICanvasGradientMesh>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Patches(uint32_t* __valueElementsSize, struct_of<208>** valueElements) = 0;
    virtual HRESULT __stdcall GetBounds(::IUnknown* resourceCreator, Windows::Foundation::Rect* bounds) = 0;
    virtual HRESULT __stdcall GetBoundsWithTransform(::IUnknown* resourceCreator, Windows::Foundation::Numerics::float3x2 transform, Windows::Foundation::Rect* bounds) = 0;
    virtual HRESULT __stdcall get_Device(::IUnknown** value) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Geometry::ICanvasGradientMeshFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(::IUnknown* resourceCreator, uint32_t __patchElementsSize, struct_of<208>* patchElements, ::IUnknown** canvasGradientMesh) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Geometry::ICanvasGradientMeshStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateCoonsPatch(uint32_t __pointsSize, Windows::Foundation::Numerics::float2* points, uint32_t __colorsSize, Windows::Foundation::Numerics::float4* colors, uint32_t __edgesSize, Microsoft::Graphics::Canvas::Geometry::CanvasGradientMeshPatchEdge* edges, struct_of<208>* gradientMeshPatch) = 0;
    virtual HRESULT __stdcall CreateTensorPatch(uint32_t __pointsSize, Windows::Foundation::Numerics::float2* points, uint32_t __colorsSize, Windows::Foundation::Numerics::float4* colors, uint32_t __edgesSize, Microsoft::Graphics::Canvas::Geometry::CanvasGradientMeshPatchEdge* edges, struct_of<208>* gradientMeshPatch) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Geometry::ICanvasPathBuilder>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall BeginFigureWithFigureFill(Windows::Foundation::Numerics::float2 startPoint, Microsoft::Graphics::Canvas::Geometry::CanvasFigureFill figureFill) = 0;
    virtual HRESULT __stdcall BeginFigure(Windows::Foundation::Numerics::float2 startPoint) = 0;
    virtual HRESULT __stdcall BeginFigureAtCoordsWithFigureFill(float startX, float startY, Microsoft::Graphics::Canvas::Geometry::CanvasFigureFill figureFill) = 0;
    virtual HRESULT __stdcall BeginFigureAtCoords(float startX, float startY) = 0;
    virtual HRESULT __stdcall AddArcToPoint(Windows::Foundation::Numerics::float2 endPoint, float radiusX, float radiusY, float rotationAngle, Microsoft::Graphics::Canvas::Geometry::CanvasSweepDirection sweepDirection, Microsoft::Graphics::Canvas::Geometry::CanvasArcSize arcSize) = 0;
    virtual HRESULT __stdcall AddArcAroundEllipse(Windows::Foundation::Numerics::float2 centerPoint, float radiusX, float radiusY, float startAngle, float sweepAngle) = 0;
    virtual HRESULT __stdcall AddCubicBezier(Windows::Foundation::Numerics::float2 controlPoint1, Windows::Foundation::Numerics::float2 controlPoint2, Windows::Foundation::Numerics::float2 endPoint) = 0;
    virtual HRESULT __stdcall AddLine(Windows::Foundation::Numerics::float2 endPoint) = 0;
    virtual HRESULT __stdcall AddLineWithCoords(float x, float y) = 0;
    virtual HRESULT __stdcall AddQuadraticBezier(Windows::Foundation::Numerics::float2 controlPoint, Windows::Foundation::Numerics::float2 endPoint) = 0;
    virtual HRESULT __stdcall SetFilledRegionDetermination(Microsoft::Graphics::Canvas::Geometry::CanvasFilledRegionDetermination filledRegionDetermination) = 0;
    virtual HRESULT __stdcall SetSegmentOptions(Microsoft::Graphics::Canvas::Geometry::CanvasFigureSegmentOptions figureSegmentOptions) = 0;
    virtual HRESULT __stdcall EndFigure(Microsoft::Graphics::Canvas::Geometry::CanvasFigureLoop figureLoop) = 0;
    virtual HRESULT __stdcall AddGeometry(::IUnknown* geometry) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Geometry::ICanvasPathBuilderFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(::IUnknown* resourceCreator, ::IUnknown** canvasPathBuilder) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Geometry::ICanvasPathReceiver>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall BeginFigure(Windows::Foundation::Numerics::float2 startPoint, Microsoft::Graphics::Canvas::Geometry::CanvasFigureFill figureFill) = 0;
    virtual HRESULT __stdcall AddArc(Windows::Foundation::Numerics::float2 endPoint, float radiusX, float radiusY, float rotationAngle, Microsoft::Graphics::Canvas::Geometry::CanvasSweepDirection sweepDirection, Microsoft::Graphics::Canvas::Geometry::CanvasArcSize arcSize) = 0;
    virtual HRESULT __stdcall AddCubicBezier(Windows::Foundation::Numerics::float2 controlPoint1, Windows::Foundation::Numerics::float2 controlPoint2, Windows::Foundation::Numerics::float2 endPoint) = 0;
    virtual HRESULT __stdcall AddLine(Windows::Foundation::Numerics::float2 endPoint) = 0;
    virtual HRESULT __stdcall AddQuadraticBezier(Windows::Foundation::Numerics::float2 controlPoint, Windows::Foundation::Numerics::float2 endPoint) = 0;
    virtual HRESULT __stdcall SetFilledRegionDetermination(Microsoft::Graphics::Canvas::Geometry::CanvasFilledRegionDetermination filledRegionDetermination) = 0;
    virtual HRESULT __stdcall SetSegmentOptions(Microsoft::Graphics::Canvas::Geometry::CanvasFigureSegmentOptions figureSegmentOptions) = 0;
    virtual HRESULT __stdcall EndFigure(Microsoft::Graphics::Canvas::Geometry::CanvasFigureLoop figureLoop) = 0;
};};

template <> struct abi<Microsoft::Graphics::Canvas::Geometry::ICanvasStrokeStyle>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_StartCap(Microsoft::Graphics::Canvas::Geometry::CanvasCapStyle* value) = 0;
    virtual HRESULT __stdcall put_StartCap(Microsoft::Graphics::Canvas::Geometry::CanvasCapStyle value) = 0;
    virtual HRESULT __stdcall get_EndCap(Microsoft::Graphics::Canvas::Geometry::CanvasCapStyle* value) = 0;
    virtual HRESULT __stdcall put_EndCap(Microsoft::Graphics::Canvas::Geometry::CanvasCapStyle value) = 0;
    virtual HRESULT __stdcall get_DashCap(Microsoft::Graphics::Canvas::Geometry::CanvasCapStyle* value) = 0;
    virtual HRESULT __stdcall put_DashCap(Microsoft::Graphics::Canvas::Geometry::CanvasCapStyle value) = 0;
    virtual HRESULT __stdcall get_LineJoin(Microsoft::Graphics::Canvas::Geometry::CanvasLineJoin* value) = 0;
    virtual HRESULT __stdcall put_LineJoin(Microsoft::Graphics::Canvas::Geometry::CanvasLineJoin value) = 0;
    virtual HRESULT __stdcall get_MiterLimit(float* value) = 0;
    virtual HRESULT __stdcall put_MiterLimit(float value) = 0;
    virtual HRESULT __stdcall get_DashStyle(Microsoft::Graphics::Canvas::Geometry::CanvasDashStyle* value) = 0;
    virtual HRESULT __stdcall put_DashStyle(Microsoft::Graphics::Canvas::Geometry::CanvasDashStyle value) = 0;
    virtual HRESULT __stdcall get_DashOffset(float* value) = 0;
    virtual HRESULT __stdcall put_DashOffset(float value) = 0;
    virtual HRESULT __stdcall get_CustomDashStyle(uint32_t* __valueElementsSize, float** valueElements) = 0;
    virtual HRESULT __stdcall put_CustomDashStyle(uint32_t __valueElementsSize, float* valueElements) = 0;
    virtual HRESULT __stdcall get_TransformBehavior(Microsoft::Graphics::Canvas::Geometry::CanvasStrokeTransformBehavior* value) = 0;
    virtual HRESULT __stdcall put_TransformBehavior(Microsoft::Graphics::Canvas::Geometry::CanvasStrokeTransformBehavior value) = 0;
};};

}
