#include <iostream>
#include "Soldado.h"
#include <string>
using namespace std;

Arqueros::Arqueros() {

}//Fin del constructor

Arqueros::Arqueros(string nombre, string ciudad, int edad, int cantidadFlechas, int presicionMili):Soldado(nombre, ciudad, edad) {
    this->cantidadFlechas = cantidadFlechas;
    this->presicionMili = presicionMili;
}//Fin del const sobrecargado

int Arqueros::getCantidadFlechas() {
    return cantidadFlechas;
}//Fin del metodo

void Arqueros::setCantidadFlechas(int cantidadFlechas) {
    this->cantidadFlechas = cantidadFlechas;
}//Fin del metodo

int Arqueros::getPresicionMili() {
    return presicionMili;
}//Fin del metodo

void Arqueros::setPresicionMili(int presicionMili) {
    this->presicionMili = presicionMili;
}//Fin del metodo
