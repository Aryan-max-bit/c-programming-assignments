#include <stdio.h>
/* 30. All prime numbers 1 to 500 */
void primes1to500(void) {
    for(int n=2;n<=500;n++){
        int isprime = 1;
        for(int i=2;i*i<=n;i++) if(n%i==0){ isprime=0; break; }
        if(isprime) printf("%d ", n);
    }
    printf("\n");
}
int main(void){ primes1to500(); return 0; }
