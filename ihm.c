#include "ihm.h"

void create_screen(char* window_name, char* icone_name) {
	MLV_create_window(window_name, icone_name, SCREEN_WIDTH, SCREEN_HEIGHT);
}

void print_menu(int x, int y, int option) {
	int corner = x / 4;
	int width = x / 2;
	int height = y / 10;

	int i;
	MLV_Color color;
	char* string = (char*) malloc (sizeof(char) * 15);

	MLV_clear_window(MLV_COLOR_BLACK);

	for (i=0; i!=NB_ARGS; i++) {
		switch(i) {
			case 0:
				strcpy(string, "New");
				break;
			case 1:
				strcpy(string, "Sample");
				break;
			case 2:
				strcpy(string, "Exit");
				break;
		}

		if (i==option)
			color = MLV_COLOR_RED;
		else
			color = MLV_COLOR_WHITE;

		MLV_draw_text_box(corner, (i+2)*height, width, height-1, string, 1, color, MLV_COLOR_WHITE, MLV_COLOR_BLACK, 
			MLV_TEXT_CENTER, MLV_HORIZONTAL_CENTER, MLV_VERTICAL_CENTER);
	
	}

	MLV_update_window();
}

void choose_menu() {
	int option = 0;
	MLV_Keyboard_button key;	
	
	do {
		print_menu(SCREEN_WIDTH, SCREEN_HEIGHT, option);
		MLV_wait_keyboard(&key, NULL, NULL);
		
		if (key == MLV_KEYBOARD_DOWN)
			option += 1;
		else if (key == MLV_KEYBOARD_UP)
			option -= 1;	

		if (option < 0)
			option = NB_ARGS-1;
		else if (option >= NB_ARGS)
			option = 0;

	}while(key != MLV_KEYBOARD_SPACE);
}