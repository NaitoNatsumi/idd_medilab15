#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    ofSetFrameRate(60);
    ofSetCircleResolution(64);
    for (int i=0;i <100 ; i++) {
        position[i].x = ofRandom(ofGetWidth());
        position[i].x = ofRandom(ofGetWidth());
        velocity[i].y = ofRandom(-5, 5);
        velocity[i].y = ofRandom(-5, 5);
    }

}

//--------------------------------------------------------------
void ofApp::update(){

     for (int i=0;i <100 ; i++) {
     position[i]  += velocity[i];
     }
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(255);
     for (int i = 0; i < 100 ; i++) {
         ofCircle(position[i].x, position[i].y, 20);
     }
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

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

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
