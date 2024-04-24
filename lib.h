#ifndef LIB_H
#define LIB_H

struct stud_grade_C_programming{
    int isa1;
    int isa2;
    int esa;
    int total;
};
struct stud_grade_Phy{
    int isa1;
    int isa2;
    int esa;
    int total;
};
struct stud_grade_Mech{
    int isa1;
    int isa2;
    int esa;
    int total;
};
struct stud_grade_EEE{
    int isa1;
    int isa2;
    int esa;
    int total;
};
struct stud_grade_Maths{
    int isa1;
    int isa2;
    int esa;
    int total;
};

struct stud_grade{
    int total;
    int total_phy;
    int total_Mech;
    int total_C;
    int total_Maths;
    int total_EEE;
    struct stud_grade_C_programming a;
    struct stud_grade_Phy b;
    struct stud_grade_Mech c;
    struct stud_grade_EEE d;
    struct stud_grade_Maths e;
};
struct stud_detail {
    int roll;  
    char name[100];
    int sem;
    char sec[30];
    struct stud_grade x;
};
void intro(struct stud_detail student[]);
void case1(struct stud_detail student[]);
void entry(struct stud_detail student[], int *count);
void case2(struct stud_detail student[]);
void case3(struct stud_detail student[]);



#endif /* LIB_H */