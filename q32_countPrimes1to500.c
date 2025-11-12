#include <stdio.h>
/* 32. Count primes 1 to 500 */
void countPrimes1to500(void){
    int c=0;
    for(int n=2;n<=500;n++){
        int isprime=1;
        for(int i=2;i*i<=n;i++) if(n%i==0){ isprime=0; break; }
        if(isprime) c++;
    }
    printf("Count = %d\n", c);
}
int main(void){ countPrimes1to500(); return 0; }
