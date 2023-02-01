/*
1. Read the problem statement.
2. Formulate the algorithm using pseudocode and top-down, stepwise refinement.
3. Write a C program.
4. Test, debug and execute the C program.
 * */

/*
1. Read the statement.

(Sales Commission Calculator) One large chemical company pays its salespeople on a commission
basis. The salespeople receive $200 per week plus 9% of their gross sales for that week. For
example, a salesperson who sells $5000 worth of chemicals in a week receives $200 plus 9% of
$5000, or a total of $650. Develop a program that will input each salesperson’s gross sales for last
week and will calculate and display that salesperson’s earnings. Process one salesperson's figures at a
time. Here is a sample input/output dialog:
*/


/*  2. pseudocode .

     ## First:
        - we'll use a pseudocode and top-down,stepwise refinement that'll calc the total avg miles driven per gallon.
        - user 'll input as many records of gross sales and we'll calc his salary.
        - once, he finished entering the data he'll enter a flag value which is -1 to stop the program from execution.

  ## Second:
        - start with top-down, stepwise refinement.
        - we'll begin with a pseudocode representation of the top which describes the main problem to solve (problem the program 'll solve).
        ** read data entered of gross sales.

    ## Third:
        - we'll do our first refinement of the top. we'll break it down in smaller actions.
        * declare gross sales.
        ** second, read user input of gross sales.
        * third, calc and print the salary according to the gross sale.


    ## Fourth:
        Redefining prev pseudocode statements:
        - declare gross sale:
            - we'll only declare the gross sale.
            ** declare sale .

            - read user input of gross sale.
            ** read user input of gross sale.

            ** while user hasn't entered the sentinel val for sale (-1)
                calc and print the salary according to the gross sale.
                    ** dollars received per week + (0.09 * sale) .
            ** if user entered the sentinel val
                    terminate loop
               else
                    continue entering sales.


 ##### overall pseudocode for the program ####:

   *  declare sale .
   *  read user input of gross sale.
   ** while user hasn't entered the sentinel val for sale (-1)
                calc and print the salary according to the gross sale.
                    dollars received per week + (0.09 * sale) .
               if user entered the sentinel val
                    terminate loop
               else
                    continue entering sales.
 * */


/*
#include <stdio.h>
int main(){
    float sales;
    printf("Enter sales in dollars (-1 to end): ");
    scanf("%f",&sales);
    while(sales !=-1){
        printf("Salary is: $%.2f\n\n",200+sales*0.09);
        if(sales ==-1) break;
        else {
            printf("Enter sales in dollars (-1 to end): ");
            scanf("%f",&sales);
        }
    }



}
*/
