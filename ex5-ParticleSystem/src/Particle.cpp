#include "Particle.hpp"

void Particle::setup(glm::vec2 originV){
    posV=originV;//posV is position vector
    velV={ofRandom(2,4),ofRandom(-2,2)};//velV is velocity vector
    accelV={0.2,0};//accelV is the acceleration vector
}

void Particle::update(){
    velV+=accelV;//increment velocity with acceleration
    posV+=velV;//same as posV = posV+velV
    if(posV.x>ofGetWidth()-50){
        velV.x*=-1;
        accelV.x*=-1;
    }
}

void Particle::draw(){
    ofSetColor(255, 0, 255,50);
    ofDrawCircle(posV,50);
}
