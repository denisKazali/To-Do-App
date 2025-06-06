#include "../headers/file_utils.h"


FILE* open_file(char mode){
    switch(mode):
    case 'a':
        return fopen("/home/denis/Projects/To-Do-App/resources/tasks.txt", mode);
            break;
    case 'r':
            return fopen("home/denis/Project/To-Do-App/resources/tasks.txt", mode);
            break;

}
