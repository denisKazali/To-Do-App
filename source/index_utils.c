#include "../headers/index_utils.h"



/*size_t get_index(FILE *file){
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
*/

//This function opens a file called index.txt, stored in resources/. Counts the characters and stores them in an array
//Then converts the array to int and returns the result. In case of an error or empty file, it returns -1 and prints
//the cause of the error
int get_index(void){
    
    //Open a file that is used to save the current index
    FILE *file_index_ptr = open_file('w', 'I');
    
    //Check if the file is opened correctly, if not return -1 and print the error
    if(file_index_ptr == NULL){
        printf("INDEX_UTILS: Error opening index.txt");
        return -1;
    }
    size_t count = 0;
    
    //Count the character in that file, including the end of line character until it reaches EOF
    while(fgetc(file_index_ptr) != EOF){
        count++;
    }
    
    //Check if there is anything written in the file, if not, return -1 and print that the file is empty
    if(count == 0){
        printf("INDEX_UTILS: index.txt is empty!");
        return -1;
    }
    char index_array[] = "";
    char tmp_c;
    //Copy to char array all of the characters before the first end of line character
    while(fgetc(file_index_ptr)!='\n'){
        tmp_c = fgetc(file_index_ptr);
        strcat(index_array, &tmp_c);
    }

    //Convert the array to int and return the result
    return atoi(index_array);
    
}

//This function opens indext.txt in W mode and replaces the old index with the new one,
//if the file is not opened correctly, the function prints error message on the console and returns -1,
//else it saves the index and returns 0;
short save_index(int index){
    FILE *index_file = open_file('w', 'I');
    if(index_file){
        fprintf(index_file, "%i", index);
        printf("INDEX_UTILS: Index saved successfully.\n");
        return 1;
    }else{
        printf("INDEX_UTILS: Error opening index.txt, index not saved\n");
        return 0;
    }
}

short sync_index(FILE *file){
    int task_count = 0;
    int index = get_index();
    char buff[5];
    if(file){
        while(fgets(buff, sizeof(buff), file)){
            if(!strcmp(buff, " id:")){
                task_count++;
            }
        }
        if(index == task_count){
            printf("Index is already synced\n");
            return 1;
        }else{
            printf("Index synced successfully\n");
            index = task_count;
            save_index(index);
            return 1;
        }
    }else{
        printf("INDEX_UTILS: Error opening the file\n");
        return 0;
    }
}
