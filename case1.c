#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "lib.h"


void case1(struct stud_detail student[]) {
    int count = 0;
    
    printf("Do you want to enter the details of students? (Y/N): ");
    char c;
    scanf(" %c", &c);

    if(c == 'N' || c == 'n') {
        system("cls");
        printf("Thank you!!!\n");
        
    } else if(c == 'Y' || c == 'y') {
        entry(student, &count);
        
    }

    
    

    
}