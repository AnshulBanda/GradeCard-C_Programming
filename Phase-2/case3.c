#include<stdio.h>
#include<stdlib.h>
#include "lib.h"

void case3(struct stud_detail student[]){
    printf("ENTER THE ROLL NUMBER OF THE STUDENT WHOSE DETAILS AND GRADE YOU WANT TO DISPLAY:");
    int g;
    scanf("%d",&g);
    for(int i = 0; i < 50; i++) {
        if(student[i].roll == g){
            printf("The student details are:\n");
            printf("Student roll: %d\n", student[i].roll);
            printf("Student name: %s\n", student[i].name);
            printf("Student sem: %d\n", student[i].sem);
            printf("Student sec: %s\n", student[i].sec);
            if(student[i].x.total>=91 && student[i].x.total<=100){
                printf("GRADE: S\n");
            }
            else if(student[i].x.total>=81 && student[i].x.total<=90){
                printf("GRADE: A\n");
            }
            else if(student[i].x.total>=71 && student[i].x.total<=80){
                printf("GRADE: B\n");
            }
            else if(student[i].x.total>=61 && student[i].x.total<=70){
                printf("GRADE: C\n");
            }
            else if(student[i].x.total>=51 && student[i].x.total<=60){
                printf("GRADE: D\n");
            }
            else if(student[i].x.total>=41 && student[i].x.total<=50){
                printf("GRADE: E\n");
            }
            else if(student[i].x.total<=40){
                printf("GRADE: F\n");
            }
            else{
                printf("INVALID MARKS PROVIDED");
            }
            printf("**************************************\n");
            break;

        }
}
}
