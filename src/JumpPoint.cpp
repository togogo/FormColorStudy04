//
//  JumpPoint.cpp
//  form_color_study03
//
//  Created by Togo Kida on 2018/03/30.
//

#pragma once

#include "JumpPoint.hpp"

void JumpPoint::setPos(ofVec2f _pos){
    pos = _pos;
}

void JumpPoint::draw(){
    if(isActivated == true){
        ofSetColor(255, 0, 0);
        ofDrawCircle(pos.x, pos.y, r);
    }
    else if(isActivated == false){
        ofSetColor(100, 100, 100);
        ofDrawCircle(pos.x, pos.y, r);
    }
}

void JumpPoint::activate(){
    //actiavte the boolean
    if(isActivated == false){
        isActivated = true;
    }
}

void JumpPoint::deactivate(){
    //deactivate the boolean
    if(isActivated == true){
        isActivated = false;
    }
}

ofVec2f JumpPoint::returnPos(){
    return pos;
}
