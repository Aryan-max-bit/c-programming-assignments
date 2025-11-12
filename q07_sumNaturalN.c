#include <stdio.h>
/* 7. Sum of n natural numbers */
int sumNaturalN(int n) {
    int s = 0;
    for(int i = 1; i <= n; i++) s += i;
    return s;
}
int main(void) {
    int n;
    printf("Enter n: ");
    if(scanf("%d", &n)==1) printf("Sum = %d\n", sumNaturalN(n));
    return 0;
}
