#include <stdio.h>
/* 9. Sum of 1st n even numbers */
int sumEvenN(int n) {
    int s = 0;
    for(int i = 2, c = 0; c < n; i += 2, c++) s += i;
    return s;
}
int main(void) {
    int n;
    printf("Enter n: ");
    if(scanf("%d", &n)==1) printf("Sum = %d\n", sumEvenN(n));
    return 0;
}
