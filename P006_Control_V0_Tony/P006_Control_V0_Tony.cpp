// P006_Control_V0.cpp : 
// Tony Suarez
// Sintaxys de las estructuras de control, If, else, switch

#include <iostream>
#include <string>

int main()
{  
    bool dec1, dec2;
    std::string Cal1 = "Calabozo 1", Cal2 = "Calabozo 2";
    std::cout << "Bienvenido guerrero en tu travesia para rescatar a la princesa te encontraste con un zombie" <<
        " Que haces? 1.- Atacas 0.- Huyes\n";
    std::cin >> dec1;
    if (dec1 == true)
    {
        std::cout << "Que valiente eres, acabas de ingresar al " << Cal1 <<
            " Te encontraste con un ogro que deseas hacer? \n" <<
            "1.- Atacas 0.- Huyes \n";
        std::cin >> dec2;
        if (dec2 == true)
        {
            std::cout << "Derrotaste al ogro y encontraste una princesa" <<
                " Como eres un guerrero la llevas a su reino donde te alaban y te nombran el nuevo rey\n";
        }
        else
        {
            std::cout << "El ogro te siguio hasta el reino y ocurrio una masacre, bien hecho\n";
        }
    }
    else
    {
        std::cout << "Regresas al reino sin la princesa y te hechan de los guerreros y deshonras a tu familia\n";
    }
    //Sintaxys de SWITCH-CASE
    int opc = 0;
    std::cout << "Encontraste una calculadora en el reino\n";
    std::cout << "Que operacion deseas realizar? \n1.- Suma\n2.- Resta\n3.- Multiplicacion \n";
    std::cin >> opc;
    int a , b;
    std::cout << "Muy bien, ahora dame dos numeros para hacer esta operacion\n";
    std::cin >> a;
    std::cin >> b;
    switch (opc)
    {
    case 1:
        std::cout << "La suma es: " << a + b;
        break;
    case 2:        
        std::cout << "La resta es: " << a - b;
        break;
    case 3:
        std::cout << "La multiplicacion es: " << a * b;
        break;
    default:
        std::cout << "Esa opcion no la conozco\n";
    }
    std::cout << "Muchas gracias por participar, tenga un excelente dia :D\n";
}