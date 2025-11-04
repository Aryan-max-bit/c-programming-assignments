#include <stdio.h>

void main() {
    int n, a = 0, b = 1, c;  //declaring terms

    printf("Enter how many Fibonacci terms you want: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (int i = 1; i <= n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
}
