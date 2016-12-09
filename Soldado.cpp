#include "Soldado.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

Soldado::Soldado(){

}
Soldado::Soldado(string nombre, string ciudad, int edad){
  this -> nombre = nombre;
  this -> ciudad = ciudad;
  this -> edad=edad;

}
void Soldado::setNombre(string nombre){
  this -> nombre = nombre;
}
void Soldado::setCiudad(string ciudad){
  this -> ciudad = ciudad;
}
void Soldado::setEdad(int edad){
  this -> edad = edad;
}
string Soldado::getNombre(){
  return nombre;

}
string Soldado::getCiudad(){
  return ciudad;

}
int Soldado::getEdad(){
  return edad;

}
double Soldado::EficienciaAtaque(){
  return 0;
}
double Soldado::EficienciaDefensa(){
  return 0;
}
string Soldado::toString(){
  stringstream ss;
  ss << nombre << "\n";
  ss << ciudad << "\n";
  ss  << edad << "\n";
  return ss.str();
}
Soldado::~Soldado(){

}
