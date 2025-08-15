#include<stdio.h>;


void main(){

float gross,allowance,deduction;
printf("enter all values\n");
scanf("%f",&gross);

if(gross>10000){
    allowance=(gross)*(0.10);
    deduction=(gross)*(0.03);

}
else if(gross>5000){
    allowance=(gross)*(0.07);
    deduction=(gross)*(0.02);
}
float netsala;
netsala= gross+allowance-deduction;
printf("net salary is %f", netsala);
}
