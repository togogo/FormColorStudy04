//
//  springPoint.cpp
//  form_color_study01
//
//  Created by Togo Kida

#include "SpringPoint.hpp"
//#include "ofMain.h"
//#include "ofApp.h"

void SpringPoint::setup() {
    
    //define the physics value three times so that every SpringPoint's physics is randomized.
    //just a temporary solution...need to flesh out this in a cleaner manner...
    
    gravity = 0.0;//test value
    mass = ofRandom(2.0, 3.0);//test value
    stiffness = ofRandom(0.1, 0.2);//test value
    damping = ofRandom(0.4, 0.8);//test value
    
    first.setup(0.0, ofGetScreenWidth() / 2, mass, gravity, stiffness, damping);
    
    mass = ofRandom(2.0, 3.0);//test value
    stiffness = ofRandom(0.1, 0.2);//test value
    damping = ofRandom(0.4, 0.8);//test value
    
    second.setup(0.0, ofGetScreenWidth() / 2, mass, gravity, stiffness, damping);
    
    mass = ofRandom(2.0, 3.0);//test value
    stiffness = ofRandom(0.1, 0.2);//test value
    damping = ofRandom(0.4, 0.8);//test value
    
    third.setup(0.0, ofGetScreenWidth() / 2, mass, gravity, stiffness, damping);
}

//*depricated
//void SpringPoint::update() {
//    base.update(ofGetMouseX(), ofGetMouseY());//this part is kinda redundant...
//    //base.update(pos.x, pos.y);
//    extend.update(base.x, base.y);
//}

void SpringPoint::update(ofVec2f _pos) {
    setPos(_pos);
    first.update(pos.x, pos.y);
    second.update(first.x, first.y);
    third.update(second.x, second.y);
}

void SpringPoint::draw() {
    first.display(pos.x, pos.y);//probably you don't need to put ofVec2f pos here in the first place...
    second.display(first.x, first.y);//probably you don't need to put ofVec2f pos here in the first place...
    third.display(second.x, second.y);//probably you don't need to put ofVec2f pos here in the first place...a
}

void SpringPoint::setPos(ofVec2f _pos){
    pos = _pos;
}
