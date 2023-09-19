// P002_Valor_Absoluto_V0_Tony.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Tony Suarez
//Se creara un algoritmo para obtener el valor absoluto de un numero

#include <iostream>
#include <locale.h>
#include <string>
#include <cmath>

int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8");
    std::string Nombre;
    float numero1;

    std::cout << "Hola, bienvenido a este programa de valor absoluto\n";
    std::cout << "Para empezar dime tu nombre\n";
    getline(std::cin, Nombre);
    std::cout << "Muy bien " << Nombre << ", ahora dame un numero y te dare su valor absoluto\n";
    std::cin >> numero1;
    float ValorA = abs(numero1);
    std::cout << "El valor absoluto es " << ValorA << std::endl;
    std::cout << "Muchas gracias por participar, que tenga un buen dia :D\n";
        
}

