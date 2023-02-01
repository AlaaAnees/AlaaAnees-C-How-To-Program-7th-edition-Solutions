/*Calculating the Compound Interest with Integers) Modify the program of Fig. 4.6 so that
it uses only integers to calculate the compound interest. [Hint: Treat all monetary amounts as integral
numbers of pennies. Then “break” the result into its dollar portion and cents portion by using
the division and remainder operations, respectively. Insert a period.]*/

/*
#include <stdio.h>
#include <math.h>
 int main( void )
 {
      int year;
      double amount, principal = 1000.0; //starting principal
      double rate = .05; // annual interest rate

     // table head
     printf("%4s%21s\n", "Year", "Amount on deposit");
    for (year = 1; year <= 10; year++) {
             amount = principal * pow(1.0+rate, year);
             printf("%2d %21.2f\n", year, amount);
         }
         printf("\n");
 }
*/
