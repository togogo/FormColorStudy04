//
//  SpringCircle.cpp
//  form_color_study01
//
//  Created by Togo Kida
//

#include "SpringCircle.hpp"



void SpringCircle::setup(ofVec2f _pos, float _r, int _num){
    pos = _pos;//probably don't need to put pos here in the first place...
    r = _r;
    numSpringPoint = _num;
    setCircle();
    
    //instatinate 
}

void SpringCircle::setCircle(){
    
    //cout << "am I being called?" << endl;//for debudding purposes...this was called
    
    //iterate to place the cirlcles
    for(int i = 0; i<numSpringPoint; i++){
        
        ofVec2f tempPos;
        SpringPoint tempSP;
        tempSP.setup();
        cout << tempPos.x << endl;
        //instantiate the SpringPoints based on sin/cos functions, and r
        
        tempPos.x = pos.x + cos(TWO_PI / numSpringPoint * i) * r;
        tempPos.y = pos.y + sin(TWO_PI / numSpringPoint * i) * r;
        
//        tempPos.x = ofGetMouseX() + cos(TWO_PI / numSpringPoint * i) * r;
//        tempPos.y = ofGetMouseY() + sin(TWO_PI / numSpringPoint * i) * r;
        
        tempSP.setPos(tempPos);
        
        //instantiate and add SpringPoint to vector
        sp.push_back(tempSP);
        
    }
}

void SpringCircle::update(){
    velocity *= gravity;
    for(int i = 0; i<sp.size(); i++){
        ofVec2f tempPos;
//        tempPos.x = ofGetMouseX() + cos(TWO_PI / numSpringPoint * i) * r;
//        tempPos.y = ofGetMouseY() + sin(TWO_PI / numSpringPoint * i) * r;
        tempPos.x = pos.x + cos(TWO_PI / numSpringPoint * i) * r;
        tempPos.y = pos.y + sin(TWO_PI / numSpringPoint * i) * r;
        tempPos.y += velocity;
        sp[i].update(tempPos);
    }
    
}

void SpringCircle::eraseMe(){
    if(pos.y > ofGetScreenHeight() + 200 || pos.x > ofGetScreenWidth() + 200){
        //this is depricated
        
    }
}

void SpringCircle::draw(){
    for(int i = 0; i<sp.size(); i++){
        sp[i].draw();
    }
}

void SpringCircle::drawSurface(){
    
    //ofEnableBlendMode(OF_BLENDMODE_ALPHA);
    //ofEnableBlendMode(OF_BLENDMODE_ADD);
    //ofEnableBlendMode(OF_BLENDMODE_MULTIPLY);
    
    //third layer
    ofSetColor(100, 200, 100);//temporary color
    //ofSetColor(0, 160, 233);//temporary color, cyan
    ofBeginShape();
    for(int i = 0; i<sp.size(); i++){
        
        ofCurveVertex(sp[i].third.x, sp[i].third.y);//drawing the "third" SpringPoints
    }
    ofEndShape();
    
    //second layer
    ofSetColor(200, 100, 200);//temporary color
    //ofSetColor(228, 0, 127);//temporary color, magenta
    ofBeginShape();
    for(int i = 0; i<sp.size(); i++){
        
        ofCurveVertex(sp[i].second.x, sp[i].second.y);//drawing the "second" SpringPoints
    }
    ofEndShape();
    
    //first layer
    ofSetColor(200, 200, 100);//temporary color
    //ofSetColor(255, 241, 0);//temporary color, yellow
    ofBeginShape();
    for(int i = 0; i<sp.size(); i++){

        ofCurveVertex(sp[i].first.x, sp[i].first.y);//drawing the "first" SpringPoints
    }
    ofEndShape();
}

void SpringCircle::setPos(ofVec2f _pos){
    pos = _pos;
}


