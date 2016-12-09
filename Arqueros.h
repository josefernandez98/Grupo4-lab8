#pragma once
#include <iostream>
#include "Soldado.h"
#include <string>

using namespace std;

class Arqueros : public Soldado {
    private:
        int cantidadFlechas;
        int presicionMili;
    public:
        int getCantidadFlechas();
        void setCantidadFlechas(int);
        int getPresicionMili();
        void setPresicionMili(int);
        Arqueros();
        Arqueros(string, string, int, int, int);
};
