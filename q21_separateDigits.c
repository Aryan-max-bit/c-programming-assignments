#include <stdio.h>
/* 21. Separate digits of a number (prints digits from least significant) */
void separateDigits(int n) {
    if(n==0) { printf("0\n"); return; }
    while(n>0){ printf("%d ", n%10); n/=10; }
    printf("\n");
}
int main(void){
    int n;
    printf("Enter a number: ");
    if(scanf("%d",&n)==1) separateDigits(n);
    return 0;
}
