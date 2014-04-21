#ifndef VECTOR_H
#define VECTOR_H
#include <SFML/Graphics.hpp>

class Vector{
private:
	sf::Vector2f _vect;

public:
	Vector(int x,int y);
	sf::Vector2f getVector(void) const{return _vect;}

};

#endif