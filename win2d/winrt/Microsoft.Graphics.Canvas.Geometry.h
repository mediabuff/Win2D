// C++/WinRT v1.0.170906.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH

static_assert(winrt::impl::make_constexpr_string(CPPWINRT_VERSION) == "1.0.170906.1", "Mismatched component and base headers.");
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Microsoft.Graphics.Canvas.2.h"
#include "winrt/impl/Microsoft.Graphics.Canvas.Text.2.h"
#include "winrt/impl/Windows.UI.Input.Inking.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Microsoft.Graphics.Canvas.Geometry.2.h"
#include "winrt/Microsoft.Graphics.Canvas.h"

namespace winrt::impl {

template <typename D> Microsoft::Graphics::Canvas::CanvasDevice consume_Microsoft_Graphics_Canvas_Geometry_ICanvasCachedGeometry<D>::Device() const
{
    Microsoft::Graphics::Canvas::CanvasDevice value{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasCachedGeometry)->get_Device(put_abi(value)));
    return value;
}

template <typename D> Microsoft::Graphics::Canvas::Geometry::CanvasCachedGeometry consume_Microsoft_Graphics_Canvas_Geometry_ICanvasCachedGeometryStatics<D>::CreateFill(Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& geometry) const
{
    Microsoft::Graphics::Canvas::Geometry::CanvasCachedGeometry cachedGeometry{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasCachedGeometryStatics)->CreateFill(get_abi(geometry), put_abi(cachedGeometry)));
    return cachedGeometry;
}

template <typename D> Microsoft::Graphics::Canvas::Geometry::CanvasCachedGeometry consume_Microsoft_Graphics_Canvas_Geometry_ICanvasCachedGeometryStatics<D>::CreateFill(Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& geometry, float flatteningTolerance) const
{
    Microsoft::Graphics::Canvas::Geometry::CanvasCachedGeometry cachedGeometry{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasCachedGeometryStatics)->CreateFillWithFlatteningTolerance(get_abi(geometry), flatteningTolerance, put_abi(cachedGeometry)));
    return cachedGeometry;
}

template <typename D> Microsoft::Graphics::Canvas::Geometry::CanvasCachedGeometry consume_Microsoft_Graphics_Canvas_Geometry_ICanvasCachedGeometryStatics<D>::CreateStroke(Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& geometry, float strokeWidth) const
{
    Microsoft::Graphics::Canvas::Geometry::CanvasCachedGeometry cachedGeometry{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasCachedGeometryStatics)->CreateStroke(get_abi(geometry), strokeWidth, put_abi(cachedGeometry)));
    return cachedGeometry;
}

template <typename D> Microsoft::Graphics::Canvas::Geometry::CanvasCachedGeometry consume_Microsoft_Graphics_Canvas_Geometry_ICanvasCachedGeometryStatics<D>::CreateStroke(Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& geometry, float strokeWidth, Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const& strokeStyle) const
{
    Microsoft::Graphics::Canvas::Geometry::CanvasCachedGeometry cachedGeometry{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasCachedGeometryStatics)->CreateStrokeWithStrokeStyle(get_abi(geometry), strokeWidth, get_abi(strokeStyle), put_abi(cachedGeometry)));
    return cachedGeometry;
}

template <typename D> Microsoft::Graphics::Canvas::Geometry::CanvasCachedGeometry consume_Microsoft_Graphics_Canvas_Geometry_ICanvasCachedGeometryStatics<D>::CreateStroke(Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& geometry, float strokeWidth, Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const& strokeStyle, float flatteningTolerance) const
{
    Microsoft::Graphics::Canvas::Geometry::CanvasCachedGeometry cachedGeometry{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasCachedGeometryStatics)->CreateStrokeWithStrokeStyleAndFlatteningTolerance(get_abi(geometry), strokeWidth, get_abi(strokeStyle), flatteningTolerance, put_abi(cachedGeometry)));
    return cachedGeometry;
}

template <typename D> Microsoft::Graphics::Canvas::Geometry::CanvasGeometry consume_Microsoft_Graphics_Canvas_Geometry_ICanvasGeometry<D>::CombineWith(Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& otherGeometry, Windows::Foundation::Numerics::float3x2 const& otherGeometryTransform, Microsoft::Graphics::Canvas::Geometry::CanvasGeometryCombine const& combine) const
{
    Microsoft::Graphics::Canvas::Geometry::CanvasGeometry geometry{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry)->CombineWith(get_abi(otherGeometry), get_abi(otherGeometryTransform), get_abi(combine), put_abi(geometry)));
    return geometry;
}

template <typename D> Microsoft::Graphics::Canvas::Geometry::CanvasGeometry consume_Microsoft_Graphics_Canvas_Geometry_ICanvasGeometry<D>::CombineWith(Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& otherGeometry, Windows::Foundation::Numerics::float3x2 const& otherGeometryTransform, Microsoft::Graphics::Canvas::Geometry::CanvasGeometryCombine const& combine, float flatteningTolerance) const
{
    Microsoft::Graphics::Canvas::Geometry::CanvasGeometry geometry{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry)->CombineWithUsingFlatteningTolerance(get_abi(otherGeometry), get_abi(otherGeometryTransform), get_abi(combine), flatteningTolerance, put_abi(geometry)));
    return geometry;
}

template <typename D> Microsoft::Graphics::Canvas::Geometry::CanvasGeometry consume_Microsoft_Graphics_Canvas_Geometry_ICanvasGeometry<D>::Stroke(float strokeWidth) const
{
    Microsoft::Graphics::Canvas::Geometry::CanvasGeometry geometry{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry)->Stroke(strokeWidth, put_abi(geometry)));
    return geometry;
}

template <typename D> Microsoft::Graphics::Canvas::Geometry::CanvasGeometry consume_Microsoft_Graphics_Canvas_Geometry_ICanvasGeometry<D>::Stroke(float strokeWidth, Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const& strokeStyle) const
{
    Microsoft::Graphics::Canvas::Geometry::CanvasGeometry geometry{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry)->StrokeWithStrokeStyle(strokeWidth, get_abi(strokeStyle), put_abi(geometry)));
    return geometry;
}

template <typename D> Microsoft::Graphics::Canvas::Geometry::CanvasGeometry consume_Microsoft_Graphics_Canvas_Geometry_ICanvasGeometry<D>::Stroke(float strokeWidth, Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const& strokeStyle, Windows::Foundation::Numerics::float3x2 const& transform, float flatteningTolerance) const
{
    Microsoft::Graphics::Canvas::Geometry::CanvasGeometry geometry{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry)->StrokeWithAllOptions(strokeWidth, get_abi(strokeStyle), get_abi(transform), flatteningTolerance, put_abi(geometry)));
    return geometry;
}

template <typename D> Microsoft::Graphics::Canvas::Geometry::CanvasGeometry consume_Microsoft_Graphics_Canvas_Geometry_ICanvasGeometry<D>::Outline() const
{
    Microsoft::Graphics::Canvas::Geometry::CanvasGeometry geometry{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry)->Outline(put_abi(geometry)));
    return geometry;
}

template <typename D> Microsoft::Graphics::Canvas::Geometry::CanvasGeometry consume_Microsoft_Graphics_Canvas_Geometry_ICanvasGeometry<D>::Outline(Windows::Foundation::Numerics::float3x2 const& transform, float flatteningTolerance) const
{
    Microsoft::Graphics::Canvas::Geometry::CanvasGeometry geometry{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry)->OutlineWithTransformAndFlatteningTolerance(get_abi(transform), flatteningTolerance, put_abi(geometry)));
    return geometry;
}

template <typename D> Microsoft::Graphics::Canvas::Geometry::CanvasGeometry consume_Microsoft_Graphics_Canvas_Geometry_ICanvasGeometry<D>::Simplify(Microsoft::Graphics::Canvas::Geometry::CanvasGeometrySimplification const& simplification) const
{
    Microsoft::Graphics::Canvas::Geometry::CanvasGeometry geometry{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry)->Simplify(get_abi(simplification), put_abi(geometry)));
    return geometry;
}

template <typename D> Microsoft::Graphics::Canvas::Geometry::CanvasGeometry consume_Microsoft_Graphics_Canvas_Geometry_ICanvasGeometry<D>::Simplify(Microsoft::Graphics::Canvas::Geometry::CanvasGeometrySimplification const& simplification, Windows::Foundation::Numerics::float3x2 const& transform, float flatteningTolerance) const
{
    Microsoft::Graphics::Canvas::Geometry::CanvasGeometry geometry{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry)->SimplifyWithTransformAndFlatteningTolerance(get_abi(simplification), get_abi(transform), flatteningTolerance, put_abi(geometry)));
    return geometry;
}

template <typename D> Microsoft::Graphics::Canvas::Geometry::CanvasGeometry consume_Microsoft_Graphics_Canvas_Geometry_ICanvasGeometry<D>::Transform(Windows::Foundation::Numerics::float3x2 const& transform) const
{
    Microsoft::Graphics::Canvas::Geometry::CanvasGeometry geometry{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry)->Transform(get_abi(transform), put_abi(geometry)));
    return geometry;
}

template <typename D> Microsoft::Graphics::Canvas::Geometry::CanvasGeometryRelation consume_Microsoft_Graphics_Canvas_Geometry_ICanvasGeometry<D>::CompareWith(Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& otherGeometry) const
{
    Microsoft::Graphics::Canvas::Geometry::CanvasGeometryRelation relation{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry)->CompareWith(get_abi(otherGeometry), put_abi(relation)));
    return relation;
}

template <typename D> Microsoft::Graphics::Canvas::Geometry::CanvasGeometryRelation consume_Microsoft_Graphics_Canvas_Geometry_ICanvasGeometry<D>::CompareWith(Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& otherGeometry, Windows::Foundation::Numerics::float3x2 const& otherGeometryTransform, float flatteningTolerance) const
{
    Microsoft::Graphics::Canvas::Geometry::CanvasGeometryRelation relation{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry)->CompareWithUsingTransformAndFlatteningTolerance(get_abi(otherGeometry), get_abi(otherGeometryTransform), flatteningTolerance, put_abi(relation)));
    return relation;
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Geometry_ICanvasGeometry<D>::ComputeArea() const
{
    float area{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry)->ComputeArea(&area));
    return area;
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Geometry_ICanvasGeometry<D>::ComputeArea(Windows::Foundation::Numerics::float3x2 const& transform, float flatteningTolerance) const
{
    float area{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry)->ComputeAreaWithTransformAndFlatteningTolerance(get_abi(transform), flatteningTolerance, &area));
    return area;
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Geometry_ICanvasGeometry<D>::ComputePathLength() const
{
    float length{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry)->ComputePathLength(&length));
    return length;
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Geometry_ICanvasGeometry<D>::ComputePathLength(Windows::Foundation::Numerics::float3x2 const& transform, float flatteningTolerance) const
{
    float length{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry)->ComputePathLengthWithTransformAndFlatteningTolerance(get_abi(transform), flatteningTolerance, &length));
    return length;
}

