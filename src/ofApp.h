#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
    //functions
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
		
    //data
    bool left, right, up, down = false;
    float x = 400;
    float y = 400;
    float circleX = 200;
    float circleY =200;
    float playerX = 200;
    float playerY =200;
    
    //Initializing Array
    //Declaring Array
    ofVec2f playerPos = ofVec2f(0, 400);
    
};
