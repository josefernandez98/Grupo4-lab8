#pragma once
#include <iostream>
#include <string>
using namespace std;

class Soldado{
  protected:
    string nombre;
    string ciudad;
    int edad;

  public:
    Soldado();
    Soldado(string, string, int);
    void setNombre(string);
    void setCiudad(string);
    void setEdad(int);
    string getNombre();
    string getCiudad();
    int getEdad();
    string toString();
    virtual double EficienciaAtaque();
    virtual double EficienciaDefensa();
    ~Soldado();
};
