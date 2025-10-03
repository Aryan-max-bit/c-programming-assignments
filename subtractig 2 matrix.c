#include<stdio.h>


void main(){
int a1[3][3],i,j;
int a2[3][3];

for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        scanf("%d/n",&a1[i][j]);
    }
}
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf("%d\t",a1[i][j]);
    }
    printf("\n");
}


for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        scanf("%d/n",&a2[i][j]);
    }
}
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf("%d\t",a2[i][j]);
    }
    printf("\n");
}
printf("\n\n");

for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf("%d\t",a1[i][j]-a2[i][j]);
    }
    printf("\n");
}





}
