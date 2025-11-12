#include <stdio.h>
/* 34. Fibonacci series up to n terms */
void fibonacciN(int n) {
    if(n <= 0) { printf("\n"); return; }
    int a = 1, b = 1;
    if(n >= 1) printf("%d ", a);
    if(n >= 2) printf("%d ", b);
    for(int i = 3; i <= n; i++) {
        int c = a + b;
        printf("%d ", c);
        a = b; b = c;
    }
    printf("\n");
}
int main(void){
    int n;
    printf("Enter n: ");
    if(scanf("%d",&n)==1) fibonacciN(n);
    return 0;
}
