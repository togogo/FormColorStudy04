//
//  ColorPalette.hpp
//  form_color_study02
//
//  Created by Togo Kida on 2018/03/30.
//

#pragma once
#include "ofMain.h"


class ColorPalette{
    public:
        vector<ofColor> color;//variable array of colors
        string paletteName;//name of the palette itself
        vector<string> colorName;//variable Strings to store names of colors
    
        void addColor(ofColor _color, string _name);//add new color...this might become too compliated...
        void addColor(ofColor _color);//add new color let's keep it simple
        ofColor returnRandColor();//return random color in palette
    
        //I don't know if will use these guys...
        int returnNum(string _name);//returns the numberID based on the name of the color
        string returnName(int _num);//returns the name of the color based on the number of the color
    
        //ofGuixを使うのはやめよう…。
        void drawPalette(ofVec2f _pos);
        int const paletteSize = 10;
};
