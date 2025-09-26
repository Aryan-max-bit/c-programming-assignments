#include<stdio.h>
#include<string.h>

void main(){
    char s1[]="Aryan";
    char s2[]="don";
    int d=strlen(s1);
    int q=strlen(s2);
   if(d>q){
    printf("s1 greater string");
   }
   else if(d==q)printf("s1 and s1 have same length");
   else printf("s2 greater");
}
