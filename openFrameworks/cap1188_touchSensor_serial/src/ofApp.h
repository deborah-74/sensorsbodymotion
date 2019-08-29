#pragma once

#include "ofMain.h"

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
    
        ofTrueTypeFont		font;
        
        bool		bSendSerialMessage;			// a flag for sending serial
        char		bytesRead[16];				// data from serial, we will be trying to read 16
        char		bytesReadString[17];		// a string needs a null terminator, so we need 16 + 1 bytes
        int			nBytesRead;					// how much did we read?
        int			nTimesRead;					// how many times did we read?
        int         rectSize;                   // size to draw rects
    
        ofSerial	serial;
		
};
