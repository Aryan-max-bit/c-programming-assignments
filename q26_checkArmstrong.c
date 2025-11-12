#include <stdio.h>
#include <math.h>
/* 26. Check Armstrong number (works for 3-digit by original code; generalized below) */
void checkArmstrong(int n) {
    int original = n, sum = 0;
    int digits = 0, temp = n;
    if(n<0) n = -n;
    temp = n;
    while(temp){ digits++; temp/=10; }
    temp = n;
    while(temp){
        int d = temp%10;
        int p = 1;
        for(int i=0;i<digits;i++) p *= d;
        sum += p;
        temp/=10;
    }
    if(sum == (n<0? -original: original)) printf("Armstrong\n");
    else printf("Not Armstrong\n");
}
int main(void){
    int n;
    printf("Enter a number: ");
    if(scanf("%d",&n)==1) checkArmstrong(n);
    return 0;
}
