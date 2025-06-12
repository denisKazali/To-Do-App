#ifndef TASKS_TYPES_H
#define TASKS_TYPES_H
#include <stdlib.h>

typedef enum {PENDING, IN_PROCESS, DONE, STUCK} status_t;

typedef struct {
    
    size_t id;
    size_t title_size;
    size_t description_size;
    char *title;
    char *description;
    status_t status;
    
    
}Task;
#endif
