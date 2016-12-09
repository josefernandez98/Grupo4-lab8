#include <iostream>
#include "Soldado.h"
#include "AsesinosOcultos.h"
#include <string>
using namespace std;

AsesinosOcultos::AsesinosOcultos() {

}//Fin del constructor

AsesinosOcultos::AsesinosOcultos(string nombre, string ciudad, int edad, int cantidadAsesinatos, int pasarDesapercibido):Soldado(nombre, ciudad, edad) {
    this->cantidadAsesinatos = cantidadAsesinatos;
    this->pasarDesapercibido = pasarDesapercibido;
}//Fin del const sobrecargado

int AsesinosOcultos::getCantidadAsesinatos() {
    return cantidadAsesinatos;
}//Fin del metodo

void AsesinosOcultos::setCantidadAsesinatos(int cantidadAsesinatos) {
    this->cantidadAsesinatos = cantidadAsesinatos;
}//Fin del metodo

int AsesinosOcultos::getPasarDesapercibido() {
    return pasarDesapercibido;
}//Fin del metodo

void AsesinosOcultos::setPasarDesapercibido(int pasarDesapercibido) {
    this->pasarDesapercibido = pasarDesapercibido;
}//Fin del metodo

double AsesinosOcultos::EficienciaAtaque() {
    double eficiencia = cantidadAsesinatos;
    return eficiencia;
}//Fin del metodo

double AsesinosOcultos::EficienciaDefensa() {
    double eficiencia = pasarDesapercibido * 10;
    return eficiencia;
}//Fin del metodo
