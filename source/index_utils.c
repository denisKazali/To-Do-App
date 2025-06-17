#include "../headers/index_utils.h"


int get_index(void){
    //Open a file that is used to save the current index
    FILE *file = open_file('r');
    size_t len = 5;
    char buff[len];
    int index = 0;
    if(file != NULL){
        while(fgets(buff, len,file)){
            if(strstr(buff, " id:")){
                index++;
            }
        }
        fclose(file);
        return index;
    }else{
        printf("File could not be found or created, returning -1\n");
        return -1;
    }
}

