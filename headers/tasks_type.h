#ifndef TASKS_TYPES_H
#define TASKS_TYPES_H

typedef enum {PENDING, IN_PROCESS, DONE, STUCK} status_t;

typedef struct {
    
    size_t id;
    char* title;
    char* description;
    status_t status;
    
    
}Task;

