// P014_Bucles0-100_V0_Tony.cpp 
// Tony Suarez
// Contar de 1000 a 0 con while, do while y for
// contar a 100 lento
// contar hasta 10x10 

#include <iostream>
#include <windows.h>

int main()
{
    int i = 1000;
    int milesima_de_segundo = 10, s = 1;
    int milesima_de_segundo2 = 500, a = 1;
    int milesima_de_segundo3 = 250, c = 1;
    bool repetir = true;
    bool empezar;
    float b{ 1 };
    bool continuar = true;

    //1000 a 0 con while, do while y for
    while (repetir == true)
    {
        std::cout << "---------------------------------------------------------------------------------\n";
        std::cout << "Bienvenido a este programa que te ayudara a contar\n";
        std::cout << "Contaremos del 1000 al 0 3 veces\n";
        std::cout << "Estas listo?\n0.- No  1.- Si\n";
        std::cin >> empezar;
            
            //while

            while (i > 1)
            {
                std::cout << "Primera parte: ";
                i--;
                std::cout << i << std::endl;
            }
            i = 1000;
                  
            std::cout << "-------------------------------------------------------------------------\n";
            std::cout << "Bien hecho, ahora iremos con la segunda parte:\n";
            //do while

            do
            {
                std::cout << "Segunda parte:  ";
                i--;
                std::cout << i << std::endl;

            } while (i > 1);


            //for
            std::cout << "--------------------------------------------------------------------\n";
            std::cout << "Ahora la tercera parte\n";

            for (int i = 1000; i >= 0; i--)
            {
                Sleep(milesima_de_segundo);
                std::cout << i << std::endl;
            }

            std::cout << "Bien hecho!!\n";

            //For 100 a 0 lento

            std::cout << "-------------------------------\n";
            std::cout << "Ahora contaremos hasta 100 lento\n";

            for (int i = 0; i <= 100; i++)
            {
                Sleep(milesima_de_segundo2);
                std::cout << i << std::endl;
            }

            std::cout << "------------------------------------------------------\n";
            std::cout << "Bien hecho, ahora contaremos de 10 en 10 hasta el 100\n";

            //contar 10x10

            for (i = 0; i <= 100; i += 1)
            {
                Sleep(milesima_de_segundo3);
                std::cout << i << " -";
                if (i == 9)
                {
                    i = 10;
                    std::cout << "\n";
                    std::cout << i << " -";
                }
                if (i == 19)
                {
                    i = 20;
                    std::cout << "\n";
                    std::cout << i << " -";
                }
                if (i == 29)
                {
                    i = 30;
                    std::cout << "\n";
                    std::cout << i << " -";
                }
                if (i == 39)
                {
                    i = 40;
                    std::cout << "\n";
                    std::cout << i << " -";
                }
                if (i == 49)
                {
                    i = 50;
                    std::cout << "\n";
                    std::cout << i << " -";
                }
                if (i == 59)
                {
                    i = 60;
                    std::cout << "\n";
                    std::cout << i << " -";
                }
                if (i == 69)
                {
                    i = 70;
                    std::cout << "\n";
                    std::cout << i << " -";
                }
                if (i == 79)
                {
                    i = 80;
                    std::cout << "\n";
                    std::cout << i << " -";
                }
                if (i == 89)
                {
                    i = 90;
                    std::cout << "\n";
                    std::cout << i << " -";
                }
                if (i == 100)
                {
                    std::cout << "\n";
                }
            }
            std::cout << "--------------------------------------------------------------------------------\n";
            std::cout << "Lo lograste, la practica ha terminado, gracias por interesarte en este programa\n";
            std::cout << "Quieres repetir la practica?\n0.- No\n1.- Si\n";

            std::cin >> repetir;

            std::cout << "-----------------------------------------------\n";
            std::cout << "Espero hayas podido practicar\n";
            std::cout << "Tenga un buen dia :D\n";
        
    }
}


