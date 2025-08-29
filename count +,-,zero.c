#include<stdio.h>

void main(){
    //count +ve,-ve and zero
int positive=0;
int negative=0;
int zero=0;
int n=200;
int x;
printf("enter following n values\n");
for(int i=1;i<=n;i++){
    scanf("%d",&x);
    if(x>0){
        positive++;
    }
    else if(x<0){
        negative++;
    }
    else{
        zero++;
    }
}
printf("no of zeroes is %d",zero);
printf("no of positive is %d",positive);
printf("no of negative is %d",negative);
}
