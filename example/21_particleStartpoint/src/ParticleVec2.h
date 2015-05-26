#pragma once
#include "ofMain.h"

class ParticleVec2 {
public:
    ParticleVec2();
    void update();
    void draw();
    void addForce(ofVec2f force);
<<<<<<< HEAD
<<<<<<< HEAD
    
    ofVec2f velocity;
    ofVec2f acceration;
=======
=======
>>>>>>> tado/master
    void bounceOffWalls();
    
    ofVec2f velocity;
    ofVec2f acceleration;
<<<<<<< HEAD
>>>>>>> tado/master
=======
>>>>>>> tado/master
    ofVec2f position;
    float mass;
    float radius;
    float friction;
};