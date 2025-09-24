#include<stdio.h>

void main(){
int arr[10];
int i;
int num;
int n;
int pos;
printf("enter value of size of arr\n");
scanf("%d",&n);
for (int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
printf("enter no to add at position\n");
scanf("%d",&num);

printf("enter posiiton\n");
scanf("%d",&pos);

for(int i=n;i>pos;i--){
    arr[i]=arr[i-1];
}
arr[pos]=num;
n++;

for(int i=0;i<n;i++){
    printf("%d\t",arr[i]);
}
}
