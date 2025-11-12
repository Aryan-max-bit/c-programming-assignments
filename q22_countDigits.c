#include <stdio.h>
/* 22. Count digits of a number */
int countDigits(int n) {
    if(n==0) return 1;
    int c=0;
    if(n<0) n=-n;
    while(n>0){ n/=10; c++; }
    return c;
}
int main(void){
    int n;
    printf("Enter a number: ");
    if(scanf("%d",&n)==1) printf("Digits = %d\n", countDigits(n));
    return 0;
}
