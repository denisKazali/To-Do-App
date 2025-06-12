#ifndef TASKS_CREATE_H
#define TASKS_CREATE_H
#include "../headers/file_utils.h"
#include "../headers/tasks_type.h"
#include <stdlib.h>

int print_task(Task* task);
int create_task(char *title, char *description, size_t title_size, size_t description_size);





#endif
