#include <iostream>
#include <ncurses.h>
#include <stdlib.h>
#include <string>
#include <sstream>
#include <vector>
#include "EscuadronTerrestre.h"
#include "Soldado.h"
#include "CorazasDuras.h"
#include "Arqueros.h"
#include "AsesinosOcultos.h"

using namespace std;

void menu();
void menu2();
int conversionATOI(char[]);

int main(int argc, char const *argv[]) {
    initscr();
    raw();
    char opcionCH = '0';
    vector<EscuadronTerrestre*> escuadrones;
    Soldado* soldado;
    EscuadronTerrestre* escuadron;
    int contadorSimulador = 0;
    do {
        menu();
        opcionCH = getch();
        printw("\n");
        if(opcionCH =='1'){
            char nombreEscuadron[100];
            char soldadosSTR[100];
            string nombreEsc = "";

            printw("Ingrese el nombre del escuadron:");
            getstr(nombreEscuadron);
            nombreEsc = nombreEscuadron;

            escuadron = new EscuadronTerrestre(nombreEsc);
            printw("Ingrese la cantidad de soldados que desea en el escuadron:");
            getstr(soldadosSTR);

            //este es el de atoi soldados
            stringstream ss;
            string auxiliar = soldadosSTR;
            string help = "";
            for (int i = 0 ; i < auxiliar.size(); i++) {
                ss << soldadosSTR[i];
            }//Fin del for
            help = ss.str();
            int cantidadSoldados = atoi(help.c_str());

            for (int i = 0; i < cantidadSoldados; i++) {
                string nombre = "",ciudad = "";
                int edad = 0;

                char nombreSoldado[100];
                char ciudadSoldado[100];
                char edadSoldado[100];

                printw("Ingrese el nombre del soldado:");
                getstr(nombreSoldado);
                nombre = nombreSoldado;

                printw("Ingrese la ciudad de procedencia:");
                getstr(ciudadSoldado);
                ciudad = ciudadSoldado;

                printw("Ingrese la edad del soldado:");
                getstr(edadSoldado);
                edad = conversionATOI(edadSoldado);

                if (edad < 0) {
                    for (;edad < 0;) {
                        printw("No ingreso una edad valida.");
                        printw("\n");
                        printw("Ingrese la edad del soldado:");
                        getstr(edadSoldado);
                        edad = conversionATOI(edadSoldado);
                    } // for de jose
                }//Fin del if
                printw("\n");
                //MENU 2 Tipo de soldado
                char opcion2CH='0';
                do {
                  printw("\n");
                  menu2();
                  opcion2CH = getch();
                  printw("\n");
                  if(opcion2CH=='1'){
                      printw("\n");

                      int cantFlechas = 0, presicion = 0;
                      char cantidadFlechasArquero[100];
                      char presicionArquero[100];

                      printw("Ingrese la cantidad de flechas del arquero:");
                      getstr(cantidadFlechasArquero);
                      printw("Ingrese la presicion del arquero en milimetros:");
                      getstr(presicionArquero);

                      cantFlechas = conversionATOI(cantidadFlechasArquero);
                      if (cantFlechas < 0) {
                          for (;cantFlechas < 0;) {
                              printw("No ingreso un valor valido.");
                              printw("\n");
                              printw("Ingrese la cantidad de flechas del arquero:");
                              getstr(cantidadFlechasArquero);
                              cantFlechas = conversionATOI(cantidadFlechasArquero);
                          } // for de jose
                      }//Fin del if
                      presicion = conversionATOI(presicionArquero);
                      if (presicion < 0) {
                          for (;presicion < 0;) {
                              printw("No ingreso un valor valido.");
                              printw("\n");
                              printw("Ingrese la presicion del arquero en milimetros:");
                              getstr(presicionArquero);
                              presicion = conversionATOI(presicionArquero);
                          } // for de jose
                      }//Fin del if
                      soldado = new Arqueros(nombre, ciudad, edad, cantFlechas, presicion);
                      escuadron -> setSoldado(soldado);
                      opcion2CH = '4';
                  }//Fin del if 1
                  if(opcion2CH=='2'){
                      printw("\n");

                      int dureza = 0, cantLanzas = 0;
                      char cantidadLanzasCorazas[100];
                      char durezaCorazas[100];
                      printw("\n");

                      printw("Ingrese la dureza de la armadura (1 - 10):");
                      getstr(durezaCorazas);
                      dureza = conversionATOI(durezaCorazas);
                      if ((dureza <= 0) || (dureza > 10)) {
                          for (;(dureza <= 0) || (dureza > 10);) {
                              printw("No ingreso un valor valido.");
                              printw("\n");
                              printw("Ingrese la dureza de la armadura (1 - 10):");
                              getstr(durezaCorazas);
                              dureza = conversionATOI(durezaCorazas);
                          }//Fin del for de jose
                      }//Fin de  la validacion
                      printw("Ingrese la cantiad de lanzas que tiene el soldado:");
                      getstr(cantidadLanzasCorazas);

                      cantLanzas = conversionATOI(cantidadLanzasCorazas);


                      soldado = new CorazasDuras(nombre, ciudad, edad, dureza, cantLanzas);
                      escuadron -> setSoldado(soldado);
                      opcion2CH = '4';

                  }//Fin del if 2
                  if(opcion2CH=='3'){
                      printw("\n");

                      int asesinatos = 0, capacidad = 0;
                      char cantidadAsesinatosAsesinos[100];
                      char capacidadAsesinos[100];

                      printw("Ingrese la cantidad de asesinatos:");
                      getstr(cantidadAsesinatosAsesinos);
                      asesinatos = conversionATOI(cantidadAsesinatosAsesinos);
                      if (asesinatos < 0) {
                          for (;asesinatos < 0;) {
                              printw("No ingreso un valor valido.");
                              printw("\n");
                              printw("Ingrese la cantidad de asesinatos:");
                              getstr(cantidadAsesinatosAsesinos);
                              asesinatos = conversionATOI(cantidadAsesinatosAsesinos);
                          }//Fin del for de jose
                      }//Fin de  la validacion
                      printw("Ingrese la capacidad de pasar desapercibido (1 - 10):");
                      getstr(capacidadAsesinos);
                      capacidad = conversionATOI(capacidadAsesinos);
                      if ((capacidad <= 0) || (capacidad > 10)) {
                          for (;(capacidad <= 0) || (capacidad > 10);) {
                              printw("No ingreso un valor valido.");
                              printw("\n");
                              printw("Ingrese la capacidad de pasar desapercibido (1- 10):");
                              getstr(capacidadAsesinos);
                              capacidad = conversionATOI(capacidadAsesinos);
                          }//Fin del for de jose
                      }//Fin de  la validacion
                      soldado = new AsesinosOcultos(nombre, ciudad, edad, asesinatos, capacidad);
                      escuadron -> setSoldado(soldado);
                      opcion2CH = '4';
                  }//Fin del if 3
              } while (opcion2CH!='4');
                //Fin MENU 2
                clear();
            }//Fin del for
            escuadrones.push_back(escuadron);
            contadorSimulador++;
        }//Fin opcion 1

        if(opcionCH == '2'){
            if (contadorSimulador >= 0) {
                vector<EscuadronTerrestre*> bando1;
                vector<EscuadronTerrestre*> bando2;
                for (int i = 0; i < escuadrones.size(); i++) {
                    printw("%d", i);
                    addch(')');
                    addch(' ');
                    printw(escuadrones.at(i)->toString().c_str());
                }//Fin del for

                printw("\n");
                printw("Bando 1, escoga su frontal:");
                char BandoEscoger[100];
                int pos = 0;
                getstr(BandoEscoger);
                pos = conversionATOI(BandoEscoger);
                if ((pos < 0) || (pos >= escuadrones.size())) {
                    for (;(pos < 0) || (pos >= escuadrones.size());) {
                        printw("\n");
                        printw("No ingreso una posicion valida.");
                        printw("\n");
                        printw("Bando 1, escoga un frontal:");
                        getstr(BandoEscoger);
                        pos = conversionATOI(BandoEscoger);
                    }//for de jose
                }//Validar posicion
                bando1.push_back(escuadrones.at(pos));
                escuadrones.erase(escuadrones.begin() + pos);

                pos = 0;
                for (int i = 0; i < escuadrones.size(); i++) {
                    printw("%d", i);
                    addch(')');
                    addch(' ');
                    printw(escuadrones.at(i)->toString().c_str());
                }//Fin del for

                printw("\n");
                printw("Bando 1, escoga su retaguardia:");
                char BandoEscoger2[100];
                getstr(BandoEscoger2);
                pos = conversionATOI(BandoEscoger2);
                if ((pos < 0) || (pos >= escuadrones.size())) {
                    for (;(pos < 0) || (pos >= escuadrones.size());) {
                        printw("\n");
                        printw("No ingreso una posicion valida.");
                        printw("\n");
                        printw("Bando 1, escoga su retaguardia:");
                        getstr(BandoEscoger2);
                        pos = conversionATOI(BandoEscoger2);
                    }//for de jose
                }//Validar posicion
                bando1.push_back(escuadrones.at(pos));
                escuadrones.erase(escuadrones.begin() + pos);


                pos = 0;
                for (int i = 0; i < escuadrones.size(); i++) {
                    printw("%d", i);
                    addch(')');
                    addch(' ');
                    printw(escuadrones.at(i)->toString().c_str());
                }//Fin del for

                printw("\n");
                printw("Bando 2, escoga su frontal:");
                char BandoEscoger3[100];
                getstr(BandoEscoger3);
                pos = conversionATOI(BandoEscoger3);
                if ((pos < 0) || (pos >= escuadrones.size())) {
                    for (;(pos < 0) || (pos >= escuadrones.size());) {
                        printw("\n");
                        printw("No ingreso una posicion valida.");
                        printw("\n");
                        printw("Bando 2, escoga su frontal:");
                        getstr(BandoEscoger3);
                        pos = conversionATOI(BandoEscoger3);
                    }//for de jose
                }//Validar posicion

                bando2.push_back(escuadrones.at(pos));
                escuadrones.erase(escuadrones.begin() + pos);

                pos = 0;
                for (int i = 0; i < escuadrones.size(); i++) {
                    printw("%d", i);
                    addch(')');
                    addch(' ');
                    printw(escuadrones.at(i)->toString().c_str());
                }//Fin del for

                printw("\n");
                printw("Bando 2, escoga su retaguardia:");
                char BandoEscoger4[100];
                getstr(BandoEscoger4);
                pos = conversionATOI(BandoEscoger4);
                if ((pos < 0) || (pos >= escuadrones.size())) {
                    for (;(pos < 0) || (pos >= escuadrones.size());) {
                        printw("\n");
                        printw("No ingreso una posicion valida.");
                        printw("\n");
                        printw("Bando 2, escoga su retaguardia:");
                        getstr(BandoEscoger4);
                        pos = conversionATOI(BandoEscoger4);
                    }//for de jose
                }//Validar posicion
                bando2.push_back(escuadrones.at(pos));
                escuadrones.erase(escuadrones.begin() + pos);



                // comienza la simulacion:
                double EficienciaAtaqueBando1 = bando1.at(0)->getEficienciaAtaque();
                double EficienciaAtaqueBando2 = bando1.at(0)->getEficienciaAtaque();
                double EficienciaDefensaBando1 = bando1.at(1)->getEficienciaDefensa();
                double EficienciaDefensaBando2 = bando1.at(1)->getEficienciaDefensa();


                printw("Bando 1, el total de ataque de su escuadron frontal es: ");
                printw("%f",EficienciaAtaqueBando1);
                printw("\n");






            } else {
                printw("\n");
                printw("No hay suficientes escuadrones. Deben haber al menos 4. \n");
            }//Fin de la validacion
        }//Fin opcion 2
    } while(opcionCH!='3');
    printw("Presione enter para salir.");
    getch();
    endwin();
  return 0;
}//Fin del main

void menu(){
  printw("Bienvenido al simulador de Guerra Punica\n");
  printw("1) Crear Escuadron\n");
  printw("2) Simulacion\n");
  printw("3) Salir\n");
  printw("Ingrese su opcion:");
}//Fin del menu

void menu2(){
  printw("1) Arquero\n");
  printw("2) Corazas Duras\n");
  printw("3) Asesinos Ocultos\n");
  printw("Ingrese el tipo de Soldado que desea:");
}//Fin

int conversionATOI(char arreglo[]) {
    stringstream ss2;
    int valor = 0;
    string auxiliar = arreglo;
    string help2 = "";
    for (int i = 0 ; i < auxiliar.size(); i++) {
        ss2 << arreglo[i];
    }//Fin del for
    help2 = ss2.str();
    valor = atoi(help2.c_str());
    return valor;
}//Fin del metodo.
