#ifndef WINDOW
#define WINDOW

#include <cstdlib>
#include <SFML/Graphics.hpp>

using namespace std;

class Window
{
  private :
    string _name;
    int _width, _height;
    sf::RenderWindow * _win;
    
  public :
    Window(string n="Window", int w=700, int h=500);
    ~Window(void);
    
    void display(void);


};

#endif
