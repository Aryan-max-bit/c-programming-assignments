#include<stdio.h>


void main(){
   int a,b,c;
   printf("enter 3 values for comparsion\n");
   scanf("%d%d%d", &a,&b,&c);
   if(a>b&&a>c){
    printf("largest number is a\n");
    if(b<a&&b<c){
        printf("smallest no is b\n");
    }
   }
   else if(b>c&&b>a){
        printf("largest number is b\n");
        if(c<b&&c<a){
            printf("smallest no is c\n");
        }

   }
   else{
    printf("largest number is c\n");
    if(a<c&&a<b){
         printf("smallest no is a\n");
    }

   }
}
