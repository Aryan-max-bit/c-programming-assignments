#include <stdio.h>
/* 19. Print numbers divisible by 5 from 1 to 100 */
void printDivisible5(void) {
    for(int i=1;i<=100;i++) if(i%5==0) printf("%d ", i);
    printf("\n");
}
int main(void){ printDivisible5(); return 0; }
