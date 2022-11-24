// somebar - dwl bar
// See LICENSE file for copyright and license details.

#pragma once
#include "common.hpp"

constexpr bool topbar = true;

constexpr int paddingX = 10;
constexpr int paddingY = 3;

#define C_MAGENTA     0x75, 0x50, 0x7b // #75507b
#define C_BLUE        0x00, 0x55, 0x77 // #005577
#define C_WHITE       0xee, 0xee, 0xee // #eeeeee
#define C_LIGHT_GREY  0xdd, 0xdd, 0xdd // #dddddd
#define C_GREY        0xbb, 0xbb, 0xbb // #bbbbbb
#define C_BLACK       0x22, 0x22, 0x22 // #222222
#define C_LIGHT_BLACK 0x33, 0x33, 0x33 // #333333

// See https://docs.gtk.org/Pango/type_func.FontDescription.from_string.html
constexpr const char* font = "Sans 12";

constexpr ColorScheme colorInactive = {
    /* tag_fg:      */ Color(C_GREY),
    /* tag_bg:      */ Color(C_BLACK),
    /* titlebar_fg: */ Color(C_GREY),
    /* titlebar_bg: */ Color(C_LIGHT_BLACK),
    /* layout_fg:   */ Color(C_GREY),
    /* layout_bg:   */ Color(C_LIGHT_BLACK),
    /* status_fg:   */ Color(C_WHITE),
    /* status_bg:   */ Color(C_LIGHT_BLACK),
};
constexpr ColorScheme colorActive = {
    /* tag_fg:      */ Color(C_WHITE),
    /* tag_bg:      */ Color(C_MAGENTA),
    /* titlebar_fg: */ Color(C_LIGHT_GREY),
    /* titlebar_bg: */ Color(C_BLACK),
    /* layout_fg:   */ Color(C_GREY),
    /* layout_bg:   */ Color(C_BLACK),
    /* status_fg:   */ Color(C_WHITE),
    /* status_bg:   */ Color(C_BLACK),
};
constexpr const char* termcmd[] = {"foot", nullptr};

static std::vector<std::string> tagNames = {
	"1", "2", "3",
	"4", "5", "6",
	"7", "8", "9",
};

constexpr Button buttons[] = {
	{ ClkStatusText,   BTN_RIGHT,  spawn,      {.v = termcmd} },
};
