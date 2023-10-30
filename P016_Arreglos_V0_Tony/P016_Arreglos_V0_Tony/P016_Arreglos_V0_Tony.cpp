// P016_Arreglos_V0_Tony.cpp 
// Tony Suarez
// Guardar datos de Videojuegos en un arreglo
// Encontrar solucion a problemas con arreglos

#include <iostream>
#include <string>
#include <locale.h>
#include <windows.h>

int main()
{
	setlocale(LC_ALL, "es_MX.UTF-8");
	bool repetir = true;
	std::string NameJ[3];
	int YearJ[3];
	std::string AutorJ[3];
	std::string EstudioJ[3];
	int tiempo = 250, s = 1;

	while (repetir == true)
	{
		std::cout << "--------------------------------------------------\n";
		std::cout << "¡¡Hola Usuario!!\n";
		std::cout << "Bienvenido a la biblioteca de videojuegos virtual\n";
		std::cout << "--------------------------------------------------\n";

		for (int i = 0; i <= 2; i++)
		{
			std::cout << "Ingresa el nombre del juego número: " << i + 1 << "\n";
			getline(std::cin, NameJ[i]);
			std::cout << "Ingresa el año de lanzamiento del juego número: " << i + 1 << "\n";
			std::cin >> YearJ[i];
			std::cin.ignore();
			std::cout << "Ingresa el autor del juego número: " << i + 1 << "\n";
			getline(std::cin, AutorJ[i]);
			std::cout << "Ingresa el estudio de creacion del juego número: " << i + 1 << "\n";
			std::cin.ignore();
			getline(std::cin, EstudioJ[i]);

		}
		std::cout << "----------------------------------------------------------\n";
		std::cout << "A continuacion te dare los datos de los siguientes juegos\n";
		std::cout << "----------------------------------------------------------\n";

		for (int j = 0; j <= 2; j++)
		{
			std::cout << "El juego " << j + 1 << " se llama: " << NameJ[j] << "\n";
			std::cout << "El año de creacion del juego " << j + 1 << " es: " << YearJ[j] << "\n";
			std::cout << "El autor del juego " << j + 1 << " es: " << AutorJ[j] << "\n";
			std::cout << "El estudio del juego " << j + 1 << " es: " << EstudioJ[j] << "\n";
			Sleep(tiempo);
		}

		std::cout << "------------------------------------------------\n";
		std::cout << "Deseas repetir la biblioteca con otros valores?\n0.- No  1.- Si\n";
		std::cin >> repetir;
		std::cin.ignore();
	} 
}
