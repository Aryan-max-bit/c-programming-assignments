#include<stdio.h>


void main(){
    int arr1[2][2];
    int arr2[2][2];
    int arr3[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
     for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d\t",arr1[i][j]);
    }
    printf("\n");



}

printf("\n\n");
for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&arr2[i][j]);
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d\t",arr2[i][j]);
    }
    printf("\n");



}

for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        arr3[i][j]=0;
        for(int k=0;k<2;k++){
            arr3[i][j]+=arr1[i][k]*arr2[k][j];
        }
    }
}
printf("\n\n");

for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        printf("%d\t",arr3[i][j]);
    }
    printf("\n");
}
}



