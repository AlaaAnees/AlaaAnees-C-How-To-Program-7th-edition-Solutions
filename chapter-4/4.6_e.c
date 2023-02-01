/*State which values of the control variable x are printed by each of the following for statements:*/

/*
#include <stdio.h>
int main(){
//original code
   */
/* for ( x = 12; x >= 2; x -= 3 ) {
        printf( "%d\n", x );
    }*//*


   // modified code
   int x;
   //print x from 12 to 2 and minus 3 from each x generated following conditions.
    for ( x = 12; x >= 2; x -= 3 ) {
        printf( "%d\n", x );
    }
    //output:12
    //9
    //6
    //3
}
*/
