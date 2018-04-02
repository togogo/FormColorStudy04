//
//  Spring2D.cpp
//  form_color_study01
//
//  Created by Togo Kida
//

#include "Spring2D.hpp"

void Spring2D::setup(float _x, float _y, float _mass, float _gravity, float _stiffness, float _damping) {
    x = _x;
    y = _y;
    mass = _mass;
    gravity = _gravity;
    stiffness = _stiffness;
    damping = _damping;
}

void Spring2D::setup(ofVec2f _pos, float _mass, float _gravity, float _stiffness, float _damping) {
    x = _pos.x;
    y = _pos.y;
    mass = _mass;
    gravity = _gravity;
    stiffness = _stiffness;
    damping = _damping;
}

void Spring2D::update(float targetX, float targetY) {
    float forceX = (targetX - x) * stiffness;
    float ax = forceX / mass;
    vx = damping * (vx + ax);
    x += vx;
    float forceY = (targetY - y) * stiffness;
    forceY += gravity;
    float ay = forceY / mass;
    vy = damping * (vy + ay);
    y += vy;
}

void Spring2D::display(float nx, float ny) {
    
    
    ofSetColor(20, 102, 102);
    ofDrawCircle(x, y, 20, 20);
    
    ofSetColor(20, 255, 102);
    ofDrawLine(x, y, nx, ny);
}

void Spring2D::setDamping(float _damp){
    damping = _damp;
}

void Spring2D::setStiffness(float _stiff){
    stiffness = _stiff;
}

void Spring2D::setColorScheme(ofColor _fill, ofColor _stroke){
    
}



