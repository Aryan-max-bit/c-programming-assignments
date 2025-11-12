#include <stdio.h>
/* 25. Check palindrome */
int reverse(int n) {
    int r=0, sign=1;
    if(n<0){ sign=-1; n=-n; }
    while(n>0){ r = r*10 + n%10; n/=10; }
    return r*sign;
}
void checkPalindrome(int n) {
    if(n == reverse(n)) printf("Palindrome\n");
    else printf("Not Palindrome\n");
}
int main(void){
    int n;
    printf("Enter a number: ");
    if(scanf("%d",&n)==1) checkPalindrome(n);
    return 0;
}
