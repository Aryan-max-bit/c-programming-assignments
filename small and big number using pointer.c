#include<stdio.h>


void main(){
int a[3][3];
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        scanf("%d",&a[i][j]);// taking input of 3*3 matrix elements
    }
}
int *p;
p=&a[0][0];  //basically pointing pointer to first element of arr
int max=*p;

int min=*p;

for(int i=0;i<9;i++){
        if(*(p+i)>max){
            max=*(p+i);
        }
        if(*(p+i)<min){
            min=*(p+i);
        }


}

printf("\n\n");

printf("largest element is :%d\n",max);
printf("smallest element is :%d\n",min);

}
