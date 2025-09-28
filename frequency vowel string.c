#include <stdio.h>

void main() {
    char s1[] = "besen";
    int cnt = 0;
    int i;

    for(i=0; i < 5 && s1[i] != '\0'; i++) {
        if(s1[i]=='a' || s1[i]=='e' || s1[i]=='i' || s1[i]=='o' || s1[i]=='u') {
            cnt++;
        }
    }

    printf("%d", cnt);
}
