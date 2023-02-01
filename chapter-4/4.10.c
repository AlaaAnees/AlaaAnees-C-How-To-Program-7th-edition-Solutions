/*(Average a Sequence of Integers) Write a program that calculates and prints the average of
several integers. Assume the last value read with scanf is the sentinel 9999. A typical input sequence
might be
10 8 11 7 9 9999*/

/*

#include <stdio.h>
int main(){
    int x,sum=0;
    for (int i = 0; i <6; ++i) {
        scanf("%d",&x);
        if(x==9999) break;
        sum+=x;
    }
    printf("%d",sum/5);
}*/
