#include <stdio.h>
/* 27. Factors of a number */
void factors(int n) {
    if(n==0){ printf("Every integer is a factor of 0.\n"); return; }
    int absn = n<0? -n: n;
    for(int i=1;i<=absn;i++) if(absn % i == 0) printf("%d ", i);
    printf("\n");
}
int main(void){
    int n;
    printf("Enter a number: ");
    if(scanf("%d",&n)==1) factors(n);
    return 0;
}
