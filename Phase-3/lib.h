#ifndef LIB_H
#define LIB_H
#define MAX_LINE_LENGTH 1000
#define MAX_FIELDS 5

struct data {
    char SRN[13];
    char Name[100];
    char Section;
    int Marks;
    char Grade;
};
void intro(const char *filename,struct data x[]);
float display(const char *filename);
void append(const char *filename,struct data x[]);
float create(const char *filename,struct data x[]);
#endif 