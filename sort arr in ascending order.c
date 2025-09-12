#include<stdio.h>


void main(){
int arr[5]={3,5,6,2,9};  //{2,3,5,6,9}
int n=sizeof(arr)/sizeof(arr[0]);
for(int i=n-1;i>=1;i--){
    for(int j=0;j<i;j++){
            if(arr[j]>arr[j+1]){
                    int temp=arr[j+1];
        arr[j+1]=arr[j];
        arr[j]=temp;

            }

    }


}
 for(int i=0;i<n;i++){
    printf("%d\t",arr[i]);

}

}
