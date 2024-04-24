#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "lib.h"

void intro(struct stud_detail student[])
{
    int ans;
    system("cls");
    printf("THE PROGRAM HAS STARTED\n");
    printf("PLEASE ENTER THE NUMBER FOR THE DESIRED OPTION:\n");
    printf("1-ENTERING THE STUDENT DETAILS\n");
    printf("2-ENTERING THE STUDENT MARKS\n");
    printf("3-DISPLAYING THE STUDENT INFORMATION AND GRADES\n");
    printf("4-TO EXIT THE PROGRAM\n");
    scanf("%d",&ans);
    switch(ans){
        case 1:
            case1(student);
            break;
        case 2:
            case2(student);
            break;
        case 3:
            case3(student);
            break;
        case 4:
            printf("THANK YOU");
            break;
        }

}