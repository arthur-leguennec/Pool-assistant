#include <cstdlib>
#include <SFML/Graphics.hpp>
#include <iostream>


#include "Window.h"

using namespace std;
//Constructeur par initialisation
Window::Window(string n, int w, int h) : _name(n), _width(w), _height(h), 
                                         _win(new sf::RenderWindow(sf::VideoMode(_width, _height, 32), _name)) 
{ }

//Destructeur
Window::~Window(void) {}

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

        // Affichage du contenu de la fenêtre à l'écran
        _win->display();

    }
}
