 /*
 Write a printf or scanf statement for each of the following:
a) Print unsigned integer 40000 left justified in a 15-digit field with 8 digits.
b) Read a hexadecimal value into variable hex.
c) Print 200 with and without a sign.
d) Print 100 in hexadecimal form preceded by 0x.
 e) Read characters into array s until the letter p is encountered.
f) Print 1.234 in a 9-digit field with preceding zeros.
g) Read a time of the form hh:mm:ss, storing the parts of the time in the integer variables
hour, minute and second. Skip the colons (:) in the input stream. Use the assignment
suppression character.
h) Read a string of the form "characters" from the standard input. Store the string in
character array s. Eliminate the quotation marks from the input stream.
i) Read a time of the form hh:mm:ss, storing the parts of the time in the integer variables
hour, minute and second. Skip the colons (:) in the input stream. Do not use the assignment
suppression character.*/


/*
#include <stdio.h>
 int main(){
     //a) Print unsigned integer 40000 left justified in a 15-digit field with 8 digits.
   */
/*  unsigned int x=40000;
     printf("a %-15.8u",x);*//*







    //b) Read a hexadecimal value into variable hex.

    */
/*int hex;
     printf("Enter hexadecimal num EX 12A or 0x12A: ");
     scanf("%x",&hex);
*//*





    //c) Print 200 with and without a sign.

    */
/* printf("%u %d",200,-200);*//*







    //d) Print 100 in hexadecimal form preceded by 0x.

     */
/*printf("%#x", 100); //# concat*//*







     //e) Read characters into array s until the letter p is encountered.

     */
/*char s[20];
     printf("Enter a string: ");
     scanf("%[^p]", s);
     printf("%s", s);
*//*






     //f) Print 1.234 in a 9-digit field with preceding zeros.

     */
/*printf("%09f", 1.234);*//*









     //g) Read a time of the form hh:mm:ss, storing the parts of the time in the integer variables
     //hour, minute and second. Skip the colons (:) in the input stream. Use the assignment
     //suppression character.

    */
/* int hour, min, sec;
     printf("Enter a time in the format hh:mm:ss: ");
     scanf("%d %*c%d %*c%d", &hour, &min, &sec); //*c: read the data but do not assign it to a variable in the argument list'
     printf("hours = %d  minutes = %d  seconds = %d", hour, min, sec);
*//*







     //h) Read a string of the form "characters" from the standard input. Store the string in
     //character array s. Eliminate the quotation marks from the input stream.

 */
/*    char s1[20];
     printf("Enter a string enclosed in double quotes: ");
     scanf("\"%[^\"]", s1);
     printf("%s", s1);
*//*








     //i) Read a time of the form hh:mm:ss, storing the parts of the time in the integer variables hour,
     // minute and second. Skip the colons (:) in the input stream. Do not use the assignment suppression character.

     //assignment-suppressing character  %*c

    */
/* int hour, min, sec;
     printf("Enter a time in the format hh:mm:ss: ");
     scanf("%d:%d:%d", &hour, &min, &sec);
     printf("hours = %d  minutes = %d  seconds = %d", hour, min, sec);

*//*



 }*/
