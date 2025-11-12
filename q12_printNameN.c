#include <stdio.h>
/* 12. Print your name n times */
void printNameN(int n) {
    for(int i = 0; i < n; i++) printf("YourName\n");
}
int main(void) {
    int n;
    printf("Enter n: ");
    if(scanf("%d", &n)==1) printNameN(n);
    return 0;
}
