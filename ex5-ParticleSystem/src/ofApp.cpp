#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetCircleResolution(100);
    ofBackground(0);
}

//--------------------------------------------------------------
void ofApp::update(){
    //set up the particle
    glm::vec2 mouseV={mouseX,mouseY};
    if(mouseX!=0){
        Particle newParticle;//1. create a new particle
        newParticle.setup(mouseV);//2. run its setup() function
        myParticle.push_back(newParticle);//3. add it to the vector
    }
    //update the particle
    for(int i=0;i<myParticle.size();i++){
        myParticle[i].update();
        //removing particles if they cross pixel x -100
        if(myParticle[i].posV.x<-100){
            myParticle.erase(myParticle.begin()+i);
            cout << myParticle.size() << endl;
        }
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    for(int i=0;i<myParticle.size();i++){
        myParticle[i].draw();
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
