#include <cstdlib>
#include <SFML/Graphics.hpp>
#include "Window.h"
#include "Color.h"
#include "Circle.h"
#include <iostream>
// #include "Rectangle.h"


int main()
{
    // Fenêtre de rendu
    Window app("Pool2D", 600, 600);

	int x=300;
	int y=300;
	int radius = 50;
	int mass = 0;
	int r = 255;
	int g = 40;
	int b = 255;
	Color c(r,g,b);
	Circle * circ = new Circle(x,y,radius,mass,c);
	app.addShape(circ);	//on ajoute l'element cree a l objet WIndow


    // Affichage du contenu de la fenêtre à l'écran        
    app.display();

    return EXIT_SUCCESS;
}
