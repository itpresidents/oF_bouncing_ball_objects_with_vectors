#include "testApp.h"
#include <iostream>

//--------------------------------------------------------------
void testApp::setup(){
    ofBackground(20);
    
    //let's populate our
    for(int i = 0; i<3; i++){
        ball b;
        balls.push_back(b);
    }
}

//--------------------------------------------------------------
void testApp::update(){
    
    
    //iterate through all of the balls in the vector
    for(int i = 0; i<balls.size(); i++){
        balls[i].updateNum(i); // keep track of which number each ball is in the vector
        
        balls[i].update();//update the position of the balls and check for collision with sides (all of this happens in the ball object's update method)
    }
}

//--------------------------------------------------------------
void testApp::draw(){
    
    //iterate through all of the balls in the vector
    for(int i = 0; i<balls.size(); i++){
             balls[i].draw();
    }

    ofDrawBitmapString("spacebar: add a ball", 100,ofGetHeight()-100);
     ofDrawBitmapString("'f': remove ball from front of vector (first element)", 100,ofGetHeight()-75);
    
ofDrawBitmapString("'b': remove ball from back of vector (last element)", 100,ofGetHeight()-50);
    
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

    
    //hit the spacebar to add a new ball to the vector
    if(key == ' '){
        ball b;
        balls.push_back(b);
        
        
        cout<<"there are now "<<balls.size()<<" balls"<<endl;//print # of palls
   }
    
    //hit 'f' to remove a ball from the front of the vector
    
    if(key == 'f' && balls.size()!=0){
        balls.erase(balls.begin());
        
        cout<<"removed ball from the front of the vector"<<endl;
        cout<<"there are now "<<balls.size()<<" balls"<<endl;
 }
    //hit 'b' to remove a ball from the back of the vector
    if(key == 'b'&& balls.size()!=0){
        balls.pop_back();
        
         cout<<"removed ball from the back of the vector"<<endl;
        cout<<"there are now "<<balls.size()<<" balls"<<endl;
        
        
    }

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}