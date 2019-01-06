#ifndef __IHM__
#define __IHM__

#include <MLV/MLV_all.h>

#define WINDOW_NAME "Un bon gros test"
#define ICONE_NAME "TEST"
#define SCREEN_WIDTH 750
#define SCREEN_HEIGHT 750
#define NB_ARGS 3

/* Create a screen with macro definitions of ihm.h */
void create_screen();

/* Print the possibilites of the menu. If the down or up keyboard button is pressed, then increments or decrement option. */
/* When the return button is pressed, return the option integer that will be used to know what was pressed. */
int choose_menu();

void menu_choices(int option);

#endif