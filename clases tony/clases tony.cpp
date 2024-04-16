// clases tony 
//

#include <iostream>


class Atleta
{
protected:
    int Energia;
    float Velocidad;
    int Fuerza;
    std::string Nombre;


public:
    virtual void AumentarVelocidad()
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

class Boxeador : public Atleta
{
private:
    int PeleasGanadas;
    int PeleasPerdidas;
    int PeleasEmpatadas;
    int KOs;
public:
    Boxeador() : Atleta()
    {
        PeleasGanadas = 0;
        PeleasPerdidas = 0;
        PeleasEmpatadas = 0;
        KOs = 0;
    }

    Boxeador(int e, float v, int f, std::string n, int g, int p, int emp, int k)
    {
        Energia = e;
        Velocidad = v;
        Fuerza = f;
        Nombre = n;
        PeleasGanadas = g;
        PeleasPerdidas = p;
        PeleasEmpatadas = emp;
        KOs = k;
    }

    void AumentarVelocidad() override
    {
        Velocidad += 30;
        Energia -= 50;
    }

    void SetGanadas(int G)
    {
        PeleasGanadas = 0;
    }

    int GetGanadas()
    {
        return PeleasGanadas;
    }

    void SetPerdidas(int P)
    {
        PeleasPerdidas = 0;
    }

    int GetPerdidas()
    {
        return PeleasPerdidas;
    }

    void SetEmpates(int E)
    {
        PeleasEmpatadas = 0;
    }

    int GetEmpates()
    {
        return PeleasEmpatadas;
    }

    void SetKOs(int K)
    {
        KOs = 0;
    }

    int GetKOs()
    {
        return KOs;
    }

    ~Boxeador() { std::cout << Nombre << " ha sido destruido\n"; }

};

class Futbolista : public Atleta
{
private:
    int Goles;
    int PartidosGanados;
    int PartidosPerdidos;
    int Asistencias;

public: 

    Futbolista() : Atleta()
    {
        Goles = 0;
        PartidosGanados = 0;
        PartidosPerdidos = 0;
        Asistencias = 0;
    }

    Futbolista(int e, float v, int f, std::string n, int go, int pg, int pp, int a)
    {
        Energia = e;
        Velocidad = v;
        Fuerza = f;
        Nombre = n;
        Goles = go;
        PartidosGanados = pg;
        PartidosPerdidos = pp;
        Asistencias = a;
    }

    void AumentarVelocidad() override
    {
        Velocidad +=100;
        Energia -= 75;
    }

    void SetGoles(int GO)
    {
        Goles = 0;
    }

    int GetGoles()
    {
        return Goles;
    }

    void SetParGanados(int PG)
    {
        PartidosGanados = 0;
    }
    
    int GetParGanados()
    {
        return PartidosGanados;
    }

    void SetParPerdidos(int PP)
    {
        PartidosPerdidos = 0;
    }

    int GetParPerdidos()
    {
        return PartidosPerdidos;
    }

    void SetAsistencias(int A)
    {
        Asistencias = 0;
    }

    int GetAsistencias()
    {
        return Asistencias;
    }

    ~Futbolista() { std::cout << Nombre << " ha sido destruido\n"; }

};

class Ciclista : public Atleta
{
private:
    int MejorTiempo;
    int VelMax;
    int MayorKm;

public:

    Ciclista() : Atleta()
    {
        MejorTiempo = 0;
        VelMax = 0;
        MayorKm = 0;
    }

    Ciclista(int e, float v, int f, std::string n, int mt, int vm, int mk)
    {
        Energia = e;
        Velocidad = v;
        Fuerza = f;
        Nombre = n;
        MejorTiempo = mt;
        VelMax = vm;
        MayorKm = mk;
    }

    void AumentarVelocidad() override
    {
        Velocidad += 200;
        Energia -= 60;
    }

    void SetMejorTiempo(int MT)
    {
        MejorTiempo = 0;
    }

    int GetMejorTiempo()
    {
        return MejorTiempo;
    }

    void SetVelMax(int VM)
    {
        VelMax = 0;
    }

    int GetVelMax()
    {
        return VelMax;
    }

    void SetMayorKm(int MK)
    {
        MayorKm = 0;
    }

    int GetMayorKm()
    {
        return MayorKm;
    }

    ~Ciclista() { std::cout << Nombre << " ha sido destruido\n"; }

};

class Corredor : public Atleta
{
private:
    int MayorDistancia;
    int KmTotales;
    int MejorKm;

public:

    Corredor() : Atleta()
    {
        MayorDistancia = 0;
        KmTotales = 0;
        MejorKm = 0;
    }

    Corredor(int e, float v, int f, std::string n, int md, int kmt, int mjk)
    {
        Energia = e;
        Velocidad = v;
        Fuerza = f;
        Nombre = n;
        MayorDistancia = md;
        KmTotales = kmt;
        MejorKm = mjk;
    }

    void AumentarVelocidad() override
    {
        Velocidad += 150;
        Energia -= 125;
    }


    void SetMayorDistancia(int MD)
    {
        MayorDistancia = 0;
    }

    int GetMayorDistancia()
    {
        return MayorDistancia;
    }

