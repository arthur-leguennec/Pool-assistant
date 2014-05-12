#include "Window.h"
#include "Color.h"
#include "Shape.h"
#include "Vector.h"
#include "Circle.h"
#include <iostream>

using namespace std;

Shape::Shape(string name, int x, int y, Color c):_name(name), _x(x),_y(y),_color(c){}

void Shape::draw() const
{}

void Shape::addVector(Vector * v)
{
	_v=v;
}

void Shape::drawTrajectory()
{
	if(_name == "Circle")
    {
	    	Circle *c = dynamic_cast<Circle *>(this);
	    	int radius = c->getRadius();
	    
		sf::Vertex line[] =
		{
			//Pour partir du centre du cercle il faudrait rajouter le radius a _x et _y
		    sf::Vertex(sf::Vector2f(_x + radius, _y + radius)),
		    sf::Vertex(_v->getVector())
		};

		_w->getWindow()->draw(line,2,sf::Lines);
	}


}

void Shape::setPosX(int x){ _x=x; }
void Shape::setPosY(int y){ _y=y; }

// Methode pour mettre la boule en mouvement
void Shape::move(Shape &s,int dx, int dy)
{
 int x= s.getPosX();
 int y= s.getPosY();
 x=x+dx;
 y=y+dy;
// usleep(100000);
 s.setPosX(x);
 s.setPosY(y);
}