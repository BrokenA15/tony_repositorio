// P010_Condicionales_v0_Tony.cpp 
// Tony Suarez
//Login de un videojuego, Cuenta y contraseña

#include <iostream>
#include <string>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8");
    std::string nombre;
    std::string clave1;
    std::string clave2;
    std::string numero;
    std::string usuario1;
    std::string usuario2;
    bool reintentar = true;

    std::cout << "Bienvenido a Purified Soul\n";
    std::cout << "Para comenzar esta aventura primero deberas crear tu cuenta\n";
    std::cout << "Ingresa tu nombre\n";
    getline(std::cin, nombre);
    std::cout << "Agrega tu numero de telefono\n";
    getline(std::cin, numero);
    std::cout << "Crea un usuario por favor\n";
    std::cout << "Ten en cuenta que este sera el nombre que tendras en el juego\n";
    getline(std::cin, usuario1);
    std::cout << "Finalmente crea tu clave de jugador\n";
    getline(std::cin, clave1);
    std::cout << "Perfecto, tu cuenta ha sido creada, por favor inicia sesion para comenzar a jugar\n";
    std::cout << "Usuario\n";

    std::cin >> usuario2;


    if (usuario1 == usuario2)
    {

        {
            std::cout << "Muy bien, Ahora pon tu clave de jugador\n";
            std::cin >> clave2;
        }


        if (clave1 == clave2)
        {
            std::cout << "Perfecto, disfruta Purified Soul, no olvides guardar tu progreso\n";
        }

        else
        {
            while (clave1 != clave2)
            {
                std::cout << "La clave de jugador es incorrecta\n";
                std::cout << "Vuelva a intentarlo\n";
                std::cin >> clave2;
                if (clave1 == clave2)
                {
                    std::cout << "Perfecto, disfruta Purified Soul, no olvides guardar tu progreso\n";
                }
            }

        }
    }
    else
    {
        while (usuario1 != usuario2)
        {
            std::cout << "El usuario es incorrecto, vuelve a intentarlo\n";
            std::cin >> usuario2;
            if (usuario1 == usuario2)
            {
                std::cout << "Muy bien, Ahora pon tu clave de jugador\n";
                std::cin >> clave2;
            }

            if (clave1 == clave2)
            {
                std::cout << "Perfecto, disfruta Purified Soul, no olvides guardar tu progreso\n";
            }
            else
            {
                while (clave1 != clave2)
                {
                    std::cout << "La clave de jugador es incorrecta\n";
                    std::cout << "Vuelva a intentarlo\n";
                    std::cin >> clave2;
                    if (clave1 == clave2)
                    {
                        std::cout << "Perfecto, disfruta Purified Soul, no olvides guardar tu progreso\n";
                    }

                }


            }

        }


    }
}
