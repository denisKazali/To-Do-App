#include<stdio.h>
#include<stdlib.h>
#include "../headers/menu.h"


typedef enum{MAIN_MENU, ADD_TASK, LIST_TASKS, DELETE_TASK} menu_options_t;
void to_main_menu(int* opt, menu_options_t* mnopt);

int main(void){
	clear_menu();
	print_menu();
//	int option = 5;
//	menu_options_t menu = MAIN_MENU;
return 0;
}

void to_main_menu(int* opt, menu_options_t* mnopt){
    clear_menu();
    print_menu();
    *opt = 5;
    *mnopt = 0;
}
