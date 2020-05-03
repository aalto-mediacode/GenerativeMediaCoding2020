#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    ofSetRectMode(OF_RECTMODE_CENTER);
    for(int i=0;i<NUM_SQUARES;i++){
        posV[i]={ofRandomWidth(),ofRandomHeight()};
        size[i]=100;
        myColor[i]=ofRandom(255);
    }
}

//--------------------------------------------------------------
void ofApp::update(){
    float dist[NUM_SQUARES];
    mouseV={mouseX,mouseY};
    for(int i=0;i<NUM_SQUARES;i++){
        dist[i]=glm::distance(posV[i],mouseV);
        if(dist[i]>200){
            posV[i]+=(mouseV-posV[i])/70;
        }else{
            posV[i]-=(mouseV-posV[i])/70;
        }
        size[i]=1000/dist[i]+75;
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    for(int i=0;i<NUM_SQUARES;i++){
        ofSetColor(0,255,myColor[i],50);
        ofDrawRectangle(posV[i],size[i],size[i]);
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
