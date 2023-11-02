// P016_Matrices_V0_Tony.cpp 
// Hacer 3 matrices ([3][3]; [5][5]; [10][10];)
// Rellenar de forma aleatoria entre 0 y 10.

#include <iostream>
#include <windows.h>
#include <ctime>

int main()
{
    bool repetir = true;
    int matriz;
    int Tiempo1 = 150, s1 = 1;
    int Tiempo2 = 100, s2 = 1;
    int Tiempo3 = 50, s3 = 1;

    do
    {
        std::cout << "Bienvenido al randomizador de matrices\n";
        std::cout << "Tendras 3 opciones de matrices:\n";
        std::cout << "1.- Matriz [3][3]\n";
        std::cout << "2.- Matriz [5][5]\n";
        std::cout << "3.- Matriz [10][10]\n";
        std::cout << "Que matriz deseas randomizar?\n";
        std::cin >> matriz;

        switch (matriz)
        {
        case 1:
        {
            std::cout << "------------------------------\n";
            std::cout << "Has escogido la matriz [3][3]\n";
            std::cout << "------------------------------\n";
            srand(time(NULL));
            int matriz1[3][3];

            int filas1 = sizeof(matriz1) / sizeof(matriz1[0]);
            int columnas1 = sizeof(matriz1[0]) / sizeof(matriz1[0][0]);

            std::cout << "El numero de filas es: " << filas1 << "\n";
            std::cout << "El numero de columnas es: " << columnas1 << "\n";

            for (int i = 0; i < filas1; i++)
            {

                for (int j = 0; j < columnas1; j++)
                {
                    matriz1[i][j] = rand() % 9;
                    std::cout << matriz1[i][j] << " ";
                    Sleep(Tiempo1);
                }
                std::cout << "\n";
            }
            break;
        }


        case 2:
        {
            std::cout << "------------------------------\n";
            std::cout << "Has escogido la matriz [5][5]\n";
            std::cout << "------------------------------\n";

            int matriz2[5][5];

            int filas2 = sizeof(matriz2) / sizeof(matriz2[0]);
            int columnas2 = sizeof(matriz2[0]) / sizeof(matriz2[0][0]);

            std::cout << "El numero de filas es: " << filas2 << "\n";
            std::cout << "El numero de columnas es: " << columnas2 << "\n";

            for (int i = 0; i < filas2; i++)
            {

                for (int j = 0; j < columnas2; j++)
                {
                    matriz2[i][j] = rand() % 9;
                    std::cout << matriz2[i][j] << " ";
                    Sleep(Tiempo2);
                }
                std::cout << "\n";
            }
            break;
        }


        case 3:
        {
            std::cout << "--------------------------------\n";
            std::cout << "Has escogido la matriz [10][10]\n";
            std::cout << "--------------------------------\n";

            int matriz3[10][10];

            int filas3 = sizeof(matriz3) / sizeof(matriz3[0]);
            int columnas3 = sizeof(matriz3[0]) / sizeof(matriz3[0][0]);

            std::cout << "El numero de filas es: " << filas3 << "\n";
            std::cout << "El numero de columnas es: " << columnas3 << "\n";

            for (int i = 0; i < filas3; i++)
            {
                for (int j = 0; j < columnas3; j++)
                {
                    matriz3[i][j] = rand() % 9;
                    std::cout << matriz3[i][j] << " ";
                    Sleep(Tiempo2);
                }
                std::cout << "\n";
            }
            break;
        }
        default:
        {
            std::cout << "-----------------------------------------------------\n";
            std::cout << "Lo siento, esa matriz todavia no ha sido agregada D:\n";
            std::cout << "-----------------------------------------------------\n";
        }


        }
        std::cout << "-----------------------------\n";
        std::cout << "Deseas repetir las matricez?\n0.- No  1.- Si\n";
        std::cin >> repetir;
        system("cls");

    } while (repetir == true);

}

