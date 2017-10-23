// C++/WinRT v1.0.170906.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH

static_assert(winrt::impl::make_constexpr_string(CPPWINRT_VERSION) == "1.0.170906.1", "Mismatched component and base headers.");
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Microsoft.Graphics.Canvas.2.h"
#include "winrt/impl/Microsoft.Graphics.Canvas.Geometry.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.UI.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Microsoft.Graphics.Canvas.Svg.2.h"
#include "winrt/Microsoft.Graphics.Canvas.h"

namespace winrt::impl {

template <typename D> Microsoft::Graphics::Canvas::Svg::ICanvasSvgAttribute consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgAttribute<D>::Clone() const
{
    Microsoft::Graphics::Canvas::Svg::ICanvasSvgAttribute result{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgAttribute)->Clone(put_abi(result)));
    return result;
}

template <typename D> Microsoft::Graphics::Canvas::Svg::CanvasSvgNamedElement consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgAttribute<D>::GetElement() const
{
    Microsoft::Graphics::Canvas::Svg::CanvasSvgNamedElement value{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgAttribute)->GetElement(put_abi(value)));
    return value;
}

template <typename D> Microsoft::Graphics::Canvas::CanvasDevice consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgAttribute<D>::Device() const
{
    Microsoft::Graphics::Canvas::CanvasDevice value{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgAttribute)->get_Device(put_abi(value)));
    return value;
}

template <typename D> Microsoft::Graphics::Canvas::CanvasDevice consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgDocument<D>::Device() const
{
    Microsoft::Graphics::Canvas::CanvasDevice value{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgDocument)->get_Device(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgDocument<D>::GetXml() const
{
    hstring xmlString{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgDocument)->GetXml(put_abi(xmlString)));
    return xmlString;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgDocument<D>::SaveAsync(Windows::Storage::Streams::IRandomAccessStream const& stream) const
{
    Windows::Foundation::IAsyncAction asyncAction{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgDocument)->SaveAsync(get_abi(stream), put_abi(asyncAction)));
    return asyncAction;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgDocument<D>::Root(Microsoft::Graphics::Canvas::Svg::CanvasSvgNamedElement const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgDocument)->put_Root(get_abi(value)));
}

template <typename D> Microsoft::Graphics::Canvas::Svg::CanvasSvgNamedElement consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgDocument<D>::Root() const
{
    Microsoft::Graphics::Canvas::Svg::CanvasSvgNamedElement value{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgDocument)->get_Root(put_abi(value)));
    return value;
}

template <typename D> Microsoft::Graphics::Canvas::Svg::CanvasSvgNamedElement consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgDocument<D>::FindElementById(param::hstring const& id) const
{
    Microsoft::Graphics::Canvas::Svg::CanvasSvgNamedElement element{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgDocument)->FindElementById(get_abi(id), put_abi(element)));
    return element;
}

template <typename D> Microsoft::Graphics::Canvas::Svg::CanvasSvgPaintAttribute consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgDocument<D>::CreatePaintAttribute() const
{
    Microsoft::Graphics::Canvas::Svg::CanvasSvgPaintAttribute result{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgDocument)->CreatePaintAttributeWithDefaults(put_abi(result)));
    return result;
}

template <typename D> Microsoft::Graphics::Canvas::Svg::CanvasSvgPaintAttribute consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgDocument<D>::CreatePaintAttribute(Microsoft::Graphics::Canvas::Svg::CanvasSvgPaintType const& paintType, Windows::UI::Color const& color, param::hstring const& id) const
{
    Microsoft::Graphics::Canvas::Svg::CanvasSvgPaintAttribute result{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgDocument)->CreatePaintAttribute(get_abi(paintType), get_abi(color), get_abi(id), put_abi(result)));
    return result;
}

template <typename D> Microsoft::Graphics::Canvas::Svg::CanvasSvgPathAttribute consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgDocument<D>::CreatePathAttribute() const
{
    Microsoft::Graphics::Canvas::Svg::CanvasSvgPathAttribute result{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgDocument)->CreatePathAttributeWithDefaults(put_abi(result)));
    return result;
}

template <typename D> Microsoft::Graphics::Canvas::Svg::CanvasSvgPathAttribute consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgDocument<D>::CreatePathAttribute(array_view<float const> segmentData, array_view<Microsoft::Graphics::Canvas::Svg::CanvasSvgPathCommand const> commands) const
{
    Microsoft::Graphics::Canvas::Svg::CanvasSvgPathAttribute result{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgDocument)->CreatePathAttribute(segmentData.size(), get_abi(segmentData), commands.size(), get_abi(commands), put_abi(result)));
    return result;
}

template <typename D> Microsoft::Graphics::Canvas::Svg::CanvasSvgPointsAttribute consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgDocument<D>::CreatePointsAttribute() const
{
    Microsoft::Graphics::Canvas::Svg::CanvasSvgPointsAttribute result{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgDocument)->CreatePointsAttributeWithDefaults(put_abi(result)));
    return result;
}

template <typename D> Microsoft::Graphics::Canvas::Svg::CanvasSvgPointsAttribute consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgDocument<D>::CreatePointsAttribute(array_view<Windows::Foundation::Numerics::float2 const> points) const
{
    Microsoft::Graphics::Canvas::Svg::CanvasSvgPointsAttribute result{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgDocument)->CreatePointsAttribute(points.size(), get_abi(points), put_abi(result)));
    return result;
}

template <typename D> Microsoft::Graphics::Canvas::Svg::CanvasSvgStrokeDashArrayAttribute consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgDocument<D>::CreateStrokeDashArrayAttribute() const
{
    Microsoft::Graphics::Canvas::Svg::CanvasSvgStrokeDashArrayAttribute result{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgDocument)->CreateStrokeDashArrayAttributeWithDefaults(put_abi(result)));
    return result;
}

template <typename D> Microsoft::Graphics::Canvas::Svg::CanvasSvgStrokeDashArrayAttribute consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgDocument<D>::CreateStrokeDashArrayAttribute(array_view<float const> dashValues, array_view<Microsoft::Graphics::Canvas::Svg::CanvasSvgLengthUnits const> unitValues) const
{
    Microsoft::Graphics::Canvas::Svg::CanvasSvgStrokeDashArrayAttribute result{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgDocument)->CreateStrokeDashArrayAttribute(dashValues.size(), get_abi(dashValues), unitValues.size(), get_abi(unitValues), put_abi(result)));
    return result;
}

template <typename D> Microsoft::Graphics::Canvas::Svg::CanvasSvgNamedElement consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgDocument<D>::LoadElementFromXml(param::hstring const& xmlString) const
{
    Microsoft::Graphics::Canvas::Svg::CanvasSvgNamedElement svgElement{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgDocument)->LoadElementFromXml(get_abi(xmlString), put_abi(svgElement)));
    return svgElement;
}

template <typename D> Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::Svg::CanvasSvgNamedElement> consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgDocument<D>::LoadElementAsync(Windows::Storage::Streams::IRandomAccessStream const& stream) const
{
    Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::Svg::CanvasSvgNamedElement> svgElement{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgDocument)->LoadElementAsync(get_abi(stream), put_abi(svgElement)));
    return svgElement;
}

template <typename D> Microsoft::Graphics::Canvas::Svg::CanvasSvgDocument consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgDocumentFactory<D>::CreateEmpty(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator) const
{
    Microsoft::Graphics::Canvas::Svg::CanvasSvgDocument canvasSvgDocument{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgDocumentFactory)->CreateEmpty(get_abi(resourceCreator), put_abi(canvasSvgDocument)));
    return canvasSvgDocument;
}

template <typename D> Microsoft::Graphics::Canvas::Svg::CanvasSvgDocument consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgDocumentStatics<D>::LoadFromXml(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, param::hstring const& xmlString) const
{
    Microsoft::Graphics::Canvas::Svg::CanvasSvgDocument svgDocument{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgDocumentStatics)->LoadFromXml(get_abi(resourceCreator), get_abi(xmlString), put_abi(svgDocument)));
    return svgDocument;
}

