#include <iostream>
#include <ncurses.h>
#include <stdlib.h>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

void menu();

int main(int argc, char const *argv[]) {
    initscr();
    raw();
    char opcionCH = '0';
    vector<EscuadronTerrestre> escuadrones;
    Soldado* soldados;
    do {
        menu();
        opcionCH = getch();
        printw("\n");
        if(opcionCH =='1'){
            printw("Ingrese el nombre del escuadron:");
            char nombreEscuadron[100];
            char soldadosSTR[100];
            getstr(nombreEscuadron);
            printw("Ingrese la cantidad de soldados que desea en el escuadron:");
            getstr(soldadosSTR);
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

                stringstream ss2;
                string auxiliar = edadSoldado;
                string help2 = "";
                for (int i = 0 ; i < auxiliar.size(); i++) {
                    ss2 << edadSoldado[i];
                }//Fin del for
                help2 = ss2.str();
                edad = atoi(help2.c_str());
                
            }//Fin del for
        }//Fin opcion 1
        if(opcionCH == '2'){

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
