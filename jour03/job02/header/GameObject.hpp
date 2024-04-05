#include "Vector.hpp"

class GameObject : public Vector
{
private:
    /* data */
public:
    GameObject(/* args */);
    ~GameObject();

    virtual void draw() = 0;

    virtual void update() = 0;
};


