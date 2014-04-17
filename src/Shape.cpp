#include "Window.h"
#include "Color.h"
#include "Shape.h"

Shape::Shape(int x, int y, Color c):_x(x),_y(y),_color(c)
{}

void Shape::draw() const
{}