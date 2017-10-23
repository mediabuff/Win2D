// C++/WinRT v1.0.170906.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Microsoft.Graphics.Canvas.1.h"
#include "winrt/impl/Microsoft.Graphics.Canvas.Text.1.h"
#include "winrt/impl/Windows.UI.Input.Inking.1.h"
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Microsoft.Graphics.Canvas.Geometry.1.h"

WINRT_EXPORT namespace winrt::Microsoft::Graphics::Canvas::Geometry {

struct CanvasGradientMeshPatch
{
    Windows::Foundation::Numerics::float2 Point00;
    Windows::Foundation::Numerics::float2 Point01;
    Windows::Foundation::Numerics::float2 Point02;
    Windows::Foundation::Numerics::float2 Point03;
    Windows::Foundation::Numerics::float2 Point10;
    Windows::Foundation::Numerics::float2 Point11;
    Windows::Foundation::Numerics::float2 Point12;
    Windows::Foundation::Numerics::float2 Point13;
    Windows::Foundation::Numerics::float2 Point20;
    Windows::Foundation::Numerics::float2 Point21;
    Windows::Foundation::Numerics::float2 Point22;
    Windows::Foundation::Numerics::float2 Point23;
    Windows::Foundation::Numerics::float2 Point30;
    Windows::Foundation::Numerics::float2 Point31;
    Windows::Foundation::Numerics::float2 Point32;
    Windows::Foundation::Numerics::float2 Point33;
    Windows::Foundation::Numerics::float4 Color00;
    Windows::Foundation::Numerics::float4 Color03;
    Windows::Foundation::Numerics::float4 Color30;
    Windows::Foundation::Numerics::float4 Color33;
    Microsoft::Graphics::Canvas::Geometry::CanvasGradientMeshPatchEdge Edge00To03;
    Microsoft::Graphics::Canvas::Geometry::CanvasGradientMeshPatchEdge Edge03To33;
    Microsoft::Graphics::Canvas::Geometry::CanvasGradientMeshPatchEdge Edge33To30;
    Microsoft::Graphics::Canvas::Geometry::CanvasGradientMeshPatchEdge Edge30To00;
};

struct CanvasTriangleVertices
{
    Windows::Foundation::Numerics::float2 Vertex1;
    Windows::Foundation::Numerics::float2 Vertex2;
    Windows::Foundation::Numerics::float2 Vertex3;
};

}

namespace winrt::impl {

template <> struct is_struct<Microsoft::Graphics::Canvas::Geometry::CanvasGradientMeshPatch>
{
    static constexpr bool value{ true };
};

template <> struct is_struct<Microsoft::Graphics::Canvas::Geometry::CanvasTriangleVertices>
{
    static constexpr bool value{ true };
};

}

