//レシピ

#pragma once

#include "ofMain.h"
#include "ParticleVec2.h"

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
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    
    // アニメーションする四角の数を指定
    static const int RECT_NUM = 40;
    // 位置
    ofVec2f position[RECT_NUM];
    
    // 速度
    ofVec2f velocity[RECT_NUM];
    
    float angle; //回転角度
    
    static const int num = 50000;;
    ParticleVec2 particles[num];
    ofVboMesh mesh;
    bool moved;
};
