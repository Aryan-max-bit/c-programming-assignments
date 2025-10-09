#include<stdio.h>

void main(){
int arr1[4][4];
int trans[4][4];
for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
        scanf("%d",&arr1[i][j]);
    }

}
for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
        printf("%d\t",arr1[i][j]);
    }
    printf("\n");

}
for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
        int k=arr1[i][j];
        trans[j][i]=k;

    }
}
printf("\n\n");
for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
        printf("%d\t",trans[i][j]);
    }
    printf("\n");

}
}
