/*
1. Read the problem statement.
2. Formulate the algorithm using pseudocode and top-down, stepwise refinement.
3. Write a C program.
4. Test, debug and execute the C program.
 * */

/*
1. Read the statement.

(Credit Limit Calculator) Develop a C program that will determine if a department store
customer has exceeded the credit limit on a charge account. For each customer, the following facts
are available:
a) Account number
b) Balance at the beginning of the month
c) Total of all items charged by this customer this month
d) Total of all credits applied to this customer's account this month
e) Allowed credit limit
The program should input each fact, calculate the new balance (= beginning balance +
charges – credits), and determine whether the new balance exceeds the customer's credit limit. For
those customers whose credit limit is exceeded, the program should display the customer's account
number, credit limit, new balance and the message “Credit limit exceeded.”

*/


/*
 * 2. pseudocode .
     ## First:
      - we'll use a pseudocode and top-down,stepwise refinement that'll calc if the customer has exceed the credit limit.
      - user 'll input list of facts( acc number, beginning balance,total charges,total credits,credit limit).
      - once, he finished entering the data he'll enter a flag value which is -1 to stop the program from execution.

    ## Second:
        - start with top-down, stepwise refinement.
        - we'll begin with a pseudocode representation of the top which describes the main problem to solve (problem the program 'll solve).
        - read data entered by user and determine if credit limit is exceeded.

   ## Third:
        - we'll do our first refinement of the top. we'll break it down into smaller actions.
        - first declare vars.
        - second, read user input of accNum , beginningBalance , totalCharges , totalCredits ,creditLim.
        - third, calc new balance and determine if it exceed credit limit.

    ## Fourth:
        Redefining prev pseudocode statements:
        - declare variables :
           - variables just need to be declared to store inputs entered by user, no initializing needed.

    ## Fifth:
        Redefining prev pseudocode statements:
        - read user input of accNum , beginningBalance , totalCharges , totalCredits ,creditLim.
        - we'll use sentinel-controlled repetition structure for this part of the code.
          the sentinel val (flag val) 'll be -1.

        - user 'll input one record data . then, he'll continue entering records until
          entering sentinel val which equals -1.

        - each time user enters a record, we create new balance to check if the credit limit is exceeded.
        - new balance equation is (beginning balance + charges – credits).

        - if credit limit is exceeded we print :
            - accNum .
            - beginningBalance.
            - creditLim.
            - newBalance.
            - and print "Credit Limit Exceeded."

          * input accNum.
          * while user hasn't entered the sentinel val for accNum (-1)
            * input beginningBalance.
            * input  totalCharges.
            * input totalCredits.
            * input creditLim.



    ## Last step:
        Redefining prev pseudocode statements:
        calc new balance and determine if it exceed credit limit.

        * calc new balance for each record entered.
        * new balance 'll be printed if it was greater than credit limit.
        * if new balance greater than credit limit
                 print the accNum , creditLim, newBalance for this user.
                 print "Credit Limit Exceeded."
        * if accNum is equal to -1
                terminate loop.
          else
            continue entering user inputs.




    ##### overall pseudocode for the program ####:


* input accNum.
* while user hasn't entered the sentinel val for accNum (-1)
            * input beginningBalance.
            * input  totalCharges.
            * input totalCredits.
            * input creditLim.
         * calc new balance for each record entered.
         * new balance 'll be printed if it was greater than credit limit.
         * if new balance greater than credit limit
                 print the accNum , creditLim, newBalance for this user.
                 print "Credit Limit Exceeded."
        * if accNum is equal to -1
                terminate loop.
          else
            continue entering user inputs.
 */

/*
#include <stdio.h>
int main(){
    int accNum;
    float beginningBalance,totalCharges , totalCredits ,creditLim;

    printf("Enter account number (-1 to end): ");
    scanf("%d",&accNum);

    while(accNum!=-1){

        printf("Enter beginning balance: ");
        scanf("%f",&beginningBalance);

        printf("Enter total charges: ");
        scanf("%f",&totalCharges);

        printf("Enter total credits: ");
        scanf("%f",&totalCredits);

        printf("Enter credit limit: ");
        scanf("%f",&creditLim);

        float newBalance;
        newBalance= beginningBalance+totalCharges-totalCredits;
        if(newBalance>creditLim){
            printf("Account: %d\n Credit limit: %.2f\n Balance: %.2f\n",accNum,creditLim,newBalance);
            printf("Credit Limit Exceeded.\n\n");
        }
        if(accNum==-1) break;
        else{
            printf("Enter account number (-1 to end): ");
            scanf("%d",&accNum);
        }

    }

}*/
