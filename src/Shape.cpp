#include "Window.h"
#include "Color.h"
#include "Shape.h"
#include "Vector.h"

Shape::Shape(int x, int y, Color c):_x(x),_y(y),_color(c){}

void Shape::draw() const
{}

void Shape::addVector(Vector * v)
{
	_v=v;
}

void Shape::drawTrajectory()
{
	sf::Vertex line[] =
	{
		//Pour partir du centre du cercle il faudrait rajouter le radius a _x et _y
	    sf::Vertex(sf::Vector2f(_x, _y)),
	    sf::Vertex(_v->getVector())
	};
	_w->getWindow()->draw(line,2,sf::Lines);


}