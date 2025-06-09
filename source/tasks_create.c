#include "../headers/tasks_type.h"
#include "../headers/file_utils.h"
#include <stdio.h>
#include <stdlib.h>


int create_task(Task* task){
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
        fclose(f_ptr);``
        return 0;
    }
    fclose(f_ptr);
    return 1;
}
