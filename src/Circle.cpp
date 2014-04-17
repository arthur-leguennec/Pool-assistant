#include "Circle.h"
#include "Window.h"
#include "Color.h"
#include "Shape.h"


//Methode qui permet d afficher un objet de Circle
void Circle::draw() const
{  
	int r,g,b;
	_color.getRGB(r,g,b);
	sf::CircleShape circle;
	circle.setRadius(_radius);
	circle.setPosition(_x, _y);
	circle.setFillColor(sf::Color(r,g,b));
	_w->getWindow()->draw(circle);
}

//Constructeur par initialisation
Circle::Circle(int x, int y, int radius, int mass, Color c): Shape(x,y,c),_radius(radius),_mass(mass)
{}
//Constructeur par recopie
Circle::Circle(const Circle& c):Shape(c._x,c._y,c._color),_radius(c._radius), _mass(c._mass)
{}