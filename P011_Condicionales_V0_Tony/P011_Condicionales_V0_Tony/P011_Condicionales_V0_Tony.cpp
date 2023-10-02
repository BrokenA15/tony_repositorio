// P011_Condicionales_V0_Tony.cpp  
// Tony Suarez
// Adivinar lo que piensa el usuario mediante preguntas con respuesta "si" o "no"

#include <iostream>
#include <string>
#include <windows.h>

int main()
{
    bool continuar = true;
    float a;
    bool b, c, d, e, f, g, h, i, j, k, l, m, n, o, p;

    while (continuar)
    {
        if (continuar = true)
        {
            std::cout << "Bienvenido a ColorFinder\n";
            std::cout << "En este programa tendras que pensar en un color y yo tratare de adivinarlo en base a tus respuestas\n";
            std::cout << "La manera de responder sera con: \n0.- No\n1.- Si\n";
            std::cout << "Muy bien, piensa en un color, presiona cualquier tecla y luego enter cuando estes listo\n";
            std::cin >> a;
            std::cout << "Tu color tiene como base el azul?\n";
            std::cin >> b;

            if (b == true)
            {
                std::cout << "Muy bien, tu color tiene base roja?\n";
                std::cin >> c;

                if (c == true)
                {
                    std::cout << "Tu color es morado?\n";
                    std::cin >> d;

                    if (d == true)
                    {
                        std::cout << "Logre adivinarte, he ganado\n";
                        std::cout << "Gracias por jugar, tenga un buen dia :D\n";
                    }
                    else
                    {
                        std::cout << "En ese caso tu color es azul?\n";
                        std::cin >> e;

                        if (e == true)
                        {
                            std::cout << "Logre adivinarte, he ganado\n";
                            std::cout << "Gracias por jugar, tenga un buen dia :D\n";
                        }

                        else
                        {
                            std::cout << "Tu color es rojo?\n";
                            std::cin >> h;
                            if (h == true)
                            {
                                std::cout << "Logre adivinarte, he ganado\n";
                                std::cout << "Gracias por jugar, tenga un buen dia :D\n";
                            }
                            else
                            {
                                std::cout << "Muy bien, tu color tiene base amarilla?\n";
                                std::cin >> i;
                                if (i == true)
                                {
                                    std::cout << "Tu color es verde?\n";
                                    std::cin >> j;

                                    if (j == true)
                                    {
                                        std::cout << "Logre adivinarte, he ganado\n";
                                        std::cout << "Gracias por jugar, tenga un buen dia :D\n";
                                    }
                                    else
                                    {
                                        std::cout << "Entonces tu color es blanco?\n";
                                        std::cin >> m;
                                        if (m == true)
                                        {
                                            std::cout << "Logre adivinarte, he ganado\n";
                                            std::cout << "Gracias por jugar, tenga un buen dia :D\n";
                                        }
                                        else
                                        {
                                            std::cout << "Felicidades, has logrado ganarme en mi propio juego\n";
                                            std::cout << "Gracias por jugar, tenga un buen dia :D\n";
                                        }
                                    }
                                }
                                else
                                {
                                    std::cout << "Felicidades, has logrado ganarme en mi propio juego\n";
                                    std::cout << "Gracias por jugar, tenga un buen dia :D\n";
                                }
                            }
                        }
                    }
                }
                else
                {
                    std::cout << "Muy bien, tu color tiene base amarilla?\n";
                    std::cin >> f;

                    if (f == true)
                    {
                        std::cout << "Tu color es cafe?\n";
                        std::cin >> g;

                        if (g == true)
                        {
                            std::cout << "Logre adivinarte, he ganado\n";
                            std::cout << "Gracias por jugar, tenga un buen dia :D\n";
                        }
                        else
                        {
                            std::cout << "Tu color es verde?\n";
                            std::cin >> n;

                            if (n == true)
                            {
                                std::cout << "Logre adivinarte, he ganado\n";
                                std::cout << "Gracias por jugar, tenga un buen dia :D\n";
                            }
                            else
                            {
                                std::cout << "Felicidades, has logrado ganarme en mi propio juego\n";
                                std::cout << "Gracias por jugar, tenga un buen dia :D\n";
                            }

                        }

                    }
                    else
                    {
                        std::cout << "Entonces tu color es azul\n";
                        std::cin >> p;
                        if (p == true)
                        {
                            std::cout << "Logre adivinarte, he ganado\n";
                            std::cout << "Gracias por jugar, tenga un buen dia :D\n";
                        }
                        else
                        {
                            std::cout << "Felicidades, has logrado ganarme en mi propio juego\n";
                            std::cout << "Gracias por jugar, tenga un buen dia :D\n";
                        }
                    }
                }

            }
            else
            {
                std::cout << "Muy bien, tu color tiene base roja?\n";
                std::cin >> c;
                if (c == true)
                {
                    std::cout << "Tu color tiene base amarilla?\n";
                    std::cin >> d;

                    if (d == true)
                    {
                        std::cout << "Tu color es blanco?\n";
                        std::cin >> e;
                        if (e == true)
                        {
                            std::cout << "Logre adivinarte, he ganado\n";
                            std::cout << "Gracias por jugar, tenga un buen dia :D\n";
                        }
                        else
                        {
                            std::cout << "Felicidades, has logrado ganarme en mi propio juego\n";
                            std::cout << "Gracias por jugar, tenga un buen dia :D\n";

                        }
                    }
                    else
                    {
                        std::cout << "Tu color es rojo?\n";
                        std::cin >> f;
                        if (f == true)
                        {
                            std::cout << "Logre adivinarte, he ganado\n";
                            std::cout << "Gracias por jugar, tenga un buen dia :D\n";
                        }
                        else
                        {
                            std::cout << "Felicidades, has logrado ganarme en mi propio juego\n";
                            std::cout << "Gracias por jugar, tenga un buen dia :D\n";
                        }
                    }

                }
                else
                {
                    std::cout << "Tu color es amarillo?\n";
                    std::cin >> g;
                    if (g == true)
                    {
                        std::cout << "Logre adivinarte, he ganado\n";
                        std::cout << "Gracias por jugar, tenga un buen dia :D\n";
                    }
                    else
                    {
                        std::cout << "Entonces tu color es negro\n";
                        std::cin >> o;
                        if (o == true)
                        {
                            std::cout << "Logre adivinarte, he ganado\n";
                            std::cout << "Gracias por jugar, tenga un buen dia :D\n";
                        }
                        else
                        {
                            std::cout << "Felicidades, has logrado ganarme en mi propio juego\n";
                            std::cout << "Gracias por jugar, tenga un buen dia :D\n";
                        }
                    }
                }
            }
        }
        std::cout << "Deseas volver a intentarlo?\n0.- No\n1.- Si\n";
        std::cin >> continuar;
    }
    
   
    

       
}
