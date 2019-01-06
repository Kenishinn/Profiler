#ifndef __IHM__
#define __IHM__

#include <MLV/MLV_all.h>

#define SCREEN_WIDTH 750
#define SCREEN_HEIGHT 750
#define NB_ARGS 2

void create_screen(char* window_name, char* icone_name);
void print_menu(int x, int y, int option);
void choose_menu();

#endif