// P009_Condicionales_V0_Tony.cpp 
//Tony Suarez
// Se creara una calculador la cual haga todas las operaciones basicas, valor absoluto, mayor que y menor que

#include <iostream>
#include <math.h>
#include <string>

int main()
{
    float  a;
    float  b;

    std::cout << "Hola!, bienvenido a la calculadora de Tony\n";
    int num = 0;
        bool continuar = true;
        while (continuar)
        {
            if (continuar == true)
            {
                std::cout << "Por favor pon el numero de la operacion que quieras hacer\n";
                std::cout << "1.- suma\n2.- resta\n3.- multiplicacion\n4.- division\n5.- exponente\n6.- raiz cuadrada\n7.- valor absoluto\n8.- mayor que menor que\n";
                std::cin >> num;

                switch (num)
                {
                case 1:
                    std::cout << "Perfecto, ahora dame dos numeros para hacer la suma\n";
                    std::cin >> a;
                    std::cin >> b;
                    std::cout << "El resultado de esta suma es: " << a + b << std::endl;
                    break;

                case 2:
                    std::cout << "Perfecto, ahora dame dos numeros para hacer la resta\n";
                    std::cin >> a;
                    std::cin >> b;
                    std::cout << "El resultado de esta resta es: " << a - b << std::endl;
                    break;

                case 3:
                    std::cout << "Perfecto, ahora dame dos numeros para hacer la multiplicacion\n";
                    std::cin >> a;
                    std::cin >> b;
                    std::cout << "El resultado de esta multiplicacion es: " << a * b << std::endl;
                    break;

                case 4:
                    std::cout << "Perfecto, ahora dame dos numeros para hacer la division\n";
                    std::cin >> a;
                    std::cin >> b;
                    std::cout << "El resultado de esta division es: " << a / b << std::endl;
                    break;

                case 5:
                    std::cout << "Perfecto, ahora dame un digito y un exponente\n";
                    std::cin >> a;
                    std::cin >> b;
                    std::cout << "El resultado de este exponente es: " << pow(a, b) << std::endl;
                    break;

                case 6:
                    std::cout << "Perfecto, ahora dame un numero para sacarle la raiz cuadrada\n";
                    std::cin >> a;
                    std::cout << "El resultado de esta raiz es: " << sqrt(a) << std::endl;
                    break;

                case 7:
                    std::cout << "Perfecto, ahora dame un numero y le sacare el valor absoluto\n";
                    std::cin >> a;
                    std::cout << "El valor absoluto es: " << abs(a) << std::endl;
                    break;

                case 8:
                    std::cout << "Perfecto, ahora dame dos numeros y te dire cual es mayor\n";
                    std::cin >> a;
                    std::cin >> b;
                    if (a == b)
                    {
                        std::cout << "Ambos numeros son iguales\n";
                    }
                    else
                    {
                        if (a > b)
                        {
                            std::cout << "El numero mayor es: " << a << std::endl;
                        }

                        else
                        {
                            std::cout << "El numero mayor es :" << b << std::endl;
                        }

                    }

                default:
                    std::cout << "Estamos trabajando para agregar mas opciones, muchas gracias por entender\n";
                }
                
                std::cout << "Deseas hacer otra operacion?\n0.- No\n1.- Si\n";
                std::cin >> continuar;
            }
            else
            {
                std::cout << "Gracias por confiar en la calculadore de Tony, ten un excelente dia :D\n";
            }
        }
        std::cout << "Gracias por confiar en la calculadore de Tony, ten un excelente dia :D\n";       
        }
