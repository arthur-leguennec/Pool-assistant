#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
#include "Vector.h"
#include "Color.h"
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>

using namespace std;

class Window;
class Vector;

class Shape{
	protected :
		string _name;
		int _x;
		int _y;
		Color _color;
		Window * _w;
		Vector * _v;
	public:
		Shape(string name, int x, int y,Color c);
		virtual void draw() const;
		void drawTrajectory();
		inline void setWindow(Window * w){_w = w;}
		void addVector(Vector * v);
		inline Vector * getVector(){return _v;}
		inline string getName(){return _name;}
		int getPosX(void) const {return _x;} // obtenir position en x	
		int getPosY(void) const {return _y;} // obtenir position en y
		void setPosX(int x);
		void setPosY(int y);
		void move(Shape &s,int dx, int dy);

};
#endif