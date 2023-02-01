/*(Differences Between %d and %i) Write a program to test the difference between the %d and
%i conversion specifiers when used in scanf statements. Ask the user to enter two integers separated
by a space.*/

/*

#include <stdio.h>
int main(){
    int x,y;
    scanf( "%i%d", &x, &y ); //Here 010 is an octal number. scanf read the number as 10 using %d and read the number as 8 using %i.
    printf( "%d %d\n", x, y );
}
*/
