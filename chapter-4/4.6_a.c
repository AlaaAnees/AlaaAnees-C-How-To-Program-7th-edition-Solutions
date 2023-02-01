/*State which values of the control variable x are printed by each of the following for statements:*/

/*
#include <stdio.h>
int main(){
    //original code
    */
/*for ( x = 2; x <= 13; x += 2 ) {
        printf( "%u\n", x );
    }*//*


    //modified
    int x;
    // printing even values from 2 to 13
    for ( x = 2; x <= 13; x += 2 ) {
        printf( "%u\n", x );
    }
    // output :
    */
/*
        2
        4
        6
        8
        10
        12
        *//*

}*/
