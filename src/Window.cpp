#include <cstdlib>
#include <SFML/Graphics.hpp>
#include <iostream>


#include <list>
#include <vector>
#include "Circle.h"
// #include "Rectangle.h"
#include "Shape.h"
#include "Window.h"

using namespace std;
//Constructeur par initialisation
Window::Window(string n, int w, int h) : _name(n), _width(w), _height(h), 
                                         _win(new sf::RenderWindow(sf::VideoMode(_width, _height, 32), _name)) 
{ }

//Destructeur
Window::~Window(void) 
{
  while(!_shapes.empty())
  {
      delete _shapes.back();
      _shapes.pop_back();
  }
}

void Window::display(){
    // Boucle principale
    while (_win->isOpen())
    {
        sf::Event event;
        while (_win->pollEvent(event))
        {
            // Fenêtre fermée : on quitte
            if (event.type == sf::Event::Closed)
                _win->close();
        }

        // Efface l'écran (remplissage avec du noir)
        _win->clear();


        //Afficher cercles, trajectoires...

        //Affiche tout les éléments
        //NE PAS OUBLIER D EN CREER
        drawAll();

        // Affichage du contenu de la fenêtre à l'écran
        _win->display();

    }
}

// fournir une implémentation pour les méthodes drawAll et moveAll
void Window::drawAll(void){
   
  for(uint i = 0; i < _shapes.size(); i++)
  {
    _shapes[i]->setWindow(this);            //Ajout de l'element Window
    _shapes[i]->draw();                 //Appel de Shape.draw();   
  }
}

void Window::addShape(Shape* s)
{
    _shapes.push_back(s);
}
