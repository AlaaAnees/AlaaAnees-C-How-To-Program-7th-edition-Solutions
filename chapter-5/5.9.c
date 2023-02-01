/*
 * (Parking Charges) A parking garage charges a $2.00 minimum fee to park for up to three
hours and an additional $0.50 per hour for each hour or part thereof over three hours. The maximum
charge for any given 24-hour period is $10.00. Assume that no car parks for longer than 24 hours
at a time. Write a program that will calculate and print the parking charges for each of three customers
who parked their cars in this garage yesterday. You should enter the hours parked for each
customer. Your program should print the results in a tabular format, and should calculate and print
the total of yesterday's receipts. The program should use the function calculateCharges to determine
the charge for each customer. Your outputs should appear in the following format:
 *
 * */

/*
#include <stdio.h>
#include <math.h>
double  calcCharges(float hours){
    if((hours-3.0)<=0) return 2.0; //up to 3 hours
    else if(hours==24.0) return 10; // max charge for a day
    else return (ceil(hours)-3)*0.5+2; //over three hours
}
int main(){
    float caroneHours,cartwoHours,carthreeHours,totalHours;
    float caroneCharge,cartwoCharge,carthreeCharge,totalCharges;

    printf("Enter car one parking hours: ");
    scanf("%f", &caroneHours);

    printf("Enter car two parking hours: ");
    scanf("%f", &cartwoHours);

    printf("Enter car three parking hours: ");
    scanf("%f", &carthreeHours);

    totalHours=caroneHours+cartwoHours+carthreeHours;

    caroneCharge= calcCharges(caroneHours);
    cartwoCharge= calcCharges(cartwoHours);
    carthreeCharge= calcCharges(carthreeHours);

    totalCharges=caroneCharge+cartwoCharge+carthreeCharge;

    printf("Car\tHours\tCharge\n");
    printf("%d\t%.1f\t%.2f\n",1, caroneHours, caroneCharge);

    printf("%d\t%.1f\t%.2f\n",2, cartwoHours, cartwoCharge);

    printf("%d\t%.1f\t%.2f\n",3, carthreeHours, carthreeCharge);


    printf("Total\t%.1f\t%.2f\n",totalHours,totalCharges);



}*/
