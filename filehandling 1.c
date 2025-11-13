#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    int ch;
    int lines = 0, words = 0, chars = 0, spaces = 0;
    int inWord = 0;

    fp = fopen("input.txt", "r");

    if (fp == NULL) {
        printf("\n[Program 1] input.txt not found!\n");
        return 1;
    } else {
        while ((ch = fgetc(fp)) != EOF) {
            chars++;

            if (ch == ' ')
                spaces++;

            if (ch == '\n')
                lines++;

            if (isspace(ch))
                inWord = 0;
            else if (inWord == 0) {
                inWord = 1;
                words++;
            }
        }

        fclose(fp);

        printf("\n[Program 1 Output]\n");
        printf("Lines      : %d\n", lines);
        printf("Words      : %d\n", words);
        printf("Characters : %d\n", chars);
        printf("Spaces     : %d\n", spaces);
    }

    return 0;
}