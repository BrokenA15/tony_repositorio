// P012_BucleVida_V0_Tony.cpp 
// Tony Suarez
// Gastar 3 vidas, preguntarle al usuario si desea continuar, tendra 100 segundos

#include <iostream>
#include <windows.h>

int main()
{
    int milesima_de_segundo = 250, s = 1;

    bool reiniciar = true;
    bool seguir1 = true;
    bool seguir2 = true;
    bool seguir3 = true;
    int i = 0;

    while (reiniciar == true)
    {
        std::cout << "Has muerto, te quedan 3 vidas\n";
        std::cout << "Deseas continuar\n0.- No\n1.- Si\n";
        std::cin >> seguir1;
        if (seguir1 == true)
        {
            for (int i = 0; i <= 100; i++)
            {
                std::cout << i << std::endl;
                Sleep(milesima_de_segundo);
            }
            std::cout << "Has muerto, te quedan 2 vidas\n";
            std::cout << "Deseas continuar\n0.- No\n1.- Si\n";
            std::cin >> seguir2;
            if (seguir2 == true)
            {
                for (i = 0; i <= 100; i++)
                {
                    std::cout << i << std::endl;
                    Sleep(milesima_de_segundo);
                }
                std::cout << "Has muerto, te queda 1 vida\n";
                std::cout << "Deseas continuar\n0.- No\n1.- Si\n";
                std::cin >> seguir3;
                if (seguir3 == true)
                {
                    for (i = 0; i <= 100; i++)
                    {
                        std::cout << i << std::endl;
                        Sleep(milesima_de_segundo);
                    }
                    std::cout << "Te quedan 0 vidas\n";

                    std::cout << "Deseas repetir el juego?\n0.-No\n1.-Si\n";
                    std::cin >> reiniciar;
                    if (reiniciar == 0)
                    {
                        std::cout << "Gracias por jugar, tenga un buen dia:D\n";
                    }
                }                
                else
                {
                    std::cout << "Gracias por jugar, tenga un buen dia :D\n";
                    return 0;
                }
            }
            else
            {
                std::cout << "Gracias por jugar, tenga un buen dia :D\n";
                return 0;
            }
        }
        else
        {
            std::cout << "Gracias por jugar, tenga un buen dia :D\n";
            return 0;
        }
    }
}