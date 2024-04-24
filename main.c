#include<stdio.h>
#include<stdlib.h>
#include "lib.h"



int main()
{
    struct stud_detail student[50];
    char a;
    printf("WELCOME TO PES GRADE CARD SYSTEM:\n");
    printf("DO YOU WANT TO START THE PROGRAM:(Y/N)");
    scanf("%c",&a);
    if(a=='Y' || a=='y'){
        intro(student);
        
        
    }
    else if(a=='N' || a=='n'){
        system("cls");
        printf("THANK YOU FOR YOUR TIME");
    }
    else{
        
        printf("INVALID INPUT");
    }
    

}