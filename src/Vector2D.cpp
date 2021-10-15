#include "../include/Vector2D.hpp"
#include <iostream>
#include <math.h>
using namespace std;

float Vector2D::getAngle(vector<float> v, vector<float> w){
    float x = 0, y = 0, _x = 0, _y = 0;
    if(v.size() == 2 && w.size() == 2){
         x = v[0];   y = v[1];
        _x = w[0]; _y = w[1];
        float dotProduct  = x*_x + y*_y;     
        float determinate = x*_y - y*_x;      
        float angle = atan2(determinate, dotProduct);

        return angle;
    }else{
        return 1.1;
    }
}
float Vector2D::getMagnitude(float x, float y){
    return sqrt(pow(x,2)+pow(y,2));
}
vector<float> Vector2D::getVector(){
    vector<float> v;
    return v;
}