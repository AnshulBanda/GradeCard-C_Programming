#include<stdio.h>
#include <stdlib.h>
#include "lib.h" 

void entry(struct stud_detail student[], int *count) {
    system("cls");
    printf("Enter the details of student %d\n", *count + 1);
    printf("Enter the roll number of the student: \n");
    scanf("%d", &student[*count].roll);
    printf("Enter the name of the student: \n");
    scanf("%s", student[*count].name);
    printf("Enter the sem number of the student: \n");
    scanf("%d", &student[*count].sem);
    printf("Enter the sec of the student: \n");
    scanf("%s", student[*count].sec);
    (*count)++;
    printf("Do you want to enter more? (Y/N): ");
    char f;
    scanf(" %c", &f);

    if(f == 'N' || f == 'n') {
        printf("Do you want to display the student details?");
        char v;
        scanf(" %c", &v);
        if(v == 'N' || v == 'n'){
            system("cls");
            printf("Thank you!!!\n");
            intro(student);
            }
        else if(v == 'Y' || v == 'y'){
            for(int i=0;i< *count;i++){
                printf("The student details of student %d are:\n",i+1);
                printf("Student roll: %d\n", student[i].roll);
                printf("Student name: %s\n", student[i].name);
                printf("Student sem: %d\n", student[i].sem);
                printf("Student sec: %s\n", student[i].sec);
            }
            
        }
        printf("Do you want to return to menu?");
        char l;
        scanf(" %c", &l);
        if(l == 'N' || l == 'n'){
            system("cls");
            printf("Thank you!!!\n");
        }
        else if(l == 'Y' || l == 'y'){
            intro(student);

        }    

        

        
    }
    
    else if(f == 'Y' || f == 'y'){
        entry(student,count);
    }
    }
    
