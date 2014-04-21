#ifndef SHAPE_H
#define SHAPE_H

#include "Vector.h"
#include "Color.h"
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>

class Window;
class Vector;

class Shape{
	protected :
		int _x;
		int _y;
		Color _color;
		Window * _w;
		Vector * _v;
	public:
		Shape(int x, int y,Color c);
		virtual void draw() const;
		void drawTrajectory();
		inline void setWindow(Window * w){_w = w;}
		void addVector(Vector * v);

};
#endif