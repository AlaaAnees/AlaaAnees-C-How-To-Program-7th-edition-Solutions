
/*For each of the following sets of integers, write a single statement that will print a number
at random from the set.
a) 2, 4, 6, 8, 10.
b) 3, 5, 7, 9, 11.
c) 6, 10, 14, 18, 22.*/

/*
#include <stdio.h>
#include<stdlib.h>
int main(){
    // Each element in {3,5,7,9,11} is the corresponding element in {2,4,6,8,10} plus one.
    //Each element in {6,10,14,18,22} is the corresponding element in {3,5,7,9,11} multiplied by two.

    //a) 2, 4, 6, 8, 10.
    printf("%d\n",((1 + (rand() % 5)) * 2));
    //b) 3, 5, 7, 9, 11.
    printf("%d\n",((1 + (rand() % 5)) * 2)+1);
    //c) 6, 10, 14, 18, 22.
    printf("%d\n",(((1 + (rand() % 5)) * 2)+1)*2);

}
*/
