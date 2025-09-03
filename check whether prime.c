#include<stdio.h>


void main(){
    int n;
      int cnt=0;
    printf("enter value of n\n");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        if(n%i==0){
            cnt++;
        }
    }
    if(cnt==2)printf("yes its prime\n");
    else printf("not prime\n");

}


