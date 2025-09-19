#include<stdio.h>

void main(){
int arr[5];
int i=0;
int n=(sizeof arr)/(sizeof arr[i]);
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
for(int i=0;i<n-1;i++){
    int mini=i;
    for(int j=i+1;j<n;j++){
        if(arr[j]<arr[mini]){
                mini=j;
    }


}
 int temp=arr[mini];
    arr[mini]=arr[i];
    arr[i]=temp;
}
for(int i=0;i<n;i++){
    printf("%d\t",arr[i]);
}
}
