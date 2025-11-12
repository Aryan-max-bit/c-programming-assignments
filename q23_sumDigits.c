#include <stdio.h>
/* 23. Sum of digits */
int sumDigits(int n) {
    int s=0;
    if(n<0) n=-n;
    while(n>0){ s+=n%10; n/=10; }
    return s;
}
int main(void){
    int n;
    printf("Enter a number: ");
    if(scanf("%d",&n)==1) printf("Sum of digits = %d\n", sumDigits(n));
    return 0;
}
