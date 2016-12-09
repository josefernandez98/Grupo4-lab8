#include <iostream>
#include <ncurses.h>
using namespace std;

void menu();

int main(int argc, char const *argv[]) {
  initscr();
  raw();






  getch();
  endwin();

  return 0;
}

void menu(){
  printw("Bienvenido al simulador de Guerra Punica");
  printw("1) Crear Escuadron");




}
