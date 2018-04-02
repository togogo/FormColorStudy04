//
//  JumpRoute.hpp
//  form_color_study03
//
//  Created by Togo Kida on 2018/03/30.
//

#pragma once

#include "ofMain.h"
#include "JumpPoint.hpp"

class JumpRoute{
    public:
    
    ofVec2f startPos;//beggining of the JumpRoute
    ofVec2f endPos;//end of the JumpRoute
    
    float numDiv;//division of this Jump Route
    float length;//length of this JumpRoute
    
    ofPolyline jumpRoute;
    
    vector<JumpPoint> jumpPoint;
    
    void setup(ofVec2f _start, ofVec2f _end, float _division);
    void draw();//Draw the whole JumpRoute
    
    int tickCount = 0;//counter for the "tick"
    void forward();//advance the "tick" to the next JumpPoint
    
    void setTick(int _numTick);//set the tick count
    
    ofVec2f returnActiveJumpPointPos();//returns the position of the active position

    
};