template <typename D> Windows::Foundation::Numerics::float2 consume_Microsoft_Graphics_Canvas_Geometry_ICanvasGeometry<D>::ComputePointOnPath(float distance) const
{
    Windows::Foundation::Numerics::float2 point{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry)->ComputePointOnPath(distance, put_abi(point)));
    return point;
}

template <typename D> Windows::Foundation::Numerics::float2 consume_Microsoft_Graphics_Canvas_Geometry_ICanvasGeometry<D>::ComputePointOnPath(float distance, Windows::Foundation::Numerics::float2& tangent) const
{
    Windows::Foundation::Numerics::float2 point{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry)->ComputePointOnPathWithTangent(distance, put_abi(tangent), put_abi(point)));
    return point;
}

template <typename D> Windows::Foundation::Numerics::float2 consume_Microsoft_Graphics_Canvas_Geometry_ICanvasGeometry<D>::ComputePointOnPath(float length, Windows::Foundation::Numerics::float3x2 const& transform, float flatteningTolerance, Windows::Foundation::Numerics::float2& tangent) const
{
    Windows::Foundation::Numerics::float2 point{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry)->ComputePointOnPathWithTransformAndFlatteningToleranceAndTangent(length, get_abi(transform), flatteningTolerance, put_abi(tangent), put_abi(point)));
    return point;
}

template <typename D> bool consume_Microsoft_Graphics_Canvas_Geometry_ICanvasGeometry<D>::FillContainsPoint(Windows::Foundation::Numerics::float2 const& point) const
{
    bool containsPoint{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry)->FillContainsPoint(get_abi(point), &containsPoint));
    return containsPoint;
}

template <typename D> bool consume_Microsoft_Graphics_Canvas_Geometry_ICanvasGeometry<D>::FillContainsPoint(Windows::Foundation::Numerics::float2 const& point, Windows::Foundation::Numerics::float3x2 const& transform, float flatteningTolerance) const
{
    bool containsPoint{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry)->FillContainsPointWithTransformAndFlatteningTolerance(get_abi(point), get_abi(transform), flatteningTolerance, &containsPoint));
    return containsPoint;
}

template <typename D> Windows::Foundation::Rect consume_Microsoft_Graphics_Canvas_Geometry_ICanvasGeometry<D>::ComputeBounds() const
{
    Windows::Foundation::Rect bounds{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry)->ComputeBounds(put_abi(bounds)));
    return bounds;
}

template <typename D> Windows::Foundation::Rect consume_Microsoft_Graphics_Canvas_Geometry_ICanvasGeometry<D>::ComputeBounds(Windows::Foundation::Numerics::float3x2 const& transform) const
{
    Windows::Foundation::Rect bounds{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry)->ComputeBoundsWithTransform(get_abi(transform), put_abi(bounds)));
    return bounds;
}

template <typename D> Windows::Foundation::Rect consume_Microsoft_Graphics_Canvas_Geometry_ICanvasGeometry<D>::ComputeStrokeBounds(float strokeWidth) const
{
    Windows::Foundation::Rect bounds{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry)->ComputeStrokeBounds(strokeWidth, put_abi(bounds)));
    return bounds;
}

template <typename D> Windows::Foundation::Rect consume_Microsoft_Graphics_Canvas_Geometry_ICanvasGeometry<D>::ComputeStrokeBounds(float strokeWidth, Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const& strokeStyle) const
{
    Windows::Foundation::Rect bounds{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry)->ComputeStrokeBoundsWithStrokeStyle(strokeWidth, get_abi(strokeStyle), put_abi(bounds)));
    return bounds;
}

template <typename D> Windows::Foundation::Rect consume_Microsoft_Graphics_Canvas_Geometry_ICanvasGeometry<D>::ComputeStrokeBounds(float strokeWidth, Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const& strokeStyle, Windows::Foundation::Numerics::float3x2 const& transform, float flatteningTolerance) const
{
    Windows::Foundation::Rect bounds{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry)->ComputeStrokeBoundsWithAllOptions(strokeWidth, get_abi(strokeStyle), get_abi(transform), flatteningTolerance, put_abi(bounds)));
    return bounds;
}

template <typename D> bool consume_Microsoft_Graphics_Canvas_Geometry_ICanvasGeometry<D>::StrokeContainsPoint(Windows::Foundation::Numerics::float2 const& point, float strokeWidth) const
{
    bool containsPoint{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry)->StrokeContainsPoint(get_abi(point), strokeWidth, &containsPoint));
    return containsPoint;
}

template <typename D> bool consume_Microsoft_Graphics_Canvas_Geometry_ICanvasGeometry<D>::StrokeContainsPoint(Windows::Foundation::Numerics::float2 const& point, float strokeWidth, Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const& strokeStyle) const
{
    bool containsPoint{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry)->StrokeContainsPointWithStrokeStyle(get_abi(point), strokeWidth, get_abi(strokeStyle), &containsPoint));
    return containsPoint;
}

template <typename D> bool consume_Microsoft_Graphics_Canvas_Geometry_ICanvasGeometry<D>::StrokeContainsPoint(Windows::Foundation::Numerics::float2 const& point, float strokeWidth, Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const& strokeStyle, Windows::Foundation::Numerics::float3x2 const& transform, float flatteningTolerance) const
{
    bool containsPoint{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry)->StrokeContainsPointWithAllOptions(get_abi(point), strokeWidth, get_abi(strokeStyle), get_abi(transform), flatteningTolerance, &containsPoint));
    return containsPoint;
}

template <typename D> com_array<Microsoft::Graphics::Canvas::Geometry::CanvasTriangleVertices> consume_Microsoft_Graphics_Canvas_Geometry_ICanvasGeometry<D>::Tessellate() const
{
    com_array<Microsoft::Graphics::Canvas::Geometry::CanvasTriangleVertices> triangles;
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry)->Tessellate(impl::put_size_abi(triangles), put_abi(triangles)));
    return triangles;
}

template <typename D> com_array<Microsoft::Graphics::Canvas::Geometry::CanvasTriangleVertices> consume_Microsoft_Graphics_Canvas_Geometry_ICanvasGeometry<D>::Tessellate(Windows::Foundation::Numerics::float3x2 const& transform, float flatteningTolerance) const
{
    com_array<Microsoft::Graphics::Canvas::Geometry::CanvasTriangleVertices> triangles;
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry)->TessellateWithTransformAndFlatteningTolerance(get_abi(transform), flatteningTolerance, impl::put_size_abi(triangles), put_abi(triangles)));
    return triangles;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Geometry_ICanvasGeometry<D>::SendPathTo(Microsoft::Graphics::Canvas::Geometry::ICanvasPathReceiver const& streamReader) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry)->SendPathTo(get_abi(streamReader)));
}

template <typename D> Microsoft::Graphics::Canvas::CanvasDevice consume_Microsoft_Graphics_Canvas_Geometry_ICanvasGeometry<D>::Device() const
{
    Microsoft::Graphics::Canvas::CanvasDevice value{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry)->get_Device(put_abi(value)));
    return value;
}

template <typename D> Microsoft::Graphics::Canvas::Geometry::CanvasGeometry consume_Microsoft_Graphics_Canvas_Geometry_ICanvasGeometryStatics<D>::CreateRectangle(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Foundation::Rect const& rect) const
{
    Microsoft::Graphics::Canvas::Geometry::CanvasGeometry geometry{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasGeometryStatics)->CreateRectangle(get_abi(resourceCreator), get_abi(rect), put_abi(geometry)));
    return geometry;
}

template <typename D> Microsoft::Graphics::Canvas::Geometry::CanvasGeometry consume_Microsoft_Graphics_Canvas_Geometry_ICanvasGeometryStatics<D>::CreateRectangle(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, float x, float y, float w, float h) const
{
    Microsoft::Graphics::Canvas::Geometry::CanvasGeometry geometry{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasGeometryStatics)->CreateRectangleAtCoords(get_abi(resourceCreator), x, y, w, h, put_abi(geometry)));
    return geometry;
}

template <typename D> Microsoft::Graphics::Canvas::Geometry::CanvasGeometry consume_Microsoft_Graphics_Canvas_Geometry_ICanvasGeometryStatics<D>::CreateRoundedRectangle(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Foundation::Rect const& rect, float radiusX, float radiusY) const
{
    Microsoft::Graphics::Canvas::Geometry::CanvasGeometry geometry{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasGeometryStatics)->CreateRoundedRectangle(get_abi(resourceCreator), get_abi(rect), radiusX, radiusY, put_abi(geometry)));
    return geometry;
}

template <typename D> Microsoft::Graphics::Canvas::Geometry::CanvasGeometry consume_Microsoft_Graphics_Canvas_Geometry_ICanvasGeometryStatics<D>::CreateRoundedRectangle(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, float x, float y, float w, float h, float radiusX, float radiusY) const
{
    Microsoft::Graphics::Canvas::Geometry::CanvasGeometry geometry{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasGeometryStatics)->CreateRoundedRectangleAtCoords(get_abi(resourceCreator), x, y, w, h, radiusX, radiusY, put_abi(geometry)));
    return geometry;
}

template <typename D> Microsoft::Graphics::Canvas::Geometry::CanvasGeometry consume_Microsoft_Graphics_Canvas_Geometry_ICanvasGeometryStatics<D>::CreateEllipse(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Foundation::Numerics::float2 const& centerPoint, float radiusX, float radiusY) const
{
    Microsoft::Graphics::Canvas::Geometry::CanvasGeometry geometry{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasGeometryStatics)->CreateEllipse(get_abi(resourceCreator), get_abi(centerPoint), radiusX, radiusY, put_abi(geometry)));
    return geometry;
}

template <typename D> Microsoft::Graphics::Canvas::Geometry::CanvasGeometry consume_Microsoft_Graphics_Canvas_Geometry_ICanvasGeometryStatics<D>::CreateEllipse(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, float x, float y, float radiusX, float radiusY) const
{
    Microsoft::Graphics::Canvas::Geometry::CanvasGeometry geometry{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasGeometryStatics)->CreateEllipseAtCoords(get_abi(resourceCreator), x, y, radiusX, radiusY, put_abi(geometry)));
    return geometry;
}

template <typename D> Microsoft::Graphics::Canvas::Geometry::CanvasGeometry consume_Microsoft_Graphics_Canvas_Geometry_ICanvasGeometryStatics<D>::CreateCircle(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Foundation::Numerics::float2 const& centerPoint, float radius) const
{
    Microsoft::Graphics::Canvas::Geometry::CanvasGeometry geometry{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasGeometryStatics)->CreateCircle(get_abi(resourceCreator), get_abi(centerPoint), radius, put_abi(geometry)));
    return geometry;
}

template <typename D> Microsoft::Graphics::Canvas::Geometry::CanvasGeometry consume_Microsoft_Graphics_Canvas_Geometry_ICanvasGeometryStatics<D>::CreateCircle(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, float x, float y, float radius) const
{
    Microsoft::Graphics::Canvas::Geometry::CanvasGeometry geometry{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasGeometryStatics)->CreateCircleAtCoords(get_abi(resourceCreator), x, y, radius, put_abi(geometry)));
    return geometry;
}

