#ifndef INDEX_UTILS_H
#define INDEX_UTILS_H
#include "../headers/file_utils.h"
#include<string.h>
#include<stdio.h>
#include<stdlib.h>

int get_index(void);
short save_index(int index);
short sync_index(FILE *task_file);


#endif
