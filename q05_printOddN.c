#include <stdio.h>
/* 5. Print 1st n odd numbers */
void printOddN(int n) {
    for(int i = 1, c = 0; c < n; i += 2, c++) printf("%d ", i);
    printf("\n");
}
int main(void) {
    int n;
    printf("Enter n: ");
    if(scanf("%d", &n)==1) printOddN(n);
    return 0;
}
