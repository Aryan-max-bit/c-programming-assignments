#include <stdio.h>
/* 14. Sum and mean of 10 values */
void sumMean10(void) {
    int x, sum = 0;
    printf("Enter 10 integers:\n");
    for(int i = 0; i < 10; i++) { if(scanf("%d",&x)==1) sum += x; }
    printf("Sum = %d  Mean = %.2f\n", sum, sum / 10.0);
}
int main(void) {
    sumMean10();
    return 0;
}
