#include <cstdlib>
#include <SFML/Graphics.hpp>
#include "Window.h"
#include "Color.h"
#include "Circle.h"
#include <iostream>
#include "Vector.h"
// #include "Rectangle.h"

using namespace std;

int main()
{
    // Fenêtre de rendu
    Window app("Pool-assistant", 600, 600);

	int x=300;
	int y=300;
	int radius = 50;
	int mass = 0;
	int r = 255;
	int g = 40;
	int b = 255;
	string name = "Circle";
	Color c(r,g,b);
	Vector  * v = new Vector(200,200);	//10,10 indique la position, c'est moyen
	Circle * circ = new Circle(name,x,y,radius,mass,c);
	circ->addVector(v);
	app.addShape(circ);	//on ajoute l'element cree a l objet WIndow

    // Affichage du contenu de la fenêtre à l'écran        
    app.display();

    return EXIT_SUCCESS;
}
