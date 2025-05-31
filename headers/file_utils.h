#ifndef FILE_UTILS_H
#define FILE_UTILS_H

#include<stdlib.h>
#include<stdio.h>

FILE* create_file();
void append_to_file(FILE *fptr);
void delete_line(int index, FILE *fptr);
void delete_file(FILE *fptr);

#endif

