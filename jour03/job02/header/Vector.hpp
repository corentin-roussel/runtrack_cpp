#ifndef VECTOR
#define VECTOR

#include <cmath>

class Vector
{
private:
    double x_ = 0.0;
    double y_ = 0.0;
public:
    Vector(/* args */);
    ~Vector();

    double operator+()
    {
        return Vector::x_ + Vector::y_;
    }


    double operator-()
    {
        return Vector::x_ - Vector::y_;
    }

    double distance(Vector& vec)
    {
        double x = Vector::x_ - vec.x_;
        double y = Vector::y_ - vec.y_;

        double dist;
        dist = pow(x,2) + pow(y,2);
        dist = sqrt(dist);

        return dist;
    }

    //GETTERS & SETTERS
    double getX() { return x_ ;}
    void setX(double x) { x_ = x; }

    double getY() { return y_ ;}
    void setY(double y) { y_ = y; }

};

#endif