#include <stdio.h>

int main() {
    int i, j;
    int cnt=0;

    printf("Prime numbers between 1 and 500:\n");

    for (i = 2; i <= 500; i++) {
        int isPrime = 1;   // assume prime

        // check divisibility
        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                isPrime = 0;  // not prime
                break;
            }
        }

        if (isPrime == 1) {
              cnt++;

        }
    }
     printf("%d ", cnt);

    return 0;
}
