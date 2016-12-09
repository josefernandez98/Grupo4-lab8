#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include "Soldado.h"
#include "EscuadronTerrestre.h"
using namespace std;

EscuadronTerrestre::EscuadronTerrestre(){

}
EscuadronTerrestre::EscuadronTerrestre(string nombre){
  this -> nombre = nombre;

}
void EscuadronTerrestre::setNombre(string nombre){
    this -> nombre = nombre;

}
string EscuadronTerrestre::getNombre(){
  return nombre;
}
void EscuadronTerrestre::setSoldado(Soldado* s){
  escuadron.push_back(s);
}
Soldado* EscuadronTerrestre::getSoldado(int i){
  if(i>0 && i< escuadron.size()){
    return escuadron.at(i);
  }
}

string EscuadronTerrestre::toString(){
  stringstream ss;
  ss << nombre << "\n";
  for (int i = 0; i < escuadron.size(); i++) {
    ss <<  escuadron.at(i)->toString() << "\n";
  }
  return ss.str();

}
EscuadronTerrestre::~EscuadronTerrestre(){

}
