#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255, 255, 255);
    
    //from study 03
    ofHideCursor();
    
    for(int i = 0; i < numOfRoutes; i++){
        JumpRoute tempJumpRoute;
        tempJumpRoute.setup(ofVec2f(0 - xBleed, i*ofGetHeight()/numOfRoutes) + yBleed, ofVec2f(ofGetWidth() + xBleed, i*ofGetHeight()/numOfRoutes + yBleed), numOfDivs);
        tempJumpRoute.setTick(0);
        routes.push_back(tempJumpRoute);
        
        SpringCircle tempSpringCircle;
        tempSpringCircle.setup(routes[i].jumpPoint[0].pos, rSpringCircle, numSpringCircle);
        circles.push_back(tempSpringCircle);
        
        
        for(int j = 0; j < numOfDivs; j++){
//            JumpRoute tempJumpRoute;
//            tempJumpRoute.setup(ofVec2f(0 - xBleed, i*ofGetHeight()/numOfRoutes) + yBleed, ofVec2f(ofGetWidth() + xBleed, i*ofGetHeight()/numOfRoutes + yBleed), numOfDivs);
//            tempJumpRoute.setTick(j);
//            routes.push_back(tempJumpRoute);
//
//            SpringCircle tempSpringCircle;
//            tempSpringCircle.setup(routes[i].jumpPoint[j].pos, rSpringCircle, numSpringCircle);
//            circles.push_back(tempSpringCircle);
            
        }
        
        
        

        
        
    
    }
    
    //from study 02
    //testScheme.setupPalette();
    //testScheme.loadColors();
    
    //from study 01
    
    //ofHideCursor();//duplicate
    //test.setup(0.0, ofGetScreenWidth() / 2, mass, gravity, stiffness, damping);
    //testSpringPoint.setup();
    testSpringCircle.setup(ofVec2f(mouseX, mouseY), rTestSpringCircle, numTestSpringCircle);

}

//--------------------------------------------------------------
void ofApp::update(){
    //from study 01
        //testSpringCircle.update();
    
    for(int i = 0; i < numOfRoutes; i++){
        circles[i].update();
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    //from study 03
    for(int i = 0; i < numOfRoutes; i++){
        //routes[i].draw();
        circles[i].drawSurface();
    }
    
    //from study 02
    //testScheme.showColors();
    
    //from study 01
    //testSpringCircle.drawSurface();

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

    //from study 03
    for(int i = 0; i < numOfRoutes; i++){
        routes[i].forward();
        circles[i].setPos(routes[i].returnActiveJumpPointPos());
    }
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