template <typename D> Microsoft::Graphics::Canvas::Geometry::CanvasGeometry consume_Microsoft_Graphics_Canvas_Geometry_ICanvasGeometryStatics<D>::CreatePath(Microsoft::Graphics::Canvas::Geometry::CanvasPathBuilder const& pathBuilder) const
{
    Microsoft::Graphics::Canvas::Geometry::CanvasGeometry geometry{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasGeometryStatics)->CreatePath(get_abi(pathBuilder), put_abi(geometry)));
    return geometry;
}

template <typename D> Microsoft::Graphics::Canvas::Geometry::CanvasGeometry consume_Microsoft_Graphics_Canvas_Geometry_ICanvasGeometryStatics<D>::CreatePolygon(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<Windows::Foundation::Numerics::float2 const> points) const
{
    Microsoft::Graphics::Canvas::Geometry::CanvasGeometry geometry{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasGeometryStatics)->CreatePolygon(get_abi(resourceCreator), points.size(), get_abi(points), put_abi(geometry)));
    return geometry;
}

template <typename D> Microsoft::Graphics::Canvas::Geometry::CanvasGeometry consume_Microsoft_Graphics_Canvas_Geometry_ICanvasGeometryStatics<D>::CreateGroup(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const> geometries) const
{
    Microsoft::Graphics::Canvas::Geometry::CanvasGeometry geometry{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasGeometryStatics)->CreateGroup(get_abi(resourceCreator), geometries.size(), get_abi(geometries), put_abi(geometry)));
    return geometry;
}

template <typename D> Microsoft::Graphics::Canvas::Geometry::CanvasGeometry consume_Microsoft_Graphics_Canvas_Geometry_ICanvasGeometryStatics<D>::CreateGroup(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const> geometries, Microsoft::Graphics::Canvas::Geometry::CanvasFilledRegionDetermination const& filledRegionDetermination) const
{
    Microsoft::Graphics::Canvas::Geometry::CanvasGeometry geometry{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasGeometryStatics)->CreateGroupWithFilledRegionDetermination(get_abi(resourceCreator), geometries.size(), get_abi(geometries), get_abi(filledRegionDetermination), put_abi(geometry)));
    return geometry;
}

template <typename D> Microsoft::Graphics::Canvas::Geometry::CanvasGeometry consume_Microsoft_Graphics_Canvas_Geometry_ICanvasGeometryStatics<D>::CreateText(Microsoft::Graphics::Canvas::Text::CanvasTextLayout const& textLayout) const
{
    Microsoft::Graphics::Canvas::Geometry::CanvasGeometry geometry{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasGeometryStatics)->CreateText(get_abi(textLayout), put_abi(geometry)));
    return geometry;
}

template <typename D> Microsoft::Graphics::Canvas::Geometry::CanvasGeometry consume_Microsoft_Graphics_Canvas_Geometry_ICanvasGeometryStatics<D>::CreateGlyphRun(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Foundation::Numerics::float2 const& point, Microsoft::Graphics::Canvas::Text::CanvasFontFace const& fontFace, float fontSize, array_view<Microsoft::Graphics::Canvas::Text::CanvasGlyph const> glyphs, bool isSideways, uint32_t bidiLevel, Microsoft::Graphics::Canvas::Text::CanvasTextMeasuringMode const& measuringMode, Microsoft::Graphics::Canvas::Text::CanvasGlyphOrientation const& glyphOrientation) const
{
    Microsoft::Graphics::Canvas::Geometry::CanvasGeometry geometry{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasGeometryStatics)->CreateGlyphRun(get_abi(resourceCreator), get_abi(point), get_abi(fontFace), fontSize, glyphs.size(), get_abi(glyphs), isSideways, bidiLevel, get_abi(measuringMode), get_abi(glyphOrientation), put_abi(geometry)));
    return geometry;
}

template <typename D> Microsoft::Graphics::Canvas::Geometry::CanvasGeometry consume_Microsoft_Graphics_Canvas_Geometry_ICanvasGeometryStatics<D>::CreateInk(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, param::iterable<Windows::UI::Input::Inking::InkStroke> const& inkStrokes) const
{
    Microsoft::Graphics::Canvas::Geometry::CanvasGeometry geometry{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasGeometryStatics)->CreateInk(get_abi(resourceCreator), get_abi(inkStrokes), put_abi(geometry)));
    return geometry;
}

template <typename D> Microsoft::Graphics::Canvas::Geometry::CanvasGeometry consume_Microsoft_Graphics_Canvas_Geometry_ICanvasGeometryStatics<D>::CreateInk(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, param::iterable<Windows::UI::Input::Inking::InkStroke> const& inkStrokes, Windows::Foundation::Numerics::float3x2 const& transform, float flatteningTolerance) const
{
    Microsoft::Graphics::Canvas::Geometry::CanvasGeometry geometry{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasGeometryStatics)->CreateInkWithTransformAndFlatteningTolerance(get_abi(resourceCreator), get_abi(inkStrokes), get_abi(transform), flatteningTolerance, put_abi(geometry)));
    return geometry;
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Geometry_ICanvasGeometryStatics<D>::ComputeFlatteningTolerance(float dpi, float maximumZoomFactor) const
{
    float flatteningTolerance{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasGeometryStatics)->ComputeFlatteningTolerance(dpi, maximumZoomFactor, &flatteningTolerance));
    return flatteningTolerance;
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Geometry_ICanvasGeometryStatics<D>::ComputeFlatteningTolerance(float dpi, float maximumZoomFactor, Windows::Foundation::Numerics::float3x2 const& expectedGeometryTransform) const
{
    float flatteningTolerance{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasGeometryStatics)->ComputeFlatteningToleranceWithTransform(dpi, maximumZoomFactor, get_abi(expectedGeometryTransform), &flatteningTolerance));
    return flatteningTolerance;
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Geometry_ICanvasGeometryStatics<D>::DefaultFlatteningTolerance() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasGeometryStatics)->get_DefaultFlatteningTolerance(&value));
    return value;
}

template <typename D> com_array<Microsoft::Graphics::Canvas::Geometry::CanvasGradientMeshPatch> consume_Microsoft_Graphics_Canvas_Geometry_ICanvasGradientMesh<D>::Patches() const
{
    com_array<Microsoft::Graphics::Canvas::Geometry::CanvasGradientMeshPatch> valueElements;
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasGradientMesh)->get_Patches(impl::put_size_abi(valueElements), put_abi(valueElements)));
    return valueElements;
}

template <typename D> Windows::Foundation::Rect consume_Microsoft_Graphics_Canvas_Geometry_ICanvasGradientMesh<D>::GetBounds(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator) const
{
    Windows::Foundation::Rect bounds{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasGradientMesh)->GetBounds(get_abi(resourceCreator), put_abi(bounds)));
    return bounds;
}

template <typename D> Windows::Foundation::Rect consume_Microsoft_Graphics_Canvas_Geometry_ICanvasGradientMesh<D>::GetBounds(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Foundation::Numerics::float3x2 const& transform) const
{
    Windows::Foundation::Rect bounds{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasGradientMesh)->GetBoundsWithTransform(get_abi(resourceCreator), get_abi(transform), put_abi(bounds)));
    return bounds;
}

template <typename D> Microsoft::Graphics::Canvas::CanvasDevice consume_Microsoft_Graphics_Canvas_Geometry_ICanvasGradientMesh<D>::Device() const
{
    Microsoft::Graphics::Canvas::CanvasDevice value{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasGradientMesh)->get_Device(put_abi(value)));
    return value;
}

template <typename D> Microsoft::Graphics::Canvas::Geometry::CanvasGradientMesh consume_Microsoft_Graphics_Canvas_Geometry_ICanvasGradientMeshFactory<D>::Create(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<Microsoft::Graphics::Canvas::Geometry::CanvasGradientMeshPatch const> patchElements) const
{
    Microsoft::Graphics::Canvas::Geometry::CanvasGradientMesh canvasGradientMesh{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasGradientMeshFactory)->Create(get_abi(resourceCreator), patchElements.size(), get_abi(patchElements), put_abi(canvasGradientMesh)));
    return canvasGradientMesh;
}

template <typename D> Microsoft::Graphics::Canvas::Geometry::CanvasGradientMeshPatch consume_Microsoft_Graphics_Canvas_Geometry_ICanvasGradientMeshStatics<D>::CreateCoonsPatch(array_view<Windows::Foundation::Numerics::float2 const> points, array_view<Windows::Foundation::Numerics::float4 const> colors, array_view<Microsoft::Graphics::Canvas::Geometry::CanvasGradientMeshPatchEdge const> edges) const
{
    Microsoft::Graphics::Canvas::Geometry::CanvasGradientMeshPatch gradientMeshPatch{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasGradientMeshStatics)->CreateCoonsPatch(points.size(), get_abi(points), colors.size(), get_abi(colors), edges.size(), get_abi(edges), put_abi(gradientMeshPatch)));
    return gradientMeshPatch;
}

