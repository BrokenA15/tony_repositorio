// ProyectoMate.cpp 
// Tony Suarez
// En este programa de recompensas les mostrare las posibilidades de que hayas ganado y si lo hiciste o no 
// Todo esto mediante probabilidad simple, dependencia e independencia
// Utilizando cuando se requiere la interseccion (Regla de la multiplicacion)

#include <iostream>
#include <windows.h>
#include <locale.h>
#include <ctime>
#include <cstdlib>
#include <math.h>


void ProbabilidadSimple()//definicion
{
    Sleep(10);
    std::cout << "Este tipo de probabilidad se define como:\n";
    std::cout << "¿Que tan posible es que pase algun evento en especifico?\n";
}

void Dependencia()//definicion
{
    Sleep(10);
    std::cout << "Esto significa que los eventos que suceden antes que otros tendran un efecto en el siguiente\n";
}

void Independencia()//definicion
{
    std::cout << "Esto significa que los eventos que sucedan antes que otros no afectaran los resultados de los siguientes\n";
}


int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8");
    srand(static_cast<unsigned int>(time(0)));

    std::string usuario;
    int obj;
    int deccoin;
    int decdice;
    int deccard;

    bool cardcase;
    bool coinrep;
    bool dicerep;
    bool cardrep;
    bool rep;

    int coinone;
    int cointwo;
    int cointhree;

    int diceone;
    int dicetwo;
    int dicethree;

    int cardsign1;
    int cardsign2;
    int cardsign3;
    int cardone;
    int cardtwo;
    int cardthree;

    std::cout << "Bienvenido a \n";
    std::cout << "Este programa consistira en varios minijuegos basados en probabilidad\n";
    std::cout << "Si aciertas en alguno de nuestros siguientes juegos recibiras un premio\n";
    std::cout << "El premio variara dependiendo de que tan probable es que aciertes\n";
    std::cout << "Para empezar dime tu nombre\n";
    std::cin >> usuario;
    system("CLS");
    std::cout << "Muy bien " << usuario << "\n";
    do
    {
        std::cout << "Escoge alguno de los siguientes 3 objetos\n1.- Moneda  2.- Dado  3.- Baraja de cartas\n";
        std::cin >> obj;
        switch (obj)
        {
        case 1:
        {
            std::cout << "-------------------------\n";
            std::cout << "¡Has escogido la Moneda!\n";
            do
            {
                std::cout << "¿Quiéres hacer 1, 2 o 3 lanzamientos?\n";
                std::cout << "Recuerda, mientras menos probable sea el resultado recibiras mas reocmpensas\n";
                std::cin >> deccoin;
                system("CLS");
                switch (deccoin)
                {
                case 1:
                {
                    std::cout << "Has escogido 1 lanzamiento\n";
                    std::cout << "Lo que veras a continuacion se llama...\n";
                    Sleep(10);
                    std::cout << "¡Probabilidad Simple!\n";
                    ProbabilidadSimple();
                    Sleep(10);
                    std::cout << "Muy bien " << usuario << "\n";
                    do
                    {
                        int coin1 = rand() % 2;
                        std::cout << "Selecciona sello o aguila\n0.- Sello  1.- Aguila\n";
                        std::cin >> coinone;
                        system("CLS");
                        if (coinone == coin1)
                        {
                            std::cout << "--------------------------\n";
                            std::cout << "¡Felicidades has ganado!\n";
                            std::cout << "Acertaste el lado de la moneda correctamente\n";
                            std::cout << "Tenias un " << 0.5 * 100 << "% de acertar\n";
                            std::cout << "Esto debido a que solo son 2 opciones para escoger\n";
                            std::cout << "Y ambas tienen el mismo peso\n";

                        }
                        else
                        {
                            std::cout << "----------------------------\n";
                            std::cout << "Has perdido, lo lamento :(\n";
                            std::cout << "Escogiste la opcion incorrecta\n";
                            std::cout << "Tenias un " << 0.5 * 100 << "% de acertar\n";
                            std::cout << "Esto debido a que solo son 2 opciones para escoger\n";
                            std::cout << "Y ambas tienen el mismo peso\n";


                        }
                        std::cout << "El resultado del lanzamiento fue " << coin1 << "\n";
                        std::cout << "-------------------------\n";
                        std::cout << "Quieres volver a jugar?\n0.- No  1.- Si\n";
                        std::cout << "-------------------------\n";
                        std::cin >> coinrep;
                        system("CLS");
                    } while (coinrep == true);

                }
                break;
                case 2:
                {
                    std::cout << "¡Has escogido 2 lanzamiento!\n";
                    do
                    {

                        int coin1 = rand() % 2;
                        int coin2 = rand() % 2;

                        std::cout << "Selecciona sello o aguila para la primera moneda\n0.- Sello  1.- Aguila\n";
                        std::cin >> coinone;
                        std::cout << "Ahora selecciona sello o aguila para la segunda moneda\n0.- Sello  1.- Aguila\n";
                        std::cin >> cointwo;
                        system("CLS");
                        if (coin1 == coinone && coin2 == cointwo)
                        {
                            std::cout << "--------------------------\n";
                            std::cout << "¡Felicidades has ganado!\n";
                            std::cout << "Acertaste los lados de las monedas correctamente\n";
                            std::cout << "Tienes un " << (0.5 * 0.5) * 100 << "% de acertar\n";
                            std::cout << "Esto debido a que al lanzar una moneda tienes ´0.5´ de probabilidades de sacar cualquiera de ambos lados\n";
                            std::cout << "Entonces se multiplica ´0.5´ * ´0.5´ y nos da un resultado de ´0.25´\n";
                            std::cout << "A esto se le llama interseccion\n";

                        }
                        else
                        {
                            std::cout << "----------------------------\n";
                            std::cout << "Has perdido, lo lamento :(\n";
                            std::cout << "Escogiste los lados incorrectos\n";
                            std::cout << "Tenias un " << (0.5 * 0.5) * 100 << "% de acertar\n";
                            std::cout << "Esto debido a que al lanzar una moneda tienes ´0.5´ de probabilidades de sacar cualquiera de ambos lados\n";
                            std::cout << "Entonces se multiplica ´0.5´ * ´0.5´ y nos da un resultado de ´0.25´\n";
                            std::cout << "A esto se le llama interseccion\n";


                        }
                        std::cout << "El resultado de los lanzamientos fue " << coin1 << ", " << coin2 << "\n";

                        std::cout << "-------------------------\n";
                        std::cout << "Quieres volver a jugar?\n0.- No  1.- Si\n";
                        std::cout << "-------------------------\n";
                        std::cin >> coinrep;
                        system("CLS");

                    } while (coinrep == true);


                }
                break;
                case 3:
                {
                    std::cout << "¡Has escogido 3 lanzamiento!\n";
                    do
                    {


                        int coin1 = rand() % 2;
                        int coin2 = rand() % 2;
                        int coin3 = rand() % 2;

                        std::cout << "Selecciona sello o aguila para la primera moneda\n0.- Sello  1.- Aguila\n";
                        std::cin >> coinone;
                        std::cout << "Ahora selecciona sello o aguila para la segunda moneda\n0.- Sello  1.- Aguila\n";
                        std::cin >> cointwo;
                        std::cout << "Ahora selecciona sello o aguila para la tercera moneda\n0.- Sello  1.- Aguila\n";
                        std::cin >> cointhree;
                        system("CLS");

                        if (coin1 == coinone && coin2 == cointwo && coin3 == cointhree)
                        {
                            std::cout << "--------------------------\n";
                            std::cout << "¡Felicidades has ganado!\n";
                            std::cout << "Acertaste los lados de las monedas correctamente\n";
                            std::cout << "Tienes un " << (0.5 * 0.5 * 0.5) * 100 << "% de acertar\n";
                            std::cout << "Esto debido a que al lanzar una moneda tienes ´0.5´ de probabilidades de sacar cualquiera de ambos lados\n";
                            std::cout << "Entonces se multiplica ´0.5´ * ´0.5´ * ¨0.5¨ y nos da un resultado de ´0.125´\n";
                            std::cout << "A esto se le llama interseccion\n";

                        }
                        else
                        {
                            std::cout << "---------------------------\n";
                            std::cout << "Has perdido, lo lamento :(\n";
                            std::cout << "Escogiste los lados incorrectos\n";
                            std::cout << "Tienes un " << (0.5 * 0.5 * 0.5) * 100 << "% de acertar\n";
                            std::cout << "Esto debido a que al lanzar una moneda tienes ´0.5´ de probabilidades de sacar cualquiera de ambos lados\n";
                            std::cout << "Entonces se multiplica ´0.5´ * ´0.5´ * ¨0.5¨ y nos da un resultado de ´0.125´\n";
                            std::cout << "A esto se le llama interseccion\n";
                        }
                        std::cout << "El resultado de los lanzamientos fue " << coin1 << ", " << coin2 << ", " << coin3 << "\n";
                        std::cout << "-------------------------\n";
                        std::cout << "Quieres volver a jugar?\n0.- No  1.- Si\n";
                        std::cout << "-------------------------\n";
                        std::cin >> coinrep;
                        system("CLS");

                    } while (coinrep == true);
                }
                break;
                }
                std::cout << "---------------------------------------------\n";
                std::cout << "¿Te gustaria repetir el minijuego de la moneda?\n0.- No  1.- Si\n";
                std::cin >> coinrep;
                system("CLS");
            } while (coinrep == true);
        }
        break;// termina el case 1
        case 2:
        {
            std::cout << "¡Has escogido el dado!\n";
            do
            {
                std::cout << "¿Quiéres hacer 1, 2 o 3 lanzamientos?\n";
                std::cout << "Recuerda, mientras menos probable sea el resultado recibiras mas reocmpensas\n";
                std::cin >> decdice;
                system("CLS");
                switch (decdice)
                {
                case 1:
                {
                    std::cout << "Has escogido 1 lanzamiento\n";
                    std::cout << "Lo que veras a continuacion se llama...\n";
                    Sleep(10);
                    std::cout << "¡Probabilidad Simple!\n";
                    ProbabilidadSimple();
                    Sleep(10);
                    std::cout << "Muy bien " << usuario << "\n";

                    do
                    {


                        int dice1 = rand() % 07;
                        std::cout << "Selecciona un número del dado\n";
                        std::cin >> diceone;
                        system("CLS");
                        if (diceone == dice1)
                        {
                            std::cout << "--------------------------\n";
                            std::cout << "¡Felicidades has ganado!\n";
                            std::cout << "Acertaste el número del dado correctamente\n";
                            std::cout << "Tenias un " << 0.16 * 100 << "% de acertar\n";
                            std::cout << "Esto debido a que son 6 opciones para escoger\n";
                            std::cout << "Y todas tienen el mismo peso\n";

                        }
                        else
                        {
                            std::cout << "----------------------------\n";
                            std::cout << "Has perdido, lo lamento :(\n";
                            std::cout << "Escogiste el número incorrecto\n";
                            std::cout << "Tenias un " << 0.16 * 100 << "% de acertar\n";
                            std::cout << "Esto debido a que son 6 opciones para escoger\n";
                            std::cout << "Y todas tienen el mismo peso\n";

                        }
                        std::cout << "El resultado del lanzamiento fue " << dice1 << "\n";
                        std::cout << "-------------------------\n";
                        std::cout << "Quieres volver a jugar?\n0.- No  1.- Si\n";
                        std::cout << "-------------------------\n";
                        std::cin >> dicerep;
                        system("CLS");
                    } while (dicerep == true);
                }
                break;
                case 2:
                {
                    std::cout << "¡Has escogido 2 lanzamiento!\n";

                    do
                    {

                        int dice1 = rand() % 07;
                        int dice2 = rand() % 07;
                        std::cout << "Selecciona el primer número del dado\n";
                        std::cin >> diceone;
                        std::cout << "Selecciona el segundo número del dado\n";
                        std::cin >> dicetwo;
                        system("CLS");
                        if (diceone == dice1 && dicetwo == dice2)
                        {
                            std::cout << "--------------------------\n";
                            std::cout << "¡Felicidades has ganado!\n";
                            std::cout << "Acertaste el número del dado correctamente\n";
                            std::cout << "Tenias un " << (0.16) * (0.16) * 100 << "% de acertar\n";
                            std::cout << "Esto debido a que al lanzar un dado tienes ´0.16´ de probabilidades de sacar cualquiera de los 6 lados\n";
                            std::cout << "Entonces se multiplica ´0.16´ * ´0.16´ y nos da un resultado de ´0.0256´\n";
                            std::cout << "A esto se le llama interseccion\n";
                        }
                        else
                        {
                            std::cout << "----------------------------\n";
                            std::cout << "Has perdido, lo lamento :(\n";
                            std::cout << "Escogiste el número incorrecto\n";
                            std::cout << "Tenias un " << (0.16) * (0.16) * 100 << "% de acertar\n";
                            std::cout << "Esto debido a que al lanzar un dado tienes ´0.16´ de probabilidades de sacar cualquiera de los 6 lados\n";
                            std::cout << "Entonces se multiplica ´0.16´ * ´0.16´ y nos da un resultado de ´0.0256´\n";
                            std::cout << "A esto se le llama interseccion\n";
                        }
                        std::cout << "El resultado del lanzamiento fue " << dice1 << ", " << dice2 << "\n";
                        std::cout << "-------------------------\n";
                        std::cout << "Quieres volver a jugar?\n0.- No  1.- Si\n";
                        std::cout << "-------------------------\n";
                        std::cin >> dicerep;
                        system("CLS");
                    } while (dicerep == true);
                }
                break;
                case 3:
                {
                    std::cout << "¡Has escogido 3 lanzamiento!\n";

                    do
                    {

                        int dice1 = rand() % 07;
                        int dice2 = rand() % 07;
                        int dice3 = rand() % 07;
                        std::cout << "Selecciona el primer número del dado\n";
                        std::cin >> diceone;
                        std::cout << "Selecciona el segundo número del dado\n";
                        std::cin >> dicetwo;
                        std::cout << "Selecciona el tercer número del dado\n";
                        std::cin >> dicethree;
                        system("CLS");
                        if (diceone == dice1 && dicetwo == dice2 && dicethree == dice3)
                        {
                            std::cout << "--------------------------\n";
                            std::cout << "¡Felicidades has ganado!\n";
                            std::cout << "Acertaste el número del dado correctamente\n";
                            std::cout << "Tenias un " << (0.16) * (0.16) * (0.16) * 100 << "% de acertar\n";
                            std::cout << "Esto debido a que al lanzar un dado tienes ´0.16´ de probabilidades de sacar cualquiera de los 6 lados\n";
                            std::cout << "Entonces se multiplica ´0.16´ * ´0.16´ * ´0.16´ y nos da un resultado de ´0.0040´\n";
                            std::cout << "A esto se le llama interseccion\n";
                        }
                        else
                        {
                            std::cout << "----------------------------\n";
                            std::cout << "Has perdido, lo lamento :(\n";
                            std::cout << "Escogiste el número incorrecta\n";
                            std::cout << "Tenias un " << (0.16) * (0.16) * (0.16) * 100 << "% de acertar\n";
                            std::cout << "Esto debido a que al lanzar un dado tienes ´0.16´ de probabilidades de sacar cualquiera de los 6 lados\n";
                            std::cout << "Entonces se multiplica ´0.16´ * ´0.16´ * ´0.16´ y nos da un resultado de ´0.0040´\n";
                            std::cout << "A esto se le llama interseccion\n";
                        }
                        std::cout << "El resultado del lanzamiento fue " << dice1 << ", " << dice2 << ", " << dice3 << "\n";
                        std::cout << "-------------------------\n";
                        std::cout << "Quieres volver a jugar?\n0.- No  1.- Si\n";
                        std::cout << "-------------------------\n";
                        std::cin >> dicerep;
                        system("CLS");
                    } while (dicerep == true);
                }
                break;
                }
                std::cout << "---------------------------------------------\n";
                std::cout << "¿Te gustaria repetir el minijuego del dado?\n0.- No  1.- Si\n";
                std::cin >> dicerep;
                system("CLS");
            } while (dicerep == true);
        }
        break; //termina el case 2
        case 3:
        {
            do
            {
            std::cout << "¡Has escogido la Baraja de cartas!\n";
            std::cout << "¿Quiéres sacar 1, 2 o 3 cartas?\n";
            std::cin >> deccard;
            system("CLS");
            switch (deccard)
            {
            case 1:
            {

                std::cout << "Has escogido 1 carta\n";
                std::cout << "Lo que veras a continuacion se llama...\n";
                Sleep(10);
                std::cout << "¡Probabilidad Simple!\n";
                ProbabilidadSimple();
                Sleep(10);
                std::cout << "Muy bien " << usuario << "\n";


                do
                {

                    std::cout << "Selecciona una figura para tu carta\n1.- Corazones  2.- Trebol 3.- Diamantes  4.- Picas\n";
                    std::cin >> cardsign1;
                    system("CLS");

                    switch (cardsign1)
                    {
                    case 1:
                    {
                        do
                        {


                            int cardcora = rand() % 14;
                            std::cout << "Has escogido los corazones\n";
                            std::cout << "Ahora selecciona tu carta\n";
                            std::cout << "(Los valores para J, Q y K, seran de 11, 12 y 13 respectivamente)\n";
                            std::cin >> cardone;
                            system("CLS");

                            if (cardone == cardcora)
                            {
                                std::cout << "--------------------------\n";
                                std::cout << "¡Felicidades has ganado!\n";
                                std::cout << "Acertaste la carta de corazones\n";
                                std::cout << "Tenias un " << 0.0769 * 100 << "% de acertar\n";
                                std::cout << "Esto debido a que son 13 cartas para escoger\n";
                                std::cout << "Y todas tienen el mismo peso\n";

                            }
                            else
                            {
                                std::cout << "----------------------------\n";
                                std::cout << "Has perdido, lo lamento :(\n";
                                std::cout << "Escogiste la carta incorrecta\n";
                                std::cout << "Tenias un " << 0.0769 * 100 << "% de acertar\n";
                                std::cout << "Esto debido a que son 13 cartas para escoger\n";
                                std::cout << "Y todas tienen el mismo peso\n";
                            }
                            std::cout << "El resultado del lanzamiento fue " << cardcora << "\n";
                            std::cout << "-------------------------\n";
                            std::cout << "Quieres volver a jugar?\n0.- No  1.- Si\n";
                            std::cout << "-------------------------\n";
                            std::cin >> cardrep;
                            system("CLS");
                        } while (cardrep == true);

                    }
                    break;
                    case 2:
                    {
                        do
                        {


                            int cardtreb = rand() % 14;
                            std::cout << "Has escogido los treboles\n";
                            std::cout << "Ahora selecciona tu carta\n";
                            std::cout << "(Los valores para J, Q y K, seran de 11, 12 y 13 respectivamente)\n";
                            std::cin >> cardone;
                            system("CLS");

                            if (cardone == cardtreb)
                            {
                                std::cout << "--------------------------\n";
                                std::cout << "¡Felicidades has ganado!\n";
                                std::cout << "Acertaste la carta de treboles\n";
                                std::cout << "Tenias un " << 0.0769 * 100 << "% de acertar\n";
                                std::cout << "Esto debido a que son 13 cartas para escoger\n";
                                std::cout << "Y todas tienen el mismo peso\n";

                            }
                            else
                            {
                                std::cout << "----------------------------\n";
                                std::cout << "Has perdido, lo lamento :(\n";
                                std::cout << "Escogiste la carta incorrecta\n";
                                std::cout << "Tenias un " << 0.0769 * 100 << "% de acertar\n";
                                std::cout << "Esto debido a que son 13 cartas para escoger\n";
                                std::cout << "Y todas tienen el mismo peso\n";
                            }
                            std::cout << "El resultado del lanzamiento fue " << cardtreb << "\n";
                            std::cout << "-------------------------\n";
                            std::cout << "Quieres volver a jugar?\n0.- No  1.- Si\n";
                            std::cout << "-------------------------\n";
                            std::cin >> cardrep;
                            system("CLS");
                        } while (cardrep == true);

                    }
                    break;
                    case 3:
                    {
                        do
                        {


                            int carddiam = rand() % 14;
                            std::cout << "Has escogido los diamantes\n";
                            std::cout << "Ahora selecciona tu carta\n";
                            std::cout << "(Los valores para J, Q y K, seran de 11, 12 y 13 respectivamente)\n";
                            std::cin >> cardone;
                            system("CLS");

                            if (cardone == carddiam)
                            {
                                std::cout << "--------------------------\n";
                                std::cout << "¡Felicidades has ganado!\n";
                                std::cout << "Acertaste la carta de diamante\n";
                                std::cout << "Tenias un " << 0.0769 * 100 << "% de acertar\n";
                                std::cout << "Esto debido a que son 13 cartas para escoger\n";
                                std::cout << "Y todas tienen el mismo peso\n";

                            }
                            else
                            {
                                std::cout << "----------------------------\n";
                                std::cout << "Has perdido, lo lamento :(\n";
                                std::cout << "Escogiste la carta incorrecta\n";
                                std::cout << "Tenias un " << 0.0769 * 100 << "% de acertar\n";
                                std::cout << "Esto debido a que son 13 cartas para escoger\n";
                                std::cout << "Y todas tienen el mismo peso\n";
                            }
                            std::cout << "El resultado del lanzamiento fue " << carddiam << "\n";
                            std::cout << "-------------------------\n";
                            std::cout << "Quieres volver a jugar?\n0.- No  1.- Si\n";
                            std::cout << "-------------------------\n";
                            std::cin >> cardrep;
                            system("CLS");
                        } while (cardrep == true);

                    }
                    break;
                    case 4:
                    {
                        do
                        {


                            int cardpica = rand() % 14;
                            std::cout << "Has escogido las picas\n";
                            std::cout << "Ahora selecciona tu carta\n";
                            std::cout << "(Los valores para J, Q y K, seran de 11, 12 y 13 respectivamente)\n";
                            std::cin >> cardone;
                            system("CLS");

                            if (cardone == cardpica)
                            {
                                std::cout << "--------------------------\n";
                                std::cout << "¡Felicidades has ganado!\n";
                                std::cout << "Acertaste la carta de pica\n";
                                std::cout << "Tenias un " << 0.0769 * 100 << "% de acertar\n";
                                std::cout << "Esto debido a que son 13 cartas para escoger\n";
                                std::cout << "Y todas tienen el mismo peso\n";

                            }
                            else
                            {
                                std::cout << "----------------------------\n";
                                std::cout << "Has perdido, lo lamento :(\n";
                                std::cout << "Escogiste la carta incorrecta\n";
                                std::cout << "Tenias un " << 0.0769 * 100 << "% de acertar\n";
                                std::cout << "Esto debido a que son 13 cartas para escoger\n";
                                std::cout << "Y todas tienen el mismo peso\n";
                            }
                            std::cout << "El resultado del lanzamiento fue " << cardpica << "\n";
                            std::cout << "-------------------------\n";
                            std::cout << "Quieres volver a jugar?\n0.- No  1.- Si\n";
                            std::cout << "-------------------------\n";
                            std::cin >> cardrep;
                            system("CLS");
                        } while (cardrep == true);

                    }
                    break;
                    }
                    std::cout << "-----------------------------------------------------\n";
                    std::cout << "Te gustaria volver a escoger la figura de la carta?\n0.- No  1.-Si\n";
                    std::cin >> cardrep;
                    system("CLS");
                } while (cardrep);


            }
            break;

            case 2:
            {
                std::cout << "¡Has escogido 2 lanzamiento!\n";


                std::cout << "¿Quieres que al sacar la carta esta se quite de la baraja o se vuelva a revolver\n0.- No  1.- Si\n";
                std::cin >> cardcase;
                system("CLS");
                if (cardcase == true)
                {
                    std::cout << "Muy bien, lo que veras a continuacion se llama...\n";
                    Sleep(10);
                    std::cout << "¡Dependencia!\n";
                    Dependencia();
                    Sleep(10);
                    std::cout << "Muy bien " << usuario << "\n";

                    do
                    {

                        std::cout << "Selecciona una figura para tus carta\n1.- Corazones  2.- Trebol 3.- Diamantes  4.- Picas\n";
                        std::cin >> cardsign1;
                        system("CLS");

                        switch (cardsign1)
                        {
                        case 1:
                        {
                            do
                            {


                                int cardcora1 = rand() % 14;
                                int cardcora2 = rand() % 13;
                                std::cout << "Has escogido los corazones\n";
                                std::cout << "Ahora selecciona tu primera carta\n";
                                std::cout << "(Los valores para J, Q y K, seran de 11, 12 y 13 respectivamente)\n";
                                std::cin >> cardone;
                                std::cout << "Ahora selecciona tu segunda carta de corazones\n";
                                std::cout << "Recuerda que la anterior carta que escogiste ya no esta en la baraja\n";
                                std::cin >> cardtwo;
                                system("CLS");
                             

                                if (cardone == cardcora1 && cardtwo == cardcora2)
                                {
                                    std::cout << "--------------------------\n";
                                    std::cout << "¡Felicidades has ganado!\n";
                                    std::cout << "Acertaste las cartas de corazones\n";
                                    std::cout << "Tenias un " << (0.0769) * (0.0833) * 100 << "% de acertar\n";
                                    std::cout << "Esto debido a que son 13 cartas para escoger la primera vez y en la segunda son 12 cartas\n";
                                    std::cout << "Al agarrar una carta tenemos un ´0.0769´ de probabilidades de sacar cualquiera de las 13 cartas\n";
                                    std::cout << "Al agarrar una carta tenemos un ´0.0833´ de probabilidades de sacar cualquiera de las 12 cartas\n";
                                    std::cout << "Entonces se multiplica ´0.0769´ * ´0.0833´ y nos da un resultado de ´0.0064´\n";
                                    std::cout << "A esto se le llama interseccion\n";

                                }
                                else
                                {
                                    std::cout << "----------------------------\n";
                                    std::cout << "Has perdido, lo lamento :(\n";
                                    std::cout << "Escogiste las cartas incorrectas\n";
                                    std::cout << "Tenias un " << (0.0769) * (0.0833) * 100 << "% de acertar\n";
                                    std::cout << "Esto debido a que son 13 cartas para escoger la primera vez y en la segunda son 12 cartas\n";
                                    std::cout << "Al agarrar una carta tenemos un ´0.0769´ de probabilidades de sacar cualquiera de las 13 cartas\n";
                                    std::cout << "Al agarrar una carta tenemos un ´0.0833´ de probabilidades de sacar cualquiera de las 12 cartas\n";
                                    std::cout << "Entonces se multiplica ´0.0769´ * ´0.0833´ y nos da un resultado de ´0.0064´\n";
                                    std::cout << "A esto se le llama interseccion\n";

                                }
                                std::cout << "El resultado del lanzamiento fue " << cardcora1 << ", " << cardcora2 << "\n";
                                std::cout << "-------------------------\n";
                                std::cout << "Quieres volver a jugar?\n0.- No  1.- Si\n";
                                std::cout << "-------------------------\n";
                                std::cin >> cardrep;
                                system("CLS");
                            } while (cardrep == true);

                        }
                        break;
                        case 2:
                        {
                            do
                            {


                                int cardtreb1 = rand() % 14;
                                int cardtreb2 = rand() % 13;
                                std::cout << "Has escogido los treboles\n";
                                std::cout << "Ahora selecciona tu primera carta\n";
                                std::cout << "(Los valores para J, Q y K, seran de 11, 12 y 13 respectivamente)\n";
                                std::cin >> cardone;
                                std::cout << "Ahora selecciona tu segunda carta de treboles\n";
                                std::cout << "Recuerda que la anterior carta que escogiste ya no esta en la baraja\n";
                                std::cin >> cardtwo;
                                system("CLS");

                                if (cardone == cardtreb1 && cardtwo == cardtreb2)
                                {
                                    std::cout << "--------------------------\n";
                                    std::cout << "¡Felicidades has ganado!\n";
                                    std::cout << "Acertaste las cartas de treboles\n";
                                    std::cout << "Tenias un " << (0.0769) * (0.0833) * 100 << "% de acertar\n";
                                    std::cout << "Esto debido a que son 13 cartas para escoger la primera vez y en la segunda son 12 cartas\n";
                                    std::cout << "Al agarrar una carta tenemos un ´0.0769´ de probabilidades de sacar cualquiera de las 13 cartas\n";
                                    std::cout << "Al agarrar una carta tenemos un ´0.0833´ de probabilidades de sacar cualquiera de las 12 cartas\n";
                                    std::cout << "Entonces se multiplica ´0.0769´ * ´0.0833´ y nos da un resultado de ´0.0064´\n";
                                    std::cout << "A esto se le llama interseccion\n";

                                }
                                else
                                {
                                    std::cout << "----------------------------\n";
                                    std::cout << "Has perdido, lo lamento :(\n";
                                    std::cout << "Escogiste las cartas incorrectas\n";
                                    std::cout << "Tenias un " << (0.0769) * (0.0833) * 100 << "% de acertar\n";
                                    std::cout << "Esto debido a que son 13 cartas para escoger la primera vez y en la segunda son 12 cartas\n";
                                    std::cout << "Al agarrar una carta tenemos un ´0.0769´ de probabilidades de sacar cualquiera de las 13 cartas\n";
                                    std::cout << "Al agarrar una carta tenemos un ´0.0833´ de probabilidades de sacar cualquiera de las 12 cartas\n";
                                    std::cout << "Entonces se multiplica ´0.0769´ * ´0.0833´ y nos da un resultado de ´0.0064´\n";
                                    std::cout << "A esto se le llama interseccion\n";
                                }
                                std::cout << "El resultado del lanzamiento fue " << cardtreb1 << ", " << cardtreb2 << "\n";
                                std::cout << "-------------------------\n";
                                std::cout << "Quieres volver a jugar?\n0.- No  1.- Si\n";
                                std::cout << "-------------------------\n";
                                std::cin >> cardrep;
                                system("CLS");
                            } while (cardrep == true);

                        }
                        break;
                        case 3:
                        {
                            do
                            {


                                int carddiam1 = rand() % 14;
                                int carddiam2 = rand() % 13;
                                std::cout << "Has escogido los diamantes\n";
                                std::cout << "Ahora selecciona tu carta\n";
                                std::cout << "(Los valores para J, Q y K, seran de 11, 12 y 13 respectivamente)\n";
                                std::cin >> cardone;
                                std::cout << "Ahora selecciona tu segunda carta de diamantes\n";
                                std::cout << "Recuerda que la anterior carta que escogiste ya no esta en la baraja\n";
                                std::cin >> cardtwo;
                                system("CLS");

                                if (cardone == carddiam1 && cardtwo == carddiam2)
                                {
                                    std::cout << "--------------------------\n";
                                    std::cout << "¡Felicidades has ganado!\n";
                                    std::cout << "Acertaste las cartas de diamantes\n";
                                    std::cout << "Tenias un " << (0.0769) * (0.0833) * 100 << "% de acertar\n";
                                    std::cout << "Esto debido a que son 13 cartas para escoger la primera vez y en la segunda son 12 cartas\n";
                                    std::cout << "Al agarrar una carta tenemos un ´0.0769´ de probabilidades de sacar cualquiera de las 13 cartas\n";
                                    std::cout << "Al agarrar una carta tenemos un ´0.0833´ de probabilidades de sacar cualquiera de las 12 cartas\n";
                                    std::cout << "Entonces se multiplica ´0.0769´ * ´0.0833´ y nos da un resultado de ´0.0064´\n";
                                    std::cout << "A esto se le llama interseccion\n";

                                }
                                else
                                {
                                    std::cout << "----------------------------\n";
                                    std::cout << "Has perdido, lo lamento :(\n";
                                    std::cout << "Escogiste la carta incorrecta\n";
                                    std::cout << "Tenias un " << (0.0769) * (0.0833) * 100 << "% de acertar\n";
                                    std::cout << "Esto debido a que son 13 cartas para escoger la primera vez y en la segunda son 12 cartas\n";
                                    std::cout << "Al agarrar una carta tenemos un ´0.0769´ de probabilidades de sacar cualquiera de las 13 cartas\n";
                                    std::cout << "Al agarrar una carta tenemos un ´0.0833´ de probabilidades de sacar cualquiera de las 12 cartas\n";
                                    std::cout << "Entonces se multiplica ´0.0769´ * ´0.0833´ y nos da un resultado de ´0.0064´\n";
                                    std::cout << "A esto se le llama interseccion\n";
                                }
                                std::cout << "El resultado del lanzamiento fue " << carddiam1 << ", " << carddiam2 << "\n";
                                std::cout << "-------------------------\n";
                                std::cout << "Quieres volver a jugar?\n0.- No  1.- Si\n";
                                std::cout << "-------------------------\n";
                                std::cin >> cardrep;
                                system("CLS");
                            } while (cardrep == true);

                        }
                        break;
                        case 4:
                        {
                            do
                            {


                                int cardpica1 = rand() % 14;
                                int cardpica2 = rand() % 13;
                                std::cout << "Has escogido las picas\n";
                                std::cout << "Ahora selecciona tu primera carta\n";
                                std::cout << "(Los valores para J, Q y K, seran de 11, 12 y 13 respectivamente)\n";
                                std::cin >> cardone;
                                std::cout << "Ahora selecciona tu segunda carta de picas\n";
                                std::cout << "Recuerda que la anterior carta que escogiste ya no esta en la baraja\n";
                                std::cin >> cardtwo;
                                system("CLS");

                                if (cardone == cardpica1 && cardtwo == cardpica2)
                                {
                                    std::cout << "--------------------------\n";
                                    std::cout << "¡Felicidades has ganado!\n";
                                    std::cout << "Acertaste las cartas de picas\n";
                                    std::cout << "Tenias un " << (0.0769) * (0.0833) * 100 << "% de acertar\n";
                                    std::cout << "Esto debido a que son 13 cartas para escoger la primera vez y en la segunda son 12 cartas\n";
                                    std::cout << "Al agarrar una carta tenemos un ´0.0769´ de probabilidades de sacar cualquiera de las 13 cartas\n";
                                    std::cout << "Al agarrar una carta tenemos un ´0.0833´ de probabilidades de sacar cualquiera de las 12 cartas\n";
                                    std::cout << "Entonces se multiplica ´0.0769´ * ´0.0833´ y nos da un resultado de ´0.0064´\n";
                                    std::cout << "A esto se le llama interseccion\n";

                                }
                                else
                                {
                                    std::cout << "----------------------------\n";
                                    std::cout << "Has perdido, lo lamento :(\n";
                                    std::cout << "Escogiste las cartas incorrectas\n";
                                    std::cout << "Tenias un " << (0.0769) * (0.0833) * 100 << "% de acertar\n";
                                    std::cout << "Esto debido a que son 13 cartas para escoger la primera vez y en la segunda son 12 cartas\n";
                                    std::cout << "Al agarrar una carta tenemos un ´0.0769´ de probabilidades de sacar cualquiera de las 13 cartas\n";
                                    std::cout << "Al agarrar una carta tenemos un ´0.0833´ de probabilidades de sacar cualquiera de las 12 cartas\n";
                                    std::cout << "Entonces se multiplica ´0.0769´ * ´0.0833´ y nos da un resultado de ´0.0064´\n";
                                    std::cout << "A esto se le llama interseccion\n";
                                }
                                std::cout << "El resultado del lanzamiento fue " << cardpica1 << ", " << cardpica2 << "\n";
                                std::cout << "-------------------------\n";
                                std::cout << "Quieres volver a jugar?\n0.- No  1.- Si\n";
                                std::cout << "-------------------------\n";
                                std::cin >> cardrep;
                                system("CLS");
                            } while (cardrep == true);

                        }
                        break;
                        }
                        std::cout << "-----------------------------------------------------\n";
                        std::cout << "Te gustaria volver a escoger la figura de las cartas?\n0.- No  1.-Si\n";
                        std::cin >> cardrep;
                        system("CLS");
                    } while (cardrep);


                }
                else
                {
                std::cout << "Muy bien, lo que veras a continuacion se llama...\n";
                Sleep(10);
                std::cout << "¡Independencia!\n";
                Independencia();
                Sleep(10);
                std::cout << "Muy bien " << usuario << "\n";

                do
                {

                    std::cout << "Selecciona una figura para tus carta\n1.- Corazones  2.- Trebol 3.- Diamantes  4.- Picas\n";
                    std::cin >> cardsign1;
                    system("CLS");

                    switch (cardsign1)
                    {
                    case 1:
                    {
                        do
                        {

                            
                            int cardcora1 = rand() % 14;
                            int cardcora2 = rand() % 14;
                            std::cout << "Has escogido los corazones\n";
                            std::cout << "Ahora selecciona tu primera carta\n";
                            std::cout << "(Los valores para J, Q y K, seran de 11, 12 y 13 respectivamente)\n";
                            std::cin >> cardone;
                            std::cout << "Ahora selecciona tu segunda carta de corazones\n";
                            std::cin >> cardtwo;
                            system("CLS");


                            if (cardone == cardcora1 && cardtwo == cardcora2)
                            {
                                std::cout << "--------------------------\n";
                                std::cout << "¡Felicidades has ganado!\n";
                                std::cout << "Acertaste las cartas de corazones\n";
                                std::cout << "Tenias un " << (0.0769) * (0.0769) * 100 << "% de acertar\n";
                                std::cout << "Esto debido a que son 13 cartas para escoger ambas veces\n";
                                std::cout << "Al agarrar una carta tenemos un ´0.0769´ de probabilidades de sacar cualquiera de las 13 cartas\n";
                                std::cout << "Entonces se multiplica ´0.0769´ * ´0.0769´ y nos da un resultado de ´0.0059´\n";
                                std::cout << "A esto se le llama interseccion\n";

                            }
                            else
                            {
                                std::cout << "----------------------------\n";
                                std::cout << "Has perdido, lo lamento :(\n";
                                std::cout << "Escogiste las cartas incorrectas\n";
                                std::cout << "Tenias un " << (0.0769) * (0.0769) * 100 << "% de acertar\n";
                                std::cout << "Esto debido a que son 13 cartas para escoger ambas veces\n";
                                std::cout << "Al agarrar una carta tenemos un ´0.0769´ de probabilidades de sacar cualquiera de las 13 cartas\n";
                                std::cout << "Entonces se multiplica ´0.0769´ * ´0.0769´ y nos da un resultado de ´0.0059´\n";
                                std::cout << "A esto se le llama interseccion\n";

                            }
                            std::cout << "El resultado del lanzamiento fue " << cardcora1 << ", " << cardcora2 << "\n";
                            std::cout << "-------------------------\n";
                            std::cout << "Quieres volver a jugar?\n0.- No  1.- Si\n";
                            std::cout << "-------------------------\n";
                            std::cin >> cardrep;
                            system("CLS");
                        } while (cardrep == true);

                    }
                    break;
                    case 2:
                    {
                        do
                        {


                            int cardtreb1 = rand() % 14;
                            int cardtreb2 = rand() % 14;
                            std::cout << "Has escogido los treboles\n";
                            std::cout << "Ahora selecciona tu primera carta\n";
                            std::cout << "(Los valores para J, Q y K, seran de 11, 12 y 13 respectivamente)\n";
                            std::cin >> cardone;
                            std::cout << "Ahora selecciona tu segunda carta de treboles\n";
                            std::cin >> cardtwo;
                            system("CLS");

                            if (cardone == cardtreb1 && cardtwo == cardtreb2)
                            {
                                std::cout << "--------------------------\n";
                                std::cout << "¡Felicidades has ganado!\n";
                                std::cout << "Acertaste las cartas de treboles\n";
                                std::cout << "Tenias un " << (0.0769) * (0.0769) * 100 << "% de acertar\n";
                                std::cout << "Esto debido a que son 13 cartas para escoger ambas veces\n";
                                std::cout << "Al agarrar una carta tenemos un ´0.0769´ de probabilidades de sacar cualquiera de las 13 cartas\n";
                                std::cout << "Entonces se multiplica ´0.0769´ * ´0.0769´ y nos da un resultado de ´0.0059´\n";
                                std::cout << "A esto se le llama interseccion\n";

                            }
                            else
                            {
                                std::cout << "----------------------------\n";
                                std::cout << "Has perdido, lo lamento :(\n";
                                std::cout << "Escogiste las cartas incorrectas\n";
                                std::cout << "Tenias un " << (0.0769) * (0.0769) * 100 << "% de acertar\n";
                                std::cout << "Esto debido a que son 13 cartas para escoger ambas veces\n";
                                std::cout << "Al agarrar una carta tenemos un ´0.0769´ de probabilidades de sacar cualquiera de las 13 cartas\n";
                                std::cout << "Entonces se multiplica ´0.0769´ * ´0.0769´ y nos da un resultado de ´0.0059´\n";
                                std::cout << "A esto se le llama interseccion\n";
                            }
                            std::cout << "El resultado del lanzamiento fue " << cardtreb1 << ", " << cardtreb2 << "\n";
                            std::cout << "-------------------------\n";
                            std::cout << "Quieres volver a jugar?\n0.- No  1.- Si\n";
                            std::cout << "-------------------------\n";
                            std::cin >> cardrep;
                            system("CLS");
                        } while (cardrep == true);

                    }
                    break;
                    case 3:
                    {
                        do
                        {


                            int carddiam1 = rand() % 14;
                            int carddiam2 = rand() % 14;
                            std::cout << "Has escogido los diamantes\n";
                            std::cout << "Ahora selecciona tu carta\n";
                            std::cout << "(Los valores para J, Q y K, seran de 11, 12 y 13 respectivamente)\n";
                            std::cin >> cardone;
                            std::cout << "Ahora selecciona tu segunda carta de diamantes\n";
                            std::cin >> cardtwo;
                            system("CLS");

                            if (cardone == carddiam1 && cardtwo == carddiam2)
                            {
                                std::cout << "--------------------------\n";
                                std::cout << "¡Felicidades has ganado!\n";
                                std::cout << "Acertaste las cartas de diamantes\n";
                                std::cout << "Tenias un " << (0.0769) * (0.0769) * 100 << "% de acertar\n";
                                std::cout << "Esto debido a que son 13 cartas para escoger ambas veces\n";
                                std::cout << "Al agarrar una carta tenemos un ´0.0769´ de probabilidades de sacar cualquiera de las 13 cartas\n";
                                std::cout << "Entonces se multiplica ´0.0769´ * ´0.0769´ y nos da un resultado de ´0.0059´\n";
                                std::cout << "A esto se le llama interseccion\n";

                            }
                            else
                            {
                                std::cout << "----------------------------\n";
                                std::cout << "Has perdido, lo lamento :(\n";
                                std::cout << "Escogiste la carta incorrecta\n";
                                std::cout << "Tenias un " << (0.0769) * (0.0769) * 100 << "% de acertar\n";
                                std::cout << "Esto debido a que son 13 cartas para escoger ambas veces\n";
                                std::cout << "Al agarrar una carta tenemos un ´0.0769´ de probabilidades de sacar cualquiera de las 13 cartas\n";
                                std::cout << "Entonces se multiplica ´0.0769´ * ´0.0769´ y nos da un resultado de ´0.0059´\n";
                                std::cout << "A esto se le llama interseccion\n";
                            }
                            std::cout << "El resultado del lanzamiento fue " << carddiam1 << ", " << carddiam2 << "\n";
                            std::cout << "-------------------------\n";
                            std::cout << "Quieres volver a jugar?\n0.- No  1.- Si\n";
                            std::cout << "-------------------------\n";
                            std::cin >> cardrep;
                            system("CLS");
                        } while (cardrep == true);

                    }
                    break;
                    case 4:
                    {
                        do
                        {


                            int cardpica1 = rand() % 14;
                            int cardpica2 = rand() % 14;
                            std::cout << "Has escogido las picas\n";
                            std::cout << "Ahora selecciona tu primera carta\n";
                            std::cout << "(Los valores para J, Q y K, seran de 11, 12 y 13 respectivamente)\n";
                            std::cin >> cardone;
                            std::cout << "Ahora selecciona tu segunda carta de picas\n";
                            std::cin >> cardtwo;
                            system("CLS");

                            if (cardone == cardpica1 && cardtwo == cardpica2)
                            {
                                std::cout << "--------------------------\n";
                                std::cout << "¡Felicidades has ganado!\n";
                                std::cout << "Acertaste las cartas de picas\n";
                                std::cout << "Tenias un " << (0.0769) * (0.0769) * 100 << "% de acertar\n";
                                std::cout << "Esto debido a que son 13 cartas para escoger ambas veces\n";
                                std::cout << "Al agarrar una carta tenemos un ´0.0769´ de probabilidades de sacar cualquiera de las 13 cartas\n";
                                std::cout << "Entonces se multiplica ´0.0769´ * ´0.0769´ y nos da un resultado de ´0.0059´\n";
                                std::cout << "A esto se le llama interseccion\n";

                            }
                            else
                            {
                                std::cout << "----------------------------\n";
                                std::cout << "Has perdido, lo lamento :(\n";
                                std::cout << "Escogiste las cartas incorrectas\n";
                                std::cout << "Tenias un " << (0.0769) * (0.0769) * 100 << "% de acertar\n";
                                std::cout << "Esto debido a que son 13 cartas para escoger ambas veces\n";
                                std::cout << "Al agarrar una carta tenemos un ´0.0769´ de probabilidades de sacar cualquiera de las 13 cartas\n";
                                std::cout << "Entonces se multiplica ´0.0769´ * ´0.0769´ y nos da un resultado de ´0.0059´\n";
                                std::cout << "A esto se le llama interseccion\n";
                                
                            }
                            std::cout << "El resultado del lanzamiento fue " << cardpica1 << ", " << cardpica2 << "\n";
                            std::cout << "-------------------------\n";
                            std::cout << "Quieres volver a jugar?\n0.- No  1.- Si\n";
                            std::cout << "-------------------------\n";
                            std::cin >> cardrep;
                            system("CLS");
                        } while (cardrep == true);

                    }
                    break;
                    }
                    std::cout << "-----------------------------------------------------\n";
                    std::cout << "Te gustaria volver a escoger la figura de las cartas?\n0.- No  1.-Si\n";
                    std::cin >> cardrep;
                    system("CLS");
                } while (cardrep);

                }

            }
            break;

            case 3:
            {
                std::cout << "¡Has escogido 3 lanzamiento!\n";



                std::cout << "¿Quieres que al sacar la carta esta se quite de la baraja o se vuelva a revolver\n0.- No  1.- Si\n";
                std::cin >> cardcase;
                system("CLS");
                if (cardcase == true)
                {
                    std::cout << "Muy bien, lo que veras a continuacion se llama...\n";
                    Sleep(10);
                    std::cout << "¡Dependencia!\n";
                    Dependencia();
                    Sleep(10);
                    std::cout << "Muy bien " << usuario << "\n";

                    do
                    {

                        std::cout << "Selecciona una figura para tus carta\n1.- Corazones  2.- Trebol 3.- Diamantes  4.- Picas\n";
                        std::cin >> cardsign1;
                        system("CLS");

                        switch (cardsign1)
                        {
                        case 1:
                        {
                            do
                            {


                                int cardcora1 = rand() % 14;
                                int cardcora2 = rand() % 13;
                                int cardcora3 = rand() % 12;
                                std::cout << "Has escogido los corazones\n";
                                std::cout << "Ahora selecciona tu primera carta\n";
                                std::cout << "(Los valores para J, Q y K, seran de 11, 12 y 13 respectivamente)\n";
                                std::cin >> cardone;
                                std::cout << "Ahora selecciona tu segunda carta de corazones\n";
                                std::cout << "Recuerda que la anterior carta que escogiste ya no esta en la baraja\n";
                                std::cin >> cardtwo;
                                std::cout << "Ahora selecciona tu tercera carta de corazones\n";
                                std::cout << "Recuerda que la anterior carta que escogiste ya no esta en la baraja\n";
                                std::cin >> cardthree;
                                system("CLS");


                                if (cardone == cardcora1 && cardtwo == cardcora2 && cardthree == cardcora3)
                                {
                                    std::cout << "--------------------------\n";
                                    std::cout << "¡Felicidades has ganado!\n";
                                    std::cout << "Acertaste las cartas de corazones\n";
                                    std::cout << "Tenias un " << (0.0769) * (0.0833) * (0.09) * 100 << "% de acertar\n";
                                    std::cout << "Esto debido a que son 13 cartas para escoger la primera vez, en la segunda son 12 cartas y en la tercera son 11 cartas\n";
                                    std::cout << "Al agarrar una carta tenemos un ´0.0769´ de probabilidades de sacar cualquiera de las 13 cartas\n";
                                    std::cout << "Al agarrar una carta tenemos un ´0.0833´ de probabilidades de sacar cualquiera de las 12 cartas\n";
                                    std::cout << "Al agarrar una carta tenemos un ´0.09´ de ´probabilidades de sacar cualquiera de las 11 cartas\n";
                                    std::cout << "Entonces se multiplica ´0.0769´ * ´0.0833´ * ´0.09´ y nos da un resultado de ´0.00057´\n";
                                    std::cout << "A esto se le llama interseccion\n";
                                }
                                else
                                {
                                    std::cout << "----------------------------\n";
                                    std::cout << "Has perdido, lo lamento :(\n";
                                    std::cout << "Escogiste las cartas incorrectas\n";
                                    std::cout << "Tenias un " << (0.0769) * (0.0833) * (0.09) * 100 << "% de acertar\n";
                                    std::cout << "Esto debido a que son 13 cartas para escoger la primera vez, en la segunda son 12 cartas y en la tercera son 11 cartas\n";
                                    std::cout << "Al agarrar una carta tenemos un ´0.0769´ de probabilidades de sacar cualquiera de las 13 cartas\n";
                                    std::cout << "Al agarrar una carta tenemos un ´0.0833´ de probabilidades de sacar cualquiera de las 12 cartas\n";
                                    std::cout << "Al agarrar una carta tenemos un ´0.09´ de ´probabilidades de sacar cualquiera de las 11 cartas\n";
                                    std::cout << "Entonces se multiplica ´0.0769´ * ´0.0833´ * ´0.09´ y nos da un resultado de ´0.00057´\n";
                                    std::cout << "A esto se le llama interseccion\n";
                                }
                                std::cout << "El resultado del lanzamiento fue " << cardcora1 << ", " << cardcora2 << ", " << cardcora3 << "\n";
                                std::cout << "-------------------------\n";
                                std::cout << "Quieres volver a jugar?\n0.- No  1.- Si\n";
                                std::cout << "-------------------------\n";
                                std::cin >> cardrep;
                                system("CLS");
                            } while (cardrep == true);

                        }
                        break;
                        case 2:
                        {
                            do
                            {


                                int cardtreb1 = rand() % 14;
                                int cardtreb2 = rand() % 13;
                                int cardtreb3 = rand() % 12;

                                std::cout << "Has escogido los treboles\n";
                                std::cout << "Ahora selecciona tu primera carta\n";
                                std::cout << "(Los valores para J, Q y K, seran de 11, 12 y 13 respectivamente)\n";
                                std::cin >> cardone;
                                std::cout << "Ahora selecciona tu segunda carta de treboles\n";
                                std::cout << "Recuerda que la anterior carta que escogiste ya no esta en la baraja\n";
                                std::cin >> cardtwo;
                                std::cout << "Ahora selecciona tu tercera carta de treboles\n";
                                std::cout << "Recuerda que la anterior carta que escogiste ya no esta en la baraja\n";
                                std::cin >> cardthree;
                                system("CLS");

                                if (cardone == cardtreb1 && cardtwo == cardtreb2 && cardthree == cardtreb3)
                                {
                                    std::cout << "--------------------------\n";
                                    std::cout << "¡Felicidades has ganado!\n";
                                    std::cout << "Acertaste las cartas de treboles\n";
                                    std::cout << "Tenias un " << (0.0769) * (0.0833) * (0.09) * 100 << "% de acertar\n";
                                    std::cout << "Esto debido a que son 13 cartas para escoger la primera vez, en la segunda son 12 cartas y en la tercera son 11 cartas\n";
                                    std::cout << "Al agarrar una carta tenemos un ´0.0769´ de probabilidades de sacar cualquiera de las 13 cartas\n";
                                    std::cout << "Al agarrar una carta tenemos un ´0.0833´ de probabilidades de sacar cualquiera de las 12 cartas\n";
                                    std::cout << "Al agarrar una carta tenemos un ´0.09´ de ´probabilidades de sacar cualquiera de las 11 cartas\n";
                                    std::cout << "Entonces se multiplica ´0.0769´ * ´0.0833´ * ´0.09´ y nos da un resultado de ´0.00057´\n";
                                    std::cout << "A esto se le llama interseccion\n";
                                }
                                else
                                {
                                    std::cout << "----------------------------\n";
                                    std::cout << "Has perdido, lo lamento :(\n";
                                    std::cout << "Escogiste las cartas incorrectas\n";
                                    std::cout << "Tenias un " << (0.0769) * (0.0833) * (0.09) * 100 << "% de acertar\n";
                                    std::cout << "Esto debido a que son 13 cartas para escoger la primera vez, en la segunda son 12 cartas y en la tercera son 11 cartas\n";
                                    std::cout << "Al agarrar una carta tenemos un ´0.0769´ de probabilidades de sacar cualquiera de las 13 cartas\n";
                                    std::cout << "Al agarrar una carta tenemos un ´0.0833´ de probabilidades de sacar cualquiera de las 12 cartas\n";
                                    std::cout << "Al agarrar una carta tenemos un ´0.09´ de ´probabilidades de sacar cualquiera de las 11 cartas\n";
                                    std::cout << "Entonces se multiplica ´0.0769´ * ´0.0833´ * ´0.09´ y nos da un resultado de ´0.00057´\n";
                                    std::cout << "A esto se le llama interseccion\n";
                                }
                                std::cout << "El resultado del lanzamiento fue " << cardtreb1 << ", " << cardtreb2 << ", " << cardtreb3 << "\n";
                                std::cout << "-------------------------\n";
                                std::cout << "Quieres volver a jugar?\n0.- No  1.- Si\n";
                                std::cout << "-------------------------\n";
                                std::cin >> cardrep;
                                system("CLS");
                            } while (cardrep == true);

                        }
                        break;
                        case 3:
                        {
                            do
                            {


                                int carddiam1 = rand() % 14;
                                int carddiam2 = rand() % 13;
                                int carddiam3 = rand() % 12;

                                std::cout << "Has escogido los diamantes\n";
                                std::cout << "Ahora selecciona tu carta\n";
                                std::cout << "(Los valores para J, Q y K, seran de 11, 12 y 13 respectivamente)\n";
                                std::cin >> cardone;
                                std::cout << "Ahora selecciona tu segunda carta de diamantes\n";
                                std::cout << "Recuerda que la anterior carta que escogiste ya no esta en la baraja\n";
                                std::cin >> cardtwo;
                                std::cout << "Ahora selecciona tu tercera carta de diamantes\n";
                                std::cout << "Recuerda que la anterior carta que escogiste ya no esta en la baraja\n";
                                std::cin >> cardthree;
                                system("CLS");

                                if (cardone == carddiam1 && cardtwo == carddiam2 && cardthree == carddiam3)
                                {
                                    std::cout << "--------------------------\n";
                                    std::cout << "¡Felicidades has ganado!\n";
                                    std::cout << "Acertaste las cartas de diamantes\n";
                                    std::cout << "Tenias un " << (0.0769) * (0.0833) * (0.09) * 100 << "% de acertar\n";
                                    std::cout << "Esto debido a que son 13 cartas para escoger la primera vez, en la segunda son 12 cartas y en la tercera son 11 cartas\n";
                                    std::cout << "Al agarrar una carta tenemos un ´0.0769´ de probabilidades de sacar cualquiera de las 13 cartas\n";
                                    std::cout << "Al agarrar una carta tenemos un ´0.0833´ de probabilidades de sacar cualquiera de las 12 cartas\n";
                                    std::cout << "Al agarrar una carta tenemos un ´0.09´ de ´probabilidades de sacar cualquiera de las 11 cartas\n";
                                    std::cout << "Entonces se multiplica ´0.0769´ * ´0.0833´ * ´0.09´ y nos da un resultado de ´0.00057´\n";
                                    std::cout << "A esto se le llama interseccion\n";
                                }
                                else
                                {
                                    std::cout << "----------------------------\n";
                                    std::cout << "Has perdido, lo lamento :(\n";
                                    std::cout << "Escogiste la carta incorrecta\n";
                                    std::cout << "Tenias un " << (0.0769) * (0.0833) * (0.09) * 100 << "% de acertar\n";
                                    std::cout << "Esto debido a que son 13 cartas para escoger la primera vez, en la segunda son 12 cartas y en la tercera son 11 cartas\n";
                                    std::cout << "Al agarrar una carta tenemos un ´0.0769´ de probabilidades de sacar cualquiera de las 13 cartas\n";
                                    std::cout << "Al agarrar una carta tenemos un ´0.0833´ de probabilidades de sacar cualquiera de las 12 cartas\n";
                                    std::cout << "Al agarrar una carta tenemos un ´0.09´ de ´probabilidades de sacar cualquiera de las 11 cartas\n";
                                    std::cout << "Entonces se multiplica ´0.0769´ * ´0.0833´ * ´0.09´ y nos da un resultado de ´0.00057´\n";
                                    std::cout << "A esto se le llama interseccion\n";
                                }
                                std::cout << "El resultado del lanzamiento fue " << carddiam1 << ", " << carddiam2 << ", " << carddiam3 << "\n";
                                std::cout << "-------------------------\n";
                                std::cout << "Quieres volver a jugar?\n0.- No  1.- Si\n";
                                std::cout << "-------------------------\n";
                                std::cin >> cardrep;
                                system("CLS");
                            } while (cardrep == true);

                        }
                        break;
                        case 4:
                        {
                            do
                            {


                                int cardpica1 = rand() % 14;
                                int cardpica2 = rand() % 13;
                                int cardpica3 = rand() % 12;

                                std::cout << "Has escogido las picas\n";
                                std::cout << "Ahora selecciona tu primera carta\n";
                                std::cout << "(Los valores para J, Q y K, seran de 11, 12 y 13 respectivamente)\n";
                                std::cin >> cardone;
                                std::cout << "Ahora selecciona tu segunda carta de picas\n";
                                std::cout << "Recuerda que la anterior carta que escogiste ya no esta en la baraja\n";
                                std::cin >> cardtwo;
                                std::cout << "Ahora selecciona tu tercera carta de picas\n";
                                std::cout << "Recuerda que la anterior carta que escogiste ya no esta en la baraja\n";
                                std::cin >> cardthree;
                                system("CLS");

                                if (cardone == cardpica1 && cardtwo == cardpica2 && cardthree == cardpica3)
                                {
                                    std::cout << "--------------------------\n";
                                    std::cout << "¡Felicidades has ganado!\n";
                                    std::cout << "Acertaste las cartas de picas\n";
                                    std::cout << "Tenias un " << (0.0769) * (0.0833) * (0.09) * 100 << "% de acertar\n";
                                    std::cout << "Esto debido a que son 13 cartas para escoger la primera vez, en la segunda son 12 cartas y en la tercera son 11 cartas\n";
                                    std::cout << "Al agarrar una carta tenemos un ´0.0769´ de probabilidades de sacar cualquiera de las 13 cartas\n";
                                    std::cout << "Al agarrar una carta tenemos un ´0.0833´ de probabilidades de sacar cualquiera de las 12 cartas\n";
                                    std::cout << "Al agarrar una carta tenemos un ´0.09´ de ´probabilidades de sacar cualquiera de las 11 cartas\n";
                                    std::cout << "Entonces se multiplica ´0.0769´ * ´0.0833´ * ´0.09´ y nos da un resultado de ´0.00057´\n";
                                    std::cout << "A esto se le llama interseccion\n";
                                }
                                else
                                {
                                    std::cout << "----------------------------\n";
                                    std::cout << "Has perdido, lo lamento :(\n";
                                    std::cout << "Escogiste las cartas incorrectas\n";
                                    std::cout << "Tenias un " << (0.0769) * (0.0833) * (0.09) * 100 << "% de acertar\n";
                                    std::cout << "Esto debido a que son 13 cartas para escoger la primera vez, en la segunda son 12 cartas y en la tercera son 11 cartas\n";
                                    std::cout << "Al agarrar una carta tenemos un ´0.0769´ de probabilidades de sacar cualquiera de las 13 cartas\n";
                                    std::cout << "Al agarrar una carta tenemos un ´0.0833´ de probabilidades de sacar cualquiera de las 12 cartas\n";
                                    std::cout << "Al agarrar una carta tenemos un ´0.09´ de ´probabilidades de sacar cualquiera de las 11 cartas\n";
                                    std::cout << "Entonces se multiplica ´0.0769´ * ´0.0833´ * ´0.09´ y nos da un resultado de ´0.00057´\n";
                                    std::cout << "A esto se le llama interseccion\n";
                                }
                                std::cout << "El resultado del lanzamiento fue " << cardpica1 << ", " << cardpica2 << ", " << cardpica3 << "\n";
                                std::cout << "-------------------------\n";
                                std::cout << "Quieres volver a jugar?\n0.- No  1.- Si\n";
                                std::cout << "-------------------------\n";
                                std::cin >> cardrep;
                                system("CLS");
                            } while (cardrep == true);

                        }
                        break;
                        }
                        std::cout << "-----------------------------------------------------\n";
                        std::cout << "Te gustaria volver a escoger la figura de las cartas?\n0.- No  1.-Si\n";
                        std::cin >> cardrep;
                        system("CLS");
                    } while (cardrep);


                }
                else
                {
                    std::cout << "Muy bien, lo que veras a continuacion se llama...\n";
                    Sleep(10);
                    std::cout << "¡Independencia!\n";
                    Independencia();
                    Sleep(10);
                    std::cout << "Muy bien " << usuario << "\n";

                    do
                    {

                        std::cout << "Selecciona una figura para tus carta\n1.- Corazones  2.- Trebol 3.- Diamantes  4.- Picas\n";
                        std::cin >> cardsign1;
                        system("CLS");

                        switch (cardsign1)
                        {
                        case 1:
                        {
                            do
                            {


                                int cardcora1 = rand() % 14;
                                int cardcora2 = rand() % 14;
                                int cardcora3 = rand() % 14;

                                std::cout << "Has escogido los corazones\n";
                                std::cout << "Ahora selecciona tu primera carta\n";
                                std::cout << "(Los valores para J, Q y K, seran de 11, 12 y 13 respectivamente)\n";
                                std::cin >> cardone;
                                std::cout << "Ahora selecciona tu segunda carta de corazones\n";
                                std::cin >> cardtwo;
                                std::cout << "Ahora selecciona tu tercera carta de corazones\n";
                                std::cin >> cardthree;
                                system("CLS");


                                if (cardone == cardcora1 && cardtwo == cardcora2 && cardthree == cardcora3)
                                {
                                    std::cout << "--------------------------\n";
                                    std::cout << "¡Felicidades has ganado!\n";
                                    std::cout << "Acertaste las cartas de corazones\n";
                                    std::cout << "Tenias un " << (0.0769) * (0.0769) * (0.0769) * 100 << "% de acertar\n";
                                    std::cout << "Esto debido a que son 13 cartas para escoger las 3 veces\n";
                                    std::cout << "Al agarrar una carta tenemos un ´0.0769´ de probabilidades de sacar cualquiera de las 13 cartas\n";
                                    std::cout << "Entonces se multiplica ´0.0769´ * ´0.0769´ * ´0.0769´ y nos da un resultado de ´0.00045´\n";
                                    std::cout << "A esto se le llama interseccion\n";

                                }
                                else
                                {
                                    std::cout << "----------------------------\n";
                                    std::cout << "Has perdido, lo lamento :(\n";
                                    std::cout << "Escogiste las cartas incorrectas\n";
                                    std::cout << "Tenias un " << (0.0769) * (0.0769) * (0.0769) * 100 << "% de acertar\n";
                                    std::cout << "Esto debido a que son 13 cartas para escoger las 3 veces\n";
                                    std::cout << "Al agarrar una carta tenemos un ´0.0769´ de probabilidades de sacar cualquiera de las 13 cartas\n";
                                    std::cout << "Entonces se multiplica ´0.0769´ * ´0.0769´ * ´0.0769´ y nos da un resultado de ´0.00045´\n";
                                    std::cout << "A esto se le llama interseccion\n";

                                }
                                std::cout << "El resultado del lanzamiento fue " << cardcora1 << ", " << cardcora2 << ", " << cardcora3 << "\n";
                                std::cout << "-------------------------\n";
                                std::cout << "Quieres volver a jugar?\n0.- No  1.- Si\n";
                                std::cout << "-------------------------\n";
                                std::cin >> cardrep;
                                system("CLS");
                            } while (cardrep == true);

                        }
                        break;
                        case 2:
                        {
                            do
                            {


                                int cardtreb1 = rand() % 14;
                                int cardtreb2 = rand() % 14;
                                int cardtreb3 = rand() % 14;

                                std::cout << "Has escogido los treboles\n";
                                std::cout << "Ahora selecciona tu primera carta\n";
                                std::cout << "(Los valores para J, Q y K, seran de 11, 12 y 13 respectivamente)\n";
                                std::cin >> cardone;
                                std::cout << "Ahora selecciona tu segunda carta de treboles\n";
                                std::cin >> cardtwo;
                                std::cout << "Ahora selecciona tu tercera carta de treboles\n";
                                std::cin >> cardthree;
                                system("CLS");

                                if (cardone == cardtreb1 && cardtwo == cardtreb2 && cardthree == cardtreb3)
                                {
                                    std::cout << "--------------------------\n";
                                    std::cout << "¡Felicidades has ganado!\n";
                                    std::cout << "Acertaste las cartas de treboles\n";
                                    std::cout << "Tenias un " << (0.0769) * (0.0769) * (0.0769) * 100 << "% de acertar\n";
                                    std::cout << "Esto debido a que son 13 cartas para escoger las 3 veces\n";
                                    std::cout << "Al agarrar una carta tenemos un ´0.0769´ de probabilidades de sacar cualquiera de las 13 cartas\n";
                                    std::cout << "Entonces se multiplica ´0.0769´ * ´0.0769´ * ´0.0769´ y nos da un resultado de ´0.00045´\n";
                                    std::cout << "A esto se le llama interseccion\n";

                                }
                                else
                                {
                                    std::cout << "----------------------------\n";
                                    std::cout << "Has perdido, lo lamento :(\n";
                                    std::cout << "Escogiste las cartas incorrectas\n";
                                    std::cout << "Tenias un " << (0.0769) * (0.0769) * (0.0769) * 100 << "% de acertar\n";
                                    std::cout << "Esto debido a que son 13 cartas para escoger las 3 veces\n";
                                    std::cout << "Al agarrar una carta tenemos un ´0.0769´ de probabilidades de sacar cualquiera de las 13 cartas\n";
                                    std::cout << "Entonces se multiplica ´0.0769´ * ´0.0769´ * ´0.0769´ y nos da un resultado de ´0.00045´\n";
                                    std::cout << "A esto se le llama interseccion\n";
                                }
                                std::cout << "El resultado del lanzamiento fue " << cardtreb1 << ", " << cardtreb2 << ", " << cardtreb3 << "\n";
                                std::cout << "-------------------------\n";
                                std::cout << "Quieres volver a jugar?\n0.- No  1.- Si\n";
                                std::cout << "-------------------------\n";
                                std::cin >> cardrep;
                                system("CLS");
                            } while (cardrep == true);

                        }
                        break;
                        case 3:
                        {
                            do
                            {


                                int carddiam1 = rand() % 14;
                                int carddiam2 = rand() % 14;
                                int carddiam3 = rand() % 14;

                                std::cout << "Has escogido los diamantes\n";
                                std::cout << "Ahora selecciona tu carta\n";
                                std::cout << "(Los valores para J, Q y K, seran de 11, 12 y 13 respectivamente)\n";
                                std::cin >> cardone;
                                std::cout << "Ahora selecciona tu segunda carta de diamantes\n";
                                std::cin >> cardtwo;
                                std::cout << "Ahora selecciona tu tercera carta de diamantes\n";
                                std::cin >> cardthree;
                                system("CLS");

                                if (cardone == carddiam1 && cardtwo == carddiam2 && cardthree == carddiam3)
                                {
                                    std::cout << "--------------------------\n";
                                    std::cout << "¡Felicidades has ganado!\n";
                                    std::cout << "Acertaste las cartas de diamantes\n";
                                    std::cout << "Tenias un " << (0.0769) * (0.0769) * (0.0769) * 100 << "% de acertar\n";
                                    std::cout << "Esto debido a que son 13 cartas para escoger las 3 veces\n";
                                    std::cout << "Al agarrar una carta tenemos un ´0.0769´ de probabilidades de sacar cualquiera de las 13 cartas\n";
                                    std::cout << "Entonces se multiplica ´0.0769´ * ´0.0769´ * ´0.0769´ y nos da un resultado de ´0.00045´\n";
                                    std::cout << "A esto se le llama interseccion\n";

                                }
                                else
                                {
                                    std::cout << "----------------------------\n";
                                    std::cout << "Has perdido, lo lamento :(\n";
                                    std::cout << "Escogiste la carta incorrecta\n";
                                    std::cout << "Tenias un " << (0.0769) * (0.0769) * (0.0769) * 100 << "% de acertar\n";
                                    std::cout << "Esto debido a que son 13 cartas para escoger las 3 veces\n";
                                    std::cout << "Al agarrar una carta tenemos un ´0.0769´ de probabilidades de sacar cualquiera de las 13 cartas\n";
                                    std::cout << "Entonces se multiplica ´0.0769´ * ´0.0769´ * ´0.0769´ y nos da un resultado de ´0.00045´\n";
                                    std::cout << "A esto se le llama interseccion\n";
                                }
                                std::cout << "El resultado del lanzamiento fue " << carddiam1 << ", " << carddiam2 << "," << carddiam3 << "\n";
                                std::cout << "-------------------------\n";
                                std::cout << "Quieres volver a jugar?\n0.- No  1.- Si\n";
                                std::cout << "-------------------------\n";
                                std::cin >> cardrep;
                                system("CLS");
                            } while (cardrep == true);

                        }
                        break;
                        case 4:
                        {
                            do
                            {


                                int cardpica1 = rand() % 14;
                                int cardpica2 = rand() % 14;
                                int cardpica3 = rand() % 14;

                                std::cout << "Has escogido las picas\n";
                                std::cout << "Ahora selecciona tu primera carta\n";
                                std::cout << "(Los valores para J, Q y K, seran de 11, 12 y 13 respectivamente)\n";
                                std::cin >> cardone;
                                std::cout << "Ahora selecciona tu segunda carta de picas\n";
                                std::cin >> cardtwo;
                                std::cout << "Ahora selecciona tu tercera carta de picas\n";
                                std::cin >> cardthree;
                                system("CLS");

                                if (cardone == cardpica1 && cardtwo == cardpica2 && cardthree == cardpica3)
                                {
                                    std::cout << "--------------------------\n";
                                    std::cout << "¡Felicidades has ganado!\n";
                                    std::cout << "Acertaste las cartas de picas\n";
                                    std::cout << "Tenias un " << (0.0769) * (0.0769) * (0.0769) * 100 << "% de acertar\n";
                                    std::cout << "Esto debido a que son 13 cartas para escoger las 3 veces\n";
                                    std::cout << "Al agarrar una carta tenemos un ´0.0769´ de probabilidades de sacar cualquiera de las 13 cartas\n";
                                    std::cout << "Entonces se multiplica ´0.0769´ * ´0.0769´ * ´0.0769´ y nos da un resultado de ´0.00045´\n";
                                    std::cout << "A esto se le llama interseccion\n";

                                }
                                else
                                {
                                    std::cout << "----------------------------\n";
                                    std::cout << "Has perdido, lo lamento :(\n";
                                    std::cout << "Escogiste las cartas incorrectas\n";
                                    std::cout << "Tenias un " << (0.0769) * (0.0769)* (0.0769) * 100 << "% de acertar\n";
                                    std::cout << "Esto debido a que son 13 cartas para escoger las 3 veces\n";
                                    std::cout << "Al agarrar una carta tenemos un ´0.0769´ de probabilidades de sacar cualquiera de las 13 cartas\n";
                                    std::cout << "Entonces se multiplica ´0.0769´ * ´0.0769´ * ´0.0769´ y nos da un resultado de ´0.00045´\n";
                                    std::cout << "A esto se le llama interseccion\n";

                                }
                                std::cout << "El resultado del lanzamiento fue " << cardpica1 << ", " << cardpica2 << ", " << cardpica3 << "\n";
                                std::cout << "-------------------------\n";
                                std::cout << "Quieres volver a jugar?\n0.- No  1.- Si\n";
                                std::cout << "-------------------------\n";
                                std::cin >> cardrep;
                                system("CLS");
                            } while (cardrep == true);

                        }
                        break;
                        }
                        std::cout << "-----------------------------------------------------\n";
                        std::cout << "Te gustaria volver a escoger la figura de las cartas?\n0.- No  1.-Si\n";
                        std::cin >> cardrep;
                        system("CLS");
                    } while (cardrep);

                }

            }
            break;
            }
            std::cout << "-----------------------------------------\n";
            std::cout << "¿Te gustaria repetir el minijuego de la baraja de cartas?\n0.- No  1.- Si\n";
            std::cin >> cardrep;
            system("CLS");

            }while (cardrep == true);
        }
        break;//termina el case 3
        default:
        {

            std::cout << "Lo lamento, ese objeto no ha sido agregado :(\n";
            std::cout << "\n";

        }
        }
        std::cout << "------------------------------------------------\n";
        std::cout << "¿Deseas repetir este programa de probabilidad?\n0.- No  1.- Si\n";
        std::cin >> rep;
        system("CLS");
    } while (rep == true);
    system("CLS");
}