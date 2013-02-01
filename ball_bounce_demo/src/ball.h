//
//  ball.h
//  ball_bounce_demo
//
//  Created by Nick Yulman on 2/1/13.
//
//

#ifndef __ball_bounce_demo__ball__
#define __ball_bounce_demo__ball__

#include <iostream>
#include "ofMain.h"

class ball {
    
    
public:
    //variables
    float xPos;
    float yPos;
    int diam;
    string number;
    
    
    float xSpeed;
    float ySpeed;
    
    ofColor color;

    
    //constructor
    ball();
    
    //methods
    void update();
    void draw();
    void updateNum(int _n);
    
    
};


#endif /* defined(__ball_bounce_demo__ball__) */


