#include<stdio.h>

struct student{
int rollno;
char name[50];
char coursename[50];
char minorsubject[50];
char majorsubject[50];
};

void printnames(struct student s[],int n){
for(int i=0;i<n;i++){
    printf("%s\n",s[i].name);
}

}

void datawithroll(struct student s[],int n,int rollno){
    int found=0;
    for(int i=0;i<n;i++){
        if(s[i].rollno==rollno){
            printf("roll no is :%d\n",s[i].rollno);
            printf("name is %s\nn",s[i].name);
            printf("course name is %s\n",s[i].coursename);
            printf("minor subject is :%s\n",s[i].minorsubject);
            printf("major subject is :%s\n",s[i].majorsubject);
            found=1;
            break;



        }
    }
    if(!found){
        printf("no such student found");
    }


}


void main(){
    struct student s[10];
    int searchroll;
    for(int i=0;i<10;i++){
        printf("enter all students detail:%d\n",i+1);


         printf("Roll Number: ");
        scanf("%d", &s[i].rollno);

        printf("enter name ");
        scanf("%s",s[i].name);

        printf("Course: ");
        scanf("%s", s[i].coursename);

        printf("Major Subject: ");
        scanf("%s", s[i].majorsubject);

        printf("Minor Subject: ");
        scanf("%s", s[i].minorsubject);
    }
    printnames(s,10);
    printf("enter roll no\n");
    scanf("%d",&searchroll);
    datawithroll(s,10,searchroll);



}
