#include "Vector.h"
#include <SFML/Graphics.hpp>

Vector::Vector(int x, int y) : _vect(sf::Vector2f(x,y)){}

void Vector::setVector(int x, int y)
{
	_vect.x = x;
	_vect.y = y;
}