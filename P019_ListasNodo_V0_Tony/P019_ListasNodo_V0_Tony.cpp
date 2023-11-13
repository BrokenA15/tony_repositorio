// P019_ListasNodo_V0_Tony.cpp 
// Tony Suarez
// Realizar un nodo sencillo de cuerpo.

#include <windows.h>
#include <iostream>

class nodo
{
public:
    int edad;
    nodo* next;
};

int main()
{
    nodo* cabeza = NULL;
    nodo* torso = NULL;
    nodo* brazos = NULL;
    nodo* piernas = NULL;
    nodo* pies = NULL;

    cabeza = new nodo();
    torso = new nodo();
    brazos = new nodo();
    piernas = new nodo();
    pies = new nodo();


    cabeza->edad = 25;
    cabeza->next = torso;

    torso->edad = 20;
    torso->next = brazos;

    brazos->edad = 15;
    brazos->next = piernas;

    piernas->edad = 10;
    piernas->next = pies;

    pies->edad = 5;
    pies->next = NULL;

    while (cabeza != NULL)
    {
        std::cout << "La edad del nodo del cuerpo es: " << cabeza->edad << std::endl;
        cabeza = cabeza->next;
    }
}

