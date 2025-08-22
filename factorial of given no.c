#include<stdio.h>


void main(){
int n;
printf("enter value of n\n");
scanf("%d",&n);
int fact=1;
for(int i=1;i<=n;i++){
    fact=fact*i;
}
printf("required value is:%d\n",fact);

}

