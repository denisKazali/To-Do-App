#include "../headers/tasks_type.h"
#include "../headers/file_utils.h"
#include <stdio.h>
#include <stdlib.h>


//The main function that should be used to create a task in the main loop, it creates a task object and the passes it to
//print_task function and checks if the task is printed correctly. Returns 0 when task is printed and 1 if not
//print_task returns 0 if the file is opened and 1 if there is error with opening the file
int create_task(char *title, char *description, size_t title_s, size_t description_s){
    Task user_task = {user_task.id = 0, user_task.title_size = title_s, user_task.descritpion_size = description_s,
                                            user_task.title = title, user_task. description, user_task.status = 0};
    if(!print_task(&user_task)){
        printf("Task created successfully! \n");
        return 0;
    }else{
        printf("Task not printed!\n");
        return 1;
    }
}
int print_task(Task* task){
    FILE* f_ptr = file_open('a');
    if(f_ptr){
        fprintf(f_ptr, "{\n");
        fprintf(f_ptr, "id:");
        fprintf(f_ptr, task->id);
        fprintf(f_ptr, "\n");
        fprintf(f_ptr, "title:");
        fprintf(f_ptr, task->title);
        fprintf(f_ptr, "\n");
        fprintf(f_ptr, "description:",
        fprintf(f_ptr, task->description);
        fprintf(f_ptr, "\n");
        fprintf(f_ptr, "status:");
        fprintf(f_ptr, task->status);
        fprintf(f_ptr,"\n");
        fprintf(f_ptr, "}\n");
        fclose(f_ptr);
        return 0;
    }
    fclose(f_ptr);
    return 1;
}
