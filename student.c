#include <stdio.h>
#include "lib.h"

#define max_name 100
#define max_students 100

char studentNames[max_students][max_name];
float student(){
    int max_std;
    printf("enter the number of students:");
    scanf("%d",&max_std);
    int i;
    char b;

    printf("Enter the names of %d students:\n", max_std);

    for (i = 0; i < max_std; i++) {
        printf("Enter name for student %d: ", i + 1);
        scanf("%s", studentNames[i]);
    }

    printf("do you want to print the student names?(y/n)\n");
    scanf(" %c",&b);
    if(b=='y'){
            printf("\nEntered student names:\n");
            for (i = 0; i < max_std; i++) {
                printf("Student %d: %s\n", i + 1, studentNames[i]);
                
                }
            intro();    
    }
    else if(b=='n'){
                intro();
                }
    return 0;
}

float grades(){
    
    char subjects[5][100]={"Engineering Mathematics - II","Problem Solving With C","Elements of Electrical Engineering",
                            "Mechanical Engineering Sciences","Engineering Physics"};
    int sum=0;
    int marks[5];
    int no_std;
    
    printf("enter the number of students you have entered into the data base:\n");
    scanf("%d",&no_std);
    for (int i = 0; i < no_std ; i++){
                    printf("enter the grades for %s\n",studentNames[i]);
                    for(int j=0;j<5;j++){
                            printf("enter the marks for %s:\n",subjects[j]);
                            scanf("%d", &marks[j]);
                            sum += marks[j];
                            
                        }  
                    int average;
                    average = sum/5;

                    if (average >= 90) {
                        printf("the student %s has gotten S GRADE\n\n\n",studentNames[i]);
                    } else if (average >= 80 && average<90) {
                        printf("the student %s has gotten A GRADE\n\n\n",studentNames[i]);
                    } else if (average >= 70 && average<80) {
                        printf("the student %s has gotten B GRADE\n\n\n",studentNames[i]);
                    } else if (average >= 60 && average<70) {
                        printf("the student %s has gotten C GRADE\n\n\n",studentNames[i]);
                    } else if (average >= 50 && average<60) {

                        printf("the student %s has gotten D GRADE\n\n\n",studentNames[i]);
                    } else if (average>=40 && average<50){
                        printf("the student %s has gotten E GRADE\n\n\n",studentNames[i]);
                    } else{
                        printf("the student %s has gotten F GRADE\n\n\n",studentNames[i]);
                    }
                    
                    
                    
                   
            }
        return 0;
    
    };
    
