/*The following code should print whether a given integer is odd or even:*/

/*
#include <stdio.h>
int main(){

    // original code

   */
/* switch ( value % 2 ) {
        case 0:
            puts( "Even integer" );
        case 1:
            puts( "Odd integer" );
    }*//*



   // modified
    int value;
    scanf("%d",&value);
    switch ( value % 2) {
        case 0:
            puts( "Even integer" );
            break;
        case 1:
            puts( "Odd integer" );
            break;
    }

}*/
