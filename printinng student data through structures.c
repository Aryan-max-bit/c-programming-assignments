#include<stdio.h>

struct student_data{
int RollNo;
char name[10];
float physmark;
float chemmark;
float mathmark;
float total;

};

void printdetails(struct student_data s[],int n){

for(int i=0;i<n;i++){
      s[i].total=s[i].physmark+s[i].mathmark+s[i].chemmark;
        printf("%d\n",s[i].RollNo);
printf("%s\n",s[i].name);
printf("%f\n",s[i].physmark);
    printf("%f\n",s[i].chemmark);
     printf("%f\n",s[i].mathmark);
     printf("%f\n",s[i].total);


}


}


void main(){
    struct student_data s[10];
    int n;
    printf("enter value of n\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
            printf("\nrequired information of student %d\n",i+1);

    printf("Enter roll no:");
    scanf("%d",&s[i].RollNo);

    printf("enter name:");
    scanf("%s",s[i].name);

    printf("enter phys marks");
    scanf("%f",&s[i].physmark);

        printf("enter chem marks");
         scanf("%f",&s[i].chemmark);

            printf("enter math marks");
             scanf("%f",&s[i].mathmark);




    }
    printdetails(s,n);//function call






}
