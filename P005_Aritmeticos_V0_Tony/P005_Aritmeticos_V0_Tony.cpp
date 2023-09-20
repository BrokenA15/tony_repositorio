// P005_Aritmeticos_V0_Tony.cpp 
//Tony Suarez
//Repaso de los operadores aritmeticos

#include <iostream>
#include <math.h>
#include <string>
int main()
{
    float a;
    float b;
    float c;
    std::string Nombre;

    std::cout << "Hola! Antes de comenzar, dime tu nombre: \n";
    getline(std::cin, Nombre);
    std::cout << "Gracias " << Nombre << ", por favor dame dos numeros y te dare varias operaciones aritmeticas y sus resultados\n";
    std::cin >> a;
    std::cin >> b;
    std::cout << "La suma de estos dos numeros te dara: " << a + b << std::endl;
    std::cout << "La resta de estos dos numeros te dara: " << a - b << std::endl;
    std::cout << "La multiplicacion de estos dos numeros te dara: " << a * b << std::endl;
    std::cout << "La division de estos dos numeros te dara: " << a / b << std::endl;
    std::cout << "Ahora para la potencia multiplicaremos el primer digito por si mismo las veces que el segundo digito diga\n";
    c = pow(a, b);
    std::cout << "El resultado de la potencia es: " << c << std::endl;
    std::cout << "Ahora sacaremos la raiz del resultado de la exponente\n";
    std::cout << "El resultado de la raiz es: " << sqrt(c) << std::endl;
    std::cout << "Muchas gracias por participar, tenga un excelente dia :D\n";

      
}

