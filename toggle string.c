#include <stdio.h>

void main() {
    char s1[50];
    printf("enter string\n");
    gets(s1);
    for(int i=0;s1[i]!='\0';i++){
        if(s1[i]>='a'&&s1[i]<='z'){
            s1[i]-=32;
        }
        else if (s1[i]>='A'&&s1[i]<='Z'){
            s1[i]+=32;
        }
    }
    printf("%s",s1);

}
