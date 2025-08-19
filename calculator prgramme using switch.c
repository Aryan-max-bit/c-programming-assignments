#include<stdio.h>


void main(){
    int a;
    printf("enter value of a\n");
    scanf("%d",&a);


    int b;
      printf("enter value of b\n");
    scanf("%d\n",&b);

      char opera;
 printf("enter value of operation\n");
    scanf(" %c\n",&opera);




    switch(opera){
case '+':
    printf("required ans=%d",a+b);
    break;
case '-':
    printf("required ans=%d",a-b);
    break;
case '*':
    printf("required ans=%d",a*b);
    break;
case '/':
    printf("required ans=%d",a/b);
    break;

    }









}

