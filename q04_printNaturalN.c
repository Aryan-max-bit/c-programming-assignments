#include <stdio.h>
/* 4. Print 1st n natural numbers */
void printNaturalN(int n) {
    for(int i = 1; i <= n; i++) printf("%d ", i);
    printf("\n");
}
int main(void) {
    int n;
    printf("Enter n: ");
    if(scanf("%d", &n)==1) printNaturalN(n);
    return 0;
}
