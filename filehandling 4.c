#include <stdio.h>

int main() {
    FILE *fp;
    int roll;
    char name[50];
    char choice;

    fp = fopen("student_records.csv", "w");
    if (fp == NULL) {
        printf("\n[Program 4] Cannot create file\n");
        return 1;
    }

    fprintf(fp, "Roll No,Name\n");

    do {
        printf("\nEnter Roll No: ");
        if (scanf("%d", &roll) != 1) {
            // clear invalid input
            int c;
            while ((c = getchar()) != '\n' && c != EOF) {}
            printf("Invalid roll number. Try again.\n");
            continue;
        }

        // consume newline left by scanf
        int c;
        while ((c = getchar()) != '\n' && c != EOF) {}

        printf("Enter Name: ");
        if (fgets(name, sizeof(name), stdin) == NULL) break;
        // remove newline
        size_t len = 0;
        while (name[len] != '\0') len++;
        if (len > 0 && name[len-1] == '\n') name[len-1] = '\0';

        fprintf(fp, "%d,%s\n", roll, name);

        printf("Add another? (y/n): ");
        choice = getchar();
        // consume rest of line
        while ((c = getchar()) != '\n' && c != EOF) {}

    } while(choice == 'y' || choice == 'Y');

    fclose(fp);
    printf("\nRecords saved in student_records.csv (Open with Excel)\n");
    return 0;
}