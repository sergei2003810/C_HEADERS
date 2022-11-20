/*
    Created by Sergey Nazarov, 20.11.2022
    Is not for sale. All rights reserved.
*/

#ifndef _C_MENU_
#define _C_MENU_

//connecting dependencies
#include<stdio.h>
#include<stdarg.h>
#include<stdbool.h>
#include<conio.h> //only fow windows OS
#include<stdlib.h>

int menu (unsigned size, ...) 
{
    int pos = 0;
    int c = 0;
    while (c != 13)
    {
        int i;
        va_list args;
        va_start(args, size);
        for (i = 0; i < size; i ++) printf("%c %s\n", (i == pos ? '>' : ' '), va_arg(args, char *));
        va_end(args);
        c = getch();
        //for "s,w,ö,û,S,W,Ö,Û"
        if (c == 115 || c == 83 || c == 251 || c == 219) if (pos + 1 != size) pos ++;
        if (c == 119 || c == 87 || c == 246 || c == 214) if (pos != 0) pos --;
        system("cls");
    }
    return pos + 1;
}

int l_menu (unsigned size, ...)
{
    int opt = -1;
    va_list args;
    va_start(args, size);
    for (int i = 0; i < size; i ++) printf("%d) %s.\n", i + 1, va_arg(args, char *));
    va_end(args);
    do scanf("%d", opt);
    while (opt > size || opt < 1); 
    return opt;
}

#endif