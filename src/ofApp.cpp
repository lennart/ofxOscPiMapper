#include "ofApp.h"

void ofApp::setup(){
	ofBackground(0);
	mapper.setup();
        receiver.setup(9999);
	
#ifdef TARGET_RASPBERRY_PI
	ofSetFullscreen(true);
#endif
}

void ofApp::update(){
	mapper.update();
        while(receiver.hasWaitingMessages()) {
          ofxOscMessage m;
          receiver.getNextMessage(m);
          if (m.getAddress() == "/toggle_pause") {
            mapper.togglePause();
          }
          else if (m.getAddress() == "/next_source") {
            mapper.setNextSource();
          }          
          else {
            ofLog() << "received unknown message" << m.getAddress();
          }
        }
}

void ofApp::draw(){
	mapper.draw();
}

void ofApp::keyPressed(int key){
	mapper.keyPressed(key);
}

void ofApp::keyReleased(int key){
	mapper.keyReleased(key);
}

void ofApp::mousePressed(int x, int y, int button){
	mapper.mousePressed(x, y, button);
}

void ofApp::mouseReleased(int x, int y, int button){
	mapper.mouseReleased(x, y, button);
}

void ofApp::mouseDragged(int x, int y, int button){
	mapper.mouseDragged(x, y, button);
}

