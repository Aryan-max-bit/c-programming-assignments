#include<stdio.h>


void main(){
    int a,b,c,d,e,f,g,h,i,j;
    printf("enter 10 values\n");
    scanf("%d%d%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j);
    int sum=a+b+c+d+e+f+g+h+i+j;
    printf("required sum is:%d\n",sum);
    int mean=sum/10;
    printf("required mean value:%d\n",mean);
}
