#include <stdio.h>
/* 8. Sum of 1st n odd numbers */
int sumOddN(int n) {
    int s = 0;
    for(int i = 1, c = 0; c < n; i += 2, c++) s += i;
    return s;
}
int main(void) {
    int n;
    printf("Enter n: ");
    if(scanf("%d", &n)==1) printf("Sum = %d\n", sumOddN(n));
    return 0;
}
