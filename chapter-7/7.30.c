 /*(Calculating Circle Circumference, Circle Area or Sphere Volume Using Function Pointers)
Using the techniques you learned in Fig. 7.28, create a text-based, menu-driven program that allows
the user to choose whether to calculate the circumference of a circle, the area of a circle or the volume
of a sphere. The program should then input a radius from the user, perform the appropriate
calculation and display the result. Use an array of function pointers in which each pointer represents
a function that returns void and receives a double parameter. The corresponding functions should
each display messages indicating which calculation was performed, the value of the radius and the
result of the calculation.*/

/*#include <stdio.h>
#define PI 3.14

 void calculateCircumferenceOfCircle(double radius)
 {
     printf("The circumference of a circle with radius %.2lf is %.2lf\n\n", radius, 2 * radius);
 }

 void calculateAreaOfCircle(double radius)
 {
     printf("The area of a circle with radius %.2lf is %.2lf\n\n", radius, 2 * PI * radius);
 }

 void calculateVolumeOfSphere(double radius)
 {
     printf("The volume of a sphere with radius %.2lf is %.2lf\n\n", radius, PI * radius * radius);
 }
 int main(){

     // initialize array of 3 pointers to functions
     // returns void
     // accepts a double variable as an argument
     void (*f[3])(double) = {
             calculateCircumferenceOfCircle,
             calculateAreaOfCircle,
             calculateVolumeOfSphere
     };

     int menuSelection; // menu temp

     do
     {
         // print menu
         puts("Circle Math Menu");
         puts("0. Calculate the circumference of a circle");
         puts("1. Calculate the area of a circle");
         puts("2. Calculate the volume of a sphere");
         puts("3. Exit");

         scanf("%d", &menuSelection);

         if (menuSelection != 3){
             // input radius
             double radius;
             printf("%s", "Enter the length of the radius ");
             scanf("%lf", &radius);

             // invoke function at location from the menu and pass
             // the radius as an argument
             (*f[menuSelection])(radius);
         }

         // repeat until exit
     } while (menuSelection != 3);

     return 1;
 }*/
