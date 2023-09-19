// P003_Variables_V0_Tony.cpp : 
// Tony Suarez
// Este programa tendra impresion de pantalla.
// Creacion de variables
// Inicializacion de variables
// Solicitud de variables al usario

#include <iostream>
#include <string>
int main()
{
    //Variables creacion
    //tipo de variable "nombre de variable" = "inicializacion"
    bool mi_primer_booleano = true;
    int mi_primer_entero = 0;
    float mi_primer_flotante = 0.0;
    char mi_primer_caracter = 'a';
    char mi_primera_cadenacaracteres[100] = "Hola vato";
    std::string mi_primer_string = "Alo amigos de youtube";
    //Mostrarle al usuario lo que creamos de variables
    std::cout << "Muy buenos dias Tony espero que estes bien\n";
    std::cout << "En el booleano tienes guardado: " << mi_primer_booleano << std::endl;
    std::cout << "En el entero tienes guardado: " << mi_primer_entero << std::endl;
    std::cout << "En el flotante tienes guardado: " << mi_primer_flotante << std::endl;
    std::cout << "En el caracter tienes guardado: " << mi_primer_caracter << std::endl;
    std::cout << "En la cadena de caracteres tienes guardado: " << mi_primera_cadenacaracteres << std::endl;
    std::cout << "En el string tienes guardado: " << mi_primer_string << std::endl;

    //Solicitar al usuario cambios
    std::cout << "Hola usuario dame por favor un 0 o 1" << std::endl;
    std::cin >> mi_primer_booleano;
    std::cout << "En el booleano ahora tienes guardado: " << mi_primer_booleano << std::endl;
    std::cout << "\n";
    std::cout << "Ahora dame por favor un numero entero" << std::endl;
    std::cin >> mi_primer_entero;
    std::cout << "En el entero ahora tienes guardado: " << mi_primer_entero << std::endl;
    std::cout << "\n";
    std::cout << "Ahora por favor un entero con punto decimal" << std::endl;
    std::cin >> mi_primer_flotante;
    std::cout << "En el flotante ahora tienes guardado: " << mi_primer_flotante << std::endl;
    std::cout << "\n";
    std::cout << "Ahora por favor un caracter nuevo" << std::endl;
    std::cin >> mi_primer_caracter;
    std::cout << "En el caracter ahora tienes guardado: " << mi_primer_caracter << std::endl;
    std::cout << "\n";
    std::cout << "Ahora por favor una palabra" << std::endl;
    std::cin >> mi_primera_cadenacaracteres;
    std::cout << "En la cadena de caracteres ahora tienes guardado: " << mi_primera_cadenacaracteres << std::endl;
    std::cout << "\n";
    std::cout << "Ahora por favor una oracion sin limite de caracteres" << std::endl;
    std::cin >> mi_primer_string;
    std::cout << "Ahora en el string tienes guardado: " << mi_primer_string << std::endl;
    std::cout << "\n";

    //operaciones aritmeticas
    //suma, resta, multiplicacion, division, potencia y raiz
    
    std::cout << "Ahora haremos operaciones aritmeticas\n";
    float a, b, c;
    a = 10;
    b = 5;
    c = a / b;

    std::cout << "Empezaremos con la suma\n";
    std::cout << "Dame dos numeros para sumar por favor\n";
    std::cin >> a;
    std::cin >> b;
    std::cout << "El resultado de esta suma es " << a + b << std::endl;
    std::cout << "Ahora haremos una resta\n";
    std::cout << "Dame dos digitos para restar por favor\n";
    std::cin >> a;
    std::cin >> b;
    std::cout << "El resultado de la resta es " << a - b << std::endl;
    std::cout << "Ahora haremos una multiplicacion\n";
    std::cout << "Dame dos digitos para multiplicar por favor\n";
    std::cin >> a;
    std::cin >> b;
    std::cout << "El resultado de la multiplicacion es " << a * b << std::endl;
    std::cout << "Ahora haremos una division\n";
    std::cout << "Dame dos digitos para dividir por favor\n";
    std::cin >> a;
    std::cin >> b;
    std::cout << "El resultado de la division es " << a / b << std::endl;
    std::cout << "Ahora haremos una raiz\n";
    std::cout << "Ahora usaremos los exponentes\n";
    std::cout << "Dame un digito y su exponente\n";
    std::cin >> a;
    std::cin >> b;
    std::cout << "El resultado del exponente es " << pow (a , b)<< std::endl;
    std::cout << "Dame un digito para sacarle su raiz por favor\n";
    std::cin >> a;
    std::cout << "El resultado de la raiz es " << sqrt (a) << std::endl;
    std::cout << "Muchas gracias por responder, tenga un excelente dia :D" << std::endl;





    



}
