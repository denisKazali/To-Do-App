#include "../headers/file_utils.h"


FILE* open_file(char mode, char file)
{
    char w = 'w';
    switch(file)
    {
        case 'F':
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
            break;
        case 'I':
            return fopen("./resources/index.txt", &w);
            break;
        default:
            return NULL;
    }
}
