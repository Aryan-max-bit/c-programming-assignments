#include <stdio.h>
/* 3. Print 1st 10 even numbers */
void printEven10(void) {
    for(int i = 2, c = 0; c < 10; i += 2, c++) printf("%d ", i);
    printf("\n");
}
int main(void) {
    printEven10();
    return 0;
}
