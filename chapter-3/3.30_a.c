/*
problem statement :
(Dangling Else Problem) Determine the output for each of the following when x is 9 and y
is 11, and when x is 11 and y is 9. The compiler ignores the indentation in a C program. Also, the
compiler always associates an else with the previous if unless told to do otherwise by the placement
of braces {}. Because, on first glance, you may not be sure which if an else matches, this is referred
to as the “dangling else” problem. We eliminated the indentation from the following code to make
the problem more challenging. [Hint: Apply indentation conventions you have learned.]

 */

/*#include <stdio.h>
int main() {
// a
    // x=9 y=11
    // x=11 y=9

    // when x is 9 and y is 11
    // output is
    // *****
    // $$$$$
  int x = 9, y = 11;
    if (x < 10) // 9<10
        if (y > 10) // 11>10
            puts("*****"); // 'll be printed
        else
            puts("#####");
    puts("$$$$$"); // anyways 'll be printed






    // x=11 y=9
  int x =11, y = 9;
    if (x < 10) // 11<10
        if (y > 10) // 9>10
            puts("*****"); // won't be printed
        else
            puts("#####"); //won't be printed cause we didn't go inside the if from the beginning.
    puts("$$$$$"); // anyways 'll be printed


}*/
