#include "Collision.h"
#include "Circle.h"
#include "Window.h"
#include "Color.h"
#include "Shape.h"
#include "Vector.h"
#include <cmath>
#include <cstdlib>
#include <iostream>

using namespace std;


// Collision ou pas entre 2 boules
bool Collision::testCollision2balls(Circle &c1, Circle &c2)
{
  int x1= c1.getPosX();
  int y1= c1.getPosY();
  int x2= c2.getPosX();
  int y2= c2.getPosY();
  int r1= c1.getRadius();
  int r2= c2.getRadius();
  
  int varX= abs(x1-x2);
  int varY=abs(y1-y2);
  int sumRadius= r1+r2;
  
  return (varX*varX)+(varY*varY)<= (sumRadius*sumRadius);
}


//Collision entre 2 boules
void Collision::collision2balls(Circle &c1, Circle &c2) // c1 immobile et c2 mouvement
{
  int x1= c1.getPosX();
  int y1= c1.getPosY();
  int x2= c2.getPosX();
  int y2= c2.getPosY();
  int dx=x1-x2;
  cout<<"\ndx: "<<dx<< endl;
  int dy=y1-y2;
  cout<<"\ndy: "<<dy<< endl;
  
  if (dx==0 || dy==0 || abs(dx)==abs(dy))  //Si le centre des boules sont alignés sur le meme axe X
  {
  //cout<<"\ndx=0!!!!!!!!!!!!!!!!!! "<< endl;
    
    int dx2=-dx;
    int dy2=-dy;
    for(int i=0; i<6; i++) 
    {
      c2.move(c2,dx2,dy2);   // nouvelle direction de la boule 2
      c1.move(c1,dx,dy);     // nouvelle direction de la boule 1
      
      /*int X1=c2.getPosX();
      cout<<"\nPos X1: "<<X1<< endl;
      int Y1=c2.getPosY();
      cout<<"\nPos Y1: "<<Y1<< endl;
      
      int X2=c1.getPosX();
      cout<<"\nPos X2: "<<X2<< endl;
      int Y2=c1.getPosY();
      cout<<"\nPos Y2: "<<Y2<< endl;*/
    }
  }

  else if((dx!=0) && (dy!=0))  // Si les deux axes sont differents
  {
    cout<<"\ndx et dy !=0!!!!!!!!!!!!!!!!!! "<< endl;
    
    for(int i=0; i<6; i++)  
    {
      int dx2 = -dy;
      int dy2 =  dx;
      c1.move(c1,dx,dy); // nouvelle direction de la boule 1
      c2.move(c2,dx2,dy2); // nouvelle direction de la boule 2
      
      /*int X1=c2.getPosX();
      cout<<"\nPos X1: "<<X1<< endl;
      int Y1=c2.getPosY();
      cout<<"\nPos Y1: "<<Y1<< endl;
      
      int X2=c1.getPosX();
      cout<<"\nPos X2: "<<X2<< endl;
      int Y2=c1.getPosY();
      cout<<"\nPos Y2: "<<Y2<< endl;*/
    }
  }
  
}