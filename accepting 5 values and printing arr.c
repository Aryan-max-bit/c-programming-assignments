#include<stdio.h>

void main(){
    int arr[5];
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }

}
