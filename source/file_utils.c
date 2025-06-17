#include "../headers/file_utils.h"


FILE* open_file(char mode)
{
        switch(mode)
        {
            case 'a':
                return fopen("./resources/tasks.txt", &mode);
                break;
            case 'r':
                return fopen("./resources/tasks.txt", &mode);
                break;
            default:
                return NULL;
        }
}
