#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "lib.h"


void case2(struct stud_detail student[]){
    int i;
    int roll;
    char a;
    printf("Enter the roll number of the student: ");
    scanf("%d", &roll);
     for(i = 0; i < 50; i++) {
        if(student[i].roll == roll){
            printf("Do you want to enter the marks of the student:(Y/N)");
            scanf(" %c",&a);
            if(a== 'N' || a == 'n'){
                    system("cls");
                     printf("Thank you!!!\n");
                    }
            else if(a =='Y'|| a == 'y'){
            printf("enter the isa1 marks for each subject:\n");
            printf("C programming:\n");
            scanf("%d",&student[i].x.a.isa1);
            printf("Phy:\n");
            scanf("%d",&student[i].x.b.isa1);
            printf("Mech:\n");
            scanf("%d",&student[i].x.c.isa1);
            printf("EEE:\n");
            scanf("%d",&student[i].x.d.isa1);
            printf("Maths:\n");
            scanf("%d",&student[i].x.e.isa1);
            system("cls");
            printf("enter the isa2 marks for each subject:\n");
            printf("C programming:\n");
            scanf("%d",&student[i].x.a.isa2);
            printf("Phy:\n");
            scanf("%d",&student[i].x.b.isa2);
            printf("Mech:\n");
            scanf("%d",&student[i].x.c.isa2);
            printf("EEE:\n");
            scanf("%d",&student[i].x.d.isa2);
            printf("Maths:\n");
            scanf("%d",&student[i].x.e.isa2);
            system("cls");
            printf("enter the esa marks for each subject:\n");
            printf("C programming:\n");
            scanf("%d",&student[i].x.a.esa);
            printf("Phy:\n");
            scanf("%d",&student[i].x.b.esa);
            printf("Mech:\n");
            scanf("%d",&student[i].x.c.esa);
            printf("EEE:\n");
            scanf("%d",&student[i].x.d.esa);
            printf("Maths:\n");
            scanf("%d",&student[i].x.e.esa);
        }
        student[i].x.total_C=((student[i].x.a.isa1)/2)+((student[i].x.a.isa2)/2)+((student[i].x.a.esa)/2);
        student[i].x.total_phy=((student[i].x.b.isa1)/2)+((student[i].x.b.isa2)/2)+((student[i].x.b.esa)/2);
        student[i].x.total_Mech=((student[i].x.c.isa1)/2)+((student[i].x.c.isa2)/2)+((student[i].x.c.esa)/2);
        student[i].x.total_EEE=((student[i].x.d.isa1)/2)+((student[i].x.d.isa2)/2)+((student[i].x.d.esa)/2);
        student[i].x.total_Maths=((student[i].x.e.isa1)/2)+((student[i].x.e.isa2)/2)+((student[i].x.e.esa)/2);
        student[i].x.total=(student[i].x.total_C+student[i].x.total_phy+student[i].x.total_Mech+student[i].x.total_EEE+student[i].x.total_Maths)/5;
        
        system("cls");
        printf("total: %d\n",student[i].x.total);
        printf("total(C): %d\n",student[i].x.total_C);
        printf("total(phy): %d\n",student[i].x.total_phy);
        printf("total(mech): %d\n",student[i].x.total_Mech);
        printf("total(EEE): %d\n",student[i].x.total_EEE);
        printf("total(Maths): %d\n",student[i].x.total_Maths);

        printf("Do you want to go back to the menu?");
        char k;
        scanf(" %c",& k);
        if(k == 'N' || k == 'n') {
            system("cls");
            printf("Thank you!!!\n");
        }
        else if(k == 'Y' || k == 'y'){
            intro(student);

        }
    

}
}
}
