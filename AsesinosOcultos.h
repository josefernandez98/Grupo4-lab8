#pragma once
#include <iostream>
#include "Soldado.h"
#include <string>

using namespace std;

class AsesinosOcultos : public Soldado {
    private:
        int cantidadAsesinatos;
        int pasarDesapercibido;
    public:
        int getCantidadAsesinatos();
        void setCantidadAsesinatos(int);
        int getPasarDesapercibido();
        void setPasarDesapercibido(int);
        AsesinosOcultos();
        AsesinosOcultos(string, string, int, int, int);
        virtual double EficienciaAtaque();
        virtual double EficienciaDefensa();
};
