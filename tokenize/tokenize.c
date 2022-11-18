#include"tokenize.h"

char ** tokenize (char * str, const char * delim, int * size)
{
    *size = 0; 
    char ** arr = (char**)malloc(MAX_WORDS_N * sizeof(char *));
    char * istr = strtok(str, delim);
    while (istr != NULL) 
    {
        arr[*size] = istr;
        istr = strtok(NULL, delim);
        ++(*size);
    }
    arr = (char**)realloc(arr, (*size) * sizeof(char *));
    return arr;
}