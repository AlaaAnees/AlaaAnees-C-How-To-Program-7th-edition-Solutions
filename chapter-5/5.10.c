
/*(Rounding Numbers) An application of function floor is rounding a value to the nearest
integer. The statement
y = floor( x + .5 );
will round the number x to the nearest integer and assign the result to y. Write a program that reads
several numbers and uses the preceding statement to round each of these numbers to the nearest
integer. For each number processed, print both the original number and the rounded number.*/


/*#include <stdio.h>
#include <math.h>
double roundFunc(double num){
    return floor(num+ 0.5);
}
int main()
{
    double x;
    printf("Enter a number: ");
    //lf --> long double
    scanf("%lf", &x);
    while (x!=-1) {
        printf("roundFunc(%.3f) = %.3f\n", x, roundFunc(x));
        if(x==-1)break;
        else{
            printf("Enter a number: ");
            scanf("%lf", &x);

        }
    }
}*/











/*
#include <stdio.h>
#include <math.h>

int main(){
    double num;
    printf("Enter a num: ");
    scanf("%f",&num);

    double y=floor(num+0.5);

    printf("Original num: %1f\n",num);
    printf("Rounded num:%1f\n",y);
}*/
