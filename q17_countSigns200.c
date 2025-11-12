#include <stdio.h>
/* 17. Count positive, negative and zeros in 200 values */
void countSigns200(void) {
    int x, p=0,n=0,z=0;
    printf("Enter 200 integers:\n");
    for(int i=0;i<200;i++){ if(scanf("%d",&x)==1){ if(x>0) p++; else if(x<0) n++; else z++; } }
    printf("Positive = %d  Negative = %d  Zero = %d\n", p, n, z);
}
int main(void){ countSigns200(); return 0; }
