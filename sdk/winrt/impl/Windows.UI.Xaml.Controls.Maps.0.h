// C++/WinRT v1.0.170906.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Devices::Geolocation {

enum class AltitudeReferenceSystem;
struct GeoboundingBox;
struct Geopath;
struct Geopoint;

}

WINRT_EXPORT namespace winrt::Windows::Foundation {

struct Uri;

}

WINRT_EXPORT namespace winrt::Windows::Services::Maps {

struct MapRoute;

}

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

struct IRandomAccessStreamReference;

}

WINRT_EXPORT namespace winrt::Windows::UI {

struct Color;

}

WINRT_EXPORT namespace winrt::Windows::UI::Xaml {

struct DataTemplate;
struct DependencyObject;
struct DependencyProperty;
struct Thickness;

}

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Controls::Maps {

enum class MapAnimationKind : int32_t
{
    Default = 0,
    None = 1,
    Linear = 2,
    Bow = 3,
};

enum class MapCameraChangeReason : int32_t
{
    System = 0,
    UserInteraction = 1,
    Programmatic = 2,
};

enum class MapColorScheme : int32_t
{
    Light = 0,
    Dark = 1,
};

enum class MapElementCollisionBehavior : int32_t
{
    Hide = 0,
    RemainVisible = 1,
};

enum class MapInteractionMode : int32_t
{
    Auto = 0,
    Disabled = 1,
    GestureOnly = 2,
    PointerAndKeyboard = 2,
    ControlOnly = 3,
    GestureAndControl = 4,
    PointerKeyboardAndControl = 4,
    PointerOnly = 5,
};

enum class MapLoadingStatus : int32_t
{
    Loading = 0,
    Loaded = 1,
    DataUnavailable = 2,
};

enum class MapModel3DShadingOption : int32_t
{
    Default = 0,
    Flat = 1,
    Smooth = 2,
};

enum class MapPanInteractionMode : int32_t
{
    Auto = 0,
    Disabled = 1,
};

enum class MapProjection : int32_t
{
    WebMercator = 0,
    Globe = 1,
};

enum class MapStyle : int32_t
{
    None = 0,
    Road = 1,
    Aerial = 2,
    AerialWithRoads = 3,
    Terrain = 4,
    Aerial3D = 5,
    Aerial3DWithRoads = 6,
    Custom = 7,
};

enum class MapTileLayer : int32_t
{
    LabelOverlay = 0,
    RoadOverlay = 1,
    AreaOverlay = 2,
    BackgroundOverlay = 3,
    BackgroundReplacement = 4,
};

enum class MapVisibleRegionKind : int32_t
{
    Near = 0,
    Full = 1,
};

enum class MapWatermarkMode : int32_t
{
    Automatic = 0,
    On = 1,
};

struct ICustomMapTileDataSource;
struct ICustomMapTileDataSourceFactory;
struct IHttpMapTileDataSource;
struct IHttpMapTileDataSourceFactory;
struct ILocalMapTileDataSource;
struct ILocalMapTileDataSourceFactory;
struct IMapActualCameraChangedEventArgs;
struct IMapActualCameraChangedEventArgs2;
struct IMapActualCameraChangingEventArgs;
struct IMapActualCameraChangingEventArgs2;
struct IMapBillboard;
struct IMapBillboardFactory;
struct IMapBillboardStatics;
struct IMapCamera;
struct IMapCameraFactory;
struct IMapContextRequestedEventArgs;
struct IMapControl;
struct IMapControl2;
struct IMapControl3;
struct IMapControl4;
struct IMapControl5;
struct IMapControl6;
struct IMapControlStatics;
struct IMapControlStatics2;
struct IMapControlStatics4;
struct IMapControlStatics5;
struct IMapControlStatics6;
struct IMapCustomExperience;
struct IMapCustomExperienceChangedEventArgs;
struct IMapCustomExperienceFactory;
struct IMapElement;
struct IMapElement2;
struct IMapElement3;
struct IMapElement3D;
struct IMapElement3DStatics;
struct IMapElementClickEventArgs;
struct IMapElementFactory;
struct IMapElementPointerEnteredEventArgs;
struct IMapElementPointerExitedEventArgs;
struct IMapElementStatics;
struct IMapElementStatics2;
struct IMapElementStatics3;
struct IMapElementsLayer;
struct IMapElementsLayerClickEventArgs;
struct IMapElementsLayerContextRequestedEventArgs;
struct IMapElementsLayerPointerEnteredEventArgs;
struct IMapElementsLayerPointerExitedEventArgs;
struct IMapElementsLayerStatics;
struct IMapIcon;
struct IMapIcon2;
struct IMapIconStatics;
struct IMapIconStatics2;
struct IMapInputEventArgs;
struct IMapItemsControl;
struct IMapItemsControlStatics;
struct IMapLayer;
struct IMapLayerFactory;
struct IMapLayerStatics;
struct IMapModel3D;
struct IMapModel3DFactory;
struct IMapModel3DStatics;
struct IMapPolygon;
struct IMapPolygon2;
struct IMapPolygonStatics;
struct IMapPolyline;
struct IMapPolylineStatics;
struct IMapRightTappedEventArgs;
struct IMapRouteView;
struct IMapRouteViewFactory;
struct IMapScene;
struct IMapSceneStatics;
struct IMapStyleSheet;
struct IMapStyleSheetEntriesStatics;
struct IMapStyleSheetEntryStatesStatics;
struct IMapStyleSheetStatics;
struct IMapTargetCameraChangedEventArgs;
struct IMapTargetCameraChangedEventArgs2;
struct IMapTileBitmapRequest;
struct IMapTileBitmapRequestDeferral;
struct IMapTileBitmapRequestedEventArgs;
struct IMapTileDataSource;
struct IMapTileDataSourceFactory;
struct IMapTileSource;
struct IMapTileSourceFactory;
struct IMapTileSourceStatics;
struct IMapTileUriRequest;
struct IMapTileUriRequestDeferral;
struct IMapTileUriRequestedEventArgs;
struct IStreetsideExperience;
struct IStreetsideExperienceFactory;
struct IStreetsidePanorama;
struct IStreetsidePanoramaStatics;
struct CustomMapTileDataSource;
struct HttpMapTileDataSource;
struct LocalMapTileDataSource;
struct MapActualCameraChangedEventArgs;
struct MapActualCameraChangingEventArgs;
struct MapBillboard;
struct MapCamera;
struct MapContextRequestedEventArgs;
struct MapControl;
struct MapCustomExperience;
struct MapCustomExperienceChangedEventArgs;
struct MapElement;
struct MapElement3D;
struct MapElementClickEventArgs;
struct MapElementPointerEnteredEventArgs;
struct MapElementPointerExitedEventArgs;
struct MapElementsLayer;
struct MapElementsLayerClickEventArgs;
struct MapElementsLayerContextRequestedEventArgs;
struct MapElementsLayerPointerEnteredEventArgs;
struct MapElementsLayerPointerExitedEventArgs;
struct MapIcon;
struct MapInputEventArgs;
struct MapItemsControl;
struct MapLayer;
struct MapModel3D;
struct MapPolygon;
struct MapPolyline;
struct MapRightTappedEventArgs;
struct MapRouteView;
struct MapScene;
struct MapStyleSheet;
struct MapStyleSheetEntries;
struct MapStyleSheetEntryStates;
struct MapTargetCameraChangedEventArgs;
struct MapTileBitmapRequest;
struct MapTileBitmapRequestDeferral;
struct MapTileBitmapRequestedEventArgs;
struct MapTileDataSource;
struct MapTileSource;
struct MapTileUriRequest;
struct MapTileUriRequestDeferral;
struct MapTileUriRequestedEventArgs;
struct StreetsideExperience;
struct StreetsidePanorama;
struct MapZoomLevelRange;

}

