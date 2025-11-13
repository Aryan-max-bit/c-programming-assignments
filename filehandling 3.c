#include <stdio.h>

int main() {
    FILE *fp;
    char line[256];

    fp = fopen("output.txt", "r");
    if (fp == NULL) {
        printf("\n[Program 3] output.txt not found!\n");
        return 1;
    }

    printf("\n[Program 3 Output] Content of output.txt:\n");
    while (fgets(line, sizeof(line), fp) != NULL)
        printf("%s", line);

    fclose(fp);
    printf("\n");
    return 0;
}