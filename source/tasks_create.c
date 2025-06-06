#include "~/headers/tasks_type.h"
#include "~/headers/file_utils.h"
#include <stdio.h>
#include <stdlib.h>


int create_task(Task* task){
    FILE* f_ptr = file_open('a');
    if(f_ptr){
        fprintf(f_ptr, "{\n");
        fprintf(f_ptr, "id:%u", task.id, "\n");
        fprintf(f_ptr, "title:%s", task.title, "\n");
        fprintf(f_ptr, "description:%s", task.description, "\n");
        fprintf(f_ptr, "status:%u", task.status, "\n");
        fprintf(f_ptr, "}\n");
        return 0;
    }

    return 1;
}
