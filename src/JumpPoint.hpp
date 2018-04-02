//
//  JumpPoint.hpp
//  form_color_study03
//
//  Created by Togo Kida on 2018/03/30.
//

#pragma once

#include "ofMain.h"

class JumpPoint{
    public:
    
    ofVec2f pos;//position of this JumpPoint
    int const r = 5;//radius of the JumpPoint
    
    void setPos(ofVec2f _pos);//set the position of JumpPoint
    void draw();//draw JumpPoint
    
    bool isActivated = false;
    
    void activate();
    void deactivate();
    ofVec2f returnPos();//returns the position of the point
};
