#include <stdio.h>

void main() {
    char s1[50],s2[50];
    printf("enter ur required string\n");
    gets(s1);
    strcpy(s2,s1);
    strrev(s2);
    if(strcmp(s1,s2)==0){
        printf("yes its pallindrome\n");

    }
    else{
        printf("not pallindrome\n");
    }
}
