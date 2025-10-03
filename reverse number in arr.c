#include<stdio.h>


void main(){
    int arr[10],n,i;
    printf("enter value of size of arr\n");
    scanf("%d",&n);

    printf("enter values of arr\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    for(i=0;i<n/2;i++){
        int temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
    //reverse values of arr
    printf("resultant reverse arr is\n");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }





}