namespace winrt::impl {

template <> struct category<Windows::UI::Xaml::Controls::Maps::ICustomMapTileDataSource>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::ICustomMapTileDataSourceFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSource>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSourceFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::ILocalMapTileDataSource>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::ILocalMapTileDataSourceFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangedEventArgs2>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangingEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangingEventArgs2>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapBillboard>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapBillboardFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapBillboardStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapCamera>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapCameraFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapContextRequestedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapControl>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapControl2>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapControl3>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapControl4>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapControl5>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapControl6>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapControlStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapControlStatics2>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapControlStatics4>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapControlStatics5>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapControlStatics6>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapCustomExperience>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapCustomExperienceChangedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapCustomExperienceFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapElement>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapElement2>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapElement3>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapElement3D>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapElement3DStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapElementClickEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapElementFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapElementPointerEnteredEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapElementPointerExitedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapElementStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapElementStatics2>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapElementStatics3>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapElementsLayer>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapElementsLayerClickEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapElementsLayerContextRequestedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapElementsLayerPointerEnteredEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapElementsLayerPointerExitedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapElementsLayerStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapIcon>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapIcon2>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapIconStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapIconStatics2>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapInputEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapItemsControl>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapItemsControlStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapLayer>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapLayerFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapLayerStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapModel3D>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapModel3DFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapModel3DStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapPolygon>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapPolygon2>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapPolygonStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapPolyline>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapPolylineStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapRightTappedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapRouteView>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapRouteViewFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapScene>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapSceneStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapStyleSheet>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntryStatesStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapStyleSheetStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapTargetCameraChangedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapTargetCameraChangedEventArgs2>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequest>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequestDeferral>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequestedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapTileDataSource>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapTileDataSourceFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapTileSource>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapTileSourceFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapTileSourceStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapTileUriRequest>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapTileUriRequestDeferral>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapTileUriRequestedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::IStreetsideExperience>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::IStreetsideExperienceFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::IStreetsidePanorama>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::IStreetsidePanoramaStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::CustomMapTileDataSource>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::HttpMapTileDataSource>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::LocalMapTileDataSource>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::MapActualCameraChangedEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::MapActualCameraChangingEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::MapBillboard>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::MapCamera>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::MapContextRequestedEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::MapControl>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::MapCustomExperience>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::MapCustomExperienceChangedEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::MapElement>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::MapElement3D>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::MapElementClickEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::MapElementPointerEnteredEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::MapElementPointerExitedEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::MapElementsLayer>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::MapElementsLayerClickEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::MapElementsLayerContextRequestedEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::MapElementsLayerPointerEnteredEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::MapElementsLayerPointerExitedEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::MapIcon>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::MapInputEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::MapItemsControl>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::MapLayer>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::MapModel3D>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::MapPolygon>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::MapPolyline>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::MapRightTappedEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::MapRouteView>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::MapScene>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::MapStyleSheet>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::MapStyleSheetEntries>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::MapStyleSheetEntryStates>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::MapTargetCameraChangedEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::MapTileBitmapRequest>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::MapTileBitmapRequestDeferral>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::MapTileBitmapRequestedEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::MapTileDataSource>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::MapTileSource>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::MapTileUriRequest>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::MapTileUriRequestDeferral>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::MapTileUriRequestedEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::StreetsideExperience>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::StreetsidePanorama>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::MapAnimationKind>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::MapCameraChangeReason>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::MapColorScheme>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::MapElementCollisionBehavior>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::MapInteractionMode>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::MapLoadingStatus>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::MapModel3DShadingOption>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::MapPanInteractionMode>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::MapProjection>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::MapStyle>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::MapTileLayer>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::MapVisibleRegionKind>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::MapWatermarkMode>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::Controls::Maps::MapZoomLevelRange>{ using type = struct_category<double,double>; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::ICustomMapTileDataSource>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.ICustomMapTileDataSource" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::ICustomMapTileDataSourceFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.ICustomMapTileDataSourceFactory" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSource>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IHttpMapTileDataSource" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSourceFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IHttpMapTileDataSourceFactory" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::ILocalMapTileDataSource>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.ILocalMapTileDataSource" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::ILocalMapTileDataSourceFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.ILocalMapTileDataSourceFactory" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapActualCameraChangedEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangedEventArgs2>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapActualCameraChangedEventArgs2" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangingEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapActualCameraChangingEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangingEventArgs2>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapActualCameraChangingEventArgs2" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapBillboard>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapBillboard" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapBillboardFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapBillboardFactory" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapBillboardStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapBillboardStatics" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapCamera>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapCamera" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapCameraFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapCameraFactory" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapContextRequestedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapContextRequestedEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapControl>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapControl" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapControl2>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapControl2" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapControl3>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapControl3" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapControl4>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapControl4" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapControl5>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapControl5" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapControl6>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapControl6" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapControlStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapControlStatics" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapControlStatics2>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapControlStatics2" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapControlStatics4>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapControlStatics4" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapControlStatics5>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapControlStatics5" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapControlStatics6>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapControlStatics6" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapCustomExperience>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapCustomExperience" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapCustomExperienceChangedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapCustomExperienceChangedEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapCustomExperienceFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapCustomExperienceFactory" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapElement>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapElement" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapElement2>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapElement2" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapElement3>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapElement3" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapElement3D>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapElement3D" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapElement3DStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapElement3DStatics" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapElementClickEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapElementClickEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapElementFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapElementFactory" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapElementPointerEnteredEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapElementPointerEnteredEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapElementPointerExitedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapElementPointerExitedEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapElementStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapElementStatics" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapElementStatics2>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapElementStatics2" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapElementStatics3>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapElementStatics3" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapElementsLayer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapElementsLayer" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapElementsLayerClickEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapElementsLayerClickEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapElementsLayerContextRequestedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapElementsLayerContextRequestedEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapElementsLayerPointerEnteredEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapElementsLayerPointerEnteredEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapElementsLayerPointerExitedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapElementsLayerPointerExitedEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapElementsLayerStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapElementsLayerStatics" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapIcon>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapIcon" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapIcon2>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapIcon2" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapIconStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapIconStatics" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapIconStatics2>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapIconStatics2" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapInputEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapInputEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapItemsControl>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapItemsControl" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapItemsControlStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapItemsControlStatics" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapLayer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapLayer" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapLayerFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapLayerFactory" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapLayerStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapLayerStatics" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapModel3D>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapModel3D" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapModel3DFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapModel3DFactory" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapModel3DStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapModel3DStatics" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapPolygon>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapPolygon" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapPolygon2>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapPolygon2" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapPolygonStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapPolygonStatics" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapPolyline>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapPolyline" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapPolylineStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapPolylineStatics" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapRightTappedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapRightTappedEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapRouteView>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapRouteView" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapRouteViewFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapRouteViewFactory" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapScene>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapScene" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapSceneStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapSceneStatics" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapStyleSheet>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapStyleSheet" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapStyleSheetEntriesStatics" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntryStatesStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapStyleSheetEntryStatesStatics" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapStyleSheetStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapStyleSheetStatics" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapTargetCameraChangedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapTargetCameraChangedEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapTargetCameraChangedEventArgs2>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapTargetCameraChangedEventArgs2" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequest>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapTileBitmapRequest" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequestDeferral>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapTileBitmapRequestDeferral" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequestedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapTileBitmapRequestedEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapTileDataSource>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapTileDataSource" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapTileDataSourceFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapTileDataSourceFactory" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapTileSource>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapTileSource" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapTileSourceFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapTileSourceFactory" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapTileSourceStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapTileSourceStatics" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapTileUriRequest>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapTileUriRequest" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapTileUriRequestDeferral>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapTileUriRequestDeferral" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::IMapTileUriRequestedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IMapTileUriRequestedEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::IStreetsideExperience>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IStreetsideExperience" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::IStreetsideExperienceFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IStreetsideExperienceFactory" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::IStreetsidePanorama>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IStreetsidePanorama" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::IStreetsidePanoramaStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.IStreetsidePanoramaStatics" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::CustomMapTileDataSource>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.CustomMapTileDataSource" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::HttpMapTileDataSource>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.HttpMapTileDataSource" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::LocalMapTileDataSource>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.LocalMapTileDataSource" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::MapActualCameraChangedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapActualCameraChangedEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::MapActualCameraChangingEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapActualCameraChangingEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::MapBillboard>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapBillboard" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::MapCamera>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapCamera" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::MapContextRequestedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapContextRequestedEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::MapControl>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapControl" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::MapCustomExperience>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapCustomExperience" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::MapCustomExperienceChangedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapCustomExperienceChangedEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::MapElement>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapElement" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::MapElement3D>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapElement3D" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::MapElementClickEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapElementClickEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::MapElementPointerEnteredEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapElementPointerEnteredEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::MapElementPointerExitedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapElementPointerExitedEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::MapElementsLayer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapElementsLayer" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::MapElementsLayerClickEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapElementsLayerClickEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::MapElementsLayerContextRequestedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapElementsLayerContextRequestedEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::MapElementsLayerPointerEnteredEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapElementsLayerPointerEnteredEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::MapElementsLayerPointerExitedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapElementsLayerPointerExitedEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::MapIcon>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapIcon" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::MapInputEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapInputEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::MapItemsControl>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapItemsControl" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::MapLayer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapLayer" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::MapModel3D>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapModel3D" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::MapPolygon>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapPolygon" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::MapPolyline>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapPolyline" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::MapRightTappedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapRightTappedEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::MapRouteView>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapRouteView" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::MapScene>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapScene" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::MapStyleSheet>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapStyleSheet" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::MapStyleSheetEntries>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapStyleSheetEntries" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::MapStyleSheetEntryStates>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapStyleSheetEntryStates" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::MapTargetCameraChangedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapTargetCameraChangedEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::MapTileBitmapRequest>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapTileBitmapRequest" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::MapTileBitmapRequestDeferral>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapTileBitmapRequestDeferral" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::MapTileBitmapRequestedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapTileBitmapRequestedEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::MapTileDataSource>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapTileDataSource" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::MapTileSource>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapTileSource" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::MapTileUriRequest>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapTileUriRequest" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::MapTileUriRequestDeferral>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapTileUriRequestDeferral" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::MapTileUriRequestedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapTileUriRequestedEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::StreetsideExperience>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.StreetsideExperience" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::StreetsidePanorama>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.StreetsidePanorama" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::MapAnimationKind>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapAnimationKind" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::MapCameraChangeReason>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapCameraChangeReason" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::MapColorScheme>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapColorScheme" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::MapElementCollisionBehavior>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapElementCollisionBehavior" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::MapInteractionMode>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapInteractionMode" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::MapLoadingStatus>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapLoadingStatus" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::MapModel3DShadingOption>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapModel3DShadingOption" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::MapPanInteractionMode>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapPanInteractionMode" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::MapProjection>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapProjection" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::MapStyle>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapStyle" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::MapTileLayer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapTileLayer" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::MapVisibleRegionKind>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapVisibleRegionKind" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::MapWatermarkMode>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapWatermarkMode" }; };
template <> struct name<Windows::UI::Xaml::Controls::Maps::MapZoomLevelRange>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Maps.MapZoomLevelRange" }; };
template <> struct guid<Windows::UI::Xaml::Controls::Maps::ICustomMapTileDataSource>{ static constexpr GUID value{ 0x65DA384A,0x2DB1,0x4BE1,{ 0xB1,0x55,0x3D,0x0C,0x9E,0xCF,0x47,0x99 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Maps::ICustomMapTileDataSourceFactory>{ static constexpr GUID value{ 0xC8477947,0xC955,0x4F22,{ 0x94,0x44,0xA1,0xD8,0xD7,0x44,0xAF,0x11 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSource>{ static constexpr GUID value{ 0x9D03CB5C,0xFD79,0x4795,{ 0x87,0xBE,0x7E,0x54,0xCA,0x0B,0x37,0xD0 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSourceFactory>{ static constexpr GUID value{ 0x53B4B107,0x84DC,0x4291,{ 0x89,0xF8,0x6D,0x0B,0xB6,0x12,0xA0,0x55 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Maps::ILocalMapTileDataSource>{ static constexpr GUID value{ 0x616257B5,0x9108,0x4F12,{ 0x8B,0xF4,0xBB,0x3C,0x8F,0x62,0x74,0xE5 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Maps::ILocalMapTileDataSourceFactory>{ static constexpr GUID value{ 0xC5CFE9FC,0x72AC,0x4839,{ 0x8A,0x0D,0x01,0x1F,0x24,0x69,0x3C,0x79 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangedEventArgs>{ static constexpr GUID value{ 0xDAA080DA,0xB7F4,0x422C,{ 0xA6,0x18,0xBB,0xAA,0x7C,0x1D,0x81,0x4C } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangedEventArgs2>{ static constexpr GUID value{ 0x7BA4C7E5,0x10DC,0x455A,{ 0x9D,0x04,0x1D,0x72,0xFB,0x6D,0x9B,0x93 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangingEventArgs>{ static constexpr GUID value{ 0x6B0DBED6,0x93F7,0x4682,{ 0x8D,0xE5,0xA4,0x7A,0x1C,0xC7,0xA9,0x45 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangingEventArgs2>{ static constexpr GUID value{ 0xF2867897,0x40AC,0x4E8A,{ 0xA9,0x27,0x51,0x0F,0x38,0x46,0xA4,0x7E } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Maps::IMapBillboard>{ static constexpr GUID value{ 0x1694259D,0x0AE2,0x4F42,{ 0xA0,0x2E,0x29,0x2C,0xA8,0x35,0xD3,0x9D } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Maps::IMapBillboardFactory>{ static constexpr GUID value{ 0xBE45A4C5,0x8F09,0x4B86,{ 0xAE,0x28,0x78,0x37,0x40,0xEB,0x8B,0x31 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Maps::IMapBillboardStatics>{ static constexpr GUID value{ 0xFDF839FE,0xE1F7,0x4FB0,{ 0x88,0x87,0x7D,0xA6,0x8C,0x64,0x73,0x33 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Maps::IMapCamera>{ static constexpr GUID value{ 0x53A6B623,0xC0F8,0x4D8B,{ 0xAD,0x1E,0xA5,0x95,0x98,0xEA,0x84,0x0B } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Maps::IMapCameraFactory>{ static constexpr GUID value{ 0xEA3B0F16,0x83AF,0x4ACE,{ 0x8E,0x71,0x10,0xAD,0x9F,0x1E,0x9E,0x7F } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Maps::IMapContextRequestedEventArgs>{ static constexpr GUID value{ 0xFDD1B423,0xC961,0x4DF2,{ 0xBB,0x57,0x82,0xEE,0x0F,0x0B,0xB5,0x91 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Maps::IMapControl>{ static constexpr GUID value{ 0x42D0B851,0x5256,0x4747,{ 0x9E,0x6C,0x0D,0x11,0xE9,0x66,0x14,0x1E } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Maps::IMapControl2>{ static constexpr GUID value{ 0xE1FD644D,0x96EC,0x4065,{ 0xB0,0xF0,0x75,0x28,0x1D,0xA3,0x65,0x4D } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Maps::IMapControl3>{ static constexpr GUID value{ 0x586328F8,0x8CDD,0x40AE,{ 0x93,0x38,0xAF,0x2A,0x7B,0xE8,0x45,0xE5 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Maps::IMapControl4>{ static constexpr GUID value{ 0x068F132A,0x1817,0x466D,{ 0xB7,0xCE,0x41,0x9B,0x3F,0x8E,0x24,0x8B } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Maps::IMapControl5>{ static constexpr GUID value{ 0xDD9B0FFD,0x7823,0x46A2,{ 0x82,0xC9,0x65,0xDD,0xAC,0x4F,0x36,0x5F } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Maps::IMapControl6>{ static constexpr GUID value{ 0xB0DA89A2,0x1041,0x4BEA,{ 0xB8,0x8A,0x12,0xAC,0x9A,0x82,0xE0,0xE2 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Maps::IMapControlStatics>{ static constexpr GUID value{ 0xC2C61795,0x2147,0x4F0A,{ 0x94,0x2A,0x54,0x93,0xA8,0x5D,0xE8,0x07 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Maps::IMapControlStatics2>{ static constexpr GUID value{ 0x04852B93,0xB446,0x4D31,{ 0x97,0x52,0x1E,0xC6,0x9A,0x59,0x96,0xAE } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Maps::IMapControlStatics4>{ static constexpr GUID value{ 0xFE785D97,0x5D13,0x4FA1,{ 0xBF,0x1D,0x84,0x06,0x17,0x68,0xC1,0x83 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Maps::IMapControlStatics5>{ static constexpr GUID value{ 0x09626F00,0xB7DD,0x4189,{ 0xA7,0xF7,0x83,0x0C,0x41,0x2D,0xEE,0xA3 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Maps::IMapControlStatics6>{ static constexpr GUID value{ 0x3CCFDD7F,0x24D1,0x40A2,{ 0x83,0x51,0xB3,0x06,0x3A,0x8C,0x95,0xA4 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Maps::IMapCustomExperience>{ static constexpr GUID value{ 0x64592866,0x14A3,0x4E5F,{ 0x88,0x83,0x8E,0x9C,0x50,0x0E,0xEE,0xDE } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Maps::IMapCustomExperienceChangedEventArgs>{ static constexpr GUID value{ 0xB9E6FB9B,0x8FC1,0x4042,{ 0xAC,0x34,0xA6,0x1B,0x38,0xBB,0x75,0x14 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Maps::IMapCustomExperienceFactory>{ static constexpr GUID value{ 0x7A403FB5,0xA1B1,0x4E7F,{ 0x92,0x1E,0x3E,0x6B,0x8D,0x8E,0xBE,0xD6 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Maps::IMapElement>{ static constexpr GUID value{ 0xD61FC4DF,0xB245,0x47F2,{ 0x9A,0xC2,0x43,0xC0,0x58,0xB1,0xC9,0x03 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Maps::IMapElement2>{ static constexpr GUID value{ 0x6619F261,0xFBA6,0x4964,{ 0xA7,0xFF,0xF1,0xAF,0x63,0xAB,0x9C,0xB0 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Maps::IMapElement3>{ static constexpr GUID value{ 0x13EFBC59,0x45ED,0x48B4,{ 0x93,0xAD,0xE3,0xF7,0x8F,0x8C,0xF2,0x18 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Maps::IMapElement3D>{ static constexpr GUID value{ 0x827AF8D5,0x3843,0x48E2,{ 0xBD,0x00,0x0F,0x06,0x44,0xFB,0xE6,0xA5 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Maps::IMapElement3DStatics>{ static constexpr GUID value{ 0x6128011A,0x450F,0x442A,{ 0xB9,0xD9,0xAA,0x81,0x5C,0x71,0x90,0x7A } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Maps::IMapElementClickEventArgs>{ static constexpr GUID value{ 0x40168A11,0xD080,0x4519,{ 0x99,0xA1,0x31,0x49,0xFB,0x89,0x99,0xD0 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Maps::IMapElementFactory>{ static constexpr GUID value{ 0x4A30D007,0x0BD6,0x47A5,{ 0x86,0x0B,0x7E,0x7C,0xF5,0xF0,0xC5,0x73 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Maps::IMapElementPointerEnteredEventArgs>{ static constexpr GUID value{ 0xAB85DD4E,0x91D7,0x4B31,{ 0x8F,0x0A,0xD3,0x90,0xC7,0xD3,0xA2,0xEF } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Maps::IMapElementPointerExitedEventArgs>{ static constexpr GUID value{ 0xC1A45AF9,0x60C9,0x4679,{ 0x91,0x19,0x20,0xAB,0xC7,0x5D,0x93,0x1F } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Maps::IMapElementStatics>{ static constexpr GUID value{ 0xE8C71CF2,0xBFEF,0x4B49,{ 0x8E,0x99,0x41,0xB5,0xE3,0x78,0x9F,0xD2 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Maps::IMapElementStatics2>{ static constexpr GUID value{ 0x9BF72F30,0x80FE,0x4F30,{ 0xBC,0xC1,0xFA,0x89,0x40,0x50,0xF6,0x76 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Maps::IMapElementStatics3>{ static constexpr GUID value{ 0xE11EE92F,0x9742,0x49AA,{ 0xAA,0xD8,0x2E,0x46,0x6B,0xFF,0x37,0x96 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Maps::IMapElementsLayer>{ static constexpr GUID value{ 0xDE79689A,0x01EF,0x46F4,{ 0xAC,0x60,0x7C,0x20,0x0B,0x55,0x26,0x10 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Maps::IMapElementsLayerClickEventArgs>{ static constexpr GUID value{ 0x2CA7CF66,0xAF1B,0x4C05,{ 0x8C,0x85,0xF7,0x4A,0xE3,0xD4,0x67,0x7F } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Maps::IMapElementsLayerContextRequestedEventArgs>{ static constexpr GUID value{ 0xDA45D0B3,0x7A0E,0x4758,{ 0x80,0x8B,0x3A,0x63,0x76,0x27,0xEB,0x0D } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Maps::IMapElementsLayerPointerEnteredEventArgs>{ static constexpr GUID value{ 0x757FC032,0x4694,0x4404,{ 0x8C,0x89,0x34,0x8B,0x6B,0x76,0xC5,0xE6 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Maps::IMapElementsLayerPointerExitedEventArgs>{ static constexpr GUID value{ 0x92F3C6AD,0x03ED,0x4C39,{ 0xAF,0x20,0x2A,0x07,0xEE,0x1C,0xCE,0xA6 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Maps::IMapElementsLayerStatics>{ static constexpr GUID value{ 0x34005727,0xF509,0x4D28,{ 0x91,0x80,0x91,0x1C,0x03,0x41,0x1D,0x74 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Maps::IMapIcon>{ static constexpr GUID value{ 0xD2096872,0x23D9,0x4A2B,{ 0x8B,0xE0,0x69,0xF3,0xA8,0x54,0x82,0xAB } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Maps::IMapIcon2>{ static constexpr GUID value{ 0x611254B9,0xD8AA,0x4BBD,{ 0xA3,0x16,0xBA,0xDF,0x06,0x91,0x1D,0x63 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Maps::IMapIconStatics>{ static constexpr GUID value{ 0xDCBC9E56,0x1190,0x4B5D,{ 0x9E,0x56,0xE5,0xB6,0x72,0x4A,0xA3,0x28 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Maps::IMapIconStatics2>{ static constexpr GUID value{ 0xFF4C306A,0xCF76,0x46AB,{ 0xA1,0x2F,0xB6,0x03,0xB9,0x86,0xC6,0x96 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Maps::IMapInputEventArgs>{ static constexpr GUID value{ 0x9FC503A0,0xA8A2,0x4394,{ 0x92,0xE9,0x22,0x47,0x76,0x4F,0x2F,0x49 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Maps::IMapItemsControl>{ static constexpr GUID value{ 0x94C2C4D3,0xB335,0x42C5,{ 0xB6,0x60,0xE6,0xA0,0x7E,0xC3,0xBD,0xDC } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Maps::IMapItemsControlStatics>{ static constexpr GUID value{ 0x33A859C7,0x789B,0x425C,{ 0x8A,0x0A,0x32,0x38,0x58,0x96,0xCB,0x4A } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Maps::IMapLayer>{ static constexpr GUID value{ 0x6D0FF9C1,0xA14D,0x4F97,{ 0x8F,0x57,0x46,0x71,0x5B,0x57,0x68,0x3A } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Maps::IMapLayerFactory>{ static constexpr GUID value{ 0xE02A2207,0xDEE3,0x47C8,{ 0x98,0x25,0xBD,0x02,0x9C,0x57,0x52,0xF7 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Maps::IMapLayerStatics>{ static constexpr GUID value{ 0x9CA4A26B,0x5DB9,0x4F0C,{ 0xBD,0xD5,0xB1,0xBF,0xFD,0xCC,0xE9,0x46 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Maps::IMapModel3D>{ static constexpr GUID value{ 0xF8C541A1,0xCA27,0x4968,{ 0xA2,0xBF,0x9C,0x20,0xF0,0x6A,0x04,0x68 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Maps::IMapModel3DFactory>{ static constexpr GUID value{ 0xDF7F0BCC,0x580A,0x498B,{ 0x93,0x9B,0x01,0x19,0xA9,0xDA,0xDB,0x9E } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Maps::IMapModel3DStatics>{ static constexpr GUID value{ 0x4834A480,0x8E56,0x4B0F,{ 0x87,0x2D,0x7E,0xAD,0x10,0x31,0x87,0xCD } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Maps::IMapPolygon>{ static constexpr GUID value{ 0xABDA2285,0x4926,0x4C3A,{ 0xA5,0xF9,0x19,0xDF,0x7F,0x69,0xDB,0x3D } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Maps::IMapPolygon2>{ static constexpr GUID value{ 0x96C8A11E,0x636B,0x4018,{ 0x9C,0x2E,0xAC,0xC9,0x12,0x2A,0x01,0xB2 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Maps::IMapPolygonStatics>{ static constexpr GUID value{ 0x37F573BE,0x097B,0x424C,{ 0x87,0xCC,0x2E,0xE0,0x42,0xFD,0xA6,0xD2 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Maps::IMapPolyline>{ static constexpr GUID value{ 0xFBAD24A2,0x24DF,0x4A86,{ 0x8F,0xFA,0x0F,0x8F,0x4D,0x9E,0xC1,0x7D } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Maps::IMapPolylineStatics>{ static constexpr GUID value{ 0x61FDE44B,0x1DDF,0x4303,{ 0xB8,0x09,0xEC,0x87,0xF5,0x8A,0xD0,0x65 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Maps::IMapRightTappedEventArgs>{ static constexpr GUID value{ 0x20943171,0x6FE8,0x40A6,{ 0xAD,0x0E,0x29,0x73,0x79,0xB5,0x75,0xA7 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Maps::IMapRouteView>{ static constexpr GUID value{ 0x740EAEC5,0xBACC,0x41E1,{ 0xA6,0x7E,0xDD,0x65,0x13,0x83,0x20,0x49 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Maps::IMapRouteViewFactory>{ static constexpr GUID value{ 0xF083ADDF,0x0066,0x4628,{ 0x82,0xFE,0xEA,0x78,0xC2,0x3C,0xEC,0x1E } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Maps::IMapScene>{ static constexpr GUID value{ 0x8BBA10A9,0x50E7,0x482C,{ 0x97,0x89,0xC6,0x88,0xB1,0x78,0xAC,0x24 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Maps::IMapSceneStatics>{ static constexpr GUID value{ 0x03E4AD6C,0x86EC,0x44D9,{ 0x95,0x97,0xFB,0x75,0xB7,0xDE,0xBA,0x0A } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Maps::IMapStyleSheet>{ static constexpr GUID value{ 0xAE54B2BF,0x8991,0x42ED,{ 0x8D,0x58,0x20,0x47,0x3D,0xEE,0xDE,0x1D } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics>{ static constexpr GUID value{ 0xC9636345,0xEF1A,0x41A4,{ 0xA7,0x57,0xBD,0x4F,0x43,0xE1,0xE4,0xD1 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntryStatesStatics>{ static constexpr GUID value{ 0x23AC5532,0x866D,0x4BFA,{ 0xB4,0x81,0x39,0xBE,0xA1,0xDE,0x35,0x06 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Maps::IMapStyleSheetStatics>{ static constexpr GUID value{ 0xABBD00AD,0x0A1C,0x4335,{ 0x82,0xF4,0x61,0xD9,0x36,0xAA,0x19,0x7D } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Maps::IMapTargetCameraChangedEventArgs>{ static constexpr GUID value{ 0xDBF00472,0xE953,0x4FA8,{ 0x97,0xD0,0xEA,0x86,0x35,0x90,0x57,0xCF } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Maps::IMapTargetCameraChangedEventArgs2>{ static constexpr GUID value{ 0x97C0B332,0xF2B6,0x460B,{ 0x8D,0x91,0xAC,0x02,0x0A,0x23,0x83,0xDD } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequest>{ static constexpr GUID value{ 0x46733FBC,0xD89D,0x472B,{ 0xB5,0xF6,0xD7,0x06,0x6B,0x05,0x84,0xF4 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequestDeferral>{ static constexpr GUID value{ 0xFE370542,0xA4AC,0x4EFA,{ 0x96,0x65,0x04,0x90,0xB0,0xCA,0xFD,0xD2 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequestedEventArgs>{ static constexpr GUID value{ 0x337F691D,0x9B02,0x4AA2,{ 0x8B,0x1E,0xCC,0x4D,0x91,0x71,0x9B,0xF3 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Maps::IMapTileDataSource>{ static constexpr GUID value{ 0xC03D9F5E,0xBE1F,0x4C69,{ 0x99,0x69,0x79,0x46,0x7A,0x51,0x3C,0x38 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Maps::IMapTileDataSourceFactory>{ static constexpr GUID value{ 0xA3920FBD,0xE446,0x4648,{ 0xA7,0x4D,0xFD,0x2C,0x5D,0x55,0x7C,0x06 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Maps::IMapTileSource>{ static constexpr GUID value{ 0x88A76E4E,0x2FDF,0x4567,{ 0x92,0x55,0x11,0x00,0x51,0x9C,0x8D,0x62 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Maps::IMapTileSourceFactory>{ static constexpr GUID value{ 0xCD7F811F,0x77FA,0x482B,{ 0x9D,0x34,0x71,0xD3,0x1D,0x46,0x5C,0x48 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Maps::IMapTileSourceStatics>{ static constexpr GUID value{ 0x93FCC93C,0x7035,0x4603,{ 0x99,0xB1,0xE6,0x59,0x92,0x1B,0x60,0x93 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Maps::IMapTileUriRequest>{ static constexpr GUID value{ 0x17402335,0x3127,0x45B8,{ 0x87,0xA7,0x99,0xF8,0x7D,0x4E,0x27,0x45 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Maps::IMapTileUriRequestDeferral>{ static constexpr GUID value{ 0xC117ADE0,0xBF3E,0x4C51,{ 0x8F,0xAA,0x4B,0x59,0x3C,0xF6,0x8E,0xB2 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Maps::IMapTileUriRequestedEventArgs>{ static constexpr GUID value{ 0xD2147B43,0x1BBF,0x4B98,{ 0x8D,0xD3,0xB7,0x83,0x4E,0x40,0x7E,0x0D } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Maps::IStreetsideExperience>{ static constexpr GUID value{ 0xA558AEC9,0xE30C,0x46C8,{ 0x81,0x16,0x48,0x46,0x91,0x67,0x55,0x58 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Maps::IStreetsideExperienceFactory>{ static constexpr GUID value{ 0x7A5BCF3C,0x649E,0x4342,{ 0x99,0x95,0x68,0xA6,0xCF,0x59,0x61,0xA7 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Maps::IStreetsidePanorama>{ static constexpr GUID value{ 0x6FE00FD8,0xAD60,0x4664,{ 0xB5,0x39,0xB1,0x06,0x9F,0x16,0xC5,0xAF } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Maps::IStreetsidePanoramaStatics>{ static constexpr GUID value{ 0xD3B47F69,0x54B3,0x4EC5,{ 0xB2,0xA0,0x4F,0x82,0x04,0x57,0x65,0x07 } }; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::CustomMapTileDataSource>{ using type = Windows::UI::Xaml::Controls::Maps::ICustomMapTileDataSource; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::HttpMapTileDataSource>{ using type = Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSource; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::LocalMapTileDataSource>{ using type = Windows::UI::Xaml::Controls::Maps::ILocalMapTileDataSource; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapActualCameraChangedEventArgs>{ using type = Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangedEventArgs; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapActualCameraChangingEventArgs>{ using type = Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangingEventArgs; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapBillboard>{ using type = Windows::UI::Xaml::Controls::Maps::IMapBillboard; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapCamera>{ using type = Windows::UI::Xaml::Controls::Maps::IMapCamera; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapContextRequestedEventArgs>{ using type = Windows::UI::Xaml::Controls::Maps::IMapContextRequestedEventArgs; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapControl>{ using type = Windows::UI::Xaml::Controls::Maps::IMapControl; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapCustomExperience>{ using type = Windows::UI::Xaml::Controls::Maps::IMapCustomExperience; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapCustomExperienceChangedEventArgs>{ using type = Windows::UI::Xaml::Controls::Maps::IMapCustomExperienceChangedEventArgs; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapElement>{ using type = Windows::UI::Xaml::Controls::Maps::IMapElement; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapElement3D>{ using type = Windows::UI::Xaml::Controls::Maps::IMapElement3D; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapElementClickEventArgs>{ using type = Windows::UI::Xaml::Controls::Maps::IMapElementClickEventArgs; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapElementPointerEnteredEventArgs>{ using type = Windows::UI::Xaml::Controls::Maps::IMapElementPointerEnteredEventArgs; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapElementPointerExitedEventArgs>{ using type = Windows::UI::Xaml::Controls::Maps::IMapElementPointerExitedEventArgs; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapElementsLayer>{ using type = Windows::UI::Xaml::Controls::Maps::IMapElementsLayer; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapElementsLayerClickEventArgs>{ using type = Windows::UI::Xaml::Controls::Maps::IMapElementsLayerClickEventArgs; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapElementsLayerContextRequestedEventArgs>{ using type = Windows::UI::Xaml::Controls::Maps::IMapElementsLayerContextRequestedEventArgs; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapElementsLayerPointerEnteredEventArgs>{ using type = Windows::UI::Xaml::Controls::Maps::IMapElementsLayerPointerEnteredEventArgs; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapElementsLayerPointerExitedEventArgs>{ using type = Windows::UI::Xaml::Controls::Maps::IMapElementsLayerPointerExitedEventArgs; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapIcon>{ using type = Windows::UI::Xaml::Controls::Maps::IMapIcon; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapInputEventArgs>{ using type = Windows::UI::Xaml::Controls::Maps::IMapInputEventArgs; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapItemsControl>{ using type = Windows::UI::Xaml::Controls::Maps::IMapItemsControl; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapLayer>{ using type = Windows::UI::Xaml::Controls::Maps::IMapLayer; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapModel3D>{ using type = Windows::UI::Xaml::Controls::Maps::IMapModel3D; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapPolygon>{ using type = Windows::UI::Xaml::Controls::Maps::IMapPolygon; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapPolyline>{ using type = Windows::UI::Xaml::Controls::Maps::IMapPolyline; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapRightTappedEventArgs>{ using type = Windows::UI::Xaml::Controls::Maps::IMapRightTappedEventArgs; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapRouteView>{ using type = Windows::UI::Xaml::Controls::Maps::IMapRouteView; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapScene>{ using type = Windows::UI::Xaml::Controls::Maps::IMapScene; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapStyleSheet>{ using type = Windows::UI::Xaml::Controls::Maps::IMapStyleSheet; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapTargetCameraChangedEventArgs>{ using type = Windows::UI::Xaml::Controls::Maps::IMapTargetCameraChangedEventArgs; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapTileBitmapRequest>{ using type = Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequest; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapTileBitmapRequestDeferral>{ using type = Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequestDeferral; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapTileBitmapRequestedEventArgs>{ using type = Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequestedEventArgs; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapTileDataSource>{ using type = Windows::UI::Xaml::Controls::Maps::IMapTileDataSource; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapTileSource>{ using type = Windows::UI::Xaml::Controls::Maps::IMapTileSource; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapTileUriRequest>{ using type = Windows::UI::Xaml::Controls::Maps::IMapTileUriRequest; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapTileUriRequestDeferral>{ using type = Windows::UI::Xaml::Controls::Maps::IMapTileUriRequestDeferral; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapTileUriRequestedEventArgs>{ using type = Windows::UI::Xaml::Controls::Maps::IMapTileUriRequestedEventArgs; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::StreetsideExperience>{ using type = Windows::UI::Xaml::Controls::Maps::IStreetsideExperience; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::StreetsidePanorama>{ using type = Windows::UI::Xaml::Controls::Maps::IStreetsidePanorama; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Maps_ICustomMapTileDataSource
{
    event_token BitmapRequested(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::CustomMapTileDataSource, Windows::UI::Xaml::Controls::Maps::MapTileBitmapRequestedEventArgs> const& value) const;
    using BitmapRequested_revoker = event_revoker<Windows::UI::Xaml::Controls::Maps::ICustomMapTileDataSource>;
    BitmapRequested_revoker BitmapRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::CustomMapTileDataSource, Windows::UI::Xaml::Controls::Maps::MapTileBitmapRequestedEventArgs> const& value) const;
    void BitmapRequested(event_token const& token) const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Maps::ICustomMapTileDataSource> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_ICustomMapTileDataSource<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Maps_ICustomMapTileDataSourceFactory
{
    Windows::UI::Xaml::Controls::Maps::CustomMapTileDataSource CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Maps::ICustomMapTileDataSourceFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_ICustomMapTileDataSourceFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Maps_IHttpMapTileDataSource
{
    hstring UriFormatString() const;
    void UriFormatString(param::hstring const& value) const;
    Windows::Foundation::Collections::IMap<hstring, hstring> AdditionalRequestHeaders() const;
    bool AllowCaching() const;
    void AllowCaching(bool value) const;
    event_token UriRequested(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::HttpMapTileDataSource, Windows::UI::Xaml::Controls::Maps::MapTileUriRequestedEventArgs> const& value) const;
    using UriRequested_revoker = event_revoker<Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSource>;
    UriRequested_revoker UriRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::HttpMapTileDataSource, Windows::UI::Xaml::Controls::Maps::MapTileUriRequestedEventArgs> const& value) const;
    void UriRequested(event_token const& token) const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSource> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IHttpMapTileDataSource<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Maps_IHttpMapTileDataSourceFactory
{
    Windows::UI::Xaml::Controls::Maps::HttpMapTileDataSource CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
    Windows::UI::Xaml::Controls::Maps::HttpMapTileDataSource CreateInstanceWithUriFormatString(param::hstring const& uriFormatString, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSourceFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IHttpMapTileDataSourceFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Maps_ILocalMapTileDataSource
{
    hstring UriFormatString() const;
    void UriFormatString(param::hstring const& value) const;
    event_token UriRequested(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::LocalMapTileDataSource, Windows::UI::Xaml::Controls::Maps::MapTileUriRequestedEventArgs> const& value) const;
    using UriRequested_revoker = event_revoker<Windows::UI::Xaml::Controls::Maps::ILocalMapTileDataSource>;
    UriRequested_revoker UriRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::LocalMapTileDataSource, Windows::UI::Xaml::Controls::Maps::MapTileUriRequestedEventArgs> const& value) const;
    void UriRequested(event_token const& token) const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Maps::ILocalMapTileDataSource> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_ILocalMapTileDataSource<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Maps_ILocalMapTileDataSourceFactory
{
    Windows::UI::Xaml::Controls::Maps::LocalMapTileDataSource CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
    Windows::UI::Xaml::Controls::Maps::LocalMapTileDataSource CreateInstanceWithUriFormatString(param::hstring const& uriFormatString, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Maps::ILocalMapTileDataSourceFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_ILocalMapTileDataSourceFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Maps_IMapActualCameraChangedEventArgs
{
    Windows::UI::Xaml::Controls::Maps::MapCamera Camera() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangedEventArgs> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapActualCameraChangedEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Maps_IMapActualCameraChangedEventArgs2
{
    Windows::UI::Xaml::Controls::Maps::MapCameraChangeReason ChangeReason() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangedEventArgs2> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapActualCameraChangedEventArgs2<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Maps_IMapActualCameraChangingEventArgs
{
    Windows::UI::Xaml::Controls::Maps::MapCamera Camera() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangingEventArgs> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapActualCameraChangingEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Maps_IMapActualCameraChangingEventArgs2
{
    Windows::UI::Xaml::Controls::Maps::MapCameraChangeReason ChangeReason() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangingEventArgs2> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapActualCameraChangingEventArgs2<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Maps_IMapBillboard
{
    Windows::Devices::Geolocation::Geopoint Location() const;
    void Location(Windows::Devices::Geolocation::Geopoint const& value) const;
    Windows::Foundation::Point NormalizedAnchorPoint() const;
    void NormalizedAnchorPoint(Windows::Foundation::Point const& value) const;
    Windows::Storage::Streams::IRandomAccessStreamReference Image() const;
    void Image(Windows::Storage::Streams::IRandomAccessStreamReference const& value) const;
    Windows::UI::Xaml::Controls::Maps::MapElementCollisionBehavior CollisionBehaviorDesired() const;
    void CollisionBehaviorDesired(Windows::UI::Xaml::Controls::Maps::MapElementCollisionBehavior const& value) const;
    Windows::UI::Xaml::Controls::Maps::MapCamera ReferenceCamera() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapBillboard> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapBillboard<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Maps_IMapBillboardFactory
{
    Windows::UI::Xaml::Controls::Maps::MapBillboard CreateInstanceFromCamera(Windows::UI::Xaml::Controls::Maps::MapCamera const& camera) const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapBillboardFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapBillboardFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Maps_IMapBillboardStatics
{
    Windows::UI::Xaml::DependencyProperty LocationProperty() const;
    Windows::UI::Xaml::DependencyProperty NormalizedAnchorPointProperty() const;
    Windows::UI::Xaml::DependencyProperty CollisionBehaviorDesiredProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapBillboardStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapBillboardStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Maps_IMapCamera
{
    Windows::Devices::Geolocation::Geopoint Location() const;
    void Location(Windows::Devices::Geolocation::Geopoint const& value) const;
    double Heading() const;
    void Heading(double value) const;
    double Pitch() const;
    void Pitch(double value) const;
    double Roll() const;
    void Roll(double value) const;
    double FieldOfView() const;
    void FieldOfView(double value) const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapCamera> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapCamera<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Maps_IMapCameraFactory
{
    Windows::UI::Xaml::Controls::Maps::MapCamera CreateInstanceWithLocation(Windows::Devices::Geolocation::Geopoint const& location) const;
    Windows::UI::Xaml::Controls::Maps::MapCamera CreateInstanceWithLocationAndHeading(Windows::Devices::Geolocation::Geopoint const& location, double headingInDegrees) const;
    Windows::UI::Xaml::Controls::Maps::MapCamera CreateInstanceWithLocationHeadingAndPitch(Windows::Devices::Geolocation::Geopoint const& location, double headingInDegrees, double pitchInDegrees) const;
    Windows::UI::Xaml::Controls::Maps::MapCamera CreateInstanceWithLocationHeadingPitchRollAndFieldOfView(Windows::Devices::Geolocation::Geopoint const& location, double headingInDegrees, double pitchInDegrees, double rollInDegrees, double fieldOfViewInDegrees) const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapCameraFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapCameraFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Maps_IMapContextRequestedEventArgs
{
    Windows::Foundation::Point Position() const;
    Windows::Devices::Geolocation::Geopoint Location() const;
    Windows::Foundation::Collections::IVectorView<Windows::UI::Xaml::Controls::Maps::MapElement> MapElements() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapContextRequestedEventArgs> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapContextRequestedEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Maps_IMapControl
{
    Windows::Devices::Geolocation::Geopoint Center() const;
    void Center(Windows::Devices::Geolocation::Geopoint const& value) const;
    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::DependencyObject> Children() const;
    Windows::UI::Xaml::Controls::Maps::MapColorScheme ColorScheme() const;
    void ColorScheme(Windows::UI::Xaml::Controls::Maps::MapColorScheme const& value) const;
    double DesiredPitch() const;
    void DesiredPitch(double value) const;
    double Heading() const;
    void Heading(double value) const;
    bool LandmarksVisible() const;
    void LandmarksVisible(bool value) const;
    Windows::UI::Xaml::Controls::Maps::MapLoadingStatus LoadingStatus() const;
    hstring MapServiceToken() const;
    void MapServiceToken(param::hstring const& value) const;
    double MaxZoomLevel() const;
    double MinZoomLevel() const;
    bool PedestrianFeaturesVisible() const;
    void PedestrianFeaturesVisible(bool value) const;
    double Pitch() const;
    Windows::UI::Xaml::Controls::Maps::MapStyle Style() const;
    void Style(Windows::UI::Xaml::Controls::Maps::MapStyle const& value) const;
    bool TrafficFlowVisible() const;
    void TrafficFlowVisible(bool value) const;
    Windows::Foundation::Point TransformOrigin() const;
    void TransformOrigin(Windows::Foundation::Point const& value) const;
    Windows::UI::Xaml::Controls::Maps::MapWatermarkMode WatermarkMode() const;
    void WatermarkMode(Windows::UI::Xaml::Controls::Maps::MapWatermarkMode const& value) const;
    double ZoomLevel() const;
    void ZoomLevel(double value) const;
    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Controls::Maps::MapElement> MapElements() const;
    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Controls::Maps::MapRouteView> Routes() const;
    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Controls::Maps::MapTileSource> TileSources() const;
    event_token CenterChanged(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::Foundation::IInspectable> const& value) const;
    using CenterChanged_revoker = event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControl>;
    CenterChanged_revoker CenterChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::Foundation::IInspectable> const& value) const;
    void CenterChanged(event_token const& token) const;
    event_token HeadingChanged(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::Foundation::IInspectable> const& value) const;
    using HeadingChanged_revoker = event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControl>;
    HeadingChanged_revoker HeadingChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::Foundation::IInspectable> const& value) const;
    void HeadingChanged(event_token const& token) const;
    event_token LoadingStatusChanged(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::Foundation::IInspectable> const& value) const;
    using LoadingStatusChanged_revoker = event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControl>;
    LoadingStatusChanged_revoker LoadingStatusChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::Foundation::IInspectable> const& value) const;
    void LoadingStatusChanged(event_token const& token) const;
    event_token MapDoubleTapped(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapInputEventArgs> const& value) const;
    using MapDoubleTapped_revoker = event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControl>;
    MapDoubleTapped_revoker MapDoubleTapped(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapInputEventArgs> const& value) const;
    void MapDoubleTapped(event_token const& token) const;
    event_token MapHolding(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapInputEventArgs> const& value) const;
    using MapHolding_revoker = event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControl>;
    MapHolding_revoker MapHolding(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapInputEventArgs> const& value) const;
    void MapHolding(event_token const& token) const;
    event_token MapTapped(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapInputEventArgs> const& value) const;
    using MapTapped_revoker = event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControl>;
    MapTapped_revoker MapTapped(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapInputEventArgs> const& value) const;
    void MapTapped(event_token const& token) const;
    event_token PitchChanged(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::Foundation::IInspectable> const& value) const;
    using PitchChanged_revoker = event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControl>;
    PitchChanged_revoker PitchChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::Foundation::IInspectable> const& value) const;
    void PitchChanged(event_token const& token) const;
    event_token TransformOriginChanged(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::Foundation::IInspectable> const& value) const;
    using TransformOriginChanged_revoker = event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControl>;
    TransformOriginChanged_revoker TransformOriginChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::Foundation::IInspectable> const& value) const;
    void TransformOriginChanged(event_token const& token) const;
    event_token ZoomLevelChanged(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::Foundation::IInspectable> const& value) const;
    using ZoomLevelChanged_revoker = event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControl>;
    ZoomLevelChanged_revoker ZoomLevelChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::Foundation::IInspectable> const& value) const;
    void ZoomLevelChanged(event_token const& token) const;
    Windows::Foundation::Collections::IVectorView<Windows::UI::Xaml::Controls::Maps::MapElement> FindMapElementsAtOffset(Windows::Foundation::Point const& offset) const;
    void GetLocationFromOffset(Windows::Foundation::Point const& offset, Windows::Devices::Geolocation::Geopoint& location) const;
    void GetOffsetFromLocation(Windows::Devices::Geolocation::Geopoint const& location, Windows::Foundation::Point& offset) const;
    void IsLocationInView(Windows::Devices::Geolocation::Geopoint const& location, bool& isInView) const;
    Windows::Foundation::IAsyncOperation<bool> TrySetViewBoundsAsync(Windows::Devices::Geolocation::GeoboundingBox const& bounds, optional<Windows::UI::Xaml::Thickness> const& margin, Windows::UI::Xaml::Controls::Maps::MapAnimationKind const& animation) const;
    Windows::Foundation::IAsyncOperation<bool> TrySetViewAsync(Windows::Devices::Geolocation::Geopoint const& center) const;
    Windows::Foundation::IAsyncOperation<bool> TrySetViewAsync(Windows::Devices::Geolocation::Geopoint const& center, optional<double> const& zoomLevel) const;
    Windows::Foundation::IAsyncOperation<bool> TrySetViewAsync(Windows::Devices::Geolocation::Geopoint const& center, optional<double> const& zoomLevel, optional<double> const& heading, optional<double> const& desiredPitch) const;
    Windows::Foundation::IAsyncOperation<bool> TrySetViewAsync(Windows::Devices::Geolocation::Geopoint const& center, optional<double> const& zoomLevel, optional<double> const& heading, optional<double> const& desiredPitch, Windows::UI::Xaml::Controls::Maps::MapAnimationKind const& animation) const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapControl> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Maps_IMapControl2
{
    bool BusinessLandmarksVisible() const;
    void BusinessLandmarksVisible(bool value) const;
    bool TransitFeaturesVisible() const;
    void TransitFeaturesVisible(bool value) const;
    Windows::UI::Xaml::Controls::Maps::MapPanInteractionMode PanInteractionMode() const;
    void PanInteractionMode(Windows::UI::Xaml::Controls::Maps::MapPanInteractionMode const& value) const;
    Windows::UI::Xaml::Controls::Maps::MapInteractionMode RotateInteractionMode() const;
    void RotateInteractionMode(Windows::UI::Xaml::Controls::Maps::MapInteractionMode const& value) const;
    Windows::UI::Xaml::Controls::Maps::MapInteractionMode TiltInteractionMode() const;
    void TiltInteractionMode(Windows::UI::Xaml::Controls::Maps::MapInteractionMode const& value) const;
    Windows::UI::Xaml::Controls::Maps::MapInteractionMode ZoomInteractionMode() const;
    void ZoomInteractionMode(Windows::UI::Xaml::Controls::Maps::MapInteractionMode const& value) const;
    bool Is3DSupported() const;
    bool IsStreetsideSupported() const;
    Windows::UI::Xaml::Controls::Maps::MapScene Scene() const;
    void Scene(Windows::UI::Xaml::Controls::Maps::MapScene const& value) const;
    Windows::UI::Xaml::Controls::Maps::MapCamera ActualCamera() const;
    Windows::UI::Xaml::Controls::Maps::MapCamera TargetCamera() const;
    Windows::UI::Xaml::Controls::Maps::MapCustomExperience CustomExperience() const;
    void CustomExperience(Windows::UI::Xaml::Controls::Maps::MapCustomExperience const& value) const;
    event_token MapElementClick(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapElementClickEventArgs> const& value) const;
    using MapElementClick_revoker = event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControl2>;
    MapElementClick_revoker MapElementClick(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapElementClickEventArgs> const& value) const;
    void MapElementClick(event_token const& token) const;
    event_token MapElementPointerEntered(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapElementPointerEnteredEventArgs> const& value) const;
    using MapElementPointerEntered_revoker = event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControl2>;
    MapElementPointerEntered_revoker MapElementPointerEntered(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapElementPointerEnteredEventArgs> const& value) const;
    void MapElementPointerEntered(event_token const& token) const;
    event_token MapElementPointerExited(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapElementPointerExitedEventArgs> const& value) const;
    using MapElementPointerExited_revoker = event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControl2>;
    MapElementPointerExited_revoker MapElementPointerExited(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapElementPointerExitedEventArgs> const& value) const;
    void MapElementPointerExited(event_token const& token) const;
    event_token ActualCameraChanged(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapActualCameraChangedEventArgs> const& value) const;
    using ActualCameraChanged_revoker = event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControl2>;
    ActualCameraChanged_revoker ActualCameraChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapActualCameraChangedEventArgs> const& value) const;
    void ActualCameraChanged(event_token const& token) const;
    event_token ActualCameraChanging(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapActualCameraChangingEventArgs> const& value) const;
    using ActualCameraChanging_revoker = event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControl2>;
    ActualCameraChanging_revoker ActualCameraChanging(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapActualCameraChangingEventArgs> const& value) const;
    void ActualCameraChanging(event_token const& token) const;
    event_token TargetCameraChanged(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapTargetCameraChangedEventArgs> const& value) const;
    using TargetCameraChanged_revoker = event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControl2>;
    TargetCameraChanged_revoker TargetCameraChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapTargetCameraChangedEventArgs> const& value) const;
    void TargetCameraChanged(event_token const& token) const;
    event_token CustomExperienceChanged(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapCustomExperienceChangedEventArgs> const& value) const;
    using CustomExperienceChanged_revoker = event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControl2>;
    CustomExperienceChanged_revoker CustomExperienceChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapCustomExperienceChangedEventArgs> const& value) const;
    void CustomExperienceChanged(event_token const& token) const;
    void StartContinuousRotate(double rateInDegreesPerSecond) const;
    void StopContinuousRotate() const;
    void StartContinuousTilt(double rateInDegreesPerSecond) const;
    void StopContinuousTilt() const;
    void StartContinuousZoom(double rateOfChangePerSecond) const;
    void StopContinuousZoom() const;
    Windows::Foundation::IAsyncOperation<bool> TryRotateAsync(double degrees) const;
    Windows::Foundation::IAsyncOperation<bool> TryRotateToAsync(double angleInDegrees) const;
    Windows::Foundation::IAsyncOperation<bool> TryTiltAsync(double degrees) const;
    Windows::Foundation::IAsyncOperation<bool> TryTiltToAsync(double angleInDegrees) const;
    Windows::Foundation::IAsyncOperation<bool> TryZoomInAsync() const;
    Windows::Foundation::IAsyncOperation<bool> TryZoomOutAsync() const;
    Windows::Foundation::IAsyncOperation<bool> TryZoomToAsync(double zoomLevel) const;
    Windows::Foundation::IAsyncOperation<bool> TrySetSceneAsync(Windows::UI::Xaml::Controls::Maps::MapScene const& scene) const;
    Windows::Foundation::IAsyncOperation<bool> TrySetSceneAsync(Windows::UI::Xaml::Controls::Maps::MapScene const& scene, Windows::UI::Xaml::Controls::Maps::MapAnimationKind const& animationKind) const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapControl2> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Maps_IMapControl3
{
    event_token MapRightTapped(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapRightTappedEventArgs> const& value) const;
    using MapRightTapped_revoker = event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControl3>;
    MapRightTapped_revoker MapRightTapped(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapRightTappedEventArgs> const& value) const;
    void MapRightTapped(event_token const& token) const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapControl3> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapControl3<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Maps_IMapControl4
{
    bool BusinessLandmarksEnabled() const;
    void BusinessLandmarksEnabled(bool value) const;
    bool TransitFeaturesEnabled() const;
    void TransitFeaturesEnabled(bool value) const;
    Windows::Devices::Geolocation::Geopath GetVisibleRegion(Windows::UI::Xaml::Controls::Maps::MapVisibleRegionKind const& region) const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapControl4> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapControl4<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Maps_IMapControl5
{
    Windows::UI::Xaml::Controls::Maps::MapProjection MapProjection() const;
    void MapProjection(Windows::UI::Xaml::Controls::Maps::MapProjection const& value) const;
    Windows::UI::Xaml::Controls::Maps::MapStyleSheet StyleSheet() const;
    void StyleSheet(Windows::UI::Xaml::Controls::Maps::MapStyleSheet const& value) const;
    Windows::UI::Xaml::Thickness ViewPadding() const;
    void ViewPadding(Windows::UI::Xaml::Thickness const& value) const;
    event_token MapContextRequested(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapContextRequestedEventArgs> const& value) const;
    using MapContextRequested_revoker = event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControl5>;
    MapContextRequested_revoker MapContextRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapContextRequestedEventArgs> const& value) const;
    void MapContextRequested(event_token const& token) const;
    Windows::Foundation::Collections::IVectorView<Windows::UI::Xaml::Controls::Maps::MapElement> FindMapElementsAtOffset(Windows::Foundation::Point const& offset, double radius) const;
    void GetLocationFromOffset(Windows::Foundation::Point const& offset, Windows::Devices::Geolocation::AltitudeReferenceSystem const& desiredReferenceSystem, Windows::Devices::Geolocation::Geopoint& location) const;
    void StartContinuousPan(double horizontalPixelsPerSecond, double verticalPixelsPerSecond) const;
    void StopContinuousPan() const;
    Windows::Foundation::IAsyncOperation<bool> TryPanAsync(double horizontalPixels, double verticalPixels) const;
    Windows::Foundation::IAsyncOperation<bool> TryPanToAsync(Windows::Devices::Geolocation::Geopoint const& location) const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapControl5> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapControl5<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Maps_IMapControl6
{
    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Controls::Maps::MapLayer> Layers() const;
    void Layers(param::vector<Windows::UI::Xaml::Controls::Maps::MapLayer> const& value) const;
    bool TryGetLocationFromOffset(Windows::Foundation::Point const& offset, Windows::Devices::Geolocation::Geopoint& location) const;
    bool TryGetLocationFromOffset(Windows::Foundation::Point const& offset, Windows::Devices::Geolocation::AltitudeReferenceSystem const& desiredReferenceSystem, Windows::Devices::Geolocation::Geopoint& location) const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapControl6> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapControl6<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics
{
    Windows::UI::Xaml::DependencyProperty CenterProperty() const;
    Windows::UI::Xaml::DependencyProperty ChildrenProperty() const;
    Windows::UI::Xaml::DependencyProperty ColorSchemeProperty() const;
    Windows::UI::Xaml::DependencyProperty DesiredPitchProperty() const;
    Windows::UI::Xaml::DependencyProperty HeadingProperty() const;
    Windows::UI::Xaml::DependencyProperty LandmarksVisibleProperty() const;
    Windows::UI::Xaml::DependencyProperty LoadingStatusProperty() const;
    Windows::UI::Xaml::DependencyProperty MapServiceTokenProperty() const;
    Windows::UI::Xaml::DependencyProperty PedestrianFeaturesVisibleProperty() const;
    Windows::UI::Xaml::DependencyProperty PitchProperty() const;
    Windows::UI::Xaml::DependencyProperty StyleProperty() const;
    Windows::UI::Xaml::DependencyProperty TrafficFlowVisibleProperty() const;
    Windows::UI::Xaml::DependencyProperty TransformOriginProperty() const;
    Windows::UI::Xaml::DependencyProperty WatermarkModeProperty() const;
    Windows::UI::Xaml::DependencyProperty ZoomLevelProperty() const;
    Windows::UI::Xaml::DependencyProperty MapElementsProperty() const;
    Windows::UI::Xaml::DependencyProperty RoutesProperty() const;
    Windows::UI::Xaml::DependencyProperty TileSourcesProperty() const;
    Windows::UI::Xaml::DependencyProperty LocationProperty() const;
    Windows::Devices::Geolocation::Geopoint GetLocation(Windows::UI::Xaml::DependencyObject const& element) const;
    void SetLocation(Windows::UI::Xaml::DependencyObject const& element, Windows::Devices::Geolocation::Geopoint const& value) const;
    Windows::UI::Xaml::DependencyProperty NormalizedAnchorPointProperty() const;
    Windows::Foundation::Point GetNormalizedAnchorPoint(Windows::UI::Xaml::DependencyObject const& element) const;
    void SetNormalizedAnchorPoint(Windows::UI::Xaml::DependencyObject const& element, Windows::Foundation::Point const& value) const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapControlStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics2
{
    Windows::UI::Xaml::DependencyProperty BusinessLandmarksVisibleProperty() const;
    Windows::UI::Xaml::DependencyProperty TransitFeaturesVisibleProperty() const;
    Windows::UI::Xaml::DependencyProperty PanInteractionModeProperty() const;
    Windows::UI::Xaml::DependencyProperty RotateInteractionModeProperty() const;
    Windows::UI::Xaml::DependencyProperty TiltInteractionModeProperty() const;
    Windows::UI::Xaml::DependencyProperty ZoomInteractionModeProperty() const;
    Windows::UI::Xaml::DependencyProperty Is3DSupportedProperty() const;
    Windows::UI::Xaml::DependencyProperty IsStreetsideSupportedProperty() const;
    Windows::UI::Xaml::DependencyProperty SceneProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapControlStatics2> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics2<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics4
{
    Windows::UI::Xaml::DependencyProperty BusinessLandmarksEnabledProperty() const;
    Windows::UI::Xaml::DependencyProperty TransitFeaturesEnabledProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapControlStatics4> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics4<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics5
{
    Windows::UI::Xaml::DependencyProperty MapProjectionProperty() const;
    Windows::UI::Xaml::DependencyProperty StyleSheetProperty() const;
    Windows::UI::Xaml::DependencyProperty ViewPaddingProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapControlStatics5> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics5<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics6
{
    Windows::UI::Xaml::DependencyProperty LayersProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapControlStatics6> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics6<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Maps_IMapCustomExperience
{
};
template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapCustomExperience> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapCustomExperience<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Maps_IMapCustomExperienceChangedEventArgs
{
};
template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapCustomExperienceChangedEventArgs> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapCustomExperienceChangedEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Maps_IMapCustomExperienceFactory
{
    Windows::UI::Xaml::Controls::Maps::MapCustomExperience CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapCustomExperienceFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapCustomExperienceFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Maps_IMapElement
{
    int32_t ZIndex() const;
    void ZIndex(int32_t value) const;
    bool Visible() const;
    void Visible(bool value) const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapElement> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapElement<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Maps_IMapElement2
{
    int32_t MapTabIndex() const;
    void MapTabIndex(int32_t value) const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapElement2> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapElement2<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Maps_IMapElement3
{
    hstring MapStyleSheetEntry() const;
    void MapStyleSheetEntry(param::hstring const& value) const;
    hstring MapStyleSheetEntryState() const;
    void MapStyleSheetEntryState(param::hstring const& value) const;
    Windows::Foundation::IInspectable Tag() const;
    void Tag(Windows::Foundation::IInspectable const& value) const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapElement3> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapElement3<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Maps_IMapElement3D
{
    Windows::Devices::Geolocation::Geopoint Location() const;
    void Location(Windows::Devices::Geolocation::Geopoint const& value) const;
    Windows::UI::Xaml::Controls::Maps::MapModel3D Model() const;
    void Model(Windows::UI::Xaml::Controls::Maps::MapModel3D const& value) const;
    double Heading() const;
    void Heading(double value) const;
    double Pitch() const;
    void Pitch(double value) const;
    double Roll() const;
    void Roll(double value) const;
    Windows::Foundation::Numerics::float3 Scale() const;
    void Scale(Windows::Foundation::Numerics::float3 const& value) const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapElement3D> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapElement3D<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Maps_IMapElement3DStatics
{
    Windows::UI::Xaml::DependencyProperty LocationProperty() const;
    Windows::UI::Xaml::DependencyProperty HeadingProperty() const;
    Windows::UI::Xaml::DependencyProperty PitchProperty() const;
    Windows::UI::Xaml::DependencyProperty RollProperty() const;
    Windows::UI::Xaml::DependencyProperty ScaleProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapElement3DStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapElement3DStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Maps_IMapElementClickEventArgs
{
    Windows::Foundation::Point Position() const;
    Windows::Devices::Geolocation::Geopoint Location() const;
    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Controls::Maps::MapElement> MapElements() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapElementClickEventArgs> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapElementClickEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Maps_IMapElementFactory
{
    Windows::UI::Xaml::Controls::Maps::MapElement CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapElementFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapElementFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Maps_IMapElementPointerEnteredEventArgs
{
    Windows::Foundation::Point Position() const;
    Windows::Devices::Geolocation::Geopoint Location() const;
    Windows::UI::Xaml::Controls::Maps::MapElement MapElement() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapElementPointerEnteredEventArgs> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapElementPointerEnteredEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Maps_IMapElementPointerExitedEventArgs
{
    Windows::Foundation::Point Position() const;
    Windows::Devices::Geolocation::Geopoint Location() const;
    Windows::UI::Xaml::Controls::Maps::MapElement MapElement() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapElementPointerExitedEventArgs> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapElementPointerExitedEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Maps_IMapElementStatics
{
    Windows::UI::Xaml::DependencyProperty ZIndexProperty() const;
    Windows::UI::Xaml::DependencyProperty VisibleProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapElementStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapElementStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Maps_IMapElementStatics2
{
    Windows::UI::Xaml::DependencyProperty MapTabIndexProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapElementStatics2> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapElementStatics2<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Maps_IMapElementStatics3
{
    Windows::UI::Xaml::DependencyProperty MapStyleSheetEntryProperty() const;
    Windows::UI::Xaml::DependencyProperty MapStyleSheetEntryStateProperty() const;
    Windows::UI::Xaml::DependencyProperty TagProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapElementStatics3> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapElementStatics3<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Maps_IMapElementsLayer
{
    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Controls::Maps::MapElement> MapElements() const;
    void MapElements(param::vector<Windows::UI::Xaml::Controls::Maps::MapElement> const& value) const;
    event_token MapElementClick(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapElementsLayer, Windows::UI::Xaml::Controls::Maps::MapElementsLayerClickEventArgs> const& value) const;
    using MapElementClick_revoker = event_revoker<Windows::UI::Xaml::Controls::Maps::IMapElementsLayer>;
    MapElementClick_revoker MapElementClick(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapElementsLayer, Windows::UI::Xaml::Controls::Maps::MapElementsLayerClickEventArgs> const& value) const;
    void MapElementClick(event_token const& token) const;
    event_token MapElementPointerEntered(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapElementsLayer, Windows::UI::Xaml::Controls::Maps::MapElementsLayerPointerEnteredEventArgs> const& value) const;
    using MapElementPointerEntered_revoker = event_revoker<Windows::UI::Xaml::Controls::Maps::IMapElementsLayer>;
    MapElementPointerEntered_revoker MapElementPointerEntered(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapElementsLayer, Windows::UI::Xaml::Controls::Maps::MapElementsLayerPointerEnteredEventArgs> const& value) const;
    void MapElementPointerEntered(event_token const& token) const;
    event_token MapElementPointerExited(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapElementsLayer, Windows::UI::Xaml::Controls::Maps::MapElementsLayerPointerExitedEventArgs> const& value) const;
    using MapElementPointerExited_revoker = event_revoker<Windows::UI::Xaml::Controls::Maps::IMapElementsLayer>;
    MapElementPointerExited_revoker MapElementPointerExited(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapElementsLayer, Windows::UI::Xaml::Controls::Maps::MapElementsLayerPointerExitedEventArgs> const& value) const;
    void MapElementPointerExited(event_token const& token) const;
    event_token MapContextRequested(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapElementsLayer, Windows::UI::Xaml::Controls::Maps::MapElementsLayerContextRequestedEventArgs> const& value) const;
    using MapContextRequested_revoker = event_revoker<Windows::UI::Xaml::Controls::Maps::IMapElementsLayer>;
    MapContextRequested_revoker MapContextRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapElementsLayer, Windows::UI::Xaml::Controls::Maps::MapElementsLayerContextRequestedEventArgs> const& value) const;
    void MapContextRequested(event_token const& token) const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapElementsLayer> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapElementsLayer<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Maps_IMapElementsLayerClickEventArgs
{
    Windows::Foundation::Point Position() const;
    Windows::Devices::Geolocation::Geopoint Location() const;
    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Controls::Maps::MapElement> MapElements() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapElementsLayerClickEventArgs> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapElementsLayerClickEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Maps_IMapElementsLayerContextRequestedEventArgs
{
    Windows::Foundation::Point Position() const;
    Windows::Devices::Geolocation::Geopoint Location() const;
    Windows::Foundation::Collections::IVectorView<Windows::UI::Xaml::Controls::Maps::MapElement> MapElements() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapElementsLayerContextRequestedEventArgs> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapElementsLayerContextRequestedEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Maps_IMapElementsLayerPointerEnteredEventArgs
{
    Windows::Foundation::Point Position() const;
    Windows::Devices::Geolocation::Geopoint Location() const;
    Windows::UI::Xaml::Controls::Maps::MapElement MapElement() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapElementsLayerPointerEnteredEventArgs> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapElementsLayerPointerEnteredEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Maps_IMapElementsLayerPointerExitedEventArgs
{
    Windows::Foundation::Point Position() const;
    Windows::Devices::Geolocation::Geopoint Location() const;
    Windows::UI::Xaml::Controls::Maps::MapElement MapElement() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapElementsLayerPointerExitedEventArgs> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapElementsLayerPointerExitedEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Maps_IMapElementsLayerStatics
{
    Windows::UI::Xaml::DependencyProperty MapElementsProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapElementsLayerStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapElementsLayerStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Maps_IMapIcon
{
    Windows::Devices::Geolocation::Geopoint Location() const;
    void Location(Windows::Devices::Geolocation::Geopoint const& value) const;
    hstring Title() const;
    void Title(param::hstring const& value) const;
    Windows::Foundation::Point NormalizedAnchorPoint() const;
    void NormalizedAnchorPoint(Windows::Foundation::Point const& value) const;
    Windows::Storage::Streams::IRandomAccessStreamReference Image() const;
    void Image(Windows::Storage::Streams::IRandomAccessStreamReference const& value) const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapIcon> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapIcon<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Maps_IMapIcon2
{
    Windows::UI::Xaml::Controls::Maps::MapElementCollisionBehavior CollisionBehaviorDesired() const;
    void CollisionBehaviorDesired(Windows::UI::Xaml::Controls::Maps::MapElementCollisionBehavior const& value) const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapIcon2> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapIcon2<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Maps_IMapIconStatics
{
    Windows::UI::Xaml::DependencyProperty LocationProperty() const;
    Windows::UI::Xaml::DependencyProperty TitleProperty() const;
    Windows::UI::Xaml::DependencyProperty NormalizedAnchorPointProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapIconStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapIconStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Maps_IMapIconStatics2
{
    Windows::UI::Xaml::DependencyProperty CollisionBehaviorDesiredProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapIconStatics2> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapIconStatics2<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Maps_IMapInputEventArgs
{
    Windows::Foundation::Point Position() const;
    Windows::Devices::Geolocation::Geopoint Location() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapInputEventArgs> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapInputEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Maps_IMapItemsControl
{
    Windows::Foundation::IInspectable ItemsSource() const;
    void ItemsSource(Windows::Foundation::IInspectable const& value) const;
    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::DependencyObject> Items() const;
    Windows::UI::Xaml::DataTemplate ItemTemplate() const;
    void ItemTemplate(Windows::UI::Xaml::DataTemplate const& value) const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapItemsControl> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapItemsControl<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Maps_IMapItemsControlStatics
{
    Windows::UI::Xaml::DependencyProperty ItemsSourceProperty() const;
    Windows::UI::Xaml::DependencyProperty ItemsProperty() const;
    Windows::UI::Xaml::DependencyProperty ItemTemplateProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapItemsControlStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapItemsControlStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Maps_IMapLayer
{
    int32_t MapTabIndex() const;
    void MapTabIndex(int32_t value) const;
    bool Visible() const;
    void Visible(bool value) const;
    int32_t ZIndex() const;
    void ZIndex(int32_t value) const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapLayer> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapLayer<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Maps_IMapLayerFactory
{
    Windows::UI::Xaml::Controls::Maps::MapLayer CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapLayerFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapLayerFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Maps_IMapLayerStatics
{
    Windows::UI::Xaml::DependencyProperty MapTabIndexProperty() const;
    Windows::UI::Xaml::DependencyProperty VisibleProperty() const;
    Windows::UI::Xaml::DependencyProperty ZIndexProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapLayerStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapLayerStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Maps_IMapModel3D
{
};
template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapModel3D> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapModel3D<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Maps_IMapModel3DFactory
{
    Windows::UI::Xaml::Controls::Maps::MapModel3D CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapModel3DFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapModel3DFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Maps_IMapModel3DStatics
{
    Windows::Foundation::IAsyncOperation<Windows::UI::Xaml::Controls::Maps::MapModel3D> CreateFrom3MFAsync(Windows::Storage::Streams::IRandomAccessStreamReference const& source) const;
    Windows::Foundation::IAsyncOperation<Windows::UI::Xaml::Controls::Maps::MapModel3D> CreateFrom3MFAsync(Windows::Storage::Streams::IRandomAccessStreamReference const& source, Windows::UI::Xaml::Controls::Maps::MapModel3DShadingOption const& shadingOption) const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapModel3DStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapModel3DStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Maps_IMapPolygon
{
    Windows::Devices::Geolocation::Geopath Path() const;
    void Path(Windows::Devices::Geolocation::Geopath const& value) const;
    Windows::UI::Color StrokeColor() const;
    void StrokeColor(Windows::UI::Color const& value) const;
    double StrokeThickness() const;
    void StrokeThickness(double value) const;
    bool StrokeDashed() const;
    void StrokeDashed(bool value) const;
    Windows::UI::Color FillColor() const;
    void FillColor(Windows::UI::Color const& value) const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapPolygon> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapPolygon<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Maps_IMapPolygon2
{
    Windows::Foundation::Collections::IVector<Windows::Devices::Geolocation::Geopath> Paths() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapPolygon2> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapPolygon2<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Maps_IMapPolygonStatics
{
    Windows::UI::Xaml::DependencyProperty PathProperty() const;
    Windows::UI::Xaml::DependencyProperty StrokeThicknessProperty() const;
    Windows::UI::Xaml::DependencyProperty StrokeDashedProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapPolygonStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapPolygonStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Maps_IMapPolyline
{
    Windows::Devices::Geolocation::Geopath Path() const;
    void Path(Windows::Devices::Geolocation::Geopath const& value) const;
    Windows::UI::Color StrokeColor() const;
    void StrokeColor(Windows::UI::Color const& value) const;
    double StrokeThickness() const;
    void StrokeThickness(double value) const;
    bool StrokeDashed() const;
    void StrokeDashed(bool value) const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapPolyline> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapPolyline<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Maps_IMapPolylineStatics
{
    Windows::UI::Xaml::DependencyProperty PathProperty() const;
    Windows::UI::Xaml::DependencyProperty StrokeDashedProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapPolylineStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapPolylineStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Maps_IMapRightTappedEventArgs
{
    Windows::Foundation::Point Position() const;
    Windows::Devices::Geolocation::Geopoint Location() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapRightTappedEventArgs> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapRightTappedEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Maps_IMapRouteView
{
    Windows::UI::Color RouteColor() const;
    void RouteColor(Windows::UI::Color const& value) const;
    Windows::UI::Color OutlineColor() const;
    void OutlineColor(Windows::UI::Color const& value) const;
    Windows::Services::Maps::MapRoute Route() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapRouteView> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapRouteView<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Maps_IMapRouteViewFactory
{
    Windows::UI::Xaml::Controls::Maps::MapRouteView CreateInstanceWithMapRoute(Windows::Services::Maps::MapRoute const& route, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapRouteViewFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapRouteViewFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Maps_IMapScene
{
    Windows::UI::Xaml::Controls::Maps::MapCamera TargetCamera() const;
    event_token TargetCameraChanged(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapScene, Windows::UI::Xaml::Controls::Maps::MapTargetCameraChangedEventArgs> const& value) const;
    using TargetCameraChanged_revoker = event_revoker<Windows::UI::Xaml::Controls::Maps::IMapScene>;
    TargetCameraChanged_revoker TargetCameraChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapScene, Windows::UI::Xaml::Controls::Maps::MapTargetCameraChangedEventArgs> const& value) const;
    void TargetCameraChanged(event_token const& token) const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapScene> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapScene<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Maps_IMapSceneStatics
{
    Windows::UI::Xaml::Controls::Maps::MapScene CreateFromBoundingBox(Windows::Devices::Geolocation::GeoboundingBox const& bounds) const;
    Windows::UI::Xaml::Controls::Maps::MapScene CreateFromBoundingBox(Windows::Devices::Geolocation::GeoboundingBox const& bounds, double headingInDegrees, double pitchInDegrees) const;
    Windows::UI::Xaml::Controls::Maps::MapScene CreateFromCamera(Windows::UI::Xaml::Controls::Maps::MapCamera const& camera) const;
    Windows::UI::Xaml::Controls::Maps::MapScene CreateFromLocation(Windows::Devices::Geolocation::Geopoint const& location) const;
    Windows::UI::Xaml::Controls::Maps::MapScene CreateFromLocation(Windows::Devices::Geolocation::Geopoint const& location, double headingInDegrees, double pitchInDegrees) const;
    Windows::UI::Xaml::Controls::Maps::MapScene CreateFromLocationAndRadius(Windows::Devices::Geolocation::Geopoint const& location, double radiusInMeters) const;
    Windows::UI::Xaml::Controls::Maps::MapScene CreateFromLocationAndRadius(Windows::Devices::Geolocation::Geopoint const& location, double radiusInMeters, double headingInDegrees, double pitchInDegrees) const;
    Windows::UI::Xaml::Controls::Maps::MapScene CreateFromLocations(param::iterable<Windows::Devices::Geolocation::Geopoint> const& locations) const;
    Windows::UI::Xaml::Controls::Maps::MapScene CreateFromLocations(param::iterable<Windows::Devices::Geolocation::Geopoint> const& locations, double headingInDegrees, double pitchInDegrees) const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapSceneStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapSceneStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheet
{
};
template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapStyleSheet> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheet<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetEntriesStatics
{
    hstring Area() const;
    hstring Airport() const;
    hstring Cemetery() const;
    hstring Continent() const;
    hstring Education() const;
    hstring IndigenousPeoplesReserve() const;
    hstring Island() const;
    hstring Medical() const;
    hstring Military() const;
    hstring Nautical() const;
    hstring Neighborhood() const;
    hstring Runway() const;
    hstring Sand() const;
    hstring ShoppingCenter() const;
    hstring Stadium() const;
    hstring Vegetation() const;
    hstring Forest() const;
    hstring GolfCourse() const;
    hstring Park() const;
    hstring PlayingField() const;
    hstring Reserve() const;
    hstring Point() const;
    hstring NaturalPoint() const;
    hstring Peak() const;
    hstring VolcanicPeak() const;
    hstring WaterPoint() const;
    hstring PointOfInterest() const;
    hstring Business() const;
    hstring FoodPoint() const;
    hstring PopulatedPlace() const;
    hstring Capital() const;
    hstring AdminDistrictCapital() const;
    hstring CountryRegionCapital() const;
    hstring RoadShield() const;
    hstring RoadExit() const;
    hstring Transit() const;
    hstring Political() const;
    hstring CountryRegion() const;
    hstring AdminDistrict() const;
    hstring District() const;
    hstring Structure() const;
    hstring Building() const;
    hstring EducationBuilding() const;
    hstring MedicalBuilding() const;
    hstring TransitBuilding() const;
    hstring Transportation() const;
    hstring Road() const;
    hstring ControlledAccessHighway() const;
    hstring HighSpeedRamp() const;
    hstring Highway() const;
    hstring MajorRoad() const;
    hstring ArterialRoad() const;
    hstring Street() const;
    hstring Ramp() const;
    hstring UnpavedStreet() const;
    hstring TollRoad() const;
    hstring Railway() const;
    hstring Trail() const;
    hstring WaterRoute() const;
    hstring Water() const;
    hstring River() const;
    hstring RouteLine() const;
    hstring WalkingRoute() const;
    hstring DrivingRoute() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetEntriesStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetEntryStatesStatics
{
    hstring Disabled() const;
    hstring Hover() const;
    hstring Selected() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntryStatesStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetEntryStatesStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetStatics
{
    Windows::UI::Xaml::Controls::Maps::MapStyleSheet Aerial() const;
    Windows::UI::Xaml::Controls::Maps::MapStyleSheet AerialWithOverlay() const;
    Windows::UI::Xaml::Controls::Maps::MapStyleSheet RoadLight() const;
    Windows::UI::Xaml::Controls::Maps::MapStyleSheet RoadDark() const;
    Windows::UI::Xaml::Controls::Maps::MapStyleSheet RoadHighContrastLight() const;
    Windows::UI::Xaml::Controls::Maps::MapStyleSheet RoadHighContrastDark() const;
    Windows::UI::Xaml::Controls::Maps::MapStyleSheet Combine(param::iterable<Windows::UI::Xaml::Controls::Maps::MapStyleSheet> const& styleSheets) const;
    Windows::UI::Xaml::Controls::Maps::MapStyleSheet ParseFromJson(param::hstring const& styleAsJson) const;
    bool TryParseFromJson(param::hstring const& styleAsJson, Windows::UI::Xaml::Controls::Maps::MapStyleSheet& styleSheet) const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapStyleSheetStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Maps_IMapTargetCameraChangedEventArgs
{
    Windows::UI::Xaml::Controls::Maps::MapCamera Camera() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapTargetCameraChangedEventArgs> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapTargetCameraChangedEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Maps_IMapTargetCameraChangedEventArgs2
{
    Windows::UI::Xaml::Controls::Maps::MapCameraChangeReason ChangeReason() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapTargetCameraChangedEventArgs2> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapTargetCameraChangedEventArgs2<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Maps_IMapTileBitmapRequest
{
    Windows::Storage::Streams::IRandomAccessStreamReference PixelData() const;
    void PixelData(Windows::Storage::Streams::IRandomAccessStreamReference const& value) const;
    Windows::UI::Xaml::Controls::Maps::MapTileBitmapRequestDeferral GetDeferral() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequest> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapTileBitmapRequest<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Maps_IMapTileBitmapRequestDeferral
{
    void Complete() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequestDeferral> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapTileBitmapRequestDeferral<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Maps_IMapTileBitmapRequestedEventArgs
{
    int32_t X() const;
    int32_t Y() const;
    int32_t ZoomLevel() const;
    Windows::UI::Xaml::Controls::Maps::MapTileBitmapRequest Request() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequestedEventArgs> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapTileBitmapRequestedEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Maps_IMapTileDataSource
{
};
template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapTileDataSource> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapTileDataSource<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Maps_IMapTileDataSourceFactory
{
    Windows::UI::Xaml::Controls::Maps::MapTileDataSource CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapTileDataSourceFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapTileDataSourceFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Maps_IMapTileSource
{
    Windows::UI::Xaml::Controls::Maps::MapTileDataSource DataSource() const;
    void DataSource(Windows::UI::Xaml::Controls::Maps::MapTileDataSource const& value) const;
    Windows::UI::Xaml::Controls::Maps::MapTileLayer Layer() const;
    void Layer(Windows::UI::Xaml::Controls::Maps::MapTileLayer const& value) const;
    Windows::UI::Xaml::Controls::Maps::MapZoomLevelRange ZoomLevelRange() const;
    void ZoomLevelRange(Windows::UI::Xaml::Controls::Maps::MapZoomLevelRange const& value) const;
    Windows::Devices::Geolocation::GeoboundingBox Bounds() const;
    void Bounds(Windows::Devices::Geolocation::GeoboundingBox const& value) const;
    bool AllowOverstretch() const;
    void AllowOverstretch(bool value) const;
    bool IsFadingEnabled() const;
    void IsFadingEnabled(bool value) const;
    bool IsTransparencyEnabled() const;
    void IsTransparencyEnabled(bool value) const;
    bool IsRetryEnabled() const;
    void IsRetryEnabled(bool value) const;
    int32_t ZIndex() const;
    void ZIndex(int32_t value) const;
    int32_t TilePixelSize() const;
    void TilePixelSize(int32_t value) const;
    bool Visible() const;
    void Visible(bool value) const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapTileSource> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapTileSource<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Maps_IMapTileSourceFactory
{
    Windows::UI::Xaml::Controls::Maps::MapTileSource CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
    Windows::UI::Xaml::Controls::Maps::MapTileSource CreateInstanceWithDataSource(Windows::UI::Xaml::Controls::Maps::MapTileDataSource const& dataSource, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
    Windows::UI::Xaml::Controls::Maps::MapTileSource CreateInstanceWithDataSourceAndZoomRange(Windows::UI::Xaml::Controls::Maps::MapTileDataSource const& dataSource, Windows::UI::Xaml::Controls::Maps::MapZoomLevelRange const& zoomLevelRange, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
    Windows::UI::Xaml::Controls::Maps::MapTileSource CreateInstanceWithDataSourceZoomRangeAndBounds(Windows::UI::Xaml::Controls::Maps::MapTileDataSource const& dataSource, Windows::UI::Xaml::Controls::Maps::MapZoomLevelRange const& zoomLevelRange, Windows::Devices::Geolocation::GeoboundingBox const& bounds, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
    Windows::UI::Xaml::Controls::Maps::MapTileSource CreateInstanceWithDataSourceZoomRangeBoundsAndTileSize(Windows::UI::Xaml::Controls::Maps::MapTileDataSource const& dataSource, Windows::UI::Xaml::Controls::Maps::MapZoomLevelRange const& zoomLevelRange, Windows::Devices::Geolocation::GeoboundingBox const& bounds, int32_t tileSizeInPixels, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapTileSourceFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapTileSourceFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Maps_IMapTileSourceStatics
{
    Windows::UI::Xaml::DependencyProperty DataSourceProperty() const;
    Windows::UI::Xaml::DependencyProperty LayerProperty() const;
    Windows::UI::Xaml::DependencyProperty ZoomLevelRangeProperty() const;
    Windows::UI::Xaml::DependencyProperty BoundsProperty() const;
    Windows::UI::Xaml::DependencyProperty AllowOverstretchProperty() const;
    Windows::UI::Xaml::DependencyProperty IsFadingEnabledProperty() const;
    Windows::UI::Xaml::DependencyProperty IsTransparencyEnabledProperty() const;
    Windows::UI::Xaml::DependencyProperty IsRetryEnabledProperty() const;
    Windows::UI::Xaml::DependencyProperty ZIndexProperty() const;
    Windows::UI::Xaml::DependencyProperty TilePixelSizeProperty() const;
    Windows::UI::Xaml::DependencyProperty VisibleProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapTileSourceStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapTileSourceStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Maps_IMapTileUriRequest
{
    Windows::Foundation::Uri Uri() const;
    void Uri(Windows::Foundation::Uri const& value) const;
    Windows::UI::Xaml::Controls::Maps::MapTileUriRequestDeferral GetDeferral() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapTileUriRequest> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapTileUriRequest<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Maps_IMapTileUriRequestDeferral
{
    void Complete() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapTileUriRequestDeferral> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapTileUriRequestDeferral<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Maps_IMapTileUriRequestedEventArgs
{
    int32_t X() const;
    int32_t Y() const;
    int32_t ZoomLevel() const;
    Windows::UI::Xaml::Controls::Maps::MapTileUriRequest Request() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapTileUriRequestedEventArgs> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapTileUriRequestedEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Maps_IStreetsideExperience
{
    bool AddressTextVisible() const;
    void AddressTextVisible(bool value) const;
    bool CursorVisible() const;
    void CursorVisible(bool value) const;
    bool OverviewMapVisible() const;
    void OverviewMapVisible(bool value) const;
    bool StreetLabelsVisible() const;
    void StreetLabelsVisible(bool value) const;
    bool ExitButtonVisible() const;
    void ExitButtonVisible(bool value) const;
    bool ZoomButtonsVisible() const;
    void ZoomButtonsVisible(bool value) const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Maps::IStreetsideExperience> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IStreetsideExperience<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Maps_IStreetsideExperienceFactory
{
    Windows::UI::Xaml::Controls::Maps::StreetsideExperience CreateInstanceWithPanorama(Windows::UI::Xaml::Controls::Maps::StreetsidePanorama const& panorama) const;
    Windows::UI::Xaml::Controls::Maps::StreetsideExperience CreateInstanceWithPanoramaHeadingPitchAndFieldOfView(Windows::UI::Xaml::Controls::Maps::StreetsidePanorama const& panorama, double headingInDegrees, double pitchInDegrees, double fieldOfViewInDegrees) const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Maps::IStreetsideExperienceFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IStreetsideExperienceFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Maps_IStreetsidePanorama
{
    Windows::Devices::Geolocation::Geopoint Location() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Maps::IStreetsidePanorama> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IStreetsidePanorama<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Maps_IStreetsidePanoramaStatics
{
    Windows::Foundation::IAsyncOperation<Windows::UI::Xaml::Controls::Maps::StreetsidePanorama> FindNearbyAsync(Windows::Devices::Geolocation::Geopoint const& location) const;
    Windows::Foundation::IAsyncOperation<Windows::UI::Xaml::Controls::Maps::StreetsidePanorama> FindNearbyAsync(Windows::Devices::Geolocation::Geopoint const& location, double radiusInMeters) const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Maps::IStreetsidePanoramaStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IStreetsidePanoramaStatics<D>; };

template <> struct abi<Windows::UI::Xaml::Controls::Maps::ICustomMapTileDataSource>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_BitmapRequested(::IUnknown* value, event_token* token) = 0;
    virtual HRESULT __stdcall remove_BitmapRequested(event_token token) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Maps::ICustomMapTileDataSourceFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstance(::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSource>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_UriFormatString(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_UriFormatString(HSTRING value) = 0;
    virtual HRESULT __stdcall get_AdditionalRequestHeaders(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_AllowCaching(bool* value) = 0;
    virtual HRESULT __stdcall put_AllowCaching(bool value) = 0;
    virtual HRESULT __stdcall add_UriRequested(::IUnknown* value, event_token* token) = 0;
    virtual HRESULT __stdcall remove_UriRequested(event_token token) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSourceFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstance(::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
    virtual HRESULT __stdcall CreateInstanceWithUriFormatString(HSTRING uriFormatString, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Maps::ILocalMapTileDataSource>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_UriFormatString(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_UriFormatString(HSTRING value) = 0;
    virtual HRESULT __stdcall add_UriRequested(::IUnknown* value, event_token* token) = 0;
    virtual HRESULT __stdcall remove_UriRequested(event_token token) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Maps::ILocalMapTileDataSourceFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstance(::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
    virtual HRESULT __stdcall CreateInstanceWithUriFormatString(HSTRING uriFormatString, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Camera(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangedEventArgs2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ChangeReason(Windows::UI::Xaml::Controls::Maps::MapCameraChangeReason* value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangingEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Camera(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangingEventArgs2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ChangeReason(Windows::UI::Xaml::Controls::Maps::MapCameraChangeReason* value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapBillboard>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Location(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Location(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_NormalizedAnchorPoint(Windows::Foundation::Point* value) = 0;
    virtual HRESULT __stdcall put_NormalizedAnchorPoint(Windows::Foundation::Point value) = 0;
    virtual HRESULT __stdcall get_Image(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Image(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_CollisionBehaviorDesired(Windows::UI::Xaml::Controls::Maps::MapElementCollisionBehavior* value) = 0;
    virtual HRESULT __stdcall put_CollisionBehaviorDesired(Windows::UI::Xaml::Controls::Maps::MapElementCollisionBehavior value) = 0;
    virtual HRESULT __stdcall get_ReferenceCamera(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapBillboardFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstanceFromCamera(::IUnknown* camera, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapBillboardStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_LocationProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_NormalizedAnchorPointProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_CollisionBehaviorDesiredProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapCamera>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Location(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Location(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Heading(double* value) = 0;
    virtual HRESULT __stdcall put_Heading(double value) = 0;
    virtual HRESULT __stdcall get_Pitch(double* value) = 0;
    virtual HRESULT __stdcall put_Pitch(double value) = 0;
    virtual HRESULT __stdcall get_Roll(double* value) = 0;
    virtual HRESULT __stdcall put_Roll(double value) = 0;
    virtual HRESULT __stdcall get_FieldOfView(double* value) = 0;
    virtual HRESULT __stdcall put_FieldOfView(double value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapCameraFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstanceWithLocation(::IUnknown* location, ::IUnknown** instance) = 0;
    virtual HRESULT __stdcall CreateInstanceWithLocationAndHeading(::IUnknown* location, double headingInDegrees, ::IUnknown** instance) = 0;
    virtual HRESULT __stdcall CreateInstanceWithLocationHeadingAndPitch(::IUnknown* location, double headingInDegrees, double pitchInDegrees, ::IUnknown** instance) = 0;
    virtual HRESULT __stdcall CreateInstanceWithLocationHeadingPitchRollAndFieldOfView(::IUnknown* location, double headingInDegrees, double pitchInDegrees, double rollInDegrees, double fieldOfViewInDegrees, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapContextRequestedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Position(Windows::Foundation::Point* value) = 0;
    virtual HRESULT __stdcall get_Location(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_MapElements(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapControl>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Center(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Center(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Children(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ColorScheme(Windows::UI::Xaml::Controls::Maps::MapColorScheme* value) = 0;
    virtual HRESULT __stdcall put_ColorScheme(Windows::UI::Xaml::Controls::Maps::MapColorScheme value) = 0;
    virtual HRESULT __stdcall get_DesiredPitch(double* value) = 0;
    virtual HRESULT __stdcall put_DesiredPitch(double value) = 0;
    virtual HRESULT __stdcall get_Heading(double* value) = 0;
    virtual HRESULT __stdcall put_Heading(double value) = 0;
    virtual HRESULT __stdcall get_LandmarksVisible(bool* value) = 0;
    virtual HRESULT __stdcall put_LandmarksVisible(bool value) = 0;
    virtual HRESULT __stdcall get_LoadingStatus(Windows::UI::Xaml::Controls::Maps::MapLoadingStatus* value) = 0;
    virtual HRESULT __stdcall get_MapServiceToken(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_MapServiceToken(HSTRING value) = 0;
    virtual HRESULT __stdcall get_MaxZoomLevel(double* value) = 0;
    virtual HRESULT __stdcall get_MinZoomLevel(double* value) = 0;
    virtual HRESULT __stdcall get_PedestrianFeaturesVisible(bool* value) = 0;
    virtual HRESULT __stdcall put_PedestrianFeaturesVisible(bool value) = 0;
    virtual HRESULT __stdcall get_Pitch(double* value) = 0;
    virtual HRESULT __stdcall get_Style(Windows::UI::Xaml::Controls::Maps::MapStyle* value) = 0;
    virtual HRESULT __stdcall put_Style(Windows::UI::Xaml::Controls::Maps::MapStyle value) = 0;
    virtual HRESULT __stdcall get_TrafficFlowVisible(bool* value) = 0;
    virtual HRESULT __stdcall put_TrafficFlowVisible(bool value) = 0;
    virtual HRESULT __stdcall get_TransformOrigin(Windows::Foundation::Point* value) = 0;
    virtual HRESULT __stdcall put_TransformOrigin(Windows::Foundation::Point value) = 0;
    virtual HRESULT __stdcall get_WatermarkMode(Windows::UI::Xaml::Controls::Maps::MapWatermarkMode* value) = 0;
    virtual HRESULT __stdcall put_WatermarkMode(Windows::UI::Xaml::Controls::Maps::MapWatermarkMode value) = 0;
    virtual HRESULT __stdcall get_ZoomLevel(double* value) = 0;
    virtual HRESULT __stdcall put_ZoomLevel(double value) = 0;
    virtual HRESULT __stdcall get_MapElements(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Routes(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_TileSources(::IUnknown** value) = 0;
    virtual HRESULT __stdcall add_CenterChanged(::IUnknown* value, event_token* token) = 0;
    virtual HRESULT __stdcall remove_CenterChanged(event_token token) = 0;
    virtual HRESULT __stdcall add_HeadingChanged(::IUnknown* value, event_token* token) = 0;
    virtual HRESULT __stdcall remove_HeadingChanged(event_token token) = 0;
    virtual HRESULT __stdcall add_LoadingStatusChanged(::IUnknown* value, event_token* token) = 0;
    virtual HRESULT __stdcall remove_LoadingStatusChanged(event_token token) = 0;
    virtual HRESULT __stdcall add_MapDoubleTapped(::IUnknown* value, event_token* token) = 0;
    virtual HRESULT __stdcall remove_MapDoubleTapped(event_token token) = 0;
    virtual HRESULT __stdcall add_MapHolding(::IUnknown* value, event_token* token) = 0;
    virtual HRESULT __stdcall remove_MapHolding(event_token token) = 0;
    virtual HRESULT __stdcall add_MapTapped(::IUnknown* value, event_token* token) = 0;
    virtual HRESULT __stdcall remove_MapTapped(event_token token) = 0;
    virtual HRESULT __stdcall add_PitchChanged(::IUnknown* value, event_token* token) = 0;
    virtual HRESULT __stdcall remove_PitchChanged(event_token token) = 0;
    virtual HRESULT __stdcall add_TransformOriginChanged(::IUnknown* value, event_token* token) = 0;
    virtual HRESULT __stdcall remove_TransformOriginChanged(event_token token) = 0;
    virtual HRESULT __stdcall add_ZoomLevelChanged(::IUnknown* value, event_token* token) = 0;
    virtual HRESULT __stdcall remove_ZoomLevelChanged(event_token token) = 0;
    virtual HRESULT __stdcall FindMapElementsAtOffset(Windows::Foundation::Point offset, ::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall GetLocationFromOffset(Windows::Foundation::Point offset, ::IUnknown** location) = 0;
    virtual HRESULT __stdcall GetOffsetFromLocation(::IUnknown* location, Windows::Foundation::Point* offset) = 0;
    virtual HRESULT __stdcall IsLocationInView(::IUnknown* location, bool* isInView) = 0;
    virtual HRESULT __stdcall TrySetViewBoundsAsync(::IUnknown* bounds, ::IUnknown* margin, Windows::UI::Xaml::Controls::Maps::MapAnimationKind animation, ::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall TrySetViewWithCenterAsync(::IUnknown* center, ::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall TrySetViewWithCenterAndZoomAsync(::IUnknown* center, ::IUnknown* zoomLevel, ::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall TrySetViewWithCenterZoomHeadingAndPitchAsync(::IUnknown* center, ::IUnknown* zoomLevel, ::IUnknown* heading, ::IUnknown* desiredPitch, ::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall TrySetViewWithCenterZoomHeadingPitchAndAnimationAsync(::IUnknown* center, ::IUnknown* zoomLevel, ::IUnknown* heading, ::IUnknown* desiredPitch, Windows::UI::Xaml::Controls::Maps::MapAnimationKind animation, ::IUnknown** returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapControl2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_BusinessLandmarksVisible(bool* value) = 0;
    virtual HRESULT __stdcall put_BusinessLandmarksVisible(bool value) = 0;
    virtual HRESULT __stdcall get_TransitFeaturesVisible(bool* value) = 0;
    virtual HRESULT __stdcall put_TransitFeaturesVisible(bool value) = 0;
    virtual HRESULT __stdcall get_PanInteractionMode(Windows::UI::Xaml::Controls::Maps::MapPanInteractionMode* value) = 0;
    virtual HRESULT __stdcall put_PanInteractionMode(Windows::UI::Xaml::Controls::Maps::MapPanInteractionMode value) = 0;
    virtual HRESULT __stdcall get_RotateInteractionMode(Windows::UI::Xaml::Controls::Maps::MapInteractionMode* value) = 0;
    virtual HRESULT __stdcall put_RotateInteractionMode(Windows::UI::Xaml::Controls::Maps::MapInteractionMode value) = 0;
    virtual HRESULT __stdcall get_TiltInteractionMode(Windows::UI::Xaml::Controls::Maps::MapInteractionMode* value) = 0;
    virtual HRESULT __stdcall put_TiltInteractionMode(Windows::UI::Xaml::Controls::Maps::MapInteractionMode value) = 0;
    virtual HRESULT __stdcall get_ZoomInteractionMode(Windows::UI::Xaml::Controls::Maps::MapInteractionMode* value) = 0;
    virtual HRESULT __stdcall put_ZoomInteractionMode(Windows::UI::Xaml::Controls::Maps::MapInteractionMode value) = 0;
    virtual HRESULT __stdcall get_Is3DSupported(bool* value) = 0;
    virtual HRESULT __stdcall get_IsStreetsideSupported(bool* value) = 0;
    virtual HRESULT __stdcall get_Scene(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Scene(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_ActualCamera(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_TargetCamera(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_CustomExperience(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_CustomExperience(::IUnknown* value) = 0;
    virtual HRESULT __stdcall add_MapElementClick(::IUnknown* value, event_token* token) = 0;
    virtual HRESULT __stdcall remove_MapElementClick(event_token token) = 0;
    virtual HRESULT __stdcall add_MapElementPointerEntered(::IUnknown* value, event_token* token) = 0;
    virtual HRESULT __stdcall remove_MapElementPointerEntered(event_token token) = 0;
    virtual HRESULT __stdcall add_MapElementPointerExited(::IUnknown* value, event_token* token) = 0;
    virtual HRESULT __stdcall remove_MapElementPointerExited(event_token token) = 0;
    virtual HRESULT __stdcall add_ActualCameraChanged(::IUnknown* value, event_token* token) = 0;
    virtual HRESULT __stdcall remove_ActualCameraChanged(event_token token) = 0;
    virtual HRESULT __stdcall add_ActualCameraChanging(::IUnknown* value, event_token* token) = 0;
    virtual HRESULT __stdcall remove_ActualCameraChanging(event_token token) = 0;
    virtual HRESULT __stdcall add_TargetCameraChanged(::IUnknown* value, event_token* token) = 0;
    virtual HRESULT __stdcall remove_TargetCameraChanged(event_token token) = 0;
    virtual HRESULT __stdcall add_CustomExperienceChanged(::IUnknown* value, event_token* token) = 0;
    virtual HRESULT __stdcall remove_CustomExperienceChanged(event_token token) = 0;
    virtual HRESULT __stdcall StartContinuousRotate(double rateInDegreesPerSecond) = 0;
    virtual HRESULT __stdcall StopContinuousRotate() = 0;
    virtual HRESULT __stdcall StartContinuousTilt(double rateInDegreesPerSecond) = 0;
    virtual HRESULT __stdcall StopContinuousTilt() = 0;
    virtual HRESULT __stdcall StartContinuousZoom(double rateOfChangePerSecond) = 0;
    virtual HRESULT __stdcall StopContinuousZoom() = 0;
    virtual HRESULT __stdcall TryRotateAsync(double degrees, ::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall TryRotateToAsync(double angleInDegrees, ::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall TryTiltAsync(double degrees, ::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall TryTiltToAsync(double angleInDegrees, ::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall TryZoomInAsync(::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall TryZoomOutAsync(::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall TryZoomToAsync(double zoomLevel, ::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall TrySetSceneAsync(::IUnknown* scene, ::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall TrySetSceneWithAnimationAsync(::IUnknown* scene, Windows::UI::Xaml::Controls::Maps::MapAnimationKind animationKind, ::IUnknown** returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapControl3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_MapRightTapped(::IUnknown* value, event_token* token) = 0;
    virtual HRESULT __stdcall remove_MapRightTapped(event_token token) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapControl4>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_BusinessLandmarksEnabled(bool* value) = 0;
    virtual HRESULT __stdcall put_BusinessLandmarksEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_TransitFeaturesEnabled(bool* value) = 0;
    virtual HRESULT __stdcall put_TransitFeaturesEnabled(bool value) = 0;
    virtual HRESULT __stdcall GetVisibleRegion(Windows::UI::Xaml::Controls::Maps::MapVisibleRegionKind region, ::IUnknown** returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapControl5>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_MapProjection(Windows::UI::Xaml::Controls::Maps::MapProjection* value) = 0;
    virtual HRESULT __stdcall put_MapProjection(Windows::UI::Xaml::Controls::Maps::MapProjection value) = 0;
    virtual HRESULT __stdcall get_StyleSheet(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_StyleSheet(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_ViewPadding(struct_of<32>* value) = 0;
    virtual HRESULT __stdcall put_ViewPadding(struct_of<32> value) = 0;
    virtual HRESULT __stdcall add_MapContextRequested(::IUnknown* value, event_token* token) = 0;
    virtual HRESULT __stdcall remove_MapContextRequested(event_token token) = 0;
    virtual HRESULT __stdcall FindMapElementsAtOffsetWithRadius(Windows::Foundation::Point offset, double radius, ::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall GetLocationFromOffsetWithReferenceSystem(Windows::Foundation::Point offset, Windows::Devices::Geolocation::AltitudeReferenceSystem desiredReferenceSystem, ::IUnknown** location) = 0;
    virtual HRESULT __stdcall StartContinuousPan(double horizontalPixelsPerSecond, double verticalPixelsPerSecond) = 0;
    virtual HRESULT __stdcall StopContinuousPan() = 0;
    virtual HRESULT __stdcall TryPanAsync(double horizontalPixels, double verticalPixels, ::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall TryPanToAsync(::IUnknown* location, ::IUnknown** returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapControl6>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Layers(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Layers(::IUnknown* value) = 0;
    virtual HRESULT __stdcall TryGetLocationFromOffset(Windows::Foundation::Point offset, ::IUnknown** location, bool* returnValue) = 0;
    virtual HRESULT __stdcall TryGetLocationFromOffsetWithReferenceSystem(Windows::Foundation::Point offset, Windows::Devices::Geolocation::AltitudeReferenceSystem desiredReferenceSystem, ::IUnknown** location, bool* returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapControlStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_CenterProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ChildrenProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ColorSchemeProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_DesiredPitchProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_HeadingProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_LandmarksVisibleProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_LoadingStatusProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_MapServiceTokenProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_PedestrianFeaturesVisibleProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_PitchProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_StyleProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_TrafficFlowVisibleProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_TransformOriginProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_WatermarkModeProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ZoomLevelProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_MapElementsProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_RoutesProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_TileSourcesProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_LocationProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetLocation(::IUnknown* element, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall SetLocation(::IUnknown* element, ::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_NormalizedAnchorPointProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetNormalizedAnchorPoint(::IUnknown* element, Windows::Foundation::Point* value) = 0;
    virtual HRESULT __stdcall SetNormalizedAnchorPoint(::IUnknown* element, Windows::Foundation::Point value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapControlStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_BusinessLandmarksVisibleProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_TransitFeaturesVisibleProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_PanInteractionModeProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_RotateInteractionModeProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_TiltInteractionModeProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ZoomInteractionModeProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Is3DSupportedProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_IsStreetsideSupportedProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_SceneProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapControlStatics4>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_BusinessLandmarksEnabledProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_TransitFeaturesEnabledProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapControlStatics5>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_MapProjectionProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_StyleSheetProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ViewPaddingProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapControlStatics6>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_LayersProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapCustomExperience>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapCustomExperienceChangedEventArgs>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapCustomExperienceFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstance(::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapElement>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ZIndex(int32_t* value) = 0;
    virtual HRESULT __stdcall put_ZIndex(int32_t value) = 0;
    virtual HRESULT __stdcall get_Visible(bool* value) = 0;
    virtual HRESULT __stdcall put_Visible(bool value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapElement2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_MapTabIndex(int32_t* value) = 0;
    virtual HRESULT __stdcall put_MapTabIndex(int32_t value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapElement3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_MapStyleSheetEntry(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_MapStyleSheetEntry(HSTRING value) = 0;
    virtual HRESULT __stdcall get_MapStyleSheetEntryState(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_MapStyleSheetEntryState(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Tag(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Tag(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapElement3D>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Location(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Location(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Model(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Model(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Heading(double* value) = 0;
    virtual HRESULT __stdcall put_Heading(double value) = 0;
    virtual HRESULT __stdcall get_Pitch(double* value) = 0;
    virtual HRESULT __stdcall put_Pitch(double value) = 0;
    virtual HRESULT __stdcall get_Roll(double* value) = 0;
    virtual HRESULT __stdcall put_Roll(double value) = 0;
    virtual HRESULT __stdcall get_Scale(Windows::Foundation::Numerics::float3* value) = 0;
    virtual HRESULT __stdcall put_Scale(Windows::Foundation::Numerics::float3 value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapElement3DStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_LocationProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_HeadingProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_PitchProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_RollProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ScaleProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapElementClickEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Position(Windows::Foundation::Point* value) = 0;
    virtual HRESULT __stdcall get_Location(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_MapElements(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapElementFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstance(::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapElementPointerEnteredEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Position(Windows::Foundation::Point* value) = 0;
    virtual HRESULT __stdcall get_Location(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_MapElement(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapElementPointerExitedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Position(Windows::Foundation::Point* value) = 0;
    virtual HRESULT __stdcall get_Location(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_MapElement(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapElementStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ZIndexProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_VisibleProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapElementStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_MapTabIndexProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapElementStatics3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_MapStyleSheetEntryProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_MapStyleSheetEntryStateProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_TagProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapElementsLayer>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_MapElements(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_MapElements(::IUnknown* value) = 0;
    virtual HRESULT __stdcall add_MapElementClick(::IUnknown* value, event_token* token) = 0;
    virtual HRESULT __stdcall remove_MapElementClick(event_token token) = 0;
    virtual HRESULT __stdcall add_MapElementPointerEntered(::IUnknown* value, event_token* token) = 0;
    virtual HRESULT __stdcall remove_MapElementPointerEntered(event_token token) = 0;
    virtual HRESULT __stdcall add_MapElementPointerExited(::IUnknown* value, event_token* token) = 0;
    virtual HRESULT __stdcall remove_MapElementPointerExited(event_token token) = 0;
    virtual HRESULT __stdcall add_MapContextRequested(::IUnknown* value, event_token* token) = 0;
    virtual HRESULT __stdcall remove_MapContextRequested(event_token token) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapElementsLayerClickEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Position(Windows::Foundation::Point* value) = 0;
    virtual HRESULT __stdcall get_Location(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_MapElements(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapElementsLayerContextRequestedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Position(Windows::Foundation::Point* value) = 0;
    virtual HRESULT __stdcall get_Location(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_MapElements(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapElementsLayerPointerEnteredEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Position(Windows::Foundation::Point* value) = 0;
    virtual HRESULT __stdcall get_Location(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_MapElement(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapElementsLayerPointerExitedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Position(Windows::Foundation::Point* value) = 0;
    virtual HRESULT __stdcall get_Location(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_MapElement(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapElementsLayerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_MapElementsProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapIcon>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Location(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Location(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Title(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Title(HSTRING value) = 0;
    virtual HRESULT __stdcall get_NormalizedAnchorPoint(Windows::Foundation::Point* value) = 0;
    virtual HRESULT __stdcall put_NormalizedAnchorPoint(Windows::Foundation::Point value) = 0;
    virtual HRESULT __stdcall get_Image(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Image(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapIcon2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_CollisionBehaviorDesired(Windows::UI::Xaml::Controls::Maps::MapElementCollisionBehavior* value) = 0;
    virtual HRESULT __stdcall put_CollisionBehaviorDesired(Windows::UI::Xaml::Controls::Maps::MapElementCollisionBehavior value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapIconStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_LocationProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_TitleProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_NormalizedAnchorPointProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapIconStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_CollisionBehaviorDesiredProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapInputEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Position(Windows::Foundation::Point* value) = 0;
    virtual HRESULT __stdcall get_Location(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapItemsControl>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ItemsSource(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_ItemsSource(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Items(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ItemTemplate(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_ItemTemplate(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapItemsControlStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ItemsSourceProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ItemsProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ItemTemplateProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapLayer>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_MapTabIndex(int32_t* value) = 0;
    virtual HRESULT __stdcall put_MapTabIndex(int32_t value) = 0;
    virtual HRESULT __stdcall get_Visible(bool* value) = 0;
    virtual HRESULT __stdcall put_Visible(bool value) = 0;
    virtual HRESULT __stdcall get_ZIndex(int32_t* value) = 0;
    virtual HRESULT __stdcall put_ZIndex(int32_t value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapLayerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstance(::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapLayerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_MapTabIndexProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_VisibleProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ZIndexProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapModel3D>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapModel3DFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstance(::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapModel3DStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateFrom3MFAsync(::IUnknown* source, ::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall CreateFrom3MFWithShadingOptionAsync(::IUnknown* source, Windows::UI::Xaml::Controls::Maps::MapModel3DShadingOption shadingOption, ::IUnknown** returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapPolygon>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Path(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Path(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_StrokeColor(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall put_StrokeColor(struct_of<4> value) = 0;
    virtual HRESULT __stdcall get_StrokeThickness(double* value) = 0;
    virtual HRESULT __stdcall put_StrokeThickness(double value) = 0;
    virtual HRESULT __stdcall get_StrokeDashed(bool* value) = 0;
    virtual HRESULT __stdcall put_StrokeDashed(bool value) = 0;
    virtual HRESULT __stdcall get_FillColor(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall put_FillColor(struct_of<4> value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapPolygon2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Paths(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapPolygonStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_PathProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_StrokeThicknessProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_StrokeDashedProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapPolyline>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Path(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Path(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_StrokeColor(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall put_StrokeColor(struct_of<4> value) = 0;
    virtual HRESULT __stdcall get_StrokeThickness(double* value) = 0;
    virtual HRESULT __stdcall put_StrokeThickness(double value) = 0;
    virtual HRESULT __stdcall get_StrokeDashed(bool* value) = 0;
    virtual HRESULT __stdcall put_StrokeDashed(bool value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapPolylineStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_PathProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_StrokeDashedProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapRightTappedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Position(Windows::Foundation::Point* value) = 0;
    virtual HRESULT __stdcall get_Location(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapRouteView>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_RouteColor(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall put_RouteColor(struct_of<4> value) = 0;
    virtual HRESULT __stdcall get_OutlineColor(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall put_OutlineColor(struct_of<4> value) = 0;
    virtual HRESULT __stdcall get_Route(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapRouteViewFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstanceWithMapRoute(::IUnknown* route, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapScene>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_TargetCamera(::IUnknown** value) = 0;
    virtual HRESULT __stdcall add_TargetCameraChanged(::IUnknown* value, event_token* token) = 0;
    virtual HRESULT __stdcall remove_TargetCameraChanged(event_token token) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapSceneStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateFromBoundingBox(::IUnknown* bounds, ::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall CreateFromBoundingBoxWithHeadingAndPitch(::IUnknown* bounds, double headingInDegrees, double pitchInDegrees, ::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall CreateFromCamera(::IUnknown* camera, ::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall CreateFromLocation(::IUnknown* location, ::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall CreateFromLocationWithHeadingAndPitch(::IUnknown* location, double headingInDegrees, double pitchInDegrees, ::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall CreateFromLocationAndRadius(::IUnknown* location, double radiusInMeters, ::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall CreateFromLocationAndRadiusWithHeadingAndPitch(::IUnknown* location, double radiusInMeters, double headingInDegrees, double pitchInDegrees, ::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall CreateFromLocations(::IUnknown* locations, ::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall CreateFromLocationsWithHeadingAndPitch(::IUnknown* locations, double headingInDegrees, double pitchInDegrees, ::IUnknown** returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapStyleSheet>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Area(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Airport(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Cemetery(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Continent(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Education(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_IndigenousPeoplesReserve(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Island(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Medical(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Military(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Nautical(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Neighborhood(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Runway(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Sand(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_ShoppingCenter(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Stadium(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Vegetation(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Forest(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_GolfCourse(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Park(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_PlayingField(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Reserve(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Point(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_NaturalPoint(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Peak(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_VolcanicPeak(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_WaterPoint(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_PointOfInterest(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Business(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_FoodPoint(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_PopulatedPlace(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Capital(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_AdminDistrictCapital(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_CountryRegionCapital(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_RoadShield(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_RoadExit(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Transit(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Political(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_CountryRegion(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_AdminDistrict(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_District(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Structure(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Building(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_EducationBuilding(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_MedicalBuilding(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_TransitBuilding(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Transportation(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Road(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_ControlledAccessHighway(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_HighSpeedRamp(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Highway(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_MajorRoad(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_ArterialRoad(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Street(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Ramp(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_UnpavedStreet(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_TollRoad(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Railway(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Trail(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_WaterRoute(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Water(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_River(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_RouteLine(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_WalkingRoute(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_DrivingRoute(HSTRING* value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntryStatesStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Disabled(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Hover(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Selected(HSTRING* value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapStyleSheetStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Aerial(::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall AerialWithOverlay(::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall RoadLight(::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall RoadDark(::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall RoadHighContrastLight(::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall RoadHighContrastDark(::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall Combine(::IUnknown* styleSheets, ::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall ParseFromJson(HSTRING styleAsJson, ::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall TryParseFromJson(HSTRING styleAsJson, ::IUnknown** styleSheet, bool* returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapTargetCameraChangedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Camera(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapTargetCameraChangedEventArgs2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ChangeReason(Windows::UI::Xaml::Controls::Maps::MapCameraChangeReason* value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequest>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_PixelData(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_PixelData(::IUnknown* value) = 0;
    virtual HRESULT __stdcall GetDeferral(::IUnknown** returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequestDeferral>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Complete() = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequestedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_X(int32_t* value) = 0;
    virtual HRESULT __stdcall get_Y(int32_t* value) = 0;
    virtual HRESULT __stdcall get_ZoomLevel(int32_t* value) = 0;
    virtual HRESULT __stdcall get_Request(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapTileDataSource>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapTileDataSourceFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstance(::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapTileSource>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DataSource(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_DataSource(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Layer(Windows::UI::Xaml::Controls::Maps::MapTileLayer* value) = 0;
    virtual HRESULT __stdcall put_Layer(Windows::UI::Xaml::Controls::Maps::MapTileLayer value) = 0;
    virtual HRESULT __stdcall get_ZoomLevelRange(struct_of<16>* value) = 0;
    virtual HRESULT __stdcall put_ZoomLevelRange(struct_of<16> value) = 0;
    virtual HRESULT __stdcall get_Bounds(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Bounds(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_AllowOverstretch(bool* value) = 0;
    virtual HRESULT __stdcall put_AllowOverstretch(bool value) = 0;
    virtual HRESULT __stdcall get_IsFadingEnabled(bool* value) = 0;
    virtual HRESULT __stdcall put_IsFadingEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_IsTransparencyEnabled(bool* value) = 0;
    virtual HRESULT __stdcall put_IsTransparencyEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_IsRetryEnabled(bool* value) = 0;
    virtual HRESULT __stdcall put_IsRetryEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_ZIndex(int32_t* value) = 0;
    virtual HRESULT __stdcall put_ZIndex(int32_t value) = 0;
    virtual HRESULT __stdcall get_TilePixelSize(int32_t* value) = 0;
    virtual HRESULT __stdcall put_TilePixelSize(int32_t value) = 0;
    virtual HRESULT __stdcall get_Visible(bool* value) = 0;
    virtual HRESULT __stdcall put_Visible(bool value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapTileSourceFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstance(::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
    virtual HRESULT __stdcall CreateInstanceWithDataSource(::IUnknown* dataSource, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
    virtual HRESULT __stdcall CreateInstanceWithDataSourceAndZoomRange(::IUnknown* dataSource, struct_of<16> zoomLevelRange, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
    virtual HRESULT __stdcall CreateInstanceWithDataSourceZoomRangeAndBounds(::IUnknown* dataSource, struct_of<16> zoomLevelRange, ::IUnknown* bounds, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
    virtual HRESULT __stdcall CreateInstanceWithDataSourceZoomRangeBoundsAndTileSize(::IUnknown* dataSource, struct_of<16> zoomLevelRange, ::IUnknown* bounds, int32_t tileSizeInPixels, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapTileSourceStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DataSourceProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_LayerProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ZoomLevelRangeProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_BoundsProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_AllowOverstretchProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_IsFadingEnabledProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_IsTransparencyEnabledProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_IsRetryEnabledProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ZIndexProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_TilePixelSizeProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_VisibleProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapTileUriRequest>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Uri(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Uri(::IUnknown* value) = 0;
    virtual HRESULT __stdcall GetDeferral(::IUnknown** returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapTileUriRequestDeferral>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Complete() = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapTileUriRequestedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_X(int32_t* value) = 0;
    virtual HRESULT __stdcall get_Y(int32_t* value) = 0;
    virtual HRESULT __stdcall get_ZoomLevel(int32_t* value) = 0;
    virtual HRESULT __stdcall get_Request(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Maps::IStreetsideExperience>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AddressTextVisible(bool* value) = 0;
    virtual HRESULT __stdcall put_AddressTextVisible(bool value) = 0;
    virtual HRESULT __stdcall get_CursorVisible(bool* value) = 0;
    virtual HRESULT __stdcall put_CursorVisible(bool value) = 0;
    virtual HRESULT __stdcall get_OverviewMapVisible(bool* value) = 0;
    virtual HRESULT __stdcall put_OverviewMapVisible(bool value) = 0;
    virtual HRESULT __stdcall get_StreetLabelsVisible(bool* value) = 0;
    virtual HRESULT __stdcall put_StreetLabelsVisible(bool value) = 0;
    virtual HRESULT __stdcall get_ExitButtonVisible(bool* value) = 0;
    virtual HRESULT __stdcall put_ExitButtonVisible(bool value) = 0;
    virtual HRESULT __stdcall get_ZoomButtonsVisible(bool* value) = 0;
    virtual HRESULT __stdcall put_ZoomButtonsVisible(bool value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Maps::IStreetsideExperienceFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstanceWithPanorama(::IUnknown* panorama, ::IUnknown** instance) = 0;
    virtual HRESULT __stdcall CreateInstanceWithPanoramaHeadingPitchAndFieldOfView(::IUnknown* panorama, double headingInDegrees, double pitchInDegrees, double fieldOfViewInDegrees, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Maps::IStreetsidePanorama>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Location(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Maps::IStreetsidePanoramaStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall FindNearbyWithLocationAsync(::IUnknown* location, ::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall FindNearbyWithLocationAndRadiusAsync(::IUnknown* location, double radiusInMeters, ::IUnknown** returnValue) = 0;
};};

}