template <typename D> Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::Svg::CanvasSvgDocument> consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgDocumentStatics<D>::LoadAsync(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Storage::Streams::IRandomAccessStream const& stream) const
{
    Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::Svg::CanvasSvgDocument> svgDocument{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgDocumentStatics)->LoadAsync(get_abi(resourceCreator), get_abi(stream), put_abi(svgDocument)));
    return svgDocument;
}

template <typename D> bool consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgDocumentStatics<D>::IsSupported(Microsoft::Graphics::Canvas::CanvasDevice const& device) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgDocumentStatics)->IsSupported(get_abi(device), &value));
    return value;
}

template <typename D> Microsoft::Graphics::Canvas::Svg::CanvasSvgDocument consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgElement<D>::ContainingDocument() const
{
    Microsoft::Graphics::Canvas::Svg::CanvasSvgDocument value{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgElement)->get_ContainingDocument(put_abi(value)));
    return value;
}

template <typename D> Microsoft::Graphics::Canvas::Svg::CanvasSvgNamedElement consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgElement<D>::Parent() const
{
    Microsoft::Graphics::Canvas::Svg::CanvasSvgNamedElement value{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgElement)->get_Parent(put_abi(value)));
    return value;
}

template <typename D> Microsoft::Graphics::Canvas::CanvasDevice consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgElement<D>::Device() const
{
    Microsoft::Graphics::Canvas::CanvasDevice value{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgElement)->get_Device(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgNamedElement<D>::AppendChild(Microsoft::Graphics::Canvas::Svg::ICanvasSvgElement const& child) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgNamedElement)->AppendChild(get_abi(child)));
}

template <typename D> Microsoft::Graphics::Canvas::Svg::CanvasSvgNamedElement consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgNamedElement<D>::CreateAndAppendNamedChildElement(param::hstring const& childName) const
{
    Microsoft::Graphics::Canvas::Svg::CanvasSvgNamedElement childElement{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgNamedElement)->CreateAndAppendNamedChildElement(get_abi(childName), put_abi(childElement)));
    return childElement;
}

template <typename D> Microsoft::Graphics::Canvas::Svg::CanvasSvgTextElement consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgNamedElement<D>::CreateAndAppendTextChildElement(param::hstring const& textContent) const
{
    Microsoft::Graphics::Canvas::Svg::CanvasSvgTextElement childElement{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgNamedElement)->CreateAndAppendTextChildElement(get_abi(textContent), put_abi(childElement)));
    return childElement;
}

template <typename D> Microsoft::Graphics::Canvas::Svg::ICanvasSvgElement consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgNamedElement<D>::FirstChild() const
{
    Microsoft::Graphics::Canvas::Svg::ICanvasSvgElement value{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgNamedElement)->get_FirstChild(put_abi(value)));
    return value;
}

template <typename D> Microsoft::Graphics::Canvas::Svg::ICanvasSvgElement consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgNamedElement<D>::LastChild() const
{
    Microsoft::Graphics::Canvas::Svg::ICanvasSvgElement value{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgNamedElement)->get_LastChild(put_abi(value)));
    return value;
}

template <typename D> Microsoft::Graphics::Canvas::Svg::ICanvasSvgElement consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgNamedElement<D>::GetPreviousSibling(Microsoft::Graphics::Canvas::Svg::ICanvasSvgElement const& child) const
{
    Microsoft::Graphics::Canvas::Svg::ICanvasSvgElement value{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgNamedElement)->GetPreviousSibling(get_abi(child), put_abi(value)));
    return value;
}

template <typename D> Microsoft::Graphics::Canvas::Svg::ICanvasSvgElement consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgNamedElement<D>::GetNextSibling(Microsoft::Graphics::Canvas::Svg::ICanvasSvgElement const& child) const
{
    Microsoft::Graphics::Canvas::Svg::ICanvasSvgElement value{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgNamedElement)->GetNextSibling(get_abi(child), put_abi(value)));
    return value;
}

template <typename D> com_array<hstring> consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgNamedElement<D>::SpecifiedAttributes() const
{
    com_array<hstring> valueElements;
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgNamedElement)->get_SpecifiedAttributes(impl::put_size_abi(valueElements), put_abi(valueElements)));
    return valueElements;
}

template <typename D> hstring consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgNamedElement<D>::Tag() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgNamedElement)->get_Tag(put_abi(value)));
    return value;
}

template <typename D> bool consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgNamedElement<D>::HasChildren() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgNamedElement)->get_HasChildren(&value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgNamedElement<D>::InsertChildBefore(Microsoft::Graphics::Canvas::Svg::ICanvasSvgElement const& child, Microsoft::Graphics::Canvas::Svg::ICanvasSvgElement const& referenceChild) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgNamedElement)->InsertChildBefore(get_abi(child), get_abi(referenceChild)));
}

template <typename D> bool consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgNamedElement<D>::IsAttributeSpecified(param::hstring const& attributeName) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgNamedElement)->IsAttributeSpecified(get_abi(attributeName), &value));
    return value;
}

template <typename D> bool consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgNamedElement<D>::IsAttributeSpecified(param::hstring const& attributeName, bool inherited) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgNamedElement)->IsAttributeSpecifiedWithInherhited(get_abi(attributeName), inherited, &value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgNamedElement<D>::RemoveAttribute(param::hstring const& attributeName) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgNamedElement)->RemoveAttribute(get_abi(attributeName)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgNamedElement<D>::RemoveChild(Microsoft::Graphics::Canvas::Svg::ICanvasSvgElement const& child) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgNamedElement)->RemoveChild(get_abi(child)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgNamedElement<D>::ReplaceChild(Microsoft::Graphics::Canvas::Svg::ICanvasSvgElement const& newChild, Microsoft::Graphics::Canvas::Svg::ICanvasSvgElement const& oldChild) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgNamedElement)->ReplaceChild(get_abi(newChild), get_abi(oldChild)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgNamedElement<D>::SetStringAttribute(param::hstring const& attributeName, param::hstring const& attributeValue) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgNamedElement)->SetStringAttribute(get_abi(attributeName), get_abi(attributeValue)));
}

template <typename D> hstring consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgNamedElement<D>::GetStringAttribute(param::hstring const& attributeName) const
{
    hstring attributeValue{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgNamedElement)->GetStringAttribute(get_abi(attributeName), put_abi(attributeValue)));
    return attributeValue;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgNamedElement<D>::SetAttribute(param::hstring const& attributeName, Microsoft::Graphics::Canvas::Svg::ICanvasSvgAttribute const& attributeValue) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgNamedElement)->SetAttribute(get_abi(attributeName), get_abi(attributeValue)));
}

template <typename D> Microsoft::Graphics::Canvas::Svg::ICanvasSvgAttribute consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgNamedElement<D>::GetAttribute(param::hstring const& attributeName) const
{
    Microsoft::Graphics::Canvas::Svg::ICanvasSvgAttribute attributeValue{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgNamedElement)->GetAttribute(get_abi(attributeName), put_abi(attributeValue)));
    return attributeValue;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgNamedElement<D>::SetIdAttribute(param::hstring const& attributeName, param::hstring const& attributeValue) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgNamedElement)->SetIdAttribute(get_abi(attributeName), get_abi(attributeValue)));
}

template <typename D> hstring consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgNamedElement<D>::GetIdAttribute(param::hstring const& attributeName) const
{
    hstring attributeValue{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgNamedElement)->GetIdAttribute(get_abi(attributeName), put_abi(attributeValue)));
    return attributeValue;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgNamedElement<D>::SetFloatAttribute(param::hstring const& attributeName, float attributeValue) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgNamedElement)->SetFloatAttribute(get_abi(attributeName), attributeValue));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgNamedElement<D>::GetFloatAttribute(param::hstring const& attributeName) const
{
    float attributeValue{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgNamedElement)->GetFloatAttribute(get_abi(attributeName), &attributeValue));
    return attributeValue;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgNamedElement<D>::SetColorAttribute(param::hstring const& attributeName, Windows::UI::Color const& attributeValue) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgNamedElement)->SetColorAttribute(get_abi(attributeName), get_abi(attributeValue)));
}

