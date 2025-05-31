#include"../headers/index_utils.h"




unsigned int get_index(){
    FILE *file = fopen("index.txt", "r");
    char index[4];
    int i = 0;
    printf("You are inside get_index() function \n");
    if(file){
        while((index[i] = fgetc(file)) != 10 && i < 4){
            printf("Reading: %i\n",index[i]);
            i++;
        }
        printf("i is: %i\n", i);
        printf("index array size is: %lu", strlen(index));
    }
    return 0;
}
