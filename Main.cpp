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
        if(opcionCH =='1'){

        }//Fin opcion 1
        if(opcionCH == '2'){

<<<<<<< HEAD
    }
    if(opcion==3){
      
=======
        }//Fin opcion 2
        if(opcionCH == '3'){
>>>>>>> 7b8ccb2244d970d5cbb8f0ab82d7ed57692ba13d

        }//Fin opcion 3
    } while(opcionCH!=3);






  getch();
  endwin();

  return 0;
}

void menu(){
  printw("Bienvenido al simulador de Guerra Punica");
  printw("1) Crear Escuadron");
  printw("2) Simulacion");
  printw("3) Salir");
  printw("Ingrese su opcion:");
}//Fin del menu
