/*State which values of the control variable x are printed by each of the following for statements:*/

/*
#include <stdio.h>
int main(){
//original code
    */
/*for ( x = 1; x <= 5; x += 7 ) {
        printf( "%u\n", x );
    }*//*



    //modified code
    int x;
    // print x from 1 to 5 adding 7.
    // only 1 'll be printed according to the conditions.
    for ( x = 1; x <= 5; x += 7 ) {
        printf( "%u\n", x );
    }
    //output: 1
}
*/
