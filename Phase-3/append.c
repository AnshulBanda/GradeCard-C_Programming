#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lib.h"

void append(const char *filename, struct data x[]) {
    FILE *file = fopen(filename, "a");
    if (file == NULL) {
        perror("Unable to open file");
        return;
    }

    printf("Enter the number of data entries to be added:\n");
    int count;
    scanf("%d", &count);

    for (int i = 0; i < count; i++) {
        printf("Enter the data for entry %d\n", i + 1);
        printf("SRN:\n");
        scanf("%12s", x[i].SRN);
        while (getchar() != '\n');

        printf("Name:\n");
        fgets(x[i].Name, sizeof(x[i].Name), stdin);
        x[i].Name[strcspn(x[i].Name, "\n")] = 0;

        printf("Section:\n");
        scanf(" %c", &x[i].Section);
        while (getchar() != '\n');

        printf("Marks:\n");
        scanf("%d", &x[i].Marks);
        while (getchar() != '\n');


        if (x[i].Marks >= 91) x[i].Grade = 'S';
        else if (x[i].Marks >= 81) x[i].Grade = 'A';
        else if (x[i].Marks >= 71) x[i].Grade = 'B';
        else if (x[i].Marks >= 61) x[i].Grade = 'C';
        else if (x[i].Marks >= 51) x[i].Grade = 'D';
        else if (x[i].Marks >= 41) x[i].Grade = 'E';
        else x[i].Grade = 'F';

        fprintf(file, "%s,%s,%c,%d,%c\n", x[i].SRN, x[i].Name, x[i].Section, x[i].Marks, x[i].Grade);
    }

    fclose(file);
    printf("Data appended successfully.\n");
}