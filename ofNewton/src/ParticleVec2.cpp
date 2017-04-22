//
//  ParticleVec2.cpp
//  ofNewton
//
//  Created by naruse on 2017/04/18.
//
//

#include "ParticleVec2.hpp"

ParticleVec2::ParticleVec2() {
    //初期設定
    friction = 0.01; //摩擦力の初期設定
    radius = 5.0;
    mass = 1.0;
    position = ofVec2f(ofGetWidth()/2.0, ofGetHeight()/2.0);
    velocity = ofVec2f(0, 0);
}

void ParticleVec2::update() {
    acceleration -= velocity * friction; //速度に比例して摩擦力を算出して加速度を変更
    velocity += acceleration;
    position += velocity; //速度から位置を変更
    acceleration.set(0,0);
}

void ParticleVec2::draw() {
    ofDrawCircle(position.x, position.y, radius);
}

void ParticleVec2::addForce(ofVec2f force) {
    acceleration += force / mass; //a = F/m
}

void ParticleVec2::addForce(float forceX, float forceY) {
    acceleration += ofVec2f(forceX, forceY) / mass; //a = F/m
}
