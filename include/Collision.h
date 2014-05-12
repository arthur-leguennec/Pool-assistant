#ifndef COLLISION
#define COLLISION
#include "Color.h"
#include "Shape.h"
#include "Vector.h"
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include "Circle.h"

class Collision
{  
  public: 
    bool testCollision2balls(Circle &c1, Circle &c2);
    void collision2balls(Circle &c1, Circle &c2);
};  


#endif