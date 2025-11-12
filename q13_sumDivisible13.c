#include <stdio.h>
/* 13. Sum of numbers divisible by 13 from 1 to 100 */
void sumDivisible13(void) {
    int sum = 0;
    for(int i = 1; i <= 100; i++) if(i % 13 == 0) sum += i;
    printf("Sum = %d\n", sum);
}
int main(void) {
    sumDivisible13();
    return 0;
}
