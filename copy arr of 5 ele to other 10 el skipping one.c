#include<stdio.h>

void main(){
    int a[5];
    int b[10]={0};
    int j=0;
    printf("enetr elements of arr\n");
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<5;i++){

        b[j]=a[i];
    j+=2;
    }
    printf("resultant final arr\n");
    for(int i=0;i<10;i++){
        printf("%d\t",b[i]);
    }


}
