#include<stdio.h>

void main(){
    int notes[]={500, 200, 100, 50, 20, 10, 5, 2, 1};
    int cnt[9]={0};
    int amou;

    printf("enter required amount\n");
    scanf("%d",&amou);

    for(int i=0;i<9;i++){
        cnt[i]=amou/notes[i];
        amou=amou%notes[i];
    }
    printf("miniumum notes required\n");
    for(int i=0;i<9;i++){
        if(cnt[i]!=0){
            printf("%d note is %d\n",notes[i],cnt[i]);
        }
    }

}