    void SetKmTotales(int KMT)
    {
        KmTotales = 0;
    }

    int GetMayorKm()
    {
        return KmTotales;
    }

    void SetMejorKm(int MJK)
    {
        MejorKm = 0;
    }

    int GetMejorKm()
    {
        return MejorKm;
    }


    ~Corredor() { std::cout << Nombre << " ha sido destruido\n"; }

};


int main()
{
        
    
        Atleta* Pitbul = new Atleta(100, 100, 500, "Pitbull Cruz");
        std::cout << "Nombre = " << Pitbul->GetNombre() << "\n";
        std::cout << "Fuerza = " << Pitbul->GetFuerza() << "\n";
        std::cout << "Velocidad = " << Pitbul->GetVelocidad() << "\n";
        std::cout << "Energia = " << Pitbul->GetEnergia() << "\n";
        Pitbul->AumentarVelocidad();
        std::cout << "Aumentar Velocidad\n";
        std::cout << "\n";
        std::cout << "Nueva Velocidad = " << Pitbul->GetVelocidad() << "\n";
        std::cout << "Nueva Energia = " << Pitbul->GetEnergia() << "\n";
        std::cout << "\n";
        delete Pitbul;
        std::cout << "\n";


        Atleta* Dany = new Atleta(178, 94, 250, "Dany Reyes");
        std::cout << "Nombre = " << Dany->GetNombre() << "\n";
        std::cout << "Fuerza = " << Dany->GetFuerza() << "\n";
        std::cout << "Velocidad = " << Dany->GetVelocidad() << "\n";
        std::cout << "Energia = " << Dany->GetEnergia() << "\n";
        std::cout << "Aumentar Velocidad\n";
        std::cout << "\n";
        Dany->AumentarVelocidad();
        std::cout << "Nueva Velocidad = " << Dany->GetVelocidad() << "\n";
        std::cout << "Nueva Energia = " << Dany->GetEnergia() << "\n";
        std::cout << "\n";
        delete Dany;
        std::cout << "\n";


        Atleta* Jorge = new Atleta(64, 123, 367, "Jorge Azael");
        std::cout << "Nombre = " << Jorge->GetNombre() << "\n";
        std::cout << "Fuerza = " << Jorge->GetFuerza() << "\n";
        std::cout << "Velocidad = " << Jorge->GetVelocidad() << "\n";
        std::cout << "Energia = " << Jorge->GetEnergia() << "\n";
        std::cout << "Aumentar Velocidad\n";
        std::cout << "\n";
        Jorge->AumentarVelocidad();
        std::cout << "Nueva Velocidad = " << Jorge->GetVelocidad() << "\n";
        std::cout << "Nueva Energia = " << Jorge->GetEnergia() << "\n";
        std::cout << "\n";
        delete Jorge;
        std::cout << "\n";



    Boxeador* Gil = new Boxeador(43, 103, 247, "Gilberto Lopez", 20, 3, 1, 5);
    std::cout << "Nombre = " << Gil->GetNombre() << "\n";
    std::cout << "Fuerza = " << Gil->GetFuerza() << "\n";
    std::cout << "Velocidad = " << Gil->GetVelocidad() << "\n";
    std::cout << "Energia = " << Gil->GetEnergia() << "\n";
    std::cout << "Energia = " << Gil->GetEnergia() << "\n";
    std::cout << "Victorias = " << Gil->GetGanadas() << "\n";
    std::cout << "Derrotas = " << Gil->GetPerdidas() << "\n";
    std::cout << "Empates = " << Gil->GetEmpates() << "\n";
    std::cout << "Kos = " << Gil->GetKOs() << "\n";
    std::cout << "Aumentar Velocidad\n";
    std::cout << "\n";
    Gil->AumentarVelocidad();
    std::cout << "Nueva Velocidad = " << Gil->GetVelocidad() << "\n";
    std::cout << "Nueva Energia = " << Gil->GetEnergia() << "\n";
    std::cout << "\n";
    delete Gil;
    std::cout << "\n";


    Boxeador* Diego = new Boxeador(60, 87, 420, "Diego Delfin", 10, 13, 5, 2);
    std::cout << "Nombre = " << Diego->GetNombre() << "\n";
    std::cout << "Fuerza = " << Diego->GetFuerza() << "\n";
    std::cout << "Velocidad = " << Diego->GetVelocidad() << "\n";
    std::cout << "Energia = " << Diego->GetEnergia() << "\n";
    std::cout << "Energia = " << Diego->GetEnergia() << "\n";
    std::cout << "Victorias = " << Diego->GetGanadas() << "\n";
    std::cout << "Derrotas = " << Diego->GetPerdidas() << "\n";
    std::cout << "Empates = " << Diego->GetEmpates() << "\n";
    std::cout << "Kos = " << Diego->GetKOs() << "\n";
    std::cout << "Aumentar Velocidad\n";
    std::cout << "\n";
    Diego->AumentarVelocidad();
    std::cout << "Nueva Velocidad = " << Diego->GetVelocidad() << "\n";
    std::cout << "Nueva Energia = " << Diego->GetEnergia() << "\n";
    std::cout << "\n";
    delete Diego;
    std::cout << "\n";

}

