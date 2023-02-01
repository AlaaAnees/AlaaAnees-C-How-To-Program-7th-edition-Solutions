/*(Calculating Credit Limits) Collecting money becomes increasingly difficult during periods
of recession, so companies may tighten their credit limits to prevent their accounts receivable
(money owed to them) from becoming too large. In response to a prolonged recession, one company
has cut its customers’ credit limits in half. Thus, if a particular customer had a credit limit of $2000,
it’s now $1000. If a customer had a credit limit of $5000, it’s now $2500. Write a program that
analyzes the credit status of three customers of this company. For each customer you’re given:
a) The customer’s account number
b) The customer’s credit limit before the recession
c) The customer’s current balance (i.e., the amount the customer owes the company).
Your program should calculate and print the new credit limit for each customer and should
determine (and print) which customers have current balances that exceed their new credit limits.*/


/*
#include <stdio.h>
int main(){
    int accNum,creditLim,currentBalance;
    printf("Enter Acc Num: ");
    scanf("%d",&accNum);
    while(accNum!=-1){
        printf("Enter Credit Limit: ");
        scanf("%d",&creditLim);

        printf("Enter Current Balance: ");
        scanf("%d",&currentBalance);

        int newLim=creditLim/2;
        printf("New limit: %d\n\n",newLim);

        if(currentBalance>newLim && currentBalance!=newLim){
            printf("Acc Num: %d\n Credit Limit: %d\nCurrent Balance: %d\n\n\n",accNum,creditLim,currentBalance,newLim);
            printf("Enter Acc Num: ");
        }
        else{
            printf("Enter Acc Num: ");
        }
        if(accNum==-1) break;
        else{
            scanf("%d",&accNum);
        }
    }


}*/