template <typename D> Windows::UI::Color consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgNamedElement<D>::GetColorAttribute(param::hstring const& attributeName) const
{
    Windows::UI::Color attributeValue{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgNamedElement)->GetColorAttribute(get_abi(attributeName), put_abi(attributeValue)));
    return attributeValue;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgNamedElement<D>::SetFilledRegionDeterminationAttribute(param::hstring const& attributeName, Microsoft::Graphics::Canvas::Geometry::CanvasFilledRegionDetermination const& attributeValue) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgNamedElement)->SetFilledRegionDeterminationAttribute(get_abi(attributeName), get_abi(attributeValue)));
}

template <typename D> Microsoft::Graphics::Canvas::Geometry::CanvasFilledRegionDetermination consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgNamedElement<D>::GetFilledRegionDeterminationAttribute(param::hstring const& attributeName) const
{
    Microsoft::Graphics::Canvas::Geometry::CanvasFilledRegionDetermination attributeValue{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgNamedElement)->GetFilledRegionDeterminationAttribute(get_abi(attributeName), put_abi(attributeValue)));
    return attributeValue;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgNamedElement<D>::SetDisplayAttribute(param::hstring const& attributeName, Microsoft::Graphics::Canvas::Svg::CanvasSvgDisplay const& attributeValue) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgNamedElement)->SetDisplayAttribute(get_abi(attributeName), get_abi(attributeValue)));
}

template <typename D> Microsoft::Graphics::Canvas::Svg::CanvasSvgDisplay consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgNamedElement<D>::GetDisplayAttribute(param::hstring const& attributeName) const
{
    Microsoft::Graphics::Canvas::Svg::CanvasSvgDisplay attributeValue{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgNamedElement)->GetDisplayAttribute(get_abi(attributeName), put_abi(attributeValue)));
    return attributeValue;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgNamedElement<D>::SetOverflowAttribute(param::hstring const& attributeName, Microsoft::Graphics::Canvas::Svg::CanvasSvgOverflow const& attributeValue) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgNamedElement)->SetOverflowAttribute(get_abi(attributeName), get_abi(attributeValue)));
}

template <typename D> Microsoft::Graphics::Canvas::Svg::CanvasSvgOverflow consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgNamedElement<D>::GetOverflowAttribute(param::hstring const& attributeName) const
{
    Microsoft::Graphics::Canvas::Svg::CanvasSvgOverflow attributeValue{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgNamedElement)->GetOverflowAttribute(get_abi(attributeName), put_abi(attributeValue)));
    return attributeValue;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgNamedElement<D>::SetCapStyleAttribute(param::hstring const& attributeName, Microsoft::Graphics::Canvas::Geometry::CanvasCapStyle const& attributeValue) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgNamedElement)->SetCapStyleAttribute(get_abi(attributeName), get_abi(attributeValue)));
}

template <typename D> Microsoft::Graphics::Canvas::Geometry::CanvasCapStyle consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgNamedElement<D>::GetCapStyleAttribute(param::hstring const& attributeName) const
{
    Microsoft::Graphics::Canvas::Geometry::CanvasCapStyle attributeValue{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgNamedElement)->GetCapStyleAttribute(get_abi(attributeName), put_abi(attributeValue)));
    return attributeValue;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgNamedElement<D>::SetLineJoinAttribute(param::hstring const& attributeName, Microsoft::Graphics::Canvas::Geometry::CanvasLineJoin const& attributeValue) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgNamedElement)->SetLineJoinAttribute(get_abi(attributeName), get_abi(attributeValue)));
}

template <typename D> Microsoft::Graphics::Canvas::Geometry::CanvasLineJoin consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgNamedElement<D>::GetLineJoinAttribute(param::hstring const& attributeName) const
{
    Microsoft::Graphics::Canvas::Geometry::CanvasLineJoin attributeValue{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgNamedElement)->GetLineJoinAttribute(get_abi(attributeName), put_abi(attributeValue)));
    return attributeValue;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgNamedElement<D>::SetVisibilityAttribute(param::hstring const& attributeName, Microsoft::Graphics::Canvas::Svg::CanvasSvgVisibility const& attributeValue) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgNamedElement)->SetVisibilityAttribute(get_abi(attributeName), get_abi(attributeValue)));
}

template <typename D> Microsoft::Graphics::Canvas::Svg::CanvasSvgVisibility consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgNamedElement<D>::GetVisibilityAttribute(param::hstring const& attributeName) const
{
    Microsoft::Graphics::Canvas::Svg::CanvasSvgVisibility attributeValue{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgNamedElement)->GetVisibilityAttribute(get_abi(attributeName), put_abi(attributeValue)));
    return attributeValue;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgNamedElement<D>::SetTransformAttribute(param::hstring const& attributeName, Windows::Foundation::Numerics::float3x2 const& attributeValue) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgNamedElement)->SetTransformAttribute(get_abi(attributeName), get_abi(attributeValue)));
}

template <typename D> Windows::Foundation::Numerics::float3x2 consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgNamedElement<D>::GetTransformAttribute(param::hstring const& attributeName) const
{
    Windows::Foundation::Numerics::float3x2 attributeValue{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgNamedElement)->GetTransformAttribute(get_abi(attributeName), put_abi(attributeValue)));
    return attributeValue;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgNamedElement<D>::SetUnitsAttribute(param::hstring const& attributeName, Microsoft::Graphics::Canvas::Svg::CanvasSvgUnits const& attributeValue) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgNamedElement)->SetUnitsAttribute(get_abi(attributeName), get_abi(attributeValue)));
}

template <typename D> Microsoft::Graphics::Canvas::Svg::CanvasSvgUnits consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgNamedElement<D>::GetUnitsAttribute(param::hstring const& attributeName) const
{
    Microsoft::Graphics::Canvas::Svg::CanvasSvgUnits attributeValue{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgNamedElement)->GetUnitsAttribute(get_abi(attributeName), put_abi(attributeValue)));
    return attributeValue;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgNamedElement<D>::SetEdgeBehaviorAttribute(param::hstring const& attributeName, Microsoft::Graphics::Canvas::CanvasEdgeBehavior const& attributeValue) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgNamedElement)->SetEdgeBehaviorAttribute(get_abi(attributeName), get_abi(attributeValue)));
}

template <typename D> Microsoft::Graphics::Canvas::CanvasEdgeBehavior consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgNamedElement<D>::GetEdgeBehaviorAttribute(param::hstring const& attributeName) const
{
    Microsoft::Graphics::Canvas::CanvasEdgeBehavior attributeValue{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgNamedElement)->GetEdgeBehaviorAttribute(get_abi(attributeName), put_abi(attributeValue)));
    return attributeValue;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgNamedElement<D>::SetRectangleAttribute(param::hstring const& attributeName, Windows::Foundation::Rect const& attributeValue) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgNamedElement)->SetRectangleAttribute(get_abi(attributeName), get_abi(attributeValue)));
}

template <typename D> Windows::Foundation::Rect consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgNamedElement<D>::GetRectangleAttribute(param::hstring const& attributeName) const
{
    Windows::Foundation::Rect attributeValue{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgNamedElement)->GetRectangleAttribute(get_abi(attributeName), put_abi(attributeValue)));
    return attributeValue;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgNamedElement<D>::SetLengthAttribute(param::hstring const& attributeName, float value, Microsoft::Graphics::Canvas::Svg::CanvasSvgLengthUnits const& units) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgNamedElement)->SetLengthAttribute(get_abi(attributeName), value, get_abi(units)));
}

template <typename D> float consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgNamedElement<D>::GetLengthAttribute(param::hstring const& attributeName, Microsoft::Graphics::Canvas::Svg::CanvasSvgLengthUnits& units) const
{
    float value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgNamedElement)->GetLengthAttribute(get_abi(attributeName), put_abi(units), &value));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgNamedElement<D>::SetAspectRatioAttribute(param::hstring const& attributeName, Microsoft::Graphics::Canvas::Svg::CanvasSvgAspectAlignment const& alignment, Microsoft::Graphics::Canvas::Svg::CanvasSvgAspectScaling const& meetOrSlice) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgNamedElement)->SetAspectRatioAttribute(get_abi(attributeName), get_abi(alignment), get_abi(meetOrSlice)));
}

