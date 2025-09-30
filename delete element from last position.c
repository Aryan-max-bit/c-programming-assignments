#include<stdio.h>

void main(){
    int arr[10];
    int n;

    int i;
    printf("enter size of arr\n");
    scanf("%d",&n);

    printf("enter elements of arr\n");
    for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);


    }



    n--;
    printf("resultant arr\n");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);

    }
}
