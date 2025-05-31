#include "../headers/file_utils.h"


FILE* create_file(){
    if(fopen("/home/denis/Projects/To-Do-App/resources/tasks.txt", "r")){
        return fopen("/home/denis/Projects/To-Do-App/resources/tasks.txt", "r"); 
    }else{
        return fopen("/home/denis/Projects/To-Do-App/resources/tasks.txt", "w");
    }
}
void append_task(FILE *fptr){

}
void delete_task(int index, FILE *fptr){

}
void delete_file(FILE *fptr){

}
