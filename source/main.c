#include<stdio.h>
#include<stdlib.h>
#include "../headers/menu.h"
#include "../headers/tasks_type.h"

//Enum of possible menu choices
typedef enum{MAIN_MENU, ADD_TASK, LIST_TASKS, DELETE_TASK, EDIT_TASK} menu_options_t;
//Function to clear the contents of the screen and reset user_option and current_menu variables
void to_main_menu(int* opt, menu_options_t* mnopt);

int main(void){
    //On startup
	clear_menu();
	print_menu();
    //Creating user_option variable, where we'll store the choice of the user
    //Setting user_option variable to arbitrary number out of the possible choice range -> 0 to 4
    //Creating current_menu variable to store the current state of the program
    //Setting current_menu variable to MAIN_MENU
    unsigned short user_option = 5;
    menu_options_t current_menu = MAIN_MENU;

    //Main Cycle
    while(1){


    }
return 0;
}

void to_main_menu(int* opt, menu_options_t* mnopt){
    clear_menu();
    print_menu();
    *opt = 5;
    *mnopt = 0;
}
