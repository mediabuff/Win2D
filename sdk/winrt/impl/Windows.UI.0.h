﻿// C++/WinRT v1.0.170906.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::UI {

struct IColorHelper;
struct IColorHelperStatics;
struct IColorHelperStatics2;
struct IColors;
struct IColorsStatics;
struct ColorHelper;
struct Colors;
struct Color;

}

namespace winrt::impl {

template <> struct category<Windows::UI::IColorHelper>{ using type = interface_category; };
template <> struct category<Windows::UI::IColorHelperStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::IColorHelperStatics2>{ using type = interface_category; };
template <> struct category<Windows::UI::IColors>{ using type = interface_category; };
template <> struct category<Windows::UI::IColorsStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::ColorHelper>{ using type = class_category; };
template <> struct category<Windows::UI::Colors>{ using type = class_category; };
template <> struct category<Windows::UI::Color>{ using type = struct_category<uint8_t,uint8_t,uint8_t,uint8_t>; };
template <> struct name<Windows::UI::IColorHelper>{ static constexpr auto & value{ L"Windows.UI.IColorHelper" }; };
template <> struct name<Windows::UI::IColorHelperStatics>{ static constexpr auto & value{ L"Windows.UI.IColorHelperStatics" }; };
template <> struct name<Windows::UI::IColorHelperStatics2>{ static constexpr auto & value{ L"Windows.UI.IColorHelperStatics2" }; };
template <> struct name<Windows::UI::IColors>{ static constexpr auto & value{ L"Windows.UI.IColors" }; };
template <> struct name<Windows::UI::IColorsStatics>{ static constexpr auto & value{ L"Windows.UI.IColorsStatics" }; };
template <> struct name<Windows::UI::ColorHelper>{ static constexpr auto & value{ L"Windows.UI.ColorHelper" }; };
template <> struct name<Windows::UI::Colors>{ static constexpr auto & value{ L"Windows.UI.Colors" }; };
template <> struct name<Windows::UI::Color>{ static constexpr auto & value{ L"Windows.UI.Color" }; };
template <> struct guid<Windows::UI::IColorHelper>{ static constexpr GUID value{ 0x193CFBE7,0x65C7,0x4540,{ 0xAD,0x08,0x62,0x83,0xBA,0x76,0x87,0x9A } }; };
template <> struct guid<Windows::UI::IColorHelperStatics>{ static constexpr GUID value{ 0x8504DBEA,0xFB6A,0x4144,{ 0xA6,0xC2,0x33,0x49,0x9C,0x92,0x84,0xF5 } }; };
template <> struct guid<Windows::UI::IColorHelperStatics2>{ static constexpr GUID value{ 0x24D9AF02,0x6EB0,0x4B94,{ 0x85,0x5C,0xFC,0xF0,0x81,0x8D,0x9A,0x16 } }; };
template <> struct guid<Windows::UI::IColors>{ static constexpr GUID value{ 0x9B8C9326,0x4CA6,0x4CE5,{ 0x89,0x94,0x9E,0xFF,0x65,0xCA,0xBD,0xCC } }; };
template <> struct guid<Windows::UI::IColorsStatics>{ static constexpr GUID value{ 0xCFF52E04,0xCCA6,0x4614,{ 0xA1,0x7E,0x75,0x49,0x10,0xC8,0x4A,0x99 } }; };
template <> struct default_interface<Windows::UI::ColorHelper>{ using type = Windows::UI::IColorHelper; };
template <> struct default_interface<Windows::UI::Colors>{ using type = Windows::UI::IColors; };

template <typename D>
struct consume_Windows_UI_IColorHelper
{
};
template <> struct consume<Windows::UI::IColorHelper> { template <typename D> using type = consume_Windows_UI_IColorHelper<D>; };

template <typename D>
struct consume_Windows_UI_IColorHelperStatics
{
    Windows::UI::Color FromArgb(uint8_t a, uint8_t r, uint8_t g, uint8_t b) const;
};
template <> struct consume<Windows::UI::IColorHelperStatics> { template <typename D> using type = consume_Windows_UI_IColorHelperStatics<D>; };

template <typename D>
struct consume_Windows_UI_IColorHelperStatics2
{
    hstring ToDisplayName(Windows::UI::Color const& color) const;
};
template <> struct consume<Windows::UI::IColorHelperStatics2> { template <typename D> using type = consume_Windows_UI_IColorHelperStatics2<D>; };

template <typename D>
struct consume_Windows_UI_IColors
{
};
template <> struct consume<Windows::UI::IColors> { template <typename D> using type = consume_Windows_UI_IColors<D>; };

template <typename D>
struct consume_Windows_UI_IColorsStatics
{
    Windows::UI::Color AliceBlue() const;
    Windows::UI::Color AntiqueWhite() const;
    Windows::UI::Color Aqua() const;
    Windows::UI::Color Aquamarine() const;
    Windows::UI::Color Azure() const;
    Windows::UI::Color Beige() const;
    Windows::UI::Color Bisque() const;
    Windows::UI::Color Black() const;
    Windows::UI::Color BlanchedAlmond() const;
    Windows::UI::Color Blue() const;
    Windows::UI::Color BlueViolet() const;
    Windows::UI::Color Brown() const;
    Windows::UI::Color BurlyWood() const;
    Windows::UI::Color CadetBlue() const;
    Windows::UI::Color Chartreuse() const;
    Windows::UI::Color Chocolate() const;
    Windows::UI::Color Coral() const;
    Windows::UI::Color CornflowerBlue() const;
    Windows::UI::Color Cornsilk() const;
    Windows::UI::Color Crimson() const;
    Windows::UI::Color Cyan() const;
    Windows::UI::Color DarkBlue() const;
    Windows::UI::Color DarkCyan() const;
    Windows::UI::Color DarkGoldenrod() const;
    Windows::UI::Color DarkGray() const;
    Windows::UI::Color DarkGreen() const;
    Windows::UI::Color DarkKhaki() const;
    Windows::UI::Color DarkMagenta() const;
    Windows::UI::Color DarkOliveGreen() const;
    Windows::UI::Color DarkOrange() const;
    Windows::UI::Color DarkOrchid() const;
    Windows::UI::Color DarkRed() const;
    Windows::UI::Color DarkSalmon() const;
    Windows::UI::Color DarkSeaGreen() const;
    Windows::UI::Color DarkSlateBlue() const;
    Windows::UI::Color DarkSlateGray() const;
    Windows::UI::Color DarkTurquoise() const;
    Windows::UI::Color DarkViolet() const;
    Windows::UI::Color DeepPink() const;
    Windows::UI::Color DeepSkyBlue() const;
    Windows::UI::Color DimGray() const;
    Windows::UI::Color DodgerBlue() const;
    Windows::UI::Color Firebrick() const;
    Windows::UI::Color FloralWhite() const;
    Windows::UI::Color ForestGreen() const;
    Windows::UI::Color Fuchsia() const;
    Windows::UI::Color Gainsboro() const;
    Windows::UI::Color GhostWhite() const;
    Windows::UI::Color Gold() const;
    Windows::UI::Color Goldenrod() const;
    Windows::UI::Color Gray() const;
    Windows::UI::Color Green() const;
    Windows::UI::Color GreenYellow() const;
    Windows::UI::Color Honeydew() const;
    Windows::UI::Color HotPink() const;
    Windows::UI::Color IndianRed() const;
    Windows::UI::Color Indigo() const;
    Windows::UI::Color Ivory() const;
    Windows::UI::Color Khaki() const;
    Windows::UI::Color Lavender() const;
    Windows::UI::Color LavenderBlush() const;
    Windows::UI::Color LawnGreen() const;
    Windows::UI::Color LemonChiffon() const;
    Windows::UI::Color LightBlue() const;
    Windows::UI::Color LightCoral() const;
    Windows::UI::Color LightCyan() const;
    Windows::UI::Color LightGoldenrodYellow() const;
    Windows::UI::Color LightGreen() const;
    Windows::UI::Color LightGray() const;
    Windows::UI::Color LightPink() const;
    Windows::UI::Color LightSalmon() const;
    Windows::UI::Color LightSeaGreen() const;
    Windows::UI::Color LightSkyBlue() const;
    Windows::UI::Color LightSlateGray() const;
    Windows::UI::Color LightSteelBlue() const;
    Windows::UI::Color LightYellow() const;
    Windows::UI::Color Lime() const;
    Windows::UI::Color LimeGreen() const;
    Windows::UI::Color Linen() const;
    Windows::UI::Color Magenta() const;
    Windows::UI::Color Maroon() const;
    Windows::UI::Color MediumAquamarine() const;
    Windows::UI::Color MediumBlue() const;
    Windows::UI::Color MediumOrchid() const;
    Windows::UI::Color MediumPurple() const;
    Windows::UI::Color MediumSeaGreen() const;
    Windows::UI::Color MediumSlateBlue() const;
    Windows::UI::Color MediumSpringGreen() const;
    Windows::UI::Color MediumTurquoise() const;
    Windows::UI::Color MediumVioletRed() const;
    Windows::UI::Color MidnightBlue() const;
    Windows::UI::Color MintCream() const;
    Windows::UI::Color MistyRose() const;
    Windows::UI::Color Moccasin() const;
    Windows::UI::Color NavajoWhite() const;
    Windows::UI::Color Navy() const;
    Windows::UI::Color OldLace() const;
    Windows::UI::Color Olive() const;
    Windows::UI::Color OliveDrab() const;
    Windows::UI::Color Orange() const;
    Windows::UI::Color OrangeRed() const;
    Windows::UI::Color Orchid() const;
    Windows::UI::Color PaleGoldenrod() const;
    Windows::UI::Color PaleGreen() const;
    Windows::UI::Color PaleTurquoise() const;
    Windows::UI::Color PaleVioletRed() const;
    Windows::UI::Color PapayaWhip() const;
    Windows::UI::Color PeachPuff() const;
    Windows::UI::Color Peru() const;
    Windows::UI::Color Pink() const;
    Windows::UI::Color Plum() const;
    Windows::UI::Color PowderBlue() const;
    Windows::UI::Color Purple() const;
    Windows::UI::Color Red() const;
    Windows::UI::Color RosyBrown() const;
    Windows::UI::Color RoyalBlue() const;
    Windows::UI::Color SaddleBrown() const;
    Windows::UI::Color Salmon() const;
    Windows::UI::Color SandyBrown() const;
    Windows::UI::Color SeaGreen() const;
    Windows::UI::Color SeaShell() const;
    Windows::UI::Color Sienna() const;
    Windows::UI::Color Silver() const;
    Windows::UI::Color SkyBlue() const;
    Windows::UI::Color SlateBlue() const;
    Windows::UI::Color SlateGray() const;
    Windows::UI::Color Snow() const;
    Windows::UI::Color SpringGreen() const;
    Windows::UI::Color SteelBlue() const;
    Windows::UI::Color Tan() const;
    Windows::UI::Color Teal() const;
    Windows::UI::Color Thistle() const;
    Windows::UI::Color Tomato() const;
    Windows::UI::Color Transparent() const;
    Windows::UI::Color Turquoise() const;
    Windows::UI::Color Violet() const;
    Windows::UI::Color Wheat() const;
    Windows::UI::Color White() const;
    Windows::UI::Color WhiteSmoke() const;
    Windows::UI::Color Yellow() const;
    Windows::UI::Color YellowGreen() const;
};
template <> struct consume<Windows::UI::IColorsStatics> { template <typename D> using type = consume_Windows_UI_IColorsStatics<D>; };

template <> struct abi<Windows::UI::IColorHelper>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::IColorHelperStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall FromArgb(uint8_t a, uint8_t r, uint8_t g, uint8_t b, struct_of<4>* returnValue) = 0;
};};

