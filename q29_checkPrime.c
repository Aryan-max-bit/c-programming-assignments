#include <stdio.h>
/* 29. Prime number check */
void checkPrime(int n) {
    if(n < 2){ printf("Not Prime\n"); return; }
    for(int i=2;i*i<=n;i++) if(n % i == 0){ printf("Not Prime\n"); return; }
    printf("Prime\n");
}
int main(void){
    int n;
    printf("Enter a number: ");
    if(scanf("%d",&n)==1) checkPrime(n);
    return 0;
}
