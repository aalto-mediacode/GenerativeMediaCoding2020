#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    myVideoGrabber.initGrabber(640,480);
    myInvertedPixels.allocate(myVideoGrabber.getWidth(), myVideoGrabber.getHeight(), OF_PIXELS_RGB);
    myTexture.allocate(myInvertedPixels);
}

//--------------------------------------------------------------
void ofApp::update(){
    myVideoGrabber.update();
    ofPixels myPixels = myVideoGrabber.getPixels();
    for(int i=0;i<myPixels.size();i++){
        myInvertedPixels[i]=255-myPixels[i];
    }
    myTexture.loadData(myInvertedPixels);
}

//--------------------------------------------------------------
void ofApp::draw(){
    myVideoGrabber.draw(0,0);
    myTexture.draw(myVideoGrabber.getWidth(),0);
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
