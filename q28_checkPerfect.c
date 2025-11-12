#include <stdio.h>
/* 28. Perfect number check */
void checkPerfect(int n) {
    if(n <= 1){ printf("Not Perfect\n"); return; }
    int sum = 1;
    for(int i = 2; i <= n/2; i++) if(n % i == 0) sum += i;
    if(sum == n) printf("Perfect\n"); else printf("Not Perfect\n");
}
int main(void){
    int n;
    printf("Enter a number: ");
    if(scanf("%d",&n)==1) checkPerfect(n);
    return 0;
}