WINRT_EXPORT namespace winrt::Microsoft::Graphics::Canvas::Geometry {

struct WINRT_EBO CanvasCachedGeometry :
    Microsoft::Graphics::Canvas::Geometry::ICanvasCachedGeometry
{
    CanvasCachedGeometry(std::nullptr_t) noexcept {}
    static Microsoft::Graphics::Canvas::Geometry::CanvasCachedGeometry CreateFill(Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& geometry);
    static Microsoft::Graphics::Canvas::Geometry::CanvasCachedGeometry CreateFill(Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& geometry, float flatteningTolerance);
    static Microsoft::Graphics::Canvas::Geometry::CanvasCachedGeometry CreateStroke(Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& geometry, float strokeWidth);
    static Microsoft::Graphics::Canvas::Geometry::CanvasCachedGeometry CreateStroke(Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& geometry, float strokeWidth, Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const& strokeStyle);
    static Microsoft::Graphics::Canvas::Geometry::CanvasCachedGeometry CreateStroke(Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& geometry, float strokeWidth, Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const& strokeStyle, float flatteningTolerance);
};

struct WINRT_EBO CanvasGeometry :
    Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry
{
    CanvasGeometry(std::nullptr_t) noexcept {}
    static Microsoft::Graphics::Canvas::Geometry::CanvasGeometry CreateRectangle(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Foundation::Rect const& rect);
    static Microsoft::Graphics::Canvas::Geometry::CanvasGeometry CreateRectangle(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, float x, float y, float w, float h);
    static Microsoft::Graphics::Canvas::Geometry::CanvasGeometry CreateRoundedRectangle(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Foundation::Rect const& rect, float radiusX, float radiusY);
    static Microsoft::Graphics::Canvas::Geometry::CanvasGeometry CreateRoundedRectangle(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, float x, float y, float w, float h, float radiusX, float radiusY);
    static Microsoft::Graphics::Canvas::Geometry::CanvasGeometry CreateEllipse(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Foundation::Numerics::float2 const& centerPoint, float radiusX, float radiusY);
    static Microsoft::Graphics::Canvas::Geometry::CanvasGeometry CreateEllipse(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, float x, float y, float radiusX, float radiusY);
    static Microsoft::Graphics::Canvas::Geometry::CanvasGeometry CreateCircle(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Foundation::Numerics::float2 const& centerPoint, float radius);
    static Microsoft::Graphics::Canvas::Geometry::CanvasGeometry CreateCircle(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, float x, float y, float radius);
    static Microsoft::Graphics::Canvas::Geometry::CanvasGeometry CreatePath(Microsoft::Graphics::Canvas::Geometry::CanvasPathBuilder const& pathBuilder);
    static Microsoft::Graphics::Canvas::Geometry::CanvasGeometry CreatePolygon(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<Windows::Foundation::Numerics::float2 const> points);
    static Microsoft::Graphics::Canvas::Geometry::CanvasGeometry CreateGroup(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const> geometries);
    static Microsoft::Graphics::Canvas::Geometry::CanvasGeometry CreateGroup(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const> geometries, Microsoft::Graphics::Canvas::Geometry::CanvasFilledRegionDetermination const& filledRegionDetermination);
    static Microsoft::Graphics::Canvas::Geometry::CanvasGeometry CreateText(Microsoft::Graphics::Canvas::Text::CanvasTextLayout const& textLayout);
    static Microsoft::Graphics::Canvas::Geometry::CanvasGeometry CreateGlyphRun(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Foundation::Numerics::float2 const& point, Microsoft::Graphics::Canvas::Text::CanvasFontFace const& fontFace, float fontSize, array_view<Microsoft::Graphics::Canvas::Text::CanvasGlyph const> glyphs, bool isSideways, uint32_t bidiLevel, Microsoft::Graphics::Canvas::Text::CanvasTextMeasuringMode const& measuringMode, Microsoft::Graphics::Canvas::Text::CanvasGlyphOrientation const& glyphOrientation);
    static Microsoft::Graphics::Canvas::Geometry::CanvasGeometry CreateInk(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, param::iterable<Windows::UI::Input::Inking::InkStroke> const& inkStrokes);
    static Microsoft::Graphics::Canvas::Geometry::CanvasGeometry CreateInk(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, param::iterable<Windows::UI::Input::Inking::InkStroke> const& inkStrokes, Windows::Foundation::Numerics::float3x2 const& transform, float flatteningTolerance);
    static float ComputeFlatteningTolerance(float dpi, float maximumZoomFactor);
    static float ComputeFlatteningTolerance(float dpi, float maximumZoomFactor, Windows::Foundation::Numerics::float3x2 const& expectedGeometryTransform);
    static float DefaultFlatteningTolerance();
};

struct WINRT_EBO CanvasGradientMesh :
    Microsoft::Graphics::Canvas::Geometry::ICanvasGradientMesh
{
    CanvasGradientMesh(std::nullptr_t) noexcept {}
    CanvasGradientMesh(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<Microsoft::Graphics::Canvas::Geometry::CanvasGradientMeshPatch const> patchElements);
    static Microsoft::Graphics::Canvas::Geometry::CanvasGradientMeshPatch CreateCoonsPatch(array_view<Windows::Foundation::Numerics::float2 const> points, array_view<Windows::Foundation::Numerics::float4 const> colors, array_view<Microsoft::Graphics::Canvas::Geometry::CanvasGradientMeshPatchEdge const> edges);
    static Microsoft::Graphics::Canvas::Geometry::CanvasGradientMeshPatch CreateTensorPatch(array_view<Windows::Foundation::Numerics::float2 const> points, array_view<Windows::Foundation::Numerics::float4 const> colors, array_view<Microsoft::Graphics::Canvas::Geometry::CanvasGradientMeshPatchEdge const> edges);
};

struct WINRT_EBO CanvasPathBuilder :
    Microsoft::Graphics::Canvas::Geometry::ICanvasPathBuilder
{
    CanvasPathBuilder(std::nullptr_t) noexcept {}
    CanvasPathBuilder(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator);
};

struct WINRT_EBO CanvasStrokeStyle :
    Microsoft::Graphics::Canvas::Geometry::ICanvasStrokeStyle
{
    CanvasStrokeStyle(std::nullptr_t) noexcept {}
    CanvasStrokeStyle();
};

}
