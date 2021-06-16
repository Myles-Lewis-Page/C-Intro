/* 
 * File:   main.c
 * Author: Myles Page
 * Class: CS1120
 * Homework #3
 * Created on September 12, 2018, 2:24 PM
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    printf("My Name is Myles\n");
    
    int Name;
    Name = "Myles";
    printf("My name is %d\n", Name);
    
    int a;
    int b;
    int c;
    int sum;

    a = 7;
    b = 12;
    c = 19;
    sum = a + b + c;
    printf("Sum of %d + %d + %d is %d", a, b, c, sum);
    return(0);
}