#include <iostream>
#include "Soldado.h"
#include "CorazasDuras.h"
#include <string>
using namespace std;


CorazasDuras::CorazasDuras() {

}//Fin del constructor

CorazasDuras::CorazasDuras(string nombre, string ciudad, int edad, int durezaArmadura, int cantidadLanzas):Soldado(nombre, ciudad, edad) {
    this -> durezaArmadura = durezaArmadura;
    this -> cantidadLanzas = cantidadLanzas;
}//Fin del constructor


int CorazasDuras::getCantidadLanzas() {
    return cantidadLanzas;
}//Fin del metodo

void CorazasDuras::setCantidadLanzas(int cantidadLanzas) {
    this->cantidadLanzas = cantidadLanzas;
}//Fin del metodo

int CorazasDuras::getDurezaArmadura() {
    return durezaArmadura;
}//Fin del metodo

void CorazasDuras::setDurezaArmadura(int durezaArmadura) {
    this->durezaArmadura = durezaArmadura;
}//Fin del metodo
