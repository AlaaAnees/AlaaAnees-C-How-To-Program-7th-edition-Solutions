/*State which values of the control variable x are printed by each of the following for statements:*/

/*
#include <stdio.h>
int main(){
// original code
  */
/*  for ( x = 3; x <= 15; x += 3 ) {
        printf( "%u\n", x );
    }
    *//*


    //modified code
    int x;
    // print x starting from x=3 adding 3 for each until 15
    for ( x = 3; x <= 15; x += 3 ) {
        printf( "%u\n", x );
    }
    //output: 3
    //6
    //9
    //12
    //15
}

*/
