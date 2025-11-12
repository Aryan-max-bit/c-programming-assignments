#include <stdio.h>
/* 16. Largest and smallest out of 100 numbers */
void largestSmallest100(void) {
    int x, large, small;
    printf("Enter 100 integers:\n");
    if(scanf("%d",&x)!=1) return;
    large = small = x;
    for(int i = 1; i < 100; i++) { if(scanf("%d",&x)==1) { if(x>large) large=x; if(x<small) small=x; } }
    printf("Largest = %d  Smallest = %d\n", large, small);
}
int main(void) { largestSmallest100(); return 0; }
