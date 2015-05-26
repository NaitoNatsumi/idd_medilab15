#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    // 画面基本設定
    ofSetFrameRate(60);
    ofBackground(63);
    
    for (int i = 0; i < RECT_NUM; i++) {
        // ランダムな場所と速度を指定
        position[i].x = ofRandom(ofGetWidth());
        position[i].y = ofRandom(ofGetHeight());
        velocity[i].x = ofRandom(0, 7);
        velocity[i].y = ofRandom(-5, 5);
    }
}

//--------------------------------------------------------------
void ofApp::update(){
    
    //フレームが更新すると、4度ずつ回転する
    angle += 1.0;
    
    for (int i = 0; i < RECT_NUM; i++) {
        // 円の座標を更新
        position[i] += velocity[i];
        
        // 画面からはみ出ないように
        if (position[i].x < 0 || position[i].x > ofGetWidth()) {
            velocity[i].x *= -1;
            ofRotate(45);
        }
        if (position[i].y < 0 || position[i].y > ofGetHeight()) {
            velocity[i].y *= -1;
            ofRotate(45);
        }
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    
    //画面の中心を原点(0,0)にする
    //int i = 0;
    //ofTranslate(ofGetHeight()/2, ofGetWidth()/2);
    //ofRotate(angle);
    //ofRotateX(angle);
    //ofRotateY(angle/10.0);
    //ofRotateZ(angle/3.0);
    
    if (moved(mouseX, mouseY)){
        int i = 0;
        particles[i].addAttractionForce(mouseX, mouseY, 1000, 1.0);
    }

    
    ofSetColor(255);//四角の色
    
   for (int i = 0; i < RECT_NUM; i++) {
       
       ofRect(position[i].x, position[i].y, 15, 15);// 四角を描画
       
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
