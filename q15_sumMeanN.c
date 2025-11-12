#include <stdio.h>
/* 15. Sum and mean of n values */
void sumMeanN(int n) {
    int x, sum = 0;
    printf("Enter %d integers:\n", n);
    for(int i = 0; i < n; i++) { if(scanf("%d",&x)==1) sum += x; }
    printf("Sum = %d  Mean = %.2f\n", sum, sum / (float)n);
}
int main(void) {
    int n;
    printf("Enter n: ");
    if(scanf("%d", &n)==1) sumMeanN(n);
    return 0;
}
