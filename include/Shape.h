#ifndef SHAPE_H
#define SHAPE_H

#include "Color.h"
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>

class Window;

class Shape{
	protected :
		int _x;
		int _y;
		Color _color;
		Window * _w;
	public:
		Shape(int x, int y, Color c);
		virtual void draw() const;
		inline void setWindow(Window * w){_w = w;}

};
#endif