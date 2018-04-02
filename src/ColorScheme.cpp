//
//  ColorScheme.cpp
//  form_color_study02
//
//  Created by Togo Kida on 2018/03/30.
//

#include "ColorScheme.hpp"

//setup ofxGui for showing the color palettes
void ColorScheme::setupPalette(){

}

void ColorScheme::loadColors(){
    
    //Load various color palettes
    
    blueSunset.addColor(ofColor(61, 102, 141), "Blue Sunset");
    blueSunset.addColor(ofColor(242, 204, 53));
    blueSunset.addColor(ofColor(232, 164, 43));
    blueSunset.addColor(ofColor(233, 139, 37));
    blueSunset.addColor(ofColor(186, 98, 26));
    
    classicRetro.addColor(ofColor(159, 71, 75), "Classic and Retro");
    classicRetro.addColor(ofColor(40, 39, 37));
    classicRetro.addColor(ofColor(111, 137, 30));
    classicRetro.addColor(ofColor(158, 126, 49));
    classicRetro.addColor(ofColor(83, 57, 56));
    
    shimmeringBG.addColor(ofColor(18, 64, 187), "Shimmering Blue and Green");
    shimmeringBG.addColor(ofColor(45, 129, 238));
    shimmeringBG.addColor(ofColor(65, 172, 238));
    shimmeringBG.addColor(ofColor(238, 243, 104));
    shimmeringBG.addColor(ofColor(164, 151, 118));
    
    sunsetOverSwamp.addColor(ofColor(10, 100, 162), "Sunset Over Swamp");
    sunsetOverSwamp.addColor(ofColor(106, 116, 165));
    sunsetOverSwamp.addColor(ofColor(242, 235, 119));
    sunsetOverSwamp.addColor(ofColor(233, 143, 61));
    sunsetOverSwamp.addColor(ofColor(228, 97, 62));
    
    mediBlues.addColor(ofColor(170, 165, 190), "Mediterranean Blues");
    mediBlues.addColor(ofColor(89, 87, 117));
    mediBlues.addColor(ofColor(85, 63, 48));
    mediBlues.addColor(ofColor(239, 225, 215));
    mediBlues.addColor(ofColor(187, 154, 144));
    
    
}

void ColorScheme::showColors(){
    
    //just laying out the color palettes I've created
    blueSunset.drawPalette(ofVec2f(30, 40));
    classicRetro.drawPalette(ofVec2f(30, 80));
    shimmeringBG.drawPalette(ofVec2f(30, 120));
    sunsetOverSwamp.drawPalette(ofVec2f(30, 160));
    mediBlues.drawPalette(ofVec2f(30, 200));

}
