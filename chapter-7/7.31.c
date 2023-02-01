/*(Calculator Using Function Pointers) Using the techniques you learned in Fig. 7.28, create
a text-based, menu-driven program that allows the user to choose whether to add, subtract, multiply
or divide two numbers. The program should then input two double values from the user, perform
the appropriate calculation and display the result. Use an array of function pointers in which each
pointer represents a function that returns void and receives two double parameters. The corresponding
functions should each display messages indicating which calculation was performed, the
values of the parameters and the result of the calculation.*/


/*#include <stdio.h>

// Function prototypes
void add(double, double);
void subtract(double, double);
void multiply(double, double);
void divide(double, double);

int main() {

    // Array of function pointers
    void (*fun_ptr_arr[])(double, double) = {add, subtract, multiply, divide};

    int choice; // User's menu choice

    // Prompt user to enter a choice
    printf("Enter your choice: \n");
    printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");

    scanf("%d", &choice);

    // Get two numbers from the user and store them in variables num1 and num2
    double num1, num2;

    printf("Enter two numbers: \n");
    scanf("%lf %lf", &num1, &num2);

    // Call the appropriate function using the function pointer array and the user's choice
    (*fun_ptr_arr[choice-1])(num1, num2);

    return 0;
}

// Function definitions for each operation
void add(double n1, double n2) {

    printf("The sum of %.1lf and %.1lf is %.1lf\n", n1, n2, n1 + n2);
}

void subtract(double n1, double n2) {

    printf("The difference between %.1lf and %.1lf is %.1lf\n", n1, n2 ,n1 - n2);
}

void multiply(double n1, double n2) {

    printf("The product of %.1lf and %.1lf is %.1lf\n", n1 ,n2 ,n1 * n2);
}

void divide(double n1 ,double n2) {

    if (n2 == 0) {
        printf("Error: Cannot divide by zero!\n");
        return;
    }
    else {
        printf("The division of %.1lf and %.1lf is %.1lf\n", n1, n2, (double) (n1 / n2));
    }
}*/












