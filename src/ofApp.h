#pragma once

#include "ofMain.h"
#include "JumpPoint.hpp"
#include "JumpRoute.hpp"
#include "Spring2D.hpp"
#include "SpringPoint.hpp"
#include "SpringCircle.hpp"
//#include "ColorPalette.hpp"
//#include "ColorScheme.hpp"


class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    
        //from study 01
        Spring2D test;//test Spring2D
        SpringPoint testSpringPoint;//test SpringPoint
        SpringCircle testSpringCircle;//test SpringCircle
        int numTestSpringCircle = 100;//test number of SpringPoints in SpringCircle
        float rTestSpringCircle = 200;//test radius of SpringCircle
    
        //float gravity = 10.0;//test value
        float gravity = 0.0;
        float mass = 3.0;//test value
        float stiffness = 0.2;//test value
        float damping = 0.8;//test value
    
    
        //from study 02
        //ColorScheme testScheme;//test ColorScheme
    
        //from study 03
        int const numOfRoutes = 6;//number of JumpRoutes to depict
        int const numOfDivs = 6;//number of divisions in given JumpRoutes
        float const xBleed = -65;
        float const yBleed = 65;
    
        vector<JumpRoute> routes;
    
        vector<SpringCircle> circles;//the acutal circles that move around the grid
        float rSpringCircle = 50;//radius of each SpringCircles
        float numSpringCircle = 100;//number of SpringPoints in each of the SpringCircles
    
		
};
