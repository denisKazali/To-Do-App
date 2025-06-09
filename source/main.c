#include<stdio.h>
#include<stdlib.h>
#include "../headers/menu.h"
#include "../headers/tasks_type.h"


typedef enum{MAIN_MENU, ADD_TASK, LIST_TASKS, DELETE_TASK, EDIT_TASK} menu_options_t;
void to_main_menu(int* opt, menu_options_t* mnopt);

int main(void){
	clear_menu();
	print_menu();
    unsigned short user_option = 5
    menu_options_t current_menu = MAIN_MENU;
return 0;
}

void to_main_menu(int* opt, menu_options_t* mnopt){
    clear_menu();
    print_menu();
    *opt = 5;
    *mnopt = 0;
}
