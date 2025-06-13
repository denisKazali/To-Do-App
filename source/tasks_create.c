#include "../headers/tasks_type.h"
#include "../headers/file_utils.h"
#include "../headers/tasks_create.h"
#include "../headers/index_utils.h"
#include <stdio.h>
#include <stdlib.h>


//The main function that should be used to create a task in the main loop, it creates a task object and the passes it to
//print_task function and checks if the task is printed correctly. Returns 0 when task is printed and 1 if not
//print_task returns 0 if the file is opened and 1 if there is error with opening the file
int create_task(char *title, char *description, size_t title_s, size_t description_s, int index){
    Task user_task = {.id=index, .title_size=title_s, .description_size=description_s, .title=title, .description=description, .status=0};
    if(print_task(&user_task)){
        printf("Task created successfully! \n");
        return 0;
    }else{
        printf("Task not printed!\n");
        return 1;
    }
}
int print_task(Task *task){
    FILE* f_ptr = open_file('a', 'F');
    if(f_ptr){
        char const *status_string[] = {"PENDING", "IN PROCESS", "DONE", "STUCK"};
        fprintf(f_ptr, "{\n");
        fprintf(f_ptr, " id:%zu\n", task->id);
        fprintf(f_ptr, " title:%s\n", task->title);
        fprintf(f_ptr, " description:%s\n", task->description);
        fprintf(f_ptr, " status:%s\n", status_string[task->status]);
        fprintf(f_ptr, "}\n\n");
        fclose(f_ptr);
        return 1;
    }
    return 0;
}
