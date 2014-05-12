#include <cstdlib>
#include <SFML/Graphics.hpp>
#include "Window.h"
#include "Color.h"
#include "Circle.h"
#include <iostream>
#include "Collision.h"
#include "Vector.h"
// #include "Rectangle.h"

using namespace std;

int main()
{
    // Fenêtre de rendu
    Window app("Pool-assistant", 600, 600);

    std::string name = "Circle";
    int mass = 0;

int x1 = 100;  // Point de depart de la boule 1
	int y1 = 100;
	int radius1 = 10;
	int r1 = 255; //Blanche
	int g1 = 255;
	int b1 = 255;
	Color c1(r1,g1,b1);
 	Vector  *v1 = new Vector(x1,y1);
	Circle *circ1 = new Circle(name,x1,y1,radius1,mass,c1);
 	circ1 -> addVector(v1);
	app.addShape(circ1);	//on ajoute l'element cree a l objet Window
	
	//Création d'un cercle virtuel pour tracer la trajectoire
 	Vector  * v1_2 = new Vector(x1,y1);
	Circle * circ1_2 = new Circle(name,x1,y1,radius1,mass,c1);
 	circ1_2 -> addVector(v1_2);
	app.addShape(circ1_2);
	
	
	
	int x2 = 400; // Point de depart de la boule 2
	int y2 = 390;
	int radius2 = 10;
	int r2 = 255;//Rouge
	int g2 = 0;
	int b2 = 0;
	Color c2(r2,g2,b2);
 	Vector *v2 = new Vector(x2,y2);
	Circle *circ2 = new Circle(name,x2,y2,radius2,mass,c2);
 	circ2 -> addVector(v2);
	app.addShape(circ2);   //on ajoute l'element cree a l objet Window
	
	//Création d'un cercle virtuel pour tracer la trajectoire
	Vector *v2_2 = new Vector(x2,y2);
	Circle *circ2_2 = new Circle(name,x2,y2,radius2,mass,c2);
 	circ2_2->addVector(v2_2);
	app.addShape(circ2_2);


	
	
	
	int dxCanne = 1;  //Déduite de la caméra
	int dyCanne = 1;	 //Déduite de la caméra
	bool Resultat = false;

	while(!Resultat)
	{
	    circ1 -> move(*circ1,dxCanne,dyCanne);  //boule  en mouvement (0,2) sa direction
	    Collision collision;
	    Resultat = collision.testCollision2balls(*circ1,*circ2);    // True si la boule 1 rencontre la boule 2
	    cout<<"Collision: "<<Resultat<< endl;
	    
	    int X = circ1->getPosX();
	    cout<<"\nPos X: "<<X<< endl;
	    int Y = circ1->getPosY();
	    cout<<"\nPos Y: "<<Y<< endl;
	     
	    if (Resultat){ 
	      *v1 = Vector(X, Y);           //Trajectoire depuis le point d'impact (faire plus le rayon pour plus de précision)
	      *v1_2 = Vector(X, Y);
	      *v2 = Vector(X, Y);
	      *v2_2 = Vector(X, Y);
	      Collision collision;
	      collision.collision2balls(*circ2, *circ1);  // effet de collision entre les deux boules
	    }						  //première immobile deuxieme en mouvement 

	  }
    // Affichage du contenu de la fenêtre à l'écran        
    app.display();

    return EXIT_SUCCESS;
}
