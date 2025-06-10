#ifndef TASKS_TYPES_H
#define TASKS_TYPES_H

typedef enum {PENDING, IN_PROCESS, DONE, STUCK} status_t;

typedef struct {
    
    size_t id;
    size_t title_size;
    size_t description_size;
    char title[title_size];
    char description[description_size];
    status_t status;
    
    
}Task;

