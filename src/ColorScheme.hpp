//
//  ColorScheme.hpp
//  form_color_study02
//
//  Created by Togo Kida on 2018/03/30.
//

#pragma once
#include "ofMain.h"
#include "ColorPalette.hpp"

class ColorScheme{
public:
    
    ColorPalette blueSunset;
    ColorPalette classicRetro;
    ColorPalette shimmeringBG;
    ColorPalette sunsetOverSwamp;
    ColorPalette mediBlues;


    int numPalettes = 5;
    vector<int> numSamples;

    void setupPalette();//depricated...
    void loadColors();//load all colors available
    void showColors();//show all loaded color pallettes
    
    ofColor returnRandColorFromRandPalette();
    
};
