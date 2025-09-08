#include<stdio.h>

int fiboo(int n){
if(n==0||n==1)return n;
return fiboo(n-1)+fiboo(n-2);
}



int main(){

    int result=fiboo(9);
    printf("%d",result);
    return 0;

}
