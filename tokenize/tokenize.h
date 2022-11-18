/*
    Created by Sergey Nazarov, 18.11.2022
    Is not for sale. All rights reserved.
*/

#ifndef _TOKENIZE_
#define _TOKENIZE_

//connecting dependencies
#include<stdio.h>
#include<malloc.h>
#include<string.h>

#ifndef MAX_WORDS_N
//You can set ur own number
#define MAX_WORDS_N 32
#endif

char ** tokenize (char *, const char *, int *);

#endif