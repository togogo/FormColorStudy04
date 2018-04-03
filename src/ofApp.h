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
    
        void eraseMe();//erase SpringCircle once out of the screen
        void regenerateMe();//regenraate the SpringCircle that went ouf of the screen
    

        Spring2D test;//test Spring2D
        SpringPoint testSpringPoint;//test SpringPoint
        SpringCircle testSpringCircle;//test SpringCircle
        int numTestSpringCircle = 36;//test number of SpringPoints in SpringCircle
        float rTestSpringCircle = 200;//test radius of SpringCircle
    
        //float gravity = 10.0;//test value
        float gravity = 0.0;
        float mass = 3.0;//test value
        float stiffness = 0.2;//test value
        float damping = 0.8;//test value
    
        //ColorScheme testScheme;//test ColorScheme
    
        int const numOfRoutes = 5;//number of JumpRoutes to depict
        int const numOfDivs = 5;//number of divisions in given JumpRoutes
        float const xBleed = 60;
        float const yBleed = 60;
    
        //vector<JumpRoute> routes;
    
        vector<SpringCircle> circles;//the acutal circles that move around the grid
        float totalSpringCircle = 10;
        float rSpringCircle = 200;//radius of each SpringCircles
        float numSpringCircle = 36;//number of SpringPoints in each of the SpringCircles
    
		
};
