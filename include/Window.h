#ifndef WINDOW
#define WINDOW

#include <vector>
#include <cstdlib>
#include <SFML/Graphics.hpp>

using namespace std;

class Rectangle;
class Circle;
class Shape;

class Window
{
  private :
    string _name;
    int _width, _height;
    sf::RenderWindow * _win;
    vector<Shape *> _shapes;

  public :
    Window(string n="Window", int w=700, int h=500);
    ~Window(void);

    sf::RenderWindow * getWindow(void) const { return _win; }
    
    void display(void);
    void drawAll(void);
    void addShape(Shape* s);


};

#endif