template <typename D> Microsoft::Graphics::Canvas::Geometry::CanvasGradientMeshPatch consume_Microsoft_Graphics_Canvas_Geometry_ICanvasGradientMeshStatics<D>::CreateTensorPatch(array_view<Windows::Foundation::Numerics::float2 const> points, array_view<Windows::Foundation::Numerics::float4 const> colors, array_view<Microsoft::Graphics::Canvas::Geometry::CanvasGradientMeshPatchEdge const> edges) const
{
    Microsoft::Graphics::Canvas::Geometry::CanvasGradientMeshPatch gradientMeshPatch{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasGradientMeshStatics)->CreateTensorPatch(points.size(), get_abi(points), colors.size(), get_abi(colors), edges.size(), get_abi(edges), put_abi(gradientMeshPatch)));
    return gradientMeshPatch;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Geometry_ICanvasPathBuilder<D>::BeginFigure(Windows::Foundation::Numerics::float2 const& startPoint, Microsoft::Graphics::Canvas::Geometry::CanvasFigureFill const& figureFill) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasPathBuilder)->BeginFigureWithFigureFill(get_abi(startPoint), get_abi(figureFill)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Geometry_ICanvasPathBuilder<D>::BeginFigure(Windows::Foundation::Numerics::float2 const& startPoint) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasPathBuilder)->BeginFigure(get_abi(startPoint)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Geometry_ICanvasPathBuilder<D>::BeginFigure(float startX, float startY, Microsoft::Graphics::Canvas::Geometry::CanvasFigureFill const& figureFill) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasPathBuilder)->BeginFigureAtCoordsWithFigureFill(startX, startY, get_abi(figureFill)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Geometry_ICanvasPathBuilder<D>::BeginFigure(float startX, float startY) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasPathBuilder)->BeginFigureAtCoords(startX, startY));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Geometry_ICanvasPathBuilder<D>::AddArc(Windows::Foundation::Numerics::float2 const& endPoint, float radiusX, float radiusY, float rotationAngle, Microsoft::Graphics::Canvas::Geometry::CanvasSweepDirection const& sweepDirection, Microsoft::Graphics::Canvas::Geometry::CanvasArcSize const& arcSize) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasPathBuilder)->AddArcToPoint(get_abi(endPoint), radiusX, radiusY, rotationAngle, get_abi(sweepDirection), get_abi(arcSize)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Geometry_ICanvasPathBuilder<D>::AddArc(Windows::Foundation::Numerics::float2 const& centerPoint, float radiusX, float radiusY, float startAngle, float sweepAngle) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasPathBuilder)->AddArcAroundEllipse(get_abi(centerPoint), radiusX, radiusY, startAngle, sweepAngle));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Geometry_ICanvasPathBuilder<D>::AddCubicBezier(Windows::Foundation::Numerics::float2 const& controlPoint1, Windows::Foundation::Numerics::float2 const& controlPoint2, Windows::Foundation::Numerics::float2 const& endPoint) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasPathBuilder)->AddCubicBezier(get_abi(controlPoint1), get_abi(controlPoint2), get_abi(endPoint)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Geometry_ICanvasPathBuilder<D>::AddLine(Windows::Foundation::Numerics::float2 const& endPoint) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasPathBuilder)->AddLine(get_abi(endPoint)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Geometry_ICanvasPathBuilder<D>::AddLine(float x, float y) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasPathBuilder)->AddLineWithCoords(x, y));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Geometry_ICanvasPathBuilder<D>::AddQuadraticBezier(Windows::Foundation::Numerics::float2 const& controlPoint, Windows::Foundation::Numerics::float2 const& endPoint) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasPathBuilder)->AddQuadraticBezier(get_abi(controlPoint), get_abi(endPoint)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Geometry_ICanvasPathBuilder<D>::SetFilledRegionDetermination(Microsoft::Graphics::Canvas::Geometry::CanvasFilledRegionDetermination const& filledRegionDetermination) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasPathBuilder)->SetFilledRegionDetermination(get_abi(filledRegionDetermination)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Geometry_ICanvasPathBuilder<D>::SetSegmentOptions(Microsoft::Graphics::Canvas::Geometry::CanvasFigureSegmentOptions const& figureSegmentOptions) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasPathBuilder)->SetSegmentOptions(get_abi(figureSegmentOptions)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Geometry_ICanvasPathBuilder<D>::EndFigure(Microsoft::Graphics::Canvas::Geometry::CanvasFigureLoop const& figureLoop) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasPathBuilder)->EndFigure(get_abi(figureLoop)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Geometry_ICanvasPathBuilder<D>::AddGeometry(Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& geometry) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasPathBuilder)->AddGeometry(get_abi(geometry)));
}

template <typename D> Microsoft::Graphics::Canvas::Geometry::CanvasPathBuilder consume_Microsoft_Graphics_Canvas_Geometry_ICanvasPathBuilderFactory<D>::Create(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator) const
{
    Microsoft::Graphics::Canvas::Geometry::CanvasPathBuilder canvasPathBuilder{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasPathBuilderFactory)->Create(get_abi(resourceCreator), put_abi(canvasPathBuilder)));
    return canvasPathBuilder;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Geometry_ICanvasPathReceiver<D>::BeginFigure(Windows::Foundation::Numerics::float2 const& startPoint, Microsoft::Graphics::Canvas::Geometry::CanvasFigureFill const& figureFill) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasPathReceiver)->BeginFigure(get_abi(startPoint), get_abi(figureFill)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Geometry_ICanvasPathReceiver<D>::AddArc(Windows::Foundation::Numerics::float2 const& endPoint, float radiusX, float radiusY, float rotationAngle, Microsoft::Graphics::Canvas::Geometry::CanvasSweepDirection const& sweepDirection, Microsoft::Graphics::Canvas::Geometry::CanvasArcSize const& arcSize) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasPathReceiver)->AddArc(get_abi(endPoint), radiusX, radiusY, rotationAngle, get_abi(sweepDirection), get_abi(arcSize)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Geometry_ICanvasPathReceiver<D>::AddCubicBezier(Windows::Foundation::Numerics::float2 const& controlPoint1, Windows::Foundation::Numerics::float2 const& controlPoint2, Windows::Foundation::Numerics::float2 const& endPoint) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasPathReceiver)->AddCubicBezier(get_abi(controlPoint1), get_abi(controlPoint2), get_abi(endPoint)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Geometry_ICanvasPathReceiver<D>::AddLine(Windows::Foundation::Numerics::float2 const& endPoint) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasPathReceiver)->AddLine(get_abi(endPoint)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Geometry_ICanvasPathReceiver<D>::AddQuadraticBezier(Windows::Foundation::Numerics::float2 const& controlPoint, Windows::Foundation::Numerics::float2 const& endPoint) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasPathReceiver)->AddQuadraticBezier(get_abi(controlPoint), get_abi(endPoint)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Geometry_ICanvasPathReceiver<D>::SetFilledRegionDetermination(Microsoft::Graphics::Canvas::Geometry::CanvasFilledRegionDetermination const& filledRegionDetermination) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasPathReceiver)->SetFilledRegionDetermination(get_abi(filledRegionDetermination)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Geometry_ICanvasPathReceiver<D>::SetSegmentOptions(Microsoft::Graphics::Canvas::Geometry::CanvasFigureSegmentOptions const& figureSegmentOptions) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasPathReceiver)->SetSegmentOptions(get_abi(figureSegmentOptions)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Geometry_ICanvasPathReceiver<D>::EndFigure(Microsoft::Graphics::Canvas::Geometry::CanvasFigureLoop const& figureLoop) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasPathReceiver)->EndFigure(get_abi(figureLoop)));
}

template <typename D> Microsoft::Graphics::Canvas::Geometry::CanvasCapStyle consume_Microsoft_Graphics_Canvas_Geometry_ICanvasStrokeStyle<D>::StartCap() const
{
    Microsoft::Graphics::Canvas::Geometry::CanvasCapStyle value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasStrokeStyle)->get_StartCap(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Geometry_ICanvasStrokeStyle<D>::StartCap(Microsoft::Graphics::Canvas::Geometry::CanvasCapStyle const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasStrokeStyle)->put_StartCap(get_abi(value)));
}

template <typename D> Microsoft::Graphics::Canvas::Geometry::CanvasCapStyle consume_Microsoft_Graphics_Canvas_Geometry_ICanvasStrokeStyle<D>::EndCap() const
{
    Microsoft::Graphics::Canvas::Geometry::CanvasCapStyle value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasStrokeStyle)->get_EndCap(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Geometry_ICanvasStrokeStyle<D>::EndCap(Microsoft::Graphics::Canvas::Geometry::CanvasCapStyle const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasStrokeStyle)->put_EndCap(get_abi(value)));
}

template <typename D> Microsoft::Graphics::Canvas::Geometry::CanvasCapStyle consume_Microsoft_Graphics_Canvas_Geometry_ICanvasStrokeStyle<D>::DashCap() const
{
    Microsoft::Graphics::Canvas::Geometry::CanvasCapStyle value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasStrokeStyle)->get_DashCap(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Geometry_ICanvasStrokeStyle<D>::DashCap(Microsoft::Graphics::Canvas::Geometry::CanvasCapStyle const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasStrokeStyle)->put_DashCap(get_abi(value)));
}

template <typename D> Microsoft::Graphics::Canvas::Geometry::CanvasLineJoin consume_Microsoft_Graphics_Canvas_Geometry_ICanvasStrokeStyle<D>::LineJoin() const
{
    Microsoft::Graphics::Canvas::Geometry::CanvasLineJoin value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasStrokeStyle)->get_LineJoin(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Geometry_ICanvasStrokeStyle<D>::LineJoin(Microsoft::Graphics::Canvas::Geometry::CanvasLineJoin const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasStrokeStyle)->put_LineJoin(get_abi(value)));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Geometry_ICanvasStrokeStyle<D>::MiterLimit() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasStrokeStyle)->get_MiterLimit(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Geometry_ICanvasStrokeStyle<D>::MiterLimit(float value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasStrokeStyle)->put_MiterLimit(value));
}

template <typename D> Microsoft::Graphics::Canvas::Geometry::CanvasDashStyle consume_Microsoft_Graphics_Canvas_Geometry_ICanvasStrokeStyle<D>::DashStyle() const
{
    Microsoft::Graphics::Canvas::Geometry::CanvasDashStyle value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasStrokeStyle)->get_DashStyle(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Geometry_ICanvasStrokeStyle<D>::DashStyle(Microsoft::Graphics::Canvas::Geometry::CanvasDashStyle const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasStrokeStyle)->put_DashStyle(get_abi(value)));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Geometry_ICanvasStrokeStyle<D>::DashOffset() const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasStrokeStyle)->get_DashOffset(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Geometry_ICanvasStrokeStyle<D>::DashOffset(float value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasStrokeStyle)->put_DashOffset(value));
}

template <typename D> com_array<float> consume_Microsoft_Graphics_Canvas_Geometry_ICanvasStrokeStyle<D>::CustomDashStyle() const
{
    com_array<float> valueElements;
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasStrokeStyle)->get_CustomDashStyle(impl::put_size_abi(valueElements), put_abi(valueElements)));
    return valueElements;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Geometry_ICanvasStrokeStyle<D>::CustomDashStyle(array_view<float const> valueElements) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasStrokeStyle)->put_CustomDashStyle(valueElements.size(), get_abi(valueElements)));
}

