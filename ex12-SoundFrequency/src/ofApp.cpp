#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    mySound.load("410574__yummie__game-background-music-loop-short.mp3");
    mySound.setLoop(true);
    mySound.play();
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    int nBands = 32;
    float *mySpectrum=ofSoundGetSpectrum(nBands);
    float width=ofGetWidth()/nBands;
    for(int i=0;i<nBands;i++){
        ofSetColor(ofMap(i,0,nBands,0,255),0,255);
        float posX=ofMap(i,0,nBands,0,ofGetWidth());
        float height=mySpectrum[i]*(i/2+1)*ofGetHeight();
        ofDrawRectangle(posX, ofGetHeight(), width, -height);
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
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

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
