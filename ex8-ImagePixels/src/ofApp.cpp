#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    myPhoto.load("753px-Helsinki_July_2013-27a.jpg");
    myPixels=myPhoto.getPixels();
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    //original image
    ofSetColor(127);
    myPhoto.draw(0,0);
    //new version of the image
    float zoom=ofMap(mouseX,0,ofGetWidth(),0,2);
    float size=5;
    for(int x=0;x<myPhoto.getWidth();x+=size){
        for(int y=0;y<myPhoto.getHeight();y+=size){
            ofSetColor(myPixels.getColor(x, y));
            ofDrawCircle(x*zoom, y*zoom, size/2*zoom);
        }
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
