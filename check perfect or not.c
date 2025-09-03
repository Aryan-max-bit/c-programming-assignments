#include<stdio.h>


void main(){
    int n;
    int sum=0;
    printf("enter value of n\n");
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        if(n%i==0){
sum+=i;
        }
    }
    if(sum==n){
        printf("perfect number\n");
    }
    else{
        printf("not perfect number\n");
    }

}


