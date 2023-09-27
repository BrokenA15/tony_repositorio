// P007_Decisiones_V0_Tony.cpp
// Tony Suarz
// Solicitarle al usuario un numero de jugadores y darle el numero de batallas que se tendran en base a que sistema escoja

#include <iostream>
#include <math.h>
#include <string>

int main()

{

    int a;

    std::cout << "Hola! Bienvenido al simulador de arena y batallas\n";
    std::cout << "Aun estamos trabajando para hacerlo realidad\n";
    std::cout << "Afortunadamente podemos darte la cantidad de batallas que se haran para obtener un ganador en diferentes sistemas de combate\n";
   
    int combat = 0;
    int part = 0;
  
    std::cout << "Para empezar es necesario que escojas un sistema de combate:\n";
    std::cout << "1.- Royal Rumble\n2.- Eliminatoria Directa\n3.- Grupos, Octavos de final, Semifinal y Final\n";
    std::cin >> combat;
   
    switch (combat)
   
    {

    case 1:

        std::cout << "Haz elegido Royal Rumble\n";
        std::cout << "Es necesario que ingreses una cantidad de peleadores para decirte cuantos combates seran\n";
        std::cin >> a;
        std::cout << "Royal Rumble es un combate en donde se iran incorporando los demas peleadores por intervalos de tiempo\n";
        std::cout << "Cuando un peleador es sacado del cuadrilatero se eliminara automaticamente\n";
        std::cout << "Por lo tanto en el Royal rumble solo habra 1 combate y concluira con 1 ganador.\n";
       
        break;

    case 2:

        std::cout << "Haz elegido Eliminatoria Directa\n";
        std::cout << "Es necesario que ingreses una cantidad de peleadores para decirte cuantos combates seran, minimo 2 peleadores.\n";
        std::cin >> a;
        std::cout << "Muy bien, en la Eliminatoria Directa serian:\n";
        std::cout << a - 1 << std::endl;
         
        break;

    case 3:

        std::cout << "Haz elegido Grupos, Octavos de final, Semifinal y Final.";
        std::cout << "Es necesario que ingreses una cantidad de peleadores para decirte cuantos combates seran.\n";
        std::cout << "Para este caso, como los grupos tienen que estar completos te pondre 3 opciones\n1.- 16\n2.- 32\n3.- 48\n";
        std::cin >> part;
      
        switch (part)
        {

         case 1:

             std::cout << "Escogiste la opcion de 16 participantes, en este caso seran:\n";
             std::cout << "8 combates en la fase de grupos, 4 en los octavos, 2 en la semifinal y 1 en la final\n";
             std::cout << "Lo cual nos da un total de 15 combates y 1 ganador\n";

             break;

         case 2:

             std::cout << "Escogiste la opcion de 32 participantes, en este caso seran:\n";
             std::cout << "16 combates en la fase de grupos, 12 en los octavos, 2 en la semifinal y 1 en la final\n";
             std::cout << "Lo cual nos da un total de 31 combates y 1 ganador\n";
             
             break;

         case 3:

             std::cout << "Escogiste la opcion de 48 participantes, en este caso seran:\n";
             std::cout << "24 combates en la fase de grupos, 20 en los octavos, 2 en la semifinal y 1 en la final\n";
             std::cout << "Lo cual nos da un total de 47 combates y 1 ganador\n";
             
             break;

         default:
             std::cout << "Lo siento, todavia no tenemos la capacidad de soportar tantos jugadores :(\n";
        }
        break;

    default:

               std::cout << "Lo lamentamos, ese tipo de combate todavia no ha sido implementado.\n";
    }

    std::cout << "Gracias por interesarte en este programa, trataremos de tener la version completa en unos meses.\n";
    std::cout << "Gracias por entender, que tenga un lindo dia :D\n";
}