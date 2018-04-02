//
//  ColorPalette.cpp
//  form_color_study02
//
//  Created by Togo Kida on 2018/03/30.
//

#include "ColorPalette.hpp"

void ColorPalette::addColor(ofColor _color, string _name){
    color.push_back(_color);
    paletteName = _name;
    //colorName.push_back(_name);
}

void ColorPalette::addColor(ofColor _color){
    color.push_back(_color);
}

void ColorPalette::drawPalette(ofVec2f _pos){
    for(int i = 0; i<color.size(); i++){
        
        ofSetColor(255);
        ofDrawBitmapString(paletteName, _pos.x - paletteSize, _pos.y - 15);
        ofSetColor(color[i]);
        ofDrawCircle(_pos.x + i*15, _pos.y, paletteSize);
    }
}
