/*State which values of the control variable x are printed by each of the following for statements:*/

/*
#include <stdio.h>
int main(){
//original code
   */
/* for ( x = 5; x <= 22; x += 7 ) {
        printf( "%u\n", x );
    }*//*


   //modified code
   int x;
   // print x starting from 5 adding 7 for each x until 22
    for ( x = 5; x <= 22; x += 7 ) {
        printf( "%u\n", x );
    }
    // output: 5
    //12
    //19
}
*/
