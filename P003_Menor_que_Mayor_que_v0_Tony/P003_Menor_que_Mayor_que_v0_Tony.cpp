// P003_Menor_que_Mayor_que_v0_Tony.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Tony Suarez
//Se hara un algoritmo para saber cual de los dos numeros es el mayor y cual es el menor

#include <iostream>
#include <cmath>
#include <string>

int main()
{
    std::string nombre;
    float numero1;
    float numero2;
    std::cout << "Hola!, bienvenido\n";
    std::cout << "Este programa te dira que numero es mayor y cual menor\n";
    std::cout << "Para empezar dame tu nombre\n";
    getline(std::cin, nombre);
    std::cout << "Perfecto " << nombre << " ahora dame 2 numeros de diferentes valores\n";
    std::cin >> numero1;
    std::cin >> numero2;
    if (numero1 == numero2)
    std::cout << "Ambos numeros son iguales \nGracias por participar, tenga un lindo dia :D\n";
    else
    {if (numero1 > numero2)
    std::cout << "El numero mayor es: " << numero1 << std::endl;
        else
    std::cout << "El numero mayor es: " << numero2 << std::endl;
    std::cout << "Gracias por participar, tenga un lindo dia :D\n";}
}

