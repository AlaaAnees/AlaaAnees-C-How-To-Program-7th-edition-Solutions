/**/

/*
#include <stdio.h>
int main(){
    // original code
    */
/*for ( x = .000001; x == .0001; x += .000001 ) {
        printf( "%.7f\n", x );
    }*//*


    //modified
    int x;
    // for loop must not compare floating point number using == as
    // it might lead to infinite loop.
    // == is never used to compare floating points as they're not integers.
    // it's recommended to use int data type inside the for loop.
    for ( x = .000001; x == .0001; x += .000001 ) {
        printf( "%.7f\n", x );
    }
}*/
