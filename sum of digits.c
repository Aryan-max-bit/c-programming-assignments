#include<stdio.h>


void main(){
   int n;
   printf("enter value of n\n");
   scanf("%d",&n);
   int sum=0;
  while(n>0){
        int d=n%10;
    sum+=d;
  n=n/10;

  }



  printf("sum is req:%d\n",sum);


    }



