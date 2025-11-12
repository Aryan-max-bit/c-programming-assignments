#include <stdio.h>
/* 1. Print 1st 10 natural numbers */
void printNatural10(void) {
    for(int i = 1; i <= 10; i++) printf("%d ", i);
    printf("\n");
}
int main(void) {
    printNatural10();
    return 0;
}
