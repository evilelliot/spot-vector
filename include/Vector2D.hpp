#ifndef Vector2D_hpp
#define Vector2D_hpp

#include <vector>
using namespace std;

class Vector2D{
    public:
    static float getAngle(vector<float>, vector<float>);
    static float getMagnitude(float, float);
    static vector<float> getVector();
};

#endif