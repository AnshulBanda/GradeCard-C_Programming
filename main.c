#include<stdio.h>
#include<stdlib.h>
#include "lib.h"

int main()
{
    char a;
    printf("do you want to start the program?(y/n)\n");
    scanf("%c",&a);
    if(a=='y'){
        intro();

    }
    else{
        printf("thank you");

    }
}