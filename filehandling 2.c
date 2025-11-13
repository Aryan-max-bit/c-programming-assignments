#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp;
    char line[256];

    fp = fopen("output.txt", "w");
    if (fp == NULL) {
        printf("\n[Program 2] Cannot create output.txt\n");
        return 1;
    }

    printf("\n[Program 2] Enter lines (type 'stop' on a new line to finish):\n");

    while (1) {
        if (fgets(line, sizeof(line), stdin) == NULL) break;

        // remove trailing newline
        size_t len = strlen(line);
        if (len > 0 && line[len-1] == '\n') line[len-1] = '\0';

        if (strcmp(line, "stop") == 0)
            break;

        fputs(line, fp);
        fputs("\n", fp);
    }

    fclose(fp);
    printf("Data written to output.txt successfully!\n");
    return 0;
}