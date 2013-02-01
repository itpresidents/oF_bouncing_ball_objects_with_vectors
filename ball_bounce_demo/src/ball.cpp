//
//  ball.cpp
//  ball_bounce_demo
//
//  Created by Nick Yulman on 2/1/13.
//
//

#include "ball.h"

//constructor

ball::ball(){

    //initialize random positions
    xPos = ofRandom(ofGetWidth());
     yPos = ofRandom(ofGetHeight());
    
    
     diam = 50;//set size of ball
    
    //set random speeds from the ball
    xSpeed = ofRandom(.05,.08);
    ySpeed = xSpeed;
    
    //set random color for ball
    color = ofColor(ofRandom(255),ofRandom(255),ofRandom(255));
  

}


void ball::update(){
    
    //move the ball's x & y positions;
    xPos+=xSpeed;
    yPos+=ySpeed;
    
    //check for a collision with the edges of the window
    
    if(xPos - diam/2<0 || xPos + diam/2>ofGetWidth()){
        xSpeed *=-1;
        
        
       
        
        
    }
    
   if(yPos - diam<0 || yPos + diam>ofGetHeight()){
       ySpeed *=-1;xPos;
       
       
        }



}

void ball::updateNum(int _n){
    number = ofToString(_n);

}

void ball::draw(){
    
    
    ofSetColor(color);
    ofEllipse(xPos, yPos, diam, diam);
    ofSetColor(255);
    ofDrawBitmapString(number, xPos,yPos);


}