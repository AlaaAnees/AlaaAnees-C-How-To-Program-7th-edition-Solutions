/*
1. Read the problem statement.
2. Formulate the algorithm using pseudocode and top-down, stepwise refinement.
3. Write a C program.
4. Test, debug and execute the C program.
 * */

/*
1. Read the statement.
(Interest Calculator) The simple interest on a loan is calculated by the formula
interest = principal * rate * days / 365;
The preceding formula assumes that rate is the annual interest rate, and therefore includes the
division by 365 (days). Develop a program that will input principal, rate and days for several
loans, and will calculate and display the simple interest for each loan, using the preceding formula.
Here is a sample input/output dialog:
*/


/*
 * 2. pseudocode .
 *
     ## First:
     - we'll use a pseudocode and top-down,stepwise refinement that'll calc the interest charge.
     - user 'll input as many records of loan, rate and loan in days.
     - once, he finished entering the data he'll enter a flag value which is -1 to stop the program from execution.

   ## Second:
        - start with top-down, stepwise refinement.
        - we'll begin with a pseudocode representation of the top which describes the main problem to solve (problem the program 'll solve).
        ** read data entered of loan and calc the interest charge.

    ## Third:
        - we'll do our first refinement of the top. we'll break it down into smaller actions.
        * first, we'll declare variables .
        ** second, read user input of loan,rate,loan in days.
        * third, calc and print the interest charge.


    ## Fourth:
        Redefining prev pseudocode statements:
        - declare variables :
            - variables just need to be declared to store inputs entered by user, no initializing needed.

            ** declare loan , rate ,days.

## Fifth:
        Redefining prev pseudocode statements:
        - read user input of loan,rate,loan in days.
            &&
        - calc and print the interest charge.

        - we'll use sentinel-controlled repetition structure for this part of the code.
          the sentinel val (flag val) 'll be -1.

        - user 'll input one record data . then, he'll continue entering records until
          entering sentinel val which equals -1.

          * input loan.
          * while user hasn't entered the sentinel val for loans (-1)
            * input rate.
            * input days
            * calc and print interest charge.
            * using the equation ( loan*rate*days/365 )
            * input new loan ( maybe sentinel val).
                * if loan entered is -1
                    terminate loop
                * else
                    input new loan.


    ##### overall pseudocode for the program ####:

  * input loan.
  * while user hasn't entered the sentinel val for loans (-1)
            * input rate.
            * input days
            * calc and print interest charge.
            * using the equation ( loan*rate*days/365 )
            * input new loan ( maybe sentinel val).
                * if loan entered is -1
                    terminate loop
                * else
                    input new loan.




*/

/*
#include <stdio.h>
int main(){
    float loan,rate;
    int days;

    printf("Enter loan principal (-1 to end): ");
    scanf("%f",&loan);

    while(loan!=-1){
        printf("Enter interest rate: ");
        scanf("%f",&rate);

        printf("Enter term of the loan in days: ");
        scanf("%d",&days);

        float interest;
        interest=loan*rate*days/365;
        printf("The interest charge is $%.2f\n\n",interest);

        if(loan==-1) break;
        else{
            printf("Enter loan principal (-1 to end): ");
            scanf("%f",&loan);
        }
    }
}*/
