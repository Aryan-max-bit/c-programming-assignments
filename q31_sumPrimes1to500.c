#include <stdio.h>
/* 31. Sum of all primes 1 to 500 */
void sumPrimes1to500(void){
    int s=0;
    for(int n=2;n<=500;n++){
        int isprime=1;
        for(int i=2;i*i<=n;i++) if(n%i==0){ isprime=0; break; }
        if(isprime) s += n;
    }
    printf("Sum = %d\n", s);
}
int main(void){ sumPrimes1to500(); return 0; }
