// clases tony.cpp 
//

#include <iostream>


class Atleta
{
private:
    int Energia;
    float Velocidad;
    int Fuerza;
    std::string Nombre;


public:
    void AumentarVelocidad()
    {
        Velocidad++;
        Energia--;
    };


    Atleta()
    {
        Energia = 70;
        Velocidad = 270;
        Fuerza = 20;
        Nombre = "Generico";

    }


    Atleta(int e, float v, int f, std::string n)
    {
        Energia = e;
        Velocidad = v;
        Fuerza = f;
        Nombre = n;
    }

    void SetVelocidad(float V)
    {
        Velocidad = V;
    }

    float GetVelocidad()
    {
        return Velocidad;
    }

    void SetFuerza(int F)
    {
        Velocidad = F;
    }

    float GetFuerza()
    {
        return Fuerza;
    }

    void SetNombre(std::string N)
    {
        Nombre = N;
    }

    std::string GetNombre()
    {
        return Nombre;
    }

    void SetEnergia(int E)
    {
        Energia = E;
    }

    float GetEnergia()
    {
        return Energia;
    }

    ~ Atleta() { std::cout << Nombre << " ha sido destruido\n";}


};


int main()
{
    Atleta Messi;
    Messi.SetEnergia(200);
    Messi.SetVelocidad(500);
    Messi.SetFuerza(60);
    Messi.SetNombre("Leo");

    std::cout << "Atleta Profesional\n";
    std::cout << "Nombre = " << Messi.GetNombre() << "\n";
    std::cout << "Fuerza = " << Messi.GetFuerza() << "\n";
    std::cout << "Velocidad = " <<Messi.GetVelocidad() << "\n";
    std::cout << "Energia = " << Messi.GetEnergia() << "\n";
    std::cout << "\n";


    Atleta Pedro;
    std::cout << "Atleta Casual\n";
    std::cout << "Nombre = " << Pedro.GetNombre() << "\n";
    std::cout << "Fuerza = " << Pedro.GetFuerza() << "\n";
    std::cout << "Velocidad = " << Pedro.GetVelocidad() << "\n";
    std::cout << "Energia = " << Pedro.GetEnergia() << "\n";
    std::cout << "\n";

    Atleta Shurik;
    std::cout << "Atleta Casual\n";
    std::cout << "Nombre = " << Shurik.GetNombre() << "\n";
    std::cout << "Fuerza = " << Shurik.GetFuerza() << "\n";
    std::cout << "Velocidad = " << Shurik.GetVelocidad() << "\n";
    std::cout << "Energia = " << Shurik.GetEnergia() << "\n";
    std::cout << "\n";

    Atleta Pato (30, 100, 15, "Pato");
    std::cout << "Atleta Novato\n";
    std::cout << "Nombre = " << Pato.GetNombre() << "\n";
    std::cout << "Fuerza = " << Pato.GetFuerza() << "\n";
    std::cout << "Velocidad = " << Pato.GetVelocidad() << "\n";
    std::cout << "Energia = " << Pato.GetEnergia() << "\n";
    std::cout << "\n";

    Atleta Julio(60, 250, 40, "Julio");
    std::cout << "Atleta Novato\n";
    std::cout << "Nombre = " << Julio.GetNombre() << "\n";
    std::cout << "Fuerza = " << Julio.GetFuerza() << "\n";
    std::cout << "Velocidad = " << Julio.GetVelocidad() << "\n";
    std::cout << "Energia = " << Julio.GetEnergia() << "\n";
    std::cout << "\n";


}

