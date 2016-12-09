#include <iostream>
#include <ncurses.h>
using namespace std;

void menu();

int main(int argc, char const *argv[]) {
  initscr();
  raw();
  int opcion = 0;
  char opcionCH = opcion - '0';
  do {
    menu();
    opcionCH = getch();
    if(opcion==1){

    }
    if(opcion==2){

    }
    if(opcion==3){

    }
  } while(opcion!=3);






  getch();
  endwin();

  return 0;
}

void menu(){
  printw("Bienvenido al simulador de Guerra Punica");
  printw("1) Crear Escuadron");
  printw("2) Simulacion");
  printw("3) Salir");

}
