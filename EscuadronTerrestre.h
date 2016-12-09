#pragma once
#include <iostream>
#include <vector>
#include "Soldado.h"
using namespace std;

class Escuadron Terrestre{
  private:
    string nombre;
    vector<Soldado> escuadron;

  private:
    Soldado();
    Soldado(string, string, int);
    void setNombre(string);
    void setCiudad(string);
    void setEdad(int);
    string getNombre();
    string getCiudad();
    int getEdad();
    string toString();
    ~Soldado();
};
