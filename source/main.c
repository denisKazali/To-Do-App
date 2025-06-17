#include<stdio.h>
#include<stdlib.h>
#include "../headers/menu.h"
#include "../headers/tasks_type.h"
#include "../headers/tasks_create.h"
#include "../headers/index_utils.h"

//Enum of possible menu choices
typedef enum{MAIN_MENU, ADD_TASK, LIST_TASKS, DELETE_TASK, EDIT_TASK} menu_options_t;
//Function to clear the contents of the screen and reset user_option and current_menu variables
void to_main_menu(int* opt, menu_options_t* mnopt);
void flush_stdin();

int main(void){
    //On startup - clears the console and prints the menu
    //creates a local index variable and implements it by 1
    //so it doesnt start from 0 if it is the first task and 
    //not to dublicate ids when the program is closed
	clear_menu();
    print_menu();
    int index = get_index() + 1;
    printf("\nDebug:Tasks counted =%d\n\n", index);

    //Creating user_option variable, where we'll store the choice of the user
    //Setting user_option variable to arbitrary number out of the possible choice range -> 0 to 4
    //Creating current_menu variable to store the current state of the program
    //Setting current_menu variable to MAIN_MENU
    unsigned short user_option = 5;
    menu_options_t current_menu = MAIN_MENU;
    size_t title_size = 30;
    size_t description_size = 100;

    //Variable controlling the main loop = state 1 -> program works, state 0 -> program exits
    unsigned short no_exit = 1;
    //Main Cycle
    while(no_exit){
        //Using if statements for checking the current_menu status because it looks easier to understand
        if(scanf("%hu", &user_option)){
            flush_stdin();
            if(current_menu == MAIN_MENU){
                char *title_buffer = (char *)malloc(title_size * sizeof(char));
                char *description_buffer = (char *)malloc(description_size * sizeof(char));
                switch(user_option){
                    case 0:
                        clear_menu();
                        printf("\tADD TASK\n");
                        printf("Enter title: ");
                        fgets(title_buffer, title_size, stdin);
                        printf("\n");
                        clear_menu();
                        printf("\tADD TASK\n");
                        printf("Enter description: ");
                        fgets(description_buffer, description_size, stdin);
                        printf("\n");
                        create_task(title_buffer, description_buffer, title_size, description_size, index);
                        index += 1;
                        free(title_buffer);
                        free(description_buffer);
                        clear_menu();
                        print_menu();
                        current_menu = MAIN_MENU;
                        break;
                    case 1:
                        break;
                    case 2:
                        break;
                    case 3:
                        break;
                    case 4:
                        break;
                    default:
                        no_exit = 0;
                        break;
                }
            }else if(current_menu == ADD_TASK){

            }else if(current_menu == LIST_TASKS){

            }else if(current_menu == DELETE_TASK){

            }else if(current_menu == EDIT_TASK){

            }else{
                printf("Error: Invalid menu!\nExiting with status 1\n");
                return 1;
            }
        }

    }
return 0;
}

void to_main_menu(int* opt, menu_options_t* mnopt){
    clear_menu();
    print_menu();
    *opt = 5;
    *mnopt = 0;
}

void flush_stdin(){
    int buff;
    while((buff = getchar()) != '\n' && buff != EOF);
}
