#include <stdio.h>
/* 33. Check Automorphic number */
void checkAutomorphic(int n){
    int sq = n * n;
    int temp = n;
    while(temp > 0){
        if(temp % 10 != sq % 10){ printf("Not Automorphic\n"); return; }
        temp /= 10; sq /= 10;
    }
    printf("Automorphic\n");
}
int main(void){
    int n;
    printf("Enter a number: ");
    if(scanf("%d",&n)==1) checkAutomorphic(n);
    return 0;
}
