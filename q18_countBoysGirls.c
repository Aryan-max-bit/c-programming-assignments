#include <stdio.h>
/* 18. Count boys and girls in class of 50 (M/F input) */
void countBoysGirls(void) {
    char c; int b=0,g=0;
    printf("Enter 50 characters (M/F) separated by space or newline:\n");
    for(int i=0;i<50;i++){ if(scanf(" %c",&c)==1){ if(c=='M'||c=='m') b++; else g++; } }
    printf("Boys = %d  Girls = %d\n", b, g);
}
int main(void){ countBoysGirls(); return 0; }
