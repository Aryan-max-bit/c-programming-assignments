#include<stdio.h>


void main(){
    int n;
    printf("enter value of n\n");
    scanf("%d",&n);
    int sum=0;
    for(int i=0;i<n;i++){
        if(i%13==0){
            sum+=i;
        }
    }
    printf("sum is =%d\n",sum);
}
