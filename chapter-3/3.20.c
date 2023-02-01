/*
1. Read the problem statement.
2. Formulate the algorithm using pseudocode and top-down, stepwise refinement.
3. Write a C program.
4. Test, debug and execute the C program.
 * */



/*
1. Read the statement.
(Salary Calculator) Develop a program that will determine the gross pay for each of several
employees. The company pays “straight time” for the first 40 hours worked by each employee and
pays “time-and-a-half” for all hours worked in excess of 40 hours. You’re given a list of the employees
of the company, the number of hours each employee worked last week and the hourly rate of
each employee. Your program should input this information for each employee and should determine
and display the employee's gross pay. Here is a sample input/output dialog:
*/



/*
 * 2. pseudocode .
 *
     ## First:
        - we'll use a pseudocode and top-down,stepwise refinement that'll calc the salary.

        - user 'll input as many records of hours and rate as he wishes.
        - once, he finished entering the data he'll enter a flag value which is -1 to stop the program from execution.

    ## Second:
        - start with top-down, stepwise refinement.
        - we'll begin with a pseudocode representation of the top which describes the main problem to solve (problem the program 'll solve).
        ** read data entered of  hours and rate and calc the salary.

    ## Third:
        - we'll do our first refinement of the top. we'll break it down into smaller actions.
        * first, we'll declare variables .
        ** second, read user input of hours and rate.
        * then calc salary.

    ## Fourth:
        Redefining prev pseudocode statements:
        - declare variables :
            - variables just need to be declared to store inputs entered by user, no initializing needed.

            ** declare hours.

    ## Fifth:
        Redefining prev pseudocode statements:
        - read user input of hours and rate.
        - we'll use sentinel-controlled repetition structure for this part of the code.
          the sentinel val (flag val) 'll be -1.

        - user 'll input one record data . then, he'll continue entering records until
          entering sentinel val which equals -1.

        - each time user enters a record salary 'll be calculated.
        - print salary.

          * input hours.
          * while user hasn't entered the sentinel val for hours (-1)
            * input rate.
            * if you found hours is greater than 40
            *       print salary = rate * hours + rate/2 .
            * else
            *       print salary= rate * hours.
            * input hours ( maybe sentinel val).
            *   if sentinel val
            *       break
            *   else
            *       input hours




    ##### overall pseudocode for the program ####:

   * input hours.
   * while user hasn't entered the sentinel val for hours (-1)
            * input rate.
            * if you found hours is greater than 40
            *       print salary = rate * hours + rate/2 .
            * else
            *       print salary= rate * hours.
            * input hours ( maybe sentinel val).
            *   if sentinel val
            *       terminate program
            *   else
            *       input hours


 */










/*
#include <stdio.h>
int main() {
    int hours;
    float rate;
    printf("Enter # of hours worked (-1 to end): ");
    scanf("%d", &hours);

    while (hours != -1) {
        printf("Enter hourly rate of the worker ($00.00): ");
        scanf("%f", &rate);

        if (hours <= 40) {
            printf("Salary is $%.2f\n\n", hours * rate);
        } else {
            printf("Salary is $%.2f\n\n", hours * rate + (rate / 2));
        }
        if(hours==-1) break;
        else{
            printf("Enter # of hours worked (-1 to end): ");
            scanf("%d", &hours);
        }
    }
}
*/
