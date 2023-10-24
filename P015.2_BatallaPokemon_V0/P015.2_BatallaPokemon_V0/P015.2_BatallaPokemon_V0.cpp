// P015_BatallaPokemon_V0_Tony.cpp 
// Tony Suarez
// Hacer la interfaz de una batalla pokemon
// Hacer un simulador de una batalla pokemon

#include <iostream>
#include <windows.h>
#include <locale.h>
#include <mmsystem.h>
#include <string>
#include <conio.h>

int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8");
    int tiempo1 = 50, s1 = 1;
    int tiempo2 = 150, s2 = 1;
    int pokemon1;
    int pokemon2;
    int dec1;
    int dec2;
    std::string character1;
    std::string character2;
    int hp1 = 50;
    int hp2 = 50;
    int atk;
    int baya;
    bool tutorial;
    bool reptuto = true;
    bool tutoelement;
    bool repsim;
    int rival;



    do
    {
        std::cout << "---------------------------------------------------------------------------------\n";
        std::cout << "Bienvenido al simulador de batalla Pokemon\n";
        std::cout << "En este simulador podras encontrar varios pokemones para escoger\n";
        std::cout << "Despues de escoger tu Pokemon escogeras a tu rival y empezara el combate pokemon\n";
        std::cout << "Dime, ¿Tienes alguna duda sobre como funcionan los combates pokemon?\n0.- No  1.- Si\n";
        std::cin >> tutorial;

        if (tutorial == true)
        {
            while (reptuto == true)
            {
                std::cout << "----------------------------------------------------------------------------------------------------------------\n";
                std::cout << "Muy bien, empecemos por lo basico:\n";
                std::cout << "\n";
                std::cout << "Cada pokemon tiene un elemento y este mismo es fuerte o debil contra ciertos elementos\n";
                std::cout << "Ademas, cada pokemon tiene su propia lista de ataques los cuales son normales o elementales\n";
                std::cout << "Los ataques normales tienen un 100% de probabilidad de acertar\n";
                std::cout << "Mientras que los elementales tienen un 75% de probabilidad de acertar\n";
                std::cout << "Al momento de la pelea tendras 5 opciones:\n";
                std::cout << "\n";
                std::cout << "--------------\n";
                std::cout << "-- ATACAR ----\n";
                std::cout << "-- BOLSA -----\n";
                std::cout << "-- HUIR ------\n";
                std::cout << "--------------\n";
                std::cout << "\n";
                std::cout << "-La opción 'Atacar' como ya mencione anteriormente, te permitira escoger entre 2 ataques normales o 2 elementales\n";
                std::cout << "-La opción 'Bolsa' te servira para escoger objetos los cuales te ayudaran a curarte\n";
                std::cout << " Sin embargo, solo tendras 1 objeto de cada uno, usalos con precaucion\n";
                std::cout << " No se podra usar en la primera ronda\n";
                std::cout << "-La opción 'Huir' te saca automaticamente del combate y te regresara al inicio del simulador\n";
                std::cout << " Solo se podra usar en la primera ronda\n";
                std::cout << "\n";
                std::cout << "Eso es todo lo que tienes que saber de los combates pokemon\n";
                std::cout << "-----------------------------------------------------------------------------------------------\n";
                std::cout << "¿Quieres que te de una lista de los elementos y contra cual es fuerte y debil?\n0.- No  1.- Si\n";
                std::cin >> tutoelement;

                if (tutoelement == true)
                {
                    std::cout << "-----------------------------------------\n";
                    std::cout << "-- ELEMENTO  --  FUERTE   --   DEBIL   --\n";
                    std::cout << "-----------------------------------------\n";
                    std::cout << "--   FUEGO   --   HIELO   --   AGUA    --\n";
                    std::cout << "--   AGUA    --   FUEGO   --  PLANTA   --\n";
                    std::cout << "-- FANTASMA  --   HADA    -- FANTASMA  --\n";
                    std::cout << "--  VENENO   --  PLANTA   --  TIERRA   --\n";
                    std::cout << "-- ELECTRICO --   AGUA    --  TIERRA   --\n";
                    std::cout << "--   HIELO   -- VOLADOR   --   FUEGO   --\n";
                    std::cout << "-- PSIQUICO  --  VENENO   -- FANTASMA  --\n";
                    std::cout << "--  VOLADOR  --  PLANTA   -- ELECTRICO --\n";
                    std::cout << "--  TIERRA   -- ELECTRICO --   HIELO   --\n";
                    std::cout << "--  PLANTA   --   ROCA    --  VENENO   --\n";
                    std::cout << "--  NORMAL   --   NADA    --   LUCHA   --\n";
                    std::cout << "--   HADA    --   LUCHA   --  VENENO   --\n";
                    std::cout << "--   ROCA    --   HIELO   --   AGUA    --\n";
                    std::cout << "--   LUCHA   --  NORMAL   --  VOLADOR  --\n";
                    std::cout << "-----------------------------------------\n";


                }

                std::cout << "Deseas repetir el tutorial?\n0.- No  1.- Si\n";
                std::cin >> reptuto;

            }
        }

        std::cout << "-----------------------------------------------------\n";
        std::cout << "Muy bien, Ahora escoge a tu Pokemon\n";
        std::cout << "Las opciones son:\n";
        std::cout << "1.- Charizard  2.- Vaporeon\n";
        std::cout << "Dime entrenador, ¿Qué pokemon escogeras?\n";
        std::cin >> pokemon1;

        switch (pokemon1)
        {
        case 1:
            std::cout << "--------------------------------------\n";
            std::cout << "Has escogido a Charizard\n";
            std::cout << "El rival para este pokemon es:\n";
            std::cout << "1.- Articuno\n";
            std::cout << "Presiona '1' para continuar\n";         
            std::cin >> pokemon2;

            switch (pokemon2)
            {
            case 1:
                std::cout << "-------------------------\n";
                std::cout << "Tu rival es Articuno!\n";
                std::cout << "-------------------------\n";
                std::cout << "\n";
                std::cout << "Te has encontrado a un Articuno salvaje\n";
                std::cout << "¿Qué quieres hacer?\n";
                std::cout << "\n";
                std::cout << "---------------------------------------\n";
                std::cout << "-- 1.- ATACAR --------- 2.- HUIR ------\n";
                std::cout << "---------------------------------------\n";
                std::cout << "\n";
                std::cout << "-----\n";
                std::cout << "-- ";
                std::cin >> dec1;
                std::cout << "\n";

                switch (dec1)
                {
                case 1:
                    std::cout << "----------------------\n";
                    std::cout << "Has escogido ATACAR\n";
                    std::cout << "¿Qué ataque deseas realizar?\n";
                    std::cout << "--------------------------------\n";
                    std::cout << "-- 1.- NORMAL -- 2.- ESPECIAL --\n";
                    std::cout << "--------------------------------\n";
                    std::cout << "\n";
                    std::cout << "-----\n";
                    std::cout << "-- ";
                    std::cin >> atk;
                    std::cout << "\n";

                    switch (atk)
                    {
                    case 1:
                        std::cout << "------------------------------\n";
                        std::cout << "Has escogido el ataque NORMAL\n";
                        std::cout << "Dañas al rival con Cuchillada\n";
                        std::cout << "Le haces 25 de daño\n";
                        std::cout << "--------------------------------------\n";

                        for (int hp1 = 50; hp1 >= 25; hp1--)
                        {
                            std::cout << "La vida del rival ha descendido a: " << hp1 << std::endl;
                            Sleep(tiempo1);
                        }
                        std::cout << "------------------------\n";
                        std::cout << "-------- 25 HP ---------\n";
                        std::cout << "------------------------\n";
                        std::cout << "Es el turno de Articuno!\n";
                        std::cout << "------------------------\n";
                        std::cout << "\n";
                        std::cout << "--------------------------------\n";
                        std::cout << "Articuno escogio ATAQUE\n";
                        std::cout << "Articuno usa su ataque ESPECIAL\n";
                        std::cout << "Articuno te daña con Ventisca\n";
                        std::cout << "Te hace 30 de daño\n";
                        std::cout << "--------------------------------\n";


                        for (int hp2 = 50; hp2 >= 20; hp2--)
                        {
                            std::cout << "Tu vida ha descendido a: " << hp2 << std::endl;
                            Sleep(tiempo2);
                        }
                        std::cout << "------------------------\n";
                        std::cout << "-------- 20 HP ---------\n";
                        std::cout << "------------------------\n";
                        std::cout << "Es tu turno!\n";
                        std::cout << "¿Qué quieres hacer?\n";
                        std::cout << "---------------------------------------\n";
                        std::cout << "-- 1.- ATACAR --------- 2.- BOLSA -----\n";
                        std::cout << "---------------------------------------\n";
                        std::cout << "\n";
                        std::cout << "-----\n";
                        std::cout << "-- ";
                        std::cin >> dec1;
                        std::cout << "\n";

                        switch (dec1)
                        {
                        case 1:
                            std::cout << "----------------------\n";
                            std::cout << "Has escogido ATACAR\n";
                            std::cout << "¿Qué ataque deseas realizar?\n";
                            std::cout << "--------------------------------\n";
                            std::cout << "-- 1.- NORMAL -- 2.- ESPECIAL --\n";
                            std::cout << "--------------------------------\n";
                            std::cout << "\n";
                            std::cout << "-----\n";
                            std::cout << "-- ";
                            std::cin >> atk;
                            std::cout << "\n";

                            if (atk == 1)
                            {
                                std::cout << "---------------------\n";
                                std::cout << "Has escogido el ataque NORMAL\n";
                                std::cout << "Dañas al rival con Agarre\n";
                                std::cout << "Le haces 25 de daño\n";
                                std::cout << "--------------------------------------\n";

                                for (int hp1 = 25; hp1 >= 0; hp1--)
                                {
                                    std::cout << "La vida del rival ha descendido a: " << hp1 << std::endl;
                                    Sleep(tiempo1);
                                }
                                std::cout << "------------------------\n";
                                std::cout << "--------- 0 HP ---------\n";
                                std::cout << "------------------------\n";
                                std::cout << "\n";
                                std::cout << "Has derrotado a Articuno!\n";
                                std::cout << "-------------------------\n";
                                std::cout << "Has ganado el combate pokemon!\n";
                                std::cout << "FELICIDADES!!\n";

                            }
                            else
                            {
                                std::cout << "-----------------------------------------------------\n";
                                std::cout << "Has escogido el ataque ESPECIAL\n";
                                std::cout << "Aciertas tu ataque y dañas al rival con Fuego sagrado\n";
                                std::cout << "Le haces 50 de daño\n";
                                std::cout << "-----------------------------------------------------\n";

                                for (int hp1 = 25; hp1 >= 0; hp1--)
                                {
                                    std::cout << "La vida del rival ha descendido a: " << hp1 << std::endl;
                                    Sleep(tiempo1);
                                }
                                std::cout << "------------------------\n";
                                std::cout << "--------- 0 HP ---------\n";
                                std::cout << "------------------------\n";
                                std::cout << "\n";
                                std::cout << "Has derrotado a Articuno!\n";
                                std::cout << "-------------------------\n";
                                std::cout << "Has ganado el combate pokemon!\n";
                                std::cout << "FELICIDADES!!\n";

                            }

                            break;

                        case 2:
                            std::cout << "----------------------\n";
                            std::cout << "Has escogido BOLSA\n";
                            std::cout << "1.- Tienes 1 Baya Frambu - 50 HP\n";
                            std::cout << "2.- Tienes 1 Baya Latano - 25 HP\n";
                            std::cout << "¿Qué Baya deseas usar?\n";
                            std::cin >> baya;

                            if (baya == 1)
                            {
                                std::cout << "Has escogido Baya Frambu\n";

                                for (int hp2 = 20; hp2 <= 50; hp2++)
                                {
                                    std::cout << "Tu vida ha aumentado a: " << hp2 << std::endl;
                                    Sleep(tiempo2);
                                }

                                std::cout << "------------------------\n";
                                std::cout << "-------- 50 HP ---------\n";
                                std::cout << "------------------------\n";
                                std::cout << "\n";
                                std::cout << "Es el turno de Articuno!\n";
                                std::cout << "------------------------\n";
                                std::cout << "\n";
                                std::cout << "--------------------------------\n";
                                std::cout << "Articuno escogio ATAQUE\n";
                                std::cout << "Articuno usa su ataque NORMAL\n";
                                std::cout << "Articuno te daña con Arañazo\n";
                                std::cout << "Te hace 25 de daño\n";
                                std::cout << "--------------------------------\n";


                                for (int hp2 = 50; hp2 >= 25; hp2--)
                                {
                                    std::cout << "Tu vida ha descendido a: " << hp2 << std::endl;
                                    Sleep(tiempo2);
                                }
                                std::cout << "------------------------\n";
                                std::cout << "-------- 25 HP ---------\n";
                                std::cout << "------------------------\n";
                                std::cout << "Es tu turno!\n";
                                std::cout << "¿Qué quieres hacer?\n";
                                std::cout << "---------------------------------------\n";
                                std::cout << "-- 1.- ATACAR --------- 2.- BOLSA -----\n";
                                std::cout << "---------------------------------------\n";
                                std::cout << "\n";
                                std::cout << "-----\n";
                                std::cout << "-- ";
                                std::cin >> dec1;
                                std::cout << "\n";

                                switch (dec1)
                                {
                                case 1:

                                    std::cout << "----------------------\n";
                                    std::cout << "Has escogido ATACAR\n";
                                    std::cout << "¿Qué ataque deseas realizar?\n";
                                    std::cout << "--------------------------------\n";
                                    std::cout << "-- 1.- NORMAL -- 2.- ESPECIAL --\n";
                                    std::cout << "--------------------------------\n";
                                    std::cout << "\n";
                                    std::cout << "-----\n";
                                    std::cout << "-- ";
                                    std::cin >> atk;
                                    std::cout << "\n";

                                    if (atk == 1)
                                    {
                                        std::cout << "---------------------\n";
                                        std::cout << "Has escogido el ataque NORMAL\n";
                                        std::cout << "Dañas al rival con Agarre\n";
                                        std::cout << "Le haces 25 de daño\n";
                                        std::cout << "--------------------------------------\n";

                                        for (int hp1 = 25; hp1 >= 0; hp1--)
                                        {
                                            std::cout << "La vida del rival ha descendido a: " << hp1 << std::endl;
                                            Sleep(tiempo1);
                                        }
                                        std::cout << "------------------------\n";
                                        std::cout << "--------- 0 HP ---------\n";
                                        std::cout << "------------------------\n";
                                        std::cout << "\n";
                                        std::cout << "Has derrotado a Articuno!\n";
                                        std::cout << "-------------------------\n";
                                        std::cout << "Has ganado el combate pokemon!\n";
                                        std::cout << "FELICIDADES!!\n";

                                    }
                                    else
                                    {
                                        std::cout << "-----------------------------------------------------\n";
                                        std::cout << "Has escogido el ataque ESPECIAL\n";
                                        std::cout << "Aciertas tu ataque y dañas al rival con Fuego sagrado\n";
                                        std::cout << "Le haces 50 de daño\n";
                                        std::cout << "-----------------------------------------------------\n";

                                        for (int hp1 = 25; hp1 >= 0; hp1--)
                                        {
                                            std::cout << "La vida del rival ha descendido a: " << hp1 << std::endl;
                                            Sleep(tiempo1);
                                        }
                                        std::cout << "------------------------\n";
                                        std::cout << "--------- 0 HP ---------\n";
                                        std::cout << "------------------------\n";
                                        std::cout << "\n";
                                        std::cout << "Has derrotado a Articuno!\n";
                                        std::cout << "-------------------------\n";
                                        std::cout << "Has ganado el combate pokemon!\n";
                                        std::cout << "FELICIDADES!!\n";

                                    }

                                    break;


                                case 2:
                                    std::cout << "----------------------\n";
                                    std::cout << "Has escogido BOLSA\n";
                                    std::cout << "1.- Tienes 0 Baya Frambu - 50 HP\n";
                                    std::cout << "2.- Tienes 1 Baya Latano - 25 HP\n";
                                    std::cout << "¿Qué Baya deseas usar?\n";
                                    std::cin >> baya;

                                    if (baya == 2)
                                    {
                                        std::cout << "Has escogido Baya Latano\n";

                                        for (int hp2 = 25; hp2 <= 50; hp2++)
                                        {
                                            std::cout << "Tu vida ha aumentado a: " << hp2 << std::endl;
                                            Sleep(tiempo2);
                                        }
                                        std::cout << "------------------------\n";
                                        std::cout << "-------- 50 HP ---------\n";
                                        std::cout << "------------------------\n";
                                        std::cout << "\n";
                                        std::cout << "Es el turno de Articuno!\n";
                                        std::cout << "------------------------\n";
                                        std::cout << "\n";
                                        std::cout << "--------------------------------\n";
                                        std::cout << "Articuno escogio ATAQUE\n";
                                        std::cout << "Articuno usa su ataque NORMAL\n";
                                        std::cout << "Articuno te daña con Cabezazo\n";
                                        std::cout << "Te hace 25 de daño\n";
                                        std::cout << "--------------------------------\n";


                                        for (int hp2 = 50; hp2 >= 25; hp2--)
                                        {
                                            std::cout << "Tu vida ha descendido a: " << hp2 << std::endl;
                                            Sleep(tiempo2);
                                        }
                                        std::cout << "------------------------\n";
                                        std::cout << "-------- 25 HP ---------\n";
                                        std::cout << "------------------------\n";
                                        std::cout << "Es tu turno!\n";
                                        std::cout << "¿Qué quieres hacer?\n";
                                        std::cout << "---------------------------------------\n";
                                        std::cout << "-------------- 1.- ATACAR -------------\n";
                                        std::cout << "---------------------------------------\n";
                                        std::cout << "\n";
                                        std::cout << "-----\n";
                                        std::cout << "-- ";
                                        std::cin >> dec1;
                                        std::cout << "\n";

                                        switch (dec1)
                                        {
                                        case 1:
                                            std::cout << "----------------------\n";
                                            std::cout << "Has escogido ATACAR\n";
                                            std::cout << "¿Qué ataque deseas realizar?\n";
                                            std::cout << "--------------------------------\n";
                                            std::cout << "-- 1.- NORMAL -- 2.- ESPECIAL --\n";
                                            std::cout << "--------------------------------\n";
                                            std::cout << "\n";
                                            std::cout << "-----\n";
                                            std::cout << "-- ";
                                            std::cin >> atk;
                                            std::cout << "\n";

                                            if (atk == 1)
                                            {
                                                std::cout << "---------------------\n";
                                                std::cout << "Has escogido el ataque NORMAL\n";
                                                std::cout << "Dañas al rival con Agarre\n";
                                                std::cout << "Le haces 25 de daño\n";
                                                std::cout << "--------------------------------------\n";

                                                for (int hp1 = 25; hp1 >= 0; hp1--)
                                                {
                                                    std::cout << "La vida del rival ha descendido a: " << hp1 << std::endl;
                                                    Sleep(tiempo1);
                                                }
                                                std::cout << "------------------------\n";
                                                std::cout << "--------- 0 HP ---------\n";
                                                std::cout << "------------------------\n";
                                                std::cout << "\n";
                                                std::cout << "Has derrotado a Articuno!\n";
                                                std::cout << "-------------------------\n";
                                                std::cout << "Has ganado el combate pokemon!\n";
                                                std::cout << "FELICIDADES!!\n";

                                            }
                                            else
                                            {
                                                std::cout << "-----------------------------------------------------\n";
                                                std::cout << "Has escogido el ataque ESPECIAL\n";
                                                std::cout << "Aciertas tu ataque y dañas al rival con Fuego sagrado\n";
                                                std::cout << "Le haces 50 de daño\n";
                                                std::cout << "-----------------------------------------------------\n";

                                                for (int hp1 = 25; hp1 >= 0; hp1--)
                                                {
                                                    std::cout << "La vida del rival ha descendido a: " << hp1 << std::endl;
                                                    Sleep(tiempo1);
                                                }
                                                std::cout << "------------------------\n";
                                                std::cout << "--------- 0 HP ---------\n";
                                                std::cout << "------------------------\n";
                                                std::cout << "\n";
                                                std::cout << "Has derrotado a Articuno!\n";
                                                std::cout << "-------------------------\n";
                                                std::cout << "Has ganado el combate pokemon!\n";
                                                std::cout << "FELICIDADES!!\n";
                                            }

                                            break;
                                        }

                                    }
                                    else
                                    {
                                        std::cout << "Has escogido Baya Latano\n";

                                        for (int hp2 = 20; hp2 <= 50; hp2++)
                                        {
                                            std::cout << "Tu vida ha aumentado a: " << hp2 << std::endl;
                                            Sleep(tiempo2);
                                        }

                                        std::cout << "------------------------\n";
                                        std::cout << "-------- 50 HP ---------\n";
                                        std::cout << "------------------------\n";
                                        std::cout << "\n";
                                        std::cout << "Es el turno de Articuno!\n";
                                        std::cout << "------------------------\n";
                                        std::cout << "\n";
                                        std::cout << "--------------------------------\n";
                                        std::cout << "Articuno escogio ATAQUE\n";
                                        std::cout << "Articuno usa su ataque NORMAL\n";
                                        std::cout << "Articuno te daña con Arañazo\n";
                                        std::cout << "Te hace 25 de daño\n";
                                        std::cout << "--------------------------------\n";


                                        for (int hp2 = 50; hp2 >= 25; hp2--)
                                        {
                                            std::cout << "Tu vida ha descendido a: " << hp2 << std::endl;
                                            Sleep(tiempo2);
                                        }
                                        std::cout << "------------------------\n";
                                        std::cout << "-------- 25 HP ---------\n";
                                        std::cout << "------------------------\n";
                                        std::cout << "Es tu turno!\n";
                                        std::cout << "¿Qué quieres hacer?\n";
                                        std::cout << "---------------------------------------\n";
                                        std::cout << "-- 1.- ATACAR --------- 2.- BOLSA -----\n";
                                        std::cout << "---------------------------------------\n";
                                        std::cout << "\n";
                                        std::cout << "-----\n";
                                        std::cout << "-- ";
                                        std::cin >> dec1;
                                        std::cout << "\n";

                                        switch (dec1)
                                        {
                                        case 1:

                                            std::cout << "----------------------\n";
                                            std::cout << "Has escogido ATACAR\n";
                                            std::cout << "¿Qué ataque deseas realizar?\n";
                                            std::cout << "--------------------------------\n";
                                            std::cout << "-- 1.- NORMAL -- 2.- ESPECIAL --\n";
                                            std::cout << "--------------------------------\n";
                                            std::cout << "\n";
                                            std::cout << "-----\n";
                                            std::cout << "-- ";
                                            std::cin >> atk;
                                            std::cout << "\n";

                                            if (atk == 1)
                                            {
                                                std::cout << "---------------------\n";
                                                std::cout << "Has escogido el ataque NORMAL\n";
                                                std::cout << "Dañas al rival con Agarre\n";
                                                std::cout << "Le haces 25 de daño\n";
                                                std::cout << "--------------------------------------\n";

                                                for (int hp1 = 25; hp1 >= 0; hp1--)
                                                {
                                                    std::cout << "La vida del rival ha descendido a: " << hp1 << std::endl;
                                                    Sleep(tiempo1);
                                                }
                                                std::cout << "------------------------\n";
                                                std::cout << "--------- 0 HP ---------\n";
                                                std::cout << "------------------------\n";
                                                std::cout << "\n";
                                                std::cout << "Has derrotado a Articuno!\n";
                                                std::cout << "-------------------------\n";
                                                std::cout << "Has ganado el combate pokemon!\n";
                                                std::cout << "FELICIDADES!!\n";

                                            }
                                            else
                                            {
                                                std::cout << "-----------------------------------------------------\n";
                                                std::cout << "Has escogido el ataque ESPECIAL\n";
                                                std::cout << "Aciertas tu ataque y dañas al rival con Fuego sagrado\n";
                                                std::cout << "Le haces 50 de daño\n";
                                                std::cout << "-----------------------------------------------------\n";

                                                for (int hp1 = 25; hp1 >= 0; hp1--)
                                                {
                                                    std::cout << "La vida del rival ha descendido a: " << hp1 << std::endl;
                                                    Sleep(tiempo1);
                                                }
                                                std::cout << "------------------------\n";
                                                std::cout << "--------- 0 HP ---------\n";
                                                std::cout << "------------------------\n";
                                                std::cout << "\n";
                                                std::cout << "Has derrotado a Articuno!\n";
                                                std::cout << "-------------------------\n";
                                                std::cout << "Has ganado el combate pokemon!\n";
                                                std::cout << "FELICIDADES!!\n";

                                            }

                                            break;


                                        case 2:
                                            std::cout << "----------------------\n";
                                            std::cout << "Has escogido BOLSA\n";
                                            std::cout << "1.- Tienes 1 Baya Frambu - 50 HP\n";
                                            std::cout << "2.- Tienes 0 Baya Latano - 25 HP\n";
                                            std::cout << "¿Qué Baya deseas usar?\n";
                                            std::cin >> baya;

                                            if (baya == 2)
                                            {
                                                std::cout << "Has escogido Baya Frambu\n";

                                                for (int hp2 = 25; hp2 <= 50; hp2++)
                                                {
                                                    std::cout << "Tu vida ha aumentado a: " << hp2 << std::endl;
                                                    Sleep(tiempo2);
                                                }
                                                std::cout << "------------------------\n";
                                                std::cout << "-------- 50 HP ---------\n";
                                                std::cout << "------------------------\n";
                                                std::cout << "\n";
                                                std::cout << "Es el turno de Articuno!\n";
                                                std::cout << "------------------------\n";
                                                std::cout << "\n";
                                                std::cout << "--------------------------------\n";
                                                std::cout << "Articuno escogio ATAQUE\n";
                                                std::cout << "Articuno usa su ataque NORMAL\n";
                                                std::cout << "Articuno te daña con Cabezazo\n";
                                                std::cout << "Te hace 25 de daño\n";
                                                std::cout << "--------------------------------\n";


                                                for (int hp2 = 50; hp2 >= 25; hp2--)
                                                {
                                                    std::cout << "Tu vida ha descendido a: " << hp2 << std::endl;
                                                    Sleep(tiempo2);
                                                }
                                                std::cout << "------------------------\n";
                                                std::cout << "-------- 25 HP ---------\n";
                                                std::cout << "------------------------\n";
                                                std::cout << "Es tu turno!\n";
                                                std::cout << "¿Qué quieres hacer?\n";
                                                std::cout << "---------------------------------------\n";
                                                std::cout << "-- 1.- ATACAR --------- 2.- BOLSA -----\n";
                                                std::cout << "-- 3.- BARRERA -------- 4.- POKEBOLA --\n";
                                                std::cout << "---------------------------------------\n";
                                                std::cout << "\n";
                                                std::cout << "-----\n";
                                                std::cout << "-- ";
                                                std::cin >> dec1;
                                                std::cout << "\n";

                                                switch (dec1)
                                                {
                                                case 1:
                                                    std::cout << "----------------------\n";
                                                    std::cout << "Has escogido ATACAR\n";
                                                    std::cout << "¿Qué ataque deseas realizar?\n";
                                                    std::cout << "--------------------------------\n";
                                                    std::cout << "-- 1.- NORMAL -- 2.- ESPECIAL --\n";
                                                    std::cout << "--------------------------------\n";
                                                    std::cout << "\n";
                                                    std::cout << "-----\n";
                                                    std::cout << "-- ";
                                                    std::cin >> atk;
                                                    std::cout << "\n";

                                                    if (atk == 1)
                                                    {
                                                        std::cout << "---------------------\n";
                                                        std::cout << "Has escogido el ataque NORMAL\n";
                                                        std::cout << "Dañas al rival con Agarre\n";
                                                        std::cout << "Le haces 25 de daño\n";
                                                        std::cout << "--------------------------------------\n";

                                                        for (int hp1 = 25; hp1 >= 0; hp1--)
                                                        {
                                                            std::cout << "La vida del rival ha descendido a: " << hp1 << std::endl;
                                                            Sleep(tiempo1);
                                                        }
                                                        std::cout << "------------------------\n";
                                                        std::cout << "--------- 0 HP ---------\n";
                                                        std::cout << "------------------------\n";
                                                        std::cout << "\n";
                                                        std::cout << "Has derrotado a Articuno!\n";
                                                        std::cout << "-------------------------\n";
                                                        std::cout << "Has ganado el combate pokemon!\n";
                                                        std::cout << "FELICIDADES!!\n";

                                                    }
                                                    else
                                                    {
                                                        std::cout << "-----------------------------------------------------\n";
                                                        std::cout << "Has escogido el ataque ESPECIAL\n";
                                                        std::cout << "Aciertas tu ataque y dañas al rival con Fuego sagrado\n";
                                                        std::cout << "Le haces 50 de daño\n";
                                                        std::cout << "-----------------------------------------------------\n";

                                                        for (int hp1 = 25; hp1 >= 0; hp1--)
                                                        {
                                                            std::cout << "La vida del rival ha descendido a: " << hp1 << std::endl;
                                                            Sleep(tiempo1);
                                                        }
                                                        std::cout << "------------------------\n";
                                                        std::cout << "--------- 0 HP ---------\n";
                                                        std::cout << "------------------------\n";
                                                        std::cout << "\n";
                                                        std::cout << "Has derrotado a Articuno!\n";
                                                        std::cout << "-------------------------\n";
                                                        std::cout << "Has ganado el combate pokemon!\n";
                                                        std::cout << "FELICIDADES!!\n";
                                                    }

                                                    break;

                                                case 2:

                                                    std::cout << "Ya no tienes objetos en la BOLSA\n";

                                                    break;

                                                case 3:

                                                    std::cout << "Has escogido BARRERA\n";
                                                    std::cout << "Te quedan 2 barreras\n";
                                                    std::cout << "Gastas una barrera para bloquear el siguiente ataque rival\n";
                                                    std::cout << "\n";
                                                    std::cout << "Articuno escogio ATAQUE\n";
                                                    std::cout << "Articuno usa su ataque NORMAL\n";
                                                    std::cout << "Articuno te daña con Cabezazo\n";
                                                    std::cout << "Te hace 25 de daño\n";
                                                    std::cout << "--------------------------------\n";


                                                    for (int hp2 = 50; hp2 >= 25; hp2--)
                                                    {
                                                        std::cout << "Tu vida ha descendido a: " << hp2 << std::endl;
                                                        Sleep(tiempo2);
                                                    }
                                                    std::cout << "------------------------\n";
                                                    std::cout << "-------- 25 HP ---------\n";
                                                    std::cout << "------------------------\n";
                                                    std::cout << "Es tu turno!\n";
                                                    std::cout << "¿Qué quieres hacer?\n";
                                                    std::cout << "---------------------------------------\n";
                                                    std::cout << "-- 1.- ATACAR --------- 2.- BOLSA -----\n";
                                                    std::cout << "-- 3.- BARRERA -------- 4.- POKEBOLA --\n";
                                                    std::cout << "---------------------------------------\n";
                                                    std::cout << "\n";
                                                    std::cout << "-----\n";
                                                    std::cout << "-- ";
                                                    std::cin >> dec1;
                                                    std::cout << "\n";

                                                    switch (dec1)
                                                    {
                                                    case 1:
                                                        std::cout << "----------------------\n";
                                                        std::cout << "Has escogido ATACAR\n";
                                                        std::cout << "¿Qué ataque deseas realizar?\n";
                                                        std::cout << "--------------------------------\n";
                                                        std::cout << "-- 1.- NORMAL -- 2.- ESPECIAL --\n";
                                                        std::cout << "--------------------------------\n";
                                                        std::cout << "\n";
                                                        std::cout << "-----\n";
                                                        std::cout << "-- ";
                                                        std::cin >> atk;
                                                        std::cout << "\n";

                                                        if (atk == 1)
                                                        {
                                                            std::cout << "---------------------\n";
                                                            std::cout << "Has escogido el ataque NORMAL\n";
                                                            std::cout << "Dañas al rival con Agarre\n";
                                                            std::cout << "Le haces 25 de daño\n";
                                                            std::cout << "--------------------------------------\n";

                                                            for (int hp1 = 25; hp1 >= 0; hp1--)
                                                            {
                                                                std::cout << "La vida del rival ha descendido a: " << hp1 << std::endl;
                                                                Sleep(tiempo1);
                                                            }
                                                            std::cout << "------------------------\n";
                                                            std::cout << "--------- 0 HP ---------\n";
                                                            std::cout << "------------------------\n";
                                                            std::cout << "\n";
                                                            std::cout << "Has derrotado a Articuno!\n";
                                                            std::cout << "-------------------------\n";
                                                            std::cout << "Has ganado el combate pokemon!\n";
                                                            std::cout << "FELICIDADES!!\n";

                                                        }
                                                        else
                                                        {
                                                            std::cout << "-----------------------------------------------------\n";
                                                            std::cout << "Has escogido el ataque ESPECIAL\n";
                                                            std::cout << "Aciertas tu ataque y dañas al rival con Fuego sagrado\n";
                                                            std::cout << "Le haces 50 de daño\n";
                                                            std::cout << "-----------------------------------------------------\n";

                                                            for (int hp1 = 25; hp1 >= 0; hp1--)
                                                            {
                                                                std::cout << "La vida del rival ha descendido a: " << hp1 << std::endl;
                                                                Sleep(tiempo1);
                                                            }
                                                            std::cout << "------------------------\n";
                                                            std::cout << "--------- 0 HP ---------\n";
                                                            std::cout << "------------------------\n";
                                                            std::cout << "\n";
                                                            std::cout << "Has derrotado a Articuno!\n";
                                                            std::cout << "-------------------------\n";
                                                            std::cout << "Has ganado el combate pokemon!\n";
                                                            std::cout << "FELICIDADES!!\n";
                                                        }

                                                        break;
                                                    }

                                                    break;
                                                }

                                            }

                                            break;

                                        }
                                    }
                                }

                            }
                            else
                            {
                                std::cout << "Has escogido Baya Latano\n";

                                for (int hp2 = 20; hp2 <= 45; hp2++)
                                {
                                    std::cout << "Tu vida ha aumentado a: " << hp2 << std::endl;
                                    Sleep(tiempo2);
                                }

                                std::cout << "------------------------\n";
                                std::cout << "-------- 45 HP ---------\n";
                                std::cout << "------------------------\n";
                                std::cout << "\n";
                                std::cout << "Es el turno de Articuno!\n";
                                std::cout << "------------------------\n";
                                std::cout << "\n";
                                std::cout << "--------------------------------\n";
                                std::cout << "Articuno escogio ATAQUE\n";
                                std::cout << "Articuno usa su ataque NORMAL\n";
                                std::cout << "Articuno te daña con Arañazo\n";
                                std::cout << "Te hace 25 de daño\n";
                                std::cout << "--------------------------------\n";


                                for (int hp2 = 50; hp2 >= 25; hp2--)
                                {
                                    std::cout << "Tu vida ha descendido a: " << hp2 << std::endl;
                                    Sleep(tiempo2);
                                }
                                std::cout << "------------------------\n";
                                std::cout << "-------- 25 HP ---------\n";
                                std::cout << "------------------------\n";
                                std::cout << "Es tu turno!\n";
                                std::cout << "¿Qué quieres hacer?\n";
                                std::cout << "---------------------------------------\n";
                                std::cout << "-- 1.- ATACAR --------- 2.- BOLSA -----\n";
                                std::cout << "---------------------------------------\n";
                                std::cout << "\n";
                                std::cout << "-----\n";
                                std::cout << "-- ";
                                std::cin >> dec1;
                                std::cout << "\n";

                                switch (dec1)
                                {
                                case 1:

                                    std::cout << "----------------------\n";
                                    std::cout << "Has escogido ATACAR\n";
                                    std::cout << "¿Qué ataque deseas realizar?\n";
                                    std::cout << "--------------------------------\n";
                                    std::cout << "-- 1.- NORMAL -- 2.- ESPECIAL --\n";
                                    std::cout << "--------------------------------\n";
                                    std::cout << "\n";
                                    std::cout << "-----\n";
                                    std::cout << "-- ";
                                    std::cin >> atk;
                                    std::cout << "\n";

                                    if (atk == 1)
                                    {
                                        std::cout << "---------------------\n";
                                        std::cout << "Has escogido el ataque NORMAL\n";
                                        std::cout << "Dañas al rival con Agarre\n";
                                        std::cout << "Le haces 25 de daño\n";
                                        std::cout << "--------------------------------------\n";

                                        for (int hp1 = 25; hp1 >= 0; hp1--)
                                        {
                                            std::cout << "La vida del rival ha descendido a: " << hp1 << std::endl;
                                            Sleep(tiempo1);
                                        }
                                        std::cout << "------------------------\n";
                                        std::cout << "--------- 0 HP ---------\n";
                                        std::cout << "------------------------\n";
                                        std::cout << "\n";
                                        std::cout << "Has derrotado a Articuno!\n";
                                        std::cout << "-------------------------\n";
                                        std::cout << "Has ganado el combate pokemon!\n";
                                        std::cout << "FELICIDADES!!\n";

                                    }
                                    else
                                    {
                                        std::cout << "-----------------------------------------------------\n";
                                        std::cout << "Has escogido el ataque ESPECIAL\n";
                                        std::cout << "Aciertas tu ataque y dañas al rival con Fuego sagrado\n";
                                        std::cout << "Le haces 50 de daño\n";
                                        std::cout << "-----------------------------------------------------\n";

                                        for (int hp1 = 25; hp1 >= 0; hp1--)
                                        {
                                            std::cout << "La vida del rival ha descendido a: " << hp1 << std::endl;
                                            Sleep(tiempo1);
                                        }
                                        std::cout << "------------------------\n";
                                        std::cout << "--------- 0 HP ---------\n";
                                        std::cout << "------------------------\n";
                                        std::cout << "\n";
                                        std::cout << "Has derrotado a Articuno!\n";
                                        std::cout << "-------------------------\n";
                                        std::cout << "Has ganado el combate pokemon!\n";
                                        std::cout << "FELICIDADES!!\n";

                                    }

                                    break;


                                case 2:
                                    std::cout << "----------------------\n";
                                    std::cout << "Has escogido BOLSA\n";
                                    std::cout << "1.- Tienes 1 Baya Frambu - 50 HP\n";
                                    std::cout << "2.- Tienes 0 Baya Latano - 25 HP\n";
                                    std::cout << "¿Qué Baya deseas usar?\n";
                                    std::cin >> baya;

                                    if (baya == 2)
                                    {
                                        std::cout << "Has escogido Baya Frambu\n";

                                        for (int hp2 = 25; hp2 <= 50; hp2++)
                                        {
                                            std::cout << "Tu vida ha aumentado a: " << hp2 << std::endl;
                                            Sleep(tiempo2);
                                        }
                                        std::cout << "------------------------\n";
                                        std::cout << "-------- 50 HP ---------\n";
                                        std::cout << "------------------------\n";
                                        std::cout << "\n";
                                        std::cout << "Es el turno de Articuno!\n";
                                        std::cout << "------------------------\n";
                                        std::cout << "\n";
                                        std::cout << "--------------------------------\n";
                                        std::cout << "Articuno escogio ATAQUE\n";
                                        std::cout << "Articuno usa su ataque NORMAL\n";
                                        std::cout << "Articuno te daña con Cabezazo\n";
                                        std::cout << "Te hace 25 de daño\n";
                                        std::cout << "--------------------------------\n";


                                        for (int hp2 = 50; hp2 >= 25; hp2--)
                                        {
                                            std::cout << "Tu vida ha descendido a: " << hp2 << std::endl;
                                            Sleep(tiempo2);
                                        }
                                        std::cout << "------------------------\n";
                                        std::cout << "-------- 25 HP ---------\n";
                                        std::cout << "------------------------\n";
                                        std::cout << "Es tu turno!\n";
                                        std::cout << "¿Qué quieres hacer?\n";
                                        std::cout << "---------------------------------------\n";
                                        std::cout << "-------------- 1.- ATACAR -------------\n";
                                        std::cout << "---------------------------------------\n";
                                        std::cout << "\n";
                                        std::cout << "-----\n";
                                        std::cout << "-- ";
                                        std::cin >> dec1;
                                        std::cout << "\n";

                                        switch (dec1)
                                        {
                                        case 1:
                                            std::cout << "----------------------\n";
                                            std::cout << "Has escogido ATACAR\n";
                                            std::cout << "¿Qué ataque deseas realizar?\n";
                                            std::cout << "--------------------------------\n";
                                            std::cout << "-- 1.- NORMAL -- 2.- ESPECIAL --\n";
                                            std::cout << "--------------------------------\n";
                                            std::cout << "\n";
                                            std::cout << "-----\n";
                                            std::cout << "-- ";
                                            std::cin >> atk;
                                            std::cout << "\n";

                                            if (atk == 1)
                                            {
                                                std::cout << "---------------------\n";
                                                std::cout << "Has escogido el ataque NORMAL\n";
                                                std::cout << "Dañas al rival con Agarre\n";
                                                std::cout << "Le haces 25 de daño\n";
                                                std::cout << "--------------------------------------\n";

                                                for (int hp1 = 25; hp1 >= 0; hp1--)
                                                {
                                                    std::cout << "La vida del rival ha descendido a: " << hp1 << std::endl;
                                                    Sleep(tiempo1);
                                                }
                                                std::cout << "------------------------\n";
                                                std::cout << "--------- 0 HP ---------\n";
                                                std::cout << "------------------------\n";
                                                std::cout << "\n";
                                                std::cout << "Has derrotado a Articuno!\n";
                                                std::cout << "-------------------------\n";
                                                std::cout << "Has ganado el combate pokemon!\n";
                                                std::cout << "FELICIDADES!!\n";

                                            }
                                            else
                                            {
                                                std::cout << "-----------------------------------------------------\n";
                                                std::cout << "Has escogido el ataque ESPECIAL\n";
                                                std::cout << "Aciertas tu ataque y dañas al rival con Fuego sagrado\n";
                                                std::cout << "Le haces 50 de daño\n";
                                                std::cout << "-----------------------------------------------------\n";

                                                for (int hp1 = 25; hp1 >= 0; hp1--)
                                                {
                                                    std::cout << "La vida del rival ha descendido a: " << hp1 << std::endl;
                                                    Sleep(tiempo1);
                                                }
                                                std::cout << "------------------------\n";
                                                std::cout << "--------- 0 HP ---------\n";
                                                std::cout << "------------------------\n";
                                                std::cout << "\n";
                                                std::cout << "Has derrotado a Articuno!\n";
                                                std::cout << "-------------------------\n";
                                                std::cout << "Has ganado el combate pokemon!\n";
                                                std::cout << "FELICIDADES!!\n";
                                            }

                                            break;
                                        }

                                    }
                                    else
                                    {
                                        std::cout << "Has escogido Baya Latano\n";

                                        for (int hp2 = 20; hp2 <= 50; hp2++)
                                        {
                                            std::cout << "Tu vida ha aumentado a: " << hp2 << std::endl;
                                            Sleep(tiempo2);
                                        }

                                        std::cout << "------------------------\n";
                                        std::cout << "-------- 50 HP ---------\n";
                                        std::cout << "------------------------\n";
                                        std::cout << "\n";
                                        std::cout << "Es el turno de Articuno!\n";
                                        std::cout << "------------------------\n";
                                        std::cout << "\n";
                                        std::cout << "--------------------------------\n";
                                        std::cout << "Articuno escogio ATAQUE\n";
                                        std::cout << "Articuno usa su ataque NORMAL\n";
                                        std::cout << "Articuno te daña con Arañazo\n";
                                        std::cout << "Te hace 25 de daño\n";
                                        std::cout << "--------------------------------\n";


                                        for (int hp2 = 50; hp2 >= 25; hp2--)
                                        {
                                            std::cout << "Tu vida ha descendido a: " << hp2 << std::endl;
                                            Sleep(tiempo2);
                                        }
                                        std::cout << "------------------------\n";
                                        std::cout << "-------- 25 HP ---------\n";
                                        std::cout << "------------------------\n";
                                        std::cout << "Es tu turno!\n";
                                        std::cout << "¿Qué quieres hacer?\n";
                                        std::cout << "---------------------------------------\n";
                                        std::cout << "-- 1.- ATACAR --------- 2.- BOLSA -----\n";
                                        std::cout << "-- 3.- BARRERA -------- 4.- POKEBOLA --\n";
                                        std::cout << "---------------------------------------\n";
                                        std::cout << "\n";
                                        std::cout << "-----\n";
                                        std::cout << "-- ";
                                        std::cin >> dec1;
                                        std::cout << "\n";

                                        switch (dec1)
                                        {
                                        case 1:

                                            std::cout << "----------------------\n";
                                            std::cout << "Has escogido ATACAR\n";
                                            std::cout << "¿Qué ataque deseas realizar?\n";
                                            std::cout << "--------------------------------\n";
                                            std::cout << "-- 1.- NORMAL -- 2.- ESPECIAL --\n";
                                            std::cout << "--------------------------------\n";
                                            std::cout << "\n";
                                            std::cout << "-----\n";
                                            std::cout << "-- ";
                                            std::cin >> atk;
                                            std::cout << "\n";

                                            if (atk == 1)
                                            {
                                                std::cout << "---------------------\n";
                                                std::cout << "Has escogido el ataque NORMAL\n";
                                                std::cout << "Dañas al rival con Agarre\n";
                                                std::cout << "Le haces 25 de daño\n";
                                                std::cout << "--------------------------------------\n";

                                                for (int hp1 = 25; hp1 >= 0; hp1--)
                                                {
                                                    std::cout << "La vida del rival ha descendido a: " << hp1 << std::endl;
                                                    Sleep(tiempo1);
                                                }
                                                std::cout << "------------------------\n";
                                                std::cout << "--------- 0 HP ---------\n";
                                                std::cout << "------------------------\n";
                                                std::cout << "\n";
                                                std::cout << "Has derrotado a Articuno!\n";
                                                std::cout << "-------------------------\n";
                                                std::cout << "Has ganado el combate pokemon!\n";
                                                std::cout << "FELICIDADES!!\n";

                                            }
                                            else
                                            {
                                                std::cout << "-----------------------------------------------------\n";
                                                std::cout << "Has escogido el ataque ESPECIAL\n";
                                                std::cout << "Aciertas tu ataque y dañas al rival con Fuego sagrado\n";
                                                std::cout << "Le haces 50 de daño\n";
                                                std::cout << "-----------------------------------------------------\n";

                                                for (int hp1 = 25; hp1 >= 0; hp1--)
                                                {
                                                    std::cout << "La vida del rival ha descendido a: " << hp1 << std::endl;
                                                    Sleep(tiempo1);
                                                }
                                                std::cout << "------------------------\n";
                                                std::cout << "--------- 0 HP ---------\n";
                                                std::cout << "------------------------\n";
                                                std::cout << "\n";
                                                std::cout << "Has derrotado a Articuno!\n";
                                                std::cout << "-------------------------\n";
                                                std::cout << "Has ganado el combate pokemon!\n";
                                                std::cout << "FELICIDADES!!\n";

                                            }

                                            break;


                                        case 2:
                                            std::cout << "----------------------\n";
                                            std::cout << "Has escogido BOLSA\n";
                                            std::cout << "1.- Tienes 1 Baya Frambu - 50 HP\n";
                                            std::cout << "2.- Tienes 0 Baya Latano - 25 HP\n";
                                            std::cout << "¿Qué Baya deseas usar?\n";
                                            std::cin >> baya;

                                            if (baya == 2)
                                            {
                                                std::cout << "Has escogido Baya Frambu\n";

                                                for (int hp2 = 25; hp2 <= 50; hp2++)
                                                {
                                                    std::cout << "Tu vida ha aumentado a: " << hp2 << std::endl;
                                                    Sleep(tiempo2);
                                                }
                                                std::cout << "------------------------\n";
                                                std::cout << "-------- 50 HP ---------\n";
                                                std::cout << "------------------------\n";
                                                std::cout << "\n";
                                                std::cout << "Es el turno de Articuno!\n";
                                                std::cout << "------------------------\n";
                                                std::cout << "\n";
                                                std::cout << "--------------------------------\n";
                                                std::cout << "Articuno escogio ATAQUE\n";
                                                std::cout << "Articuno usa su ataque NORMAL\n";
                                                std::cout << "Articuno te daña con Cabezazo\n";
                                                std::cout << "Te hace 25 de daño\n";
                                                std::cout << "--------------------------------\n";


                                                for (int hp2 = 50; hp2 >= 25; hp2--)
                                                {
                                                    std::cout << "Tu vida ha descendido a: " << hp2 << std::endl;
                                                    Sleep(tiempo2);
                                                }
                                                std::cout << "------------------------\n";
                                                std::cout << "-------- 25 HP ---------\n";
                                                std::cout << "------------------------\n";
                                                std::cout << "Es tu turno!\n";
                                                std::cout << "¿Qué quieres hacer?\n";
                                                std::cout << "---------------------------------------\n";
                                                std::cout << "-- 1.- ATACAR --------- 2.- BOLSA -----\n";
                                                std::cout << "-- 3.- BARRERA -------- 4.- POKEBOLA --\n";
                                                std::cout << "---------------------------------------\n";
                                                std::cout << "\n";
                                                std::cout << "-----\n";
                                                std::cout << "-- ";
                                                std::cin >> dec1;
                                                std::cout << "\n";

                                                switch (dec1)
                                                {
                                                case 1:
                                                    std::cout << "----------------------\n";
                                                    std::cout << "Has escogido ATACAR\n";
                                                    std::cout << "¿Qué ataque deseas realizar?\n";
                                                    std::cout << "--------------------------------\n";
                                                    std::cout << "-- 1.- NORMAL -- 2.- ESPECIAL --\n";
                                                    std::cout << "--------------------------------\n";
                                                    std::cout << "\n";
                                                    std::cout << "-----\n";
                                                    std::cout << "-- ";
                                                    std::cin >> atk;
                                                    std::cout << "\n";

                                                    if (atk == 1)
                                                    {
                                                        std::cout << "---------------------\n";
                                                        std::cout << "Has escogido el ataque NORMAL\n";
                                                        std::cout << "Dañas al rival con Agarre\n";
                                                        std::cout << "Le haces 25 de daño\n";
                                                        std::cout << "--------------------------------------\n";

                                                        for (int hp1 = 25; hp1 >= 0; hp1--)
                                                        {
                                                            std::cout << "La vida del rival ha descendido a: " << hp1 << std::endl;
                                                            Sleep(tiempo1);
                                                        }
                                                        std::cout << "------------------------\n";
                                                        std::cout << "--------- 0 HP ---------\n";
                                                        std::cout << "------------------------\n";
                                                        std::cout << "\n";
                                                        std::cout << "Has derrotado a Articuno!\n";
                                                        std::cout << "-------------------------\n";
                                                        std::cout << "Has ganado el combate pokemon!\n";
                                                        std::cout << "FELICIDADES!!\n";

                                                    }
                                                    else
                                                    {
                                                        std::cout << "-----------------------------------------------------\n";
                                                        std::cout << "Has escogido el ataque ESPECIAL\n";
                                                        std::cout << "Aciertas tu ataque y dañas al rival con Fuego sagrado\n";
                                                        std::cout << "Le haces 50 de daño\n";
                                                        std::cout << "-----------------------------------------------------\n";

                                                        for (int hp1 = 25; hp1 >= 0; hp1--)
                                                        {
                                                            std::cout << "La vida del rival ha descendido a: " << hp1 << std::endl;
                                                            Sleep(tiempo1);
                                                        }
                                                        std::cout << "------------------------\n";
                                                        std::cout << "--------- 0 HP ---------\n";
                                                        std::cout << "------------------------\n";
                                                        std::cout << "\n";
                                                        std::cout << "Has derrotado a Articuno!\n";
                                                        std::cout << "-------------------------\n";
                                                        std::cout << "Has ganado el combate pokemon!\n";
                                                        std::cout << "FELICIDADES!!\n";
                                                    }

                                                    break;

                                                case 2:

                                                    std::cout << "--------------------------------------------------------------------------------\n";
                                                    std::cout << "Al buscar objetos en tu BOLSA te das cuenta que ya no tienes\n";
                                                    std::cout << "Articuno Aprovecha esta distraccion y usa Ventisca para derrotar a tu pokemon\n";

                                                    for (int hp2 = 50; hp2 >= 0; hp2--)
                                                    {
                                                        std::cout << "Tu vida ha descendido a: " << hp2 << std::endl;
                                                        Sleep(tiempo2);
                                                    }
                                                    std::cout << "------------------------\n";
                                                    std::cout << "--------- 0 HP ---------\n";
                                                    std::cout << "------------------------\n";
                                                    std::cout << "\n";
                                                    std::cout << "Has perdido el combate pokemon!\n";
                                                    std::cout << "-------------------------------\n";
                                                    std::cout << "Suerte para la proxima!!\n";

                                                    break;

                                                case 3:

                                                    std::cout << "Has escogido BARRERA\n";
                                                    std::cout << "Te quedan 2 barreras\n";
                                                    std::cout << "Gastas una barrera para bloquear el siguiente ataque rival\n";
                                                    std::cout << "\n";
                                                    std::cout << "Articuno escogio ATAQUE\n";
                                                    std::cout << "Articuno usa su ataque NORMAL\n";
                                                    std::cout << "Articuno te daña con Cabezazo\n";
                                                    std::cout << "Te hace 25 de daño\n";
                                                    std::cout << "--------------------------------\n";


                                                    for (int hp2 = 50; hp2 >= 25; hp2--)
                                                    {
                                                        std::cout << "Tu vida ha descendido a: " << hp2 << std::endl;
                                                        Sleep(tiempo2);
                                                    }
                                                    std::cout << "------------------------\n";
                                                    std::cout << "-------- 25 HP ---------\n";
                                                    std::cout << "------------------------\n";
                                                    std::cout << "Es tu turno!\n";
                                                    std::cout << "¿Qué quieres hacer?\n";
                                                    std::cout << "---------------------------------------\n";
                                                    std::cout << "-- 1.- ATACAR --------- 2.- BOLSA -----\n";
                                                    std::cout << "-- 3.- BARRERA -------- 4.- POKEBOLA --\n";
                                                    std::cout << "---------------------------------------\n";
                                                    std::cout << "\n";
                                                    std::cout << "-----\n";
                                                    std::cout << "-- ";
                                                    std::cin >> dec1;
                                                    std::cout << "\n";

                                                    switch (dec1)
                                                    {
                                                    case 1:
                                                        std::cout << "----------------------\n";
                                                        std::cout << "Has escogido ATACAR\n";
                                                        std::cout << "¿Qué ataque deseas realizar?\n";
                                                        std::cout << "--------------------------------\n";
                                                        std::cout << "-- 1.- NORMAL -- 2.- ESPECIAL --\n";
                                                        std::cout << "--------------------------------\n";
                                                        std::cout << "\n";
                                                        std::cout << "-----\n";
                                                        std::cout << "-- ";
                                                        std::cin >> atk;
                                                        std::cout << "\n";

                                                        if (atk == 1)
                                                        {
                                                            std::cout << "---------------------\n";
                                                            std::cout << "Has escogido el ataque NORMAL\n";
                                                            std::cout << "Dañas al rival con Agarre\n";
                                                            std::cout << "Le haces 25 de daño\n";
                                                            std::cout << "--------------------------------------\n";

                                                            for (int hp1 = 25; hp1 >= 0; hp1--)
                                                            {
                                                                std::cout << "La vida del rival ha descendido a: " << hp1 << std::endl;
                                                                Sleep(tiempo1);
                                                            }
                                                            std::cout << "------------------------\n";
                                                            std::cout << "--------- 0 HP ---------\n";
                                                            std::cout << "------------------------\n";
                                                            std::cout << "\n";
                                                            std::cout << "Has derrotado a Articuno!\n";
                                                            std::cout << "-------------------------\n";
                                                            std::cout << "Has ganado el combate pokemon!\n";
                                                            std::cout << "FELICIDADES!!\n";

                                                        }
                                                        else
                                                        {
                                                            std::cout << "-----------------------------------------------------\n";
                                                            std::cout << "Has escogido el ataque ESPECIAL\n";
                                                            std::cout << "Aciertas tu ataque y dañas al rival con Fuego sagrado\n";
                                                            std::cout << "Le haces 50 de daño\n";
                                                            std::cout << "-----------------------------------------------------\n";

                                                            for (int hp1 = 25; hp1 >= 0; hp1--)
                                                            {
                                                                std::cout << "La vida del rival ha descendido a: " << hp1 << std::endl;
                                                                Sleep(tiempo1);
                                                            }
                                                            std::cout << "------------------------\n";
                                                            std::cout << "--------- 0 HP ---------\n";
                                                            std::cout << "------------------------\n";
                                                            std::cout << "\n";
                                                            std::cout << "Has derrotado a Articuno!\n";
                                                            std::cout << "-------------------------\n";
                                                            std::cout << "Has ganado el combate pokemon!\n";
                                                            std::cout << "FELICIDADES!!\n";
                                                        }

                                                        break;
                                                    }

                                                    break;
                                                }

                                            }

                                            break;

                                        }
                                    }
                                }

                                }
                            break;


                        default:
                            std::cout << "esa opcion no existe, lo lamento :(\n";

                        }

                        break;

                    case 2:
                        std::cout << "-----------------------------------------------------\n";
                        std::cout << "Has escogido el ataque ESPECIAL\n";
                        std::cout << "Aciertas tu ataque y dañas al rival con Fuego sagrado\n";
                        std::cout << "Le haces 50 de daño\n";
                        std::cout << "-----------------------------------------------------\n";

                        for (int hp1 = 50; hp1 >= 0; hp1--)
                        {
                            std::cout << "La vida del rival ha descendido a: " << hp1 << std::endl;
                            Sleep(tiempo1);
                        }
                        std::cout << "------------------------\n";
                        std::cout << "--------- 0 HP ---------\n";
                        std::cout << "------------------------\n";
                        std::cout << "\n";
                        std::cout << "Has derrotado a Articuno!\n";
                        std::cout << "-------------------------\n";
                        std::cout << "Has ganado el combate pokemon!\n";
                        std::cout << "FELICIDADES!!\n";

                        break;
                    }

                    break;

                case 2:
                    std::cout << "Has decidido HUIR\n";
                    std::cout << "Dejaste a Charizard atras y Articuno lo mato\n";
                    std::cout << "Debido a esto, la region de Kanto ha decidido vetarte de ser un entrenador pokemon\n";
                    std::cout << "Pasas el resto de tu vida lamentandote de esta decision\n";
                    std::cout << "\n";
                    std::cout << "Al momento de morir te reencuentras con Charizard\n";
                    std::cout << "Este como su naturaleza es ser siempre fiel a su entrenador te perdona\n";
                    std::cout << "Ambos pueden morir en paz y seguir su camino juntos\n";


                    break;

                }

               

            

                
                

                break;

            default:
                std::cout << "Lo lamento, ese pokemon todavia no ha sido agregado :(\n";


                
            }
            

            break;

        case 2:
            
            std::cout << "--------------------------------------\n";
            std::cout << "Has escogido a Vaporeon\n";
            std::cout << "El rival para este pokemon es:\n";
            std::cout << "1.- Ninetales\n";
            std::cout << "Presiona '1' para continuar\n";
            std::cin >> pokemon2;
            
            switch (pokemon2)
            {
            case 1:
                std::cout << "-------------------------\n";
                std::cout << "Tu rival es Ninetales!\n";
                std::cout << "-------------------------\n";
                std::cout << "\n";
                std::cout << "Te has encontrado a un Ninetales salvaje\n";
                std::cout << "¿Qué quieres hacer?\n";
                std::cout << "\n";
                std::cout << "---------------------------------------\n";
                std::cout << "-- 1.- ATACAR --------- 2.- HUIR ------\n";
                std::cout << "---------------------------------------\n";
                std::cout << "\n";
                std::cout << "-----\n";
                std::cout << "-- ";
                std::cin >> dec1;
                std::cout << "\n";


            switch (dec1)
            {
            case 1:
                std::cout << "----------------------\n";
                std::cout << "Has escogido ATACAR\n";
                std::cout << "¿Qué ataque deseas realizar?\n";
                std::cout << "--------------------------------\n";
                std::cout << "-- 1.- NORMAL -- 2.- ESPECIAL --\n";
                std::cout << "--------------------------------\n";
                std::cout << "\n";
                std::cout << "-----\n";
                std::cout << "-- ";
                std::cin >> atk;
                std::cout << "\n";

                switch (atk)
                {
                case 1:
                    std::cout << "------------------------------\n";
                    std::cout << "Has escogido el ataque NORMAL\n";
                    std::cout << "Dañas al rival con Cuchillada\n";
                    std::cout << "Le haces 25 de daño\n";
                    std::cout << "--------------------------------------\n";

                    for (int hp1 = 50; hp1 >= 25; hp1--)
                    {
                        std::cout << "La vida del rival ha descendido a: " << hp1 << std::endl;
                        Sleep(tiempo1);
                    }
                    std::cout << "------------------------\n";
                    std::cout << "-------- 25 HP ---------\n";
                    std::cout << "------------------------\n";
                    std::cout << "Es el turno de Ninetales!\n";
                    std::cout << "------------------------\n";
                    std::cout << "\n";
                    std::cout << "----------------------------------\n";
                    std::cout << "Ninetales escogio ATAQUE\n";
                    std::cout << "Ninetales usa su ataque ESPECIAL\n";
                    std::cout << "Ninetales te daña con Fuego sagrado\n";
                    std::cout << "Te hace 30 de daño\n";
                    std::cout << "----------------------------------\n";


                    for (int hp2 = 50; hp2 >= 20; hp2--)
                    {
                        std::cout << "Tu vida ha descendido a: " << hp2 << std::endl;
                        Sleep(tiempo2);
                    }
                    std::cout << "------------------------\n";
                    std::cout << "-------- 20 HP ---------\n";
                    std::cout << "------------------------\n";
                    std::cout << "Es tu turno!\n";
                    std::cout << "¿Qué quieres hacer?\n";
                    std::cout << "---------------------------------------\n";
                    std::cout << "-- 1.- ATACAR --------- 2.- BOLSA -----\n";
                    std::cout << "---------------------------------------\n";
                    std::cout << "\n";
                    std::cout << "-----\n";
                    std::cout << "-- ";
                    std::cin >> dec1;
                    std::cout << "\n";

                    switch (dec1)
                    {
                    case 1:
                        std::cout << "----------------------\n";
                        std::cout << "Has escogido ATACAR\n";
                        std::cout << "¿Qué ataque deseas realizar?\n";
                        std::cout << "--------------------------------\n";
                        std::cout << "-- 1.- NORMAL -- 2.- ESPECIAL --\n";
                        std::cout << "--------------------------------\n";
                        std::cout << "\n";
                        std::cout << "-----\n";
                        std::cout << "-- ";
                        std::cin >> atk;
                        std::cout << "\n";

                        if (atk == 1)
                        {
                            std::cout << "---------------------\n";
                            std::cout << "Has escogido el ataque NORMAL\n";
                            std::cout << "Dañas al rival con Agarre\n";
                            std::cout << "Le haces 25 de daño\n";
                            std::cout << "--------------------------------------\n";

                            for (int hp1 = 25; hp1 >= 0; hp1--)
                            {
                                std::cout << "La vida del rival ha descendido a: " << hp1 << std::endl;
                                Sleep(tiempo1);
                            }
                            std::cout << "------------------------\n";
                            std::cout << "--------- 0 HP ---------\n";
                            std::cout << "------------------------\n";
                            std::cout << "\n";
                            std::cout << "Has derrotado a Ninetales!\n";
                            std::cout << "-------------------------\n";
                            std::cout << "Has ganado el combate pokemon!\n";
                            std::cout << "FELICIDADES!!\n";

                        }
                        else
                        {
                            std::cout << "-----------------------------------------------------\n";
                            std::cout << "Has escogido el ataque ESPECIAL\n";
                            std::cout << "Aciertas tu ataque y dañas al rival con Hidrobomba\n";
                            std::cout << "Le haces 50 de daño\n";
                            std::cout << "-----------------------------------------------------\n";

                            for (int hp1 = 25; hp1 >= 0; hp1--)
                            {
                                std::cout << "La vida del rival ha descendido a: " << hp1 << std::endl;
                                Sleep(tiempo1);
                            }
                            std::cout << "------------------------\n";
                            std::cout << "--------- 0 HP ---------\n";
                            std::cout << "------------------------\n";
                            std::cout << "\n";
                            std::cout << "Has derrotado a Ninetales!\n";
                            std::cout << "-------------------------\n";
                            std::cout << "Has ganado el combate pokemon!\n";
                            std::cout << "FELICIDADES!!\n";

                        }

                        break;

                    case 2:
                        std::cout << "----------------------\n";
                        std::cout << "Has escogido BOLSA\n";
                        std::cout << "1.- Tienes 1 Baya Frambu - 50 HP\n";
                        std::cout << "2.- Tienes 1 Baya Latano - 25 HP\n";
                        std::cout << "¿Qué Baya deseas usar?\n";
                        std::cin >> baya;

                        if (baya == 1)
                        {
                            std::cout << "Has escogido Baya Frambu\n";

                            for (int hp2 = 20; hp2 <= 50; hp2++)
                            {
                                std::cout << "Tu vida ha aumentado a: " << hp2 << std::endl;
                                Sleep(tiempo2);
                            }

                            std::cout << "------------------------\n";
                            std::cout << "-------- 50 HP ---------\n";
                            std::cout << "------------------------\n";
                            std::cout << "\n";
                            std::cout << "Es el turno de Ninetales!\n";
                            std::cout << "------------------------\n";
                            std::cout << "\n";
                            std::cout << "--------------------------------\n";
                            std::cout << "Ninetales escogio ATAQUE\n";
                            std::cout << "Ninetales usa su ataque NORMAL\n";
                            std::cout << "Ninetales te daña con Arañazo\n";
                            std::cout << "Te hace 25 de daño\n";
                            std::cout << "--------------------------------\n";


                            for (int hp2 = 50; hp2 >= 25; hp2--)
                            {
                                std::cout << "Tu vida ha descendido a: " << hp2 << std::endl;
                                Sleep(tiempo2);
                            }
                            std::cout << "------------------------\n";
                            std::cout << "-------- 25 HP ---------\n";
                            std::cout << "------------------------\n";
                            std::cout << "Es tu turno!\n";
                            std::cout << "¿Qué quieres hacer?\n";
                            std::cout << "---------------------------------------\n";
                            std::cout << "-- 1.- ATACAR --------- 2.- BOLSA -----\n";
                            std::cout << "---------------------------------------\n";
                            std::cout << "\n";
                            std::cout << "-----\n";
                            std::cout << "-- ";
                            std::cin >> dec1;
                            std::cout << "\n";

                            switch (dec1)
                            {
                            case 1:

                                std::cout << "----------------------\n";
                                std::cout << "Has escogido ATACAR\n";
                                std::cout << "¿Qué ataque deseas realizar?\n";
                                std::cout << "--------------------------------\n";
                                std::cout << "-- 1.- NORMAL -- 2.- ESPECIAL --\n";
                                std::cout << "--------------------------------\n";
                                std::cout << "\n";
                                std::cout << "-----\n";
                                std::cout << "-- ";
                                std::cin >> atk;
                                std::cout << "\n";

                                if (atk == 1)
                                {
                                    std::cout << "---------------------\n";
                                    std::cout << "Has escogido el ataque NORMAL\n";
                                    std::cout << "Dañas al rival con Derribo\n";
                                    std::cout << "Le haces 25 de daño\n";
                                    std::cout << "--------------------------------------\n";

                                    for (int hp1 = 25; hp1 >= 0; hp1--)
                                    {
                                        std::cout << "La vida del rival ha descendido a: " << hp1 << std::endl;
                                        Sleep(tiempo1);
                                    }
                                    std::cout << "------------------------\n";
                                    std::cout << "--------- 0 HP ---------\n";
                                    std::cout << "------------------------\n";
                                    std::cout << "\n";
                                    std::cout << "Has derrotado a Articuno!\n";
                                    std::cout << "-------------------------\n";
                                    std::cout << "Has ganado el combate pokemon!\n";
                                    std::cout << "FELICIDADES!!\n";

                                }
                                else
                                {
                                    std::cout << "-----------------------------------------------------\n";
                                    std::cout << "Has escogido el ataque ESPECIAL\n";
                                    std::cout << "Aciertas tu ataque y dañas al rival con Burbuja\n";
                                    std::cout << "Le haces 50 de daño\n";
                                    std::cout << "-----------------------------------------------------\n";

                                    for (int hp1 = 25; hp1 >= 0; hp1--)
                                    {
                                        std::cout << "La vida del rival ha descendido a: " << hp1 << std::endl;
                                        Sleep(tiempo1);
                                    }
                                    std::cout << "------------------------\n";
                                    std::cout << "--------- 0 HP ---------\n";
                                    std::cout << "------------------------\n";
                                    std::cout << "\n";
                                    std::cout << "Has derrotado a Ninetales!\n";
                                    std::cout << "-------------------------\n";
                                    std::cout << "Has ganado el combate pokemon!\n";
                                    std::cout << "FELICIDADES!!\n";

                                }

                                break;


                            case 2:
                                std::cout << "----------------------\n";
                                std::cout << "Has escogido BOLSA\n";
                                std::cout << "1.- Tienes 0 Baya Frambu - 50 HP\n";
                                std::cout << "2.- Tienes 1 Baya Latano - 25 HP\n";
                                std::cout << "¿Qué Baya deseas usar?\n";
                                std::cin >> baya;

                                if (baya == 2)
                                {
                                    std::cout << "Has escogido Baya Latano\n";

                                    for (int hp2 = 25; hp2 <= 50; hp2++)
                                    {
                                        std::cout << "Tu vida ha aumentado a: " << hp2 << std::endl;
                                        Sleep(tiempo2);
                                    }
                                    std::cout << "------------------------\n";
                                    std::cout << "-------- 50 HP ---------\n";
                                    std::cout << "------------------------\n";
                                    std::cout << "\n";
                                    std::cout << "Es el turno de Ninetales!\n";
                                    std::cout << "------------------------\n";
                                    std::cout << "\n";
                                    std::cout << "--------------------------------\n";
                                    std::cout << "Ninetales escogio ATAQUE\n";
                                    std::cout << "Ninetales usa su ataque NORMAL\n";
                                    std::cout << "Ninetales te daña con Cabezazo\n";
                                    std::cout << "Te hace 25 de daño\n";
                                    std::cout << "--------------------------------\n";


                                    for (int hp2 = 50; hp2 >= 25; hp2--)
                                    {
                                        std::cout << "Tu vida ha descendido a: " << hp2 << std::endl;
                                        Sleep(tiempo2);
                                    }
                                    std::cout << "------------------------\n";
                                    std::cout << "-------- 25 HP ---------\n";
                                    std::cout << "------------------------\n";
                                    std::cout << "Es tu turno!\n";
                                    std::cout << "¿Qué quieres hacer?\n";
                                    std::cout << "---------------------------------------\n";
                                    std::cout << "-------------- 1.- ATACAR -------------\n";
                                    std::cout << "---------------------------------------\n";
                                    std::cout << "\n";
                                    std::cout << "-----\n";
                                    std::cout << "-- ";
                                    std::cin >> dec1;
                                    std::cout << "\n";

                                    switch (dec1)
                                    {
                                    case 1:
                                        std::cout << "----------------------\n";
                                        std::cout << "Has escogido ATACAR\n";
                                        std::cout << "¿Qué ataque deseas realizar?\n";
                                        std::cout << "--------------------------------\n";
                                        std::cout << "-- 1.- NORMAL -- 2.- ESPECIAL --\n";
                                        std::cout << "--------------------------------\n";
                                        std::cout << "\n";
                                        std::cout << "-----\n";
                                        std::cout << "-- ";
                                        std::cin >> atk;
                                        std::cout << "\n";

                                        if (atk == 1)
                                        {
                                            std::cout << "---------------------\n";
                                            std::cout << "Has escogido el ataque NORMAL\n";
                                            std::cout << "Dañas al rival con Corte\n";
                                            std::cout << "Le haces 25 de daño\n";
                                            std::cout << "--------------------------------------\n";

                                            for (int hp1 = 25; hp1 >= 0; hp1--)
                                            {
                                                std::cout << "La vida del rival ha descendido a: " << hp1 << std::endl;
                                                Sleep(tiempo1);
                                            }
                                            std::cout << "------------------------\n";
                                            std::cout << "--------- 0 HP ---------\n";
                                            std::cout << "------------------------\n";
                                            std::cout << "\n";
                                            std::cout << "Has derrotado a Ninetales!\n";
                                            std::cout << "-------------------------\n";
                                            std::cout << "Has ganado el combate pokemon!\n";
                                            std::cout << "FELICIDADES!!\n";

                                        }
                                        else
                                        {
                                            std::cout << "-----------------------------------------------------\n";
                                            std::cout << "Has escogido el ataque ESPECIAL\n";
                                            std::cout << "Aciertas tu ataque y dañas al rival con Cascada\n";
                                            std::cout << "Le haces 50 de daño\n";
                                            std::cout << "-----------------------------------------------------\n";

                                            for (int hp1 = 25; hp1 >= 0; hp1--)
                                            {
                                                std::cout << "La vida del rival ha descendido a: " << hp1 << std::endl;
                                                Sleep(tiempo1);
                                            }
                                            std::cout << "------------------------\n";
                                            std::cout << "--------- 0 HP ---------\n";
                                            std::cout << "------------------------\n";
                                            std::cout << "\n";
                                            std::cout << "Has derrotado a Ninetales!\n";
                                            std::cout << "-------------------------\n";
                                            std::cout << "Has ganado el combate pokemon!\n";
                                            std::cout << "FELICIDADES!!\n";
                                        }

                                        break;
                                    }

                                }
                                else
                                {
                                    std::cout << "Has escogido Baya Latano\n";

                                    for (int hp2 = 20; hp2 <= 50; hp2++)
                                    {
                                        std::cout << "Tu vida ha aumentado a: " << hp2 << std::endl;
                                        Sleep(tiempo2);
                                    }

                                    std::cout << "------------------------\n";
                                    std::cout << "-------- 50 HP ---------\n";
                                    std::cout << "------------------------\n";
                                    std::cout << "\n";
                                    std::cout << "Es el turno de Ninetales!\n";
                                    std::cout << "------------------------\n";
                                    std::cout << "\n";
                                    std::cout << "--------------------------------\n";
                                    std::cout << "Ninetales escogio ATAQUE\n";
                                    std::cout << "Ninetales usa su ataque NORMAL\n";
                                    std::cout << "Ninetales te daña con Arañazo\n";
                                    std::cout << "Te hace 25 de daño\n";
                                    std::cout << "--------------------------------\n";


                                    for (int hp2 = 50; hp2 >= 25; hp2--)
                                    {
                                        std::cout << "Tu vida ha descendido a: " << hp2 << std::endl;
                                        Sleep(tiempo2);
                                    }
                                    std::cout << "------------------------\n";
                                    std::cout << "-------- 25 HP ---------\n";
                                    std::cout << "------------------------\n";
                                    std::cout << "Es tu turno!\n";
                                    std::cout << "¿Qué quieres hacer?\n";
                                    std::cout << "---------------------------------------\n";
                                    std::cout << "-- 1.- ATACAR --------- 2.- BOLSA -----\n";
                                    std::cout << "-- 3.- BARRERA -------- 4.- POKEBOLA --\n";
                                    std::cout << "---------------------------------------\n";
                                    std::cout << "\n";
                                    std::cout << "-----\n";
                                    std::cout << "-- ";
                                    std::cin >> dec1;
                                    std::cout << "\n";

                                    switch (dec1)
                                    {
                                    case 1:

                                        std::cout << "----------------------\n";
                                        std::cout << "Has escogido ATACAR\n";
                                        std::cout << "¿Qué ataque deseas realizar?\n";
                                        std::cout << "--------------------------------\n";
                                        std::cout << "-- 1.- NORMAL -- 2.- ESPECIAL --\n";
                                        std::cout << "--------------------------------\n";
                                        std::cout << "\n";
                                        std::cout << "-----\n";
                                        std::cout << "-- ";
                                        std::cin >> atk;
                                        std::cout << "\n";

                                        if (atk == 1)
                                        {
                                            std::cout << "---------------------\n";
                                            std::cout << "Has escogido el ataque NORMAL\n";
                                            std::cout << "Dañas al rival con Cabezazo\n";
                                            std::cout << "Le haces 25 de daño\n";
                                            std::cout << "--------------------------------------\n";

                                            for (int hp1 = 25; hp1 >= 0; hp1--)
                                            {
                                                std::cout << "La vida del rival ha descendido a: " << hp1 << std::endl;
                                                Sleep(tiempo1);
                                            }
                                            std::cout << "------------------------\n";
                                            std::cout << "--------- 0 HP ---------\n";
                                            std::cout << "------------------------\n";
                                            std::cout << "\n";
                                            std::cout << "Has derrotado a Ninetales!\n";
                                            std::cout << "-------------------------\n";
                                            std::cout << "Has ganado el combate pokemon!\n";
                                            std::cout << "FELICIDADES!!\n";

                                        }
                                        else
                                        {
                                            std::cout << "-----------------------------------------------------\n";
                                            std::cout << "Has escogido el ataque ESPECIAL\n";
                                            std::cout << "Aciertas tu ataque y dañas al rival con Pistola agua\n";
                                            std::cout << "Le haces 50 de daño\n";
                                            std::cout << "-----------------------------------------------------\n";

                                            for (int hp1 = 25; hp1 >= 0; hp1--)
                                            {
                                                std::cout << "La vida del rival ha descendido a: " << hp1 << std::endl;
                                                Sleep(tiempo1);
                                            }
                                            std::cout << "------------------------\n";
                                            std::cout << "--------- 0 HP ---------\n";
                                            std::cout << "------------------------\n";
                                            std::cout << "\n";
                                            std::cout << "Has derrotado a Ninetales!\n";
                                            std::cout << "-------------------------\n";
                                            std::cout << "Has ganado el combate pokemon!\n";
                                            std::cout << "FELICIDADES!!\n";

                                        }

                                        break;


                                    case 2:
                                        std::cout << "----------------------\n";
                                        std::cout << "Has escogido BOLSA\n";
                                        std::cout << "1.- Tienes 1 Baya Frambu - 50 HP\n";
                                        std::cout << "2.- Tienes 0 Baya Latano - 25 HP\n";
                                        std::cout << "¿Qué Baya deseas usar?\n";
                                        std::cin >> baya;

                                        if (baya == 2)
                                        {
                                            std::cout << "Has escogido Baya Frambu\n";

                                            for (int hp2 = 25; hp2 <= 50; hp2++)
                                            {
                                                std::cout << "Tu vida ha aumentado a: " << hp2 << std::endl;
                                                Sleep(tiempo2);
                                            }
                                            std::cout << "------------------------\n";
                                            std::cout << "-------- 50 HP ---------\n";
                                            std::cout << "------------------------\n";
                                            std::cout << "\n";
                                            std::cout << "Es el turno de Ninetales!\n";
                                            std::cout << "------------------------\n";
                                            std::cout << "\n";
                                            std::cout << "--------------------------------\n";
                                            std::cout << "Ninetales escogio ATAQUE\n";
                                            std::cout << "Ninetales usa su ataque NORMAL\n";
                                            std::cout << "Ninetales te daña con Cabezazo\n";
                                            std::cout << "Te hace 25 de daño\n";
                                            std::cout << "--------------------------------\n";


                                            for (int hp2 = 50; hp2 >= 25; hp2--)
                                            {
                                                std::cout << "Tu vida ha descendido a: " << hp2 << std::endl;
                                                Sleep(tiempo2);
                                            }
                                            std::cout << "------------------------\n";
                                            std::cout << "-------- 25 HP ---------\n";
                                            std::cout << "------------------------\n";
                                            std::cout << "Es tu turno!\n";
                                            std::cout << "¿Qué quieres hacer?\n";
                                            std::cout << "---------------------------------------\n";
                                            std::cout << "-- 1.- ATACAR --------- 2.- BOLSA -----\n";
                                            std::cout << "---------------------------------------\n";
                                            std::cout << "\n";
                                            std::cout << "-----\n";
                                            std::cout << "-- ";
                                            std::cin >> dec1;
                                            std::cout << "\n";

                                            switch (dec1)
                                            {
                                            case 1:
                                                std::cout << "----------------------\n";
                                                std::cout << "Has escogido ATACAR\n";
                                                std::cout << "¿Qué ataque deseas realizar?\n";
                                                std::cout << "--------------------------------\n";
                                                std::cout << "-- 1.- NORMAL -- 2.- ESPECIAL --\n";
                                                std::cout << "--------------------------------\n";
                                                std::cout << "\n";
                                                std::cout << "-----\n";
                                                std::cout << "-- ";
                                                std::cin >> atk;
                                                std::cout << "\n";

                                                if (atk == 1)
                                                {
                                                    std::cout << "---------------------\n";
                                                    std::cout << "Has escogido el ataque NORMAL\n";
                                                    std::cout << "Dañas al rival con Agarre\n";
                                                    std::cout << "Le haces 25 de daño\n";
                                                    std::cout << "--------------------------------------\n";

                                                    for (int hp1 = 25; hp1 >= 0; hp1--)
                                                    {
                                                        std::cout << "La vida del rival ha descendido a: " << hp1 << std::endl;
                                                        Sleep(tiempo1);
                                                    }
                                                    std::cout << "------------------------\n";
                                                    std::cout << "--------- 0 HP ---------\n";
                                                    std::cout << "------------------------\n";
                                                    std::cout << "\n";
                                                    std::cout << "Has derrotado a Ninetales!\n";
                                                    std::cout << "-------------------------\n";
                                                    std::cout << "Has ganado el combate pokemon!\n";
                                                    std::cout << "FELICIDADES!!\n";

                                                }
                                                else
                                                {
                                                    std::cout << "-----------------------------------------------------\n";
                                                    std::cout << "Has escogido el ataque ESPECIAL\n";
                                                    std::cout << "Aciertas tu ataque y dañas al rival con Hidrobomba\n";
                                                    std::cout << "Le haces 50 de daño\n";
                                                    std::cout << "-----------------------------------------------------\n";

                                                    for (int hp1 = 25; hp1 >= 0; hp1--)
                                                    {
                                                        std::cout << "La vida del rival ha descendido a: " << hp1 << std::endl;
                                                        Sleep(tiempo1);
                                                    }
                                                    std::cout << "------------------------\n";
                                                    std::cout << "--------- 0 HP ---------\n";
                                                    std::cout << "------------------------\n";
                                                    std::cout << "\n";
                                                    std::cout << "Has derrotado a Ninetales!\n";
                                                    std::cout << "-------------------------\n";
                                                    std::cout << "Has ganado el combate pokemon!\n";
                                                    std::cout << "FELICIDADES!!\n";
                                                }

                                                break;

                                            case 2:
                                                
                                                std::cout << "--------------------------------------------------------------------------------\n";
                                                std::cout << "Al buscar objetos en tu BOLSA te das cuenta que ya no tienes\n";
                                                std::cout << "Ninetales Aprovecha esta distraccion y usa Giro fuego para derrotar a tu pokemon\n";
                                                
                                                for (int hp2 = 50; hp2 >= 0; hp2--)
                                                {
                                                    std::cout << "Tu vida ha descendido a: " << hp2 << std::endl;
                                                    Sleep(tiempo2);
                                                }
                                                std::cout << "------------------------\n";
                                                std::cout << "--------- 0 HP ---------\n";
                                                std::cout << "------------------------\n";
                                                std::cout << "\n";
                                                std::cout << "Has perdido el combate pokemon!\n";
                                                std::cout << "-------------------------------\n";
                                                std::cout << "Suerte para la proxima!!\n";

                                                break;
                                           
                                            }

                                        } 

                                        break;

                                    }
                                }
                            }

                        }
                        else
                        {
                            std::cout << "Has escogido Baya Latano\n";

                            for (int hp2 = 20; hp2 <= 45; hp2++)
                            {
                                std::cout << "Tu vida ha aumentado a: " << hp2 << std::endl;
                                Sleep(tiempo2);
                            }

                            std::cout << "------------------------\n";
                            std::cout << "-------- 45 HP ---------\n";
                            std::cout << "------------------------\n";
                            std::cout << "\n";
                            std::cout << "Es el turno de Ninetales!\n";
                            std::cout << "------------------------\n";
                            std::cout << "\n";
                            std::cout << "--------------------------------\n";
                            std::cout << "Ninetales escogio ATAQUE\n";
                            std::cout << "Ninetales usa su ataque NORMAL\n";
                            std::cout << "Ninetales te daña con Arañazo\n";
                            std::cout << "Te hace 25 de daño\n";
                            std::cout << "--------------------------------\n";


                            for (int hp2 = 50; hp2 >= 25; hp2--)
                            {
                                std::cout << "Tu vida ha descendido a: " << hp2 << std::endl;
                                Sleep(tiempo2);
                            }
                            std::cout << "------------------------\n";
                            std::cout << "-------- 25 HP ---------\n";
                            std::cout << "------------------------\n";
                            std::cout << "Es tu turno!\n";
                            std::cout << "¿Qué quieres hacer?\n";
                            std::cout << "---------------------------------------\n";
                            std::cout << "-- 1.- ATACAR --------- 2.- BOLSA -----\n";
                            std::cout << "---------------------------------------\n";
                            std::cout << "\n";
                            std::cout << "-----\n";
                            std::cout << "-- ";
                            std::cin >> dec1;
                            std::cout << "\n";

                            switch (dec1)
                            {
                            case 1:

                                std::cout << "----------------------\n";
                                std::cout << "Has escogido ATACAR\n";
                                std::cout << "¿Qué ataque deseas realizar?\n";
                                std::cout << "--------------------------------\n";
                                std::cout << "-- 1.- NORMAL -- 2.- ESPECIAL --\n";
                                std::cout << "--------------------------------\n";
                                std::cout << "\n";
                                std::cout << "-----\n";
                                std::cout << "-- ";
                                std::cin >> atk;
                                std::cout << "\n";

                                if (atk == 1)
                                {
                                    std::cout << "---------------------\n";
                                    std::cout << "Has escogido el ataque NORMAL\n";
                                    std::cout << "Dañas al rival con Agarre\n";
                                    std::cout << "Le haces 25 de daño\n";
                                    std::cout << "--------------------------------------\n";

                                    for (int hp1 = 25; hp1 >= 0; hp1--)
                                    {
                                        std::cout << "La vida del rival ha descendido a: " << hp1 << std::endl;
                                        Sleep(tiempo1);
                                    }
                                    std::cout << "------------------------\n";
                                    std::cout << "--------- 0 HP ---------\n";
                                    std::cout << "------------------------\n";
                                    std::cout << "\n";
                                    std::cout << "Has derrotado a Ninetales!\n";
                                    std::cout << "-------------------------\n";
                                    std::cout << "Has ganado el combate pokemon!\n";
                                    std::cout << "FELICIDADES!!\n";

                                }
                                else
                                {
                                    std::cout << "-----------------------------------------------------\n";
                                    std::cout << "Has escogido el ataque ESPECIAL\n";
                                    std::cout << "Aciertas tu ataque y dañas al rival con Martillazo\n";
                                    std::cout << "Le haces 50 de daño\n";
                                    std::cout << "-----------------------------------------------------\n";

                                    for (int hp1 = 25; hp1 >= 0; hp1--)
                                    {
                                        std::cout << "La vida del rival ha descendido a: " << hp1 << std::endl;
                                        Sleep(tiempo1);
                                    }
                                    std::cout << "------------------------\n";
                                    std::cout << "--------- 0 HP ---------\n";
                                    std::cout << "------------------------\n";
                                    std::cout << "\n";
                                    std::cout << "Has derrotado a Ninetales!\n";
                                    std::cout << "-------------------------\n";
                                    std::cout << "Has ganado el combate pokemon!\n";
                                    std::cout << "FELICIDADES!!\n";

                                }

                                break;


                            case 2:
                                std::cout << "----------------------\n";
                                std::cout << "Has escogido BOLSA\n";
                                std::cout << "1.- Tienes 1 Baya Frambu - 50 HP\n";
                                std::cout << "2.- Tienes 0 Baya Latano - 25 HP\n";
                                std::cout << "¿Qué Baya deseas usar?\n";
                                std::cin >> baya;

                                if (baya == 2)
                                {
                                    std::cout << "Has escogido Baya Frambu\n";

                                    for (int hp2 = 25; hp2 <= 50; hp2++)
                                    {
                                        std::cout << "Tu vida ha aumentado a: " << hp2 << std::endl;
                                        Sleep(tiempo2);
                                    }
                                    std::cout << "------------------------\n";
                                    std::cout << "-------- 50 HP ---------\n";
                                    std::cout << "------------------------\n";
                                    std::cout << "\n";
                                    std::cout << "Es el turno de Ninetales!\n";
                                    std::cout << "------------------------\n";
                                    std::cout << "\n";
                                    std::cout << "--------------------------------\n";
                                    std::cout << "Ninetales escogio ATAQUE\n";
                                    std::cout << "Ninetales usa su ataque NORMAL\n";
                                    std::cout << "Ninetales te daña con Cabezazo\n";
                                    std::cout << "Te hace 25 de daño\n";
                                    std::cout << "--------------------------------\n";


                                    for (int hp2 = 50; hp2 >= 25; hp2--)
                                    {
                                        std::cout << "Tu vida ha descendido a: " << hp2 << std::endl;
                                        Sleep(tiempo2);
                                    }
                                    std::cout << "------------------------\n";
                                    std::cout << "-------- 25 HP ---------\n";
                                    std::cout << "------------------------\n";
                                    std::cout << "Es tu turno!\n";
                                    std::cout << "¿Qué quieres hacer?\n";
                                    std::cout << "---------------------------------------\n";
                                    std::cout << "-------------- 1.- ATACAR -------------\n";
                                    std::cout << "---------------------------------------\n";
                                    std::cout << "\n";
                                    std::cout << "-----\n";
                                    std::cout << "-- ";
                                    std::cin >> dec1;
                                    std::cout << "\n";

                                    switch (dec1)
                                    {
                                    case 1:
                                        std::cout << "----------------------\n";
                                        std::cout << "Has escogido ATACAR\n";
                                        std::cout << "¿Qué ataque deseas realizar?\n";
                                        std::cout << "--------------------------------\n";
                                        std::cout << "-- 1.- NORMAL -- 2.- ESPECIAL --\n";
                                        std::cout << "--------------------------------\n";
                                        std::cout << "\n";
                                        std::cout << "-----\n";
                                        std::cout << "-- ";
                                        std::cin >> atk;
                                        std::cout << "\n";

                                        if (atk == 1)
                                        {
                                            std::cout << "---------------------\n";
                                            std::cout << "Has escogido el ataque NORMAL\n";
                                            std::cout << "Dañas al rival con Agarre\n";
                                            std::cout << "Le haces 25 de daño\n";
                                            std::cout << "--------------------------------------\n";

                                            for (int hp1 = 25; hp1 >= 0; hp1--)
                                            {
                                                std::cout << "La vida del rival ha descendido a: " << hp1 << std::endl;
                                                Sleep(tiempo1);
                                            }
                                            std::cout << "------------------------\n";
                                            std::cout << "--------- 0 HP ---------\n";
                                            std::cout << "------------------------\n";
                                            std::cout << "\n";
                                            std::cout << "Has derrotado a Ninetales!\n";
                                            std::cout << "-------------------------\n";
                                            std::cout << "Has ganado el combate pokemon!\n";
                                            std::cout << "FELICIDADES!!\n";

                                        }
                                        else
                                        {
                                            std::cout << "-----------------------------------------------------\n";
                                            std::cout << "Has escogido el ataque ESPECIAL\n";
                                            std::cout << "Aciertas tu ataque y dañas al rival con Hidrobomba\n";
                                            std::cout << "Le haces 50 de daño\n";
                                            std::cout << "-----------------------------------------------------\n";

                                            for (int hp1 = 25; hp1 >= 0; hp1--)
                                            {
                                                std::cout << "La vida del rival ha descendido a: " << hp1 << std::endl;
                                                Sleep(tiempo1);
                                            }
                                            std::cout << "------------------------\n";
                                            std::cout << "--------- 0 HP ---------\n";
                                            std::cout << "------------------------\n";
                                            std::cout << "\n";
                                            std::cout << "Has derrotado a Ninetales!\n";
                                            std::cout << "-------------------------\n";
                                            std::cout << "Has ganado el combate pokemon!\n";
                                            std::cout << "FELICIDADES!!\n";
                                        }

                                        break;
                                    }

                                }
                                else
                                {
                                    std::cout << "Has escogido Baya Latano\n";

                                    for (int hp2 = 20; hp2 <= 50; hp2++)
                                    {
                                        std::cout << "Tu vida ha aumentado a: " << hp2 << std::endl;
                                        Sleep(tiempo2);
                                    }

                                    std::cout << "------------------------\n";
                                    std::cout << "-------- 50 HP ---------\n";
                                    std::cout << "------------------------\n";
                                    std::cout << "\n";
                                    std::cout << "Es el turno de Ninetales!\n";
                                    std::cout << "------------------------\n";
                                    std::cout << "\n";
                                    std::cout << "--------------------------------\n";
                                    std::cout << "Ninetales escogio ATAQUE\n";
                                    std::cout << "Ninetales usa su ataque NORMAL\n";
                                    std::cout << "Ninetales te daña con Arañazo\n";
                                    std::cout << "Te hace 25 de daño\n";
                                    std::cout << "--------------------------------\n";


                                    for (int hp2 = 50; hp2 >= 25; hp2--)
                                    {
                                        std::cout << "Tu vida ha descendido a: " << hp2 << std::endl;
                                        Sleep(tiempo2);
                                    }
                                    std::cout << "------------------------\n";
                                    std::cout << "-------- 25 HP ---------\n";
                                    std::cout << "------------------------\n";
                                    std::cout << "Es tu turno!\n";
                                    std::cout << "¿Qué quieres hacer?\n";
                                    std::cout << "---------------------------------------\n";
                                    std::cout << "-- 1.- ATACAR --------- 2.- BOLSA -----\n";
                                    std::cout << "---------------------------------------\n";
                                    std::cout << "\n";
                                    std::cout << "-----\n";
                                    std::cout << "-- ";
                                    std::cin >> dec1;
                                    std::cout << "\n";

                                    switch (dec1)
                                    {
                                    case 1:

                                        std::cout << "----------------------\n";
                                        std::cout << "Has escogido ATACAR\n";
                                        std::cout << "¿Qué ataque deseas realizar?\n";
                                        std::cout << "--------------------------------\n";
                                        std::cout << "-- 1.- NORMAL -- 2.- ESPECIAL --\n";
                                        std::cout << "--------------------------------\n";
                                        std::cout << "\n";
                                        std::cout << "-----\n";
                                        std::cout << "-- ";
                                        std::cin >> atk;
                                        std::cout << "\n";

                                        if (atk == 1)
                                        {
                                            std::cout << "---------------------\n";
                                            std::cout << "Has escogido el ataque NORMAL\n";
                                            std::cout << "Dañas al rival con Agarre\n";
                                            std::cout << "Le haces 25 de daño\n";
                                            std::cout << "--------------------------------------\n";

                                            for (int hp1 = 25; hp1 >= 0; hp1--)
                                            {
                                                std::cout << "La vida del rival ha descendido a: " << hp1 << std::endl;
                                                Sleep(tiempo1);
                                            }
                                            std::cout << "------------------------\n";
                                            std::cout << "--------- 0 HP ---------\n";
                                            std::cout << "------------------------\n";
                                            std::cout << "\n";
                                            std::cout << "Has derrotado a Ninetales!\n";
                                            std::cout << "-------------------------\n";
                                            std::cout << "Has ganado el combate pokemon!\n";
                                            std::cout << "FELICIDADES!!\n";

                                        }
                                        else
                                        {
                                            std::cout << "-----------------------------------------------------\n";
                                            std::cout << "Has escogido el ataque ESPECIAL\n";
                                            std::cout << "Aciertas tu ataque y dañas al rival con Torbellino\n";
                                            std::cout << "Le haces 50 de daño\n";
                                            std::cout << "-----------------------------------------------------\n";

                                            for (int hp1 = 25; hp1 >= 0; hp1--)
                                            {
                                                std::cout << "La vida del rival ha descendido a: " << hp1 << std::endl;
                                                Sleep(tiempo1);
                                            }
                                            std::cout << "------------------------\n";
                                            std::cout << "--------- 0 HP ---------\n";
                                            std::cout << "------------------------\n";
                                            std::cout << "\n";
                                            std::cout << "Has derrotado a Ninetales!\n";
                                            std::cout << "-------------------------\n";
                                            std::cout << "Has ganado el combate pokemon!\n";
                                            std::cout << "FELICIDADES!!\n";

                                        }

                                        break;


                                    case 2:
                                        std::cout << "----------------------\n";
                                        std::cout << "Has escogido BOLSA\n";
                                        std::cout << "1.- Tienes 1 Baya Frambu - 50 HP\n";
                                        std::cout << "2.- Tienes 0 Baya Latano - 25 HP\n";
                                        std::cout << "¿Qué Baya deseas usar?\n";
                                        std::cin >> baya;

                                        if (baya == 2)
                                        {
                                            std::cout << "Has escogido Baya Frambu\n";

                                            for (int hp2 = 25; hp2 <= 50; hp2++)
                                            {
                                                std::cout << "Tu vida ha aumentado a: " << hp2 << std::endl;
                                                Sleep(tiempo2);
                                            }
                                            std::cout << "------------------------\n";
                                            std::cout << "-------- 50 HP ---------\n";
                                            std::cout << "------------------------\n";
                                            std::cout << "\n";
                                            std::cout << "Es el turno de Ninetales!\n";
                                            std::cout << "------------------------\n";
                                            std::cout << "\n";
                                            std::cout << "--------------------------------\n";
                                            std::cout << "Ninetales escogio ATAQUE\n";
                                            std::cout << "Ninetales usa su ataque NORMAL\n";
                                            std::cout << "Ninetales te daña con Cabezazo\n";
                                            std::cout << "Te hace 25 de daño\n";
                                            std::cout << "--------------------------------\n";


                                            for (int hp2 = 50; hp2 >= 25; hp2--)
                                            {
                                                std::cout << "Tu vida ha descendido a: " << hp2 << std::endl;
                                                Sleep(tiempo2);
                                            }
                                            std::cout << "------------------------\n";
                                            std::cout << "-------- 25 HP ---------\n";
                                            std::cout << "------------------------\n";
                                            std::cout << "Es tu turno!\n";
                                            std::cout << "¿Qué quieres hacer?\n";
                                            std::cout << "---------------------------------------\n";
                                            std::cout << "-- 1.- ATACAR --------- 2.- BOLSA -----\n";
                                            std::cout << "---------------------------------------\n";
                                            std::cout << "\n";
                                            std::cout << "-----\n";
                                            std::cout << "-- ";
                                            std::cin >> dec1;
                                            std::cout << "\n";

                                            switch (dec1)
                                            {
                                            case 1:
                                                std::cout << "----------------------\n";
                                                std::cout << "Has escogido ATACAR\n";
                                                std::cout << "¿Qué ataque deseas realizar?\n";
                                                std::cout << "--------------------------------\n";
                                                std::cout << "-- 1.- NORMAL -- 2.- ESPECIAL --\n";
                                                std::cout << "--------------------------------\n";
                                                std::cout << "\n";
                                                std::cout << "-----\n";
                                                std::cout << "-- ";
                                                std::cin >> atk;
                                                std::cout << "\n";

                                                if (atk == 1)
                                                {
                                                    std::cout << "---------------------\n";
                                                    std::cout << "Has escogido el ataque NORMAL\n";
                                                    std::cout << "Dañas al rival con Agarre\n";
                                                    std::cout << "Le haces 25 de daño\n";
                                                    std::cout << "--------------------------------------\n";

                                                    for (int hp1 = 25; hp1 >= 0; hp1--)
                                                    {
                                                        std::cout << "La vida del rival ha descendido a: " << hp1 << std::endl;
                                                        Sleep(tiempo1);
                                                    }
                                                    std::cout << "------------------------\n";
                                                    std::cout << "--------- 0 HP ---------\n";
                                                    std::cout << "------------------------\n";
                                                    std::cout << "\n";
                                                    std::cout << "Has derrotado a Ninetales!\n";
                                                    std::cout << "-------------------------\n";
                                                    std::cout << "Has ganado el combate pokemon!\n";
                                                    std::cout << "FELICIDADES!!\n";

                                                }
                                                else
                                                {
                                                    std::cout << "-----------------------------------------------------\n";
                                                    std::cout << "Has escogido el ataque ESPECIAL\n";
                                                    std::cout << "Aciertas tu ataque y dañas al rival con Martillazo\n";
                                                    std::cout << "Le haces 50 de daño\n";
                                                    std::cout << "-----------------------------------------------------\n";

                                                    for (int hp1 = 25; hp1 >= 0; hp1--)
                                                    {
                                                        std::cout << "La vida del rival ha descendido a: " << hp1 << std::endl;
                                                        Sleep(tiempo1);
                                                    }
                                                    std::cout << "------------------------\n";
                                                    std::cout << "--------- 0 HP ---------\n";
                                                    std::cout << "------------------------\n";
                                                    std::cout << "\n";
                                                    std::cout << "Has derrotado a Ninetales!\n";
                                                    std::cout << "-------------------------\n";
                                                    std::cout << "Has ganado el combate pokemon!\n";
                                                    std::cout << "FELICIDADES!!\n";
                                                }

                                                break;

                                            case 2:

                                                std::cout << "--------------------------------------------------------------------------------\n";
                                                std::cout << "Al buscar objetos en tu BOLSA te das cuenta que ya no tienes\n";
                                                std::cout << "Ninetales Aprovecha esta distraccion y usa Giro fuego para derrotar a tu pokemon\n";

                                                for (int hp2 = 50; hp2 >= 0; hp2--)
                                                {
                                                    std::cout << "Tu vida ha descendido a: " << hp2 << std::endl;
                                                    Sleep(tiempo2);
                                                }
                                                std::cout << "------------------------\n";
                                                std::cout << "--------- 0 HP ---------\n";
                                                std::cout << "------------------------\n";
                                                std::cout << "\n";
                                                std::cout << "Has perdido el combate pokemon!\n";
                                                std::cout << "-------------------------------\n";
                                                std::cout << "Suerte para la proxima!!\n";

                                                break;

                                            
                                            }

                                        }

                                        break;

                                    }
                                }
                            }

                        }
                        break;


                    default:
                        std::cout << "esa opcion no existe, lo lamento :(\n";

                    }

                    break;
                case 2:
                    std::cout << "-----------------------------------------------------\n";
                    std::cout << "Has escogido el ataque ESPECIAL\n";
                    std::cout << "Aciertas tu ataque y dañas al rival con Hidrobomba\n";
                    std::cout << "Le haces 50 de daño\n";
                    std::cout << "-----------------------------------------------------\n";

                    for (int hp1 = 50; hp1 >= 0; hp1--)
                    {
                        std::cout << "La vida del rival ha descendido a: " << hp1 << std::endl;
                        Sleep(tiempo1);
                    }
                    std::cout << "------------------------\n";
                    std::cout << "--------- 0 HP ---------\n";
                    std::cout << "------------------------\n";
                    std::cout << "\n";
                    std::cout << "Has derrotado a Ninetales!\n";
                    std::cout << "-------------------------\n";
                    std::cout << "Has ganado el combate pokemon!\n";
                    std::cout << "FELICIDADES!!\n";
                    break;
                }
                break;
            case 2:
                std::cout << "Has decidido HUIR\n";
                std::cout << "Dejaste a Vaporeon atras y Ninetales lo mato\n";
                std::cout << "Debido a esto, la region de Kanto ha decidido vetarte de ser un entrenador pokemon\n";
                std::cout << "Pasas el resto de tu vida lamentandote de esta decision\n";
                std::cout << "\n";
                std::cout << "Al momento de morir te reencuentras con Vaporeon\n";
                std::cout << "Este como su naturaleza es ser siempre fiel a su entrenador te perdona\n";
                std::cout << "Ambos pueden morir en paz y seguir su camino juntos\n";
                break;
            }
            break;
        default:
            std::cout << "Lo lamento, ese pokemon todavia no ha sido agregado :(\n";
            }
            break;
        }
        std::cout << "-----------------------------------------------------\n";
        std::cout << "¿Deseas volver a jugar el simulador?\n0.- No  1.- Si\n";
        std::cin >> repsim;
    } while (repsim == true);
}
