#include <stdio.h>
/* 20. Sum of numbers divisible by 3 from 1 to 100 */
void sumDivisible3(void) {
    int sum=0;
    for(int i=1;i<=100;i++) if(i%3==0) sum+=i;
    printf("Sum = %d\n", sum);
}
int main(void){ sumDivisible3(); return 0; }
