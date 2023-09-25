//P008_Bucles_V0_Tony.cpp 
//Tony Suarez
//Funcionamiento de bucles
//While - Do while - For

#include <iostream>
#include <string>
#include <windows.h>

int main(){
int milesima_de_segundo = 1000, s = 1;
//While
{
    bool continuar = true;
    while (continuar)
    {
        std::cout << "Has muerto...\n Deseas revivir?\n0.-No \n1.-Si\n";
        std::cin >> continuar;
    }
    //Do While
    do
    {
        std::cout << "Que cobarde...\nTe dare una ultima oportunidad pero tendras que matar a este dragon, aceptas? \n0.-No\n1.-Si\n";
        std::cin >> continuar;
    } while (continuar);
    //For
    std::cout << "Tu te lo buscaste...";
    
    
        for (int i = 20; i >= 0; i = i - 1)
        {
            std::cout << s << std::endl;
            Sleep(milesima_de_segundo);
            
            std::cout << "Tu indicador de salud bajo a: " << i;
            std::cout << std::endl;
        }
        std::cout << "Los debiles no deciden donde morir...\n";
}
}
