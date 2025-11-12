#include <stdio.h>
/* 10. Factorial of a number */
long long factorial(int n) {
    long long f = 1;
    for(int i = 1; i <= n; i++) f *= i;
    return f;
}
int main(void) {
    int n;
    printf("Enter n: ");
    if(scanf("%d", &n)==1) printf("Factorial = %lld\n", factorial(n));
    return 0;
}
