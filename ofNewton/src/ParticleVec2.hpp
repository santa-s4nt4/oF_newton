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
    void update();
    void draw();
    
    ofVec2f position; //位置
    ofVec2f velocity; //速度
    ofVec2f acceleration; //加速度
    float radius; //表示する円の半径
};

#endif /* ParticleVec2_hpp */
