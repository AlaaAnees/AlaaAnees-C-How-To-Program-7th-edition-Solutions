/*
1. Read the problem statement.
2. Formulate the algorithm using pseudocode and top-down, stepwise refinement.
3. Write a C program.
4. Test, debug and execute the C program.
 * */

/*
1. Read the statement.

(Gas Mileage) Drivers are concerned with the mileage obtained by their automobiles. One
driver has kept track of several tankfuls of gasoline by recording miles driven and gallons used for each tankful. Develop a program that will input the miles driven and gallons used for each tankful.
The program should calculate and display the miles per gallon obtained for each tankful. After processing
all input information, the program should calculate and print the combined miles per gallon
obtained for all tankfuls. Here is a sample input/output dialog  .
*/


/*
 * 2. pseudocode .
 *
     ## First:
        - we'll use a pseudocode and top-down,stepwise refinement that'll calc the total avg miles driven per gallon.
        - calculate combined miles per gallon obtained for all tankfuls . means calculate average miles per gallon.
        - user 'll input as many records of miles and gallons as he wishes.
        - once, he finished entering the data he'll enter a flag value which is -1 to stop the program from execution.

    ## Second:
        - start with top-down, stepwise refinement.
        - we'll begin with a pseudocode representation of the top which describes the main problem to solve (problem the program 'll solve).
        ** read data entered of miles driven and gallons used and calc miles per gallon for each record individually and total avg miles per gallon.

    ## Third:
        - we'll do our first refinement of the top. we'll break it down in smaller actions.
        * first, we'll initialize variables .
        ** second, read user input of miles driven and gallons used and calc then print miles per gallon for each record entered.
        * third, calc and print the total avg miles per gallon.


    ## Fourth:
        Redefining prev pseudocode statements:
        - initialize variables :
            - we'll only initialize variables that we'll store the total miles
              and the total gallons. it 'll be initialized to zero.
            - other variables just need to be declared to store inputs entered by user, no initializing needed.

            ** initialize totalMiles to zero.
            ** initialize totalGallons to zero.

    ## Fifth:
        Redefining prev pseudocode statements:
        - read user input of miles driven and gallons used and calc then print miles per gallon for each record entered.
        - we'll use sentinel-controlled repetition structure for this part of the code.
          the sentinel val (flag val) 'll be -1.

        - user 'll input one record data . then, he'll continue entering records until
          entering sentinel val which equals -1.

        - each time user enters a record , gallons we'll be added to totalGallons and miles
          'll be added to totalMiles .

          - then, we'll print current miles per gallon.

          * input gallons.
          * input miles.
          * while user hasn't entered the sentinel val for gallons (-1)
            * add gallons to totalGallons.
            * add miles to totalMiles.
            * calc and print miles per gallon.
            * input new gallons ( maybe sentinel val).
            * input new miles.



      ## Last step:
        Redefining prev pseudocode statements:
        - calc and print the total avg miles per gallon.
        - first, test if the totalMiles and totalGallons are greater than 0,
          that means that at least one record was entered, if not we'll print a message that was no valid input entered.

        - if there were valid inputs entered we'll print total avg miles per gallon generated.

        * if totalMiles and totalGallons are greater than zero
        *   print avg miles per gallon.
        * else
        *   print "No valid inputs were entered"
        *

    ##### overall pseudocode for the program ####:

    ** initialize totalMiles to zero.
    ** initialize totalGallons to zero.

    * input gallons.
    * input miles.

    * while user hasn't entered the sentinel val for gallons (-1)
            * add gallons to totalGallons.
            * add miles to totalMiles.
            * calc and print miles per gallon.
            * input new gallons ( maybe sentinel val).
            * input new miles.

   * if totalMiles and totalGallons are greater than zero
        print avg miles per gallon.
   * else
        print "No valid inputs were entered".
 */

/*
#include <stdio.h>
int main(){

*/
/****************Coding_Time****************//*


// initialize totalMiles & totalGallons, declare two more vars.
float gallons,miles,totalMiles=0,totalGallons=0;

*/
/*
 * - ask user to enter the inputs.
 * - we'll use while loop to iterate as long as gallons not equal to the sentinel val -1.
 * - in each iteration : add miles to totalMiles and gallons to totalGallons.
 * - print each current miles per avg.
 * *//*

    printf("Enter the gallons used (-1 to end): ");
    scanf("%f",&gallons);

    printf("Enter the miles driven: ");
    scanf("%f",&miles);

   while(gallons!=-1){
       totalGallons+=gallons;
       totalMiles+=miles;
       printf("The miles/gallons for this tank was %f\n\n",miles / gallons);

       printf("Enter the gallons used (-1 to end): ");
       scanf("%f",&gallons);

       if(gallons == -1) break;

       printf("Enter the miles driven: ");
       scanf("%f",&miles);


   }

   if(totalMiles>0 && totalGallons>0)
       printf("The overall average miles/gallon was %f\n",totalMiles/totalGallons);
   else
       printf("no inputs were entered");
}*/
