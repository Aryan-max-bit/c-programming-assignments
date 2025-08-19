#include<stdio.h>


void main(){
   int a,b,c;
   printf("enter all three sides of triangle\n");
   scanf("%d%d%d",&a,&b,&c);
   if(a>b+c){
    printf("true");
   }
   if(b>a+c){
         printf("true");

   }

if(c>a+b){
         printf("true");

}

else{
    printf("false");
}










}

