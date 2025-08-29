#include <stdio.h>

int main() {
    int nS, code;
    int boys = 0, girls = 0;

    printf("Enter number of students:\n");
    scanf("%d", &nS);

    printf("Enter code 1 for boy or 2 for girl for each student:\n");

    for (int i = 0; i < nS; i++) {
        scanf("%d", &code);
        if (code == 1) {
            boys++;
        } else if (code == 2) {
            girls++;
        }
    }

    printf("Number of boys: %d\n", boys);
    printf("Number of girls: %d\n", girls);

    return 0;
}




