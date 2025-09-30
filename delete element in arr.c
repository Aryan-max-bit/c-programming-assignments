#include<stdio.h>

void main(){
    int arr[10];
    int n;
    int posi;
    int numb;

    int i;
    printf("enter size of arr\n");
    scanf("%d",&n);

    printf("enter elements of arr\n");
    for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);

    }

    printf("enter number to delete from arr\n");
    scanf("%d",&numb);
    for(int i=0;i<n;i++){
        if(arr[i]==numb){
            posi=i;
            break;
        }
    }
    for(int i=posi;i<n;i++){
          arr[i]=arr[i+1];

    }
    n--;
    printf("resultant arr\n");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);

    }
}
