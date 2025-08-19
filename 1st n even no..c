#include<stdio.h>


void main(){
    int n;
    printf("enter value of n\n");
    scanf("%d",&n);
    int sum=0;
     for(int i=1;i<=n;i++){
            sum+=i;


     }
     printf("required sum is %d",sum);
}
