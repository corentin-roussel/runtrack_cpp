#ifndef VECTOR
#define VECTOR

#include "../src/main.cpp"
#include <cmath>

class vector
{
private:
    double x_ = 0.0;
    double y_ = 0.0;
public:
    vector(/* args */);
    ~vector();

    double operator+()
    {
        return vector::x_ + vector::y_;
    }


    double operator-()
    {
        return vector::x_ - vector::y_;
    }

    double distance(vector& vec)
    {
        double x = vector::x_ - vec.x_;
        double y = vector::y_ - vec.y_;

        double dist;
        dist = pow(x,2) + pow(y,2);
        dist = sqrt(dist);

        return dist;
    }

    //GETTERS & SETTERS
    double getX() { return x_ ;}
    void setX(double x) { x_ = x; }

    double getY() { return y_ ;}
    void setX(double y) { y_ = y; }

};

#endif