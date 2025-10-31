#include<stdio.h>
#include<string.h>
#include<stdlib.h>

// Write a program that takes a set of names of individuals and abbreviates the first, middle and other names except the last name by their first letter
void main(){
char *name=malloc(100);//allocating memory storing 100 char
char *words[10]; //making words arr storing words and pointer pointing towards them each

printf("enter required string");
fgets(name,100,stdin); //input with spaces include and save ans with \n \0

// now will remove \n first from required input
for (int k = 0; name[k] != '\0'; k++) {
        if (name[k] == '\n') {
            name[k] = '\0';
            break;
        }
    }

// now its turn to split our words from string
int i=0;
char *ptr=strtok(name," "); //points towards 1st word of name string
while(ptr!=NULL){
    words[i++]=ptr;
    ptr=strtok(NULL," ");   // this will split name into small small string and stored in words arr

}


// now printing abrevations
for(int j=0;j<i-1;j++){
    printf("%c. ",words[j][0]);



}


 printf("%s", words[i - 1]);
 free(name);




}
