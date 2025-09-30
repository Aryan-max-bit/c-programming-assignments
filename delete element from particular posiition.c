#include<stdio.h>

void main(){
    int arr[10];
    int n;
    int num;

    int i;
    printf("enter size of arr\n");
    scanf("%d",&n);

    printf("enter elements of arr\n");
    for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);

    }
    printf("enter psoition to delete(0,n)\n");
    scanf("%d",&num); //2 suppose for 4 size arr
    for(int i=num;i<n;i++){
          arr[i]=arr[i+1];

    }



    n--;
    printf("resultant arr\n");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);

    }
}
