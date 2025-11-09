#include<stdio.h>

 struct info{
    char name[50];
    int age;
    int testmatches;
    float averageruns;


    };


void main(){
    struct info s[10];
    printf("\nEnter details of 10 cricketers:\n");
    for(int i=0;i<10;i++){

        printf("%d cricketer detail:",i+1);

        printf("\nEnter name:");
        scanf("%s",s[i].name);

        printf("\nEnter age:");
        scanf("%d",&s[i].age);

        printf("\nno of test matches:");
        scanf("%d",&s[i].testmatches);

        printf("\nAverage runs:");
        scanf("%f",&s[i].averageruns);



    }

    //apply insertion sort to arrange in ascending order

    for(int i=0;i<10;i++){

        int j=i;
        while(j>0&&s[j-1].averageruns>s[j].averageruns){
                struct info temp=s[j];
             temp=s[j];
            s[j]=s[j-1];
            s[j-1]=temp;
            j--;
        }
    }
    printf("\nCricketers sorted by average runs (ascending order):\n");
    for(int i = 0; i < 10; i++) {
        printf("\nName: %s", s[i].name);
        printf("\nAge: %d", s[i].age);
        printf("\nTest Matches: %d", s[i].testmatches);
        printf("\nAverage Runs: %.2f\n", s[i].averageruns);


}
}