template <typename D> Microsoft::Graphics::Canvas::Geometry::CanvasStrokeTransformBehavior consume_Microsoft_Graphics_Canvas_Geometry_ICanvasStrokeStyle<D>::TransformBehavior() const
{
    Microsoft::Graphics::Canvas::Geometry::CanvasStrokeTransformBehavior value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasStrokeStyle)->get_TransformBehavior(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Geometry_ICanvasStrokeStyle<D>::TransformBehavior(Microsoft::Graphics::Canvas::Geometry::CanvasStrokeTransformBehavior const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Geometry::ICanvasStrokeStyle)->put_TransformBehavior(get_abi(value)));
}

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Geometry::ICanvasCachedGeometry> : produce_base<D, Microsoft::Graphics::Canvas::Geometry::ICanvasCachedGeometry>
{
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
struct produce<D, Microsoft::Graphics::Canvas::Geometry::ICanvasCachedGeometryStatics> : produce_base<D, Microsoft::Graphics::Canvas::Geometry::ICanvasCachedGeometryStatics>
{
    HRESULT __stdcall CreateFill(::IUnknown* geometry, ::IUnknown** cachedGeometry) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cachedGeometry = detach_abi(this->shim().CreateFill(*reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const*>(&geometry)));
            return S_OK;
        }
        catch (...)
        {
            *cachedGeometry = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateFillWithFlatteningTolerance(::IUnknown* geometry, float flatteningTolerance, ::IUnknown** cachedGeometry) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cachedGeometry = detach_abi(this->shim().CreateFill(*reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const*>(&geometry), flatteningTolerance));
            return S_OK;
        }
        catch (...)
        {
            *cachedGeometry = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateStroke(::IUnknown* geometry, float strokeWidth, ::IUnknown** cachedGeometry) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cachedGeometry = detach_abi(this->shim().CreateStroke(*reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const*>(&geometry), strokeWidth));
            return S_OK;
        }
        catch (...)
        {
            *cachedGeometry = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateStrokeWithStrokeStyle(::IUnknown* geometry, float strokeWidth, ::IUnknown* strokeStyle, ::IUnknown** cachedGeometry) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cachedGeometry = detach_abi(this->shim().CreateStroke(*reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const*>(&geometry), strokeWidth, *reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const*>(&strokeStyle)));
            return S_OK;
        }
        catch (...)
        {
            *cachedGeometry = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateStrokeWithStrokeStyleAndFlatteningTolerance(::IUnknown* geometry, float strokeWidth, ::IUnknown* strokeStyle, float flatteningTolerance, ::IUnknown** cachedGeometry) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cachedGeometry = detach_abi(this->shim().CreateStroke(*reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const*>(&geometry), strokeWidth, *reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const*>(&strokeStyle), flatteningTolerance));
            return S_OK;
        }
        catch (...)
        {
            *cachedGeometry = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry> : produce_base<D, Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry>
{
    HRESULT __stdcall CombineWith(::IUnknown* otherGeometry, Windows::Foundation::Numerics::float3x2 otherGeometryTransform, Microsoft::Graphics::Canvas::Geometry::CanvasGeometryCombine combine, ::IUnknown** geometry) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *geometry = detach_abi(this->shim().CombineWith(*reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const*>(&otherGeometry), *reinterpret_cast<Windows::Foundation::Numerics::float3x2 const*>(&otherGeometryTransform), *reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasGeometryCombine const*>(&combine)));
            return S_OK;
        }
        catch (...)
        {
            *geometry = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CombineWithUsingFlatteningTolerance(::IUnknown* otherGeometry, Windows::Foundation::Numerics::float3x2 otherGeometryTransform, Microsoft::Graphics::Canvas::Geometry::CanvasGeometryCombine combine, float flatteningTolerance, ::IUnknown** geometry) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *geometry = detach_abi(this->shim().CombineWith(*reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const*>(&otherGeometry), *reinterpret_cast<Windows::Foundation::Numerics::float3x2 const*>(&otherGeometryTransform), *reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasGeometryCombine const*>(&combine), flatteningTolerance));
            return S_OK;
        }
        catch (...)
        {
            *geometry = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Stroke(float strokeWidth, ::IUnknown** geometry) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *geometry = detach_abi(this->shim().Stroke(strokeWidth));
            return S_OK;
        }
        catch (...)
        {
            *geometry = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall StrokeWithStrokeStyle(float strokeWidth, ::IUnknown* strokeStyle, ::IUnknown** geometry) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *geometry = detach_abi(this->shim().Stroke(strokeWidth, *reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const*>(&strokeStyle)));
            return S_OK;
        }
        catch (...)
        {
            *geometry = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall StrokeWithAllOptions(float strokeWidth, ::IUnknown* strokeStyle, Windows::Foundation::Numerics::float3x2 transform, float flatteningTolerance, ::IUnknown** geometry) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *geometry = detach_abi(this->shim().Stroke(strokeWidth, *reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const*>(&strokeStyle), *reinterpret_cast<Windows::Foundation::Numerics::float3x2 const*>(&transform), flatteningTolerance));
            return S_OK;
        }
        catch (...)
        {
            *geometry = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Outline(::IUnknown** geometry) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *geometry = detach_abi(this->shim().Outline());
            return S_OK;
        }
        catch (...)
        {
            *geometry = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall OutlineWithTransformAndFlatteningTolerance(Windows::Foundation::Numerics::float3x2 transform, float flatteningTolerance, ::IUnknown** geometry) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *geometry = detach_abi(this->shim().Outline(*reinterpret_cast<Windows::Foundation::Numerics::float3x2 const*>(&transform), flatteningTolerance));
            return S_OK;
        }
        catch (...)
        {
            *geometry = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Simplify(Microsoft::Graphics::Canvas::Geometry::CanvasGeometrySimplification simplification, ::IUnknown** geometry) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *geometry = detach_abi(this->shim().Simplify(*reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasGeometrySimplification const*>(&simplification)));
            return S_OK;
        }
        catch (...)
        {
            *geometry = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SimplifyWithTransformAndFlatteningTolerance(Microsoft::Graphics::Canvas::Geometry::CanvasGeometrySimplification simplification, Windows::Foundation::Numerics::float3x2 transform, float flatteningTolerance, ::IUnknown** geometry) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *geometry = detach_abi(this->shim().Simplify(*reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasGeometrySimplification const*>(&simplification), *reinterpret_cast<Windows::Foundation::Numerics::float3x2 const*>(&transform), flatteningTolerance));
            return S_OK;
        }
        catch (...)
        {
            *geometry = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Transform(Windows::Foundation::Numerics::float3x2 transform, ::IUnknown** geometry) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *geometry = detach_abi(this->shim().Transform(*reinterpret_cast<Windows::Foundation::Numerics::float3x2 const*>(&transform)));
            return S_OK;
        }
        catch (...)
        {
            *geometry = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CompareWith(::IUnknown* otherGeometry, Microsoft::Graphics::Canvas::Geometry::CanvasGeometryRelation* relation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *relation = detach_abi(this->shim().CompareWith(*reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const*>(&otherGeometry)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CompareWithUsingTransformAndFlatteningTolerance(::IUnknown* otherGeometry, Windows::Foundation::Numerics::float3x2 otherGeometryTransform, float flatteningTolerance, Microsoft::Graphics::Canvas::Geometry::CanvasGeometryRelation* relation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *relation = detach_abi(this->shim().CompareWith(*reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const*>(&otherGeometry), *reinterpret_cast<Windows::Foundation::Numerics::float3x2 const*>(&otherGeometryTransform), flatteningTolerance));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ComputeArea(float* area) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *area = detach_abi(this->shim().ComputeArea());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ComputeAreaWithTransformAndFlatteningTolerance(Windows::Foundation::Numerics::float3x2 transform, float flatteningTolerance, float* area) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *area = detach_abi(this->shim().ComputeArea(*reinterpret_cast<Windows::Foundation::Numerics::float3x2 const*>(&transform), flatteningTolerance));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ComputePathLength(float* length) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *length = detach_abi(this->shim().ComputePathLength());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ComputePathLengthWithTransformAndFlatteningTolerance(Windows::Foundation::Numerics::float3x2 transform, float flatteningTolerance, float* length) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *length = detach_abi(this->shim().ComputePathLength(*reinterpret_cast<Windows::Foundation::Numerics::float3x2 const*>(&transform), flatteningTolerance));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ComputePointOnPath(float distance, Windows::Foundation::Numerics::float2* point) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *point = detach_abi(this->shim().ComputePointOnPath(distance));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ComputePointOnPathWithTangent(float distance, Windows::Foundation::Numerics::float2* tangent, Windows::Foundation::Numerics::float2* point) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *point = detach_abi(this->shim().ComputePointOnPath(distance, *reinterpret_cast<Windows::Foundation::Numerics::float2*>(tangent)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ComputePointOnPathWithTransformAndFlatteningToleranceAndTangent(float length, Windows::Foundation::Numerics::float3x2 transform, float flatteningTolerance, Windows::Foundation::Numerics::float2* tangent, Windows::Foundation::Numerics::float2* point) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *point = detach_abi(this->shim().ComputePointOnPath(length, *reinterpret_cast<Windows::Foundation::Numerics::float3x2 const*>(&transform), flatteningTolerance, *reinterpret_cast<Windows::Foundation::Numerics::float2*>(tangent)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FillContainsPoint(Windows::Foundation::Numerics::float2 point, bool* containsPoint) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *containsPoint = detach_abi(this->shim().FillContainsPoint(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&point)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FillContainsPointWithTransformAndFlatteningTolerance(Windows::Foundation::Numerics::float2 point, Windows::Foundation::Numerics::float3x2 transform, float flatteningTolerance, bool* containsPoint) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *containsPoint = detach_abi(this->shim().FillContainsPoint(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&point), *reinterpret_cast<Windows::Foundation::Numerics::float3x2 const*>(&transform), flatteningTolerance));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ComputeBounds(Windows::Foundation::Rect* bounds) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *bounds = detach_abi(this->shim().ComputeBounds());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ComputeBoundsWithTransform(Windows::Foundation::Numerics::float3x2 transform, Windows::Foundation::Rect* bounds) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *bounds = detach_abi(this->shim().ComputeBounds(*reinterpret_cast<Windows::Foundation::Numerics::float3x2 const*>(&transform)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ComputeStrokeBounds(float strokeWidth, Windows::Foundation::Rect* bounds) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *bounds = detach_abi(this->shim().ComputeStrokeBounds(strokeWidth));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ComputeStrokeBoundsWithStrokeStyle(float strokeWidth, ::IUnknown* strokeStyle, Windows::Foundation::Rect* bounds) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *bounds = detach_abi(this->shim().ComputeStrokeBounds(strokeWidth, *reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const*>(&strokeStyle)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ComputeStrokeBoundsWithAllOptions(float strokeWidth, ::IUnknown* strokeStyle, Windows::Foundation::Numerics::float3x2 transform, float flatteningTolerance, Windows::Foundation::Rect* bounds) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *bounds = detach_abi(this->shim().ComputeStrokeBounds(strokeWidth, *reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const*>(&strokeStyle), *reinterpret_cast<Windows::Foundation::Numerics::float3x2 const*>(&transform), flatteningTolerance));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall StrokeContainsPoint(Windows::Foundation::Numerics::float2 point, float strokeWidth, bool* containsPoint) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *containsPoint = detach_abi(this->shim().StrokeContainsPoint(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&point), strokeWidth));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall StrokeContainsPointWithStrokeStyle(Windows::Foundation::Numerics::float2 point, float strokeWidth, ::IUnknown* strokeStyle, bool* containsPoint) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *containsPoint = detach_abi(this->shim().StrokeContainsPoint(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&point), strokeWidth, *reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const*>(&strokeStyle)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall StrokeContainsPointWithAllOptions(Windows::Foundation::Numerics::float2 point, float strokeWidth, ::IUnknown* strokeStyle, Windows::Foundation::Numerics::float3x2 transform, float flatteningTolerance, bool* containsPoint) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *containsPoint = detach_abi(this->shim().StrokeContainsPoint(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&point), strokeWidth, *reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const*>(&strokeStyle), *reinterpret_cast<Windows::Foundation::Numerics::float3x2 const*>(&transform), flatteningTolerance));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Tessellate(uint32_t* __trianglesSize, struct_of<24>** triangles) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            std::tie(*__trianglesSize, *triangles) = detach_abi(this->shim().Tessellate());
            return S_OK;
        }
        catch (...)
        {
            *__trianglesSize = 0;
            *triangles = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TessellateWithTransformAndFlatteningTolerance(Windows::Foundation::Numerics::float3x2 transform, float flatteningTolerance, uint32_t* __trianglesSize, struct_of<24>** triangles) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            std::tie(*__trianglesSize, *triangles) = detach_abi(this->shim().Tessellate(*reinterpret_cast<Windows::Foundation::Numerics::float3x2 const*>(&transform), flatteningTolerance));
            return S_OK;
        }
        catch (...)
        {
            *__trianglesSize = 0;
            *triangles = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SendPathTo(::IUnknown* streamReader) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SendPathTo(*reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::ICanvasPathReceiver const*>(&streamReader));
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
struct produce<D, Microsoft::Graphics::Canvas::Geometry::ICanvasGeometryStatics> : produce_base<D, Microsoft::Graphics::Canvas::Geometry::ICanvasGeometryStatics>
{
    HRESULT __stdcall CreateRectangle(::IUnknown* resourceCreator, Windows::Foundation::Rect rect, ::IUnknown** geometry) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *geometry = detach_abi(this->shim().CreateRectangle(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator), *reinterpret_cast<Windows::Foundation::Rect const*>(&rect)));
            return S_OK;
        }
        catch (...)
        {
            *geometry = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateRectangleAtCoords(::IUnknown* resourceCreator, float x, float y, float w, float h, ::IUnknown** geometry) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *geometry = detach_abi(this->shim().CreateRectangle(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator), x, y, w, h));
            return S_OK;
        }
        catch (...)
        {
            *geometry = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateRoundedRectangle(::IUnknown* resourceCreator, Windows::Foundation::Rect rect, float radiusX, float radiusY, ::IUnknown** geometry) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *geometry = detach_abi(this->shim().CreateRoundedRectangle(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator), *reinterpret_cast<Windows::Foundation::Rect const*>(&rect), radiusX, radiusY));
            return S_OK;
        }
        catch (...)
        {
            *geometry = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateRoundedRectangleAtCoords(::IUnknown* resourceCreator, float x, float y, float w, float h, float radiusX, float radiusY, ::IUnknown** geometry) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *geometry = detach_abi(this->shim().CreateRoundedRectangle(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator), x, y, w, h, radiusX, radiusY));
            return S_OK;
        }
        catch (...)
        {
            *geometry = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateEllipse(::IUnknown* resourceCreator, Windows::Foundation::Numerics::float2 centerPoint, float radiusX, float radiusY, ::IUnknown** geometry) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *geometry = detach_abi(this->shim().CreateEllipse(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator), *reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&centerPoint), radiusX, radiusY));
            return S_OK;
        }
        catch (...)
        {
            *geometry = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateEllipseAtCoords(::IUnknown* resourceCreator, float x, float y, float radiusX, float radiusY, ::IUnknown** geometry) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *geometry = detach_abi(this->shim().CreateEllipse(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator), x, y, radiusX, radiusY));
            return S_OK;
        }
        catch (...)
        {
            *geometry = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateCircle(::IUnknown* resourceCreator, Windows::Foundation::Numerics::float2 centerPoint, float radius, ::IUnknown** geometry) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *geometry = detach_abi(this->shim().CreateCircle(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator), *reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&centerPoint), radius));
            return S_OK;
        }
        catch (...)
        {
            *geometry = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateCircleAtCoords(::IUnknown* resourceCreator, float x, float y, float radius, ::IUnknown** geometry) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *geometry = detach_abi(this->shim().CreateCircle(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator), x, y, radius));
            return S_OK;
        }
        catch (...)
        {
            *geometry = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreatePath(::IUnknown* pathBuilder, ::IUnknown** geometry) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *geometry = detach_abi(this->shim().CreatePath(*reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasPathBuilder const*>(&pathBuilder)));
            return S_OK;
        }
        catch (...)
        {
            *geometry = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreatePolygon(::IUnknown* resourceCreator, uint32_t __pointsSize, Windows::Foundation::Numerics::float2* points, ::IUnknown** geometry) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *geometry = detach_abi(this->shim().CreatePolygon(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator), array_view<Windows::Foundation::Numerics::float2 const>(reinterpret_cast<Windows::Foundation::Numerics::float2 const *>(points), reinterpret_cast<Windows::Foundation::Numerics::float2 const *>(points) + __pointsSize)));
            return S_OK;
        }
        catch (...)
        {
            *geometry = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateGroup(::IUnknown* resourceCreator, uint32_t __geometriesSize, ::IUnknown** geometries, ::IUnknown** geometry) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *geometry = detach_abi(this->shim().CreateGroup(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator), array_view<Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const>(reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const *>(geometries), reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const *>(geometries) + __geometriesSize)));
            return S_OK;
        }
        catch (...)
        {
            *geometry = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateGroupWithFilledRegionDetermination(::IUnknown* resourceCreator, uint32_t __geometriesSize, ::IUnknown** geometries, Microsoft::Graphics::Canvas::Geometry::CanvasFilledRegionDetermination filledRegionDetermination, ::IUnknown** geometry) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *geometry = detach_abi(this->shim().CreateGroup(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator), array_view<Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const>(reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const *>(geometries), reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const *>(geometries) + __geometriesSize), *reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasFilledRegionDetermination const*>(&filledRegionDetermination)));
            return S_OK;
        }
        catch (...)
        {
            *geometry = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateText(::IUnknown* textLayout, ::IUnknown** geometry) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *geometry = detach_abi(this->shim().CreateText(*reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasTextLayout const*>(&textLayout)));
            return S_OK;
        }
        catch (...)
        {
            *geometry = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateGlyphRun(::IUnknown* resourceCreator, Windows::Foundation::Numerics::float2 point, ::IUnknown* fontFace, float fontSize, uint32_t __glyphsSize, struct_of<16>* glyphs, bool isSideways, uint32_t bidiLevel, Microsoft::Graphics::Canvas::Text::CanvasTextMeasuringMode measuringMode, Microsoft::Graphics::Canvas::Text::CanvasGlyphOrientation glyphOrientation, ::IUnknown** geometry) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *geometry = detach_abi(this->shim().CreateGlyphRun(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator), *reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&point), *reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasFontFace const*>(&fontFace), fontSize, array_view<Microsoft::Graphics::Canvas::Text::CanvasGlyph const>(reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasGlyph const *>(glyphs), reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasGlyph const *>(glyphs) + __glyphsSize), isSideways, bidiLevel, *reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasTextMeasuringMode const*>(&measuringMode), *reinterpret_cast<Microsoft::Graphics::Canvas::Text::CanvasGlyphOrientation const*>(&glyphOrientation)));
            return S_OK;
        }
        catch (...)
        {
            *geometry = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateInk(::IUnknown* resourceCreator, ::IUnknown* inkStrokes, ::IUnknown** geometry) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *geometry = detach_abi(this->shim().CreateInk(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::UI::Input::Inking::InkStroke> const*>(&inkStrokes)));
            return S_OK;
        }
        catch (...)
        {
            *geometry = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateInkWithTransformAndFlatteningTolerance(::IUnknown* resourceCreator, ::IUnknown* inkStrokes, Windows::Foundation::Numerics::float3x2 transform, float flatteningTolerance, ::IUnknown** geometry) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *geometry = detach_abi(this->shim().CreateInk(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::UI::Input::Inking::InkStroke> const*>(&inkStrokes), *reinterpret_cast<Windows::Foundation::Numerics::float3x2 const*>(&transform), flatteningTolerance));
            return S_OK;
        }
        catch (...)
        {
            *geometry = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ComputeFlatteningTolerance(float dpi, float maximumZoomFactor, float* flatteningTolerance) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *flatteningTolerance = detach_abi(this->shim().ComputeFlatteningTolerance(dpi, maximumZoomFactor));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ComputeFlatteningToleranceWithTransform(float dpi, float maximumZoomFactor, Windows::Foundation::Numerics::float3x2 expectedGeometryTransform, float* flatteningTolerance) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *flatteningTolerance = detach_abi(this->shim().ComputeFlatteningTolerance(dpi, maximumZoomFactor, *reinterpret_cast<Windows::Foundation::Numerics::float3x2 const*>(&expectedGeometryTransform)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DefaultFlatteningTolerance(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DefaultFlatteningTolerance());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Geometry::ICanvasGradientMesh> : produce_base<D, Microsoft::Graphics::Canvas::Geometry::ICanvasGradientMesh>
{
    HRESULT __stdcall get_Patches(uint32_t* __valueElementsSize, struct_of<208>** valueElements) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            std::tie(*__valueElementsSize, *valueElements) = detach_abi(this->shim().Patches());
            return S_OK;
        }
        catch (...)
        {
            *__valueElementsSize = 0;
            *valueElements = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetBounds(::IUnknown* resourceCreator, Windows::Foundation::Rect* bounds) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *bounds = detach_abi(this->shim().GetBounds(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetBoundsWithTransform(::IUnknown* resourceCreator, Windows::Foundation::Numerics::float3x2 transform, Windows::Foundation::Rect* bounds) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *bounds = detach_abi(this->shim().GetBounds(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator), *reinterpret_cast<Windows::Foundation::Numerics::float3x2 const*>(&transform)));
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
struct produce<D, Microsoft::Graphics::Canvas::Geometry::ICanvasGradientMeshFactory> : produce_base<D, Microsoft::Graphics::Canvas::Geometry::ICanvasGradientMeshFactory>
{
    HRESULT __stdcall Create(::IUnknown* resourceCreator, uint32_t __patchElementsSize, struct_of<208>* patchElements, ::IUnknown** canvasGradientMesh) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *canvasGradientMesh = detach_abi(this->shim().Create(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator), array_view<Microsoft::Graphics::Canvas::Geometry::CanvasGradientMeshPatch const>(reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasGradientMeshPatch const *>(patchElements), reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasGradientMeshPatch const *>(patchElements) + __patchElementsSize)));
            return S_OK;
        }
        catch (...)
        {
            *canvasGradientMesh = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Geometry::ICanvasGradientMeshStatics> : produce_base<D, Microsoft::Graphics::Canvas::Geometry::ICanvasGradientMeshStatics>
{
    HRESULT __stdcall CreateCoonsPatch(uint32_t __pointsSize, Windows::Foundation::Numerics::float2* points, uint32_t __colorsSize, Windows::Foundation::Numerics::float4* colors, uint32_t __edgesSize, Microsoft::Graphics::Canvas::Geometry::CanvasGradientMeshPatchEdge* edges, struct_of<208>* gradientMeshPatch) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *gradientMeshPatch = detach_abi(this->shim().CreateCoonsPatch(array_view<Windows::Foundation::Numerics::float2 const>(reinterpret_cast<Windows::Foundation::Numerics::float2 const *>(points), reinterpret_cast<Windows::Foundation::Numerics::float2 const *>(points) + __pointsSize), array_view<Windows::Foundation::Numerics::float4 const>(reinterpret_cast<Windows::Foundation::Numerics::float4 const *>(colors), reinterpret_cast<Windows::Foundation::Numerics::float4 const *>(colors) + __colorsSize), array_view<Microsoft::Graphics::Canvas::Geometry::CanvasGradientMeshPatchEdge const>(reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasGradientMeshPatchEdge const *>(edges), reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasGradientMeshPatchEdge const *>(edges) + __edgesSize)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateTensorPatch(uint32_t __pointsSize, Windows::Foundation::Numerics::float2* points, uint32_t __colorsSize, Windows::Foundation::Numerics::float4* colors, uint32_t __edgesSize, Microsoft::Graphics::Canvas::Geometry::CanvasGradientMeshPatchEdge* edges, struct_of<208>* gradientMeshPatch) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *gradientMeshPatch = detach_abi(this->shim().CreateTensorPatch(array_view<Windows::Foundation::Numerics::float2 const>(reinterpret_cast<Windows::Foundation::Numerics::float2 const *>(points), reinterpret_cast<Windows::Foundation::Numerics::float2 const *>(points) + __pointsSize), array_view<Windows::Foundation::Numerics::float4 const>(reinterpret_cast<Windows::Foundation::Numerics::float4 const *>(colors), reinterpret_cast<Windows::Foundation::Numerics::float4 const *>(colors) + __colorsSize), array_view<Microsoft::Graphics::Canvas::Geometry::CanvasGradientMeshPatchEdge const>(reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasGradientMeshPatchEdge const *>(edges), reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasGradientMeshPatchEdge const *>(edges) + __edgesSize)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Geometry::ICanvasPathBuilder> : produce_base<D, Microsoft::Graphics::Canvas::Geometry::ICanvasPathBuilder>
{
    HRESULT __stdcall BeginFigureWithFigureFill(Windows::Foundation::Numerics::float2 startPoint, Microsoft::Graphics::Canvas::Geometry::CanvasFigureFill figureFill) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BeginFigure(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&startPoint), *reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasFigureFill const*>(&figureFill));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall BeginFigure(Windows::Foundation::Numerics::float2 startPoint) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BeginFigure(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&startPoint));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall BeginFigureAtCoordsWithFigureFill(float startX, float startY, Microsoft::Graphics::Canvas::Geometry::CanvasFigureFill figureFill) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BeginFigure(startX, startY, *reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasFigureFill const*>(&figureFill));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall BeginFigureAtCoords(float startX, float startY) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BeginFigure(startX, startY);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddArcToPoint(Windows::Foundation::Numerics::float2 endPoint, float radiusX, float radiusY, float rotationAngle, Microsoft::Graphics::Canvas::Geometry::CanvasSweepDirection sweepDirection, Microsoft::Graphics::Canvas::Geometry::CanvasArcSize arcSize) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddArc(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&endPoint), radiusX, radiusY, rotationAngle, *reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasSweepDirection const*>(&sweepDirection), *reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasArcSize const*>(&arcSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddArcAroundEllipse(Windows::Foundation::Numerics::float2 centerPoint, float radiusX, float radiusY, float startAngle, float sweepAngle) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddArc(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&centerPoint), radiusX, radiusY, startAngle, sweepAngle);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddCubicBezier(Windows::Foundation::Numerics::float2 controlPoint1, Windows::Foundation::Numerics::float2 controlPoint2, Windows::Foundation::Numerics::float2 endPoint) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddCubicBezier(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&controlPoint1), *reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&controlPoint2), *reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&endPoint));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddLine(Windows::Foundation::Numerics::float2 endPoint) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddLine(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&endPoint));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddLineWithCoords(float x, float y) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddLine(x, y);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddQuadraticBezier(Windows::Foundation::Numerics::float2 controlPoint, Windows::Foundation::Numerics::float2 endPoint) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddQuadraticBezier(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&controlPoint), *reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&endPoint));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetFilledRegionDetermination(Microsoft::Graphics::Canvas::Geometry::CanvasFilledRegionDetermination filledRegionDetermination) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetFilledRegionDetermination(*reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasFilledRegionDetermination const*>(&filledRegionDetermination));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetSegmentOptions(Microsoft::Graphics::Canvas::Geometry::CanvasFigureSegmentOptions figureSegmentOptions) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetSegmentOptions(*reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasFigureSegmentOptions const*>(&figureSegmentOptions));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall EndFigure(Microsoft::Graphics::Canvas::Geometry::CanvasFigureLoop figureLoop) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EndFigure(*reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasFigureLoop const*>(&figureLoop));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddGeometry(::IUnknown* geometry) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddGeometry(*reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const*>(&geometry));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Geometry::ICanvasPathBuilderFactory> : produce_base<D, Microsoft::Graphics::Canvas::Geometry::ICanvasPathBuilderFactory>
{
    HRESULT __stdcall Create(::IUnknown* resourceCreator, ::IUnknown** canvasPathBuilder) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *canvasPathBuilder = detach_abi(this->shim().Create(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator)));
            return S_OK;
        }
        catch (...)
        {
            *canvasPathBuilder = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Geometry::ICanvasPathReceiver> : produce_base<D, Microsoft::Graphics::Canvas::Geometry::ICanvasPathReceiver>
{
    HRESULT __stdcall BeginFigure(Windows::Foundation::Numerics::float2 startPoint, Microsoft::Graphics::Canvas::Geometry::CanvasFigureFill figureFill) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BeginFigure(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&startPoint), *reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasFigureFill const*>(&figureFill));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddArc(Windows::Foundation::Numerics::float2 endPoint, float radiusX, float radiusY, float rotationAngle, Microsoft::Graphics::Canvas::Geometry::CanvasSweepDirection sweepDirection, Microsoft::Graphics::Canvas::Geometry::CanvasArcSize arcSize) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddArc(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&endPoint), radiusX, radiusY, rotationAngle, *reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasSweepDirection const*>(&sweepDirection), *reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasArcSize const*>(&arcSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddCubicBezier(Windows::Foundation::Numerics::float2 controlPoint1, Windows::Foundation::Numerics::float2 controlPoint2, Windows::Foundation::Numerics::float2 endPoint) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddCubicBezier(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&controlPoint1), *reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&controlPoint2), *reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&endPoint));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddLine(Windows::Foundation::Numerics::float2 endPoint) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddLine(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&endPoint));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddQuadraticBezier(Windows::Foundation::Numerics::float2 controlPoint, Windows::Foundation::Numerics::float2 endPoint) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddQuadraticBezier(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&controlPoint), *reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&endPoint));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetFilledRegionDetermination(Microsoft::Graphics::Canvas::Geometry::CanvasFilledRegionDetermination filledRegionDetermination) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetFilledRegionDetermination(*reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasFilledRegionDetermination const*>(&filledRegionDetermination));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetSegmentOptions(Microsoft::Graphics::Canvas::Geometry::CanvasFigureSegmentOptions figureSegmentOptions) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetSegmentOptions(*reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasFigureSegmentOptions const*>(&figureSegmentOptions));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall EndFigure(Microsoft::Graphics::Canvas::Geometry::CanvasFigureLoop figureLoop) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EndFigure(*reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasFigureLoop const*>(&figureLoop));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Geometry::ICanvasStrokeStyle> : produce_base<D, Microsoft::Graphics::Canvas::Geometry::ICanvasStrokeStyle>
{
    HRESULT __stdcall get_StartCap(Microsoft::Graphics::Canvas::Geometry::CanvasCapStyle* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StartCap());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_StartCap(Microsoft::Graphics::Canvas::Geometry::CanvasCapStyle value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartCap(*reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasCapStyle const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EndCap(Microsoft::Graphics::Canvas::Geometry::CanvasCapStyle* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EndCap());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_EndCap(Microsoft::Graphics::Canvas::Geometry::CanvasCapStyle value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EndCap(*reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasCapStyle const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DashCap(Microsoft::Graphics::Canvas::Geometry::CanvasCapStyle* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DashCap());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DashCap(Microsoft::Graphics::Canvas::Geometry::CanvasCapStyle value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DashCap(*reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasCapStyle const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LineJoin(Microsoft::Graphics::Canvas::Geometry::CanvasLineJoin* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LineJoin());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LineJoin(Microsoft::Graphics::Canvas::Geometry::CanvasLineJoin value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LineJoin(*reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasLineJoin const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MiterLimit(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MiterLimit());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MiterLimit(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MiterLimit(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DashStyle(Microsoft::Graphics::Canvas::Geometry::CanvasDashStyle* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DashStyle());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DashStyle(Microsoft::Graphics::Canvas::Geometry::CanvasDashStyle value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DashStyle(*reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasDashStyle const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DashOffset(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DashOffset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DashOffset(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DashOffset(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CustomDashStyle(uint32_t* __valueElementsSize, float** valueElements) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            std::tie(*__valueElementsSize, *valueElements) = detach_abi(this->shim().CustomDashStyle());
            return S_OK;
        }
        catch (...)
        {
            *__valueElementsSize = 0;
            *valueElements = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CustomDashStyle(uint32_t __valueElementsSize, float* valueElements) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CustomDashStyle(array_view<float const>(reinterpret_cast<float const *>(valueElements), reinterpret_cast<float const *>(valueElements) + __valueElementsSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TransformBehavior(Microsoft::Graphics::Canvas::Geometry::CanvasStrokeTransformBehavior* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TransformBehavior());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TransformBehavior(Microsoft::Graphics::Canvas::Geometry::CanvasStrokeTransformBehavior value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TransformBehavior(*reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasStrokeTransformBehavior const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Microsoft::Graphics::Canvas::Geometry {

inline Microsoft::Graphics::Canvas::Geometry::CanvasCachedGeometry CanvasCachedGeometry::CreateFill(Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& geometry)
{
    return get_activation_factory<CanvasCachedGeometry, Microsoft::Graphics::Canvas::Geometry::ICanvasCachedGeometryStatics>().CreateFill(geometry);
}

inline Microsoft::Graphics::Canvas::Geometry::CanvasCachedGeometry CanvasCachedGeometry::CreateFill(Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& geometry, float flatteningTolerance)
{
    return get_activation_factory<CanvasCachedGeometry, Microsoft::Graphics::Canvas::Geometry::ICanvasCachedGeometryStatics>().CreateFill(geometry, flatteningTolerance);
}

inline Microsoft::Graphics::Canvas::Geometry::CanvasCachedGeometry CanvasCachedGeometry::CreateStroke(Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& geometry, float strokeWidth)
{
    return get_activation_factory<CanvasCachedGeometry, Microsoft::Graphics::Canvas::Geometry::ICanvasCachedGeometryStatics>().CreateStroke(geometry, strokeWidth);
}

inline Microsoft::Graphics::Canvas::Geometry::CanvasCachedGeometry CanvasCachedGeometry::CreateStroke(Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& geometry, float strokeWidth, Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const& strokeStyle)
{
    return get_activation_factory<CanvasCachedGeometry, Microsoft::Graphics::Canvas::Geometry::ICanvasCachedGeometryStatics>().CreateStroke(geometry, strokeWidth, strokeStyle);
}

inline Microsoft::Graphics::Canvas::Geometry::CanvasCachedGeometry CanvasCachedGeometry::CreateStroke(Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const& geometry, float strokeWidth, Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle const& strokeStyle, float flatteningTolerance)
{
    return get_activation_factory<CanvasCachedGeometry, Microsoft::Graphics::Canvas::Geometry::ICanvasCachedGeometryStatics>().CreateStroke(geometry, strokeWidth, strokeStyle, flatteningTolerance);
}

inline Microsoft::Graphics::Canvas::Geometry::CanvasGeometry CanvasGeometry::CreateRectangle(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Foundation::Rect const& rect)
{
    return get_activation_factory<CanvasGeometry, Microsoft::Graphics::Canvas::Geometry::ICanvasGeometryStatics>().CreateRectangle(resourceCreator, rect);
}

inline Microsoft::Graphics::Canvas::Geometry::CanvasGeometry CanvasGeometry::CreateRectangle(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, float x, float y, float w, float h)
{
    return get_activation_factory<CanvasGeometry, Microsoft::Graphics::Canvas::Geometry::ICanvasGeometryStatics>().CreateRectangle(resourceCreator, x, y, w, h);
}

inline Microsoft::Graphics::Canvas::Geometry::CanvasGeometry CanvasGeometry::CreateRoundedRectangle(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Foundation::Rect const& rect, float radiusX, float radiusY)
{
    return get_activation_factory<CanvasGeometry, Microsoft::Graphics::Canvas::Geometry::ICanvasGeometryStatics>().CreateRoundedRectangle(resourceCreator, rect, radiusX, radiusY);
}

inline Microsoft::Graphics::Canvas::Geometry::CanvasGeometry CanvasGeometry::CreateRoundedRectangle(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, float x, float y, float w, float h, float radiusX, float radiusY)
{
    return get_activation_factory<CanvasGeometry, Microsoft::Graphics::Canvas::Geometry::ICanvasGeometryStatics>().CreateRoundedRectangle(resourceCreator, x, y, w, h, radiusX, radiusY);
}

inline Microsoft::Graphics::Canvas::Geometry::CanvasGeometry CanvasGeometry::CreateEllipse(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Foundation::Numerics::float2 const& centerPoint, float radiusX, float radiusY)
{
    return get_activation_factory<CanvasGeometry, Microsoft::Graphics::Canvas::Geometry::ICanvasGeometryStatics>().CreateEllipse(resourceCreator, centerPoint, radiusX, radiusY);
}

inline Microsoft::Graphics::Canvas::Geometry::CanvasGeometry CanvasGeometry::CreateEllipse(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, float x, float y, float radiusX, float radiusY)
{
    return get_activation_factory<CanvasGeometry, Microsoft::Graphics::Canvas::Geometry::ICanvasGeometryStatics>().CreateEllipse(resourceCreator, x, y, radiusX, radiusY);
}

inline Microsoft::Graphics::Canvas::Geometry::CanvasGeometry CanvasGeometry::CreateCircle(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Foundation::Numerics::float2 const& centerPoint, float radius)
{
    return get_activation_factory<CanvasGeometry, Microsoft::Graphics::Canvas::Geometry::ICanvasGeometryStatics>().CreateCircle(resourceCreator, centerPoint, radius);
}

inline Microsoft::Graphics::Canvas::Geometry::CanvasGeometry CanvasGeometry::CreateCircle(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, float x, float y, float radius)
{
    return get_activation_factory<CanvasGeometry, Microsoft::Graphics::Canvas::Geometry::ICanvasGeometryStatics>().CreateCircle(resourceCreator, x, y, radius);
}

inline Microsoft::Graphics::Canvas::Geometry::CanvasGeometry CanvasGeometry::CreatePath(Microsoft::Graphics::Canvas::Geometry::CanvasPathBuilder const& pathBuilder)
{
    return get_activation_factory<CanvasGeometry, Microsoft::Graphics::Canvas::Geometry::ICanvasGeometryStatics>().CreatePath(pathBuilder);
}

inline Microsoft::Graphics::Canvas::Geometry::CanvasGeometry CanvasGeometry::CreatePolygon(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<Windows::Foundation::Numerics::float2 const> points)
{
    return get_activation_factory<CanvasGeometry, Microsoft::Graphics::Canvas::Geometry::ICanvasGeometryStatics>().CreatePolygon(resourceCreator, points);
}

inline Microsoft::Graphics::Canvas::Geometry::CanvasGeometry CanvasGeometry::CreateGroup(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const> geometries)
{
    return get_activation_factory<CanvasGeometry, Microsoft::Graphics::Canvas::Geometry::ICanvasGeometryStatics>().CreateGroup(resourceCreator, geometries);
}

inline Microsoft::Graphics::Canvas::Geometry::CanvasGeometry CanvasGeometry::CreateGroup(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<Microsoft::Graphics::Canvas::Geometry::CanvasGeometry const> geometries, Microsoft::Graphics::Canvas::Geometry::CanvasFilledRegionDetermination const& filledRegionDetermination)
{
    return get_activation_factory<CanvasGeometry, Microsoft::Graphics::Canvas::Geometry::ICanvasGeometryStatics>().CreateGroup(resourceCreator, geometries, filledRegionDetermination);
}

inline Microsoft::Graphics::Canvas::Geometry::CanvasGeometry CanvasGeometry::CreateText(Microsoft::Graphics::Canvas::Text::CanvasTextLayout const& textLayout)
{
    return get_activation_factory<CanvasGeometry, Microsoft::Graphics::Canvas::Geometry::ICanvasGeometryStatics>().CreateText(textLayout);
}

inline Microsoft::Graphics::Canvas::Geometry::CanvasGeometry CanvasGeometry::CreateGlyphRun(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Foundation::Numerics::float2 const& point, Microsoft::Graphics::Canvas::Text::CanvasFontFace const& fontFace, float fontSize, array_view<Microsoft::Graphics::Canvas::Text::CanvasGlyph const> glyphs, bool isSideways, uint32_t bidiLevel, Microsoft::Graphics::Canvas::Text::CanvasTextMeasuringMode const& measuringMode, Microsoft::Graphics::Canvas::Text::CanvasGlyphOrientation const& glyphOrientation)
{
    return get_activation_factory<CanvasGeometry, Microsoft::Graphics::Canvas::Geometry::ICanvasGeometryStatics>().CreateGlyphRun(resourceCreator, point, fontFace, fontSize, glyphs, isSideways, bidiLevel, measuringMode, glyphOrientation);
}

inline Microsoft::Graphics::Canvas::Geometry::CanvasGeometry CanvasGeometry::CreateInk(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, param::iterable<Windows::UI::Input::Inking::InkStroke> const& inkStrokes)
{
    return get_activation_factory<CanvasGeometry, Microsoft::Graphics::Canvas::Geometry::ICanvasGeometryStatics>().CreateInk(resourceCreator, inkStrokes);
}

inline Microsoft::Graphics::Canvas::Geometry::CanvasGeometry CanvasGeometry::CreateInk(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, param::iterable<Windows::UI::Input::Inking::InkStroke> const& inkStrokes, Windows::Foundation::Numerics::float3x2 const& transform, float flatteningTolerance)
{
    return get_activation_factory<CanvasGeometry, Microsoft::Graphics::Canvas::Geometry::ICanvasGeometryStatics>().CreateInk(resourceCreator, inkStrokes, transform, flatteningTolerance);
}

inline float CanvasGeometry::ComputeFlatteningTolerance(float dpi, float maximumZoomFactor)
{
    return get_activation_factory<CanvasGeometry, Microsoft::Graphics::Canvas::Geometry::ICanvasGeometryStatics>().ComputeFlatteningTolerance(dpi, maximumZoomFactor);
}

inline float CanvasGeometry::ComputeFlatteningTolerance(float dpi, float maximumZoomFactor, Windows::Foundation::Numerics::float3x2 const& expectedGeometryTransform)
{
    return get_activation_factory<CanvasGeometry, Microsoft::Graphics::Canvas::Geometry::ICanvasGeometryStatics>().ComputeFlatteningTolerance(dpi, maximumZoomFactor, expectedGeometryTransform);
}

inline float CanvasGeometry::DefaultFlatteningTolerance()
{
    return get_activation_factory<CanvasGeometry, Microsoft::Graphics::Canvas::Geometry::ICanvasGeometryStatics>().DefaultFlatteningTolerance();
}

inline CanvasGradientMesh::CanvasGradientMesh(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<Microsoft::Graphics::Canvas::Geometry::CanvasGradientMeshPatch const> patchElements) :
    CanvasGradientMesh(get_activation_factory<CanvasGradientMesh, Microsoft::Graphics::Canvas::Geometry::ICanvasGradientMeshFactory>().Create(resourceCreator, patchElements))
{}

inline Microsoft::Graphics::Canvas::Geometry::CanvasGradientMeshPatch CanvasGradientMesh::CreateCoonsPatch(array_view<Windows::Foundation::Numerics::float2 const> points, array_view<Windows::Foundation::Numerics::float4 const> colors, array_view<Microsoft::Graphics::Canvas::Geometry::CanvasGradientMeshPatchEdge const> edges)
{
    return get_activation_factory<CanvasGradientMesh, Microsoft::Graphics::Canvas::Geometry::ICanvasGradientMeshStatics>().CreateCoonsPatch(points, colors, edges);
}

inline Microsoft::Graphics::Canvas::Geometry::CanvasGradientMeshPatch CanvasGradientMesh::CreateTensorPatch(array_view<Windows::Foundation::Numerics::float2 const> points, array_view<Windows::Foundation::Numerics::float4 const> colors, array_view<Microsoft::Graphics::Canvas::Geometry::CanvasGradientMeshPatchEdge const> edges)
{
    return get_activation_factory<CanvasGradientMesh, Microsoft::Graphics::Canvas::Geometry::ICanvasGradientMeshStatics>().CreateTensorPatch(points, colors, edges);
}

inline CanvasPathBuilder::CanvasPathBuilder(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator) :
    CanvasPathBuilder(get_activation_factory<CanvasPathBuilder, Microsoft::Graphics::Canvas::Geometry::ICanvasPathBuilderFactory>().Create(resourceCreator))
{}

inline CanvasStrokeStyle::CanvasStrokeStyle() :
    CanvasStrokeStyle(activate_instance<CanvasStrokeStyle>())
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Geometry::ICanvasCachedGeometry> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Geometry::ICanvasCachedGeometry> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Geometry::ICanvasCachedGeometryStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Geometry::ICanvasCachedGeometryStatics> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Geometry::ICanvasGeometryStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Geometry::ICanvasGeometryStatics> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Geometry::ICanvasGradientMesh> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Geometry::ICanvasGradientMesh> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Geometry::ICanvasGradientMeshFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Geometry::ICanvasGradientMeshFactory> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Geometry::ICanvasGradientMeshStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Geometry::ICanvasGradientMeshStatics> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Geometry::ICanvasPathBuilder> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Geometry::ICanvasPathBuilder> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Geometry::ICanvasPathBuilderFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Geometry::ICanvasPathBuilderFactory> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Geometry::ICanvasPathReceiver> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Geometry::ICanvasPathReceiver> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Geometry::ICanvasStrokeStyle> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Geometry::ICanvasStrokeStyle> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Geometry::CanvasCachedGeometry> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Geometry::CanvasCachedGeometry> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Geometry::CanvasGeometry> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Geometry::CanvasGeometry> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Geometry::CanvasGradientMesh> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Geometry::CanvasGradientMesh> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Geometry::CanvasPathBuilder> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Geometry::CanvasPathBuilder> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Geometry::CanvasStrokeStyle> {};

}

WINRT_WARNING_POP
