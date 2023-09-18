// P004_Entradasalida_V0_Tony.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Tony Suarez 
//Realizar un consultorio medico el cual solicite 3 bool 2 string 1 char 2 int y 1 float
//Al final te dara tu IMC

#include <iostream>
#include <locale.h>
#include <string>

int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8");
    bool sintoma1, sintoma2, sintoma3;
    std::string Nombre;
    std::string Relato;
    char sexo;
    int edad;
    int peso;
    float altura;
    float IMC;

    std::cout << "Bienvenido al consultorio en linea del Doctor Tony\n";
    std::cout << "Por favor dame tu nombre completo\n";
    getline(std::cin, Nombre);
    std::cout << "Muy bien " << Nombre << " ahora dime tu sexo, ¿H o M?\n";
    std::cin >> sexo;
    std::cout << "Gracias, me puedes decir tu edad por favor?\n";
    std::cin >> edad;
    std::cout << "Cuentame, ¿Porque decidiste venir a esta consulta?\n";
    std::cin.ignore();
    getline(std::cin, Relato);
    std::cout << "Entiendo\nA continuacion te preguntare varios sintomas y me responderas un 0 si no lo sientes y un 1 si lo haz sentido durante la ultima semana\n¿Sientes Fiebre?\n";
    std::cin >> sintoma1;
    std::cout << "¿Sientes Cuerpo cortado?\n";
    std::cin >> sintoma2;
    std::cout << "¿Sientes molestias en tus articulaciones?\n";
    std::cin >> sintoma3;
    std::cout << "Finalmente necesitare tu peso y altura, gracias\n";
    std::cin >> peso;
    std::cin >> altura;
    std::cout << "Muchas gracias, ahora te dare tu Indice de Masa Corporal (IMC): " << peso / (altura / 100 * altura / 100) << std::endl;
    std::cout << "Gracias por interesarte en esta consulta online, te dare el número de un doctor para que lo llames y te recete medicina\n";
    std::cout << "3330075766, te recomiendo llamar antes del jueves\nQue tenga un excelente dia, nos vemos :D <3";
}