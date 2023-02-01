/*(Rounding Numbers) Function floor may be used to round a number to a specific decimal
place. The statement
y = floor( x * 10 + .5 ) / 10;
rounds x to the tenths position (the first position to the right of the decimal point). The statement
y = floor( x * 100 + .5 ) / 100;
rounds x to the hundredths position (the second position to the right of the decimal point). Write
a program that defines four functions to round a number x in various ways
a) roundToInteger( number )
b) roundToTenths( number )
c) roundToHundreths( number )
d) roundToThousandths( number )
For each value read, your program should print the original value, the number rounded to the
nearest integer, the number rounded to the nearest tenth, the number rounded to the nearest hundredth,
and the number rounded to the nearest thousandth.*/


/*
#include <stdio.h>
#include <math.h>
// Function to round a number to the nearest integer
int roundToInteger(double number) {
    return floor(number + 0.5);
}

// Function to round a number to the nearest tenths place
double roundToTenths(double number) {
    return floor(number * 10 + 0.5) / 10;
}

// Function to round a number to the nearest hundredths place
double roundToHundredths(double number) {
    return floor(number * 100 + 0.5) / 100;
}

// Function to round a number to the nearest thousandths place
double roundToThousandths(double number) {
    return floor(number * 1000 + 0.5) / 1000;
}
int main(){
    double x;

    printf("Enter a value: ");
    scanf("%lf", &x);

    printf("Original Value: %lf\n", x);

    printf("Rounded To Integer: %d\n", roundToInteger(x));

    printf("Rounded To Tenths: %lf\n", roundToTenths(x));

    printf("Rounded To Hundredths: %lf\n", roundToHundredths(x));

    printf("Rounded To Thousandths: %lf\n", roundToThousandths(x));

    return 0;
}
*/
