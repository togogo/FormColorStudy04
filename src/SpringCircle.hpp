//
//  SpringCircle.hpp
//  form_color_study01
//
//  Created by Togo Kida
//



#pragma once
#include "ofMain.h"
#include "SpringPoint.hpp"


class SpringCircle {
    
public:
    ofVec2f pos;//position of this SpringCircle
    vector<SpringPoint> sp;//dynamic array needed for this SpringCircle
    
    float r;//diameter of the SpringCircle
    int numSpringPoint;//number of SpringPoints to deploy
    
    void setup(ofVec2f _pos, float _r, int _num);
    void setCircle();
    void update();
    void draw();
    void drawSurface();//draws as one unified form
    void eraseMe();//erase the SpringCircle when it's out of the screen
    
    void setPos(ofVec2f _pos);//set the position of the SpringCircle
    
    void setThreeColors(ofColor _color1, ofColor _color2, ofColor _color3);
    
    void resetPhysics();
  
    float gravity = 1.008;
    float velocity = 1.0;

    ofColor firstLayerColor;
    ofColor secondLayerColor;
    ofColor thirdLayerColor;
    
    
};
