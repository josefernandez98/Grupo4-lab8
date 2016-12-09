#include <iostream>
#include <ncurses.h>
#include <stdlib.h>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

void menu();
void menu2();

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

                //MENU 2 Tipo de soldado
                char opcion2CH='0';
                do {
                  menu2();
                  opcion2CH = getch();
                  printw("\n");
                  if(opcion2CH=='1'){


                  }
                  if(opcion2CH=='2'){

                  }
                  if(opcion2CH=='3'){

                  }


                } while(while opcion2CH!='4');
                //Fin MENU 2
                

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

void menu2(){
  printw("1) Arquero\n");
  printw("2) Corazas Duras\n");
  printw("3) Asesinos Ocultos\n");
  printw("4) Salir\n");
  printw("Ingrese el tipo de Soldado que desea: :");

}
