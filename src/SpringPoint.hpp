//
//  springPoint.hpp
//  form_color_study01
//
//  Created by Togo Kida
//

#pragma once

#include "ofMain.h"
//#include "ofApp.h"
#include "Spring2D.hpp"

class SpringPoint{
public:
    void setup();
    //void update();//depricated
    void update(ofVec2f _pos);//set position of the SpringPoint
    void draw();
    void setPos(ofVec2f _pos);//set position of the SpringPoint
    
    ofVec2f pos;//position of the SpringPoint
    
    Spring2D first;
    Spring2D second;
    Spring2D third;
    
    //just using this temporarily...
    float gravity;// = 0.0;//test value
    float mass;// = 3.0;//test value
    float stiffness;// = 0.2;//test value
    float damping;// = 0.8;//test value
    
};
