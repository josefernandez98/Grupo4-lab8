#include <iostream>
#include <ncurses.h>
using namespace std;


int main(int argc, char const *argv[]) {
  initscr();
  raw();






  getch();
  endwin();

  return 0;
}
