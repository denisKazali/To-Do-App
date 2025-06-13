#include "../headers/index_utils.h"



size_t get_index(FILE *file){
    size_t count = 0;
    char buff[5];
    if(file){
        while(fgets(buff, sizeof(buff), file)){
            if(!strcmp(buff, " id:")){
                count++;
            }
        }
        return count;
    }else{
        printf("Error opening the file!");
        return 0;
    }

}
