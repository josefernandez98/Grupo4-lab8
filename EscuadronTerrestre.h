#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Soldado.h"
using namespace std;

class EscuadronTerrestre{
  private:
    string nombre;
    vector<Soldado*> escuadron;

  public:
    EscuadronTerrestre();
    EscuadronTerrestre(string);
    void setNombre(string);
    string getNombre();
    void setSoldado(Soldado*);
    Soldado* getSoldado(int);
    string toString();
    ~EscuadronTerrestre();
};
