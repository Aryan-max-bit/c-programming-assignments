#include<stdio.h>

void main(){
    char *books[3]; // pointer pointing towards 3 books

 for(int i=0;i<3;i++){
        books[i]=(char*)malloc(50*sizeof(char)); // allocating memeory for 3 books
    printf("book %d",i+1);
    fgets(books[i],50,stdin);// taking input for books name and it correctly read with spaces
 }

 printf("book names are\n");
 for(int i=0;i<3;i++){
    printf("%s\n",books[i]);
 }





}
