/*(Comparing Portions of Strings) Write a program that uses function strncmp to compare
two strings input by the user. The program should input the number of characters to be compared,
then display whether the first string is less than, equal to or greater than the second string.*/

/*
#include <stdio.h>
#include <string.h>
int main(){
    printf("Enter two string to compare: ");
    char a[100],b[100];
    gets(a);
    gets(b);


    printf("Enter comparation length: ");
    int len;
    scanf("%d",&len);

    int res;
    char *res_word;
    res= strncmp(a,b,len);
    res_word= res>0?"Greater than":
              res==0? "equal to" : "less than";

    printf("%s %s %s",a,res_word,b);

}*/
