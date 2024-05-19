#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lib.h"

float display(const char *filename)
{
    
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        perror("Unable to open file");
        return 1;
    }

    char line[MAX_LINE_LENGTH];
    while (fgets(line, MAX_LINE_LENGTH, file) != NULL) {
        char *token;
        token = strtok(line, ",");
        while (token != NULL) {
            printf("%s\t", token);
            token = strtok(NULL, ",");
        }
        printf("\n");
    }

    fclose(file);
}