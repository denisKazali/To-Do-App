#include "../headers/menu.h"

void print_menu(void){

	char menu_items[][12] = {"Add_Task", "List_Tasks", "Delete_Task", "Exit"};
	for(int i=0; i<4; i++){
		printf("%i. %s\n", i, menu_items[i]);
	}

}

void clear_menu(void){
	system("clear");
}
