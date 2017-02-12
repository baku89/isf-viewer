#pragma once

#include "BaseTheme.h"

class GuiTheme : public ofxImGui::BaseTheme
{
public:
	
	GuiTheme() {
		col_main_text = ofColor::fromHex(0x141414);
		col_main_head = ofColor::fromHex(0x33A3B8);
		col_main_area = ofColor::fromHex(0xBDBDBD);
		col_win_popup = ofColor::fromHex(0x000000);
		col_win_backg = ofColor::fromHex(0xFFFFFF);
	}
};
