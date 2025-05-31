#include<stdio.h>
#include<stdlib.h>
#include "../headers/menu.h"
#include "../headers/file_utils.h"
#include "../headers/index_utils.h"


typedef enum{MAIN_MENU, ADD_TASK, LIST_TASKS, DELETE_TASK} menu_options_t;
void to_main_menu(int* opt, menu_options_t* mnopt);

int main(void){
	clear_menu();
	print_menu();
	int option = 5;
	menu_options_t menu = MAIN_MENU;
	while(option !=3){
        FILE *fptr = NULL;
		scanf("%d", &option);
        if(menu == MAIN_MENU){
            if(option == 0){
                clear_menu();
                menu = ADD_TASK;
                printf("Press 0 to go back or 3 to exit\nAdd Task:\n");
                option = 5;
                get_index();
                if(!fptr){
                    create_file();
                }
            
            }
            if(option == 1){
                clear_menu();
                menu = LIST_TASKS;
                printf("Press 0 to go back or 3 to exit\nTASKS:\n");
                option = 5;
            }
        }else if(menu == ADD_TASK){
            if(option == 0){
                to_main_menu(&option, &menu);
            }
        }else if(menu == LIST_TASKS){
            if(option == 0){
                to_main_menu(&option, &menu);
            }

        }else if(menu == DELETE_TASK){
           
        }else{
            printf("Invalid menu error, exiting with status 1\n\n");
            return 1;
        }
	}
	clear_menu();


return 0;
}

void to_main_menu(int* opt, menu_options_t* mnopt){
    clear_menu();
    print_menu();
    *opt = 5;
    *mnopt = 0;
}
