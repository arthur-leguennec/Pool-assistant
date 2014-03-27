#include <cstdlib>
#include <SFML/Graphics.hpp>
#include "Window.h"


int main()
{
    // Fenêtre de rendu
    Window app("Pool2D", 600, 600);

    // Affichage du contenu de la fenêtre à l'écran
        
    app.display();

    return EXIT_SUCCESS;
}
