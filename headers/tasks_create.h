#ifndef TASKS_CREATE_H
#define TASKS_CREATE_H
#include "../headers/file_utils.h"
#include "../headers/tasks_type.h"

int create_task(Task* task);
Task* print_task(char *title, char *description, size_t title_size, size_t description_size);





#endif
