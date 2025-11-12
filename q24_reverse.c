#include <stdio.h>
/* 24. Reverse number */
int reverse(int n) {
    int r=0, sign=1;
    if(n<0){ sign=-1; n=-n; }
    while(n>0){ r = r*10 + n%10; n/=10; }
    return r*sign;
}
int main(void){
    int n;
    printf("Enter a number: ");
    if(scanf("%d",&n)==1) printf("Reversed = %d\n", reverse(n));
    return 0;
}
