#include<stdio.h>

void main(){
int arr[10];
int i;
int num;
int n;
printf("enter value of size of arr\n");
scanf("%d",&n);
for (int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
printf("enter no to add at last position\n");
scanf("%d",&num);

arr[n]=num;
n++;

for(int i=0;i<n;i++){
    printf("%d\t",arr[i]);
}
}
