#ifndef CIRCLE
#define CIRCLE
#include "Color.h"
#include "Shape.h"
#include "Vector.h"
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>

// class Window;

class Circle :public Shape{
  public :
    Circle(int x, int y, int radius,int mass, Color c);
    Circle(const Circle& c);
    void draw() const;
  private :
    int _radius;
    int _mass;
	
};

#endif