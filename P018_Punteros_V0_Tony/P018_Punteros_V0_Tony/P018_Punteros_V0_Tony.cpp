
// P018_Punteros_V0_Tony
// Tony Suarez 
// Generar una matriz automatizada al ingresar datos
// si las columnas y filas son menor a 3 sera manual 




#include <iostream>
#include <locale.h>
#include <windows.h>    

int main() {
    setlocale(LC_ALL, "ES_MX.UTF-8");
    bool rep = true;
    int fil, col;
    int k, l;

    do
    {
        std::cout << "Bienvenido a este generador de matricez\n";
        std::cout << "Primero ingresa el numero de filas\n";
        std::cin >> fil;
        std::cout << "Ahora las columnas\n";
        std::cin >> col;

        int** Matriz = new int* [fil];

        if ((fil == 2 && col == 2) || (fil == 3 && col == 3) || (fil == 2 && col == 3)) {
            std::cout << "Para este tamaño de matriz tienes que poner los elementos manualmente\n";
            for (int i = 0; i < fil; i++)
            {
                Matriz[i] = new int[col];
                for (int j = 0; j < col; j++)
                {
                    std::cout << "Ingresa un valor para la posición [" << i << "][" << j << "]: ";
                    std::cin >> Matriz[i][j];
                }
            }
        }
        else
        {
            std::cout << "Continuemos\n";
            for (int i = 0; i < fil; i++)
            {
                Matriz[i] = new int[col];
            }
            std::srand(static_cast<unsigned>(std::time(0)));

            for (int i = 0; i < fil; i++)
            {
                for (int j = 0; j < col; j++)
                {
                    Matriz[i][j] = std::rand() % 9;
                    std::cout << Matriz[i][j] << " ";
                }
                std::cout << "\n";
            }
        }
        if ((fil == 2 && col == 2) || (fil == 3 && col == 3) || (fil == 2 && col == 3))
        {
            std::cout << "Posiciones de la matriz:\n";
            for (int i = 0; i < fil; i++) {
                for (int j = 0; j < col; j++)
                {
                    std::cout << "[" << i << "][" << j << "] ";
                }
                std::cout << "\n";
            }
        }
        for (int i = 0; i < fil; i++)
        {
            delete[] Matriz[i];
        }
        delete[] Matriz;


        std::cout << "¿Quieres repetir el algoritmo?\n";
        std::cout << "0.- No  1.- Si\n";
        std::cin >> rep;
        system("CLS");
    } while (rep);
}
