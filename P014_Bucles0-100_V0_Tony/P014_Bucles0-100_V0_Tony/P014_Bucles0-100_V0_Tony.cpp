// P014_Bucles0-100_V0_Tony.cpp 
// Tony Suarez
// Contar de 1000 a 0 con while, do while y for
// contar a 100 lento
// contar hasta 10x10 

#include <iostream>
#include <windows.h>

int main()
{
    int i = 0;
    int milesima_de_segundo = 1000, s = 1;
    int milesima_de_segundo2 = 500, a = 1;
    int milesima_de_segundo3 = 250, c = 1;
    bool repetir = true;
    float b{1};
    bool continuar = true;

 //1000 a 0 con while, do while y for
    while (repetir == true)
    {
        std::cout << "---------------------------------------------------------------------------------\n";
        std::cout << "Bienvenido a este programa que te ayudara a reforzar tu pronunciacion de numeros\n";
        std::cout << "Contaremos de 1000 a 0 en 3 modalidades\n";
        std::cout << "Empezaremos con la modalidad manual\n";
        std::cout << "Escribiras del 1000 hasta el 0 practicando su pronunciacion\n";
        std::cout << "Cuando hayas terminado escribe el numero 1001\n";
        //while

        while (1000 >= b)
        {
            
            std::cin >> b;
        }

        std::cout << "-------------------------------------------------------------------------\n";
        std::cout << "Bien hecho, ahora iremos con la segunda modalidad, una velocidad rapida\n";
        //do while

        do
        {
            for (int i = 1000; i >= 0; i--)
            {
                std::cout << i << std::endl;
                Sleep(milesima_de_segundo3);
            }
            std::cout << "Gustas repetir esta modalidad?\n0.- No\n1.- Si\n";
            std::cin >> continuar;
        } while (continuar == true);


        //for
        std::cout << "--------------------------------------------------------------------\n";
        std::cout << "Ahora contaremos con una modalidad de velocidad lenta hasta el 1000\n";

        for (int i = 1000; i >= 0; i--)
        {
            Sleep(milesima_de_segundo);
            std::cout << i << std::endl;
        }

        std::cout << "Bien hecho!!\n";

        //For 100 a 0 lento
        
        std::cout << "-------------------------------\n";
        std::cout << "Ahora cuenta conmigo hasta 100\n";

        for (int i = 0; i <= 100; i++)
        {
            Sleep(milesima_de_segundo2);
            std::cout << i << std::endl;
        }

        std::cout << "------------------------------------------------------\n";
        std::cout << "Bien hecho, ahora contaremos de 10 en 10 hasta el 100";

        //contar 10x10

        for (int i = -10; i <= 100; i = i + 10)
        {
            Sleep(milesima_de_segundo2);
            std::cout << i << std::endl;
        }

        std::cout << "--------------------------------------------------------------------------------\n";
        std::cout << "Lo lograste, la practica ha terminado, gracias por interesarte en este programa\n";
        std::cout << "Quieres repetir la practica?\n0.- No\n1.- Si\n";

        std::cin >> repetir;
        
        std::cout << "-----------------------------------------------\n";
        std::cout << "Espero hayas podido practicar tu pronunciacion\n";
        std::cout << "Tenga un buen dia :D\n";   
    }
}
