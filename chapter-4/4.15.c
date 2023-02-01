/*(Modified Compound-Interest Program) Modify the compound-interest program of
Section 4.6 to repeat its steps for interest rates of 5%, 6%, 7%, 8%, 9%, and 10%. Use a for loop
to vary the interest rate.*/


// Calculating compound interest.
/*
#include <stdio.h>
#include <math.h>
 int main( void )
 {
      double amount;
      double principal = 1000.0;
      double rate = .05;
      unsigned int year;

// start from 5% end with 10%
     for (rate=0.05;rate<=0.1;rate+=0.01) {
         printf("Rate: %.2f\n\n", rate);
         printf("%4s%21s\n", "Year", "Amount on deposit");
         for (year = 1; year <= 10; year++) {
             amount = principal * pow(1.0+rate, year);
             printf("%2d %21.2f\n", year, amount);
         }
         printf("\n");
     }
 }*/
