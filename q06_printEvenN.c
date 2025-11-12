#include <stdio.h>
/* 6. Print 1st n even numbers */
void printEvenN(int n) {
    for(int i = 2, c = 0; c < n; i += 2, c++) printf("%d ", i);
    printf("\n");
}
int main(void) {
    int n;
    printf("Enter n: ");
    if(scanf("%d", &n)==1) printEvenN(n);
    return 0;
}