template <typename D> Microsoft::Graphics::Canvas::Svg::CanvasSvgAspectAlignment consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgNamedElement<D>::GetAspectRatioAttribute(param::hstring const& attributeName, Microsoft::Graphics::Canvas::Svg::CanvasSvgAspectScaling& meetOrSlice) const
{
    Microsoft::Graphics::Canvas::Svg::CanvasSvgAspectAlignment alignment{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgNamedElement)->GetAspectRatioAttribute(get_abi(attributeName), put_abi(meetOrSlice), put_abi(alignment)));
    return alignment;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgPaintAttribute<D>::PaintType(Microsoft::Graphics::Canvas::Svg::CanvasSvgPaintType const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgPaintAttribute)->put_PaintType(get_abi(value)));
}

template <typename D> Microsoft::Graphics::Canvas::Svg::CanvasSvgPaintType consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgPaintAttribute<D>::PaintType() const
{
    Microsoft::Graphics::Canvas::Svg::CanvasSvgPaintType value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgPaintAttribute)->get_PaintType(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgPaintAttribute<D>::Color(Windows::UI::Color const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgPaintAttribute)->put_Color(get_abi(value)));
}

template <typename D> Windows::UI::Color consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgPaintAttribute<D>::Color() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgPaintAttribute)->get_Color(put_abi(value)));
    return value;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgPaintAttribute<D>::Id(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgPaintAttribute)->put_Id(get_abi(value)));
}

template <typename D> hstring consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgPaintAttribute<D>::Id() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgPaintAttribute)->get_Id(put_abi(value)));
    return value;
}

template <typename D> Microsoft::Graphics::Canvas::Geometry::CanvasGeometry consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgPathAttribute<D>::CreatePathGeometry() const
{
    Microsoft::Graphics::Canvas::Geometry::CanvasGeometry outputGeometry{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgPathAttribute)->CreatePathGeometry(put_abi(outputGeometry)));
    return outputGeometry;
}

template <typename D> Microsoft::Graphics::Canvas::Geometry::CanvasGeometry consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgPathAttribute<D>::CreatePathGeometry(Microsoft::Graphics::Canvas::Geometry::CanvasFilledRegionDetermination const& fill) const
{
    Microsoft::Graphics::Canvas::Geometry::CanvasGeometry outputGeometry{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgPathAttribute)->CreatePathGeometryWithFill(get_abi(fill), put_abi(outputGeometry)));
    return outputGeometry;
}

template <typename D> com_array<Microsoft::Graphics::Canvas::Svg::CanvasSvgPathCommand> consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgPathAttribute<D>::Commands() const
{
    com_array<Microsoft::Graphics::Canvas::Svg::CanvasSvgPathCommand> valueElements;
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgPathAttribute)->get_Commands(impl::put_size_abi(valueElements), put_abi(valueElements)));
    return valueElements;
}

template <typename D> com_array<Microsoft::Graphics::Canvas::Svg::CanvasSvgPathCommand> consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgPathAttribute<D>::GetCommands(int32_t startIndex, int32_t elementCount) const
{
    com_array<Microsoft::Graphics::Canvas::Svg::CanvasSvgPathCommand> outputValueElements;
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgPathAttribute)->GetCommands(startIndex, elementCount, impl::put_size_abi(outputValueElements), put_abi(outputValueElements)));
    return outputValueElements;
}

template <typename D> com_array<float> consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgPathAttribute<D>::SegmentData() const
{
    com_array<float> valueElements;
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgPathAttribute)->get_SegmentData(impl::put_size_abi(valueElements), put_abi(valueElements)));
    return valueElements;
}

template <typename D> com_array<float> consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgPathAttribute<D>::GetSegmentData(int32_t startIndex, int32_t elementCount) const
{
    com_array<float> outputValueElements;
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgPathAttribute)->GetSegmentData(startIndex, elementCount, impl::put_size_abi(outputValueElements), put_abi(outputValueElements)));
    return outputValueElements;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgPathAttribute<D>::RemoveCommandsAtEnd(int32_t commandsCount) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgPathAttribute)->RemoveCommandsAtEnd(commandsCount));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgPathAttribute<D>::RemoveSegmentDataAtEnd(int32_t commandsCount) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgPathAttribute)->RemoveSegmentDataAtEnd(commandsCount));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgPathAttribute<D>::SetCommands(int32_t startIndex, array_view<Microsoft::Graphics::Canvas::Svg::CanvasSvgPathCommand const> commands) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgPathAttribute)->SetCommands(startIndex, commands.size(), get_abi(commands)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgPathAttribute<D>::SetSegmentData(int32_t startIndex, array_view<float const> segmentData) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgPathAttribute)->SetSegmentData(startIndex, segmentData.size(), get_abi(segmentData)));
}

template <typename D> com_array<Windows::Foundation::Numerics::float2> consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgPointsAttribute<D>::Points() const
{
    com_array<Windows::Foundation::Numerics::float2> valueElements;
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgPointsAttribute)->get_Points(impl::put_size_abi(valueElements), put_abi(valueElements)));
    return valueElements;
}

template <typename D> com_array<Windows::Foundation::Numerics::float2> consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgPointsAttribute<D>::GetPoints(int32_t startIndex, int32_t elementCount) const
{
    com_array<Windows::Foundation::Numerics::float2> outputValueElements;
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgPointsAttribute)->GetPoints(startIndex, elementCount, impl::put_size_abi(outputValueElements), put_abi(outputValueElements)));
    return outputValueElements;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgPointsAttribute<D>::RemovePointsAtEnd(int32_t pointCount) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgPointsAttribute)->RemovePointsAtEnd(pointCount));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgPointsAttribute<D>::SetPoints(int32_t startIndex, array_view<Windows::Foundation::Numerics::float2 const> points) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgPointsAttribute)->SetPoints(startIndex, points.size(), get_abi(points)));
}

template <typename D> com_array<float> consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgStrokeDashArrayAttribute<D>::GetDashes() const
{
    com_array<float> valueElements;
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgStrokeDashArrayAttribute)->GetDashes(impl::put_size_abi(valueElements), put_abi(valueElements)));
    return valueElements;
}

template <typename D> com_array<float> consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgStrokeDashArrayAttribute<D>::GetDashes(int32_t startIndex, int32_t elementCount, com_array<Microsoft::Graphics::Canvas::Svg::CanvasSvgLengthUnits>& outputUnitsElements) const
{
    com_array<float> outputValueElements;
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgStrokeDashArrayAttribute)->GetDashesWithUnits(startIndex, elementCount, impl::put_size_abi(outputUnitsElements), put_abi(outputUnitsElements), impl::put_size_abi(outputValueElements), put_abi(outputValueElements)));
    return outputValueElements;
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgStrokeDashArrayAttribute<D>::RemoveDashesAtEnd(int32_t dashCount) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgStrokeDashArrayAttribute)->RemoveDashesAtEnd(dashCount));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgStrokeDashArrayAttribute<D>::SetDashes(int32_t startIndex, array_view<float const> dashes) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgStrokeDashArrayAttribute)->SetDashes(startIndex, dashes.size(), get_abi(dashes)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgStrokeDashArrayAttribute<D>::SetDashes(int32_t startIndex, array_view<float const> dashes, Microsoft::Graphics::Canvas::Svg::CanvasSvgLengthUnits const& units) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgStrokeDashArrayAttribute)->SetDashesWithUnit(startIndex, dashes.size(), get_abi(dashes), get_abi(units)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgStrokeDashArrayAttribute<D>::SetDashes(int32_t startIndex, array_view<float const> dashValues, array_view<Microsoft::Graphics::Canvas::Svg::CanvasSvgLengthUnits const> unitValues) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgStrokeDashArrayAttribute)->SetDashesWithUnits(startIndex, dashValues.size(), get_abi(dashValues), unitValues.size(), get_abi(unitValues)));
}

