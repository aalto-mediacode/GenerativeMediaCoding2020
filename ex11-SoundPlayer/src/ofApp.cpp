#include "ofApp.h"
//--------------------------------------------------------------
void ofApp::setup(){
    sound1.load("11709__connum__electric-sparks.mp3");
    sound2.load("82986__tim-kahn__countdown.wav");
    volume1=volume2=1;
    speed1=speed2=1;
    sound1.setLoop(true);
    sound2.setMultiPlay(true);
}
//--------------------------------------------------------------
void ofApp::update(){

}
//--------------------------------------------------------------
void ofApp::draw(){
    ofDrawLine(ofGetWidth()/2, 0, ofGetWidth()/2, ofGetHeight());
    ofDrawBitmapString("Volume: "+ofToString(volume1), 10, 10);
    ofDrawBitmapString("Volume: "+ofToString(volume2), ofGetWidth()/2+10, 10);
    ofDrawBitmapString("Speed: "+ofToString(speed1), 10, 20);
    ofDrawBitmapString("Speed: "+ofToString(speed2), ofGetWidth()/2+10, 20);
}
//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    if(x<ofGetWidth()/2){
        volume1=ofMap(y,0,ofGetHeight(),1,0);
        sound1.setVolume(volume1);
        speed1=ofMap(x,0,ofGetWidth()/2,0,2);
        sound1.setSpeed(speed1);
        sound1.play();
    }else{
        volume2=ofMap(y,0,ofGetHeight(),1,0);
        sound2.setVolume(volume2);
        speed2=ofMap(x,ofGetWidth()/2,ofGetWidth(),0,2);
        sound2.setSpeed(speed2);
        sound2.play();
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
