 /*
  (Calculating Sales) An online retailer sells five different products whose retail prices are
  shown in the following table:
  Write a program that reads a series of pairs of numbers as follows:
a) Product number
b) Quantity sold for one day
Your program should use a switch statement to help determine the retail price for each product.
Your program should calculate and display the total retail value of all products sold last week.*/

/*
#include <stdio.h>
 int main(){
     int product;
     float quantity,s1,s2,s3,s4,s5,total;

     printf("Enter product number: ");
     scanf("%d",&product);

     printf("Enter   quantity sold: ");
     scanf("%f", &quantity);

     while(product){
         switch (product) {
             case 1:
                 s1=quantity*2.98;
                 break;
             case 2:
                 s2=quantity*4.50;
                 break;
             case 3:
                 s3=quantity*9.98;
                 break;
             case 4:
                 s4=quantity*4.49;
                 break;
             case 5:
                 s5=quantity*6.87;
                 break;
             default:
                 printf("Invalid input");
                 break;
         }
     }
     total=s1+s2+s3+s4+s5;
     printf("Total is:%d",total);



 }*/
