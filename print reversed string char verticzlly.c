#include<stdio.h>
#include<string.h>

void main(){
    char s1[]="Aryan";
    char s2[10];
    strcpy(s2,s1);
    strrev(s2);
    int i;
    for(int i=0;i<5 && s2[i]!='\0';i++){
        printf("%c\n",s2[i]);
    }

}
