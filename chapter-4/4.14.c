/*(Factorials) The factorial function is used frequently in probability problems. The factorial of
a positive integer n (written n! and pronounced “n factorial”) is equal to the product of the positive
integers from 1 to n. Write a program that evaluates the factorials of the integers from 1 to 5. Print the
results in tabular format. What difficulty might prevent you from calculating the factorial of 20?*/

/*
#include <stdio.h>
int main(){
    int f5=1;
    for (int i = 1; i <=5; ++i) {
        f5*=i;
    }
    printf("%d",f5);
    // What difficulty might prevent you from calculating the factorial of 20?
    // fact 19 is 10^18 which exceeds the integer limit,
    // we need to store it in much more larger data type as long long.
    // it fits only with 64 bits integer.
}
*/
