//
//  Spring2D.hpp
//  form_color_study01
//
//  Created by Togo Kida
//

#pragma once

#include "ofMain.h"


class Spring2D {
    
public:
    float vx, vy;
    ofVec2f vpos;
    float x, y;
    ofVec2f pos;//position of the Spring2D
    float gravity;
    float mass;
    float stiffness;
    float damping;
    
    
    void setup(float _x, float _y, float _mass, float _gravity, float _stiffness, float _damping);
    void setup(ofVec2f _pos, float _mass, float _gravity, float _stiffness, float _damping);
    
    void update(float targetX, float targetY);
    void display(float nx, float ny);
    
    void setDamping(float _damp);
    void setStiffness(float _stiff);
    
    void setColorScheme(ofColor _fill, ofColor _stroke);//change the color scheme
    
    
    

    
};
