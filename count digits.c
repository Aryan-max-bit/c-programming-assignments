#include<stdio.h>


void main(){
   int n;
   printf("enter value of n\n");
   scanf("%d",&n);
   int cnt=0;
  while(n>0){
        int d=n%10;
    cnt++;
  n=n/10;

  }



  printf("count is req:%d\n",cnt);


    }



