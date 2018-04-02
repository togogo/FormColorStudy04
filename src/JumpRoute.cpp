//
//  JumpRoute.cpp
//  form_color_study03
//
//  Created by Togo Kida on 2018/03/30.
//

#pragma once

#include "JumpRoute.hpp"

void JumpRoute::setup(ofVec2f _start, ofVec2f _end, float _division){
    startPos = _start;
    endPos = _end;
    numDiv = _division;
    
    //define polyline based on the start and end position
    jumpRoute.addVertex(startPos.x, startPos.y);
    jumpRoute.addVertex(endPos.x, endPos.y);
    
    //instantiate JumpPoints based on the number of divisions
    for(int i = 0; i < (int)numDiv; i++){
        JumpPoint tempJumpPoint;
        ofVec3f tempVec = jumpRoute.getPointAtPercent(i/numDiv);
        tempJumpPoint.setPos(tempVec);
        jumpPoint.push_back(tempJumpPoint);
        jumpPoint[i].deactivate();
    }
    
    jumpPoint[0].activate();
}

void JumpRoute::draw(){
    //draw the polyline, JumpRoute
    ofSetColor(100, 100, 100);
    jumpRoute.draw();
    
    //draw the points on JumpRoute
    for(int i = 0; i < numDiv; i++){
        jumpPoint[i].draw();
    }
}

void JumpRoute::forward(){
    
    if(tickCount < (int)numDiv){
        jumpPoint[tickCount].deactivate();
        jumpPoint[tickCount+1].activate();
        tickCount++;
    }else if(tickCount == (int)numDiv){
        jumpPoint[tickCount].deactivate();
        jumpPoint[0].activate();
        tickCount = 0;
    }
}

void JumpRoute::setTick(int _numTick){
    tickCount = _numTick;
}

ofVec2f JumpRoute::returnActiveJumpPointPos(){
    ofVec2f returnMe;
    returnMe = jumpPoint[tickCount].pos;
    return returnMe;
}