template <typename D> void consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgTextElement<D>::Text(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgTextElement)->put_Text(get_abi(value)));
}

template <typename D> hstring consume_Microsoft_Graphics_Canvas_Svg_ICanvasSvgTextElement<D>::Text() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Microsoft::Graphics::Canvas::Svg::ICanvasSvgTextElement)->get_Text(put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Svg::ICanvasSvgAttribute> : produce_base<D, Microsoft::Graphics::Canvas::Svg::ICanvasSvgAttribute>
{
    HRESULT __stdcall Clone(::IUnknown** result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Clone());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetElement(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetElement());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
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
struct produce<D, Microsoft::Graphics::Canvas::Svg::ICanvasSvgDocument> : produce_base<D, Microsoft::Graphics::Canvas::Svg::ICanvasSvgDocument>
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

    HRESULT __stdcall GetXml(HSTRING* xmlString) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *xmlString = detach_abi(this->shim().GetXml());
            return S_OK;
        }
        catch (...)
        {
            *xmlString = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SaveAsync(::IUnknown* stream, ::IUnknown** asyncAction) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncAction = detach_abi(this->shim().SaveAsync(*reinterpret_cast<Windows::Storage::Streams::IRandomAccessStream const*>(&stream)));
            return S_OK;
        }
        catch (...)
        {
            *asyncAction = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Root(::IUnknown* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Root(*reinterpret_cast<Microsoft::Graphics::Canvas::Svg::CanvasSvgNamedElement const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Root(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Root());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindElementById(HSTRING id, ::IUnknown** element) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *element = detach_abi(this->shim().FindElementById(*reinterpret_cast<hstring const*>(&id)));
            return S_OK;
        }
        catch (...)
        {
            *element = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreatePaintAttributeWithDefaults(::IUnknown** result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreatePaintAttribute());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreatePaintAttribute(Microsoft::Graphics::Canvas::Svg::CanvasSvgPaintType paintType, struct_of<4> color, HSTRING id, ::IUnknown** result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreatePaintAttribute(*reinterpret_cast<Microsoft::Graphics::Canvas::Svg::CanvasSvgPaintType const*>(&paintType), *reinterpret_cast<Windows::UI::Color const*>(&color), *reinterpret_cast<hstring const*>(&id)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreatePathAttributeWithDefaults(::IUnknown** result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreatePathAttribute());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreatePathAttribute(uint32_t __segmentDataSize, float* segmentData, uint32_t __commandsSize, Microsoft::Graphics::Canvas::Svg::CanvasSvgPathCommand* commands, ::IUnknown** result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreatePathAttribute(array_view<float const>(reinterpret_cast<float const *>(segmentData), reinterpret_cast<float const *>(segmentData) + __segmentDataSize), array_view<Microsoft::Graphics::Canvas::Svg::CanvasSvgPathCommand const>(reinterpret_cast<Microsoft::Graphics::Canvas::Svg::CanvasSvgPathCommand const *>(commands), reinterpret_cast<Microsoft::Graphics::Canvas::Svg::CanvasSvgPathCommand const *>(commands) + __commandsSize)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreatePointsAttributeWithDefaults(::IUnknown** result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreatePointsAttribute());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreatePointsAttribute(uint32_t __pointsSize, Windows::Foundation::Numerics::float2* points, ::IUnknown** result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreatePointsAttribute(array_view<Windows::Foundation::Numerics::float2 const>(reinterpret_cast<Windows::Foundation::Numerics::float2 const *>(points), reinterpret_cast<Windows::Foundation::Numerics::float2 const *>(points) + __pointsSize)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateStrokeDashArrayAttributeWithDefaults(::IUnknown** result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateStrokeDashArrayAttribute());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateStrokeDashArrayAttribute(uint32_t __dashValuesSize, float* dashValues, uint32_t __unitValuesSize, Microsoft::Graphics::Canvas::Svg::CanvasSvgLengthUnits* unitValues, ::IUnknown** result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateStrokeDashArrayAttribute(array_view<float const>(reinterpret_cast<float const *>(dashValues), reinterpret_cast<float const *>(dashValues) + __dashValuesSize), array_view<Microsoft::Graphics::Canvas::Svg::CanvasSvgLengthUnits const>(reinterpret_cast<Microsoft::Graphics::Canvas::Svg::CanvasSvgLengthUnits const *>(unitValues), reinterpret_cast<Microsoft::Graphics::Canvas::Svg::CanvasSvgLengthUnits const *>(unitValues) + __unitValuesSize)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall LoadElementFromXml(HSTRING xmlString, ::IUnknown** svgElement) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *svgElement = detach_abi(this->shim().LoadElementFromXml(*reinterpret_cast<hstring const*>(&xmlString)));
            return S_OK;
        }
        catch (...)
        {
            *svgElement = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall LoadElementAsync(::IUnknown* stream, ::IUnknown** svgElement) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *svgElement = detach_abi(this->shim().LoadElementAsync(*reinterpret_cast<Windows::Storage::Streams::IRandomAccessStream const*>(&stream)));
            return S_OK;
        }
        catch (...)
        {
            *svgElement = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Svg::ICanvasSvgDocumentFactory> : produce_base<D, Microsoft::Graphics::Canvas::Svg::ICanvasSvgDocumentFactory>
{
    HRESULT __stdcall CreateEmpty(::IUnknown* resourceCreator, ::IUnknown** canvasSvgDocument) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *canvasSvgDocument = detach_abi(this->shim().CreateEmpty(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator)));
            return S_OK;
        }
        catch (...)
        {
            *canvasSvgDocument = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Svg::ICanvasSvgDocumentStatics> : produce_base<D, Microsoft::Graphics::Canvas::Svg::ICanvasSvgDocumentStatics>
{
    HRESULT __stdcall LoadFromXml(::IUnknown* resourceCreator, HSTRING xmlString, ::IUnknown** svgDocument) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *svgDocument = detach_abi(this->shim().LoadFromXml(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator), *reinterpret_cast<hstring const*>(&xmlString)));
            return S_OK;
        }
        catch (...)
        {
            *svgDocument = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall LoadAsync(::IUnknown* resourceCreator, ::IUnknown* stream, ::IUnknown** svgDocument) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *svgDocument = detach_abi(this->shim().LoadAsync(*reinterpret_cast<Microsoft::Graphics::Canvas::ICanvasResourceCreator const*>(&resourceCreator), *reinterpret_cast<Windows::Storage::Streams::IRandomAccessStream const*>(&stream)));
            return S_OK;
        }
        catch (...)
        {
            *svgDocument = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IsSupported(::IUnknown* device, bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsSupported(*reinterpret_cast<Microsoft::Graphics::Canvas::CanvasDevice const*>(&device)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Svg::ICanvasSvgElement> : produce_base<D, Microsoft::Graphics::Canvas::Svg::ICanvasSvgElement>
{
    HRESULT __stdcall get_ContainingDocument(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ContainingDocument());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Parent(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Parent());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
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
struct produce<D, Microsoft::Graphics::Canvas::Svg::ICanvasSvgNamedElement> : produce_base<D, Microsoft::Graphics::Canvas::Svg::ICanvasSvgNamedElement>
{
    HRESULT __stdcall AppendChild(::IUnknown* child) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AppendChild(*reinterpret_cast<Microsoft::Graphics::Canvas::Svg::ICanvasSvgElement const*>(&child));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateAndAppendNamedChildElement(HSTRING childName, ::IUnknown** childElement) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *childElement = detach_abi(this->shim().CreateAndAppendNamedChildElement(*reinterpret_cast<hstring const*>(&childName)));
            return S_OK;
        }
        catch (...)
        {
            *childElement = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateAndAppendTextChildElement(HSTRING textContent, ::IUnknown** childElement) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *childElement = detach_abi(this->shim().CreateAndAppendTextChildElement(*reinterpret_cast<hstring const*>(&textContent)));
            return S_OK;
        }
        catch (...)
        {
            *childElement = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FirstChild(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FirstChild());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LastChild(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LastChild());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetPreviousSibling(::IUnknown* child, ::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetPreviousSibling(*reinterpret_cast<Microsoft::Graphics::Canvas::Svg::ICanvasSvgElement const*>(&child)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetNextSibling(::IUnknown* child, ::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetNextSibling(*reinterpret_cast<Microsoft::Graphics::Canvas::Svg::ICanvasSvgElement const*>(&child)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SpecifiedAttributes(uint32_t* __valueElementsSize, HSTRING** valueElements) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            std::tie(*__valueElementsSize, *valueElements) = detach_abi(this->shim().SpecifiedAttributes());
            return S_OK;
        }
        catch (...)
        {
            *__valueElementsSize = 0;
            *valueElements = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Tag(HSTRING* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Tag());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HasChildren(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HasChildren());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall InsertChildBefore(::IUnknown* child, ::IUnknown* referenceChild) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InsertChildBefore(*reinterpret_cast<Microsoft::Graphics::Canvas::Svg::ICanvasSvgElement const*>(&child), *reinterpret_cast<Microsoft::Graphics::Canvas::Svg::ICanvasSvgElement const*>(&referenceChild));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IsAttributeSpecified(HSTRING attributeName, bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsAttributeSpecified(*reinterpret_cast<hstring const*>(&attributeName)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IsAttributeSpecifiedWithInherhited(HSTRING attributeName, bool inherited, bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsAttributeSpecified(*reinterpret_cast<hstring const*>(&attributeName), inherited));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RemoveAttribute(HSTRING attributeName) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoveAttribute(*reinterpret_cast<hstring const*>(&attributeName));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RemoveChild(::IUnknown* child) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoveChild(*reinterpret_cast<Microsoft::Graphics::Canvas::Svg::ICanvasSvgElement const*>(&child));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReplaceChild(::IUnknown* newChild, ::IUnknown* oldChild) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReplaceChild(*reinterpret_cast<Microsoft::Graphics::Canvas::Svg::ICanvasSvgElement const*>(&newChild), *reinterpret_cast<Microsoft::Graphics::Canvas::Svg::ICanvasSvgElement const*>(&oldChild));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetStringAttribute(HSTRING attributeName, HSTRING attributeValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetStringAttribute(*reinterpret_cast<hstring const*>(&attributeName), *reinterpret_cast<hstring const*>(&attributeValue));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetStringAttribute(HSTRING attributeName, HSTRING* attributeValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *attributeValue = detach_abi(this->shim().GetStringAttribute(*reinterpret_cast<hstring const*>(&attributeName)));
            return S_OK;
        }
        catch (...)
        {
            *attributeValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetAttribute(HSTRING attributeName, ::IUnknown* attributeValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetAttribute(*reinterpret_cast<hstring const*>(&attributeName), *reinterpret_cast<Microsoft::Graphics::Canvas::Svg::ICanvasSvgAttribute const*>(&attributeValue));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetAttribute(HSTRING attributeName, ::IUnknown** attributeValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *attributeValue = detach_abi(this->shim().GetAttribute(*reinterpret_cast<hstring const*>(&attributeName)));
            return S_OK;
        }
        catch (...)
        {
            *attributeValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetIdAttribute(HSTRING attributeName, HSTRING attributeValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetIdAttribute(*reinterpret_cast<hstring const*>(&attributeName), *reinterpret_cast<hstring const*>(&attributeValue));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetIdAttribute(HSTRING attributeName, HSTRING* attributeValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *attributeValue = detach_abi(this->shim().GetIdAttribute(*reinterpret_cast<hstring const*>(&attributeName)));
            return S_OK;
        }
        catch (...)
        {
            *attributeValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetFloatAttribute(HSTRING attributeName, float attributeValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetFloatAttribute(*reinterpret_cast<hstring const*>(&attributeName), attributeValue);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetFloatAttribute(HSTRING attributeName, float* attributeValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *attributeValue = detach_abi(this->shim().GetFloatAttribute(*reinterpret_cast<hstring const*>(&attributeName)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetColorAttribute(HSTRING attributeName, struct_of<4> attributeValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetColorAttribute(*reinterpret_cast<hstring const*>(&attributeName), *reinterpret_cast<Windows::UI::Color const*>(&attributeValue));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetColorAttribute(HSTRING attributeName, struct_of<4>* attributeValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *attributeValue = detach_abi(this->shim().GetColorAttribute(*reinterpret_cast<hstring const*>(&attributeName)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetFilledRegionDeterminationAttribute(HSTRING attributeName, Microsoft::Graphics::Canvas::Geometry::CanvasFilledRegionDetermination attributeValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetFilledRegionDeterminationAttribute(*reinterpret_cast<hstring const*>(&attributeName), *reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasFilledRegionDetermination const*>(&attributeValue));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetFilledRegionDeterminationAttribute(HSTRING attributeName, Microsoft::Graphics::Canvas::Geometry::CanvasFilledRegionDetermination* attributeValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *attributeValue = detach_abi(this->shim().GetFilledRegionDeterminationAttribute(*reinterpret_cast<hstring const*>(&attributeName)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetDisplayAttribute(HSTRING attributeName, Microsoft::Graphics::Canvas::Svg::CanvasSvgDisplay attributeValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetDisplayAttribute(*reinterpret_cast<hstring const*>(&attributeName), *reinterpret_cast<Microsoft::Graphics::Canvas::Svg::CanvasSvgDisplay const*>(&attributeValue));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDisplayAttribute(HSTRING attributeName, Microsoft::Graphics::Canvas::Svg::CanvasSvgDisplay* attributeValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *attributeValue = detach_abi(this->shim().GetDisplayAttribute(*reinterpret_cast<hstring const*>(&attributeName)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetOverflowAttribute(HSTRING attributeName, Microsoft::Graphics::Canvas::Svg::CanvasSvgOverflow attributeValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetOverflowAttribute(*reinterpret_cast<hstring const*>(&attributeName), *reinterpret_cast<Microsoft::Graphics::Canvas::Svg::CanvasSvgOverflow const*>(&attributeValue));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetOverflowAttribute(HSTRING attributeName, Microsoft::Graphics::Canvas::Svg::CanvasSvgOverflow* attributeValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *attributeValue = detach_abi(this->shim().GetOverflowAttribute(*reinterpret_cast<hstring const*>(&attributeName)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetCapStyleAttribute(HSTRING attributeName, Microsoft::Graphics::Canvas::Geometry::CanvasCapStyle attributeValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetCapStyleAttribute(*reinterpret_cast<hstring const*>(&attributeName), *reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasCapStyle const*>(&attributeValue));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetCapStyleAttribute(HSTRING attributeName, Microsoft::Graphics::Canvas::Geometry::CanvasCapStyle* attributeValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *attributeValue = detach_abi(this->shim().GetCapStyleAttribute(*reinterpret_cast<hstring const*>(&attributeName)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetLineJoinAttribute(HSTRING attributeName, Microsoft::Graphics::Canvas::Geometry::CanvasLineJoin attributeValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetLineJoinAttribute(*reinterpret_cast<hstring const*>(&attributeName), *reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasLineJoin const*>(&attributeValue));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetLineJoinAttribute(HSTRING attributeName, Microsoft::Graphics::Canvas::Geometry::CanvasLineJoin* attributeValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *attributeValue = detach_abi(this->shim().GetLineJoinAttribute(*reinterpret_cast<hstring const*>(&attributeName)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetVisibilityAttribute(HSTRING attributeName, Microsoft::Graphics::Canvas::Svg::CanvasSvgVisibility attributeValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetVisibilityAttribute(*reinterpret_cast<hstring const*>(&attributeName), *reinterpret_cast<Microsoft::Graphics::Canvas::Svg::CanvasSvgVisibility const*>(&attributeValue));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetVisibilityAttribute(HSTRING attributeName, Microsoft::Graphics::Canvas::Svg::CanvasSvgVisibility* attributeValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *attributeValue = detach_abi(this->shim().GetVisibilityAttribute(*reinterpret_cast<hstring const*>(&attributeName)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetTransformAttribute(HSTRING attributeName, Windows::Foundation::Numerics::float3x2 attributeValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetTransformAttribute(*reinterpret_cast<hstring const*>(&attributeName), *reinterpret_cast<Windows::Foundation::Numerics::float3x2 const*>(&attributeValue));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetTransformAttribute(HSTRING attributeName, Windows::Foundation::Numerics::float3x2* attributeValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *attributeValue = detach_abi(this->shim().GetTransformAttribute(*reinterpret_cast<hstring const*>(&attributeName)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetUnitsAttribute(HSTRING attributeName, Microsoft::Graphics::Canvas::Svg::CanvasSvgUnits attributeValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetUnitsAttribute(*reinterpret_cast<hstring const*>(&attributeName), *reinterpret_cast<Microsoft::Graphics::Canvas::Svg::CanvasSvgUnits const*>(&attributeValue));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetUnitsAttribute(HSTRING attributeName, Microsoft::Graphics::Canvas::Svg::CanvasSvgUnits* attributeValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *attributeValue = detach_abi(this->shim().GetUnitsAttribute(*reinterpret_cast<hstring const*>(&attributeName)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetEdgeBehaviorAttribute(HSTRING attributeName, Microsoft::Graphics::Canvas::CanvasEdgeBehavior attributeValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetEdgeBehaviorAttribute(*reinterpret_cast<hstring const*>(&attributeName), *reinterpret_cast<Microsoft::Graphics::Canvas::CanvasEdgeBehavior const*>(&attributeValue));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetEdgeBehaviorAttribute(HSTRING attributeName, Microsoft::Graphics::Canvas::CanvasEdgeBehavior* attributeValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *attributeValue = detach_abi(this->shim().GetEdgeBehaviorAttribute(*reinterpret_cast<hstring const*>(&attributeName)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetRectangleAttribute(HSTRING attributeName, Windows::Foundation::Rect attributeValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetRectangleAttribute(*reinterpret_cast<hstring const*>(&attributeName), *reinterpret_cast<Windows::Foundation::Rect const*>(&attributeValue));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetRectangleAttribute(HSTRING attributeName, Windows::Foundation::Rect* attributeValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *attributeValue = detach_abi(this->shim().GetRectangleAttribute(*reinterpret_cast<hstring const*>(&attributeName)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetLengthAttribute(HSTRING attributeName, float value, Microsoft::Graphics::Canvas::Svg::CanvasSvgLengthUnits units) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetLengthAttribute(*reinterpret_cast<hstring const*>(&attributeName), value, *reinterpret_cast<Microsoft::Graphics::Canvas::Svg::CanvasSvgLengthUnits const*>(&units));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetLengthAttribute(HSTRING attributeName, Microsoft::Graphics::Canvas::Svg::CanvasSvgLengthUnits* units, float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetLengthAttribute(*reinterpret_cast<hstring const*>(&attributeName), *reinterpret_cast<Microsoft::Graphics::Canvas::Svg::CanvasSvgLengthUnits*>(units)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetAspectRatioAttribute(HSTRING attributeName, Microsoft::Graphics::Canvas::Svg::CanvasSvgAspectAlignment alignment, Microsoft::Graphics::Canvas::Svg::CanvasSvgAspectScaling meetOrSlice) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetAspectRatioAttribute(*reinterpret_cast<hstring const*>(&attributeName), *reinterpret_cast<Microsoft::Graphics::Canvas::Svg::CanvasSvgAspectAlignment const*>(&alignment), *reinterpret_cast<Microsoft::Graphics::Canvas::Svg::CanvasSvgAspectScaling const*>(&meetOrSlice));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetAspectRatioAttribute(HSTRING attributeName, Microsoft::Graphics::Canvas::Svg::CanvasSvgAspectScaling* meetOrSlice, Microsoft::Graphics::Canvas::Svg::CanvasSvgAspectAlignment* alignment) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *alignment = detach_abi(this->shim().GetAspectRatioAttribute(*reinterpret_cast<hstring const*>(&attributeName), *reinterpret_cast<Microsoft::Graphics::Canvas::Svg::CanvasSvgAspectScaling*>(meetOrSlice)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Svg::ICanvasSvgPaintAttribute> : produce_base<D, Microsoft::Graphics::Canvas::Svg::ICanvasSvgPaintAttribute>
{
    HRESULT __stdcall put_PaintType(Microsoft::Graphics::Canvas::Svg::CanvasSvgPaintType value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PaintType(*reinterpret_cast<Microsoft::Graphics::Canvas::Svg::CanvasSvgPaintType const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PaintType(Microsoft::Graphics::Canvas::Svg::CanvasSvgPaintType* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PaintType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Color(struct_of<4> value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Color(*reinterpret_cast<Windows::UI::Color const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Color(struct_of<4>* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Color());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Id(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Id(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Id(HSTRING* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Id());
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
struct produce<D, Microsoft::Graphics::Canvas::Svg::ICanvasSvgPathAttribute> : produce_base<D, Microsoft::Graphics::Canvas::Svg::ICanvasSvgPathAttribute>
{
    HRESULT __stdcall CreatePathGeometry(::IUnknown** outputGeometry) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *outputGeometry = detach_abi(this->shim().CreatePathGeometry());
            return S_OK;
        }
        catch (...)
        {
            *outputGeometry = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreatePathGeometryWithFill(Microsoft::Graphics::Canvas::Geometry::CanvasFilledRegionDetermination fill, ::IUnknown** outputGeometry) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *outputGeometry = detach_abi(this->shim().CreatePathGeometry(*reinterpret_cast<Microsoft::Graphics::Canvas::Geometry::CanvasFilledRegionDetermination const*>(&fill)));
            return S_OK;
        }
        catch (...)
        {
            *outputGeometry = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Commands(uint32_t* __valueElementsSize, Microsoft::Graphics::Canvas::Svg::CanvasSvgPathCommand** valueElements) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            std::tie(*__valueElementsSize, *valueElements) = detach_abi(this->shim().Commands());
            return S_OK;
        }
        catch (...)
        {
            *__valueElementsSize = 0;
            *valueElements = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetCommands(int32_t startIndex, int32_t elementCount, uint32_t* __outputValueElementsSize, Microsoft::Graphics::Canvas::Svg::CanvasSvgPathCommand** outputValueElements) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            std::tie(*__outputValueElementsSize, *outputValueElements) = detach_abi(this->shim().GetCommands(startIndex, elementCount));
            return S_OK;
        }
        catch (...)
        {
            *__outputValueElementsSize = 0;
            *outputValueElements = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SegmentData(uint32_t* __valueElementsSize, float** valueElements) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            std::tie(*__valueElementsSize, *valueElements) = detach_abi(this->shim().SegmentData());
            return S_OK;
        }
        catch (...)
        {
            *__valueElementsSize = 0;
            *valueElements = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetSegmentData(int32_t startIndex, int32_t elementCount, uint32_t* __outputValueElementsSize, float** outputValueElements) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            std::tie(*__outputValueElementsSize, *outputValueElements) = detach_abi(this->shim().GetSegmentData(startIndex, elementCount));
            return S_OK;
        }
        catch (...)
        {
            *__outputValueElementsSize = 0;
            *outputValueElements = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RemoveCommandsAtEnd(int32_t commandsCount) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoveCommandsAtEnd(commandsCount);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RemoveSegmentDataAtEnd(int32_t commandsCount) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoveSegmentDataAtEnd(commandsCount);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetCommands(int32_t startIndex, uint32_t __commandsSize, Microsoft::Graphics::Canvas::Svg::CanvasSvgPathCommand* commands) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetCommands(startIndex, array_view<Microsoft::Graphics::Canvas::Svg::CanvasSvgPathCommand const>(reinterpret_cast<Microsoft::Graphics::Canvas::Svg::CanvasSvgPathCommand const *>(commands), reinterpret_cast<Microsoft::Graphics::Canvas::Svg::CanvasSvgPathCommand const *>(commands) + __commandsSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetSegmentData(int32_t startIndex, uint32_t __segmentDataSize, float* segmentData) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetSegmentData(startIndex, array_view<float const>(reinterpret_cast<float const *>(segmentData), reinterpret_cast<float const *>(segmentData) + __segmentDataSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Svg::ICanvasSvgPointsAttribute> : produce_base<D, Microsoft::Graphics::Canvas::Svg::ICanvasSvgPointsAttribute>
{
    HRESULT __stdcall get_Points(uint32_t* __valueElementsSize, Windows::Foundation::Numerics::float2** valueElements) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            std::tie(*__valueElementsSize, *valueElements) = detach_abi(this->shim().Points());
            return S_OK;
        }
        catch (...)
        {
            *__valueElementsSize = 0;
            *valueElements = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetPoints(int32_t startIndex, int32_t elementCount, uint32_t* __outputValueElementsSize, Windows::Foundation::Numerics::float2** outputValueElements) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            std::tie(*__outputValueElementsSize, *outputValueElements) = detach_abi(this->shim().GetPoints(startIndex, elementCount));
            return S_OK;
        }
        catch (...)
        {
            *__outputValueElementsSize = 0;
            *outputValueElements = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RemovePointsAtEnd(int32_t pointCount) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemovePointsAtEnd(pointCount);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetPoints(int32_t startIndex, uint32_t __pointsSize, Windows::Foundation::Numerics::float2* points) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetPoints(startIndex, array_view<Windows::Foundation::Numerics::float2 const>(reinterpret_cast<Windows::Foundation::Numerics::float2 const *>(points), reinterpret_cast<Windows::Foundation::Numerics::float2 const *>(points) + __pointsSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Svg::ICanvasSvgStrokeDashArrayAttribute> : produce_base<D, Microsoft::Graphics::Canvas::Svg::ICanvasSvgStrokeDashArrayAttribute>
{
    HRESULT __stdcall GetDashes(uint32_t* __valueElementsSize, float** valueElements) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            std::tie(*__valueElementsSize, *valueElements) = detach_abi(this->shim().GetDashes());
            return S_OK;
        }
        catch (...)
        {
            *__valueElementsSize = 0;
            *valueElements = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDashesWithUnits(int32_t startIndex, int32_t elementCount, uint32_t* __outputUnitsElementsSize, Microsoft::Graphics::Canvas::Svg::CanvasSvgLengthUnits** outputUnitsElements, uint32_t* __outputValueElementsSize, float** outputValueElements) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            std::tie(*__outputValueElementsSize, *outputValueElements) = detach_abi(this->shim().GetDashes(startIndex, elementCount, detach_abi<Microsoft::Graphics::Canvas::Svg::CanvasSvgLengthUnits>(__outputUnitsElementsSize, outputUnitsElements)));
            return S_OK;
        }
        catch (...)
        {
            *__outputUnitsElementsSize = 0;
            *outputUnitsElements = nullptr;
            *__outputValueElementsSize = 0;
            *outputValueElements = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RemoveDashesAtEnd(int32_t dashCount) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoveDashesAtEnd(dashCount);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetDashes(int32_t startIndex, uint32_t __dashesSize, float* dashes) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetDashes(startIndex, array_view<float const>(reinterpret_cast<float const *>(dashes), reinterpret_cast<float const *>(dashes) + __dashesSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetDashesWithUnit(int32_t startIndex, uint32_t __dashesSize, float* dashes, Microsoft::Graphics::Canvas::Svg::CanvasSvgLengthUnits units) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetDashes(startIndex, array_view<float const>(reinterpret_cast<float const *>(dashes), reinterpret_cast<float const *>(dashes) + __dashesSize), *reinterpret_cast<Microsoft::Graphics::Canvas::Svg::CanvasSvgLengthUnits const*>(&units));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetDashesWithUnits(int32_t startIndex, uint32_t __dashValuesSize, float* dashValues, uint32_t __unitValuesSize, Microsoft::Graphics::Canvas::Svg::CanvasSvgLengthUnits* unitValues) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetDashes(startIndex, array_view<float const>(reinterpret_cast<float const *>(dashValues), reinterpret_cast<float const *>(dashValues) + __dashValuesSize), array_view<Microsoft::Graphics::Canvas::Svg::CanvasSvgLengthUnits const>(reinterpret_cast<Microsoft::Graphics::Canvas::Svg::CanvasSvgLengthUnits const *>(unitValues), reinterpret_cast<Microsoft::Graphics::Canvas::Svg::CanvasSvgLengthUnits const *>(unitValues) + __unitValuesSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Microsoft::Graphics::Canvas::Svg::ICanvasSvgTextElement> : produce_base<D, Microsoft::Graphics::Canvas::Svg::ICanvasSvgTextElement>
{
    HRESULT __stdcall put_Text(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Text(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Text(HSTRING* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Text());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Microsoft::Graphics::Canvas::Svg {

inline CanvasSvgDocument::CanvasSvgDocument(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator) :
    CanvasSvgDocument(get_activation_factory<CanvasSvgDocument, Microsoft::Graphics::Canvas::Svg::ICanvasSvgDocumentFactory>().CreateEmpty(resourceCreator))
{}

inline Microsoft::Graphics::Canvas::Svg::CanvasSvgDocument CanvasSvgDocument::LoadFromXml(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, param::hstring const& xmlString)
{
    return get_activation_factory<CanvasSvgDocument, Microsoft::Graphics::Canvas::Svg::ICanvasSvgDocumentStatics>().LoadFromXml(resourceCreator, xmlString);
}

inline Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::Svg::CanvasSvgDocument> CanvasSvgDocument::LoadAsync(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Storage::Streams::IRandomAccessStream const& stream)
{
    return get_activation_factory<CanvasSvgDocument, Microsoft::Graphics::Canvas::Svg::ICanvasSvgDocumentStatics>().LoadAsync(resourceCreator, stream);
}

inline bool CanvasSvgDocument::IsSupported(Microsoft::Graphics::Canvas::CanvasDevice const& device)
{
    return get_activation_factory<CanvasSvgDocument, Microsoft::Graphics::Canvas::Svg::ICanvasSvgDocumentStatics>().IsSupported(device);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Svg::ICanvasSvgAttribute> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Svg::ICanvasSvgAttribute> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Svg::ICanvasSvgDocument> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Svg::ICanvasSvgDocument> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Svg::ICanvasSvgDocumentFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Svg::ICanvasSvgDocumentFactory> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Svg::ICanvasSvgDocumentStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Svg::ICanvasSvgDocumentStatics> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Svg::ICanvasSvgElement> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Svg::ICanvasSvgElement> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Svg::ICanvasSvgNamedElement> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Svg::ICanvasSvgNamedElement> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Svg::ICanvasSvgPaintAttribute> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Svg::ICanvasSvgPaintAttribute> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Svg::ICanvasSvgPathAttribute> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Svg::ICanvasSvgPathAttribute> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Svg::ICanvasSvgPointsAttribute> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Svg::ICanvasSvgPointsAttribute> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Svg::ICanvasSvgStrokeDashArrayAttribute> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Svg::ICanvasSvgStrokeDashArrayAttribute> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Svg::ICanvasSvgTextElement> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Svg::ICanvasSvgTextElement> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Svg::CanvasSvgDocument> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Svg::CanvasSvgDocument> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Svg::CanvasSvgNamedElement> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Svg::CanvasSvgNamedElement> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Svg::CanvasSvgPaintAttribute> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Svg::CanvasSvgPaintAttribute> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Svg::CanvasSvgPathAttribute> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Svg::CanvasSvgPathAttribute> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Svg::CanvasSvgPointsAttribute> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Svg::CanvasSvgPointsAttribute> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Svg::CanvasSvgStrokeDashArrayAttribute> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Svg::CanvasSvgStrokeDashArrayAttribute> {};

template<> struct hash<winrt::Microsoft::Graphics::Canvas::Svg::CanvasSvgTextElement> : 
    winrt::impl::impl_hash_unknown<winrt::Microsoft::Graphics::Canvas::Svg::CanvasSvgTextElement> {};

}

WINRT_WARNING_POP
