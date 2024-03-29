#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255, 255, 255);
    
    
    //load colors
    myColorScheme.loadColors();
    
    ofHideCursor();
    
    for(int i = 0; i < totalSpringCircle; i++){
        SpringCircle tempSpringCircle;
        tempSpringCircle.setup(ofVec2f(ofRandom(-rSpringCircle, ofGetWidth() + rSpringCircle), -ofRandom(100, 150)), ofRandom(rSpringCircle - 10, rSpringCircle +10), numSpringCircle);
        //circles.push_back(tempSpringCircle);
    }
    
    
    /*
    for(int i = 0; i<numOfRoutes; i++){
        for(int j = 0; j<numOfDivs; j++){
            SpringCircle tempSpringCircle;
            tempSpringCircle.setup(ofVec2f(i*3*ofGetHeight()/numOfRoutes - xBleed, j*3*ofGetHeight()/numOfDivs - yBleed), rSpringCircle, numSpringCircle);
            circles.push_back(tempSpringCircle);
        }
        
    }
    */
    
//    for(int i = 0; i < numOfRoutes; i++){
//        JumpRoute tempJumpRoute;
//        tempJumpRoute.setup(ofVec2f(0 - xBleed, i*ofGetHeight()/numOfRoutes) + yBleed, ofVec2f(ofGetWidth() + xBleed, i*ofGetHeight()/numOfRoutes + yBleed), numOfDivs);
//        tempJumpRoute.setTick(0);
//        routes.push_back(tempJumpRoute);
//        
//        SpringCircle tempSpringCircle;
//        tempSpringCircle.setup(routes[i].jumpPoint[0].pos, rSpringCircle, numSpringCircle);
//        circles.push_back(tempSpringCircle);
        
        
//        for(int j = 0; j < numOfDivs; j++){
////            JumpRoute tempJumpRoute;
////            tempJumpRoute.setup(ofVec2f(0 - xBleed, i*ofGetHeight()/numOfRoutes) + yBleed, ofVec2f(ofGetWidth() + xBleed, i*ofGetHeight()/numOfRoutes + yBleed), numOfDivs);
////            tempJumpRoute.setTick(j);
////            routes.push_back(tempJumpRoute);
////
////            SpringCircle tempSpringCircle;
////            tempSpringCircle.setup(routes[i].jumpPoint[j].pos, rSpringCircle, numSpringCircle);
////            circles.push_back(tempSpringCircle);
//
//        }
    


    
    //ofHideCursor();//duplicate
    //test.setup(0.0, ofGetScreenWidth() / 2, mass, gravity, stiffness, damping);
    //testSpringPoint.setup();
    //testSpringCircle.setup(ofVec2f(mouseX, mouseY), rTestSpringCircle, numTestSpringCircle);
    ofVec2f putMe;
    putMe.set(ofGetWidth()/2, ofGetHeight()/2);
    testSpringCircle.setup(putMe, rTestSpringCircle, numTestSpringCircle);

}

//--------------------------------------------------------------
void ofApp::update(){
    testSpringCircle.update();
    testSpringCircle.setPos(ofVec2f(mouseX, mouseY));
    
//    for(int i = 0; i < numOfRoutes*numOfDivs; i++){
//        circles[i].update();
//    }
    
    for(int i = 0; i < circles.size(); i++){
        circles[i].update();
    }
    
    eraseMe();
    //regenerateMe();
}

void ofApp::eraseMe(){
    for(int i = 0; i < circles.size(); i++){
        //cout << circles[0].pos.y << endl;
        if(circles[i].velocity > 2000){
            //cout << "I'm deleting yo" << endl;
            circles.erase(circles.begin());
            
            SpringCircle tempSpringCircle;
            tempSpringCircle.setup(ofVec2f(ofRandom(-rSpringCircle, ofGetWidth() + rSpringCircle), -100), rSpringCircle, numSpringCircle);
            tempSpringCircle.setThreeColors(myColorScheme.returnRandColorFromRandPalette(), myColorScheme.returnRandColorFromRandPalette(), myColorScheme.returnRandColorFromRandPalette());
            circles.push_back(tempSpringCircle);
        }
    }
    
}

void ofApp::regenerateMe(){

    //circles[i].resetPhysics();
    //circles[i].setPos(ofVec2f(ofRandom(-rSpringCircle, ofGetWidth() + rSpringCircle), -100));
}

//--------------------------------------------------------------
void ofApp::draw(){
    
//    for(int i = 0; i < numOfRoutes*numOfDivs; i++){
//        //routes[i].draw();
//        circles[i].drawSurface();
//    }
    
    for(int i = 0; i < circles.size(); i++){
        //routes[i].draw();
        circles[i].drawSurface();
    }
    
    //myColorScheme.showColors();
    
    
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
    
    testSpringCircle.setPos(ofVec2f(testSpringCircle.pos.x, testSpringCircle.pos.y));
    
    
//    ofColor tempFirstLayerColor = myColorScheme.returnRandColorFromRandPalette();
//    ofColor tempSecondLayerColor = myColorScheme.returnRandColorFromRandPalette();
//    ofColor tempThirdLayerColor = myColorScheme.returnRandColorFromRandPalette();
    
    
    SpringCircle tempSpringCircle;
    ofVec2f tempVec;
    tempVec.set(ofRandom(0, ofGetWidth()), ofRandom(-100, -150));
    tempSpringCircle.setup(tempVec, ofRandom(rSpringCircle - 10, rSpringCircle +10), numSpringCircle);
    tempSpringCircle.setThreeColors(myColorScheme.returnRandColorFromRandPalette(), myColorScheme.returnRandColorFromRandPalette(), myColorScheme.returnRandColorFromRandPalette());
    //tempSpringCircle.setThreeColors(myColorScheme.blueSunset.returnRandColor(), myColorScheme.blueSunset.returnRandColor(), myColorScheme.blueSunset.returnRandColor());
    circles.push_back(tempSpringCircle);
    
//    for(int i = 0; i < numOfRoutes*numOfDivs; i++){
//        //routes[i].forward();
//        //circles[i].setPos(routes[i].returnActiveJumpPointPos());
//        circles[i].setPos(ofVec2f(circles[i].pos.x + rSpringCircle, circles[i].pos.y + rSpringCircle));
//    }
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){
    SpringCircle tempSpringCircle;
    tempSpringCircle.setup(ofVec2f(ofRandom(-rSpringCircle, ofGetWidth() + rSpringCircle), -100), rSpringCircle, numSpringCircle);
    circles.push_back(tempSpringCircle);

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
