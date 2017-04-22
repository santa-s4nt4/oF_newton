//
//  ParticleVec2.hpp
//  ofNewton
//
//  Created by naruse on 2017/04/18.
//
//

#ifndef ParticleVec2_hpp
#define ParticleVec2_hpp

#include <stdio.h>
#include "ofMain.h"

class ParticleVec2 {
public:
    ParticleVec2(); //コンストラクタ
    void setup(ofVec2f position, ofVec2f velocity);
    void setup(float positionX, float positionY, float velocityX, float velocityY);
    void update();
    void draw();
    
    //物体に力を加える(ベクトル版とX,Y版)
    void addForce(ofVec2f force);
    void addForce(float forceX, float forceY);
    
    ofVec2f position; //位置
    ofVec2f velocity; //速度
    ofVec2f acceleration; //加速度
    float radius; //表示する円の半径
    float friction; //摩擦力
    float mass; //質量
};

#endif /* ParticleVec2_hpp */
