#ifndef CIRCLE
#define CIRCLE
#include "Color.h"
#include "Shape.h"
#include "Vector.h"
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>

using namespace std;

// class Window;

class Circle :public Shape{
  public :
    Circle(string name, int x, int y, int radius,int mass, Color c);
    Circle(const Circle& c);
    void draw() const;
    int getRadius(){return _radius;}
  private :
    int _radius;
    int _mass;
	
};

#endif