#include <stdio.h>
#include <stdlib.h>
#include "lib.h"


void intro(const char *filename,struct data x[])
{
    int g;
    system("cls");
    printf("WELCOME TO THE PROGRAM.\n ");
    int loop=1;
    while(loop){
    printf("WHAT WOULD YOU LIKE TO DO?(SELECT NUMBER TO CHOOSE OPTION)\n");
    printf("1-CREATE THE CSV FILE AND POPULATE IT WITH DATA.\n");
    printf("2-DISPLAY THE DATA WITHIN THE FILE.\n");
    printf("3-ADD DATA TO THE CURRENT FILE.\n");
    printf("4-EXIT THE PROGRAM\n");
    scanf("%d",&g);
    if(g==1){
        create(filename,x);
    }
    else if(g==2){
        display(filename);
    }
    else if(g==3){
        append(filename,x);
    }
    else{
        printf("THANK YOU!!!");
        loop=0;
    }
    }

}