template <> struct abi<Windows::UI::IColorHelperStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall ToDisplayName(struct_of<4> color, HSTRING* returnValue) = 0;
};};

template <> struct abi<Windows::UI::IColors>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::IColorsStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AliceBlue(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_AntiqueWhite(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_Aqua(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_Aquamarine(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_Azure(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_Beige(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_Bisque(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_Black(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_BlanchedAlmond(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_Blue(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_BlueViolet(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_Brown(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_BurlyWood(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_CadetBlue(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_Chartreuse(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_Chocolate(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_Coral(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_CornflowerBlue(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_Cornsilk(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_Crimson(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_Cyan(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_DarkBlue(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_DarkCyan(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_DarkGoldenrod(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_DarkGray(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_DarkGreen(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_DarkKhaki(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_DarkMagenta(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_DarkOliveGreen(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_DarkOrange(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_DarkOrchid(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_DarkRed(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_DarkSalmon(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_DarkSeaGreen(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_DarkSlateBlue(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_DarkSlateGray(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_DarkTurquoise(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_DarkViolet(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_DeepPink(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_DeepSkyBlue(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_DimGray(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_DodgerBlue(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_Firebrick(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_FloralWhite(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_ForestGreen(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_Fuchsia(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_Gainsboro(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_GhostWhite(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_Gold(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_Goldenrod(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_Gray(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_Green(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_GreenYellow(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_Honeydew(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_HotPink(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_IndianRed(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_Indigo(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_Ivory(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_Khaki(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_Lavender(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_LavenderBlush(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_LawnGreen(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_LemonChiffon(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_LightBlue(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_LightCoral(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_LightCyan(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_LightGoldenrodYellow(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_LightGreen(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_LightGray(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_LightPink(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_LightSalmon(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_LightSeaGreen(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_LightSkyBlue(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_LightSlateGray(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_LightSteelBlue(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_LightYellow(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_Lime(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_LimeGreen(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_Linen(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_Magenta(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_Maroon(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_MediumAquamarine(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_MediumBlue(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_MediumOrchid(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_MediumPurple(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_MediumSeaGreen(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_MediumSlateBlue(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_MediumSpringGreen(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_MediumTurquoise(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_MediumVioletRed(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_MidnightBlue(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_MintCream(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_MistyRose(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_Moccasin(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_NavajoWhite(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_Navy(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_OldLace(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_Olive(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_OliveDrab(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_Orange(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_OrangeRed(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_Orchid(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_PaleGoldenrod(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_PaleGreen(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_PaleTurquoise(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_PaleVioletRed(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_PapayaWhip(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_PeachPuff(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_Peru(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_Pink(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_Plum(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_PowderBlue(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_Purple(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_Red(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_RosyBrown(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_RoyalBlue(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_SaddleBrown(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_Salmon(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_SandyBrown(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_SeaGreen(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_SeaShell(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_Sienna(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_Silver(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_SkyBlue(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_SlateBlue(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_SlateGray(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_Snow(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_SpringGreen(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_SteelBlue(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_Tan(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_Teal(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_Thistle(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_Tomato(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_Transparent(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_Turquoise(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_Violet(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_Wheat(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_White(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_WhiteSmoke(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_Yellow(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall get_YellowGreen(struct_of<4>* value) = 0;
};};

}
