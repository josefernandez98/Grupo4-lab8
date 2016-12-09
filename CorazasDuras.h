#pragma once
#include <iostream>
#include "Soldado.h"
#include <string>

using namespace std;

class CorazasDuras : public Soldado {
    private:
        int durezaArmadura;
        int cantidadLanzas;
    public:
        int getDurezaArmadura();
        void setDurezaArmadura(int);
        int getCantidadLanzas();
        void setCantidadLanzas(int);
        CorazasDuras();
        CorazasDuras(string, string, int, int, int);
        virtual double EficienciaAtaque();
        virtual double EficienciaDefensa();
};
