#include<stdio.h>


void main(){
   int n;
   printf("enter value of n\n");
   scanf("%d",&n);
   int temp=n;
   int rev=0;
  while(temp>0){
        int d=temp%10;
    printf("%d",d);
rev=rev*10+d;
  temp=temp/10;

  }
  if(n==rev){
    printf("its pallinfrome\n");
  }
  else{
    printf("not pallinfrome\n");
  }
}






