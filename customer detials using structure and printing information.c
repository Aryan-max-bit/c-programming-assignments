#include<stdio.h>
struct customer {
int accno;
char name[50];
float balance;

};
void printbelow(struct customer c[],int n){
    // have to print acc no and name below 100
    for(int i=0;i<n;i++){
        if(c[i].balance<100){
            printf("account number is: %d\nname is:%s\n",c[i].accno,c[i].name);
        }
    }
}

void transaction(struct customer c[],int n){
// gave input amount no, code, amount
int acc;
int code;//1->deposit 0->withrawal
float amount;
printf("enter details for transaction\n");
scanf("%d%d%f",&acc,&code,&amount);
for(int i=0;i<n;i++){
        if(c[i].accno==acc){
            if(code==1){
                c[i].balance+=amount;
                printf("amound deposited now new balance is:%f\n",c[i].balance);
            }
            else if(code==0){
                c[i].balance-=amount;
                printf("after withrawal amount left is:%f",c[i].balance);
            }
            else{
                printf("The balance is insufficient for the specified withdrawal.\n");
            }
        }

}


}


void main(){
    int n;
    printf("enter value of people\n");
    scanf("%d",&n);
    struct customer c[10];

    for(int i=0;i<n;i++){
        printf("\nenter detail of %d person\n",i+1);


       printf("Account Number: ");
        scanf("%d", &c[i].accno);

        printf("Name: ");
        scanf("%s", c[i].name);

        printf("Balance: ");
        scanf("%f", &c[i].balance);
    }
    pritnf("\n");

    printbelow(c,n);

    printf("\n\n");
    transaction(c,n);




}
