#include<stdio.h>
#include "lib.h"


void intro()
{
    printf("please press the required number to\n 1-enter names into database\n 2-enter marks with each students name and print grade card\n 3-exit the program\n");
    int a;
    scanf(" %d",&a);
    switch(a){
        case 1:
            student();
            break;
        case 2:
            grades();
            break;
        case 3:
            printf("Thank you");
            break;
        default:
            break;
    }
}
